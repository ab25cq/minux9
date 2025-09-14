#include "minux.h"
#include "elf.h"

// Minimal in-OS C compiler (very tiny subset)
// Supports: int main(){ puts("..."); return N; }
// Emits: RV64 ELF64 static, single PT_LOAD with .text + inline string

// --- Simple source scanning -------------------------------------------------

static int str_len(const char *s){ int n=0; while(s && s[n]) n++; return n; }
static int is_space(char c){ return c==' '||c=='\t'||c=='\n'||c=='\r'; }
static int starts_with(const char* s, const char* p){
  int i=0; while(p[i]){ if(s[i]!=p[i]) return 0; i++; } return 1;
}
static void skip_ws(const char** ps){ const char* s=*ps; while(is_space(*s)) s++; *ps=s; }

static int is_alpha_(char c){ return (c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='_'; }
static int is_alnum_(char c){ return is_alpha_(c) || (c>='0'&&c<='9'); }

// simple variable table
#define MAX_VARS 64
static char var_name[MAX_VARS][32];
static long var_val[MAX_VARS];
static int  var_cnt=0;

static int find_var(const char* name){
  for(int i=0;i<var_cnt;i++){ int j=0; while(var_name[i][j]==name[j] && name[j]) j++; if (var_name[i][j]==name[j]) return i; }
  return -1;
}
static int set_var(const char* name, long v){
  int idx = find_var(name);
  if (idx<0){ if (var_cnt>=MAX_VARS) return -1; int j=0; while(name[j] && j<31){ var_name[var_cnt][j]=name[j]; j++; } var_name[var_cnt][j]='\0'; idx = var_cnt++; }
  var_val[idx] = v; return 0;
}
static long get_var(const char* name){ int idx=find_var(name); return (idx>=0)?var_val[idx]:0; }

// read C-style string literal from p; supports \n and \\ only; appends newline if add_nl
static int read_string_lit(const char** pp, char* out, int cap, int add_nl){
  const char* p=*pp; int k=0; if (*p!='\"') return -1; p++;
  while(*p && *p!='\"' && k<cap-1){
    if (*p=='\\' && p[1]){ p++; char e=*p++; out[k++] = (e=='n') ? '\n' : e; continue; }
    out[k++] = *p++;
  }
  if (*p=='\"') p++;
  if (add_nl && k<cap-1) out[k++]='\n';
  out[k]='\0';
  *pp=p; return k;
}

// rodata string pool for puts
#define RO_MAX_STR 128
#define RO_MAX_LEN 256
static char ro_s[RO_MAX_STR][RO_MAX_LEN];
static int  ro_len[RO_MAX_STR];
static int  ro_off[RO_MAX_STR];
static int  ro_cnt;

static void ro_reset(void){ ro_cnt=0; }
static int ro_find(const char* s, int len){
  for(int i=0;i<ro_cnt;i++){
    if (ro_len[i]!=len) continue;
    int ok=1; for(int j=0;j<len;j++){ if (ro_s[i][j]!=s[j]){ ok=0; break; } }
    if (ok) return i;
  }
  return -1;
}
static int ro_add(const char* s, int len){
  int i = ro_find(s, len); if (i>=0) return i;
  if (ro_cnt>=RO_MAX_STR) return -1;
  for(int j=0;j<len && j<RO_MAX_LEN-1;j++) ro_s[ro_cnt][j]=s[j];
  ro_s[ro_cnt][len]='\0';
  ro_len[ro_cnt]=len;
  ro_off[ro_cnt] = (ro_cnt==0)?0:(ro_off[ro_cnt-1] + ro_len[ro_cnt-1]);
  return ro_cnt++;
}
static int ro_total(void){ return (ro_cnt==0)?0:(ro_off[ro_cnt-1] + ro_len[ro_cnt-1]); }

// Extract puts("...") string and return value N (defaults to 0)
// --- tiny integer expression parser for return --------------------------------
static long parse_expr(const char **pp);

static long parse_number(const char **pp){
  const char *p=*pp; long v=0; int neg=0; skip_ws(&p);
  if (*p=='+'||*p=='-'){ neg = (*p=='-'); p++; }
  if (!(*p>='0'&&*p<='9')){ *pp=p; return 0; }
  while(*p>='0'&&*p<='9'){ v = v*10 + (*p-'0'); p++; }
  *pp=p; return neg?-v:v;
}

static long parse_primary_(const char **pp){
  const char* p=*pp; skip_ws(&p);
  if (*p=='('){ p++; long x=parse_expr(&p); skip_ws(&p); if(*p==')') p++; *pp=p; return x; }
  if (is_alpha_(*p)){
    char name[32]; int k=0; while(is_alnum_(p[k]) && k<31){ name[k]=p[k]; k++; } name[k]='\0'; p+=k; *pp=p; return get_var(name);
  }
  long v = parse_number(&p); *pp=p; return v;
}

static long parse_unary_(const char **pp){
  const char* p=*pp; skip_ws(&p);
  if (*p=='-'){ p++; *pp=p; long x=parse_unary_(&p); *pp=p; return -x; }
  return parse_primary_(&p);
}

static long parse_mul_(const char **pp){
  const char* p=*pp; long x=parse_unary_(&p); for(;;){ skip_ws(&p);
    if (*p=='*'){ p++; long y=parse_unary_(&p); x = x * y; continue; }
    if (*p=='/'){ p++; long y=parse_unary_(&p); if (y!=0) x = x / y; continue; }
    if (*p=='%'){ p++; long y=parse_unary_(&p); if (y!=0) x = x % y; continue; }
    break; }
  *pp=p; return x;
}

static long parse_add_(const char **pp){
  const char* p=*pp; long x=parse_mul_(&p); for(;;){ skip_ws(&p);
    if (*p=='+'){ p++; long y=parse_mul_(&p); x = x + y; continue; }
    if (*p=='-'){ p++; long y=parse_mul_(&p); x = x - y; continue; }
    break; }
  *pp=p; return x;
}

static long parse_expr(const char **pp){ return parse_add_(pp); }

static int extract_program(const char* src, char* out_str, int out_cap, int* out_len, int* out_ret){
  *out_len = 0; *out_ret = 0; out_str[0] = '\0';
  const char* p = src;
  // very naive scan for puts("...") and return <expr>;
  while(*p){
    // declarations: int x;  or int x = expr; ;
    if (starts_with(p, "int") && !is_alnum_(p[3])){
      p += 3; skip_ws(&p);
      if (is_alpha_(*p)){
        char name[32]; int k=0; while(is_alnum_(*p) && k<31){ name[k++]=*p++; } name[k]='\0';
        skip_ws(&p);
        if (*p=='='){ p++; const char* q=p; long v=parse_expr(&q); p=q; set_var(name, v); }
        else { set_var(name, 0); }
        while(*p && *p!=';') p++; if (*p==';') p++;
        continue;
      }
    }
    // assignment: ident = expr;
    if (is_alpha_(*p)){
      const char* save=p; char name[32]; int k=0; while(is_alnum_(save[k]) && k<31){ name[k++]=save[k]; } name[k]='\0';
      const char* r = save + k; skip_ws(&r);
      if (*r=='='){
        r++; const char* q=r; long v = parse_expr(&q); r=q; set_var(name, v);
        while(*r && *r!=';') r++; if (*r==';') r++;
        p = r; continue;
      }
    }
    if (starts_with(p, "puts")){
      p += 4; skip_ws(&p);
      if (*p=='('){ p++; skip_ws(&p);
        if (*p=='\"'){
          p++; int k=0; while(*p && *p!='\"' && k<out_cap-1){
            if (*p=='\\' && p[1]){ // escapes: only \n supported
              p++; char e=*p++; out_str[k++] = (e=='n') ? '\n' : e; continue;
            }
            out_str[k++] = *p++;
          }
          out_str[k++]='\n'; // puts appends newline
          out_str[k] = '\0';
          *out_len = k;
          if (*p=='\"') p++;
          while(*p && *p!=')') p++;
          if (*p==')') p++;
        }
      }
    } else if (starts_with(p, "return")){
      p += 6; // skip 'return'
      const char* q=p; long v = parse_expr(&q); p = q;
      // skip to ';' if present
      while(*p && *p!=';') p++;
      if (*p==';') p++;
      *out_ret = (int)v;
    } else {
      p++;
    }
  }
  return 0;
}

// --- RV64 code emission -----------------------------------------------------

// Registers: x5=t0, x10=a0, x11=a1, x12=a2, x17=a7
static void emit_u32(unsigned char* buf, int* off, unsigned int w){
  buf[(*off)++] = (unsigned char)(w & 0xFF);
  buf[(*off)++] = (unsigned char)((w >> 8) & 0xFF);
  buf[(*off)++] = (unsigned char)((w >> 16) & 0xFF);
  buf[(*off)++] = (unsigned char)((w >> 24) & 0xFF);
}

static unsigned int enc_addi(int rd, int rs1, int imm){
  unsigned int u = (unsigned int)imm & 0xFFF; // 12-bit
  unsigned int imm12 = (u & 0x800) ? (u | 0xFFFFF000) : u; // sign extend (keep bits)
  (void)imm12; // silence unused; encoding uses lower 12 bits; higher ignored
  return ((imm & 0xFFF) << 20) | (rs1 << 15) | (0x0 << 12) | (rd << 7) | 0x13;
}

static unsigned int enc_auipc(int rd, int imm20){
  return ((imm20 & 0xFFFFF) << 12) | (rd << 7) | 0x17;
}

static unsigned int enc_ecall(){ return 0x00000073; }

static unsigned int enc_lui(int rd, int imm20){
  return ((imm20 & 0xFFFFF) << 12) | (rd << 7) | 0x37;
}

static unsigned int enc_itype(int funct3, int rd, int rs1, int imm){
  return ((imm & 0xFFF) << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | 0x13;
}

// Forward declarations for helpers used in expression codegen
static void emit_seqz_t0(unsigned char* text, int* off);
static void emit_snez_t0(unsigned char* text, int* off);

static void emit_li(unsigned char* text, int* off, int rd, long imm){
  if (imm >= -2048 && imm <= 2047){
    emit_u32(text, off, enc_addi(rd, 0 /*x0*/, (int)imm));
    return;
  }
  long hi = (imm + (1<<11)) >> 12; // round-to-nearest for low 12
  long lo = imm - (hi << 12);
  emit_u32(text, off, enc_lui(rd, (int)hi));
  emit_u32(text, off, enc_addi(rd, rd, (int)lo));
}

// Branch/Jumps
static unsigned int enc_b(int funct3, int rs1, int rs2, int imm){
  // imm is byte offset; must be multiple of 2. Encode B-type layout.
  int32_t off = imm;
  int32_t imm1 = off >> 1; // drop bit0
  unsigned int b = 0x63 | (funct3<<12) | (rs1<<15) | (rs2<<20);
  unsigned int bits10_5 = (imm1 >> 5) & 0x3F;
  unsigned int bits4_1  = (imm1 >> 1) & 0xF;
  unsigned int bit11    = (imm1 >> 10) & 1;
  unsigned int bit12    = (imm1 >> 11) & 1;
  b |= (bits10_5 << 25);
  b |= (bits4_1 << 8);
  b |= (bit11 << 7);
  b |= (bit12 << 31);
  return b;
}

static unsigned int enc_beq(int rs1, int rs2, int imm){ return enc_b(0, rs1, rs2, imm); }
static unsigned int enc_bne(int rs1, int rs2, int imm){ return enc_b(1, rs1, rs2, imm); }

static unsigned int enc_jal(int rd, int imm){
  int32_t off = imm;
  int32_t imm1 = off >> 1; // drop bit0
  unsigned int w = 0x6F | (rd << 7);
  unsigned int bit20     = (imm1 >> 20) & 1;
  unsigned int bits10_1  = (imm1 >> 1)  & 0x3FF;
  unsigned int bit11     = (imm1 >> 10) & 1;
  unsigned int bits19_12 = (imm1 >> 11) & 0xFF;
  w |= (bit20 << 31);
  w |= (bits10_1 << 21);
  w |= (bit11 << 20);
  w |= (bits19_12 << 12);
  return w;
}

static int emit_beqz_patch(unsigned char* text, int* off){
  int pos = *off;
  emit_u32(text, off, enc_beq(5 /*t0*/, 0 /*x0*/, 0));
  return pos;
}
static void patch_beqz_at(unsigned char* text, int at_pos, uint64_t base_vaddr, int target_off){
  uint64_t from_pc = base_vaddr + at_pos;
  uint64_t to_pc   = base_vaddr + target_off;
  int imm = (int)(to_pc - from_pc);
  unsigned int w = enc_beq(5,0,imm);
  text[at_pos+0]=(unsigned char)(w & 0xFF);
  text[at_pos+1]=(unsigned char)((w>>8)&0xFF);
  text[at_pos+2]=(unsigned char)((w>>16)&0xFF);
  text[at_pos+3]=(unsigned char)((w>>24)&0xFF);
}
static int emit_bnez_patch(unsigned char* text, int* off){ int pos=*off; emit_u32(text, off, enc_bne(5 /*t0*/, 0 /*x0*/, 0)); return pos; }
static void patch_bnez_at(unsigned char* text, int at_pos, uint64_t base_vaddr, int target_off){
  uint64_t from_pc = base_vaddr + at_pos;
  uint64_t to_pc   = base_vaddr + target_off;
  int imm = (int)(to_pc - from_pc);
  unsigned int w = enc_bne(5,0,imm);
  text[at_pos+0]=(unsigned char)(w & 0xFF);
  text[at_pos+1]=(unsigned char)((w>>8)&0xFF);
  text[at_pos+2]=(unsigned char)((w>>16)&0xFF);
  text[at_pos+3]=(unsigned char)((w>>24)&0xFF);
}
static int emit_jal_patch(unsigned char* text, int* off){ int pos=*off; emit_u32(text, off, enc_jal(0,0)); return pos; }
static void patch_jal_at(unsigned char* text, int at_pos, uint64_t base_vaddr, int target_off){
  uint64_t from_pc = base_vaddr + at_pos;
  uint64_t to_pc   = base_vaddr + target_off;
  int imm = (int)(to_pc - from_pc);
  unsigned int w = enc_jal(0, imm);
  text[at_pos+0]=(unsigned char)(w & 0xFF);
  text[at_pos+1]=(unsigned char)((w>>8)&0xFF);
  text[at_pos+2]=(unsigned char)((w>>16)&0xFF);
  text[at_pos+3]=(unsigned char)((w>>24)&0xFF);
}
static void patch_jal_ra_at(unsigned char* text, int at_pos, uint64_t base_vaddr, int target_off){
  uint64_t from_pc = base_vaddr + at_pos;
  uint64_t to_pc   = base_vaddr + target_off;
  int imm = (int)(to_pc - from_pc);
  unsigned int w = enc_jal(1 /*ra*/, imm);
  text[at_pos+0]=(unsigned char)(w & 0xFF);
  text[at_pos+1]=(unsigned char)((w>>8)&0xFF);
  text[at_pos+2]=(unsigned char)((w>>16)&0xFF);
  text[at_pos+3]=(unsigned char)((w>>24)&0xFF);
}

// --- More instruction encoders ---------------------------------------------
static unsigned int enc_r(int funct7, int rs2, int rs1, int funct3, int rd){
  return (funct7<<25) | (rs2<<20) | (rs1<<15) | (funct3<<12) | (rd<<7) | 0x33;
}
static unsigned int enc_ld(int rd, int rs1, int imm){ // LD funct3=3, opcode=0x03
  return ((imm & 0xFFF) << 20) | (rs1<<15) | (3<<12) | (rd<<7) | 0x03;
}
static unsigned int enc_sd(int rs2, int rs1, int imm){ // SD funct3=3, opcode=0x23
  unsigned int imm11_5 = (imm >> 5) & 0x7F;
  unsigned int imm4_0  = imm & 0x1F;
  return (imm11_5<<25) | (rs2<<20) | (rs1<<15) | (3<<12) | (imm4_0<<7) | 0x23;
}

// temp stack within frame (after vars)
static int tmp_slots = 32; // 32*8 = 256 bytes
static int tmp_depth;
static int var_frame_bytes; // var_cnt*8

static void push_t0(unsigned char* text, int* off){
  int sp = 2; // x2
  int imm = var_frame_bytes + tmp_depth*8;
  emit_u32(text, off, enc_sd(5 /*t0*/, sp, imm));
  tmp_depth++;
}
static void pop_t1(unsigned char* text, int* off){
  tmp_depth--;
  int sp = 2;
  int imm = var_frame_bytes + tmp_depth*8;
  emit_u32(text, off, enc_ld(6 /*t1*/, sp, imm));
}

// variable slots: offset = slot*8 from sp after prologue
static int slot_of(const char* name){ int idx=find_var(name); return idx; }

// function table for definitions and call patching
struct FEnt { char name[32]; int addr; int patches[128]; int np; };
static struct FEnt funcs[64];
static int nfunc = 0;
static int entry_off = -1; // offset of main
static int find_func_index(const char* s){ for(int i=0;i<nfunc;i++){ int j=0; while(funcs[i].name[j]==s[j] && s[j]) j++; if (funcs[i].name[j]==s[j]) return i; } return -1; }
static int get_or_add_func(const char* s){ int idx=find_func_index(s); if (idx>=0) return idx; if (nfunc>=64) return -1; int j=0; while((funcs[nfunc].name[j]=s[j])) j++; funcs[nfunc].addr=-1; funcs[nfunc].np=0; return nfunc++; }
static void define_func_here(const char* s, int addr){ int idx=get_or_add_func(s); funcs[idx].addr=addr; }
static void record_call_patch(int idx, int pos){ if (idx>=0 && funcs[idx].np<128) funcs[idx].patches[funcs[idx].np++]=pos; }
static void finalize_patches(unsigned char* text, uint64_t base_vaddr){ for(int i=0;i<nfunc;i++){ if (funcs[i].addr>=0){ for(int k=0;k<funcs[i].np;k++){ int at=funcs[i].patches[k]; patch_jal_ra_at(text, at, base_vaddr, funcs[i].addr); } funcs[i].np=0; } } }

static void emit_puts(unsigned char* text, int* off, uint64_t base_vaddr, uint64_t str_vaddr, int str_len){
  // auipc t0, hi(pcrel(str)); addi a1, t0, lo; a0=1; a2=len; a7=write; ecall
  uint64_t pc_auipc = base_vaddr + *off;
  int64_t delta = (int64_t)str_vaddr - (int64_t)pc_auipc;
  int hi = (int)((delta + 0x800) >> 12);
  int lo = (int)(delta - ((int64_t)hi << 12));
  emit_u32(text, off, enc_auipc(5 /*t0*/, hi));
  emit_u32(text, off, enc_addi(11 /*a1*/, 5 /*t0*/, lo));
  emit_li(text, off, 10 /*a0*/, 1);
  emit_li(text, off, 12 /*a2*/, str_len);
  emit_li(text, off, 17 /*a7*/, 64);
  emit_u32(text, off, enc_ecall());
}

// expression codegen: result in t0
static void cg_expr(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr);
static void cg_primary(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; skip_ws(&p);
  if (*p=='('){ write(1, "(", 1); p++; cg_expr(text, off, &p, base_vaddr); skip_ws(&p); if(*p==')') p++; *pp=p; return; }
  if (is_alpha_(*p)){
    char name[32]; int k=0; while(is_alnum_(p[k]) && k<31){ name[k]=p[k]; k++; } name[k]='\0'; p+=k;
    skip_ws(&p);
    if (*p=='('){ // call with args
      write(1, "C", 1);
      p++; skip_ws(&p);
      int argc=0;
      if (*p!=')'){
        for(;;){
          cg_expr(text, off, &p, base_vaddr); // result in t0
          if (argc < 8){ emit_u32(text, off, enc_addi(10+argc /*aN*/, 5 /*t0*/, 0)); }
          argc++;
          skip_ws(&p);
          if (*p==','){ p++; skip_ws(&p); continue; }
          break;
        }
      }
      if (*p==')') p++;
      int pos = *off; emit_u32(text, off, enc_jal(1 /*ra*/, 0));
      int idx = get_or_add_func(name);
      if (idx>=0){ if (funcs[idx].addr>=0) patch_jal_ra_at(text, pos, base_vaddr, funcs[idx].addr); else record_call_patch(idx, pos); }
      emit_u32(text, off, enc_addi(5 /*t0*/, 10 /*a0*/, 0));
      *pp=p; return;
    } else {
      // support assignment within expression: name = expr
      if (*p=='='){
        p++; const char* rq = p; cg_expr(text, off, &rq, base_vaddr); p=rq;
        int slot=slot_of(name); if (slot<0){ set_var(name,0); slot=slot_of(name);} emit_u32(text, off, enc_sd(5,2,slot*8));
        *pp=p; return;
      }
      write(1, "V", 1);
      int slot = slot_of(name);
      if (slot < 0) { emit_li(text, off, 5 /*t0*/, 0); }
      else { emit_u32(text, off, enc_ld(5 /*t0*/, 2 /*sp*/, slot*8)); }
      *pp=p; return;
    }
  }
  // number
  write(1, "N", 1);
  long v = parse_number(&p); emit_li(text, off, 5 /*t0*/, v); *pp=p;
}

static void cg_unary(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; skip_ws(&p); write(1, "U", 1);
  if (*p=='-'){ p++; cg_unary(text, off, &p, base_vaddr); // t0 = -t0 => sub t0, x0, t0
    emit_u32(text, off, enc_r(0x20, 5 /*rs2=t0*/, 0 /*x0*/, 0, 5 /*rd=t0*/)); *pp=p; return; }
  if (*p=='!'){ p++; cg_unary(text, off, &p, base_vaddr); emit_seqz_t0(text, off); *pp=p; return; }
  if (*p=='~'){ p++; cg_unary(text, off, &p, base_vaddr); emit_u32(text, off, enc_itype(4 /*XORI*/, 5, 5, -1)); *pp=p; return; }
  cg_primary(text, off, &p, base_vaddr); *pp=p;
}

static void cg_mul(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_unary(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p);
    if (*p=='*'){ p++; push_t0(text, off); cg_unary(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 * t0
      emit_u32(text, off, enc_r(0x01, 5 /*t0*/, 6 /*t1*/, 0, 5 /*t0*/)); continue; }
    if (*p=='/'){ p++; push_t0(text, off); cg_unary(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 / t0
      emit_u32(text, off, enc_r(0x01, 5 /*t0*/, 6 /*t1*/, 4, 5 /*t0*/)); continue; }
    if (*p=='%'){ p++; push_t0(text, off); cg_unary(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 % t0
      emit_u32(text, off, enc_r(0x01, 5 /*t0*/, 6 /*t1*/, 6, 5 /*t0*/)); continue; }
    break;
  }
  *pp=p;
}

static void cg_add(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_mul(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p);
    if (*p=='+'){ p++; push_t0(text, off); cg_mul(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 + t0
      emit_u32(text, off, enc_r(0x00, 5 /*t0*/, 6 /*t1*/, 0, 5 /*t0*/)); continue; }
    if (*p=='-'){ p++; push_t0(text, off); cg_mul(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 - t0
      emit_u32(text, off, enc_r(0x20, 5 /*t0*/, 6 /*t1*/, 0, 5 /*t0*/)); continue; }
    break;
  }
  write(1, "A", 1);
  *pp=p;
}

static void cg_shift(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_add(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p);
    if (p[0]=='<' && p[1]=='<'){ p+=2; push_t0(text, off); cg_add(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 << t0
      emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 1 /*SLL*/, 5 /*rd=t0*/)); continue; }
    if (p[0]=='>' && p[1]=='>'){ p+=2; push_t0(text, off); cg_add(text, off, &p, base_vaddr); pop_t1(text, off); // t0 = t1 >> t0 (arithmetic)
      emit_u32(text, off, enc_r(0x20, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 5 /*SRA*/, 5 /*rd=t0*/)); continue; }
    break;
  }
  *pp=p;
}

static void emit_seqz_t0(unsigned char* text, int* off){
  // seqz t0, t0  => sltiu t0, t0, 1
  emit_u32(text, off, enc_itype(3 /*SLTIU*/, 5 /*t0*/, 5 /*t0*/, 1));
}
static void emit_snez_t0(unsigned char* text, int* off){
  // snez t0, t0 => sltu t0, x0, t0
  emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 0 /*x0*/, 3 /*SLTU*/, 5 /*rd=t0*/));
}

static void cg_rel(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_shift(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p);
    if (*p=='<' && p[1]=='='){ write(1, "<", 1); p+=2; push_t0(text, off); cg_shift(text, off, &p, base_vaddr); pop_t1(text, off);
      // t1 <= t0 => !(t0 < t1)
      emit_u32(text, off, enc_r(0x00, 6 /*rs2=t1*/, 5 /*rs1=t0*/, 2 /*SLT*/, 5 /*rd=t0*/)); // t0 = (t0 < t1)
      emit_seqz_t0(text, off); write(1, "r", 1); continue; }
    if (*p=='>' && p[1]=='='){ write(1, ">", 1); p+=2; push_t0(text, off); cg_shift(text, off, &p, base_vaddr); pop_t1(text, off);
      // t1 >= t0 => !(t1 < t0)
      emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 2 /*SLT*/, 5 /*rd=t0*/)); // t0 = (t1 < t0)
      emit_seqz_t0(text, off); write(1, "r", 1); continue; }
    if (*p=='<'){ write(1, "<", 1); p++; push_t0(text, off); cg_shift(text, off, &p, base_vaddr); pop_t1(text, off);
      // t1 < t0
      emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 2 /*SLT*/, 5 /*rd=t0*/)); write(1, "r", 1); continue; }
    if (*p=='>'){ write(1, ">", 1); p++; push_t0(text, off); cg_shift(text, off, &p, base_vaddr); pop_t1(text, off);
      // t1 > t0  => t0 = (t0 < t1)
      emit_u32(text, off, enc_r(0x00, 6 /*rs2=t1*/, 5 /*rs1=t0*/, 2 /*SLT*/, 5 /*rd=t0*/)); write(1, "r", 1); continue; }
    break;
  }
  *pp=p;
}

