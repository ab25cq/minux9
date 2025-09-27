// Minimal RV64I(+W) emulator in standard C (C11)
// - Flat memory, little-endian
// - ELF64 loader (PT_LOAD only) or raw loader
// - ECALL halts and returns a0 as exit code
// - Optional SV39 MMU (very small subset)
// - No interrupts, no full CSR set, no compressed (C) extension
//
// 日本語概要:
// - 最小限の RV64I (+W) エミュレータ実装（C11）
// - 単一フラットなリトルエンディアンメモリ空間を模倣
// - ELF64（PT_LOADのみ）または生バイナリをロード可能
// - ecall により実行停止し、a0 の値をプロセス終了コードとして返す
// - MMU/割り込み/CSR/圧縮命令(C拡張)は未対応

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>

#define EM_RISCV 243

typedef struct {
    uint64_t pc;
    uint64_t x[32]; // x0..x31, x0 is hardwired to 0
    // 日本語: 汎用レジスタ x0〜x31（x0 は常に 0）。
    bool halt;
    uint64_t exit_code;
    // Minimal CSRs used for MMU
    uint64_t csr_satp;   // Only satp used (MODE/ASID/PPN)
    // Simplified privilege: 1 = S-mode assumed for MMU permission checks
    int priv;            // 0=U,1=S,3=M (we only use 1=S)
} cpu_t;

typedef struct {
    uint8_t *data;
    uint64_t size;
    uint64_t base; // base physical address
    // 日本語: ホスト側に確保したフラットメモリ領域（先頭物理アドレス base）。
} mem_t;

// MMU / address translation helpers (SV39)
typedef enum { ACCESS_FETCH, ACCESS_LOAD, ACCESS_STORE } access_t;

static inline uint64_t satp_mode(uint64_t satp) { return (satp >> 60) & 0xF; }
static inline uint64_t satp_asid(uint64_t satp) { return (satp >> 44) & 0xFFFF; }
static inline uint64_t satp_ppn(uint64_t satp)  { return satp & ((1ULL<<44)-1); }

typedef struct {
    bool trace;
    uint64_t max_steps; // 0 = unlimited
} run_opts_t;

static inline uint64_t sext64(uint64_t val, int bits) {
    uint64_t m = 1ULL << (bits - 1);
    return (val ^ m) - m;
}
// 日本語: bits 指定での符号拡張（64bit へ）。

static inline uint32_t get32le(const void *p) {
    const uint8_t *b = (const uint8_t*)p;
    return (uint32_t)b[0] | ((uint32_t)b[1] << 8) | ((uint32_t)b[2] << 16) | ((uint32_t)b[3] << 24);
}
// 日本語: リトルエンディアンの 32bit 値を読み出すヘルパー。

static inline uint64_t get64le(const void *p) {
    const uint8_t *b = (const uint8_t*)p;
    return (uint64_t)b[0] | ((uint64_t)b[1] << 8) | ((uint64_t)b[2] << 16) | ((uint64_t)b[3] << 24)
        | ((uint64_t)b[4] << 32) | ((uint64_t)b[5] << 40) | ((uint64_t)b[6] << 48) | ((uint64_t)b[7] << 56);
}
// 日本語: リトルエンディアンの 64bit 値を読み出すヘルパー。

static void mem_init(mem_t *m, uint64_t size, uint64_t base) {
    m->data = (uint8_t*)calloc(1, size);
    if (!m->data) {
        fprintf(stderr, "mem alloc failed (%" PRIu64 " bytes)\n", size);
        exit(1);
    }
    m->size = size;
    m->base = base;
}
// 日本語: フラットメモリ領域を確保し初期化する。

static inline bool mem_in_range(const mem_t *m, uint64_t addr, uint64_t len) {
    if (addr < m->base) return false;
    uint64_t off = addr - m->base;
    return off + len <= m->size;
}
// 日本語: 指定アドレス範囲がメモリ領域内かどうかを検査。

static uint8_t mem_read8(const mem_t *m, uint64_t addr) {
    if (!mem_in_range(m, addr, 1)) { fprintf(stderr, "mem_read8 OOB @0x%016" PRIx64 "\n", addr); exit(1);}    
    return m->data[addr - m->base];
}
// 日本語: メモリ読み出し（8/16/32/64bit）。範囲外は即終了。
static uint16_t mem_read16(const mem_t *m, uint64_t addr) {
    uint16_t v = 0;
    v |= (uint16_t)mem_read8(m, addr);
    v |= (uint16_t)mem_read8(m, addr+1) << 8;
    return v;
}
static uint32_t mem_read32(const mem_t *m, uint64_t addr) {
    uint32_t v = 0;
    v |= (uint32_t)mem_read8(m, addr);
    v |= (uint32_t)mem_read8(m, addr+1) << 8;
    v |= (uint32_t)mem_read8(m, addr+2) << 16;
    v |= (uint32_t)mem_read8(m, addr+3) << 24;
    return v;
}
static uint64_t mem_read64(const mem_t *m, uint64_t addr) {
    uint64_t v = 0;
    v |= (uint64_t)mem_read8(m, addr);
    v |= (uint64_t)mem_read8(m, addr+1) << 8;
    v |= (uint64_t)mem_read8(m, addr+2) << 16;
    v |= (uint64_t)mem_read8(m, addr+3) << 24;
    v |= (uint64_t)mem_read8(m, addr+4) << 32;
    v |= (uint64_t)mem_read8(m, addr+5) << 40;
    v |= (uint64_t)mem_read8(m, addr+6) << 48;
    v |= (uint64_t)mem_read8(m, addr+7) << 56;
    return v;
}

