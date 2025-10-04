// JIT cache management and ARM64 code generation
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <pthread.h>
#include "jit.h"

// ARM64 instruction encodings
// Format: 31-bit instruction (little endian)

// Emit helpers (public for jit_compiler.c)
void emit32(uint8_t **code, uint32_t inst) {
    memcpy(*code, &inst, 4);
    *code += 4;
}

// JIT write protection management for macOS
void jit_write_enable(void) {
    #if defined(__APPLE__) && defined(__aarch64__)
    pthread_jit_write_protect_np(0);
    #endif
}

void jit_write_disable(void) {
    #if defined(__APPLE__) && defined(__aarch64__)
    pthread_jit_write_protect_np(1);
    #endif
}

// ARM64 Register mapping:
// RISC-V x0-x30 -> ARM64 x0-x30
// RISC-V x31 -> ARM64 x30 (note: x31 is sp/xzr in ARM64, so we use x30)
// CPU context pointer -> x28 (reserved)

// ARM64 instruction emitters

// MOV Xd, Xn (actually: ORR Xd, XZR, Xn)
void emit_mov_reg(uint8_t **code, int rd, int rn) {
    // ORR Xd, XZR, Xn (shift=0)
    uint32_t inst = 0xaa0003e0 | (rn << 16) | (31 << 5) | rd;
    emit32(code, inst);
}

// ADD Xd, Xn, Xm
void emit_add_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x8b000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// SUB Xd, Xn, Xm
void emit_sub_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0xcb000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// ADD Xd, Xn, #imm12
void emit_add_imm(uint8_t **code, int rd, int rn, uint32_t imm12) {
    uint32_t inst = 0x91000000 | ((imm12 & 0xfff) << 10) | (rn << 5) | rd;
    emit32(code, inst);
}

// SUB Xd, Xn, #imm12
void emit_sub_imm(uint8_t **code, int rd, int rn, uint32_t imm12) {
    uint32_t inst = 0xd1000000 | ((imm12 & 0xfff) << 10) | (rn << 5) | rd;
    emit32(code, inst);
}