static void cg_eq(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_rel(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p);
    if (*p=='=' && p[1]=='='){ p+=2; push_t0(text, off); cg_rel(text, off, &p, base_vaddr); pop_t1(text, off);
      // t0 = (t1 == t0) => xor then seqz
      emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 4 /*XOR*/, 5 /*rd=t0*/));
      emit_seqz_t0(text, off); continue; }
    if (*p=='!' && p[1]=='='){ p+=2; push_t0(text, off); cg_rel(text, off, &p, base_vaddr); pop_t1(text, off);
      // t0 = (t1 != t0) => xor then snez
      emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 4 /*XOR*/, 5 /*rd=t0*/));
      emit_snez_t0(text, off); continue; }
    break;
  }
  *pp=p;
}

static void cg_bitand(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_eq(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p); if (*p=='&' && p[1] != '&'){ p++; push_t0(text, off); cg_eq(text, off, &p, base_vaddr); pop_t1(text, off); emit_u32(text, off, enc_r(0x00, 5, 6, 7 /*AND*/, 5)); continue; } else break; }
  *pp=p;
}

static void cg_bitxor(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_bitand(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p); if (*p=='^'){ p++; push_t0(text, off); cg_bitand(text, off, &p, base_vaddr); pop_t1(text, off); emit_u32(text, off, enc_r(0x00, 5, 6, 4 /*XOR*/, 5)); continue; } else break; }
  *pp=p;
}

