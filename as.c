#include "minux.h"
#include <stdarg.h>

// ─────────────────────────────────────────────────────────────────────────────
//  Simple RISC-V assembler for the Minux9 userland toolchain
//
//  This assembler targets the subset of RISC-V assembly emitted by the bundled
//  C compiler (cc.c).  It is intentionally minimal and self-contained so it can
//  run inside the Minux9 environment.  The assembler produces a custom object
//  format that will be consumed by a companion linker (ld.c).  Objects contain
//  section data, symbol metadata, and relocation records.  The linker will then
//  resolve relocations, lay out the final image, and emit an ELF64 executable.
//
//  The implementation is split into several logical parts:
//    * data structure helpers (growable arrays, string utilities)
//    * section/symbol/relocation bookkeeping
//    * tokenisation and minimal parsing support
//    * directive handling (.text/.data/.bss/.align/.byte/.zero/etc)
//    * instruction encoding (integer, floating-point, atomics, pseudo ops)
//    * expression parsing for immediates and relocation aware operands
//    * object writer (our lightweight format)
//
//  NOTE: the assembler purposefully focuses on the instructions/directives used
//  by cc.c.  It is not a general purpose assembler and omits many architectural
//  features.  Where instructions require relocations their immediate fields are
//  left zeroed and a relocation entry is emitted so that the linker can resolve
//  them after the final layout is known.
// ─────────────────────────────────────────────────────────────────────────────

#define ARRAY_LEN(x) ((int)(sizeof(x) / sizeof((x)[0])))

static void fatal(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  fprintf(stderr, "as: ");
  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n");
  va_end(ap);
  exit(1);
}

static void *xmalloc(size_t n) {
  void *p = malloc(n);
  if (!p)
    fatal("out of memory");
  return p;
}

static void *xrealloc(void *ptr, size_t n) {
  void *p = realloc(ptr, n);
  if (!p)
    fatal("out of memory");
  return p;
}

static int digit_val(int c) {
  if (c >= '0' && c <= '9') return c - '0';
  if (c >= 'a' && c <= 'f') return c - 'a' + 10;
  if (c >= 'A' && c <= 'F') return c - 'A' + 10;
  return -1;
}

static const char *skip_spaces(const char *s) {
  while (*s && isspace((unsigned char)*s))
    s++;
  return s;
}

static char *find_plus_minus(char *s) {
  for (; *s; s++) {
    if (*s == '+' || *s == '-')
      return s;
  }
  return NULL;
}

static char *read_line(FILE *fp, char *buf, size_t size) {
  if (!fp || size == 0)
    return NULL;

  size_t i = 0;
  int c = 0;
  while (i + 1 < size) {
    c = fgetc(fp);
    if (c == EOF)
      break;
    buf[i++] = (char)c;
    if (c == '\n')
      break;
  }

  if (i == 0 && c == EOF)
    return NULL;

  buf[i] = '\0';
  return buf;
}

static uint64_t parse_uint_auto(const char *str) {
  const char *s = skip_spaces(str);
  int base = 10;
  if (s[0] == '0') {
    if (s[1] == 'x' || s[1] == 'X') { base = 16; s += 2; }
    else if (s[1] == 'b' || s[1] == 'B') { base = 2; s += 2; }
    else if (s[1] >= '0' && s[1] <= '7') { base = 8; s += 1; }
  }

  uint64_t val = 0;
  while (*s) {
    int d = digit_val(*s);
    if (d < 0 || d >= base)
      break;
    val = val * base + (uint64_t)d;
    s++;
  }
  return val;
}

static int64_t parse_int_auto(const char *str) {
  const char *s = skip_spaces(str);
  int sign = 1;
  if (*s == '+') {
    s++;
  } else if (*s == '-') {
    sign = -1;
    s++;
  }
  return (int64_t)(sign * (int64_t)parse_uint_auto(s));
}

static long parse_long10(const char *str) {
  const char *s = skip_spaces(str);
  int sign = 1;
  if (*s == '+') s++;
  else if (*s == '-') { sign = -1; s++; }
  long val = 0;
  while (*s >= '0' && *s <= '9') {
    val = val * 10 + (*s - '0');
    s++;
  }
  return sign * val;
}

// ─────────────────────────────────────────────────────────────────────────────
// Growable array helpers (vector-like)

#define DECL_VEC(Type, Name)                                                   \
  typedef struct {                                                             \
    Type *data;                                                                \
    size_t len;                                                                \
    size_t cap;                                                                \
  } Name;                                                                      \
                                                                              \
  static void Name##_push(Name *vec, Type value) {                             \
    if (vec->len == vec->cap) {                                                \
      size_t new_cap = vec->cap ? vec->cap * 2 : 16;                           \
      vec->data = xrealloc(vec->data, new_cap * sizeof(Type));                 \
      vec->cap = new_cap;                                                      \
    }                                                                          \
    vec->data[vec->len++] = value;                                             \
  }

// ─────────────────────────────────────────────────────────────────────────────
// Section / symbol / relocation metadata

typedef enum {
  SEC_TEXT,
  SEC_DATA,
  SEC_BSS,
  SEC_RODATA,
  SEC_TDATA,
  SEC_TBSS,
  SEC_CUSTOM_START
} SectionKind;

typedef struct {
  char *name;
  SectionKind kind;
  uint8_t *data;
  size_t size;
  size_t cap;
  size_t align;   // alignment requirement (power of two)
  bool alloc;     // occupies memory (bss has alloc but no data stored)
  bool exec;      // executable instructions
  bool write;     // writable
} Section;

DECL_VEC(Section, SectionVec)

static Section *current_section;
static SectionVec sections;

static Section *new_section(const char *name, SectionKind kind, bool alloc,
                            bool exec, bool write) {
  Section sec = {
      .name = strdup(name),
      .kind = kind,
      .data = NULL,
      .size = 0,
      .cap = 0,
      .align = 1,
      .alloc = alloc,
      .exec = exec,
      .write = write,
  };
  SectionVec_push(&sections, sec);
  return &sections.data[sections.len - 1];
}

static Section *find_or_create_section(const char *name) {
  for (size_t i = 0; i < sections.len; i++) {
    if (strcmp(sections.data[i].name, name) == 0)
      return &sections.data[i];
  }

  SectionKind kind = SEC_CUSTOM_START;
  bool alloc = true, exec = false, write = true;

  if (strcmp(name, ".text") == 0) {
    kind = SEC_TEXT;
    exec = true;
    write = false;
  } else if (strcmp(name, ".data") == 0) {
    kind = SEC_DATA;
  } else if (strcmp(name, ".bss") == 0) {
    kind = SEC_BSS;
  } else if (strcmp(name, ".rodata") == 0) {
    kind = SEC_RODATA;
    write = false;
  } else if (strcmp(name, ".tdata") == 0) {
    kind = SEC_TDATA;
  } else if (strcmp(name, ".tbss") == 0) {
    kind = SEC_TBSS;
  }

  return new_section(name, kind, alloc, exec, write);
}

static Section *require_current_section(void) {
  if (!current_section)
    fatal("no active section (.text/.data/.bss)");
  return current_section;
}

static void ensure_capacity(Section *sec, size_t extra) {
  if (!sec->write && sec->kind != SEC_TEXT && sec->kind != SEC_RODATA &&
      sec->kind != SEC_TDATA) {
    // Non-writable, non-text, non-rodata sections shouldn't receive data via
    // the assembler stream.
    fatal("section %s does not accept data emission", sec->name);
  }

  if (sec->cap < sec->size + extra) {
    size_t new_cap = sec->cap ? sec->cap * 2 : 64;
    while (new_cap < sec->size + extra)
      new_cap *= 2;
    sec->data = xrealloc(sec->data, new_cap);
    sec->cap = new_cap;
  }
}