static void mem_write8(mem_t *m, uint64_t addr, uint8_t v) {
    if (!mem_in_range(m, addr, 1)) { fprintf(stderr, "mem_write8 OOB @0x%016" PRIx64 "\n", addr); exit(1);}   
    m->data[addr - m->base] = v;
}
// 日本語: メモリ書き込み（8/16/32/64bit）。範囲外は即終了。
static void mem_write16(mem_t *m, uint64_t addr, uint16_t v) {
    mem_write8(m, addr, (uint8_t)(v & 0xff));
    mem_write8(m, addr+1, (uint8_t)((v >> 8) & 0xff));
}
static void mem_write32(mem_t *m, uint64_t addr, uint32_t v) {
    mem_write8(m, addr, (uint8_t)(v & 0xff));
    mem_write8(m, addr+1, (uint8_t)((v >> 8) & 0xff));
    mem_write8(m, addr+2, (uint8_t)((v >> 16) & 0xff));
    mem_write8(m, addr+3, (uint8_t)((v >> 24) & 0xff));
}
static void mem_write64(mem_t *m, uint64_t addr, uint64_t v) {
    mem_write8(m, addr, (uint8_t)(v & 0xff));
    mem_write8(m, addr+1, (uint8_t)((v >> 8) & 0xff));
    mem_write8(m, addr+2, (uint8_t)((v >> 16) & 0xff));
    mem_write8(m, addr+3, (uint8_t)((v >> 24) & 0xff));
    mem_write8(m, addr+4, (uint8_t)((v >> 32) & 0xff));
    mem_write8(m, addr+5, (uint8_t)((v >> 40) & 0xff));
    mem_write8(m, addr+6, (uint8_t)((v >> 48) & 0xff));
    mem_write8(m, addr+7, (uint8_t)((v >> 56) & 0xff));
}

// ---------------- MMU: SV39 translator and virtual accessors ----------------
static inline bool mmu_enabled(const cpu_t *cpu) {
    return satp_mode(cpu->csr_satp) == 8; // 8 = Sv39
}

static bool sv39_walk(const cpu_t *cpu, const mem_t *mem, uint64_t va, access_t acc, uint64_t *pa_out) {
    // VA must be sign-extended from bit 38
    uint64_t sign_mask = ~((1ULL<<39)-1);
    if (((va & sign_mask) != 0) && ((va & sign_mask) != sign_mask)) {
        fprintf(stderr, "SV39: VA sign-extension invalid: 0x%016" PRIx64 "\n", va);
        return false;
    }

    uint64_t vpn[3] = { (va >> 12) & 0x1FF, (va >> 21) & 0x1FF, (va >> 30) & 0x1FF };
    uint64_t off = va & 0xFFF;
    uint64_t a = satp_ppn(cpu->csr_satp) << 12; // root page table physical address

    for (int level = 2; level >= 0; level--) {
        uint64_t pte_addr = a + vpn[level] * 8;
        if (!mem_in_range(mem, pte_addr, 8)) {
            fprintf(stderr, "SV39: PTE addr OOB @0x%016" PRIx64 " (level %d)\n", pte_addr, level);
            return false;
        }
        uint64_t pte = mem_read64(mem, pte_addr);
        uint64_t V = pte & 1ULL;
        uint64_t R = (pte >> 1) & 1ULL;
        uint64_t W = (pte >> 2) & 1ULL;
        uint64_t X = (pte >> 3) & 1ULL;
        uint64_t U = (pte >> 4) & 1ULL;
        uint64_t PPN0 = (pte >> 10) & 0x1FFULL;
        uint64_t PPN1 = (pte >> 19) & 0x1FFULL;
        uint64_t PPN2 = (pte >> 28) & 0x3FFFFFFULL; // 26 bits

        if (!V || (!R && W)) {
            return false; // invalid PTE
        }

        if (R || X) {
            // Leaf
            if (level == 2) {
                if ((PPN1 != 0) || (PPN0 != 0)) return false;
            } else if (level == 1) {
                if (PPN0 != 0) return false;
            }
            if (acc == ACCESS_FETCH && !X) return false;
            if (acc == ACCESS_LOAD  && !R) return false;
            if (acc == ACCESS_STORE && !W) return false;
            if (cpu->priv == 1 /*S-mode*/ && U) return false;

            uint64_t phys_ppn2 = PPN2;
            uint64_t phys_ppn1 = (level <= 1) ? PPN1 : vpn[1];
            uint64_t phys_ppn0 = (level == 0) ? PPN0 : vpn[0];
            uint64_t pa = (phys_ppn2 << 30) | (phys_ppn1 << 21) | (phys_ppn0 << 12) | off;
            *pa_out = pa;
            return true;
        } else {
            // Non-leaf, next level walk
            uint64_t next_ppn = (PPN2 << 18) | (PPN1 << 9) | PPN0;
            a = next_ppn << 12;
        }
    }
    return false; // fell off levels
}