static void cg_bitor(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_bitxor(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p); if (*p=='|' && p[1] != '|'){ p++; push_t0(text, off); cg_bitxor(text, off, &p, base_vaddr); pop_t1(text, off); emit_u32(text, off, enc_r(0x00, 5, 6, 6 /*OR*/, 5)); continue; } else break; }
  *pp=p;
}

static void cg_and(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_bitor(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p); if (p[0]=='&' && p[1]=='&'){
      p+=2; int br_false = emit_beqz_patch(text, off); // if left==0 -> false
      cg_bitor(text, off, &p, base_vaddr); // eval right
      emit_snez_t0(text, off); // canonicalize right to 0/1
      int jmp_end = emit_jal_patch(text, off);
      patch_beqz_at(text, br_false, base_vaddr, *off); // L_false:
      emit_li(text, off, 5 /*t0*/, 0);
      patch_jal_at(text, jmp_end, base_vaddr, *off); // L_end
      continue;
    } else break; }
  *pp=p;
}

static void cg_or(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){
  const char* p=*pp; cg_and(text, off, &p, base_vaddr);
  for(;;){ skip_ws(&p); if (p[0]=='|' && p[1]=='|'){
      p+=2; int br_true = emit_bnez_patch(text, off); // if left!=0 -> true
      cg_and(text, off, &p, base_vaddr); // eval right
      emit_snez_t0(text, off); // canonicalize
      int jmp_end = emit_jal_patch(text, off);
      patch_bnez_at(text, br_true, base_vaddr, *off); // L_true:
      emit_li(text, off, 5 /*t0*/, 1);
      patch_jal_at(text, jmp_end, base_vaddr, *off); // L_end
      continue;
    } else break; }
  *pp=p;
}