// AND Xd, Xn, Xm
void emit_and_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x8a000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// ORR Xd, Xn, Xm
void emit_orr_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0xaa000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// EOR Xd, Xn, Xm (XOR)
void emit_eor_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0xca000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// LSL Xd, Xn, Xm (logical shift left)
void emit_lsl_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x9ac02000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// LSR Xd, Xn, Xm (logical shift right)
void emit_lsr_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x9ac02400 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// ASR Xd, Xn, Xm (arithmetic shift right)
void emit_asr_reg(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x9ac02800 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// MOVZ Xd, #imm16, LSL #shift (shift = 0, 16, 32, 48)
void emit_movz(uint8_t **code, int rd, uint32_t imm16, int shift) {
    uint32_t hw = shift / 16;  // 0, 1, 2, or 3
    uint32_t inst = 0xd2800000 | (hw << 21) | ((imm16 & 0xffff) << 5) | rd;
    emit32(code, inst);
}

// MOVK Xd, #imm16, LSL #shift (keep other bits)
void emit_movk(uint8_t **code, int rd, uint32_t imm16, int shift) {
    uint32_t hw = shift / 16;
    uint32_t inst = 0xf2800000 | (hw << 21) | ((imm16 & 0xffff) << 5) | rd;
    emit32(code, inst);
}

// RET (return)
void emit_ret(uint8_t **code) {
    uint32_t inst = 0xd65f03c0;  // RET x30
    emit32(code, inst);
}

// NOP
void emit_nop(uint8_t **code) {
    uint32_t inst = 0xd503201f;
    emit32(code, inst);
}

// Load 64-bit immediate into register (uses MOVZ + MOVK sequence)
void emit_load_imm64(uint8_t **code, int rd, uint64_t imm) {
    emit_movz(code, rd, (uint32_t)(imm & 0xffff), 0);
    if ((imm >> 16) & 0xffff)
        emit_movk(code, rd, (uint32_t)((imm >> 16) & 0xffff), 16);
    if ((imm >> 32) & 0xffff)
        emit_movk(code, rd, (uint32_t)((imm >> 32) & 0xffff), 32);
    if ((imm >> 48) & 0xffff)
        emit_movk(code, rd, (uint32_t)((imm >> 48) & 0xffff), 48);
}

// CMP Xn, Xm (compare registers)
void emit_cmp_reg(uint8_t **code, int rn, int rm) {
    // CMP is an alias for SUBS XZR, Xn, Xm
    // SUBS: 1110 1011 | rm(5) | 000000 | rn(5) | rd(5)
    uint32_t inst = 0xeb00001f | (rm << 16) | (rn << 5);
    emit32(code, inst);
}

// B.cond imm19 (conditional branch)
// cond: 0=EQ, 1=NE, 10=GE, 11=LT, 12=GT, 13=LE, 2=CS/HS, 3=CC/LO
void emit_bcond(uint8_t **code, int cond, int32_t offset) {
    // B.cond: 0101 0100 | imm19 | 0 | cond(4)
    // offset is in bytes, encoded as offset/4
    int32_t imm19 = offset / 4;
    if (imm19 < -(1<<18) || imm19 >= (1<<18)) {
        // Offset too large - emit NOP
        emit_nop(code);
        return;
    }
    uint32_t inst = 0x54000000 | ((imm19 & 0x7ffff) << 5) | (cond & 0xf);
    emit32(code, inst);
}

// B imm26 (unconditional branch)
void emit_b(uint8_t **code, int32_t offset) {
    // B: 0001 01 | imm26
    int32_t imm26 = offset / 4;
    if (imm26 < -(1<<25) || imm26 >= (1<<25)) {
        emit_nop(code);
        return;
    }
    uint32_t inst = 0x14000000 | (imm26 & 0x3ffffff);
    emit32(code, inst);
}

// BL imm26 (branch with link - function call)
void emit_bl(uint8_t **code, int32_t offset) {
    // BL: 1001 01 | imm26
    int32_t imm26 = offset / 4;
    if (imm26 < -(1<<25) || imm26 >= (1<<25)) {
        emit_nop(code);
        return;
    }
    uint32_t inst = 0x94000000 | (imm26 & 0x3ffffff);
    emit32(code, inst);
}

// BLR Xn (branch with link to register - indirect call)
void emit_blr(uint8_t **code, int rn) {
    // BLR: 1101 0110 0011 1111 0000 00 | Rn | 00000
    uint32_t inst = 0xd63f0000 | (rn << 5);
    emit32(code, inst);
}

// LDR Xt, [Xn, #imm] - Load register from memory
void emit_ldr_imm(uint8_t **code, int rt, int rn, uint32_t imm12) {
    // LDR (64-bit): 1111 1001 01 | imm12 | Rn | Rt
    // imm12 is scaled by 8
    uint32_t inst = 0xf9400000 | ((imm12 & 0xfff) << 10) | (rn << 5) | rt;
    emit32(code, inst);
}

// STR Xt, [Xn, #imm] - Store register to memory
void emit_str_imm(uint8_t **code, int rt, int rn, uint32_t imm12) {
    // STR (64-bit): 1111 1001 00 | imm12 | Rn | Rt
    // imm12 is scaled by 8
    uint32_t inst = 0xf9000000 | ((imm12 & 0xfff) << 10) | (rn << 5) | rt;
    emit32(code, inst);
}

// 32-bit arithmetic instructions (W variants)
// These operate on 32-bit values and sign-extend to 64-bit

// ADD Wd, Wn, Wm (32-bit add)
void emit_add_reg_32(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x0b000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// SUB Wd, Wn, Wm (32-bit subtract)
void emit_sub_reg_32(uint8_t **code, int rd, int rn, int rm) {
    uint32_t inst = 0x4b000000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// ADD Wd, Wn, #imm12 (32-bit add immediate)
void emit_add_imm_32(uint8_t **code, int rd, int rn, uint32_t imm12) {
    uint32_t inst = 0x11000000 | ((imm12 & 0xfff) << 10) | (rn << 5) | rd;
    emit32(code, inst);
}

// SUB Wd, Wn, #imm12 (32-bit subtract immediate)
void emit_sub_imm_32(uint8_t **code, int rd, int rn, uint32_t imm12) {
    uint32_t inst = 0x51000000 | ((imm12 & 0xfff) << 10) | (rn << 5) | rd;
    emit32(code, inst);
}

// LSL Wd, Wn, Wm (32-bit logical shift left)
void emit_lsl_reg_32(uint8_t **code, int rd, int rn, int rm) {
    // LSLV: 0001 1010 110 | Rm | 0010 00 | Rn | Rd (32-bit)
    uint32_t inst = 0x1ac02000 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// LSR Wd, Wn, Wm (32-bit logical shift right)
void emit_lsr_reg_32(uint8_t **code, int rd, int rn, int rm) {
    // LSRV: 0001 1010 110 | Rm | 0010 01 | Rn | Rd (32-bit)
    uint32_t inst = 0x1ac02400 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// ASR Wd, Wn, Wm (32-bit arithmetic shift right)
void emit_asr_reg_32(uint8_t **code, int rd, int rn, int rm) {
    // ASRV: 0001 1010 110 | Rm | 0010 10 | Rn | Rd (32-bit)
    uint32_t inst = 0x1ac02800 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// SXTW Xd, Wn (sign extend 32-bit to 64-bit)
void emit_sxtw(uint8_t **code, int rd, int rn) {
    // SXTW is an alias for SBFM Xd, Xn, #0, #31
    // SBFM: 1001 0011 01 | immr(6) | imms(6) | Rn | Rd
    uint32_t inst = 0x93407c00 | (rn << 5) | rd;
    emit32(code, inst);
}

// M extension: Multiply and Divide instructions

// MUL Xd, Xn, Xm (64-bit multiply, lower 64 bits)
void emit_mul(uint8_t **code, int rd, int rn, int rm) {
    // MADD Xd, Xn, Xm, XZR (multiply-add with zero = multiply)
    // 1001 1011 000 | Rm | 0 | Ra(31=XZR) | Rn | Rd
    uint32_t inst = 0x9b007c00 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// SMULH Xd, Xn, Xm (signed multiply high - upper 64 bits)
void emit_smulh(uint8_t **code, int rd, int rn, int rm) {
    // SMULH: 1001 1011 010 | Rm | 0 11111 | Rn | Rd
    uint32_t inst = 0x9b407c00 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// UMULH Xd, Xn, Xm (unsigned multiply high - upper 64 bits)
void emit_umulh(uint8_t **code, int rd, int rn, int rm) {
    // UMULH: 1001 1011 110 | Rm | 0 11111 | Rn | Rd
    uint32_t inst = 0x9bc07c00 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// SDIV Xd, Xn, Xm (signed divide)
void emit_sdiv(uint8_t **code, int rd, int rn, int rm) {
    // SDIV: 1001 1010 110 | Rm | 0000 11 | Rn | Rd
    uint32_t inst = 0x9ac00c00 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// UDIV Xd, Xn, Xm (unsigned divide)
void emit_udiv(uint8_t **code, int rd, int rn, int rm) {
    // UDIV: 1001 1010 110 | Rm | 0000 10 | Rn | Rd
    uint32_t inst = 0x9ac00800 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

// For MSUB (needed for REM): MSUB Xd, Xn, Xm, Xa = Xa - Xn*Xm
void emit_msub(uint8_t **code, int rd, int rn, int rm, int ra) {
    // MSUB: 1001 1011 000 | Rm | 1 | Ra | Rn | Rd
    uint32_t inst = 0x9b008000 | (rm << 16) | (ra << 10) | (rn << 5) | rd;
    emit32(code, inst);
}

// 32-bit multiply/divide
void emit_mul_32(uint8_t **code, int rd, int rn, int rm) {
    // MADD Wd, Wn, Wm, WZR
    uint32_t inst = 0x1b007c00 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

void emit_sdiv_32(uint8_t **code, int rd, int rn, int rm) {
    // SDIV Wd, Wn, Wm
    uint32_t inst = 0x1ac00c00 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

void emit_udiv_32(uint8_t **code, int rd, int rn, int rm) {
    // UDIV Wd, Wn, Wm
    uint32_t inst = 0x1ac00800 | (rm << 16) | (rn << 5) | rd;
    emit32(code, inst);
}

void emit_msub_32(uint8_t **code, int rd, int rn, int rm, int ra) {
    // MSUB Wd, Wn, Wm, Wa
    uint32_t inst = 0x1b008000 | (rm << 16) | (ra << 10) | (rn << 5) | rd;
    emit32(code, inst);
}

// Create JIT cache with executable memory
jit_cache_t* jit_cache_create(void) {
    jit_cache_t *cache = calloc(1, sizeof(jit_cache_t));
    if (!cache) return NULL;

    // Allocate executable memory for macOS ARM64
    // MAP_JIT is required on Apple Silicon
    cache->code_buffer = mmap(NULL, JIT_CODE_CACHE_SIZE,
                               PROT_READ | PROT_WRITE | PROT_EXEC,
                               MAP_PRIVATE | MAP_ANONYMOUS | MAP_JIT,
                               -1, 0);

    if (cache->code_buffer == MAP_FAILED) {
        fprintf(stderr, "JIT: Failed to allocate executable memory\n");
        free(cache);
        return NULL;
    }

    cache->code_capacity = JIT_CODE_CACHE_SIZE;
    cache->code_offset = 0;
    cache->num_blocks = 0;

    // Initialize hash table
    for (int i = 0; i < JIT_MAX_BLOCKS; i++) {
        cache->block_hash[i] = -1;
    }

    fprintf(stderr, "JIT: Code cache created at %p, size=%zu bytes\n",
            cache->code_buffer, cache->code_capacity);

    return cache;
}

void jit_cache_destroy(jit_cache_t *cache) {
    if (!cache) return;
    if (cache->code_buffer) {
        munmap(cache->code_buffer, cache->code_capacity);
    }
    free(cache);
}

void jit_cache_flush(jit_cache_t *cache) {
    if (!cache) return;
    cache->code_offset = 0;
    cache->num_blocks = 0;
    for (int i = 0; i < JIT_MAX_BLOCKS; i++) {
        cache->block_hash[i] = -1;
        cache->blocks[i].valid = false;
    }
}

// Simple hash function for PC lookup (public for jit_compiler.c)
uint32_t hash_pc(uint64_t pc) {
    return (uint32_t)((pc >> 2) % JIT_MAX_BLOCKS);
}

jit_block_t* jit_cache_lookup(jit_cache_t *cache, uint64_t guest_pc) {
    if (!cache) return NULL;

    uint32_t hash = hash_pc(guest_pc);
    int idx = cache->block_hash[hash];

    if (idx >= 0 && idx < (int)cache->num_blocks) {
        jit_block_t *block = &cache->blocks[idx];
        if (block->valid && block->guest_pc == guest_pc) {
            return block;
        }
    }

    // Linear search as fallback (handle collisions)
    for (size_t i = 0; i < cache->num_blocks; i++) {
        if (cache->blocks[i].valid && cache->blocks[i].guest_pc == guest_pc) {
            return &cache->blocks[i];
        }
    }

    return NULL;
}

// Hotness tracker
hotness_tracker_t* hotness_tracker_create(void) {
    hotness_tracker_t *tracker = calloc(1, sizeof(hotness_tracker_t));
    return tracker;
}

void hotness_tracker_destroy(hotness_tracker_t *tracker) {
    free(tracker);
}

void hotness_tracker_record(hotness_tracker_t *tracker, uint64_t pc) {
    if (!tracker) return;

    uint32_t hash = (uint32_t)((pc >> 2) % PC_COUNTER_SIZE);
    pc_counter_t *counter = &tracker->counters[hash];

    if (counter->pc == pc) {
        counter->count++;
    } else if (counter->count == 0) {
        counter->pc = pc;
        counter->count = 1;
    } else {
        // Simple eviction policy
        counter->count--;
    }
}

bool hotness_tracker_should_compile(hotness_tracker_t *tracker, uint64_t pc) {
    if (!tracker) return false;

    uint32_t hash = (uint32_t)((pc >> 2) % PC_COUNTER_SIZE);
    pc_counter_t *counter = &tracker->counters[hash];

    return (counter->pc == pc && counter->count >= JIT_HOTNESS_THRESHOLD);
}