static void emit_bytes(Section *sec, const void *src, size_t n) {
  ensure_capacity(sec, n);
  memcpy(sec->data + sec->size, src, n);
  sec->size += n;
}

static void emit_u8(Section *sec, uint8_t v) { emit_bytes(sec, &v, 1); }

static void emit_u32(Section *sec, uint32_t v) {
  uint8_t buf[4] = {v & 0xff, (uint8_t)(v >> 8), (uint8_t)(v >> 16),
                    (uint8_t)(v >> 24)};
  emit_bytes(sec, buf, 4);
}

static void emit_u64(Section *sec, uint64_t v) {
  uint8_t buf[8];
  for (int i = 0; i < 8; i++)
    buf[i] = (uint8_t)(v >> (i * 8));
  emit_bytes(sec, buf, 8);
}

static void align_section(Section *sec, size_t align) {
  if (align == 0)
    return;
  if ((align & (align - 1)) != 0)
    fatal("alignment must be power of two");
  if (sec->align < align)
    sec->align = align;

  size_t mask = align - 1;
  size_t padding = (-sec->size) & mask;
  if (padding && (sec->write || sec->exec)) {
    // For alloc/data sections we physically emit zeros to honour the alignment.
    for (size_t i = 0; i < padding; i++)
      emit_u8(sec, 0);
  } else {
    // For BSS-like sections we only adjust the logical size.
    sec->size += padding;
  }
}

// ─────────────────────────────────────────────────────────────────────────────
// Symbol table

typedef enum {
  SYM_LOCAL = 0,
  SYM_GLOBAL = 1,
} SymbolVisibility;

typedef enum {
  SYM_UNDEF = -1,
  SYM_ABS = -2,
  SYM_COMMON = -3,
} SymbolSectionSpecial;

typedef enum {
  SYM_TYPE_NONE = 0,
  SYM_TYPE_FUNC = 1,
  SYM_TYPE_OBJECT = 2,
} SymbolType;

typedef struct {
  char *name;
  int section;      // index into sections (>=0) or SYM_UNDEF / etc
  uint64_t value;   // offset within section or absolute value
  uint64_t size;    // function/object size when provided
  SymbolVisibility vis;
  SymbolType type;
  uint32_t align;   // for commons
} Symbol;

DECL_VEC(Symbol, SymbolVec)

static SymbolVec symbols;

static Symbol *find_symbol(const char *name) {
  for (size_t i = 0; i < symbols.len; i++) {
    if (strcmp(symbols.data[i].name, name) == 0)
      return &symbols.data[i];
  }
  return NULL;
}

static Symbol *intern_symbol(const char *name) {
  Symbol *sym = find_symbol(name);
  if (sym)
    return sym;
  Symbol tmp = {
      .name = strdup(name),
      .section = SYM_UNDEF,
      .value = 0,
      .size = 0,
      .vis = SYM_LOCAL,
      .type = SYM_TYPE_NONE,
      .align = 0,
  };
  SymbolVec_push(&symbols, tmp);
  return &symbols.data[symbols.len - 1];
}

static int symbol_index(Symbol *sym) {
  return (int)(sym - symbols.data);
}

// ─────────────────────────────────────────────────────────────────────────────
// Relocation records

typedef enum {
  RELOC_ABS64,
  RELOC_HI20,
  RELOC_LO12_I,
  RELOC_LO12_S,
  RELOC_PCREL_HI20,
  RELOC_PCREL_LO12_I,
  RELOC_PCREL_LO12_S,
  RELOC_BRANCH,
  RELOC_JAL,
  RELOC_CALL,
  RELOC_TPREL_HI20,
  RELOC_TPREL_LO12_I,
  RELOC_TPREL_LO12_S,
} RelocType;

typedef struct {
  int section;     // section index that owns this relocation
  uint64_t offset; // offset within section
  int symbol;      // symbol table index
  int64_t addend;  // addend to be applied
  RelocType type;
} Reloc;

DECL_VEC(Reloc, RelocVec)

static RelocVec relocs;

static void add_reloc(int section_index, uint64_t offset, Symbol *sym,
                      int64_t addend, RelocType type) {
  Reloc rec = {
      .section = section_index,
      .offset = offset,
      .symbol = symbol_index(sym),
      .addend = addend,
      .type = type,
  };
  RelocVec_push(&relocs, rec);
}

// ─────────────────────────────────────────────────────────────────────────────
// Token helpers for parsing operands / directives

typedef struct {
  char *base;  // owning buffer (line storage)
  char *s;     // current parse cursor
} LineReader;

static void lr_init(LineReader *lr, char *line) {
  lr->base = line;
  lr->s = line;
}

static void lr_skip_spaces(LineReader *lr) {
  while (*lr->s && isspace((unsigned char)*lr->s))
    lr->s++;
}

static bool is_ident_start(int c) {
  return isalpha(c) || c == '_' || c == '.' || c == '$';
}

// Read raw token up to comma/space/comment keeping parentheses
static char *lr_read_token(LineReader *lr) {
  lr_skip_spaces(lr);
  if (*lr->s == '\0')
    return NULL;

  char *start = lr->s;
  int paren = 0;
  while (*lr->s) {
    char c = *lr->s;
    if (c == '(')
      paren++;
    else if (c == ')')
      paren--;
    else if (c == ',' && paren == 0)
      break;
    else if ((c == '#' || c == ';') && paren == 0)
      break;
    lr->s++;
  }

  size_t len = (size_t)(lr->s - start);
  char *tok = xmalloc(len + 1);
  memcpy(tok, start, len);
  tok[len] = '\0';

  if (*lr->s == ',')
    lr->s++;
  return tok;
}

static char *str_trim(char *s) {
  while (*s && isspace((unsigned char)*s))
    s++;
  char *end = s + strlen(s);
  while (end > s && isspace((unsigned char)end[-1]))
    *--end = '\0';
  return s;
}

// ─────────────────────────────────────────────────────────────────────────────
// Register parsing

static int parse_int_reg(const char *tok) {
  if (tok[0] == 'x' && tok[1] >= '0' && tok[1] <= '9') {
    long v = parse_long10(tok + 1);
    const char *p = tok + 1;
    while (*p >= '0' && *p <= '9') p++;
    if (*p == '\0' && v >= 0 && v <= 31)
      return (int)v;
  }

  static const char *names[] = {
      "zero", "ra",  "sp",  "gp",  "tp",  "t0",  "t1",  "t2",
      "s0",   "s1",  "a0",  "a1",  "a2",  "a3",  "a4",  "a5",
      "a6",   "a7",  "s2",  "s3",  "s4",  "s5",  "s6",  "s7",
      "s8",   "s9",  "s10", "s11", "t3",  "t4",  "t5",  "t6",
  };

  for (int i = 0; i < 32; i++) {
    if (strcmp(tok, names[i]) == 0)
      return i;
  }

  if (tok[0] == 's' && tok[1] == 'p' && tok[2] == '\0')
    return 2; // redundant but harmless

  return -1;
}