static void cg_expr(unsigned char* text, int* off, const char** pp, uint64_t base_vaddr){ cg_or(text, off, pp, base_vaddr); }

// forward declarations
static void emit_seqz_t0(unsigned char* text, int* off);
static void emit_snez_t0(unsigned char* text, int* off);
static void cg_stmt(const char** pp, unsigned char* text, int* off,
                    uint64_t base_vaddr, uint64_t ro_base, int ro_size, int frame_bytes, int is_main);

static void cg_block(const char** pp, unsigned char* text, int* off,
                    uint64_t base_vaddr, uint64_t ro_base, int ro_size, int frame_bytes, int is_main){
  const char* p=*pp; if (*p=='{') p++; else return; for(;;){ skip_ws(&p); if (*p=='}'){ p++; break; } if (!*p) break; write(1, "s", 1); cg_stmt(&p, text, off, base_vaddr, ro_base, ro_size, frame_bytes, is_main); write(1, "e", 1); }
  *pp=p;
}

static void cg_stmt(const char** pp, unsigned char* text, int* off,
                    uint64_t base_vaddr, uint64_t ro_base, int ro_size, int frame_bytes, int is_main){
  const char* p=*pp; skip_ws(&p);
  // branch logs
  char mark='?';
  if (*p=='{'){ cg_block(&p, text, off, base_vaddr, ro_base, ro_size, frame_bytes, is_main); *pp=p; return; }
  // int decl
  if (starts_with(p, "int") && !is_alnum_(p[3])){
    write(1, "D", 1);
    p+=3; skip_ws(&p);
    if (is_alpha_(*p)){
      char name[32]; int k=0; while(is_alnum_(*p) && k<31){ name[k++]=*p++; } name[k]='\0';
      write(1, "n", 1);
      skip_ws(&p);
      if (*p=='='){ write(1, "=", 1); p++;
        // fast path: parse simple integer literal without full expr
        const char* t=p; skip_ws(&t);
        int neg=0; if (*t=='+'||*t=='-'){ if (*t=='-') neg=1; t++; }
        if (*t>='0' && *t<='9'){
          long v=0; while(*t>='0'&&*t<='9'){ v = v*10 + (*t-'0'); t++; }
          if (neg) v = -v;
          p = t; // consume
          int slot=slot_of(name); if (slot<0){ set_var(name,0); slot=slot_of(name);} emit_li(text, off, 5 /*t0*/, v); emit_u32(text, off, enc_sd(5,2,slot*8)); write(1, "d", 1);
        } else {
          const char* q=p; cg_expr(text, off, &q, base_vaddr); write(1, "x", 1); p=q; int slot=slot_of(name); if (slot<0){ set_var(name,0); slot=slot_of(name);} emit_u32(text, off, enc_sd(5,2,slot*8)); write(1, "d", 1);
        }
      }
      // robustly consume up to the semicolon; avoid infinite loop
      write(1, "S", 1);
      while(*p && *p!=';') p++;
      if (*p==';') { write(1, ";", 1); p++; }
      else { write(1, "E", 1); }
      *pp=p; return;
    }
  }
  // assignment
  if (is_alpha_(*p)){
    const char* s=p; char name[32]; int k=0; while(is_alnum_(s[k]) && k<31){ name[k++]=s[k]; } name[k]='\0'; const char* r=s+k; skip_ws(&r);
    // compound assignments
    int op_kind = 0; // 1+=,2-=,3*=,4/=,5%=,6&=,7|=,8^=,9<<=,10>>=, 11 simple '='
    if (*r=='=' ) { op_kind=11; r++; }
    else if (r[0]=='+'&&r[1]=='='){ op_kind=1; r+=2; }
    else if (r[0]=='-'&&r[1]=='='){ op_kind=2; r+=2; }
    else if (r[0]=='*'&&r[1]=='='){ op_kind=3; r+=2; }
    else if (r[0]=='/'&&r[1]=='='){ op_kind=4; r+=2; }
    else if (r[0]=='%'&&r[1]=='='){ op_kind=5; r+=2; }
    else if (r[0]=='&'&&r[1]=='='){ op_kind=6; r+=2; }
    else if (r[0]=='|'&&r[1]=='='){ op_kind=7; r+=2; }
    else if (r[0]=='^'&&r[1]=='='){ op_kind=8; r+=2; }
    else if (r[0]=='<'&&r[1]=='<'&&r[2]=='='){ op_kind=9; r+=3; }
    else if (r[0]=='>'&&r[1]=='>'&&r[2]=='='){ op_kind=10; r+=3; }
    if (op_kind){
      write(1, "A", 1);
      const char* q=r; cg_expr(text, off, &q, base_vaddr); r=q; // RHS in t0
      int slot=slot_of(name); if (slot<0){ set_var(name,0); slot=slot_of(name);} 
      if (op_kind != 11){
        // load old into t1
        emit_u32(text, off, enc_ld(6 /*t1*/, 2 /*sp*/, slot*8));
        switch(op_kind){
          case 1: emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 0 /*ADD*/, 5 /*rd=t0*/)); break;
          case 2: emit_u32(text, off, enc_r(0x20, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 0 /*SUB*/, 5 /*rd=t0*/)); break;
          case 3: emit_u32(text, off, enc_r(0x01, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 0 /*MUL*/, 5 /*rd=t0*/)); break;
          case 4: emit_u32(text, off, enc_r(0x01, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 4 /*DIV*/, 5 /*rd=t0*/)); break;
          case 5: emit_u32(text, off, enc_r(0x01, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 6 /*REM*/, 5 /*rd=t0*/)); break;
          case 6: emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 7 /*AND*/, 5 /*rd=t0*/)); break;
          case 7: emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 6 /*OR*/, 5 /*rd=t0*/)); break;
          case 8: emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 4 /*XOR*/, 5 /*rd=t0*/)); break;
          case 9: emit_u32(text, off, enc_r(0x00, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 1 /*SLL*/, 5 /*rd=t0*/)); break;
          case 10: emit_u32(text, off, enc_r(0x20, 5 /*rs2=t0*/, 6 /*rs1=t1*/, 5 /*SRA*/, 5 /*rd=t0*/)); break;
        }
      }
      // store result t0
      emit_u32(text, off, enc_sd(5,2,slot*8));
      while(*r && *r!=';') r++; if (*r==';') r++;
      *pp=r; return;
    }
  }
  // puts
  if (starts_with(p, "puts")){
    write(1, "P", 1);
    p += 4; skip_ws(&p);
    if (*p=='('){ p++; skip_ws(&p);
      if (*p=='\"'){
        char tmp[RO_MAX_LEN]; int L = read_string_lit(&p, tmp, sizeof(tmp), 1);
        int idx = (L>=0)? ro_find(tmp, L) : -1; if (idx<0 && L>=0) idx = ro_add(tmp, L);
        skip_ws(&p); if (*p==')') p++;
        while(*p && *p!=';') p++; if (*p==';') p++;
        if (idx>=0){ uint64_t sva = ro_base + ro_off[idx]; emit_puts(text, off, base_vaddr, sva, ro_len[idx]); }
        *pp=p; return;
      }
    }
    while(*p && *p!=')') p++; if (*p==')') p++; while(*p && *p!=';') p++; if (*p==';') p++;
    *pp=p; return;
  }
  // if (...) stmt [else stmt]
  if (starts_with(p, "if") && !is_alnum_(p[2])){
    write(1, "I", 1);
    p+=2; skip_ws(&p); if (*p=='('){ p++; const char* q=p; cg_expr(text, off, &q, base_vaddr); p=q; while(*p && *p!=')') p++; if (*p==')') p++;
      int br_pos = emit_beqz_patch(text, off); // jump to else/end if cond==0
      // then stmt
      cg_stmt(&p, text, off, base_vaddr, ro_base, ro_size, frame_bytes, is_main);
      skip_ws(&p);
      // else?
      if (starts_with(p, "else") && !is_alnum_(p[4])){
        p+=4; // jump over else part to end
        int jmp_pos = emit_jal_patch(text, off);
        // patch br to here (start of else)
        patch_beqz_at(text, br_pos, base_vaddr, *off);
        // else stmt
        cg_stmt(&p, text, off, base_vaddr, ro_base, ro_size, frame_bytes, is_main);
        // patch jump to end
        patch_jal_at(text, jmp_pos, base_vaddr, *off);
      } else {
        // no else; branch to here (end)
        patch_beqz_at(text, br_pos, base_vaddr, *off);
      }
      *pp=p; return;
    }
  }
  // for (init; cond; step) stmt
  if (starts_with(p, "for") && !is_alnum_(p[3])){
    write(1, "F", 1);
    p+=3; skip_ws(&p);
    if (*p=='('){
      p++;
      // init (optional): decl or expr; end with ';'
      skip_ws(&p);
      if (*p!=';'){
        if (starts_with(p, "int") && !is_alnum_(p[3])){
          // parse a single local declaration: int name [= expr]
          p+=3; skip_ws(&p);
          if (is_alpha_(*p)){
            char name[32]; int k=0; while(is_alnum_(*p) && k<31){ name[k++]=*p++; } name[k]='\0';
            int slot = slot_of(name); if (slot<0){ set_var(name,0); slot=slot_of(name);} // allocate slot if needed
            skip_ws(&p);
            if (*p=='='){ p++; const char* iq = p; cg_expr(text, off, &iq, base_vaddr); p=iq; emit_u32(text, off, enc_sd(5,2,slot*8)); }
          }
        } else {
          const char* iq = p; cg_expr(text, off, &iq, base_vaddr); p=iq; // discard result
          // DEBUG: dump after init expr
          {
            char dbg[32]; int di=0; dbg[di++]='I'; dbg[di++]='|';
            const char* tp=p; for(int k=0;k<8 && *tp; k++){ dbg[di++]=*tp++; }
            dbg[di++]='|'; dbg[di++]='\n'; write(1, dbg, di);
          }
        }
      }
      {
        int g=0; while(*p && *p!=';' && g<4096){ p++; g++; }
      }
      if (*p==';') { p++; write(1, ";", 1); }

      write(1, "i", 1); // init done

      // mark loop start (after init)
      int loop_start = *off;

      // cond (optional): if next is ';' => always true; else eval and emit branch-if-false
      int has_cond = 1; int br_pos = -1;
      skip_ws(&p);
      if (*p==';') { has_cond = 0; p++; write(1, "-", 1); }
      else {
        write(1, "c", 1);
        const char* cq = p; cg_expr(text, off, &cq, base_vaddr); p=cq; // t0 has cond
        // scan to next ';' or ')'
        // DEBUG: dump a few upcoming chars after cond
        {
          char dbg[32]; int di=0; dbg[di++]='|';
          const char* tp=p; for(int k=0;k<8 && *tp; k++){ dbg[di++]=*tp++; }
          dbg[di++]='|'; dbg[di++]='\n'; write(1, dbg, di);
        }
        int guard=0; while(*p && *p!=';' && *p!=')' && guard<4096){ p++; guard++; }
        if (guard>=4096) write(1, "!", 1);
        if (*p==';') { p++; }
        // if *p==')', leave it for step parsing (empty step)
        br_pos = emit_beqz_patch(text, off); // jump to end if false
        write(1, "C", 1);
      }

      // step (optional): capture substring until ')'
      skip_ws(&p);
      write(1, "t", 1);
      const char* step_start = p;
      int sguard=0; while(*p && *p!=')' && sguard<16384){ p++; sguard++; }
      if (sguard>=16384) write(1, "!", 1);
      const char* step_end = p;
      if (*p==')') { p++; }

      // body
      write(1, "b", 1);
      cg_stmt(&p, text, off, base_vaddr, ro_base, ro_size, frame_bytes, is_main);
      write(1, "y", 1);

      // emit step
      if (step_end > step_start){
        // copy step into temp buffer
        int L = (int)(step_end - step_start); if (L > 240) L = 240;
        char sbuf[256];
        for(int i=0;i<L;i++) sbuf[i] = step_start[i]; sbuf[L] = '\0';
        const char* sp = sbuf; cg_expr(text, off, &sp, base_vaddr); write(1, "T", 1);
        // PROBE: print i as single digit and newline without touching our frame temps
        // Use [sp-8] as a scratch byte
        emit_u32(text, off, enc_addi(5 /*t0*/, 5 /*t0*/, 48));             // t0 += '0'
        emit_u32(text, off, enc_sd(5 /*t0*/, 2 /*sp*/, -8));               // store at [sp-8]
        emit_li(text, off, 10 /*a0*/, 1);                                   // fd=1
        emit_u32(text, off, enc_addi(11 /*a1*/, 2 /*sp*/, -8));            // buf=&[sp-8]
        emit_li(text, off, 12 /*a2*/, 1);                                   // len=1
        emit_li(text, off, 17 /*a7*/, 64);                                  // write
        emit_u32(text, off, enc_ecall());
        // newline
        emit_li(text, off, 5 /*t0*/, 10);
        emit_u32(text, off, enc_sd(5 /*t0*/, 2 /*sp*/, -8));
        emit_li(text, off, 10 /*a0*/, 1);
        emit_u32(text, off, enc_addi(11 /*a1*/, 2 /*sp*/, -8));
        emit_li(text, off, 12 /*a2*/, 1);
        emit_li(text, off, 17 /*a7*/, 64);
        emit_u32(text, off, enc_ecall());
      }

      // jump back
      int from_pc = base_vaddr + *off; int to_pc = base_vaddr + loop_start; int imm = (int)(to_pc - from_pc);
      emit_u32(text, off, enc_jal(0, imm)); write(1, "J", 1);

      // patch end
      if (has_cond){ patch_beqz_at(text, br_pos, base_vaddr, *off); write(1, "E", 1); }

      *pp=p; return;
    }
  }
  // while (...) stmt
  if (starts_with(p, "while") && !is_alnum_(p[5])){
    write(1, "W", 1);
    p+=5; skip_ws(&p); if (*p=='('){ p++; int loop_start = *off; const char* q=p; cg_expr(text, off, &q, base_vaddr); p=q; while(*p && *p!=')') p++; if (*p==')') p++;
      int br_pos = emit_beqz_patch(text, off); // exit loop if false
      cg_stmt(&p, text, off, base_vaddr, ro_base, ro_size, frame_bytes, is_main); // body
      // jump back to loop_start
      int from_pc = base_vaddr + *off; int to_pc = base_vaddr + loop_start; int imm = (int)(to_pc - from_pc);
      emit_u32(text, off, enc_jal(0, imm));
      // patch exit branch to here (loop end)
      patch_beqz_at(text, br_pos, base_vaddr, *off);
      *pp=p; return;
    }
  }
  // return
  if (starts_with(p, "return") && !is_alnum_(p[6])){
    write(1, "R", 1);
    p+=6; write(1, p, 1);
    const char* q=p; cg_expr(text, off, &q, base_vaddr); write(1, "x", 1); p=q; while(*p && *p!=';') p++; write(1, ";", 1); if (*p==';') p++;
    emit_u32(text, off, enc_addi(10 /*a0*/, 5 /*t0*/, 0));
    if (is_main){ emit_li(text, off, 17, 70); emit_u32(text, off, enc_ecall()); }
    else { emit_u32(text, off, enc_addi(2 /*sp*/, 2 /*sp*/, frame_bytes)); emit_u32(text, off, 0x00008067); /* jalr x0, ra, 0 */ }
    *pp=p; return;
  }
  // generic expression statement (e.g., foo(); a+b;)
  if (*p=='(' || is_alpha_(*p) || (*p>='0'&&*p<='9') || *p=='-' || *p=='!' || *p=='~'){
    write(1, "G", 1);
    const char* q=p; cg_expr(text, off, &q, base_vaddr); p=q; while(*p && *p!=';') p++; if (*p==';') p++; *pp=p; return;
  }
  // empty or unknown: skip to ';'
  while(*p && *p!=';') p++; if (*p==';') p++;
  *pp=p;
}

