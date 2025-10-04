// RISC-V to ARM64 JIT compiler
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <pthread.h>
#include <libkern/OSCacheControl.h>
#include "jit.h"

// decode and vmem_read32 are now declared in jit.h

// Forward declare ALL ARM64 emitters from jit_cache.c
void emit_add_reg(uint8_t **code, int rd, int rn, int rm);
void emit_sub_reg(uint8_t **code, int rd, int rn, int rm);
void emit_add_imm(uint8_t **code, int rd, int rn, uint32_t imm12);
void emit_sub_imm(uint8_t **code, int rd, int rn, uint32_t imm12);
void emit_and_reg(uint8_t **code, int rd, int rn, int rm);
void emit_orr_reg(uint8_t **code, int rd, int rn, int rm);
void emit_eor_reg(uint8_t **code, int rd, int rn, int rm);
void emit_lsl_reg(uint8_t **code, int rd, int rn, int rm);
void emit_lsr_reg(uint8_t **code, int rd, int rn, int rm);
void emit_asr_reg(uint8_t **code, int rd, int rn, int rm);
void emit_movz(uint8_t **code, int rd, uint32_t imm16, int shift);
void emit_movk(uint8_t **code, int rd, uint32_t imm16, int shift);
void emit_load_imm64(uint8_t **code, int rd, uint64_t imm);
void emit_ret(uint8_t **code);
void emit_nop(uint8_t **code);
void emit_mov_reg(uint8_t **code, int rd, int rn);
void emit_cmp_reg(uint8_t **code, int rn, int rm);
void emit_bcond(uint8_t **code, int cond, int32_t offset);
void emit_b(uint8_t **code, int32_t offset);
void emit_add_reg_32(uint8_t **code, int rd, int rn, int rm);
void emit_sub_reg_32(uint8_t **code, int rd, int rn, int rm);
void emit_add_imm_32(uint8_t **code, int rd, int rn, uint32_t imm12);
void emit_sub_imm_32(uint8_t **code, int rd, int rn, uint32_t imm12);
void emit_lsl_reg_32(uint8_t **code, int rd, int rn, int rm);
void emit_lsr_reg_32(uint8_t **code, int rd, int rn, int rm);
void emit_asr_reg_32(uint8_t **code, int rd, int rn, int rm);
void emit_sxtw(uint8_t **code, int rd, int rn);
void emit_mul(uint8_t **code, int rd, int rn, int rm);
void emit_smulh(uint8_t **code, int rd, int rn, int rm);
void emit_umulh(uint8_t **code, int rd, int rn, int rm);
void emit_sdiv(uint8_t **code, int rd, int rn, int rm);
void emit_udiv(uint8_t **code, int rd, int rn, int rm);
void emit_msub(uint8_t **code, int rd, int rn, int rm, int ra);
void emit_mul_32(uint8_t **code, int rd, int rn, int rm);
void emit_sdiv_32(uint8_t **code, int rd, int rn, int rm);
void emit_udiv_32(uint8_t **code, int rd, int rn, int rm);
void emit_msub_32(uint8_t **code, int rd, int rn, int rm, int ra);
void emit_blr(uint8_t **code, int rn);

// Helper: emit instruction to write to cpu->x[rd]
// CPU context is in x28, x[rd] offset is rd*8
// cpu_t layout: uint64_t pc (offset 0), uint64_t x[32] (offset 8)
static void emit_store_to_cpu_reg(uint8_t **code, int guest_rd, int arm_src) {
    if (guest_rd == 0) return;  // x0 is always zero, don't write

    // STR Xt, [x28, #offset]
    // offset = 8 (sizeof pc) + guest_rd * 8
    uint32_t offset = 8 + guest_rd * 8;

    // STR Xt, [Xn, #imm12] - 0xf9000000 | (imm12<<10) | (rn<<5) | rt
    // imm12 is scaled by 8 for 64-bit stores
    if (offset % 8 != 0 || offset / 8 >= 4096) {
        // Offset too large or not aligned, would need multiple instructions
        // For now, just emit a NOP (should not happen with our struct layout)
        extern void emit_nop(uint8_t **code);
        emit_nop(code);
        return;
    }
    uint32_t imm12 = offset / 8;
    uint32_t inst = 0xf9000000 | (imm12 << 10) | (28 << 5) | arm_src;

    emit32(code, inst);
}

// Helper: emit instruction to read from cpu->x[rs]
static void emit_load_from_cpu_reg(uint8_t **code, int arm_dst, int guest_rs) {
    // LDR Xt, [x28, #offset]
    // offset = 8 (sizeof pc) + guest_rs * 8
    uint32_t offset = 8 + guest_rs * 8;

    if (offset % 8 != 0 || offset / 8 >= 4096) {
        extern void emit_nop(uint8_t **code);
        emit_nop(code);
        return;
    }
    uint32_t imm12 = offset / 8;
    uint32_t inst = 0xf9400000 | (imm12 << 10) | (28 << 5) | arm_dst;

    emit32(code, inst);
}

// Register allocation helpers
#if JIT_REG_ALLOC_ENABLED

// Check if a RISC-V register is mapped to an ARM64 register
static inline bool is_reg_mapped(int guest_reg) {
    return (guest_reg >= FIRST_MAPPED_GUEST_REG &&
            guest_reg < FIRST_MAPPED_GUEST_REG + NUM_MAPPED_REGS);
}

// Get the ARM64 register for a mapped RISC-V register
static inline int get_host_reg(int guest_reg) {
    if (!is_reg_mapped(guest_reg)) return -1;
    return FIRST_MAPPED_HOST_REG + (guest_reg - FIRST_MAPPED_GUEST_REG);
}