static int parse_float_reg(const char *tok) {
  if ((tok[0] == 'f' || tok[0] == 'F') && (tok[1] == 's' || tok[1] == 't' ||
                                           tok[1] == 'a' || tok[1] == 'f')) {
    // support ABI aliases fs0..fs11, ft0..ft11, fa0..fa7, f0..f31
    if (tok[1] == 's' || tok[1] == 't' || tok[1] == 'a') {
      static const char *fs_names[] = {"fs0", "fs1", "fs2", "fs3", "fs4",
                                       "fs5", "fs6", "fs7", "fs8", "fs9",
                                       "fs10", "fs11"};
      static const char *ft_names[] = {"ft0", "ft1", "ft2", "ft3", "ft4",
                                       "ft5", "ft6", "ft7", "ft8", "ft9",
                                       "ft10", "ft11"};
      static const char *fa_names[] = {"fa0", "fa1", "fa2", "fa3",
                                       "fa4", "fa5", "fa6", "fa7"};

      for (int i = 0; i < ARRAY_LEN(ft_names); i++)
        if (strcmp(tok, ft_names[i]) == 0)
          return i < 8 ? i : 16 + (i - 8);
      for (int i = 0; i < ARRAY_LEN(fa_names); i++)
        if (strcmp(tok, fa_names[i]) == 0)
          return 10 + i;
      for (int i = 0; i < ARRAY_LEN(fs_names); i++)
        if (strcmp(tok, fs_names[i]) == 0)
          return 8 + i;
    }
  }

  if ((tok[0] == 'f' || tok[0] == 'F') && tok[1] >= '0' && tok[1] <= '9') {
    long v = parse_long10(tok + 1);
    const char *p = tok + 1;
    while (*p >= '0' && *p <= '9') p++;
    if (*p == '\0' && v >= 0 && v <= 31)
      return (int)v;
  }

  return -1;
}

// ─────────────────────────────────────────────────────────────────────────────
// Expression parsing for immediates (symbol + addend / reloc wrappers)

typedef enum {
  EXPR_IMM,       // pure immediate value
  EXPR_SYMBOL,    // symbol (optionally with addend)
  EXPR_RELOC_WRP, // relocation wrapper e.g. %pcrel_lo(sym)
} ExprKind;

typedef struct {
  ExprKind kind;
  int64_t imm;
  Symbol *sym;
  RelocType reloc; // valid when kind == EXPR_RELOC_WRP
  int64_t addend;  // for symbol or reloc wrappers supporting sym+const
} Expr;

static RelocType reloc_from_wrapper(const char *name, bool is_store) {
  if (strcmp(name, "%hi") == 0)
    return RELOC_HI20;
  if (strcmp(name, "%lo") == 0)
    return is_store ? RELOC_LO12_S : RELOC_LO12_I;
  if (strcmp(name, "%pcrel_hi") == 0)
    return RELOC_PCREL_HI20;
  if (strcmp(name, "%pcrel_lo") == 0)
    return is_store ? RELOC_PCREL_LO12_S : RELOC_PCREL_LO12_I;
  if (strcmp(name, "%tprel_hi") == 0)
    return RELOC_TPREL_HI20;
  if (strcmp(name, "%tprel_lo") == 0)
    return is_store ? RELOC_TPREL_LO12_S : RELOC_TPREL_LO12_I;
  fatal("unsupported relocation wrapper %s", name);
  return RELOC_ABS64; // unreachable
}

static Expr parse_expr(const char *tok, bool is_store_format) {
  Expr e = {.kind = EXPR_IMM, .imm = 0, .sym = NULL, .reloc = RELOC_ABS64,
            .addend = 0};

  char *copy = strdup(tok);
  char *s = str_trim(copy);
  if (*s == '\0') {
    free(copy);
    fatal("expected expression, got empty token");
  }

  if (*s == '%') {
    char *paren = strchr(s, '(');
    if (!paren || paren[1] == '\0')
      fatal("malformed relocation wrapper: %s", tok);
    *paren = '\0';
    char *close = strrchr(paren + 1, ')');
    if (!close)
      fatal("missing ')' in %s", tok);
    *close = '\0';

    RelocType reloc = reloc_from_wrapper(s, is_store_format);
    char *inside = str_trim(paren + 1);

    char *plus = find_plus_minus(inside);
    int64_t addend = 0;
    if (plus && plus != inside) {
      addend = parse_int_auto(plus);
      *plus = '\0';
    }

    Symbol *sym = intern_symbol(inside);
    e.kind = EXPR_RELOC_WRP;
    e.sym = sym;
    e.reloc = reloc;
    e.addend = addend;
  } else if (is_ident_start((unsigned char)*s)) {
    char *plus = find_plus_minus(s);
    int64_t addend = 0;
    if (plus && plus != s) {
      addend = parse_int_auto(plus);
      *plus = '\0';
    }
    Symbol *sym = intern_symbol(s);
    e.kind = EXPR_SYMBOL;
    e.sym = sym;
    e.addend = addend;
  } else {
    e.kind = EXPR_IMM;
    e.imm = parse_int_auto(s);
  }

  free(copy);
  return e;
}

// ─────────────────────────────────────────────────────────────────────────────
// Numeric local label helpers ("1:", "1f", "1b", ... )

typedef struct {
  int count_defined[10];
} NumericLabelState;

static NumericLabelState num_label_state;

static char *numeric_label_name(int digit, int index) {
  char buf[32];
  snprintf(buf, sizeof(buf), ".L.num%d.%d", digit, index);
  return strdup(buf);
}

static Symbol *numeric_label_ref(int digit, bool forward) {
  if (digit < 0 || digit > 9)
    fatal("numeric label digit out of range");
  int index;
  if (forward)
    index = num_label_state.count_defined[digit];
  else {
    index = num_label_state.count_defined[digit] - 1;
    if (index < 0)
      fatal("numeric label %db not defined yet", digit);
  }
  char *name = numeric_label_name(digit, index);
  Symbol *sym = intern_symbol(name);
  free(name);
  return sym;
}

static Symbol *numeric_label_define(int digit, Section *sec) {
  if (digit < 0 || digit > 9)
    fatal("numeric label digit out of range");
  int index = num_label_state.count_defined[digit]++;
  char *name = numeric_label_name(digit, index);
  Symbol *sym = intern_symbol(name);
  free(name);
  sym->section = (int)(sec - sections.data);
  sym->value = sec->size;
  return sym;
}

// ─────────────────────────────────────────────────────────────────────────────
// Instruction encoding helpers

static uint32_t encode_r_type(int funct7, int rs2, int rs1, int funct3, int rd,
                              int opcode) {
  return (uint32_t)((funct7 & 0x7f) << 25 | (rs2 & 0x1f) << 20 |
                    (rs1 & 0x1f) << 15 | (funct3 & 7) << 12 | (rd & 0x1f) << 7 |
                    (opcode & 0x7f));
}

static uint32_t encode_i_type(int imm, int rs1, int funct3, int rd, int opcode) {
  return (uint32_t)(((imm & 0xfff) << 20) | (rs1 & 0x1f) << 15 |
                    (funct3 & 7) << 12 | (rd & 0x1f) << 7 | (opcode & 0x7f));
}

static uint32_t encode_s_type(int imm, int rs2, int rs1, int funct3,
                              int opcode) {
  int imm11_5 = (imm >> 5) & 0x7f;
  int imm4_0 = imm & 0x1f;
  return (uint32_t)((imm11_5 << 25) | (rs2 & 0x1f) << 20 | (rs1 & 0x1f) << 15 |
                    (funct3 & 7) << 12 | (imm4_0 << 7) | (opcode & 0x7f));
}

static uint32_t encode_u_type(int imm, int rd, int opcode) {
  return (uint32_t)(((imm & 0xfffff) << 12) | (rd & 0x1f) << 7 |
                    (opcode & 0x7f));
}

static uint32_t encode_b_type(int imm, int rs2, int rs1, int funct3,
                              int opcode) {
  int imm12 = (imm >> 12) & 1;
  int imm11 = (imm >> 11) & 1;
  int imm10_5 = (imm >> 5) & 0x3f;
  int imm4_1 = (imm >> 1) & 0xf;
  return (uint32_t)((imm12 << 31) | (imm11 << 7) | (imm10_5 << 25) |
                    (imm4_1 << 8) | (rs2 & 0x1f) << 20 | (rs1 & 0x1f) << 15 |
                    (funct3 & 7) << 12 | (opcode & 0x7f));
}

