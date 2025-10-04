// RISC-V to ARM64 JIT compiler header
// macOS ARM64向けJITコンパイラ

#ifndef JIT_H
#define JIT_H

#include <stdint.h>
#include <stdbool.h>
#include <sys/mman.h>

// Decode structure (from rv64emu.c)
typedef struct {
    uint32_t raw;
    uint32_t opcode, rd, rs1, rs2, funct3, funct7;
    int64_t imm_i, imm_s, imm_b, imm_u, imm_j;
} dec_t;

// Access type for memory operations
typedef enum { ACCESS_FETCH, ACCESS_LOAD, ACCESS_STORE } access_t;

// Forward declarations for opaque pointers (actual structs defined in rv64emu.c)
// These will be defined by rv64emu.c before including this header

// External functions from rv64emu.c that JIT needs
// Note: cpu_t, mem_t, devices_t must be defined before including this header
struct dec_t;
struct cpu_t;
struct mem_t;
struct devices_t;

// Typedefs for types defined in rv64emu.c (before jit.h is included)
// Only define if not already defined by rv64emu.c
#ifndef CPU_T_DEFINED
typedef struct cpu_t cpu_t;
typedef struct mem_t mem_t;
typedef struct devices_t devices_t;
#endif

extern dec_t decode(uint32_t inst);
extern uint32_t vmem_read32(cpu_t *cpu, const mem_t *mem,
                             devices_t *dev, uint64_t vaddr, access_t acc);
extern uint32_t jit_read_insn(const mem_t *mem, uint64_t paddr);

// Memory access functions for JIT (from rv64emu.c)
extern uint8_t vmem_read8(cpu_t *cpu, const mem_t *mem,
                          devices_t *dev, uint64_t vaddr, access_t acc);
extern uint16_t vmem_read16(cpu_t *cpu, const mem_t *mem,
                            devices_t *dev, uint64_t vaddr, access_t acc);
extern uint64_t vmem_read64(cpu_t *cpu, const mem_t *mem,
                            devices_t *dev, uint64_t vaddr, access_t acc);
extern void vmem_write8(cpu_t *cpu, mem_t *mem,
                        devices_t *dev, uint64_t vaddr, uint8_t val, access_t acc);
extern void vmem_write16(cpu_t *cpu, mem_t *mem,
                         devices_t *dev, uint64_t vaddr, uint16_t val, access_t acc);
extern void vmem_write32(cpu_t *cpu, mem_t *mem,
                         devices_t *dev, uint64_t vaddr, uint32_t val, access_t acc);
extern void vmem_write64(cpu_t *cpu, mem_t *mem,
                         devices_t *dev, uint64_t vaddr, uint64_t val, access_t acc);

// CSR access functions for JIT (from rv64emu.c)
extern uint64_t jit_csr_read(cpu_t *cpu, devices_t *dev, uint32_t csr_addr);
extern void jit_csr_write(cpu_t *cpu, uint32_t csr_addr, uint64_t val);

// External functions from jit_cache.c
extern uint32_t hash_pc(uint64_t pc);
extern void emit32(uint8_t **code, uint32_t inst);
extern void jit_write_enable(void);
extern void jit_write_disable(void);

// JIT configuration
#define JIT_ENABLED 1
#define JIT_CODE_CACHE_SIZE (1 * 1024 * 1024)  // 1MB
#define JIT_MAX_BLOCKS 1024
#define JIT_BLOCK_MAX_INSNS 64  // Maximum instructions per block
#define JIT_HOTNESS_THRESHOLD 5   // Execute N times before JIT compile (lowered for testing)

// Forward declaration for self-reference
typedef struct jit_block_t jit_block_t;

// JIT compiled block
struct jit_block_t {
    uint64_t guest_pc;      // RISC-V PC (start of block)
    uint64_t guest_end_pc;  // End PC of block
    void *host_code;        // ARM64 generated code pointer (with prologue)
    void *host_code_chained; // ARM64 code after prologue (for chaining)
    uint32_t host_size;     // Size of generated code in bytes
    uint32_t num_insns;     // Number of RISC-V instructions
    uint64_t exec_count;    // Execution counter
    bool valid;             // Is this block valid?

    // Block chaining optimization
    uint64_t branch_target; // For BRANCH: target PC if taken
    uint64_t branch_fallthrough; // For BRANCH: PC if not taken
    uint64_t jump_target;   // For JAL: target PC
    jit_block_t *branch_target_block;     // Linked block for branch taken
    jit_block_t *branch_fallthrough_block; // Linked block for branch not taken
    jit_block_t *jump_target_block;        // Linked block for JAL
    uint8_t *branch_patch_offset;   // Offset in code to patch branch
    uint8_t *fallthrough_patch_offset; // Offset in code to patch fallthrough
    uint8_t *jump_patch_offset;     // Offset in code to patch jump
};

// JIT code cache
typedef struct {
    uint8_t *code_buffer;       // Executable memory buffer
    size_t code_offset;         // Current offset in buffer
    size_t code_capacity;       // Total capacity
    jit_block_t blocks[JIT_MAX_BLOCKS];
    size_t num_blocks;
    // Simple hash table for fast lookup
    int block_hash[JIT_MAX_BLOCKS];
} jit_cache_t;

// Execution counter for hotness detection
typedef struct {
    uint64_t pc;
    uint32_t count;
} pc_counter_t;

#define PC_COUNTER_SIZE 256

typedef struct {
    pc_counter_t counters[PC_COUNTER_SIZE];
} hotness_tracker_t;

// JIT API
jit_cache_t* jit_cache_create(void);
void jit_cache_destroy(jit_cache_t *cache);
void jit_cache_flush(jit_cache_t *cache);

// Find compiled block by guest PC
jit_block_t* jit_cache_lookup(jit_cache_t *cache, uint64_t guest_pc);

// Compile a basic block starting at guest_pc
jit_block_t* jit_compile_block(jit_cache_t *cache, struct cpu_t *cpu, struct mem_t *mem,
                                struct devices_t *dev, uint64_t guest_pc);

// Execute compiled block (returns next PC)
uint64_t jit_execute_block(jit_block_t *block, struct cpu_t *cpu);

// Hotness tracking
hotness_tracker_t* hotness_tracker_create(void);
void hotness_tracker_destroy(hotness_tracker_t *tracker);
bool hotness_tracker_should_compile(hotness_tracker_t *tracker, uint64_t pc);
void hotness_tracker_record(hotness_tracker_t *tracker, uint64_t pc);

#endif // JIT_H