static int codegen_program(const char* src, unsigned char* text, int text_cap,
                           uint64_t base_vaddr, uint64_t ro_base, int ro_size){
  int off=0; tmp_depth=0; nfunc=0; entry_off=-1;
  const char* p = src;
  while(*p){
    write(1, "L", 1);
    skip_ws(&p); if (!*p) break;
    // match function: int <ident> () { ... }
    if (starts_with(p, "int") && !is_alnum_(p[3])){
      const char* q = p+3; skip_ws(&q);
      if (is_alpha_(*q)){
        // name
        char fname[32]; int k=0; while(is_alnum_(q[k]) && k<31){ fname[k++]=q[k]; } fname[k]='\0';
        q += k; skip_ws(&q);
        if (*q=='('){ q++; skip_ws(&q);
              // parse parameter list: int name, int name, ...
              char param[16][32]; int pcount=0;
              if (*q!=')'){
                for(;;){ skip_ws(&q); if (!(starts_with(q, "int") && !is_alnum_(q[3]))) break; q+=3; skip_ws(&q); if (!is_alpha_(*q)) break; int t=0; while(is_alnum_(*q)&&t<31){ param[pcount][t++]=*q++; } param[pcount][t]='\0'; pcount++; skip_ws(&q); if (*q==','){ q++; continue; } else break; }
              }
              if (*q==')') { q++; skip_ws(&q); }
              if (*q=='{'){
              write(1, "F", 1);
              // find matching '}'
              const char* body = q; int depth=0; const char* r=q;
              do{ if (*r=='{') depth++; else if (*r=='}') depth--; r++; }while(*r && depth>0);
              const char* body_start = q; // at '{'
              const char* body_end = r;   // just past '}'
              // prescan vars in body
              var_cnt = 0; // reset per function
              for(int pi=0; pi<pcount; pi++){ set_var(param[pi], 0); }
              // simple var scan: look for "int <ident>" occurrences before ';'
              const char* sv = body_start;
              while (sv < body_end){ skip_ws(&sv); if (starts_with(sv, "int") && !is_alnum_(sv[3])){ sv+=3; skip_ws(&sv); if (is_alpha_(*sv)){ char vname[32]; int vk=0; while(is_alnum_(*sv)&&vk<31){ vname[vk++]=*sv++; } vname[vk]='\0'; set_var(vname,0); } }
                while(sv<body_end && *sv!=';') sv++; if (*sv==';') sv++; }
              var_frame_bytes = var_cnt*8; int frame_bytes = (var_cnt + tmp_slots)*8;
              // define function symbol
              define_func_here(fname, off);
              if (fname[0]=='m'&&fname[1]=='a'&&fname[2]=='i'&&fname[3]=='n') entry_off = off;
              // prologue
              emit_u32(text, &off, enc_addi(2 /*sp*/, 2 /*sp*/, -frame_bytes));
              // spill parameters into their slots
              for(int pi=0; pi<pcount && pi<8; pi++){ int slot = slot_of(param[pi]); emit_u32(text, &off, enc_sd(10+pi /*aN*/, 2 /*sp*/, slot*8)); }
              // generate body (skip leading '{')
              const char* bp = body_start; write(1, "{", 1);
              cg_block(&bp, text, &off, base_vaddr, ro_base, ro_size, frame_bytes, (fname[0]=='m'&&fname[1]=='a'&&fname[2]=='i'&&fname[3]=='n'));
              write(1, "}", 1);
              // default epilogue if fallthrough
              if (fname[0]=='m'&&fname[1]=='a'&&fname[2]=='i'&&fname[3]=='n'){
                emit_li(text, &off, 10, 0); emit_li(text, &off, 17, 70); emit_u32(text, &off, enc_ecall());
              } else {
                emit_u32(text, &off, enc_addi(2,2, frame_bytes)); emit_u32(text, &off, 0x00008067);
              }
              // advance p to end of function
              p = body_end; continue;
            } }
      }
    }
    // otherwise skip token
    p++;
  }
  // patch any forward calls
  finalize_patches(text, base_vaddr);
  return off;
}

