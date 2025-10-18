#include "jit.h"

#ifdef ENABLE_LLVM_JIT

#include <cstdio>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include <llvm/ExecutionEngine/Orc/LLJIT.h>
#include <llvm/ExecutionEngine/Orc/ThreadSafeModule.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/Support/Error.h>
#include <llvm/Support/FormatVariadic.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Support/raw_ostream.h>

using namespace llvm;
using namespace llvm::orc;

namespace {

constexpr size_t kMaxBlockInstrs = 8;

struct DecodedInst {
    dec_t dec;
    uint32_t raw;
    uint64_t pc;
    uint64_t next_pc;
};

struct BlockEntry {
    JITTargetAddress func_addr = 0;
    uint64_t length = 0;
};

struct JitState {
    std::unique_ptr<LLJIT> jit;
    std::mutex mutex;
    std::unordered_map<uint64_t, BlockEntry> cache;
    uint64_t next_block_id = 0;
};

static std::unique_ptr<JitState> g_state;

using BlockFunc = uint64_t (*)(cpu_t *, mem_t *, devices_t *);

static void logError(Error err) {
    if (!err) {
        return;
    }
    std::string msg;
    raw_string_ostream os(msg);
    logAllUnhandledErrors(std::move(err), os, "LLVM JIT error: ");
    os.flush();
    std::fputs(msg.c_str(), stderr);
}

static bool ensureTargetInitialized() {
    static bool initialized = false;
    if (initialized) {
        return true;
    }
    if (InitializeNativeTarget()) {
        std::fputs("LLVM JIT error: failed to initialize native target\n", stderr);
        return false;
    }
    if (InitializeNativeTargetAsmPrinter()) {
        std::fputs("LLVM JIT error: failed to initialize native asm printer\n", stderr);
        return false;
    }
    initialized = true;
    return true;
}

static bool isInstructionSupported(const dec_t &d) {
    switch (d.opcode) {
        case 0x37: // LUI
        case 0x17: // AUIPC
        case 0x6F: // JAL
            return true;
        case 0x67: // JALR
            return d.funct3 == 0;
        case 0x63: { // BRANCH
            switch (d.funct3) {
                case 0: // BEQ
                case 1: // BNE
                case 4: // BLT
                case 5: // BGE
                case 6: // BLTU
                case 7: // BGEU
                    return true;
                default:
                    return false;
            }
        }
        case 0x03: { // LOAD
            switch (d.funct3) {
                case 0: // LB
                case 1: // LH
                case 2: // LW
                case 3: // LD
                case 4: // LBU
                case 5: // LHU
                case 6: // LWU
                    return true;
                default:
                    return false;
            }
        }
        case 0x23: { // STORE
            switch (d.funct3) {
                case 0: // SB
                case 1: // SH
                case 2: // SW
                case 3: // SD
                    return true;
                default:
                    return false;
            }
        }
        case 0x13: { // OP-IMM
            switch (d.funct3) {
                case 0: // ADDI
                case 2: // SLTI
                case 3: // SLTIU
                case 4: // XORI
                case 6: // ORI
                case 7: // ANDI
                    return true;
                case 1: // SLLI
                case 5: // SRLI/SRAI
                    return true;
                default:
                    return false;
            }
        }
        case 0x1B: { // OP-IMM-32
            switch (d.funct3) {
                case 0: // ADDIW
                case 1: // SLLIW
                case 5: // SRLIW/SRAIW
                    return true;
                default:
                    return false;
            }
        }
        case 0x3B: { // OP-32
            if (d.funct7 == 0x01) { // M-extension
                switch (d.funct3) {
                    case 0: // MULW
                    case 4: // DIVW
                    case 5: // DIVUW
                    case 6: // REMW
                    case 7: // REMUW
                        return true;
                    default:
                        return false;
                }
            }
            switch (d.funct3) {
                case 0: // ADDW/SUBW
                    return d.funct7 == 0x00 || d.funct7 == 0x20;
                case 1: // SLLW
                    return d.funct7 == 0x00;
                case 5: // SRLW/SRAW
                    return d.funct7 == 0x00 || d.funct7 == 0x20;
                default:
                    return false;
            }
        }
        case 0x33: { // OP
            if (d.funct7 == 0x01) { // M-extension
                switch (d.funct3) {
                    case 0: // MUL
                    case 1: // MULH
                    case 2: // MULHSU
                    case 3: // MULHU
                    case 4: // DIV
                    case 5: // DIVU
                    case 6: // REM
                    case 7: // REMU
                        return true;
                    default:
                        return false;
                }
            }
            switch (d.funct3) {
                case 0: // ADD/SUB
                    return d.funct7 == 0x00 || d.funct7 == 0x20;
                case 1: // SLL
                case 2: // SLT
                case 3: // SLTU
                case 4: // XOR
                case 6: // OR
                case 7: // AND
                    return d.funct7 == 0x00;
                case 5: // SRL/SRA
                    return d.funct7 == 0x00 || d.funct7 == 0x20;
                default:
                    return false;
            }
        }
        default:
            return false;
    }
}

static bool gatherBlock(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t start_pc,
                        std::vector<DecodedInst> &out) {
    out.clear();
    uint64_t current_pc = start_pc;
    for (size_t i = 0; i < kMaxBlockInstrs; ++i) {
        dec_t dec = {};
        uint64_t next_pc = 0;
        uint32_t raw = 0;
        if (!fetch_and_decode(cpu, mem, dev, current_pc, &dec, &next_pc, &raw, nullptr)) {
            break;
        }
        if (!isInstructionSupported(dec)) {
            break;
        }
        out.push_back(DecodedInst{dec, raw, current_pc, next_pc});
        if (next_pc == current_pc) {
            break;
        }
        if (dec.opcode == 0x6F || dec.opcode == 0x67 || dec.opcode == 0x63) {
            break;
        }
        current_pc = next_pc;
    }
    return !out.empty();
}

static std::optional<BlockEntry> compileBlock(cpu_t *cpu, mem_t *mem, devices_t *dev,
                                              uint64_t start_pc, uint64_t block_id) {
    std::vector<DecodedInst> insts;
    insts.reserve(kMaxBlockInstrs);
    if (!gatherBlock(cpu, mem, dev, start_pc, insts)) {
        return std::nullopt;
    }

    auto ctx = std::make_unique<LLVMContext>();
    auto module_name = formatv("rv64_block_{0:x}_{1}", start_pc, block_id).str();
    auto module = std::make_unique<Module>(module_name, *ctx);
    module->setDataLayout(g_state->jit->getDataLayout());
    IRBuilder<> builder(*ctx);

    Type *int8Ty = Type::getInt8Ty(*ctx);
    Type *int16Ty = Type::getInt16Ty(*ctx);
    Type *int32Ty = Type::getInt32Ty(*ctx);
    Type *int64Ty = Type::getInt64Ty(*ctx);
    Type *int128Ty = IntegerType::get(*ctx, 128);
    Type *voidTy = Type::getVoidTy(*ctx);
    Type *voidPtrTy = PointerType::get(*ctx, 0);

    FunctionType *fnType = FunctionType::get(int64Ty, {voidPtrTy, voidPtrTy, voidPtrTy}, false);
    Function *fn = Function::Create(fnType, Function::ExternalLinkage, module_name, module.get());
    BasicBlock *entryBB = BasicBlock::Create(*ctx, "entry", fn);
    builder.SetInsertPoint(entryBB);

    auto argIt = fn->arg_begin();
    Value *cpuArg = argIt++;
    Value *memArg = argIt++;
    Value *devArg = argIt++;

    FunctionCallee getRegFn = module->getOrInsertFunction(
        "jit_cpu_get_reg", FunctionType::get(int64Ty, {voidPtrTy, int32Ty}, false));
    FunctionCallee setRegFn = module->getOrInsertFunction(
        "jit_cpu_set_reg", FunctionType::get(voidTy, {voidPtrTy, int32Ty, int64Ty}, false));
    FunctionCallee setPcFn = module->getOrInsertFunction(
        "jit_cpu_set_pc", FunctionType::get(voidTy, {voidPtrTy, int64Ty}, false));
    FunctionCallee getPcFn = module->getOrInsertFunction(
        "jit_cpu_get_pc", FunctionType::get(int64Ty, {voidPtrTy}, false));
    FunctionCallee forceX0Fn = module->getOrInsertFunction(
        "jit_cpu_force_x0_zero", FunctionType::get(voidTy, {voidPtrTy}, false));
    FunctionCallee checkTrapFn = module->getOrInsertFunction(
        "jit_cpu_check_trap", FunctionType::get(Type::getInt1Ty(*ctx), {voidPtrTy}, false));

    FunctionCallee vmemRead8Fn = module->getOrInsertFunction(
        "vmem_read8", FunctionType::get(int8Ty, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int32Ty}, false));
    FunctionCallee vmemRead16Fn = module->getOrInsertFunction(
        "vmem_read16", FunctionType::get(int16Ty, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int32Ty}, false));
    FunctionCallee vmemRead32Fn = module->getOrInsertFunction(
        "vmem_read32", FunctionType::get(int32Ty, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int32Ty}, false));
    FunctionCallee vmemRead64Fn = module->getOrInsertFunction(
        "vmem_read64", FunctionType::get(int64Ty, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int32Ty}, false));
    FunctionCallee vmemWrite8Fn = module->getOrInsertFunction(
        "vmem_write8", FunctionType::get(voidTy, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int8Ty, int32Ty}, false));
    FunctionCallee vmemWrite16Fn = module->getOrInsertFunction(
        "vmem_write16", FunctionType::get(voidTy, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int16Ty, int32Ty}, false));
    FunctionCallee vmemWrite32Fn = module->getOrInsertFunction(
        "vmem_write32", FunctionType::get(voidTy, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int32Ty, int32Ty}, false));
    FunctionCallee vmemWrite64Fn = module->getOrInsertFunction(
        "vmem_write64", FunctionType::get(voidTy, {voidPtrTy, voidPtrTy, voidPtrTy, int64Ty, int64Ty, int32Ty}, false));

    auto constI32 = [&](uint32_t v) { return ConstantInt::get(int32Ty, v); };
    auto constI32Signed = [&](int32_t v) { return ConstantInt::get(int32Ty, v, true); };
    auto constI64 = [&](int64_t v) { return ConstantInt::get(int64Ty, v, true); };
    auto constU64 = [&](uint64_t v) { return ConstantInt::get(int64Ty, v, false); };
    auto constI128 = [&](uint64_t v) { return ConstantInt::get(int128Ty, v); };

    Value *accessLoad = constI32(static_cast<uint32_t>(ACCESS_LOAD));
    Value *accessStore = constI32(static_cast<uint32_t>(ACCESS_STORE));
    Value *zero64 = constU64(0);
    Value *one64 = constU64(1);
    Value *negOne64 = constI64(-1);
    Value *int64Min = constU64(0x8000000000000000ULL);
    Value *zero32 = constI32(0);
    Value *one32 = constI32(1);
    Value *negOne32 = constI32Signed(-1);
    Value *int32Min = constI32Signed(static_cast<int32_t>(0x80000000u));
    Value *shift64 = constI128(64);
    Value *finalPcConst = constU64(insts.back().next_pc);
    Value *startPcConst = constU64(start_pc);

    bool pcUpdated = false;
    bool earlyExit = false;
    std::vector<std::pair<BasicBlock *, Value *>> exitCounts;
    BasicBlock *sequentialTerminator = nullptr;

    BasicBlock *afterBB = BasicBlock::Create(*ctx, "block.after", fn);

    for (size_t idx = 0; idx < insts.size(); ++idx) {
        const auto &inst = insts[idx];
        bool isLast = (idx + 1) == insts.size();
        const dec_t &d = inst.dec;
        bool instChangesPc = false;
        switch (d.opcode) {
            case 0x37: { // LUI
                Value *rdIdx = constI32(d.rd);
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, constU64(static_cast<uint64_t>(d.imm_u))});
                break;
            }
            case 0x17: { // AUIPC
                Value *rdIdx = constI32(d.rd);
                uint64_t value = inst.pc + static_cast<uint64_t>(d.imm_u);
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, constU64(value)});
                break;
            }
            case 0x6F: { // JAL
                Value *rdIdx = constI32(d.rd);
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, constU64(inst.next_pc)});
                uint64_t target = inst.pc + static_cast<int64_t>(d.imm_j);
                builder.CreateCall(setPcFn, {cpuArg, constU64(target)});
                pcUpdated = true;
                instChangesPc = true;
                break;
            }
            case 0x67: { // JALR
                Value *rdIdx = constI32(d.rd);
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, constU64(inst.next_pc)});
                Value *target = builder.CreateAdd(rs1, constI64(d.imm_i));
                Value *masked = builder.CreateAnd(target, constU64(~1ULL));
                builder.CreateCall(setPcFn, {cpuArg, masked});
                pcUpdated = true;
                instChangesPc = true;
                break;
            }
            case 0x63: { // BRANCH
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *rs2 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs2)});
                Value *cond = nullptr;
                switch (d.funct3) {
                    case 0: cond = builder.CreateICmpEQ(rs1, rs2); break;         // BEQ
                    case 1: cond = builder.CreateICmpNE(rs1, rs2); break;         // BNE
                    case 4: cond = builder.CreateICmpSLT(rs1, rs2); break;        // BLT
                    case 5: cond = builder.CreateICmpSGE(rs1, rs2); break;        // BGE
                    case 6: cond = builder.CreateICmpULT(rs1, rs2); break;        // BLTU
                    case 7: cond = builder.CreateICmpUGE(rs1, rs2); break;        // BGEU
                    default: return std::nullopt;
                }
                uint64_t target = inst.pc + static_cast<int64_t>(d.imm_b);
                Value *pcVal = builder.CreateSelect(cond, constU64(target), constU64(inst.next_pc));
                builder.CreateCall(setPcFn, {cpuArg, pcVal});
                pcUpdated = true;
                instChangesPc = true;
                break;
            }
            case 0x03: { // LOAD
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *addr = builder.CreateAdd(rs1, constI64(d.imm_i));
                Value *rdIdx = constI32(d.rd);
                Value *loaded = nullptr;
                switch (d.funct3) {
                    case 0: { // LB
                        Value *val = builder.CreateCall(vmemRead8Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        loaded = builder.CreateSExt(val, int64Ty);
                        break;
                    }
                    case 1: { // LH
                        Value *val = builder.CreateCall(vmemRead16Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        loaded = builder.CreateSExt(val, int64Ty);
                        break;
                    }
                    case 2: { // LW
                        Value *val = builder.CreateCall(vmemRead32Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        loaded = builder.CreateSExt(val, int64Ty);
                        break;
                    }
                    case 3: { // LD
                        loaded = builder.CreateCall(vmemRead64Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        break;
                    }
                    case 4: { // LBU
                        Value *val = builder.CreateCall(vmemRead8Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        loaded = builder.CreateZExt(val, int64Ty);
                        break;
                    }
                    case 5: { // LHU
                        Value *val = builder.CreateCall(vmemRead16Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        loaded = builder.CreateZExt(val, int64Ty);
                        break;
                    }
                    case 6: { // LWU
                        Value *val = builder.CreateCall(vmemRead32Fn, {cpuArg, memArg, devArg, addr, accessLoad});
                        loaded = builder.CreateZExt(val, int64Ty);
                        break;
                    }
                    default:
                        return std::nullopt;
                }
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, loaded});

                // Check if trap occurred during load
                Value *trapOccurred = builder.CreateCall(checkTrapFn, {cpuArg});
                BasicBlock *trapBB = BasicBlock::Create(*ctx, formatv("load.trap_{0}", idx).str(), fn);
                BasicBlock *noTrapBB = BasicBlock::Create(*ctx, formatv("load.notrap_{0}", idx).str(), fn);
                builder.CreateCondBr(trapOccurred, trapBB, noTrapBB);

                // If trap occurred, exit early
                builder.SetInsertPoint(trapBB);
                builder.CreateBr(afterBB);
                exitCounts.emplace_back(trapBB, constU64(idx + 1));

                // Continue with next instruction
                builder.SetInsertPoint(noTrapBB);
                if (isLast) {
                    sequentialTerminator = noTrapBB;
                }
                break;
            }
            case 0x23: { // STORE
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *rs2 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs2)});
                Value *addr = builder.CreateAdd(rs1, constI64(d.imm_s));
                switch (d.funct3) {
                    case 0: { // SB
                        Value *val = builder.CreateTrunc(rs2, int8Ty);
                        builder.CreateCall(vmemWrite8Fn, {cpuArg, memArg, devArg, addr, val, accessStore});
                        break;
                    }
                    case 1: { // SH
                        Value *val = builder.CreateTrunc(rs2, int16Ty);
                        builder.CreateCall(vmemWrite16Fn, {cpuArg, memArg, devArg, addr, val, accessStore});
                        break;
                    }
                    case 2: { // SW
                        Value *val = builder.CreateTrunc(rs2, int32Ty);
                        builder.CreateCall(vmemWrite32Fn, {cpuArg, memArg, devArg, addr, val, accessStore});
                        break;
                    }
                    case 3: { // SD
                        builder.CreateCall(vmemWrite64Fn, {cpuArg, memArg, devArg, addr, rs2, accessStore});
                        break;
                    }
                    default:
                        return std::nullopt;
                }

                // Check if trap occurred during store
                Value *trapOccurred = builder.CreateCall(checkTrapFn, {cpuArg});
                BasicBlock *trapBB = BasicBlock::Create(*ctx, formatv("store.trap_{0}", idx).str(), fn);
                BasicBlock *noTrapBB = BasicBlock::Create(*ctx, formatv("store.notrap_{0}", idx).str(), fn);
                builder.CreateCondBr(trapOccurred, trapBB, noTrapBB);

                // If trap occurred, exit early
                builder.SetInsertPoint(trapBB);
                builder.CreateBr(afterBB);
                exitCounts.emplace_back(trapBB, constU64(idx + 1));

                // Continue with next instruction
                builder.SetInsertPoint(noTrapBB);
                if (isLast) {
                    sequentialTerminator = noTrapBB;
                }
                break;
            }
            case 0x13: { // OP-IMM
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *rdIdx = constI32(d.rd);
                Value *result = nullptr;
                switch (d.funct3) {
                    case 0: // ADDI
                        result = builder.CreateAdd(rs1, constI64(d.imm_i));
                        break;
                    case 2: { // SLTI
                        Value *cmp = builder.CreateICmpSLT(rs1, constI64(d.imm_i));
                        result = builder.CreateSelect(cmp, constU64(1), constU64(0));
                        break;
                    }
                    case 3: { // SLTIU
                        Value *cmp = builder.CreateICmpULT(rs1, constU64(static_cast<uint64_t>(d.imm_i)));
                        result = builder.CreateSelect(cmp, constU64(1), constU64(0));
                        break;
                    }
                    case 4: // XORI
                        result = builder.CreateXor(rs1, constU64(static_cast<uint64_t>(d.imm_i)));
                        break;
                    case 6: // ORI
                        result = builder.CreateOr(rs1, constU64(static_cast<uint64_t>(d.imm_i)));
                        break;
                    case 7: // ANDI
                        result = builder.CreateAnd(rs1, constU64(static_cast<uint64_t>(d.imm_i)));
                        break;
                    case 1: { // SLLI
                        uint64_t sh = static_cast<uint64_t>(d.imm_i) & 0x3f;
                        result = builder.CreateShl(rs1, constU64(sh));
                        break;
                    }
                    case 5: { // SRLI / SRAI
                        uint64_t sh = static_cast<uint64_t>(d.imm_i) & 0x3f;
                        if ((d.imm_i & (1 << 10)) == 0) {
                            result = builder.CreateLShr(rs1, constU64(sh));
                        } else {
                            result = builder.CreateAShr(rs1, constU64(sh));
                        }
                        break;
                    }
                    default:
                        return std::nullopt;
                }
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, result});
                break;
            }
            case 0x1B: { // OP-IMM-32
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *rdIdx = constI32(d.rd);
                Value *rs1_32 = builder.CreateTrunc(rs1, int32Ty);
                Value *result32 = nullptr;
                switch (d.funct3) {
                    case 0: { // ADDIW
                        Value *imm32 = constI32Signed(static_cast<int32_t>(d.imm_i));
                        result32 = builder.CreateAdd(rs1_32, imm32);
                        break;
                    }
                    case 1: { // SLLIW
                        uint32_t sh = static_cast<uint32_t>(d.imm_i) & 0x1f;
                        result32 = builder.CreateShl(rs1_32, constI32(sh));
                        break;
                    }
                    case 5: { // SRLIW / SRAIW
                        uint32_t sh = static_cast<uint32_t>(d.imm_i) & 0x1f;
                        if ((d.imm_i & (1 << 10)) == 0) {
                            result32 = builder.CreateLShr(rs1_32, constI32(sh));
                        } else {
                            result32 = builder.CreateAShr(rs1_32, constI32(sh));
                        }
                        break;
                    }
                    default:
                        return std::nullopt;
                }
                Value *result = builder.CreateSExt(result32, int64Ty);
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, result});
                break;
            }
            case 0x33: { // OP
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *rs2 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs2)});
                Value *rdIdx = constI32(d.rd);
                Value *result = nullptr;
                if (d.funct7 == 0x01) {
                    switch (d.funct3) {
                        case 0: { // MUL
                            result = builder.CreateMul(rs1, rs2);
                            break;
                        }
                        case 1: { // MULH
                            Value *a128 = builder.CreateSExt(rs1, int128Ty);
                            Value *b128 = builder.CreateSExt(rs2, int128Ty);
                            Value *prod = builder.CreateMul(a128, b128);
                            Value *high = builder.CreateAShr(prod, shift64);
                            result = builder.CreateTrunc(high, int64Ty);
                            break;
                        }
                        case 2: { // MULHSU
                            Value *a128 = builder.CreateSExt(rs1, int128Ty);
                            Value *b128 = builder.CreateZExt(rs2, int128Ty);
                            Value *prod = builder.CreateMul(a128, b128);
                            Value *high = builder.CreateAShr(prod, shift64);
                            result = builder.CreateTrunc(high, int64Ty);
                            break;
                        }
                        case 3: { // MULHU
                            Value *a128 = builder.CreateZExt(rs1, int128Ty);
                            Value *b128 = builder.CreateZExt(rs2, int128Ty);
                            Value *prod = builder.CreateMul(a128, b128);
                            Value *high = builder.CreateLShr(prod, shift64);
                            result = builder.CreateTrunc(high, int64Ty);
                            break;
                        }
                        case 4: { // DIV
                            Value *divZero = builder.CreateICmpEQ(rs2, zero64);
                            Value *safeDivisor = builder.CreateSelect(divZero, one64, rs2);
                            Value *quot = builder.CreateSDiv(rs1, safeDivisor);
                            Value *overflow = builder.CreateAnd(
                                builder.CreateICmpEQ(rs1, int64Min),
                                builder.CreateICmpEQ(rs2, negOne64));
                            Value *overflowSel = builder.CreateSelect(overflow, int64Min, quot);
                            result = builder.CreateSelect(divZero, negOne64, overflowSel);
                            break;
                        }
                        case 5: { // DIVU
                            Value *divZero = builder.CreateICmpEQ(rs2, zero64);
                            Value *safeDivisor = builder.CreateSelect(divZero, one64, rs2);
                            Value *quot = builder.CreateUDiv(rs1, safeDivisor);
                            result = builder.CreateSelect(divZero, negOne64, quot);
                            break;
                        }
                        case 6: { // REM
                            Value *divZero = builder.CreateICmpEQ(rs2, zero64);
                            Value *safeDivisor = builder.CreateSelect(divZero, one64, rs2);
                            Value *rem = builder.CreateSRem(rs1, safeDivisor);
                            Value *overflow = builder.CreateAnd(
                                builder.CreateICmpEQ(rs1, int64Min),
                                builder.CreateICmpEQ(rs2, negOne64));
                            Value *overflowSel = builder.CreateSelect(overflow, zero64, rem);
                            result = builder.CreateSelect(divZero, rs1, overflowSel);
                            break;
                        }
                        case 7: { // REMU
                            Value *divZero = builder.CreateICmpEQ(rs2, zero64);
                            Value *safeDivisor = builder.CreateSelect(divZero, one64, rs2);
                            Value *rem = builder.CreateURem(rs1, safeDivisor);
                            result = builder.CreateSelect(divZero, rs1, rem);
                            break;
                        }
                        default:
                            return std::nullopt;
                    }
                } else {
                    switch (d.funct3) {
                        case 0: // ADD/SUB
                            if (d.funct7 == 0x00) {
                                result = builder.CreateAdd(rs1, rs2);
                            } else if (d.funct7 == 0x20) {
                                result = builder.CreateSub(rs1, rs2);
                            } else {
                                return std::nullopt;
                            }
                            break;
                        case 1: { // SLL
                            Value *sh = builder.CreateAnd(rs2, constU64(0x3f));
                            result = builder.CreateShl(rs1, sh);
                            break;
                        }
                        case 2: { // SLT
                            Value *cmp = builder.CreateICmpSLT(rs1, rs2);
                            result = builder.CreateSelect(cmp, constU64(1), constU64(0));
                            break;
                        }
                        case 3: { // SLTU
                            Value *cmp = builder.CreateICmpULT(rs1, rs2);
                            result = builder.CreateSelect(cmp, constU64(1), constU64(0));
                            break;
                        }
                        case 4: // XOR
                            result = builder.CreateXor(rs1, rs2);
                            break;
                        case 5: // SRL/SRA
                            if (d.funct7 == 0x00) {
                                Value *sh = builder.CreateAnd(rs2, constU64(0x3f));
                                result = builder.CreateLShr(rs1, sh);
                            } else if (d.funct7 == 0x20) {
                                Value *sh = builder.CreateAnd(rs2, constU64(0x3f));
                                result = builder.CreateAShr(rs1, sh);
                            } else {
                                return std::nullopt;
                            }
                            break;
                        case 6: // OR
                            result = builder.CreateOr(rs1, rs2);
                            break;
                        case 7: // AND
                            result = builder.CreateAnd(rs1, rs2);
                            break;
                        default:
                            return std::nullopt;
                    }
                }
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, result});
                break;
            }
            case 0x3B: { // OP-32
                Value *rs1 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs1)});
                Value *rs2 = builder.CreateCall(getRegFn, {cpuArg, constI32(d.rs2)});
                Value *rdIdx = constI32(d.rd);
                Value *rs1_32 = builder.CreateTrunc(rs1, int32Ty);
                Value *rs2_32 = builder.CreateTrunc(rs2, int32Ty);
                Value *result32 = nullptr;
                if (d.funct7 == 0x01) {
                    switch (d.funct3) {
                        case 0: { // MULW
                            result32 = builder.CreateMul(rs1_32, rs2_32);
                            break;
                        }
                        case 4: { // DIVW
                            Value *divZero = builder.CreateICmpEQ(rs2_32, zero32);
                            Value *safeDivisor = builder.CreateSelect(divZero, one32, rs2_32);
                            Value *quot = builder.CreateSDiv(rs1_32, safeDivisor);
                            Value *overflow = builder.CreateAnd(
                                builder.CreateICmpEQ(rs1_32, int32Min),
                                builder.CreateICmpEQ(rs2_32, negOne32));
                            Value *overflowSel = builder.CreateSelect(overflow, int32Min, quot);
                            result32 = builder.CreateSelect(divZero, negOne32, overflowSel);
                            break;
                        }
                        case 5: { // DIVUW
                            Value *divZero = builder.CreateICmpEQ(rs2_32, zero32);
                            Value *safeDivisor = builder.CreateSelect(divZero, one32, rs2_32);
                            Value *quot = builder.CreateUDiv(rs1_32, safeDivisor);
                            result32 = builder.CreateSelect(divZero, negOne32, quot);
                            break;
                        }
                        case 6: { // REMW
                            Value *divZero = builder.CreateICmpEQ(rs2_32, zero32);
                            Value *safeDivisor = builder.CreateSelect(divZero, one32, rs2_32);
                            Value *rem = builder.CreateSRem(rs1_32, safeDivisor);
                            Value *overflow = builder.CreateAnd(
                                builder.CreateICmpEQ(rs1_32, int32Min),
                                builder.CreateICmpEQ(rs2_32, negOne32));
                            Value *overflowSel = builder.CreateSelect(overflow, zero32, rem);
                            result32 = builder.CreateSelect(divZero, rs1_32, overflowSel);
                            break;
                        }
                        case 7: { // REMUW
                            Value *divZero = builder.CreateICmpEQ(rs2_32, zero32);
                            Value *safeDivisor = builder.CreateSelect(divZero, one32, rs2_32);
                            Value *rem = builder.CreateURem(rs1_32, safeDivisor);
                            result32 = builder.CreateSelect(divZero, rs1_32, rem);
                            break;
                        }
                        default:
                            return std::nullopt;
                    }
                } else {
                    switch (d.funct3) {
                        case 0: { // ADDW/SUBW
                            if (d.funct7 == 0x00) {
                                result32 = builder.CreateAdd(rs1_32, rs2_32);
                            } else if (d.funct7 == 0x20) {
                                result32 = builder.CreateSub(rs1_32, rs2_32);
                            } else {
                                return std::nullopt;
                            }
                            break;
                        }
                        case 1: { // SLLW
                            Value *sh = builder.CreateAnd(rs2_32, constI32(0x1f));
                            result32 = builder.CreateShl(rs1_32, sh);
                            break;
                        }
                        case 5: { // SRLW/SRAW
                            Value *sh = builder.CreateAnd(rs2_32, constI32(0x1f));
                            if (d.funct7 == 0x00) {
                                result32 = builder.CreateLShr(rs1_32, sh);
                            } else if (d.funct7 == 0x20) {
                                result32 = builder.CreateAShr(rs1_32, sh);
                            } else {
                                return std::nullopt;
                            }
                            break;
                        }
                        default:
                            return std::nullopt;
                    }
                }
                Value *result = builder.CreateSExt(result32, int64Ty);
                builder.CreateCall(setRegFn, {cpuArg, rdIdx, result});
                break;
            }
            default:
                return std::nullopt;
        }

        if (instChangesPc) {
            BasicBlock *curBlock = builder.GetInsertBlock();
            builder.CreateBr(afterBB);
            exitCounts.emplace_back(curBlock, constU64(idx + 1));
            builder.SetInsertPoint(afterBB);
            earlyExit = true;
            break;
        }

        // No PC checking for non-PC-changing instructions
        // Just continue to the next instruction
        if (isLast) {
            sequentialTerminator = builder.GetInsertBlock();
        }
    }

    if (!earlyExit && !insts.empty() && sequentialTerminator) {
        builder.CreateBr(afterBB);
        exitCounts.emplace_back(sequentialTerminator, constU64(insts.size()));
        builder.SetInsertPoint(afterBB);
    }

    builder.SetInsertPoint(afterBB);

    if (exitCounts.empty()) {
        builder.CreateCall(forceX0Fn, {cpuArg});
        builder.CreateRet(constU64(0));
    } else {
        PHINode *executedPhi = builder.CreatePHI(int64Ty, static_cast<unsigned int>(exitCounts.size()));
        for (const auto &info : exitCounts) {
            executedPhi->addIncoming(info.second, info.first);
        }

        if (!pcUpdated) {
            Value *fullBlockExecuted = builder.CreateICmpEQ(executedPhi, constU64(insts.size()));
            BasicBlock *setPcBB = BasicBlock::Create(*ctx, "set.pc", fn);
            BasicBlock *postSetPcBB = BasicBlock::Create(*ctx, "post.set.pc", fn);
            builder.CreateCondBr(fullBlockExecuted, setPcBB, postSetPcBB);

            builder.SetInsertPoint(setPcBB);
            builder.CreateCall(setPcFn, {cpuArg, finalPcConst});
            builder.CreateBr(postSetPcBB);

            builder.SetInsertPoint(postSetPcBB);
        }

        builder.CreateCall(forceX0Fn, {cpuArg});
        builder.CreateRet(executedPhi);
    }

    ThreadSafeModule tsm(std::move(module), std::move(ctx));
    if (auto err = g_state->jit->addIRModule(std::move(tsm))) {
        logError(std::move(err));
        return std::nullopt;
    }

    auto sym = g_state->jit->lookup(module_name);
    if (!sym) {
        logError(sym.takeError());
        return std::nullopt;
    }

    BlockEntry entry;
    entry.func_addr = sym->getValue();
    entry.length = insts.size();
    return entry;
}

} // namespace

