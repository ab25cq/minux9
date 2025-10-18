#ifndef RV64EMU_H
#define RV64EMU_H

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define TLB_SIZE 256
#define TLB_PERM_R 0x1
#define TLB_PERM_W 0x2
#define TLB_PERM_X 0x4
#define TLB_PERM_U 0x8

#define EM_RISCV 243

typedef struct {
    uint64_t tag;
    uint64_t pa_base;
    uint16_t asid;
    uint8_t perms;
    uint8_t valid;
} tlb_entry_t;

typedef struct {
    uint64_t pc;
    uint64_t x[32];
    bool halt;
    uint64_t exit_code;
    uint64_t csr_satp;
    uint64_t csr_mstatus;
    uint64_t csr_mtvec;
    uint64_t csr_mepc;
    uint64_t csr_mcause;
    uint64_t csr_mtval;
    uint64_t csr_mie;
    uint64_t csr_mip;
    uint64_t csr_mideleg;
    uint64_t csr_medeleg;
    uint64_t csr_sstatus;
    uint64_t csr_stvec;
    uint64_t csr_sepc;
    uint64_t csr_scause;
    uint64_t csr_stval;
    uint64_t csr_sie;
    uint64_t csr_sip;
    uint64_t csr_sscratch;
    uint64_t csr_custom51;
    uint64_t csr_time;
    uint64_t csr_menvcfg;
    uint64_t csr_mcounteren;
    uint64_t csr_stimecmp;
    int priv;
    bool pending_interrupt;
    uint64_t interrupt_cause;
    bool lr_valid;
    uint64_t lr_addr;
    tlb_entry_t tlb[TLB_SIZE];
    bool trap_in_progress;
} cpu_t;

typedef struct {
    uint8_t *data;
    uint64_t size;
    uint64_t base;
} mem_t;

typedef struct {
    uint64_t uart_base;
    uint8_t uart_thr;
    uint8_t uart_rbr;
    uint8_t uart_lsr;
    bool uart_thr_empty;
    bool uart_rx_ready;
    uint64_t uart_write_count;

    uint64_t virtio_base;
    uint8_t *disk_image;
    uint64_t disk_size;
    FILE *disk_file;

    uint32_t virtio_device_features;
    uint32_t virtio_driver_features;
    uint32_t virtio_queue_sel;
    uint32_t virtio_queue_num;
    uint32_t virtio_queue_ready;
    uint64_t virtio_queue_desc;
    uint64_t virtio_queue_avail;
    uint64_t virtio_queue_used;
    uint32_t virtio_status;
    uint32_t virtio_interrupt_status;
    uint32_t virtio_interrupt_ack;

    uint64_t clint_base;
    uint64_t mtime;
    uint64_t mtimecmp;

    uint64_t plic_base;
    uint32_t plic_priority[32];
    uint32_t plic_pending;
    uint32_t plic_menable;
    uint32_t plic_mpriority;

    uint64_t timer_interrupt_count;
    uint64_t external_interrupt_count;
} devices_t;

typedef enum {
    ACCESS_FETCH,
    ACCESS_LOAD,
    ACCESS_STORE,
} access_t;

typedef struct {
    uint32_t raw;
    uint32_t opcode;
    uint32_t rd;
    uint32_t rs1;
    uint32_t rs2;
    uint32_t funct3;
    uint32_t funct7;
    int64_t imm_i;
    int64_t imm_s;
    int64_t imm_b;
    int64_t imm_u;
    int64_t imm_j;
} dec_t;

typedef struct {
    bool trace;
    uint64_t max_steps;
} run_opts_t;

uint32_t decompress_c_inst(uint16_t c_inst);
dec_t decode(uint32_t inst);
uint8_t vmem_read8(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc);
uint16_t vmem_read16(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc);
uint32_t vmem_read32(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc);
uint64_t vmem_read64(cpu_t *cpu, const mem_t *mem, devices_t *dev, uint64_t vaddr, access_t acc);
void vmem_write8(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint8_t v, access_t acc);
void vmem_write16(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint16_t v, access_t acc);
void vmem_write32(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint32_t v, access_t acc);
void vmem_write64(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t vaddr, uint64_t v, access_t acc);

bool fetch_and_decode(cpu_t *cpu, mem_t *mem, devices_t *dev, uint64_t pc, dec_t *out_dec,
                      uint64_t *next_pc, uint32_t *raw_inst, bool *was_compressed);

uint64_t jit_cpu_get_reg(const cpu_t *cpu, uint32_t idx);
void jit_cpu_set_reg(cpu_t *cpu, uint32_t idx, uint64_t value);
uint64_t jit_cpu_get_pc(const cpu_t *cpu);
void jit_cpu_set_pc(cpu_t *cpu, uint64_t pc);
void jit_cpu_force_x0_zero(cpu_t *cpu);
bool jit_cpu_check_trap(cpu_t *cpu);

#ifdef __cplusplus
}
#endif

#endif // RV64EMU_H