// Load mapped registers from memory at block start
static void emit_load_mapped_regs(uint8_t **code) {
    for (int i = 0; i < NUM_MAPPED_REGS; i++) {
        int guest_reg = FIRST_MAPPED_GUEST_REG + i;
        int host_reg = FIRST_MAPPED_HOST_REG + i;
        emit_load_from_cpu_reg(code, host_reg, guest_reg);
    }
}

// Store mapped registers to memory at block end
static void emit_store_mapped_regs(uint8_t **code) {
    for (int i = 0; i < NUM_MAPPED_REGS; i++) {
        int guest_reg = FIRST_MAPPED_GUEST_REG + i;
        int host_reg = FIRST_MAPPED_HOST_REG + i;
        emit_store_to_cpu_reg(code, guest_reg, host_reg);
    }
}

// Get ARM64 register for reading a RISC-V register
// If mapped, return the mapped register; otherwise load to tmp_reg
static int emit_get_guest_reg(uint8_t **code, int guest_reg, int tmp_reg) {
    if (guest_reg == 0) {
        // x0 is always zero
        emit_load_imm64(code, tmp_reg, 0);
        return tmp_reg;
    }

    if (is_reg_mapped(guest_reg)) {
        return get_host_reg(guest_reg);
    } else {
        emit_load_from_cpu_reg(code, tmp_reg, guest_reg);
        return tmp_reg;
    }
}

// Store value to a RISC-V register
// If mapped, move to mapped register; otherwise store to memory
static void emit_set_guest_reg(uint8_t **code, int guest_reg, int arm_src) {
    if (guest_reg == 0) return;  // x0 is always zero

    if (is_reg_mapped(guest_reg)) {
        int host_reg = get_host_reg(guest_reg);
        if (arm_src != host_reg) {
            emit_mov_reg(code, host_reg, arm_src);
        }
    } else {
        emit_store_to_cpu_reg(code, guest_reg, arm_src);
    }
}

#else
// Fallback when register allocation is disabled
static inline bool is_reg_mapped(int guest_reg) { return false; }
static inline int get_host_reg(int guest_reg) { return -1; }
static void emit_load_mapped_regs(uint8_t **code) {}
static void emit_store_mapped_regs(uint8_t **code) {}
static int emit_get_guest_reg(uint8_t **code, int guest_reg, int tmp_reg) {
    if (guest_reg == 0) {
        emit_load_imm64(code, tmp_reg, 0);
    } else {
        emit_load_from_cpu_reg(code, tmp_reg, guest_reg);
    }
    return tmp_reg;
}
static void emit_set_guest_reg(uint8_t **code, int guest_reg, int arm_src) {
    emit_store_to_cpu_reg(code, guest_reg, arm_src);
}
#endif

// Detect if instruction ends a basic block
static bool is_block_terminator(uint32_t opcode) {
    // Branches, jumps, system calls
    // Note: CSR instructions (0x73 with funct3 1-7) are NOT block terminators
    // Only ECALL/EBREAK/SRET/MRET (funct3=0) are terminators
    return (opcode == 0x63 ||  // BRANCH
            opcode == 0x67 ||  // JALR
            opcode == 0x6F);   // JAL
            // 0x73 SYSTEM removed - handled by is_compilable check
}

// Check if instruction can be JIT compiled
static bool is_compilable(dec_t *d) {
    switch (d->opcode) {
        case 0x03: // LOAD (LB, LH, LW, LD, LBU, LHU, LWU)
        case 0x13: // OP-IMM (ADDI, XORI, ORI, ANDI, SLLI, SRLI, SRAI)
        case 0x23: // STORE (SB, SH, SW, SD)
        case 0x33: // OP (ADD, SUB, AND, OR, XOR, SLL, SRL, SRA)
        case 0x37: // LUI
        case 0x17: // AUIPC
        case 0x1B: // OP-IMM-32 (ADDIW, SLLIW, SRLIW, SRAIW)
        case 0x3B: // OP-32 (ADDW, SUBW, SLLW, SRLW, SRAW)
        case 0x63: // BRANCH (BEQ, BNE, BLT, BGE, BLTU, BGEU)
        case 0x67: // JALR
        case 0x6F: // JAL
            return true;
        case 0x73: // SYSTEM (CSR instructions)
            // Only CSR instructions (funct3 1-7), not ECALL/EBREAK/SRET/MRET
            return (d->funct3 >= 1 && d->funct3 <= 7);
        default:
            return false;
    }
}