static uint32_t encode_j_type(int imm, int rd, int opcode) {
  int imm20 = (imm >> 20) & 1;
  int imm10_1 = (imm >> 1) & 0x3ff;
  int imm11 = (imm >> 11) & 1;
  int imm19_12 = (imm >> 12) & 0xff;
  return (uint32_t)((imm20 << 31) | (imm19_12 << 12) | (imm11 << 20) |
                    (imm10_1 << 21) | (rd & 0x1f) << 7 | (opcode & 0x7f));
}

// Forward declaration for instruction dispatcher so that pseudo op helpers can
// reuse it when they need to emit real instructions.
static void assemble_instruction(const char *mnemonic, char **operands,
                                 int operand_count, Section *sec);

// Convenience wrapper to emit a concrete instruction by re-invoking the
// dispatcher (used by pseudo instructions expanding to multiple real ops).
static void emit_instr(const char *fmt, ...) {
  char buf[128];
  va_list ap;
  va_start(ap, fmt);
  vsnprintf(buf, sizeof(buf), fmt, ap);
  va_end(ap);

  char *tmp = strdup(buf);
  char *mn = str_trim(tmp);
  char *space = strchr(mn, ' ');
  char *operands[8];
  int count = 0;

  if (space) {
    *space = '\0';
    char *rest = space + 1;
    char *tok;
    LineReader lr;
    lr_init(&lr, rest);
    while ((tok = lr_read_token(&lr)) != NULL) {
      char *trimmed = str_trim(tok);
      if (*trimmed) {
        operands[count++] = strdup(trimmed);
      }
      free(tok);
    }
  }

  Section *sec = require_current_section();
  assemble_instruction(mn, operands, count, sec);
  for (int i = 0; i < count; i++)
    free(operands[i]);
  free(tmp);
}

// ─────────────────────────────────────────────────────────────────────────────
// Instruction tables

typedef struct {
  const char *name;
  int funct7;
  int funct3;
  int opcode;
} RTypeInfo;

typedef struct {
  const char *name;
  int funct3;
  int opcode;
} ITypeInfo;

typedef struct {
  const char *name;
  int funct3;
  int opcode;
} STypeInfo;

typedef struct {
  const char *name;
  int funct3;
  int opcode;
} BTypeInfo;

typedef struct {
  const char *name;
  int opcode;
} UTypeInfo;

typedef struct {
  const char *name;
  int opcode;
} JTypeInfo;

static const RTypeInfo rtype_table[] = {
    {"add", 0x00, 0x0, 0x33},
    {"sub", 0x20, 0x0, 0x33},
    {"sll", 0x00, 0x1, 0x33},
    {"slt", 0x00, 0x2, 0x33},
    {"sltu", 0x00, 0x3, 0x33},
    {"xor", 0x00, 0x4, 0x33},
    {"srl", 0x00, 0x5, 0x33},
    {"sra", 0x20, 0x5, 0x33},
    {"or", 0x00, 0x6, 0x33},
    {"and", 0x00, 0x7, 0x33},

    {"addw", 0x00, 0x0, 0x3b},
    {"subw", 0x20, 0x0, 0x3b},
    {"sllw", 0x00, 0x1, 0x3b},
    {"srlw", 0x00, 0x5, 0x3b},
    {"sraw", 0x20, 0x5, 0x3b},

    {"mul", 0x01, 0x0, 0x33},
    {"mulw", 0x01, 0x0, 0x3b},
    {"div", 0x01, 0x4, 0x33},
    {"divu", 0x01, 0x5, 0x33},
    {"divw", 0x01, 0x4, 0x3b},
    {"divuw", 0x01, 0x5, 0x3b},
    {"rem", 0x01, 0x6, 0x33},
    {"remu", 0x01, 0x7, 0x33},
    {"remw", 0x01, 0x6, 0x3b},
    {"remuw", 0x01, 0x7, 0x3b},

    // floating point R-type encodings (opcode 0x53)
    {"fadd.s", 0x00, 0x0, 0x53},
    {"fsub.s", 0x04, 0x0, 0x53},
    {"fmul.s", 0x08, 0x0, 0x53},
    {"fdiv.s", 0x0c, 0x0, 0x53},
    {"fadd.d", 0x01, 0x0, 0x53},
    {"fsub.d", 0x05, 0x0, 0x53},
    {"fmul.d", 0x09, 0x0, 0x53},
    {"fdiv.d", 0x0d, 0x0, 0x53},

    {"fsgnj.d", 0x10, 0x1, 0x53},
    {"fsgnjn.d", 0x10, 0x2, 0x53},
    {"fsgnjx.d", 0x10, 0x3, 0x53},
};

static const ITypeInfo itype_table[] = {
    {"addi", 0x0, 0x13},
    {"slti", 0x2, 0x13},
    {"sltiu", 0x3, 0x13},
    {"xori", 0x4, 0x13},
    {"ori", 0x6, 0x13},
    {"andi", 0x7, 0x13},
    {"slli", 0x1, 0x13},
    {"srli", 0x5, 0x13},
    {"srai", 0x5, 0x13},

    {"addiw", 0x0, 0x1b},
    {"slliw", 0x1, 0x1b},
    {"srliw", 0x5, 0x1b},
    {"sraiw", 0x5, 0x1b},

    {"lb", 0x0, 0x03},
    {"lh", 0x1, 0x03},
    {"lw", 0x2, 0x03},
    {"ld", 0x3, 0x03},
    {"lbu", 0x4, 0x03},
    {"lhu", 0x5, 0x03},
    {"lwu", 0x6, 0x03},

    {"jalr", 0x0, 0x67},

    {"flw", 0x2, 0x07},
    {"fld", 0x3, 0x07},

    {"fence", 0x0, 0x0f},
};

static const STypeInfo stype_table[] = {
    {"sb", 0x0, 0x23},
    {"sh", 0x1, 0x23},
    {"sw", 0x2, 0x23},
    {"sd", 0x3, 0x23},

    {"fsw", 0x2, 0x27},
    {"fsd", 0x3, 0x27},
};

static const BTypeInfo btype_table[] = {
    {"beq", 0x0, 0x63},
    {"bne", 0x1, 0x63},
    {"blt", 0x4, 0x63},
    {"bge", 0x5, 0x63},
    {"bltu", 0x6, 0x63},
    {"bgeu", 0x7, 0x63},
};

static const UTypeInfo utype_table[] = {
    {"lui", 0x37},
    {"auipc", 0x17},
};

static const JTypeInfo jtype_table[] = {
    {"jal", 0x6f},
};

// Atomics: lr/sc/amoswap (RV64A) -> custom encoding
static uint32_t encode_lr_sc(const char *mnemonic, int rd, int rs1, int rs2,
                             int aq, int rl, int funct3) {
  int opcode = 0x2f;
  int funct5 = 0;
  if (strncmp(mnemonic, "lr", 2) == 0) {
    funct5 = 0x02; // lr
  } else if (strncmp(mnemonic, "sc", 2) == 0) {
    funct5 = 0x03; // sc
  } else {
    fatal("unsupported LR/SC mnemonic %s", mnemonic);
  }
  int funct7 = (funct5 << 2) | (aq ? 2 : 0) | (rl ? 1 : 0);
  return (uint32_t)((funct7 << 25) | (rs2 & 0x1f) << 20 | (rs1 & 0x1f) << 15 |
                    (funct3 & 7) << 12 | (rd & 0x1f) << 7 | opcode);
}