static bool virt_to_phys(const cpu_t *cpu, const mem_t *mem, uint64_t vaddr, access_t acc, uint64_t *paddr) {
    if (!mmu_enabled(cpu)) { *paddr = vaddr; return true; }
    return sv39_walk(cpu, mem, vaddr, acc, paddr);
}

static uint8_t vmem_read8(const cpu_t *cpu, const mem_t *mem, uint64_t vaddr, access_t acc) {
    uint64_t pa; if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) { fprintf(stderr, "MMU: page fault on read8 @0x%016" PRIx64 "\n", vaddr); exit(1);} 
    return mem_read8(mem, pa);
}
static uint16_t vmem_read16(const cpu_t *cpu, const mem_t *mem, uint64_t vaddr, access_t acc) {
    uint16_t v = 0;
    v |= (uint16_t)vmem_read8(cpu, mem, vaddr, acc);
    v |= (uint16_t)vmem_read8(cpu, mem, vaddr+1, acc) << 8;
    return v;
}
static uint32_t vmem_read32(const cpu_t *cpu, const mem_t *mem, uint64_t vaddr, access_t acc) {
    uint32_t v = 0;
    v |= (uint32_t)vmem_read8(cpu, mem, vaddr, acc);
    v |= (uint32_t)vmem_read8(cpu, mem, vaddr+1, acc) << 8;
    v |= (uint32_t)vmem_read8(cpu, mem, vaddr+2, acc) << 16;
    v |= (uint32_t)vmem_read8(cpu, mem, vaddr+3, acc) << 24;
    return v;
}
static uint64_t vmem_read64(const cpu_t *cpu, const mem_t *mem, uint64_t vaddr, access_t acc) {
    uint64_t v = 0;
    for (int i = 0; i < 8; i++) v |= (uint64_t)vmem_read8(cpu, mem, vaddr+i, acc) << (8*i);
    return v;
}
static void vmem_write8(const cpu_t *cpu, mem_t *mem, uint64_t vaddr, uint8_t val, access_t acc) {
    uint64_t pa; if (!virt_to_phys(cpu, mem, vaddr, acc, &pa)) { fprintf(stderr, "MMU: page fault on write8 @0x%016" PRIx64 "\n", vaddr); exit(1);} 
    mem_write8(mem, pa, val);
}
static void vmem_write16(const cpu_t *cpu, mem_t *mem, uint64_t vaddr, uint16_t val, access_t acc) {
    vmem_write8(cpu, mem, vaddr, (uint8_t)(val & 0xff), acc);
    vmem_write8(cpu, mem, vaddr+1, (uint8_t)((val >> 8) & 0xff), acc);
}
static void vmem_write32(const cpu_t *cpu, mem_t *mem, uint64_t vaddr, uint32_t val, access_t acc) {
    vmem_write8(cpu, mem, vaddr, (uint8_t)(val & 0xff), acc);
    vmem_write8(cpu, mem, vaddr+1, (uint8_t)((val >> 8) & 0xff), acc);
    vmem_write8(cpu, mem, vaddr+2, (uint8_t)((val >> 16) & 0xff), acc);
    vmem_write8(cpu, mem, vaddr+3, (uint8_t)((val >> 24) & 0xff), acc);
}
static void vmem_write64(const cpu_t *cpu, mem_t *mem, uint64_t vaddr, uint64_t val, access_t acc) {
    for (int i = 0; i < 8; i++) vmem_write8(cpu, mem, vaddr+i, (uint8_t)((val >> (8*i)) & 0xff), acc);
}

static inline void set_x(cpu_t *cpu, int rd, uint64_t val) {
    if (rd != 0) cpu->x[rd] = val;
}
// 日本語: x0 は常に 0 なので書き込み禁止。他はレジスタ書き込み。

static void dump_regs(const cpu_t *cpu) {
    static const char *abi[32] = {
        "zero","ra","sp","gp","tp",
        "t0","t1","t2",
        "s0/fp","s1",
        "a0","a1","a2","a3","a4","a5","a6","a7",
        "s2","s3","s4","s5","s6","s7","s8","s9","s10","s11",
        "t3","t4","t5","t6"
    };
    for (int i = 0; i < 32; i++) {
        fprintf(stderr, "%5s=%016" PRIx64 "%s", abi[i], cpu->x[i], ((i%4)==3)?"\n":" ");
    }
}
// 日本語: レジスタのトレース出力。