static void prescan_vars(const char* src){
  var_cnt = 0;
  const char* p = src;
  while(*p){
    skip_ws(&p);
    if (*p=='{'||*p=='}'){ p++; continue; }
    if (starts_with(p, "int") && !is_alnum_(p[3])){
      p+=3; skip_ws(&p);
      if (is_alpha_(*p)){
        char name[32]; int k=0; while(is_alnum_(*p) && k<31){ name[k++]=*p++; } name[k]='\0';
        if (find_var(name)<0) set_var(name, 0);
        // optional initializer: skip until ';'
        while(*p && *p!=';') p++; if (*p==';') p++;
        continue;
      }
    }
    // assignments can introduce vars as well for our minimal language
    if (is_alpha_(*p)){
      char name[32]; int k=0; const char* s=p; while(is_alnum_(s[k]) && k<31){ name[k++]=s[k]; } name[k]='\0';
      const char* r = s + k; skip_ws(&r);
      if (*r=='='){ if (find_var(name)<0) set_var(name, 0); while(*r && *r!=';') r++; if (*r==';') r++; p=r; continue; }
    }
    // otherwise skip token/stmt
    while(*p && *p!=';') p++; if (*p==';') p++;
  }
}

// --- ELF writing ------------------------------------------------------------

static void write_pad(int fd, int n){ static char z[256]; while(n>0){ int m = n>256?256:n; write(fd, z, m); n -= m; } }