static uint32_t encode_amo(const char *mnemonic, int rd, int rs1, int rs2,
                            int aq, int rl, int funct3) {
  int opcode = 0x2f;
  int funct5 = 0;
  if (strncmp(mnemonic, "amoswap", 7) == 0) {
    funct5 = 0x01;
  } else {
    fatal("unsupported AMO mnemonic %s", mnemonic);
  }
  int funct7 = (funct5 << 2) | (aq ? 2 : 0) | (rl ? 1 : 0);
  return (uint32_t)((funct7 << 25) | (rs2 & 0x1f) << 20 | (rs1 & 0x1f) << 15 |
                    (funct3 & 7) << 12 | (rd & 0x1f) << 7 | opcode);
}

// ─────────────────────────────────────────────────────────────────────────────
// Instruction dispatcher

static void expect_operand_count(const char *mnemonic, int got, int expected) {
  if (got != expected)
    fatal("%s expects %d operand(s), got %d", mnemonic, expected, got);
}

static bool starts_with(const char *s, const char *prefix) {
  return strncmp(s, prefix, strlen(prefix)) == 0;
}
static void handle_li(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 2);
  int rd = parse_int_reg(ops[0]);
  if (rd < 0)
    fatal("invalid destination register in %s", mnemonic);
  Expr e = parse_expr(ops[1], false);

  if (e.kind == EXPR_IMM) {
    int64_t imm = e.imm;
    if (imm >= -2048 && imm <= 2047) {
      emit_instr("addi %s, zero, %lld", ops[0], (long long)imm);
      return;
    }

    uint64_t uimm = (uint64_t)imm;
    uint32_t hi = (uint32_t)((uimm + 0x800) >> 12);
    int32_t lo = (int32_t)(uimm & 0xfff);
    if (lo & 0x800) {
      hi += 1;
      lo -= 0x1000;
    }
    emit_instr("lui %s, %u", ops[0], hi);
    emit_instr("addi %s, %s, %d", ops[0], ops[0], lo);
    return;
  }

  if (e.kind == EXPR_SYMBOL) {
    emit_instr("lui %s, %%hi(%s)", ops[0], e.sym->name);
    emit_instr("addi %s, %s, %%lo(%s)%+lld", ops[0], ops[0], e.sym->name,
               (long long)e.addend);
    return;
  }

  fatal("unsupported expression in li: %s", ops[1]);
}

static void handle_mv(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 2);
  emit_instr("add %s, %s, zero", ops[0], ops[1]);
}

static void handle_not(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 2);
  emit_instr("xori %s, %s, -1", ops[0], ops[1]);
}

static void handle_neg(const char *mnemonic, char **ops, int count,
                       bool word) {
  expect_operand_count(mnemonic, count, 2);
  emit_instr(word ? "subw %s, zero, %s" : "sub %s, zero, %s", ops[0],
             ops[1]);
}

static void handle_ret(const char *mnemonic, char **ops, int count) {
  (void)ops;
  expect_operand_count(mnemonic, count, 0);
  emit_instr("jalr zero, ra, 0");
}

static void handle_jr(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 1);
  emit_instr("jalr zero, %s, 0", ops[0]);
}

static void handle_j(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 1);
  emit_instr("jal zero, %s", ops[0]);
}

static void handle_call(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 1);
  emit_instr("jal ra, %s", ops[0]);
}

static void handle_la(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 2);
  emit_instr("auipc %s, %%pcrel_hi(%s)", ops[0], ops[1]);
  emit_instr("addi %s, %s, %%pcrel_lo(%s)", ops[0], ops[0], ops[1]);
}

static void handle_seqz(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 2);
  emit_instr("sltiu %s, %s, 1", ops[0], ops[1]);
}

static void handle_snez(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 2);
  emit_instr("sltu %s, zero, %s", ops[0], ops[1]);
}

static void handle_bleu(const char *mnemonic, char **ops, int count) {
  expect_operand_count(mnemonic, count, 3);
  emit_instr("bgeu %s, %s, %s", ops[2], ops[1], ops[0]);
}