// ELF64 loader (very small subset)
// 日本語: RISC-V ELF64 のごく一部（PT_LOAD セグメントのみ）をロード。
static bool load_elf64_riscv(mem_t *mem, const char *path, uint64_t *entry_out) {
    FILE *f = fopen(path, "rb");
    if (!f) return false;
    uint8_t e[64];
    if (fread(e, 1, 64, f) != 64) { fclose(f); return false; }
    if (e[0]!=0x7f || e[1]!='E' || e[2]!='L' || e[3]!='F') { fclose(f); return false; }
    if (e[4] != 2 /*ELFCLASS64*/ || e[5] != 1 /*little*/ ) { fclose(f); return false; }
    uint16_t e_machine = e[18] | (e[19] << 8);
    if (e_machine != EM_RISCV) { fclose(f); return false; }
    uint64_t e_entry = get64le(e+24);
    uint64_t e_phoff = get64le(e+32);
    uint16_t e_phentsize = e[54] | (e[55] << 8);
    uint16_t e_phnum = e[56] | (e[57] << 8);

    if (fseek(f, (long)e_phoff, SEEK_SET) != 0) { fclose(f); return false; }
    for (uint16_t i = 0; i < e_phnum; i++) {
        uint8_t ph[56];
        if (fread(ph, 1, sizeof(ph), f) != sizeof(ph)) { fclose(f); return false; }
        uint32_t p_type = get32le(ph+0);
        if (p_type != 1 /*PT_LOAD*/) continue;
        uint64_t p_offset = get64le(ph+8);
        uint64_t p_vaddr  = get64le(ph+16);
        uint64_t p_filesz = get64le(ph+32);
        uint64_t p_memsz  = get64le(ph+40);
        if (!mem_in_range(mem, p_vaddr, p_memsz)) {
            fprintf(stderr, "ELF PT_LOAD out of range: vaddr=0x%016" PRIx64 ", memsz=%" PRIu64 "\n", p_vaddr, p_memsz);
            fclose(f); return false;
        }
        long cur = ftell(f);
        if (cur < 0) { fclose(f); return false; }
        if (fseek(f, (long)p_offset, SEEK_SET) != 0) { fclose(f); return false; }
        if (p_filesz > 0) {
            if (fread(mem->data + (p_vaddr - mem->base), 1, p_filesz, f) != p_filesz) { fclose(f); return false; }
        }
        if (p_memsz > p_filesz) {
            memset(mem->data + (p_vaddr - mem->base) + p_filesz, 0, (size_t)(p_memsz - p_filesz));
        }
        if (fseek(f, (long)(e_phoff + (uint64_t)(i+1)*e_phentsize), SEEK_SET) != 0) { fclose(f); return false; }
    }
    fclose(f);
    if (entry_out) *entry_out = e_entry;
    return true;
}

static bool load_raw(mem_t *mem, const char *path, uint64_t addr) {
    FILE *f = fopen(path, "rb");
    if (!f) return false;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return false; }
    long len = ftell(f);
    if (len < 0) { fclose(f); return false; }
    if (fseek(f, 0, SEEK_SET) != 0) { fclose(f); return false; }
    if (!mem_in_range(mem, addr, (uint64_t)len)) { fclose(f); return false; }
    size_t n = fread(mem->data + (addr - mem->base), 1, (size_t)len, f);
    fclose(f);
    return n == (size_t)len;
}

// Decode helpers
// 日本語: 命令デコードのためのフィールド抽出と即値生成（I/S/B/U/J）。
typedef struct {
    uint32_t raw;
    uint32_t opcode, rd, rs1, rs2, funct3, funct7;
    int64_t imm_i, imm_s, imm_b, imm_u, imm_j;
} dec_t;

static inline int64_t sext32i(int32_t v, int bits) {
    int32_t m = 1 << (bits - 1);
    return (int64_t)((v ^ m) - m);
}

static dec_t decode(uint32_t inst) {
    dec_t d = {0};
    d.raw = inst;
    d.opcode = inst & 0x7f;
    d.rd = (inst >> 7) & 0x1f;
    d.funct3 = (inst >> 12) & 7;
    d.rs1 = (inst >> 15) & 0x1f;
    d.rs2 = (inst >> 20) & 0x1f;
    d.funct7 = (inst >> 25) & 0x7f;
    // immediates
    // 日本語: 各形式の即値を符号拡張して組み立てる。
    d.imm_i = sext32i((int32_t)inst >> 20, 12);
    int32_t imm_s = ((inst >> 7) & 0x1f) | ((int32_t)inst & 0xfe000000);
    imm_s = (imm_s & 0x1f) | ((inst >> 20) & 0xfe0);
    d.imm_s = sext32i(((int32_t)(inst & 0xfe000000)) >> 20 | ((inst >> 7) & 0x1f), 12);
    // Proper S-type
    int32_t s_hi = (int32_t)((inst >> 25) & 0x7f);
    int32_t s_lo = (int32_t)((inst >> 7) & 0x1f);
    int32_t s_imm = (s_hi << 5) | s_lo;
    d.imm_s = sext32i(s_imm, 12);
    // B-type
    int32_t b_imm = ((inst >> 31) & 0x1) << 12
                  | ((inst >> 7) & 0x1) << 11
                  | ((inst >> 25) & 0x3f) << 5
                  | ((inst >> 8) & 0xf) << 1;
    d.imm_b = sext32i(b_imm, 13);
    // U-type
    d.imm_u = (int64_t)((uint64_t)inst & 0xfffff000);
    // J-type
    int32_t j_imm = ((inst >> 31) & 0x1) << 20
                  | ((inst >> 21) & 0x3ff) << 1
                  | ((inst >> 20) & 0x1) << 11
                  | ((inst >> 12) & 0xff) << 12;
    d.imm_j = sext32i(j_imm, 21);
    return d;
}