static void prescan_strings(const char* src){
  ro_reset();
  const char* p=src;
  while(*p){
    if (starts_with(p, "puts")){
      p+=4; skip_ws(&p); if (*p=='('){ p++; skip_ws(&p); if (*p=='\"'){
            char tmp[RO_MAX_LEN]; int L=read_string_lit(&p, tmp, sizeof(tmp), 1);
            if (L>=0) ro_add(tmp, L);
          }
          // skip to ')'
          while(*p && *p!=')') p++;
          if (*p==')') p++;
      }
    }
    p++;
  }
}

static int write_elf(const char* out_path, const char* msg_unused, int msg_len_unused, const char* src){
  // Plan layout: [Ehdr][Phdr][.text][.rodata]
  struct elfhdr eh = {0};
  struct proghdr ph = {0};

  uint64_t base_vaddr = 0x00010000ULL; // small low VA region
  int ehsize = sizeof(struct elfhdr);
  int phsize = sizeof(struct proghdr);
  int off_text = ehsize + phsize; // packed

  // Reserve temporary text buffer
  unsigned char text[1024];

  // prescan symbols and strings to stabilize frame and rodata layout
  prescan_vars(src); write(1, "B", 1);
  prescan_strings(src); write(1, "C", 1);
  int rosize = ro_total();
  // first pass with tentative ro base
  uint64_t ro_base1 = base_vaddr + off_text + 64; // guess
  tmp_depth = 0; write(1, "D", 1);
  int tsize = codegen_program(src, text, sizeof(text), base_vaddr + off_text, ro_base1, rosize);
  // second pass with real ro base
  uint64_t ro_base2 = base_vaddr + off_text + tsize;
  prescan_vars(src); write(1, "E", 1);
  tmp_depth = 0;
  int text_size = codegen_program(src, text, sizeof(text), base_vaddr + off_text, ro_base2, rosize); write(1, "F", 1);

  int rodata_off = off_text + text_size;
  int rodata_size = ro_total();

  int filesz = rodata_off + rodata_size;
  int memsz = filesz; // no bss

  // Fill Ehdr
  eh.magic = ELF_MAGIC;
  unsigned char ident[12] = {0};
  // EI_CLASS=2 (64-bit), EI_DATA=1 (LE), EI_VERSION=1
  ident[0] = 2; ident[1] = 1; ident[2] = 1;
  for(int i=0;i<12;i++) eh.elf[i]=ident[i];
  eh.type = 2;                 // ET_EXEC
  eh.machine = 243;            // EM_RISCV
  eh.version = 1;
  // entry at main (if found) or start of .text
  uint64_t entry_va = base_vaddr + off_text + (entry_off>=0? entry_off : 0);
  eh.entry = entry_va;
  eh.phoff = sizeof(struct elfhdr);
  eh.shoff = 0;
  eh.flags = 0;
  eh.ehsize = sizeof(struct elfhdr);
  eh.phentsize = sizeof(struct proghdr);
  eh.phnum = 1;
  eh.shentsize = 0;
  eh.shnum = 0;
  eh.shstrndx = 0;

  // Fill Phdr (single LOAD for text+rodata, RX|R)
  ph.type = ELF_PROG_LOAD;
  ph.flags = ELF_PROG_FLAG_READ | ELF_PROG_FLAG_EXEC | ELF_PROG_FLAG_WRITE; // R|X|W
  ph.off = off_text;
  ph.vaddr = base_vaddr + off_text;
  ph.paddr = ph.vaddr;
  ph.filesz = filesz - off_text;
  ph.memsz = ph.filesz;
  ph.align = 0x1000;

  // Write to file
  int fd = open(out_path, O_WRONLY|O_CREAT|O_TRUNC, 0755);
  if (fd < 0){ write(1, "cc: cannot open output\n", 23); return 1; }
  write(1, "G", 1);
  write(fd, (char*)&eh, sizeof(eh));
  write(fd, (char*)&ph, sizeof(ph));
  // text
  write(fd, (char*)text, text_size); write(1, "H", 1);
  // rodata: write string pool sequentially
  for(int i=0;i<ro_cnt;i++) if (ro_len[i]>0) write(fd, ro_s[i], ro_len[i]); write(1, "I", 1);
  close(fd); write(1, "K", 1);
  return 0;
}