static void assemble_instruction(const char *mnemonic, char **operands,
                                 int operand_count, Section *sec) {
  (void)sec;

  // Handle pseudo instructions first
  if (strcmp(mnemonic, "li") == 0) {
    handle_li(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "mv") == 0) {
    handle_mv(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "not") == 0) {
    handle_not(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "neg") == 0) {
    handle_neg(mnemonic, operands, operand_count, false);
    return;
  }
  if (strcmp(mnemonic, "negw") == 0) {
    handle_neg(mnemonic, operands, operand_count, true);
    return;
  }
  if (strcmp(mnemonic, "ret") == 0) {
    handle_ret(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "jr") == 0) {
    handle_jr(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "j") == 0) {
    handle_j(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "call") == 0) {
    handle_call(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "la") == 0) {
    handle_la(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "seqz") == 0) {
    handle_seqz(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "snez") == 0) {
    handle_snez(mnemonic, operands, operand_count);
    return;
  }
  if (strcmp(mnemonic, "bleu") == 0) {
    handle_bleu(mnemonic, operands, operand_count);
    return;
  }

  // Branch pseudo with zero comparisons
  if (strcmp(mnemonic, "beqz") == 0) {
    expect_operand_count(mnemonic, operand_count, 2);
    emit_instr("beq %s, zero, %s", operands[0], operands[1]);
    return;
  }
  if (strcmp(mnemonic, "bnez") == 0) {
    expect_operand_count(mnemonic, operand_count, 2);
    emit_instr("bne %s, zero, %s", operands[0], operands[1]);
    return;
  }

  // Fall-through to actual instruction encoders
  Section *section = require_current_section();
  int section_index = (int)(section - sections.data);
  size_t loc = section->size;

  for (size_t i = 0; i < ARRAY_LEN(rtype_table); i++) {
    if (strcmp(mnemonic, rtype_table[i].name) == 0) {
      expect_operand_count(mnemonic, operand_count, 3);
      int rd = parse_int_reg(operands[0]);
      int rs1, rs2;
      if (strncmp(mnemonic, "f", 1) == 0 && strchr(mnemonic, '.')) {
        // floating point R-type (rd, rs1, rs2 as FP regs)
        rd = parse_float_reg(operands[0]);
        rs1 = parse_float_reg(operands[1]);
        rs2 = parse_float_reg(operands[2]);
      } else if (strcmp(mnemonic, "fsgnj.d") == 0 ||
                 strcmp(mnemonic, "fsgnjn.d") == 0 ||
                 strcmp(mnemonic, "fsgnjx.d") == 0) {
        rd = parse_float_reg(operands[0]);
        rs1 = parse_float_reg(operands[1]);
        rs2 = parse_float_reg(operands[2]);
      } else {
        rs1 = parse_int_reg(operands[1]);
        rs2 = parse_int_reg(operands[2]);
      }
      if (rd < 0 || rs1 < 0 || rs2 < 0)
        fatal("invalid register operand for %s", mnemonic);

      uint32_t word = encode_r_type(rtype_table[i].funct7, rs2, rs1,
                                    rtype_table[i].funct3, rd,
                                    rtype_table[i].opcode);
      emit_u32(section, word);
      return;
    }
  }

  for (size_t i = 0; i < ARRAY_LEN(itype_table); i++) {
    if (strcmp(mnemonic, itype_table[i].name) == 0) {
      if (strcmp(mnemonic, "fence") == 0) {
        expect_operand_count(mnemonic, operand_count, 2);
        // Currently only support fence iorw, ow pattern
        uint32_t word = 0x0ff0000f; // fence iorw, iorw baseline
        emit_u32(section, word);
        return;
      }

      expect_operand_count(mnemonic, operand_count, 3);
      bool is_shift = (strcmp(mnemonic, "slli") == 0 ||
                       strcmp(mnemonic, "srli") == 0 ||
                       strcmp(mnemonic, "srai") == 0 ||
                       strcmp(mnemonic, "slliw") == 0 ||
                       strcmp(mnemonic, "srliw") == 0 ||
                       strcmp(mnemonic, "sraiw") == 0);

      bool is_load = (itype_table[i].opcode == 0x03 ||
                      itype_table[i].opcode == 0x07);

      int rd = (itype_table[i].opcode == 0x07)
                   ? parse_float_reg(operands[0])
                   : parse_int_reg(operands[0]);
      int rs1;
      Expr immexpr;

      if (is_load) {
        char *op = operands[1];
        char *paren = strchr(op, '(');
        if (!paren)
          fatal("expected offset(base) addressing in %s", mnemonic);
        *paren = '\0';
        char *close = strchr(paren + 1, ')');
        if (!close)
          fatal("missing ')' in %s", mnemonic);
        *close = '\0';
        char *offset = str_trim(op);
        char *base = str_trim(paren + 1);
        rs1 = parse_int_reg(base);
        if (rs1 < 0)
          fatal("invalid base register in %s", mnemonic);
        immexpr = parse_expr(offset, false);
      } else {
        rs1 = parse_int_reg(operands[1]);
        if (rs1 < 0)
          fatal("invalid rs1 in %s", mnemonic);
        immexpr = parse_expr(operands[2], false);
      }

      if (rd < 0)
        fatal("invalid destination register in %s", mnemonic);

      uint32_t word = encode_i_type(0, rs1, itype_table[i].funct3, rd,
                                    itype_table[i].opcode);

      if (immexpr.kind == EXPR_IMM) {
        int imm = (int)immexpr.imm;
        if ((imm < -2048 || imm > 2047) && !is_shift)
          fatal("immediate out of range for %s", mnemonic);
        if (is_shift) {
          int shamt = imm & 0x3f;
          int funct7 = 0;
          if (strcmp(mnemonic, "srai") == 0 || strcmp(mnemonic, "sraiw") == 0)
            funct7 = 0x20;
          word = encode_i_type((funct7 << 5) | shamt, rs1,
                               itype_table[i].funct3, rd,
                               itype_table[i].opcode);
        } else {
          word = encode_i_type(imm, rs1, itype_table[i].funct3, rd,
                               itype_table[i].opcode);
        }
        emit_u32(section, word);
      } else if (immexpr.kind == EXPR_SYMBOL) {
        emit_u32(section, word);
        add_reloc(section_index, loc, immexpr.sym, immexpr.addend,
                  is_load ? RELOC_LO12_I : RELOC_LO12_I);
      } else if (immexpr.kind == EXPR_RELOC_WRP) {
        emit_u32(section, word);
        add_reloc(section_index, loc, immexpr.sym, immexpr.addend,
                  immexpr.reloc);
      } else {
        fatal("unsupported immediate in %s", mnemonic);
      }
      return;
    }
  }

  for (size_t i = 0; i < ARRAY_LEN(stype_table); i++) {
    if (strcmp(mnemonic, stype_table[i].name) == 0) {
      expect_operand_count(mnemonic, operand_count, 2);
      char *op = operands[1];
      char *paren = strchr(op, '(');
      if (!paren)
        fatal("expected offset(base) in %s", mnemonic);
      *paren = '\0';
      char *close = strchr(paren + 1, ')');
      if (!close)
        fatal("missing ')' in %s", mnemonic);
      *close = '\0';
      char *offset = str_trim(op);
      char *base = str_trim(paren + 1);

      Expr immexpr = parse_expr(offset, true);

      int rs1 = parse_int_reg(base);
      int rs2 = (stype_table[i].opcode == 0x27)
                    ? parse_float_reg(operands[0])
                    : parse_int_reg(operands[0]);
      if (rs1 < 0 || rs2 < 0)
        fatal("invalid register in %s", mnemonic);

      uint32_t word = encode_s_type(0, rs2, rs1, stype_table[i].funct3,
                                    stype_table[i].opcode);
      emit_u32(section, word);

      if (immexpr.kind == EXPR_IMM) {
        int imm = (int)immexpr.imm;
        if (imm < -2048 || imm > 2047)
          fatal("immediate out of range for %s", mnemonic);
        section->data[loc] |= (imm & 0x1f) << 7;
        section->data[loc + 1] |= ((imm >> 5) & 0x7f);
      } else if (immexpr.kind == EXPR_SYMBOL) {
        add_reloc(section_index, loc, immexpr.sym, immexpr.addend,
                  RELOC_LO12_S);
      } else if (immexpr.kind == EXPR_RELOC_WRP) {
        add_reloc(section_index, loc, immexpr.sym, immexpr.addend,
                  immexpr.reloc);
      }
      return;
    }
  }

  for (size_t i = 0; i < ARRAY_LEN(btype_table); i++) {
    if (strcmp(mnemonic, btype_table[i].name) == 0) {
      expect_operand_count(mnemonic, operand_count, 3);
      int rs1 = parse_int_reg(operands[0]);
      int rs2 = parse_int_reg(operands[1]);
      if (rs1 < 0 || rs2 < 0)
        fatal("invalid registers in %s", mnemonic);

      Symbol *sym;
      char *tok = operands[2];
      if (isdigit((unsigned char)tok[0]) &&
          (tok[1] == 'f' || tok[1] == 'b')) {
        int digit = tok[0] - '0';
        bool forward = (tok[1] == 'f');
        sym = numeric_label_ref(digit, forward);
      } else {
        sym = intern_symbol(str_trim(tok));
      }

      uint32_t word = encode_b_type(0, rs2, rs1, btype_table[i].funct3,
                                    btype_table[i].opcode);
      emit_u32(section, word);
      add_reloc(section_index, loc, sym, 0, RELOC_BRANCH);
      return;
    }
  }

  for (size_t i = 0; i < ARRAY_LEN(utype_table); i++) {
    if (strcmp(mnemonic, utype_table[i].name) == 0) {
      expect_operand_count(mnemonic, operand_count, 2);
      int rd = parse_int_reg(operands[0]);
      if (rd < 0)
        fatal("invalid rd for %s", mnemonic);
      Expr expr = parse_expr(operands[1], false);
      uint32_t word = encode_u_type(0, rd, utype_table[i].opcode);
      emit_u32(section, word);
      if (expr.kind == EXPR_IMM) {
        uint32_t imm = (uint32_t)((expr.imm + 0x800) >> 12);
        section->data[loc + 3] = (imm >> 12) & 0xff;
        section->data[loc + 2] = (imm >> 4) & 0xff;
        section->data[loc + 1] = ((imm & 0xf) << 4) | (section->data[loc + 1] & 0xf);
      } else if (expr.kind == EXPR_SYMBOL) {
        add_reloc(section_index, loc, expr.sym, expr.addend, RELOC_HI20);
      } else if (expr.kind == EXPR_RELOC_WRP) {
        add_reloc(section_index, loc, expr.sym, expr.addend, expr.reloc);
      }
      return;
    }
  }

  for (size_t i = 0; i < ARRAY_LEN(jtype_table); i++) {
    if (strcmp(mnemonic, jtype_table[i].name) == 0) {
      expect_operand_count(mnemonic, operand_count, 2);
      int rd = parse_int_reg(operands[0]);
      if (rd < 0)
        fatal("invalid rd in %s", mnemonic);
      Symbol *sym;
      char *tok = operands[1];
      if (isdigit((unsigned char)tok[0]) &&
          (tok[1] == 'f' || tok[1] == 'b')) {
        sym = numeric_label_ref(tok[0] - '0', tok[1] == 'f');
      } else {
        sym = intern_symbol(str_trim(tok));
      }
      uint32_t word = encode_j_type(0, rd, jtype_table[i].opcode);
      emit_u32(section, word);
      add_reloc(section_index, loc, sym, 0, rd == 1 ? RELOC_CALL : RELOC_JAL);
      return;
    }
  }

  if (starts_with(mnemonic, "lr.")) {
    expect_operand_count(mnemonic, operand_count, 2);
    int rd = parse_int_reg(operands[0]);
    char *op = operands[1];
    char *paren = strchr(op, '(');
    if (!paren)
      fatal("expected (rs1) in %s", mnemonic);
    *paren = '\0';
    char *close = strchr(paren + 1, ')');
    if (!close)
      fatal("missing ')' in %s", mnemonic);
    *close = '\0';
    char *rs1str = str_trim(paren + 1);
    int rs1 = parse_int_reg(rs1str);
    if (rd < 0 || rs1 < 0)
      fatal("invalid registers in %s", mnemonic);
    int aq = strstr(mnemonic, ".aq") != NULL;
    uint32_t word = encode_lr_sc(mnemonic, rd, rs1, 0, aq, 0, 0x2);
    emit_u32(section, word);
    return;
  }

  if (starts_with(mnemonic, "sc.")) {
    expect_operand_count(mnemonic, operand_count, 3);
    int rd = parse_int_reg(operands[0]);
    int rs2 = parse_int_reg(operands[1]);
    char *op = operands[2];
    char *paren = strchr(op, '(');
    if (!paren)
      fatal("expected (rs1) in %s", mnemonic);
    *paren = '\0';
    char *close = strchr(paren + 1, ')');
    if (!close)
      fatal("missing ')' in %s", mnemonic);
    *close = '\0';
    int rs1 = parse_int_reg(str_trim(paren + 1));
    int aq = strstr(mnemonic, ".aq") != NULL;
    uint32_t word = encode_lr_sc(mnemonic, rd, rs1, rs2, aq, 0, 0x2);
    emit_u32(section, word);
    return;
  }

  if (starts_with(mnemonic, "amoswap")) {
    expect_operand_count(mnemonic, operand_count, 3);
    int rd = parse_int_reg(operands[0]);
    int rs2 = parse_int_reg(operands[1]);
    char *op = operands[2];
    char *paren = strchr(op, '(');
    if (!paren)
      fatal("expected (rs1) in %s", mnemonic);
    *paren = '\0';
    char *close = strchr(paren + 1, ')');
    if (!close)
      fatal("missing ')' in %s", mnemonic);
    *close = '\0';
    int rs1 = parse_int_reg(str_trim(paren + 1));
    int aq = strstr(mnemonic, ".aq") != NULL;
    uint32_t word = encode_amo(mnemonic, rd, rs1, rs2, aq, 0, 0x2);
    emit_u32(section, word);
    return;
  }

  fatal("unsupported instruction %s", mnemonic);
}