bool jit_backend_available(void) {
    return true;
}

bool jit_backend_init(void) {
    if (g_state) {
        return true;
    }
    if (!ensureTargetInitialized()) {
        return false;
    }
    auto expectedJit = LLJITBuilder().create();
    if (!expectedJit) {
        logError(expectedJit.takeError());
        return false;
    }
    g_state = std::make_unique<JitState>();
    g_state->jit = std::move(*expectedJit);
    return true;
}

void jit_backend_shutdown(void) {
    g_state.reset();
}

uint64_t jit_backend_step(cpu_t *cpu, mem_t *mem, devices_t *dev, const run_opts_t *opt) {
    (void)opt;
    if (!g_state) {
        return 0;
    }
    uint64_t pc = cpu->pc;
    BlockEntry entry;
    {
        std::lock_guard<std::mutex> lock(g_state->mutex);
        auto it = g_state->cache.find(pc);
        if (it != g_state->cache.end()) {
            entry = it->second;
        } else {
            uint64_t block_id = g_state->next_block_id++;
            auto compiled = compileBlock(cpu, mem, dev, pc, block_id);
            if (!compiled) {
                return 0;
            }
            entry = *compiled;
            g_state->cache.emplace(pc, entry);
        }
    }

    if (entry.func_addr == 0) {
        return 0;
    }

    auto fn = reinterpret_cast<BlockFunc>(entry.func_addr);
    return fn(cpu, mem, dev);
}

void jit_backend_invalidate(uint64_t addr, uint64_t size) {
    if (!g_state) {
        return;
    }
    std::lock_guard<std::mutex> lock(g_state->mutex);
    if (size == 0) {
        g_state->cache.clear();
        return;
    }
    uint64_t end = addr + size;
    for (auto it = g_state->cache.begin(); it != g_state->cache.end();) {
        uint64_t pc = it->first;
        uint64_t length = it->second.length;
        uint64_t block_end = pc + (length * 4);
        if (!(block_end <= addr || pc >= end)) {
            it = g_state->cache.erase(it);
        } else {
            ++it;
        }
    }
}

#endif // ENABLE_LLVM_JIT