// --- main -------------------------------------------------------------------

static int read_all(const char* path, char* buf, int cap){
  int fd = open(path, O_RDONLY, 0);
  if (fd < 0) return -1;
  int n = read(fd, buf, cap-1);
  if (n < 0) n = 0; buf[n] = '\0';
  close(fd);
  return n;
}

static void basename_no_ext(const char* in, char* out, int cap){
  int i=0, last_slash=-1, last_dot=-1; while(in[i]){ if(in[i]=='/') last_slash=i; if(in[i]=='.') last_dot=i; i++; }
  int start = last_slash+1; int end = (last_dot>start)? last_dot : i;
  int k=0; for(int j=start; j<end && k<cap-1; j++) out[k++]=in[j]; out[k]='\0';
}

int main(int argc, char** argv){
  write(1, "S", 1);
  if (argc < 2){ write(1, "usage: cc input.c [-o out]\\n", 27); return 1; }
  const char* in = NULL; const char* out = NULL;
  for(int i=1;i<argc;i++){
    if (argv[i][0]=='-' && argv[i][1]=='o' && argv[i][2]=='\0' && i+1<argc){ out = argv[++i]; }
    else if (!in) in = argv[i];
  }
  if (!in){ write(1, "cc: no input\\n", 13); return 1; }

  char src[8192]; int n = read_all(in, src, sizeof(src));
  if (n < 0){ write(1, "cc: failed to read\\n", 20); return 1; }
  write(1, "R", 1);

  // strings are prescanned inside write_elf; here no-op
  var_cnt = 0; // ensure fresh symbols per invocation

  char outbuf[256];
  if (!out){ char base[128]; basename_no_ext(in, base, sizeof(base)); if (str_len(base)==0) { base[0]='a'; base[1]='\0'; } int k=0; for(; base[k] && k<200; k++) outbuf[k]=base[k]; outbuf[k++]='.'; outbuf[k++]='e'; outbuf[k++]='l'; outbuf[k++]='f'; outbuf[k]='\0'; out = outbuf; }

  write(1, "W", 1);
  int rc = write_elf(out, NULL, 0, src);
  write(1, "Z", 1);
  return rc;
}