// ─────────────────────────────────────────────────────────────────────────────
// Directive handling and assembler driver

static void handle_directive(char *line) {
  char *cursor = line;
  while (*cursor && !isspace((unsigned char)*cursor))
    cursor++;
  char saved = *cursor;
  *cursor = '\0';
  const char *dir = line;
  char *args = saved ? cursor + 1 : cursor;
  args = str_trim(args);

  if (strcmp(dir, ".text") == 0) {
    current_section = find_or_create_section(".text");
    return;
  }
  if (strcmp(dir, ".data") == 0) {
    current_section = find_or_create_section(".data");
    return;
  }
  if (strcmp(dir, ".bss") == 0) {
    current_section = find_or_create_section(".bss");
    return;
  }
  if (strcmp(dir, ".rodata") == 0) {
    current_section = find_or_create_section(".rodata");
    return;
  }
  if (strcmp(dir, ".section") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *tok = lr_read_token(&lr);
    if (!tok)
      fatal(".section requires a name");
    char *name = str_trim(tok);
    current_section = find_or_create_section(name);
    free(tok);
    return;
  }

  if (strcmp(dir, ".align") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *tok = lr_read_token(&lr);
    if (!tok)
      fatal(".align requires value");
    int align_pow = (int)parse_int_auto(tok);
    free(tok);
    if (align_pow < 0 || align_pow > 31)
      fatal(".align argument out of range");
    size_t align = (size_t)1 << align_pow;
    align_section(require_current_section(), align);
    return;
  }

  if (strcmp(dir, ".byte") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    Section *section = require_current_section();
    char *tok;
    while ((tok = lr_read_token(&lr)) != NULL) {
      char *trim = str_trim(tok);
      if (*trim == '\0') {
        free(tok);
        continue;
      }
      Expr expr = parse_expr(trim, false);
      if (expr.kind == EXPR_IMM) {
        emit_u8(section, (uint8_t)expr.imm);
      } else if (expr.kind == EXPR_SYMBOL) {
        size_t off = section->size;
        emit_u8(section, 0);
        add_reloc((int)(section - sections.data), off, expr.sym, expr.addend,
                  RELOC_ABS64); // treat as byte within 64 relocation (later fix)
      } else {
        fatal("unsupported expression in .byte");
      }
      free(tok);
    }
    return;
  }

  if (strcmp(dir, ".zero") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *tok = lr_read_token(&lr);
    if (!tok)
      fatal(".zero requires count");
    size_t count = (size_t)parse_uint_auto(tok);
    free(tok);
    Section *section = require_current_section();
    for (size_t i = 0; i < count; i++)
      emit_u8(section, 0);
    return;
  }

  if (strcmp(dir, ".quad") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *tok;
    Section *section = require_current_section();
    while ((tok = lr_read_token(&lr)) != NULL) {
      char *trim = str_trim(tok);
      if (*trim == '\0') {
        free(tok);
        continue;
      }
      Expr expr = parse_expr(trim, false);
      size_t off = section->size;
      emit_u64(section, 0);
      if (expr.kind == EXPR_IMM) {
        uint64_t v = (uint64_t)expr.imm;
        for (int i = 0; i < 8; i++)
          section->data[off + i] = (uint8_t)(v >> (i * 8));
      } else if (expr.kind == EXPR_SYMBOL) {
        add_reloc((int)(section - sections.data), off, expr.sym, expr.addend,
                  RELOC_ABS64);
      } else if (expr.kind == EXPR_RELOC_WRP) {
        add_reloc((int)(section - sections.data), off, expr.sym, expr.addend,
                  expr.reloc);
      }
      free(tok);
    }
    return;
  }

  if (strcmp(dir, ".globl") == 0 || strcmp(dir, ".global") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *tok = lr_read_token(&lr);
    if (!tok)
      fatal(".globl requires symbol name");
    char *name = str_trim(tok);
    Symbol *sym = intern_symbol(name);
    sym->vis = SYM_GLOBAL;
    free(tok);
    return;
  }

  if (strcmp(dir, ".local") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *tok = lr_read_token(&lr);
    if (!tok)
      fatal(".local requires symbol name");
    Symbol *sym = intern_symbol(str_trim(tok));
    sym->vis = SYM_LOCAL;
    free(tok);
    return;
  }

  if (strcmp(dir, ".type") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *a = lr_read_token(&lr);
    char *b = lr_read_token(&lr);
    if (!a || !b)
      fatal(".type requires two arguments");
    Symbol *sym = intern_symbol(str_trim(a));
    char *val = str_trim(b);
    if (strcmp(val, "@function") == 0)
      sym->type = SYM_TYPE_FUNC;
    else if (strcmp(val, "@object") == 0)
      sym->type = SYM_TYPE_OBJECT;
    free(a);
    free(b);
    return;
  }

  if (strcmp(dir, ".size") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *a = lr_read_token(&lr);
    char *b = lr_read_token(&lr);
    if (!a || !b)
      fatal(".size requires two arguments");
    Symbol *sym = intern_symbol(str_trim(a));
    sym->size = parse_uint_auto(b);
    free(a);
    free(b);
    return;
  }

  if (strcmp(dir, ".comm") == 0) {
    LineReader lr;
    lr_init(&lr, args);
    char *name_tok = lr_read_token(&lr);
    char *size_tok = lr_read_token(&lr);
    char *align_tok = lr_read_token(&lr);
    if (!name_tok || !size_tok)
      fatal(".comm requires name and size");
    Symbol *sym = intern_symbol(str_trim(name_tok));
    sym->section = SYM_COMMON;
    sym->size = parse_uint_auto(size_tok);
    sym->align = align_tok ? (uint32_t)parse_uint_auto(align_tok) : 0;
    free(name_tok);
    free(size_tok);
    if (align_tok)
      free(align_tok);
    return;
  }

  if (strcmp(dir, ".file") == 0 || strcmp(dir, ".loc") == 0) {
    // debug directives ignored
    return;
  }

  fatal("unsupported directive %s", dir);
}