// Compile single RISC-V instruction to ARM64
// Returns true if compilation succeeded
static bool compile_instruction(uint8_t **code, dec_t *d, uint64_t pc,
                                  struct mem_t *mem, struct devices_t *dev,
                                  jit_block_t *block) {
    // Use ARM64 x9-x15 as temporary registers
    const int tmp1 = 9;
    const int tmp2 = 10;

    switch (d->opcode) {
        case 0x03: { // LOAD
            // Calculate address: rs1 + imm
            int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
            int64_t offset = d->imm_i;
            if (offset >= 0 && offset < 4096) {
                emit_add_imm(code, tmp1, rs1_reg, (uint32_t)offset);
            } else if (offset < 0 && offset >= -4096) {
                emit_sub_imm(code, tmp1, rs1_reg, (uint32_t)(-offset));
            } else {
                emit_load_imm64(code, tmp2, (uint64_t)offset);
                emit_add_reg(code, tmp1, rs1_reg, tmp2);
            }

            // Address is in tmp1
            // Call vmem_readXX(cpu, mem, dev, vaddr, ACCESS_LOAD)
            // x0 = cpu (already in x28)
            // x1 = mem
            // x2 = dev
            // x3 = vaddr (tmp1)
            // x4 = ACCESS_LOAD (1)

            emit_mov_reg(code, 0, 28);  // x0 = cpu
            emit_mov_reg(code, 1, 26);   // x1 = mem
            emit_mov_reg(code, 2, 27);   // x2 = dev
            emit_mov_reg(code, 3, tmp1);  // x3 = vaddr
            emit_load_imm64(code, 4, 1);  // x4 = ACCESS_LOAD

            // Load function pointer and call
            void *func_ptr = NULL;
            switch (d->funct3) {
                case 0: func_ptr = (void*)vmem_read8; break;   // LB
                case 1: func_ptr = (void*)vmem_read16; break;  // LH
                case 2: func_ptr = (void*)vmem_read32; break;  // LW
                case 3: func_ptr = (void*)vmem_read64; break;  // LD
                case 4: func_ptr = (void*)vmem_read8; break;   // LBU
                case 5: func_ptr = (void*)vmem_read16; break;  // LHU
                case 6: func_ptr = (void*)vmem_read32; break;  // LWU
                default: return false;
            }

            emit_load_imm64(code, 15, (uint64_t)func_ptr);
            emit_blr(code, 15);

            // Result is in x0, sign-extend if needed
            switch (d->funct3) {
                case 0: // LB - sign extend 8->64
                    // SXTB Xd, Wn
                    emit32(code, 0x93401c00 | (0 << 5) | tmp1);  // SXTB x9, w0
                    break;
                case 1: // LH - sign extend 16->64
                    // SXTH Xd, Wn
                    emit32(code, 0x93403c00 | (0 << 5) | tmp1);  // SXTH x9, w0
                    break;
                case 2: // LW - sign extend 32->64
                    emit_sxtw(code, tmp1, 0);  // SXTW x9, w0
                    break;
                case 3: // LD - no extension
                    emit_mov_reg(code, tmp1, 0);
                    break;
                case 4: // LBU - zero extend (already done by ARM64)
                    // AND Xd, Xn, #0xFF
                    emit32(code, 0x92400000 | (0 << 5) | tmp1);  // AND x9, x0, #0xFF
                    break;
                case 5: // LHU - zero extend
                    // AND Xd, Xn, #0xFFFF
                    emit32(code, 0x92403c00 | (0 << 5) | tmp1);  // AND x9, x0, #0xFFFF
                    break;
                case 6: // LWU - zero extend
                    // MOV Wd, Wn (32-bit move zero-extends)
                    emit32(code, 0x2a0003e0 | (0 << 16) | tmp1);  // MOV w9, w0
                    break;
            }

            emit_set_guest_reg(code, d->rd, tmp1);
            return true;
        }

        case 0x13: { // OP-IMM
            switch (d->funct3) {
                case 0: { // ADDI
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);

                    int64_t imm = d->imm_i;
                    if (imm >= 0 && imm < 4096) {
                        emit_add_imm(code, tmp1, rs1_reg, (uint32_t)imm);
                    } else if (imm < 0 && imm >= -4096) {
                        emit_sub_imm(code, tmp1, rs1_reg, (uint32_t)(-imm));
                    } else {
                        // Large immediate: load into register first
                        emit_load_imm64(code, tmp2, (uint64_t)imm);
                        emit_add_reg(code, tmp1, rs1_reg, tmp2);
                    }

                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 4: { // XORI
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_load_imm64(code, tmp2, (uint64_t)d->imm_i);
                    emit_eor_reg(code, tmp1, rs1_reg, tmp2);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 6: { // ORI
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_load_imm64(code, tmp2, (uint64_t)d->imm_i);
                    emit_orr_reg(code, tmp1, rs1_reg, tmp2);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 7: { // ANDI
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_load_imm64(code, tmp2, (uint64_t)d->imm_i);
                    emit_and_reg(code, tmp1, rs1_reg, tmp2);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 1: { // SLLI
                    uint32_t shamt = d->imm_i & 0x3f;
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_movz(code, tmp2, shamt, 0);
                    emit_lsl_reg(code, tmp1, rs1_reg, tmp2);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 5: { // SRLI/SRAI
                    uint32_t shamt = d->imm_i & 0x3f;
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_movz(code, tmp2, shamt, 0);

                    if ((d->imm_i & (1 << 10)) == 0) {
                        emit_lsr_reg(code, tmp1, rs1_reg, tmp2);  // SRLI
                    } else {
                        emit_asr_reg(code, tmp1, rs1_reg, tmp2);  // SRAI
                    }
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                default:
                    return false;
            }
        }

        case 0x33: { // OP (register-register)
            int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
            int rs2_reg = emit_get_guest_reg(code, d->rs2, tmp2);

            // Check for M extension (funct7 = 0x01)
            if (d->funct7 == 0x01) {
                switch (d->funct3) {
                    case 0: // MUL
                        emit_mul(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 1: // MULH (signed high)
                        emit_smulh(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 2: // MULHSU (signed * unsigned high)
                        // ARM64 doesn't have this directly, need to emulate
                        // For now, return false
                        return false;
                    case 3: // MULHU (unsigned high)
                        emit_umulh(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 4: // DIV (signed)
                        emit_sdiv(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 5: // DIVU (unsigned)
                        emit_udiv(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 6: // REM (signed remainder)
                        // REM = dividend - divisor * quotient
                        // = rs1 - rs2 * (rs1/rs2)
                        emit_sdiv(code, 11, rs1_reg, rs2_reg);  // x11 = quotient
                        emit_msub(code, tmp1, 11, rs2_reg, rs1_reg);  // tmp1 = rs1_reg - x11*rs2_reg
                        break;
                    case 7: // REMU (unsigned remainder)
                        emit_udiv(code, 11, rs1_reg, rs2_reg);
                        emit_msub(code, tmp1, 11, rs2_reg, rs1_reg);
                        break;
                    default:
                        return false;
                }
                emit_set_guest_reg(code, d->rd, tmp1);
                return true;
            }

            switch (d->funct3) {
                case 0: // ADD/SUB
                    if (d->funct7 == 0x00) {
                        emit_add_reg(code, tmp1, rs1_reg, rs2_reg);
                    } else if (d->funct7 == 0x20) {
                        emit_sub_reg(code, tmp1, rs1_reg, rs2_reg);
                    } else {
                        return false;
                    }
                    break;
                case 4: // XOR
                    emit_eor_reg(code, tmp1, rs1_reg, rs2_reg);
                    break;
                case 6: // OR
                    emit_orr_reg(code, tmp1, rs1_reg, rs2_reg);
                    break;
                case 7: // AND
                    emit_and_reg(code, tmp1, rs1_reg, rs2_reg);
                    break;
                case 1: // SLL
                    emit_lsl_reg(code, tmp1, rs1_reg, rs2_reg);
                    break;
                case 5: // SRL/SRA
                    if (d->funct7 == 0x00) {
                        emit_lsr_reg(code, tmp1, rs1_reg, rs2_reg);
                    } else if (d->funct7 == 0x20) {
                        emit_asr_reg(code, tmp1, rs1_reg, rs2_reg);
                    } else {
                        return false;
                    }
                    break;
                default:
                    return false;
            }

            emit_set_guest_reg(code, d->rd, tmp1);
            return true;
        }

        case 0x37: { // LUI
            emit_load_imm64(code, tmp1, (uint64_t)d->imm_u);
            emit_set_guest_reg(code, d->rd, tmp1);
            return true;
        }

        case 0x17: { // AUIPC
            uint64_t result = pc + (uint64_t)d->imm_u;
            emit_load_imm64(code, tmp1, result);
            emit_set_guest_reg(code, d->rd, tmp1);
            return true;
        }

        case 0x1B: { // OP-IMM-32 (32-bit immediate operations)
            switch (d->funct3) {
                case 0: { // ADDIW
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);

                    int64_t imm = d->imm_i;
                    if (imm >= 0 && imm < 4096) {
                        emit_add_imm_32(code, tmp1, rs1_reg, (uint32_t)imm);
                    } else if (imm < 0 && imm >= -4096) {
                        emit_sub_imm_32(code, tmp1, rs1_reg, (uint32_t)(-imm));
                    } else {
                        // Large immediate: load into register first
                        emit_load_imm64(code, tmp2, (uint64_t)imm);
                        emit_add_reg_32(code, tmp1, rs1_reg, tmp2);
                    }

                    // Sign extend to 64-bit
                    emit_sxtw(code, tmp1, tmp1);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 1: { // SLLIW
                    uint32_t shamt = d->imm_i & 0x1f;  // 5-bit shift amount for 32-bit
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_movz(code, tmp2, shamt, 0);
                    emit_lsl_reg_32(code, tmp1, rs1_reg, tmp2);
                    emit_sxtw(code, tmp1, tmp1);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                case 5: { // SRLIW/SRAIW
                    uint32_t shamt = d->imm_i & 0x1f;
                    int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
                    emit_movz(code, tmp2, shamt, 0);

                    if ((d->imm_i & (1 << 10)) == 0) {
                        emit_lsr_reg_32(code, tmp1, rs1_reg, tmp2);  // SRLIW
                    } else {
                        emit_asr_reg_32(code, tmp1, rs1_reg, tmp2);  // SRAIW
                    }
                    emit_sxtw(code, tmp1, tmp1);
                    emit_set_guest_reg(code, d->rd, tmp1);
                    return true;
                }
                default:
                    return false;
            }
        }

        case 0x3B: { // OP-32 (32-bit register-register operations)
            int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
            int rs2_reg = emit_get_guest_reg(code, d->rs2, tmp2);

            // Check for M extension (funct7 = 0x01)
            if (d->funct7 == 0x01) {
                switch (d->funct3) {
                    case 0: // MULW
                        emit_mul_32(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 4: // DIVW
                        emit_sdiv_32(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 5: // DIVUW
                        emit_udiv_32(code, tmp1, rs1_reg, rs2_reg);
                        break;
                    case 6: // REMW
                        emit_sdiv_32(code, 11, rs1_reg, rs2_reg);
                        emit_msub_32(code, tmp1, 11, rs2_reg, rs1_reg);
                        break;
                    case 7: // REMUW
                        emit_udiv_32(code, 11, rs1_reg, rs2_reg);
                        emit_msub_32(code, tmp1, 11, rs2_reg, rs1_reg);
                        break;
                    default:
                        return false;
                }
                emit_sxtw(code, tmp1, tmp1);
                emit_set_guest_reg(code, d->rd, tmp1);
                return true;
            }

            switch (d->funct3) {
                case 0: // ADDW/SUBW
                    if (d->funct7 == 0x00) {
                        emit_add_reg_32(code, tmp1, rs1_reg, rs2_reg);
                    } else if (d->funct7 == 0x20) {
                        emit_sub_reg_32(code, tmp1, rs1_reg, rs2_reg);
                    } else {
                        return false;
                    }
                    break;
                case 1: // SLLW
                    emit_lsl_reg_32(code, tmp1, rs1_reg, rs2_reg);
                    break;
                case 5: // SRLW/SRAW
                    if (d->funct7 == 0x00) {
                        emit_lsr_reg_32(code, tmp1, rs1_reg, rs2_reg);
                    } else if (d->funct7 == 0x20) {
                        emit_asr_reg_32(code, tmp1, rs1_reg, rs2_reg);
                    } else {
                        return false;
                    }
                    break;
                default:
                    return false;
            }

            // Sign extend to 64-bit
            emit_sxtw(code, tmp1, tmp1);
            emit_set_guest_reg(code, d->rd, tmp1);
            return true;
        }

        case 0x23: { // STORE
            // Calculate address: rs1 + imm
            int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
            int64_t offset = d->imm_s;
            if (offset >= 0 && offset < 4096) {
                emit_add_imm(code, tmp1, rs1_reg, (uint32_t)offset);
            } else if (offset < 0 && offset >= -4096) {
                emit_sub_imm(code, tmp1, rs1_reg, (uint32_t)(-offset));
            } else {
                emit_load_imm64(code, tmp2, (uint64_t)offset);
                emit_add_reg(code, tmp1, rs1_reg, tmp2);
            }

            // Load value from rs2
            int rs2_reg = emit_get_guest_reg(code, d->rs2, 11);

            // Call vmem_writeXX(cpu, mem, dev, vaddr, val, ACCESS_STORE)
            // x0 = cpu
            // x1 = mem
            // x2 = dev
            // x3 = vaddr (tmp1)
            // x4 = val (from rs2)
            // x5 = ACCESS_STORE (2)

            emit_mov_reg(code, 0, 28);  // x0 = cpu
            emit_mov_reg(code, 1, 26);   // x1 = mem
            emit_mov_reg(code, 2, 27);   // x2 = dev
            emit_mov_reg(code, 3, tmp1);  // x3 = vaddr
            emit_mov_reg(code, 4, rs2_reg);  // x4 = val
            emit_load_imm64(code, 5, 2);  // x5 = ACCESS_STORE

            // Load function pointer and call
            void *func_ptr = NULL;
            switch (d->funct3) {
                case 0: func_ptr = (void*)vmem_write8; break;   // SB
                case 1: func_ptr = (void*)vmem_write16; break;  // SH
                case 2: func_ptr = (void*)vmem_write32; break;  // SW
                case 3: func_ptr = (void*)vmem_write64; break;  // SD
                default: return false;
            }

            emit_load_imm64(code, 15, (uint64_t)func_ptr);
            emit_blr(code, 15);

            // No return value for write
            return true;
        }

        case 0x63: { // BRANCH
            // BRANCH instructions end basic blocks, so we handle them specially
            // We'll emit the comparison and conditional branch, then set pc for both paths

            // Load operands
            int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
            int rs2_reg = emit_get_guest_reg(code, d->rs2, tmp2);

            // Compare registers
            emit_cmp_reg(code, rs1_reg, rs2_reg);

            // Calculate branch target and fall-through addresses
            int64_t branch_offset = d->imm_b;
            uint64_t branch_target = pc + branch_offset;
            uint64_t fall_through = pc + 4;

            // Map RISC-V funct3 to ARM64 condition codes
            int arm_cond;
            switch (d->funct3) {
                case 0: arm_cond = 0; break;  // BEQ -> EQ
                case 1: arm_cond = 1; break;  // BNE -> NE
                case 4: arm_cond = 11; break; // BLT -> LT (signed)
                case 5: arm_cond = 10; break; // BGE -> GE (signed)
                case 6: arm_cond = 3; break;  // BLTU -> LO (unsigned <)
                case 7: arm_cond = 2; break;  // BGEU -> HS (unsigned >=)
                default:
                    return false;
            }

            // Emit conditional branch: if condition true, jump to taken path
            // We need to skip over the fall-through PC update code
            // Layout:
            //   B.cond taken_label
            //   <fall-through PC update>
            //   B epilogue
            // taken_label:
            //   <branch-target PC update>
            //   (falls through to epilogue)

            uint8_t *bcond_pos = *code;
            emit_bcond(code, arm_cond, 0);  // Will patch offset locally

            // Fall-through path: set PC to fall_through
            emit_load_imm64(code, 9, fall_through);
            uint32_t str_pc = 0xf9000389;  // STR x9, [x28, #0]
            emit32(code, str_pc);

            // Jump to epilogue (will be handled by caller)
            uint8_t *b_epilogue_pos = *code;
            emit_b(code, 0);  // Will patch offset later - jump over taken path

            // Taken path: set PC to branch_target
            uint8_t *taken_label = *code;
            emit_load_imm64(code, 9, branch_target);
            emit32(code, str_pc);

            // Insert a branch we can later retarget for chaining the taken path
            uint8_t *taken_branch_pos = *code;
            emit_b(code, 0);

            // Patch the conditional branch offset to reach the local taken path
            int32_t bcond_offset = (int32_t)(taken_label - bcond_pos);
            *(uint32_t*)bcond_pos = 0x54000000 | (((bcond_offset / 4) & 0x7ffff) << 5) | arm_cond;

            // Patch the unconditional branch to skip taken path (default: fallthrough to epilogue)
            int32_t b_offset = (int32_t)(*code - b_epilogue_pos);
            *(uint32_t*)b_epilogue_pos = 0x14000000 | ((b_offset / 4) & 0x3ffffff);

            // Default taken-branch jumps to the same place (skip chaining) until patched
            int32_t taken_skip = (int32_t)(*code - taken_branch_pos);
            *(uint32_t*)taken_branch_pos = 0x14000000 | ((taken_skip / 4) & 0x3ffffff);

            // Save block chaining information
            block->branch_target = branch_target;
            block->branch_fallthrough = fall_through;
            block->branch_taken_patch_offset = taken_branch_pos;  // Taken path branch to patch
            block->fallthrough_patch_offset = b_epilogue_pos;  // Unconditional branch to patch

            return true;
        }

        case 0x6F: { // JAL
            // JAL: rd = pc + 4; pc = pc + imm_j

            // Calculate return address (pc + 4)
            uint64_t return_addr = pc + 4;

            // Save return address to rd
            emit_load_imm64(code, tmp1, return_addr);
            emit_set_guest_reg(code, d->rd, tmp1);

            // Calculate jump target
            int64_t offset = d->imm_j;
            uint64_t jump_target = pc + offset;

            // Set PC to jump target
            emit_load_imm64(code, 9, jump_target);
            uint32_t str_pc = 0xf9000389;  // STR x9, [x28, #0]
            emit32(code, str_pc);

            // Save patch offset for potential block chaining
            // We'll emit an unconditional branch that can be patched later
            uint8_t *jump_patch_pos = *code;
            emit_b(code, 0);  // Placeholder branch to epilogue (will be patched for direct jump)

            // Save block chaining information
            block->jump_target = jump_target;
            block->jump_patch_offset = jump_patch_pos;

            return true;
        }

        case 0x67: { // JALR
            // JALR: rd = pc + 4; pc = (rs1 + imm) & ~1

            // Calculate return address (pc + 4)
            uint64_t return_addr = pc + 4;

            // Save return address to rd first (before potentially overwriting rs1)
            emit_load_imm64(code, tmp1, return_addr);
            emit_set_guest_reg(code, d->rd, tmp1);

            // Calculate jump target: rs1 + imm
            int rs1_reg = emit_get_guest_reg(code, d->rs1, tmp1);
            int64_t offset = d->imm_i;
            if (offset >= 0 && offset < 4096) {
                emit_add_imm(code, tmp1, rs1_reg, (uint32_t)offset);
            } else if (offset < 0 && offset >= -4096) {
                emit_sub_imm(code, tmp1, rs1_reg, (uint32_t)(-offset));
            } else {
                emit_load_imm64(code, tmp2, (uint64_t)offset);
                emit_add_reg(code, tmp1, rs1_reg, tmp2);
            }

            // Clear lowest bit: AND tmp1, tmp1, #~1
            // BIC Xd, Xn, #1 (bit clear immediate)
            emit32(code, 0x92400000 | (1 << 10) | (tmp1 << 5) | tmp1);  // AND x9, x9, #0xFFFFFFFFFFFFFFFE

            // Set PC to jump target
            emit_mov_reg(code, 9, tmp1);
            uint32_t str_pc = 0xf9000389;  // STR x9, [x28, #0]
            emit32(code, str_pc);

            return true;
        }

        case 0x73: { // SYSTEM - CSR instructions
            // funct3: 1=CSRRW, 2=CSRRS, 3=CSRRC, 5=CSRRWI, 6=CSRRSI, 7=CSRRCI
            uint32_t csr_funct = d->funct3;
            if (csr_funct < 1 || csr_funct > 7) {
                return false;  // ECALL, EBREAK, SRET, MRET not supported in JIT
            }

            uint32_t csr_addr = (d->raw >> 20) & 0xFFF;
            bool is_imm = (csr_funct & 0x4) != 0;  // CSR*I instructions

            // Use x11-x15 for CSR operation (tmp1=x9, tmp2=x10 are general purpose)
            const int old_val_reg = 11;  // x11 = old CSR value
            const int src_reg = 12;      // x12 = source value
            const int new_val_reg = 13;  // x13 = new CSR value

            // Step 1: Read old CSR value
            // Call jit_csr_read(cpu, dev, csr_addr) -> returns in x0
            emit_mov_reg(code, 0, 28);  // x0 = cpu (from x28)
            emit_mov_reg(code, 1, 27);   // x1 = dev pointer
            emit_load_imm64(code, 2, csr_addr);  // x2 = csr_addr
            emit_load_imm64(code, tmp1, (uint64_t)jit_csr_read);
            emit_blr(code, tmp1);
            emit_mov_reg(code, old_val_reg, 0);  // Save old value to x11

            // Step 2: Get source value
            if (is_imm) {
                // Immediate form: zimm = rs1 field (5 bits)
                emit_load_imm64(code, src_reg, d->rs1);
            } else {
                // Register form: read from cpu->x[rs1]
                int rs1_reg = emit_get_guest_reg(code, d->rs1, src_reg);
                if (rs1_reg != src_reg) {
                    emit_mov_reg(code, src_reg, rs1_reg);
                }
            }

            // Step 3: Calculate new value
            switch (csr_funct & 0x3) {
                case 1: // CSRRW - new = src (always write)
                    emit_mov_reg(code, new_val_reg, src_reg);
                    break;
                case 2: // CSRRS - new = old | src (only if src != 0)
                    // For immediate form with zimm=0, this is just a read (no write)
                    // For now, always calculate new value
                    emit_orr_reg(code, new_val_reg, old_val_reg, src_reg);
                    break;
                case 3: // CSRRC - new = old & ~src (only if src != 0)
                    // MVN (NOT) on src_reg, result to tmp1
                    emit32(code, 0xaa2003e0 | (src_reg << 16) | tmp1);  // MVN x9, x12
                    emit_and_reg(code, new_val_reg, old_val_reg, tmp1);
                    break;
            }

            // Step 4: Write new CSR value
            // Call jit_csr_write(cpu, csr_addr, new_val)
            emit_mov_reg(code, 0, 28);  // x0 = cpu
            emit_load_imm64(code, 1, csr_addr);  // x1 = csr_addr
            emit_mov_reg(code, 2, new_val_reg);  // x2 = new_val
            emit_load_imm64(code, tmp1, (uint64_t)jit_csr_write);
            emit_blr(code, tmp1);

            // Step 5: Write old value to rd (CSR instructions return old value)
            if (d->rd != 0) {
                emit_set_guest_reg(code, d->rd, old_val_reg);
            }

            return true;
        }

        default:
            return false;
    }
}

// Link blocks for direct branching (block chaining optimization)
static void jit_link_blocks(jit_cache_t *cache, jit_block_t *block) {
#if !JIT_BLOCK_CHAINING_ENABLED
    (void)cache;
    (void)block;
    return;
#else
    bool linked = false;

    // Try to find and link branch target
    if (block->branch_target != 0) {
        block->branch_target_block = jit_cache_lookup(cache, block->branch_target);
        if (block->branch_target_block) {
            linked = true;
            // fprintf(stderr, "JIT: Linked branch target 0x%016llx -> block at 0x%016llx\n",
            //         block->branch_target, block->branch_target_block->guest_pc);
        }
    }

    // Try to find and link branch fallthrough
    if (block->branch_fallthrough != 0) {
        block->branch_fallthrough_block = jit_cache_lookup(cache, block->branch_fallthrough);
        if (block->branch_fallthrough_block) {
            linked = true;
            // fprintf(stderr, "JIT: Linked fallthrough 0x%016llx -> block at 0x%016llx\n",
            //         block->branch_fallthrough, block->branch_fallthrough_block->guest_pc);
        }
    }

    // Try to find and link jump target
    if (block->jump_target != 0) {
        block->jump_target_block = jit_cache_lookup(cache, block->jump_target);
        if (block->jump_target_block) {
            linked = true;
            // fprintf(stderr, "JIT: Linked jump target 0x%016llx -> block at 0x%016llx\n",
            //         block->jump_target, block->jump_target_block->guest_pc);
        }
    }

    if (linked) {
        // Successfully linked - patch code for direct jumps
        jit_write_enable();

        // Patch BRANCH instruction if at least one target is linked
        if (block->branch_target_block || block->branch_fallthrough_block) {
            uint8_t *fallthrough_code = block->fallthrough_patch_offset;

            // Patch taken path if linked
            if (block->branch_target_block && block->branch_taken_patch_offset) {
                void *target_code = block->branch_target_block->host_code_chained;
                int64_t taken_offset = (uint8_t*)target_code - block->branch_taken_patch_offset;
                if (taken_offset >= -(1LL<<27) && taken_offset < (1LL<<27)) {
                    int32_t imm26 = (int32_t)(taken_offset / 4);
                    *(uint32_t*)block->branch_taken_patch_offset = 0x14000000 | (imm26 & 0x3ffffff);
                }
            }

            // Patch fallthrough path if linked
            if (block->branch_fallthrough_block) {
                void *target_code = block->branch_fallthrough_block->host_code_chained;
                int64_t fall_offset = (uint8_t*)target_code - fallthrough_code;
                if (fall_offset >= -(1LL<<27) && fall_offset < (1LL<<27)) {
                    // Within range for unconditional branch
                    int32_t imm26 = (int32_t)(fall_offset / 4);
                    *(uint32_t*)fallthrough_code = 0x14000000 | (imm26 & 0x3ffffff);
                    // fprintf(stderr, "JIT: Patched branch fallthrough at 0x%016llx -> 0x%016llx\n",
                    //         block->guest_pc, block->branch_fallthrough);
                }
            }
        }

        // Patch JAL instruction if target is linked
        if (block->jump_target_block && block->jump_patch_offset) {
            uint8_t *jump_code = block->jump_patch_offset;

            void *target_code = block->jump_target_block->host_code_chained;
            int64_t jump_offset = (uint8_t*)target_code - jump_code;
            if (jump_offset >= -(1LL<<27) && jump_offset < (1LL<<27)) {
                // Within range for unconditional branch
                int32_t imm26 = (int32_t)(jump_offset / 4);
                *(uint32_t*)jump_code = 0x14000000 | (imm26 & 0x3ffffff);
            }

            // fprintf(stderr, "JIT: Patched JAL at 0x%016llx for direct chaining\n", block->guest_pc);
        }

        jit_write_disable();

        // Flush instruction cache after patching
        #if defined(__APPLE__) && defined(__aarch64__)
        sys_icache_invalidate(block->host_code, block->host_size);
        #elif defined(__GNUC__)
        __builtin___clear_cache((char*)block->host_code, (char*)block->host_code + block->host_size);
        #endif
    }
#endif
}

// Full JIT block compilation
jit_block_t* jit_compile_block(jit_cache_t *cache, struct cpu_t *cpu, struct mem_t *mem,
                                struct devices_t *dev, uint64_t guest_pc) {
    // fprintf(stderr, "JIT: jit_compile_block called for PC=0x%016" PRIx64 "\n", guest_pc);

    if (!cache || cache->num_blocks >= JIT_MAX_BLOCKS) {
        fprintf(stderr, "JIT: Cache null or full (cache=%p, num_blocks=%zu)\n",
                (void*)cache, cache ? cache->num_blocks : 0);
        return NULL;
    }

    // Check if we have enough code cache space
    if (cache->code_offset + (JIT_BLOCK_MAX_INSNS * 32) > cache->code_capacity) {
        fprintf(stderr, "JIT: Code cache full\n");
        return NULL;
    }

    // Enable JIT write mode (macOS ARM64 requirement)
    jit_write_enable();

    // Allocate a new block
    jit_block_t *block = &cache->blocks[cache->num_blocks];

    block->guest_pc = guest_pc;
    block->host_code = cache->code_buffer + cache->code_offset;
    block->num_insns = 0;
    block->exec_count = 0;
    block->valid = false;

    // Initialize block chaining fields
    block->branch_target = 0;
    block->branch_fallthrough = 0;
    block->jump_target = 0;
    block->branch_target_block = NULL;
    block->branch_fallthrough_block = NULL;
    block->jump_target_block = NULL;
    block->branch_taken_patch_offset = NULL;
    block->fallthrough_patch_offset = NULL;
    block->jump_patch_offset = NULL;

    uint8_t *code = (uint8_t*)block->host_code;
    uint8_t *code_start = code;

    // Prologue: save callee-saved registers that the JIT uses
    #if JIT_REG_ALLOC_ENABLED
    emit32(&code, 0xa9bf53f3); // STP x19, x20, [sp, #-16]!
    emit32(&code, 0xa9bf5bf5); // STP x21, x22, [sp, #-16]!
    emit32(&code, 0xa9bf63f7); // STP x23, x24, [sp, #-16]!
    #endif
    emit32(&code, 0xa9bf6bf9); // STP x25, x26, [sp, #-16]!
    emit32(&code, 0xa9bf73fb); // STP x27, x28, [sp, #-16]!
    emit32(&code, 0xa9bf7bfd); // STP x29, x30, [sp, #-16]!

    // MOV x28, x0  (first argument is cpu pointer)
    emit_mov_reg(&code, 28, 0);

    // Cache frequently used pointers in callee-saved registers
    emit_load_imm64(&code, 26, (uint64_t)mem);  // x26 = mem pointer
    emit_load_imm64(&code, 27, (uint64_t)dev);  // x27 = dev pointer

    // Load mapped registers at block start
    emit_load_mapped_regs(&code);

    // Save the position after prologue for block chaining (skips reloads)
    block->host_code_chained = (void*)code;

    // Compile instructions until we hit a block terminator
    uint64_t pc = guest_pc;
    uint32_t num_insns = 0;
    uint8_t last_opcode = 0;

    for (int i = 0; i < JIT_BLOCK_MAX_INSNS; i++) {
        // Fetch instruction using helper function
        if (pc < 0x80000000 || pc >= 0x80000000 + (64 * 1024 * 1024)) {
            fprintf(stderr, "JIT: PC out of range: 0x%016" PRIx64 "\n", pc);
            break;
        }

        // Fetch instruction with MMU translation if enabled
        // Use vmem_read32 for instruction fetch to support virtual addressing
        uint32_t inst = vmem_read32(cpu, mem, dev, pc, ACCESS_FETCH);

        // Decode
        dec_t d = decode(inst);

        // Check if compilable
        if (!is_compilable(&d)) {
            // Stop at first non-compilable instruction
            if (num_insns == 0) {
                // Can't compile even the first instruction
                // Silently return NULL - this is normal for ECALL, EBREAK, etc.
                return NULL;
            }
            break;
        }

        // Compile this instruction
        if (!compile_instruction(&code, &d, pc, mem, dev, block)) {
            // Compilation failed
            if (num_insns == 0) {
                fprintf(stderr, "JIT: Compilation failed for opcode 0x%02x at PC=0x%016" PRIx64 "\n",
                        d.opcode, pc);
                return NULL;
            }
            break;
        }

        num_insns++;
        last_opcode = d.opcode;
        pc += 4;  // Assume all instructions are 4 bytes for now (no compressed)

        // Check if this ends the block
        if (is_block_terminator(d.opcode)) {
            break;
        }
    }

    if (num_insns == 0) {
        return NULL;
    }

    // Update PC in CPU structure (unless last instruction sets PC itself)
    // BRANCH (0x63), JAL (0x6F), JALR (0x67) all set PC
    if (last_opcode != 0x63 && last_opcode != 0x6F && last_opcode != 0x67) {
        // MOV x9, #next_pc
        emit_load_imm64(&code, 9, pc);
        // STR x9, [x28, #0]  (store to cpu->pc)
        uint32_t str_pc_inst = 0xf9000389;  // STR x9, [x28, #0]
        emit32(&code, str_pc_inst);
    }

    // Store mapped registers at block end
    emit_store_mapped_regs(&code);

    // Epilogue: restore saved registers and return
    emit32(&code, 0xa8c17bfd); // LDP x29, x30, [sp], #16
    emit32(&code, 0xa8c173fb); // LDP x27, x28, [sp], #16
    emit32(&code, 0xa8c16bf9); // LDP x25, x26, [sp], #16
    #if JIT_REG_ALLOC_ENABLED
    emit32(&code, 0xa8c163f7); // LDP x23, x24, [sp], #16
    emit32(&code, 0xa8c15bf5); // LDP x21, x22, [sp], #16
    emit32(&code, 0xa8c153f3); // LDP x19, x20, [sp], #16
    #endif

    // RET
    emit_ret(&code);

    // Finalize block
    block->guest_end_pc = pc - 4;  // Last instruction PC
    block->num_insns = num_insns;
    block->host_size = (uint32_t)(code - code_start);
    block->valid = true;

    // Update cache - must be done before linking so self-referencing blocks can be found
    cache->code_offset += block->host_size;
    uint32_t hash = hash_pc(guest_pc);
    cache->block_hash[hash] = cache->num_blocks;
    cache->num_blocks++;

    // Disable JIT write mode before linking (linking will re-enable it for patching)
    jit_write_disable();

    // Flush instruction cache after initial compilation
    #if defined(__APPLE__) && defined(__aarch64__)
    sys_icache_invalidate(block->host_code, block->host_size);
    #elif defined(__GNUC__)
    __builtin___clear_cache((char*)block->host_code, (char*)block->host_code + block->host_size);
    #endif

    // Try to link with existing blocks (block chaining optimization)
    // This must be called AFTER the block is added to the cache so that
    // self-referencing blocks (like loops) can find themselves
    jit_link_blocks(cache, block);

    // Silently compile - only show summary at end
    // fprintf(stderr, "JIT: Compiled block at PC=0x%016" PRIx64 ", %u instructions, %u bytes\n",
    //         guest_pc, num_insns, block->host_size);

    return block;
}

// Execute compiled block
uint64_t jit_execute_block(jit_block_t *block, struct cpu_t *cpu) {
    if (!block || !block->valid || !block->host_code) {
        return 0;
    }

    // Cast to function pointer: void (*func)(struct cpu_t*)
    typedef void (*jit_func_t)(struct cpu_t*);
    jit_func_t func = (jit_func_t)block->host_code;

    // Ensure we're in execute mode (not write mode) before calling JIT code
    #if defined(__APPLE__) && defined(__aarch64__)
    pthread_jit_write_protect_np(1);
    #endif

    // Execute the compiled code
    func(cpu);

    // Return the next PC (will be updated by the JIT code)
    return block->guest_end_pc + 4;
}