static inline uint64_t zext32(uint64_t x) { return (uint32_t)x; }
static inline uint64_t sext32(uint64_t x) { return (uint64_t)(int64_t)(int32_t)(uint32_t)x; }

static void step(cpu_t *cpu, mem_t *mem, const run_opts_t *opt) {
    uint64_t pc = cpu->pc;
    uint32_t inst = vmem_read32(cpu, mem, pc, ACCESS_FETCH);
    if ((inst & 3) != 3) {
        fprintf(stderr, "Compressed (C) not supported at PC=0x%016" PRIx64 "\n", pc);
        exit(1);
    }
    // 日本語: 16bit 圧縮命令(C拡張)は非対応。下位2bit!=3 は圧縮形式。
    dec_t d = decode(inst);
    uint64_t next_pc = pc + 4;

    uint64_t rs1 = cpu->x[d.rs1];
    uint64_t rs2 = cpu->x[d.rs2];
    uint64_t rd_val = 0;
    bool do_write = false;

    // 日本語: 主なオペコードを分岐して実行。基本命令セット RV64I (+W) のみ。
    switch (d.opcode) {
        case 0x37: // LUI
            rd_val = (uint64_t)d.imm_u;
            do_write = true;
            break;
        case 0x17: // AUIPC
            rd_val = pc + (uint64_t)d.imm_u;
            do_write = true;
            break;
        case 0x6F: { // JAL
            rd_val = next_pc;
            do_write = true;
            next_pc = pc + (uint64_t)d.imm_j;
            break;
        }
        case 0x67: { // JALR
            uint64_t t = (rs1 + (uint64_t)d.imm_i) & ~1ULL;
            rd_val = next_pc;
            do_write = true;
            next_pc = t;
            break;
        }
        case 0x63: { // BRANCH
            int64_t off = d.imm_b;
            bool take = false;
            switch (d.funct3) {
                case 0: take = (rs1 == rs2); break; // BEQ
                case 1: take = (rs1 != rs2); break; // BNE
                case 4: take = ((int64_t)rs1 < (int64_t)rs2); break; // BLT
                case 5: take = ((int64_t)rs1 >= (int64_t)rs2); break; // BGE
                case 6: take = (rs1 < rs2); break; // BLTU
                case 7: take = (rs1 >= rs2); break; // BGEU
                default:
                    fprintf(stderr, "Unknown BRANCH funct3=%u at PC=0x%016" PRIx64 "\n", d.funct3, pc); exit(1);
            }
            if (take) next_pc = pc + (uint64_t)off;
            break;
        }
        case 0x03: { // LOAD
            uint64_t addr = rs1 + (uint64_t)d.imm_i;
            switch (d.funct3) {
                case 0: rd_val = (uint64_t)(int64_t)(int8_t)vmem_read8(cpu, mem, addr, ACCESS_LOAD); break; // LB
                case 1: rd_val = (uint64_t)(int64_t)(int16_t)vmem_read16(cpu, mem, addr, ACCESS_LOAD); break; // LH
                case 2: rd_val = (uint64_t)(int64_t)(int32_t)vmem_read32(cpu, mem, addr, ACCESS_LOAD); break; // LW
                case 3: rd_val = vmem_read64(cpu, mem, addr, ACCESS_LOAD); break; // LD
                case 4: rd_val = (uint64_t)vmem_read8(cpu, mem, addr, ACCESS_LOAD); break; // LBU
                case 5: rd_val = (uint64_t)vmem_read16(cpu, mem, addr, ACCESS_LOAD); break; // LHU
                case 6: rd_val = (uint64_t)vmem_read32(cpu, mem, addr, ACCESS_LOAD); break; // LWU
                default: fprintf(stderr, "Unknown LOAD funct3=%u\n", d.funct3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x23: { // STORE
            uint64_t addr = rs1 + (uint64_t)d.imm_s;
            switch (d.funct3) {
                case 0: vmem_write8(cpu, mem, addr, (uint8_t)(rs2 & 0xff), ACCESS_STORE); break; // SB
                case 1: vmem_write16(cpu, mem, addr, (uint16_t)(rs2 & 0xffff), ACCESS_STORE); break; // SH
                case 2: vmem_write32(cpu, mem, addr, (uint32_t)(rs2 & 0xffffffffu), ACCESS_STORE); break; // SW
                case 3: vmem_write64(cpu, mem, addr, rs2, ACCESS_STORE); break; // SD
                default: fprintf(stderr, "Unknown STORE funct3=%u\n", d.funct3); exit(1);
            }
            break;
        }
        case 0x13: { // OP-IMM
            switch (d.funct3) {
                case 0: rd_val = rs1 + (uint64_t)d.imm_i; break; // ADDI
                case 2: rd_val = ((int64_t)rs1 < (int64_t)(int64_t)d.imm_i) ? 1 : 0; break; // SLTI
                case 3: rd_val = (rs1 < (uint64_t)d.imm_i) ? 1 : 0; break; // SLTIU
                case 4: rd_val = rs1 ^ (uint64_t)d.imm_i; break; // XORI
                case 6: rd_val = rs1 | (uint64_t)d.imm_i; break; // ORI
                case 7: rd_val = rs1 & (uint64_t)d.imm_i; break; // ANDI
                case 1: { // SLLI
                    uint32_t sh = d.imm_i & 0x3f;
                    rd_val = rs1 << sh;
                    break;
                }
                case 5: { // SRLI/SRAI
                    uint32_t sh = d.imm_i & 0x3f;
                    if ((d.imm_i & (1<<10)) == 0) { // SRLI (funct7=0000000)
                        rd_val = rs1 >> sh;
                    } else { // SRAI (funct7=0100000)
                        rd_val = (uint64_t)((int64_t)rs1 >> sh);
                    }
                    break;
                }
                default: fprintf(stderr, "Unknown OP-IMM funct3=%u\n", d.funct3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x33: { // OP
            uint32_t f3 = d.funct3;
            uint32_t f7 = d.funct7;
            switch (f3) {
                case 0:
                    if (f7 == 0x00) rd_val = rs1 + rs2; // ADD
                    else if (f7 == 0x20) rd_val = rs1 - rs2; // SUB
                    else { fprintf(stderr, "Unknown OP f7=0x%x f3=%u\n", f7, f3); exit(1);}    
                    break;
                case 1: // SLL
                    rd_val = rs1 << (rs2 & 0x3f);
                    break;
                case 2: // SLT
                    rd_val = ((int64_t)rs1 < (int64_t)rs2) ? 1 : 0;
                    break;
                case 3: // SLTU
                    rd_val = (rs1 < rs2) ? 1 : 0;
                    break;
                case 4: // XOR
                    rd_val = rs1 ^ rs2; break;
                case 5: // SRL/SRA
                    if (f7 == 0x00) rd_val = rs1 >> (rs2 & 0x3f);
                    else if (f7 == 0x20) rd_val = (uint64_t)((int64_t)rs1 >> (rs2 & 0x3f));
                    else { fprintf(stderr, "Unknown SRL/SRA f7=0x%x\n", f7); exit(1);}    
                    break;
                case 6: // OR
                    rd_val = rs1 | rs2; break;
                case 7: // AND
                    rd_val = rs1 & rs2; break;
                default: fprintf(stderr, "Unknown OP funct3=%u\n", f3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x1B: { // OP-IMM-32
            uint32_t sh = d.imm_i & 0x1f;
            switch (d.funct3) {
                case 0: rd_val = sext32(zext32(rs1) + (uint32_t)(int32_t)d.imm_i); break; // ADDIW
                case 1: rd_val = sext32(zext32(rs1) << sh); break; // SLLIW
                case 5: // SRLIW/SRAIW
                    if ((d.imm_i & (1<<10)) == 0) rd_val = sext32(zext32(rs1) >> sh); // SRLIW
                    else rd_val = sext32((uint32_t)((int32_t)zext32(rs1) >> sh)); // SRAIW
                    break;
                default: fprintf(stderr, "Unknown OP-IMM-32 f3=%u\n", d.funct3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x3B: { // OP-32
            uint32_t f3 = d.funct3;
            uint32_t f7 = d.funct7;
            uint32_t a = (uint32_t)rs1;
            uint32_t b = (uint32_t)rs2;
            switch (f3) {
                case 0:
                    if (f7 == 0x00) rd_val = sext32((uint64_t)((uint32_t)(a + b))); // ADDW
                    else if (f7 == 0x20) rd_val = sext32((uint64_t)((uint32_t)(a - b))); // SUBW
                    else { fprintf(stderr, "Unknown OP-32 f7=0x%x f3=%u\n", f7, f3); exit(1);}    
                    break;
                case 1: // SLLW
                    rd_val = sext32((uint64_t)((uint32_t)(a << (b & 0x1f))));
                    break;
                case 5: // SRLW/SRAW
                    if (f7 == 0x00) rd_val = sext32((uint64_t)(a >> (b & 0x1f)));
                    else if (f7 == 0x20) rd_val = sext32((uint64_t)((uint32_t)((int32_t)a >> (b & 0x1f))));
                    else { fprintf(stderr, "Unknown SRLW/SRAW f7=0x%x\n", f7); exit(1);}    
                    break;
                default: fprintf(stderr, "Unknown OP-32 f3=%u\n", f3); exit(1);
            }
            do_write = true;
            break;
        }
        case 0x0F: // FENCE family — treat as NOP
            break;
        case 0x73: { // SYSTEM
            uint32_t csr_funct = d.funct3;
            if (csr_funct == 0) {
                uint32_t sys_imm12 = (d.raw >> 20) & 0xFFF;
                if (sys_imm12 == 0) { // ECALL
                    cpu->halt = true;
                    cpu->exit_code = cpu->x[10]; // a0
                } else if (sys_imm12 == 1) { // EBREAK
                    cpu->halt = true;
                    cpu->exit_code = 0;
                } else if ((d.raw & 0xfe007fffU) == 0x12000073U) {
                    // SFENCE.VMA (rs1/rs2 ignored) — no TLB, so treat as NOP
                } else {
                    fprintf(stderr, "SYSTEM(0) unknown imm12=0x%x at PC=0x%016" PRIx64 "\n", sys_imm12, pc);
                    exit(1);
                }
            } else if (csr_funct >= 1 && csr_funct <= 7) {
                // Minimal CSR: implement satp (0x180) only
                uint32_t csr_addr = (d.raw >> 20) & 0xFFF;
                uint64_t old = 0;
                if (csr_addr == 0x180) old = cpu->csr_satp; else old = 0; // unknown CSRs read as 0
                uint64_t zimm = d.rs1; // for *I forms, rs1 encoded as zimm
                bool is_imm = (csr_funct & 0x4) != 0;
                uint64_t src = is_imm ? (uint64_t)zimm : cpu->x[d.rs1];
                uint64_t newv = old;
                switch (csr_funct & 0x3) {
                    case 1: // CSRRW
                        newv = src;
                        break;
                    case 2: // CSRRS
                        if (src) newv = old | src;
                        break;
                    case 3: // CSRRC
                        if (src) newv = old & ~src;
                        break;
                    default:
                        fprintf(stderr, "Unsupported CSR funct3=%u\n", csr_funct); exit(1);
                }
                if (csr_addr == 0x180) {
                    cpu->csr_satp = newv;
                }
                rd_val = old; do_write = (d.rd != 0);
            } else {
                fprintf(stderr, "SYSTEM not implemented (funct3=%u) at PC=0x%016" PRIx64 "\n", csr_funct, pc);
                exit(1);
            }
            break;
        }
        default:
            fprintf(stderr, "Unknown opcode 0x%02x at PC=0x%016" PRIx64 " inst=0x%08x\n", d.opcode, pc, d.raw);
            exit(1);
    }

    if (do_write) set_x(cpu, d.rd, rd_val);
    cpu->pc = next_pc;
    cpu->x[0] = 0;

    if (opt && opt->trace) {
        fprintf(stderr, "PC=0x%016" PRIx64 " INST=0x%08x\n", pc, inst);
        dump_regs(cpu);
    }
}

typedef struct {
    const char *image_path;
    bool raw;
    uint64_t raw_addr;
    uint64_t entry;
    bool entry_set;
    uint64_t mem_size;
    uint64_t mem_base;
    run_opts_t run;
    bool smoke;
    // MMU options
    bool mmu_sv39;
    bool satp_set;
    uint64_t satp_val;
    bool rootpt_set;
    uint64_t rootpt_pa;
} cli_t;
// 日本語: コマンドライン引数の保持用。画像の種類（ELF/RAW）、メモリ設定、トレース等。

static void usage(const char *prog) {
    fprintf(stderr,
        "Usage: %s [options]\n"
        "Options:\n"
        "  -i <file>         Input image (ELF64 by default)\n"
        "  --raw <addr>      Treat input as raw, load at hex <addr>\n"
        "  --mem <MB>        Memory size in MB (default 128)\n"
        "  --base <hex>      Memory base address (default 0x80000000)\n"
        "  --entry <hex>     Override entry PC\n"
        "  --mmu <mode>      MMU mode: off|sv39 (default off)\n"
        "  --satp <hex>      Set satp CSR value (implies MMU if MODE=8)\n"
        "  --rootpt <hex>    Set SV39 root page table physical address (implies sv39)\n"
        "  --trace           Enable instruction + regs trace\n"
        "  --steps <N>       Max steps before stop (0=inf)\n"
        "  --smoke           Run built-in smoke (no file needed)\n",
        prog);
}

static bool parse_hex_u64(const char *s, uint64_t *out) {
    if (!s) return false;
    char *end = NULL;
    uint64_t v = strtoull(s, &end, 16);
    if (end == s || (end && *end != '\0')) return false;
    *out = v; return true;
}

static bool parse_u64(const char *s, uint64_t *out) {
    if (!s) return false;
    char *end = NULL;
    uint64_t v = strtoull(s, &end, 10);
    if (end == s || (end && *end != '\0')) return false;
    *out = v; return true;
}

static void cli_defaults(cli_t *c) {
    memset(c, 0, sizeof(*c));
    c->mem_size = 128ULL << 20; // 128 MiB
    // 日本語: 既定メモリサイズ 128MiB、ベースアドレス 0x8000_0000。
    c->mem_base = 0x80000000ULL;
    c->run.trace = false;
    c->run.max_steps = 0;
    c->raw = false;
    c->raw_addr = 0;
    c->entry_set = false;
    c->smoke = false;
    c->mmu_sv39 = false;
    c->satp_set = false;
    c->satp_val = 0;
    c->rootpt_set = false;
    c->rootpt_pa = 0;
}

static bool cli_parse(cli_t *c, int argc, char **argv) {
    cli_defaults(c);
    const char *prog = argv[0];
    for (int i = 1; i < argc; i++) {
        const char *a = argv[i];
        if (strcmp(a, "-h") == 0 || strcmp(a, "--help") == 0) {
            usage(prog); return false;
        } else if (strcmp(a, "-i") == 0) {
            if (++i >= argc) { fprintf(stderr, "-i requires a file\n"); return false; }
            c->image_path = argv[i];
        } else if (strcmp(a, "--raw") == 0) {
            if (++i >= argc) { fprintf(stderr, "--raw requires hex addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->raw_addr)) { fprintf(stderr, "invalid --raw addr\n"); return false; }
            c->raw = true;
        } else if (strcmp(a, "--mem") == 0) {
            if (++i >= argc) { fprintf(stderr, "--mem requires MB\n"); return false; }
            uint64_t mb;
            if (!parse_u64(argv[i], &mb)) { fprintf(stderr, "invalid --mem\n"); return false; }
            c->mem_size = mb << 20;
        } else if (strcmp(a, "--base") == 0) {
            if (++i >= argc) { fprintf(stderr, "--base requires hex addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->mem_base)) { fprintf(stderr, "invalid --base\n"); return false; }
        } else if (strcmp(a, "--entry") == 0) {
            if (++i >= argc) { fprintf(stderr, "--entry requires hex addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->entry)) { fprintf(stderr, "invalid --entry\n"); return false; }
            c->entry_set = true;
        } else if (strcmp(a, "--mmu") == 0) {
            if (++i >= argc) { fprintf(stderr, "--mmu requires mode (off|sv39)\n"); return false; }
            const char *m = argv[i];
            if (strcmp(m, "off") == 0) { c->mmu_sv39 = false; }
            else if (strcmp(m, "sv39") == 0) { c->mmu_sv39 = true; }
            else { fprintf(stderr, "invalid --mmu mode: %s\n", m); return false; }
        } else if (strcmp(a, "--satp") == 0) {
            if (++i >= argc) { fprintf(stderr, "--satp requires hex value\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->satp_val)) { fprintf(stderr, "invalid --satp\n"); return false; }
            c->satp_set = true;
        } else if (strcmp(a, "--rootpt") == 0) {
            if (++i >= argc) { fprintf(stderr, "--rootpt requires hex physical addr\n"); return false; }
            if (!parse_hex_u64(argv[i], &c->rootpt_pa)) { fprintf(stderr, "invalid --rootpt\n"); return false; }
            c->rootpt_set = true;
        } else if (strcmp(a, "--trace") == 0) {
            c->run.trace = true;
        } else if (strcmp(a, "--steps") == 0) {
            if (++i >= argc) { fprintf(stderr, "--steps requires N\n"); return false; }
            if (!parse_u64(argv[i], &c->run.max_steps)) { fprintf(stderr, "invalid --steps\n"); return false; }
        } else if (strcmp(a, "--smoke") == 0) {
            c->smoke = true;
        } else {
            fprintf(stderr, "Unknown arg: %s\n", a);
            usage(prog);
            return false;
        }
    }
    return true;
}

static void run(cpu_t *cpu, mem_t *mem, const run_opts_t *opt) {
    uint64_t steps = 0;
    while (!cpu->halt) {
        step(cpu, mem, opt);
        if (opt->max_steps && ++steps >= opt->max_steps) {
            fprintf(stderr, "Hit max steps (%" PRIu64 "), stopping.\n", opt->max_steps);
            break;
        }
    }
}
// 日本語: 実行ループ。停止フラグまたはステップ上限に達するまで step を繰り返す。

static void load_smoke(mem_t *mem, uint64_t addr, uint64_t *entry) {
    // Program: addi a0, x0, 42; ecall
    // 日本語: 最小の動作確認プログラム（a0=42 をセットして ecall）。
    uint32_t prog[] = {0x02a00513u, 0x00000073u};
    mem_write32(mem, addr, prog[0]);
    mem_write32(mem, addr+4, prog[1]);
    *entry = addr;
}

int main(int argc, char **argv) {
    cli_t cli;
    if (!cli_parse(&cli, argc, argv)) {
        return 1;
    }

    mem_t mem; mem_init(&mem, cli.mem_size, cli.mem_base);
    cpu_t cpu = {0};
    cpu.priv = 1; // S-mode as a simplification

    uint64_t entry = cli.mem_base;
    bool loaded = false;
    if (cli.smoke) {
        load_smoke(&mem, cli.mem_base, &entry);
        loaded = true;
    } else if (cli.image_path) {
        if (!cli.raw) {
            loaded = load_elf64_riscv(&mem, cli.image_path, &entry);
        } else {
            loaded = load_raw(&mem, cli.image_path, cli.raw_addr ? cli.raw_addr : cli.mem_base);
            entry = cli.raw_addr ? cli.raw_addr : cli.mem_base;
        }
        if (!loaded) {
            fprintf(stderr, "Failed to load image: %s\n", cli.image_path);
            return 1;
        }
    } else {
        fprintf(stderr, "No input specified. Use -i <file> or --smoke.\n");
        return 1;
    }

    if (cli.satp_set) {
        cpu.csr_satp = cli.satp_val;
    } else if (cli.rootpt_set) {
        cpu.csr_satp = (8ULL<<60) | ((cli.rootpt_pa >> 12) & ((1ULL<<44)-1));
    } else if (cli.mmu_sv39) {
        cpu.csr_satp = (8ULL<<60); // enable Sv39 with PPN=0 (likely faults unless user set proper tables)
    }

    if (cli.entry_set) entry = cli.entry;
    cpu.pc = entry;

    run(&cpu, &mem, &cli.run);

    if (cpu.halt) {
        printf("ECALL exit: %" PRIu64 "\n", cpu.exit_code);
        return (int)(cpu.exit_code & 0xff);
    }
    return 0;
}