static void parse_line(char *line) {
  char *hash = strchr(line, '#');
  if (hash)
    *hash = '\0';
  char *semi = strchr(line, ';');
  if (semi)
    *semi = '\0';
  char *trim = str_trim(line);
  if (*trim == '\0')
    return;

  size_t len = strlen(trim);
  if (trim[len - 1] == ':') {
    trim[len - 1] = '\0';
    if (isdigit((unsigned char)trim[0]) && trim[1] == '\0') {
      numeric_label_define(trim[0] - '0', require_current_section());
    } else {
      Symbol *sym = intern_symbol(trim);
      Section *sec = require_current_section();
      sym->section = (int)(sec - sections.data);
      sym->value = sec->size;
    }
    return;
  }

  if (*trim == '.') {
    handle_directive(trim);
    return;
  }

  // instruction
  char *space = trim;
  while (*space && !isspace((unsigned char)*space))
    space++;
  char saved = *space;
  *space = '\0';
  const char *mnemonic = trim;
  char *operand_str = saved ? space + 1 : space;
  operand_str = str_trim(operand_str);

  char *operands[16];
  int operand_count = 0;
  if (*operand_str) {
    LineReader lr;
    lr_init(&lr, operand_str);
    char *tok;
    while ((tok = lr_read_token(&lr)) != NULL) {
      char *t = str_trim(tok);
      if (*t)
        operands[operand_count++] = strdup(t);
      free(tok);
    }
  }

  assemble_instruction(mnemonic, operands, operand_count,
                       require_current_section());
  for (int i = 0; i < operand_count; i++)
    free(operands[i]);
}

// ─────────────────────────────────────────────────────────────────────────────
// Object file writer (custom format)

typedef struct {
  uint32_t magic;      // 'MOBJ'
  uint16_t version;    // currently 1
  uint16_t section_cnt;
  uint32_t symbol_cnt;
  uint32_t reloc_cnt;
  uint32_t reserved;
} __attribute__((packed)) ObjHeader;

typedef struct {
  char name[32];
  uint64_t size;
  uint64_t align;
  uint8_t flags; // bit0=alloc, bit1=exec, bit2=write
  uint8_t kind;  // SectionKind enum (truncated to byte)
  uint16_t reserved;
  uint64_t offset; // file offset for data payload
} __attribute__((packed)) ObjSection;

typedef struct {
  char name[32];
  int32_t section; // -1 undef, -2 abs, -3 common, >=0 section index
  uint32_t reserved;
  uint64_t value;
  uint64_t size;
  uint32_t align;
  uint8_t visibility; // SymbolVisibility
  uint8_t type;       // SymbolType
  uint16_t pad;
} __attribute__((packed)) ObjSymbol;

typedef struct {
  int32_t section;
  int32_t symbol;
  uint64_t offset;
  int64_t addend;
  uint32_t type;
  uint32_t reserved;
} __attribute__((packed)) ObjReloc;

static void write_object(const char *path) {
  FILE *fp = fopen(path, "wb");
  if (!fp)
    fatal("failed to open %s for writing", path);

  ObjHeader hdr = {
      .magic = 0x4d4f424a, // 'MOBJ'
      .version = 1,
      .section_cnt = (uint16_t)sections.len,
      .symbol_cnt = (uint32_t)symbols.len,
      .reloc_cnt = (uint32_t)relocs.len,
      .reserved = 0,
  };
  fwrite(&hdr, sizeof(hdr), 1, fp);

  size_t header_offset = sizeof(hdr);
  size_t sections_offset = header_offset + sections.len * sizeof(ObjSection);
  size_t symbols_offset = sections_offset + symbols.len * sizeof(ObjSymbol);
  size_t relocs_offset = symbols_offset + relocs.len * sizeof(ObjReloc);

  // We'll collect section data offsets as we go
  size_t data_cursor = relocs_offset;
  ObjSection *sec_tbl = calloc(sections.len, sizeof(ObjSection));
  for (size_t i = 0; i < sections.len; i++) {
    Section *sec = &sections.data[i];
    ObjSection *os = &sec_tbl[i];
    snprintf(os->name, sizeof(os->name), "%s", sec->name);
    os->size = sec->size;
    os->align = sec->align ? sec->align : 1;
    os->flags = (sec->alloc ? 1 : 0) | (sec->exec ? 2 : 0) |
                (sec->write ? 4 : 0);
    os->kind = (uint8_t)sec->kind;
    os->offset = data_cursor;
    data_cursor += sec->size;
  }

  fwrite(sec_tbl, sizeof(ObjSection), sections.len, fp);
  free(sec_tbl);

  ObjSymbol *sym_tbl = calloc(symbols.len, sizeof(ObjSymbol));
  for (size_t i = 0; i < symbols.len; i++) {
    Symbol *sym = &symbols.data[i];
    ObjSymbol *os = &sym_tbl[i];
    snprintf(os->name, sizeof(os->name), "%s", sym->name);
    os->section = sym->section;
    os->value = sym->value;
    os->size = sym->size;
    os->align = sym->align;
    os->visibility = sym->vis;
    os->type = sym->type;
  }
  fwrite(sym_tbl, sizeof(ObjSymbol), symbols.len, fp);
  free(sym_tbl);

  ObjReloc *rel_tbl = calloc(relocs.len, sizeof(ObjReloc));
  for (size_t i = 0; i < relocs.len; i++) {
    Reloc *rel = &relocs.data[i];
    ObjReloc *or = &rel_tbl[i];
    or->section = rel->section;
    or->symbol = rel->symbol;
    or->offset = rel->offset;
    or->addend = rel->addend;
    or->type = rel->type;
  }
  fwrite(rel_tbl, sizeof(ObjReloc), relocs.len, fp);
  free(rel_tbl);

  // finally section data
  for (size_t i = 0; i < sections.len; i++) {
    Section *sec = &sections.data[i];
    if (sec->size && sec->data)
      fwrite(sec->data, 1, sec->size, fp);
  }

  fclose(fp);
}

// ─────────────────────────────────────────────────────────────────────────────
// Main entry

static void usage(void) {
  fprintf(stderr, "usage: as [-o output] file.s\n");
  exit(1);
}

int main(int argc, char **argv) {
  const char *output_path = "a.o";
  const char *input_path = NULL;

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-o") == 0) {
      if (++i >= argc)
        usage();
      output_path = argv[i];
    } else if (argv[i][0] == '-') {
      usage();
    } else {
      input_path = argv[i];
    }
  }

  if (!input_path)
    usage();

  FILE *fp = fopen(input_path, "r");
  if (!fp)
    fatal("failed to open %s", input_path);

  // ensure default sections exist
  current_section = find_or_create_section(".text");

  char linebuf[512];
  while (read_line(fp, linebuf, sizeof(linebuf))) {
    parse_line(linebuf);
  }
  fclose(fp);

  write_object(output_path);
  return 0;
}
