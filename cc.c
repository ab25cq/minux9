#include "cc.h"

static FILE *output_file;
static int depth;
#define MAX_ARGREG 8
static char *argreg[] = {"a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7"};
static char *argfreg[] = {"fa0", "fa1", "fa2", "fa3",
                          "fa4", "fa5", "fa6", "fa7"};
static Obj *cur_fn;
typedef struct ConstVal ConstVal;
struct ConstVal {
  int idx;
  double fval;
  TypeKind kind;
  ConstVal *next;
};
static ConstVal *cur_const_val;
static void gen_expr(Node *node);
static void gen_stmt(Node *node);
static void gen_addr(Node *node);

static void println(char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  vfprintf(output_file, fmt, ap);
  va_end(ap);
  fprintf(output_file, "\n");
}

enum { I8, I16, I32, I64, U8, U16, U32, U64, F32, F64 };

static int getTypeId(TypeKind ty, bool is_unsigned) {
  switch (ty) {
  case TY_CHAR:
    return is_unsigned ? U8 : I8;
  case TY_SHORT:
    return is_unsigned ? U16 : I16;
  case TY_INT:
    return is_unsigned ? U32 : I32;
  case TY_LONG:
    return is_unsigned ? U64 : I64;
  case TY_FLOAT:
    return F32;
  case TY_DOUBLE:
    return F64;
  }
  return U64;
}

static void cmp_zero(TypeKind kind) {
  if (kind == TY_FLOAT) {
    println("\t\tfmv.w.x ft1, zero");
    println("\t\tfeq.s s1, fs1,ft1");
    println("\t\tseqz s1, s1");
  } else if (kind == TY_DOUBLE) {
    println("\t\tfmv.d.x ft1, zero");
    println("\t\tfeq.d s1, fs1,ft1");
    println("\t\tseqz s1, s1");
  } else {
    println("\t\tsnez s1, s1");
  }
}

static char i32i8[] = "\t\tlb s1, 0(sp)";
static char i32i16[] = "\t\tlh s1, 0(sp)";
static char i32u16[] = "\t\tlhu s1, 0(sp)";
static char i32i64[] = "\t\tld s1, 0(sp)";
static char i32u8[] = "\t\tlbu s1, 0(sp)";
static char i32i32[] = "\t\tlw s1, 0(sp)";
static char i32u32[] = "\t\tlwu s1, 0(sp)";
static char i32u64[] = "\t\tld s1, 0(sp)";

static char i32f32[] =
    "\t\tlw s1, 0(sp)\n\t\tfcvt.s.w fs1, s1\n\t\tfsw fs1, 0(sp)";
static char i32f64[] =
    "\t\tlw s1, 0(sp)\n\t\tfcvt.d.w fs1, s1\n\t\tfsd fs1, 0(sp)";
static char u32f32[] =
    "\t\tlw s1, 0(sp)\n\t\tfcvt.s.wu fs1, s1\n\t\tfsw fs1, 0(sp)";
static char u32f64[] =
    "\t\tlw s1, 0(sp)\n\t\tfcvt.d.wu fs1, s1\n\t\tfsd fs1, 0(sp)";

static char i64f32[] = "\t\tfcvt.s.l fs1, s1\n\t\tfsw fs1, 0(sp)";
static char i64f64[] = "\t\tfcvt.d.l fs1, s1\n\t\tfsd fs1, 0(sp)";
static char u64f32[] = "\t\tfcvt.s.lu fs1, s1\n\t\tfsw fs1, 0(sp)";
static char u64f64[] = "\t\tfcvt.d.lu fs1, s1\n\t\tfsd fs1, 0(sp)";

static char f32i8[] = "\t\tflw fs1, 0(sp)\n\t\tfcvt.w.s s1,fs1, rtz\n\t\tsb "
                      "s1, 0(sp)\n\t\tlb s1, 0(sp)";
static char f32u8[] = "\t\tflw fs1, 0(sp)\n\t\tfcvt.wu.s s1,fs1, rtz\n\t\tsb "
                      "s1, 0(sp)\n\t\tlbu s1, 0(sp)";
static char f32i16[] = "\t\tflw fs1, 0(sp)\n\t\tfcvt.w.s s1,fs1, rtz\n\t\tsh "
                       "s1, 0(sp)\n\t\tlh s1, 0(sp)";
static char f32u16[] = "\t\tflw fs1, 0(sp)\n\t\tfcvt.wu.s s1,fs1, rtz\n\t\tsh "
                       "s1, 0(sp)\n\t\tlhu s1, 0(sp)";
static char f32i32[] =
    "\t\tflw fs1, 0(sp)\n\t\tfcvt.w.s s1, fs1, rtz\n\t\tsw s1, 0(sp)";
static char f32u32[] =
    "\t\tflw fs1, 0(sp)\n\t\tfcvt.wu.s s1, fs1, rtz\n\t\tsw s1, 0(sp)";
static char f32i64[] =
    "\t\tflw fs1, 0(sp)\n\t\tfcvt.l.s s1, fs1, rtz\n\t\tsd s1, 0(sp)";
static char f32u64[] =
    "\t\tflw fs1, 0(sp)\n\t\tfcvt.lu.s s1, fs1, rtz\n\t\tsd s1, 0(sp)";

static char f64i8[] = "\t\tfld fs1, 0(sp)\n\t\tfcvt.w.d s1,fs1, rtz\n\t\tsb "
                      "s1, 0(sp)\n\t\tlb s1, 0(sp)";
static char f64u8[] = "\t\tfld fs1, 0(sp)\n\t\tfcvt.wu.d s1,fs1, rtz\n\t\tsb "
                      "s1, 0(sp)\n\t\tlbu s1, 0(sp)";
static char f64i16[] = "\t\tfld fs1, 0(sp)\n\t\tfcvt.w.d s1,fs1, rtz\n\t\tsh "
                       "s1, 0(sp)\n\t\tlh s1, 0(sp)";
static char f64u16[] = "\t\tfld fs1, 0(sp)\n\t\tfcvt.wu.d s1,fs1, rtz\n\t\tsh "
                       "s1, 0(sp)\n\t\tlhu s1, 0(sp)";
static char f64i32[] =
    "\t\tfld fs1, 0(sp)\n\t\tfcvt.w.d s1, fs1, rtz\n\t\tsw s1, 0(sp)";
static char f64u32[] =
    "\t\tfld fs1, 0(sp)\n\t\tfcvt.wu.d s1, fs1, rtz\n\t\tsw s1, 0(sp)";
static char f64i64[] =
    "\t\tfld fs1, 0(sp)\n\t\tfcvt.l.d s1, fs1, rtz\n\t\tsd s1, 0(sp)";
static char f64u64[] =
    "\t\tfld fs1, 0(sp)\n\t\tfcvt.lu.d s1, fs1, rtz\n\t\tsd s1, 0(sp)";

static char f32f64[] = "\t\tfcvt.d.s fs1, fs1";
static char f64f32[] = "\t\tfcvt.s.d fs1, fs1";

static char *cast_table[][10] = {
    // i8   i16     i32     i64     u8     u16     u32     u64     f32     f64
    {NULL, i32i16, i32i32, i32i64, i32u8, i32u16, i32u32, i32u64, i32f32,
     i32f64}, // i8
    {i32i8, NULL, i32i32, i32i64, i32u8, i32u16, i32u32, i32u64, i32f32,
     i32f64}, // i16
    {i32i8, i32i16, NULL, i32i64, i32u8, i32u16, i32u32, i32u64, i32f32,
     i32f64}, // i32
    {i32i8, i32i16, i32i32, NULL, i32u8, i32u16, i32u32, NULL, i64f32,
     i64f64}, // i64

    {i32i8, i32i16, i32i32, i32i64, NULL, i32u16, i32u32, i32u64, i32f32,
     i32f64}, // u8
    {i32i8, i32i16, i32i32, i32i64, i32u8, NULL, i32u32, i32u64, i32f32,
     i32f64}, // u16
    {i32i8, i32i16, i32i32, i32i64, i32u8, i32u16, NULL, i32u64, u32f32,
     u32f64}, // u32
    {i32i8, i32i16, i32i32, NULL, i32u8, i32u16, i32u32, NULL, u64f32,
     u64f64}, // u64

    {f32i8, f32i16, f32i32, f32i64, f32u8, f32u16, f32u32, f32u64, NULL,
     f32f64}, // f32
    {f64i8, f64i16, f64i32, f64i64, f64u8, f64u16, f64u32, f64u64, f64f32,
     NULL}, // f64
};
static void cast_type(Type *from, Type *to) {
  if (to->kind == TY_VOID) {
    return;
  }
  if (to->kind == TY_BOOL) {

    cmp_zero(from->kind);
    return;
  }
  int t1 = getTypeId(from->kind, from->is_unsigned);
  int t2 = getTypeId(to->kind, to->is_unsigned);
  if (cast_table[t1][t2]) {
    println(cast_table[t1][t2]);
  }
}

static int count(void) {
  static int i = 1;
  return i++;
}

static void push(void) {
  println("\t\taddi sp,sp,-8");
  println("\t\tsd s1, 0(sp)");
  depth++;
}

static void pop(char *arg) {
  println("\t\tld %s, 0(sp)", arg);
  println("\t\taddi sp,sp,8");
  depth--;
}

static void pushf(void) {
  println("\t\taddi sp,sp,-8");
  println("\t\tfsd fs1, 0(sp)");
  depth++;
}

static void popf(char *arg) {
  println("\t\tfld %s, 0(sp)", arg);
  println("\t\taddi sp,sp,8");
  depth--;
}

static void load(Node *node) {
  Type *ty = node->ty;
  if (ty->kind == TY_ARRAY || ty->kind == TY_STRUCT || ty->kind == TY_UNION ||
      ty->kind == TY_FUNC) {
    return;
  }
  if (!node->var) {
    if (ty->size == 1) {
      if (ty->is_unsigned) {
        println("\t\tlbu s1, 0(s1)");
      } else {
        println("\t\tlb s1, 0(s1)");
      }
      return;
    } else if (ty->size == 2) {
      if (ty->is_unsigned) {
        println("\t\tlhu s1, 0(s1)");
      } else {
        println("\t\tlh s1, 0(s1)");
      }
      return;
    } else if (ty->size == 4) {
      if (ty->kind == TY_FLOAT) {
        println("\t\tflw fs1, 0(s1)");
        return;
      }
      println("\t\tlw s1, 0(s1)");
      return;
    }
    if (ty->kind == TY_DOUBLE) {
      println("\t\tfld fs1, 0(s1)");
      return;
    }
    println("\t\tld s1, 0(s1)");
    return;
  }
  if (node->var->is_local) {
    if (ty->size == 1) {
      if (ty->is_unsigned) {
        println("\t\tlbu s1, 0(s1)");
      } else {
        println("\t\tlb s1, 0(s1)");
      }
      return;
    } else if (ty->size == 2) {
      if (ty->is_unsigned) {
        println("\t\tlhu s1, 0(s1)");
      } else {
        println("\t\tlh s1, 0(s1)");
      }
      return;
    } else if (ty->size == 4) {
      if (ty->kind == TY_FLOAT) {
        println("\t\tflw fs1, 0(s1)");
        return;
      }
      println("\t\tlw s1, 0(s1)");
      return;
    }
    if (ty->kind == TY_DOUBLE) {
      println("\t\tfld fs1, 0(s1)");
    } else {
      println("\t\tld s1, 0(s1)");
    }
  } else {
    println("\t\tlui s1, %%hi(%s)", node->var->name);
    if (ty->size == 1) {
      if (ty->is_unsigned) {
        println("\t\tlbu s1, %%lo(%s)(s1)", node->var->name);
      } else {
        println("\t\tlb s1, %%lo(%s)(s1)", node->var->name);
      }
      return;
    } else if (ty->size == 2) {
      if (ty->is_unsigned) {
        println("\t\tlhu s1, %%lo(%s)(s1)", node->var->name);
      } else {
        println("\t\tlh s1, %%lo(%s)(s1)", node->var->name);
      }
      return;
    } else if (ty->size == 4) {
      if (ty->kind == TY_FLOAT) {
        println("\t\tflw fs1, %%lo(%s)(s1)", node->var->name);
      }
      println("\t\tlw s1, %%lo(%s)(s1)", node->var->name);
      return;
    }
    if (ty->kind == TY_DOUBLE) {
      println("\t\tfld fs1, %%lo(%s)(s1)", node->var->name);
    } else {
      println("\t\tld s1, %%lo(%s)(s1)", node->var->name);
    }
  }
}

static void store_struct(Type *ty, char *rg_val, char *rg_addr) {
  println("\t\tadd a7, zero, %s", rg_val);
  for (Member *member = ty->members; member; member = member->next) {
    println("\t\tli t2, %d", member->offset);
    println("\t\tadd t2, %s, t2", rg_addr);
    if (member->ty->size == 1) {
      if (member->ty->is_unsigned) {
        println("\t\tlbu s1, %d(a7)", member->offset);
      } else {
        println("\t\tlb s1, %d(a7)", member->offset);
      }
      println("\t\tsb s1, 0(t2)");
    } else if (member->ty->size == 2) {

      if (member->ty->is_unsigned) {
        println("\t\tlhu s1, %d(a7)", member->offset);
      } else {
        println("\t\tlh s1, %d(a7)", member->offset);
      }

      println("\t\tsh s1, 0(t2)");
    } else if (member->ty->size == 4) {
      if (member->ty->kind == TY_FLOAT) {
        println("\t\tflw fs1, %d(a7)", member->offset);
        println("\t\tfsw fs1, 0(t2)");
      } else {
        println("\t\tlw s1, %d(a7)", member->offset);
        println("\t\tsw s1, 0(t2)");
      }

    } else {
      if (member->ty->kind == TY_DOUBLE) {
        println("\t\tfld fs1, %d(a7)", member->offset);
        println("\t\tfsd fs1, 0(t2)");
      } else {
        println("\t\tld s1, %d(a7)", member->offset);
        println("\t\tsd s1, 0(t2)");
      }
    }
  }
  println("\t\tadd %s, zero, a7", rg_val);
  return;
}

static void store(Node *lhs, Node *rhs) {
  Type *ty = lhs->ty;
  pop("t0");

  if (ty->kind == TY_STRUCT || ty->kind == TY_UNION) {
    store_struct(ty, "s1", "t0");
    return;
  }

  if (!lhs->var) {
    if (ty->size == 1) {
      println("\t\tsb s1, 0(t0)");
      return;
    } else if (ty->size == 2) {
      println("\t\tsh s1, 0(t0)");
      return;
    } else if (ty->size == 4) {
      if (ty->kind == TY_FLOAT) {
        println("\t\tfsw fs1, 0(t0)");
        return;
      }
      println("\t\tsw s1, 0(t0)");
      return;
    }
    if (ty->kind == TY_DOUBLE) {
      println("\t\tfsd fs1, 0(t0)");
      return;
    }
    println("\t\tsd s1, 0(t0)");
    return;
  }
  if (lhs->var->is_local) {
    if (ty->size == 1) {
      println("\t\tsb s1, 0(t0)");
      return;
    } else if (ty->size == 2) {
      println("\t\tsh s1, 0(t0)");
      return;
    } else if (ty->size == 4) {
      if (ty->kind == TY_FLOAT) {
        println("\t\tfsw fs1, 0(t0)");
        return;
      }
      println("\t\tsw s1, 0(t0)");
      return;
    }
    if (ty->kind == TY_DOUBLE) {
      println("\t\tfsd fs1, 0(t0)");
    } else {
      println("\t\tsd s1, 0(t0)");
    }

  } else {
    println("\t\tlui t0, %%hi(%s)", lhs->var->name);
    if (ty->size == 1) {
      println("\t\tsb s1, %%lo(%s)(t0)", lhs->var->name);
      return;
    } else if (ty->size == 2) {
      println("\t\tsh s1, %%lo(%s)(t0)", lhs->var->name);
      return;
    } else if (ty->size == 4) {
      if (ty->kind == TY_FLOAT) {
        println("\t\tfsw fs1, %%lo(%s)(t0)", lhs->var->name);
        return;
      }
      println("\t\tsw s1, %%lo(%s)(t0)", lhs->var->name);
      return;
    }
    if (ty->kind == TY_DOUBLE) {
      println("\t\tfsd fs1, %%lo(%s)(t0)", lhs->var->name);
    } else {
      println("\t\tsd s1, %%lo(%s)(t0)", lhs->var->name);
    }
  }
}

int align_to(int n, int align) { return (n + align - 1) / align * align; }

static void gen_addr(Node *node) {
  switch (node->kind) {
  case ND_VAR:
    if (node->var->is_local) {
      println("\t\tli s1, %d", node->var->offset);
      println("\t\tadd s1, fp, s1");
      return;
    } else {
      println("\t\tlui s1, %%hi(%s)", node->var->name);
      println("\t\taddi s1, s1, %%lo(%s)", node->var->name);
      return;
    }
  case ND_MEMBER:
    gen_addr(node->rhs);
    println("\t\tli t2, %d", node->member->offset);
    println("\t\tadd s1, s1, t2");
    return;
  case ND_COMMA:
    gen_expr(node->lhs);
    gen_addr(node->rhs);
    return;
  case ND_DEREF:
    gen_expr(node->rhs);
    return;
  case ND_FUNCCAL:
    if (node->ret_buffer) {
      gen_expr(node);
      return;
    }
  }

  error_tok(node->tok, "not an lvalue");
}

static ConstVal *create_constval(double fval, TypeKind kind) {
  ConstVal *cval = calloc(1, sizeof(ConstVal));
  cval->idx = count();
  cval->fval = fval;
  cval->kind = kind;
  cval->next = NULL;
  cur_const_val = cur_const_val->next = cval;
  return cur_const_val;
}

static void push_struct(Node *arg) {
  int sz = align_to(arg->ty->size, 8);
  println("\t\taddi sp, sp, -%d", sz);
  for (int i = 0; i < sz / 8; i++) {
    println("\t\tld t2, %d(s1)", i * 8);
    println("\t\tsd t2, %d(sp)", i * 8);
  }
  depth += sz / 8;
}

static void push_args2(Node *args, bool first_pass, int *cnt_depth) {
  if (!args)
    return;
  push_args2(args->next, first_pass, cnt_depth);

  if ((first_pass && !args->pass_by_stack) ||
      (!first_pass && args->pass_by_stack)) {
    if (((args->ty->kind == TY_STRUCT || args->ty->kind == TY_UNION))) {
      if (args->ty->size <= 16) {
        return;
      }
    } else {
      return;
    }
  }

  switch (args->ty->kind) {
  case TY_STRUCT:
  case TY_UNION:
    if (args->ty->size > 16) {
      if (first_pass) {
        gen_expr(args);
        push_struct(args);
        *cnt_depth += align_to(args->ty->size, 8);
        args->param_stack_offset = *cnt_depth;
      } else {
        println("\t\tli t0, -%d", args->param_stack_offset);
        println("\t\tadd s1, s2, t0");
        push();
      }

    } else if (args->ty->size <= 16) {
      gen_expr(args);
      int nm = 0;

      for (Member *member = args->ty->members; member; member = member->next) {
        nm++;
      }
      if (nm == 2) {
        println("\t\taddi sp,sp,-16");
        depth += 2;
        int i = 0;
        for (Member *member = args->ty->members; member;
             member = member->next) {

          if (member->ty->kind == TY_FLOAT) {
            println("\t\tflw ft0, %d(s1)", member->offset);
            println("\t\tfsd ft0, %d(sp)", i * 8);
          } else if (member->ty->kind == TY_DOUBLE) {
            println("\t\tfld ft0, %d(s1)", member->offset);
            println("\t\tfsd ft0,  %d(sp)", i * 8);
          } else {
            println("\t\tld t0, %d(s1)", member->offset);
            println("\t\tsd t0,  %d(sp)", i * 8);
          }
          i++;
        }
      } else {
        push_struct(args);
      }
      if (first_pass && args->pass_by_stack) {
        *cnt_depth += align_to(args->ty->size, 8);
      }
    }
    break;
  case TY_FLOAT:
  case TY_DOUBLE:
    gen_expr(args);
    pushf();
    if (first_pass && args->pass_by_stack) {
      *cnt_depth += 8;
    }
    break;
  default:
    gen_expr(args);
    push();
    if (first_pass && args->pass_by_stack) {
      *cnt_depth += 8;
    }
  }
}
static int count_args_depth(Node *args) {
  int cnt;
  for (Node *arg = args; arg; arg = arg->next) {
    switch (arg->ty->kind) {
    case TY_STRUCT:
    case TY_UNION:
      if (args->ty->size <= 16) {
        cnt += align_to(arg->ty->size, 8);
      } else {
        cnt += 8;
      }
      break;
    default:
      cnt += 8;
    }
  }
  return cnt;
}

static int push_args(Node *node, int np, bool is_va_area) {

  int stack = 0, gp = 0, fp = 0, allp = 0, param_stack_offset = 0;

  if (node->ret_buffer && node->ty->size > 16) {
    gp++;
  }

  for (Node *arg = node->args; arg; arg = arg->next) {
    if (is_va_area && is_flonum(arg->ty)) {
      if (allp >= np && gp++ >= MAX_ARGREG) {
        arg->pass_by_stack = true;
        stack++;
      }

    } else {

      Type *ty = arg->ty;

      switch (ty->kind) {
      case TY_STRUCT:
      case TY_UNION: {
        if (ty->size > 16) {
          arg->pass_by_stack = true;
          stack += align_to(ty->size, 8) / 8;
          if (gp++ >= MAX_ARGREG) {
            stack++;
          }

        } else {

          int nm = 0;
          int cf = 0;
          for (Member *member = ty->members; member; member = member->next) {
            nm++;
            if (member->ty->kind == TY_FLOAT || member->ty->kind == TY_DOUBLE) {
              cf++;
            }
          }

          if (nm == 1) {
            Member *mem = ty->members;
            switch (mem->ty->kind) {
            case TY_STRUCT:
            case TY_UNION:
              error_tok(mem->name, "parameter not support struct's struct");
              break;
            case TY_FLOAT:
            case TY_DOUBLE:
              if (fp++ >= MAX_ARGREG && gp++ >= MAX_ARGREG) {
                mem->pass_by_stack = true;
                stack++;
              }
              break;
            default:
              if (gp++ >= MAX_ARGREG) {
                mem->pass_by_stack = true;
                stack++;
              }
            }
          } else {
            // if no floating, all use ax
            if (cf == 0) {
              if (ty->size <= 8) {
                if (gp++ >= MAX_ARGREG) {
                  arg->pass_by_stack = true;
                  stack++;
                }
              } else {
                if (gp + 2 >= MAX_ARGREG) {
                  arg->pass_by_stack = true;
                  stack += 2;
                  gp += 2;
                }
              }
            } else if (nm == 2) {
              if (cf == 2) { // tow floating
                if (fp++ >= MAX_ARGREG && gp++ >= MAX_ARGREG) {
                  arg->ty->members->pass_by_stack = true;
                  stack++;
                }
                if (fp++ >= MAX_ARGREG && gp++ >= MAX_ARGREG) {
                  arg->ty->members->next->pass_by_stack = true;
                  stack++;
                }
              } else {
                if (fp++ >= MAX_ARGREG && gp++ >= MAX_ARGREG) {
                  arg->ty->members->pass_by_stack = true;
                  stack++;
                }
                if (gp++ >= MAX_ARGREG) {
                  arg->pass_by_stack = true;
                  stack++;
                }
              }
            } else { // nm > 2
            }
          }
        }
        break;
      }

      case TY_FLOAT:
      case TY_DOUBLE:
        if (fp++ >= MAX_ARGREG && gp++ >= MAX_ARGREG) {
          arg->pass_by_stack = true;
          stack++;
        }
        break;
      default:
        if (gp++ >= MAX_ARGREG) {
          arg->pass_by_stack = true;
          stack++;
        }
      }

      allp++;
    }
  }
  if ((depth + stack) % 2 == 1) {
    println("\t\taddi sp,sp,-8");
    depth++;
    stack++;
  }
  int cnt_depth = 0;
  println("\t\tmv s2, sp");
  push_args2(node->args, true, &cnt_depth);
  push_args2(node->args, false, &cnt_depth);

  if (node->ret_buffer && node->ty->size > 16) {
    println("\t\tli t1, %d", node->ret_buffer->offset);
    println("\t\tadd s1, t1, fp");
    push();
  }

  return stack;
}

static void copy_ret_buffer(Obj *var) { Type *ty = var->ty; }

static void gen_expr(Node *node) {
  println("  .loc %d %d", node->tok->file->file_no, node->tok->line_no);

  switch (node->kind) {
  case ND_NULL_EXPR:
    return;
  case ND_NEG:
    gen_expr(node->rhs);
    if (node->ty->kind == TY_DOUBLE) {
      println("\t\tfneg.d fs1, fs1");
    } else if (node->ty->kind == TY_FLOAT) {
      println("\t\tfneg.s fs1, fs1");
    } else if (node->ty->kind == TY_LONG) {
      println("\t\tneg s1, s1");
    } else {
      println("\t\tnegw s1, s1");
    }

    return;
  case ND_NUM: {

    switch (node->ty->kind) {
    case TY_FLOAT: {
      ConstVal *cval = create_constval(node->fval, TY_FLOAT);
      println("\t\tlui t1, %%hi(.LC%d)", cval->idx);
      println("\t\tflw fs1, %%lo(.LC%d)(t1)", cval->idx);
      return;
    }
    case TY_DOUBLE: {
      ConstVal *cval = create_constval(node->fval, TY_DOUBLE);
      println("\t\tlui t1, %%hi(.LC%d)", cval->idx);
      println("\t\tfld fs1, %%lo(.LC%d)(t1)", cval->idx);
      return;
    }
    }

    println("\t\tli s1, %ld", node->val);
    return;
  }

  case ND_COMMA:
    gen_expr(node->lhs);
    gen_expr(node->rhs);
    return;

  case ND_MEMZERO: {
    int cnt_of_int64 = node->var->ty->size / 8;
    int rem64 = node->var->ty->size % 8;

    println("\t\tli t1, %d", node->var->offset);
    println("\t\tadd t1, t1, fp");
    for (int i = 0; i < cnt_of_int64; i++) {
      println("\t\tsd zero, %d(t1)", i * 8);
    }
    if (rem64 >= 4) {
      println("\t\tsw zero, %d(t1)", cnt_of_int64 * 8);
      int rem32 = (rem64 - 4) % 4;
      if (rem32 >= 2) {
        println("\t\tsh zero, %d(t1)", cnt_of_int64 * 8 + 4);
        if (rem32 == 3) {
          println("\t\tsb zero, %d(t1)", cnt_of_int64 * 8 + 6);
        }
      } else if (rem32 == 1) {
        println("\t\tsb zero, %d(t1)", cnt_of_int64 * 8 + 4);
      }
    } else {
      if (rem64 >= 2) {
        println("\t\tsh zero, %d(t1)", cnt_of_int64 * 8);
      }
      int rem16 = (rem64 - 2) % 2;
      for (int i = 0; i < rem16; i++) {
        println("\t\tsb zero, %d(t1)", cnt_of_int64 * 8 + 2 + i);
      }
    }
  }
    return;
  case ND_CAST: {
    gen_expr(node->rhs);
    println("\t\taddi sp,sp,-8");
    if (node->rhs->ty->kind == TY_FLOAT) {
      println("\t\tfsw fs1, 0(sp)");
    } else if (node->rhs->ty->kind == TY_DOUBLE) {
      println("\t\tfsd fs1, 0(sp)");
    } else {
      println("\t\tsd s1, 0(sp)");
    }

    cast_type(node->rhs->ty, node->ty);
    println("\t\taddi sp,sp,8");
  }
    return;

  case ND_LOGAND: {
    int c = count();
    gen_expr(node->lhs);
    if (node->lhs->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbnez s1, .L.false.%d", c);
    } else if (node->lhs->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbnez s1, .L.false.%d", c);
    } else {
      println("\t\tbeqz s1, .L.false.%d", c);
    }
    //
    gen_expr(node->rhs);

    if (node->rhs->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbnez s1, .L.false.%d", c);
    } else if (node->rhs->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbnez s1, .L.false.%d", c);
    } else {
      println("\t\tbeqz s1, .L.false.%d", c);
    }
    println("\t\taddi s1,zero, 1");
    println("\t\tj .L.end.%d", c);
    println(".L.false.%d:", c);
    println("\t\taddi s1,zero, 0");
    println(".L.end.%d:", c);
    return;
  }
  case ND_LOGOR: {
    int c = count();
    gen_expr(node->lhs);
    if (node->lhs->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbeqz s1, .L.true.%d", c);
    } else if (node->lhs->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbeqz s1, .L.true.%d", c);
    } else {
      println("\t\tbnez s1, .L.true.%d", c);
    }

    gen_expr(node->rhs);
    if (node->rhs->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbeqz s1, .L.true.%d", c);
    } else if (node->rhs->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbeqz s1, .L.true.%d", c);
    } else {
      println("\t\tbnez s1, .L.true.%d", c);
    }
    println("\t\taddi s1,zero, 0");
    println("\t\tj .L.end.%d", c);
    println(".L.true.%d:", c);
    println("\t\taddi s1,zero, 1");
    println(".L.end.%d:", c);
    return;
  }

  case ND_NOT:
    gen_expr(node->rhs);
    if (node->rhs->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
    } else if (node->rhs->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
    } else {
      println("\t\tseqz s1, s1");
    }
    return;
  case ND_BITNOT:
    gen_expr(node->rhs);
    println("\t\nnot s1, s1");
    return;
  case ND_DEREF:
    gen_expr(node->rhs);
    load(node);
    return;
  case ND_ADDR:
    gen_addr(node->rhs);
    return;
  case ND_VAR:
  case ND_MEMBER:
    gen_addr(node);
    load(node);
    return;
  case ND_ASSIGN:
    gen_addr(node->lhs);
    push();
    gen_expr(node->rhs);
    store(node->lhs, node->rhs);
    return;
  case ND_STMT_EXPR:
    for (Node *n = node->body; n; n = n->next) {
      gen_stmt(n);
    }
    return;
  case ND_COND: {
    int c = count();
    gen_expr(node->cond);
    if (node->cond->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbnez s1, .L.else.%d", c);
    } else if (node->cond->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbnez s1, .L.else.%d", c);
    } else {
      println("\t\tbeqz s1, .L.else.%d", c);
    }

    gen_expr(node->then);
    println("\t\tj .L.end.%d", c);
    println(".L.else.%d:", c);
    gen_expr(node->els);
    println(".L.end.%d:", c);
    return;
  }
  case ND_FUNCCAL: {

    bool is_va_area = false;
    int np = 0, up = 0;

    //  is_va_area = true;
    for (Type *var = node->func_ty->params; var; var = var->next) {
      np++;
    }
    for (Node *arg = node->args; arg; arg = arg->next) {
      up++;
    }
    if (up > np) {
      is_va_area = true;
    }

    int stack_args = push_args(node, np, is_va_area);

    gen_expr(node->rhs);

    int gp = 0, fp = 0, allp = 0;

    if (node->ret_buffer && node->ty->size > 16) {
      pop(argreg[gp++]);
    }

    for (Node *arg = node->args; arg; arg = arg->next) {

      if (is_va_area && is_flonum(arg->ty)) {
        if (allp >= np) {

          if (gp < MAX_ARGREG) {
            popf("ft1");
            println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
          }
        }

      } else if (arg->ty->kind == TY_STRUCT || arg->ty->kind == TY_UNION) {
        if (arg->ty->size > 16) {

          if (gp < MAX_ARGREG) {
            pop(argreg[gp++]);
          }
          continue;
        }
        int nm = 0;
        int cf = 0;
        Type *ty = arg->ty;
        int sz = align_to(ty->size, 8) / 8;
        for (Member *member = ty->members; member; member = member->next) {
          nm++;
          if (member->ty->kind == TY_FLOAT || member->ty->kind == TY_DOUBLE) {
            cf++;
          }
        }

        if (nm == 1) {
          Member *mem = ty->members;
          switch (mem->ty->kind) {
          case TY_STRUCT:
          case TY_UNION:
            error_tok(mem->name, "parameter not support struct's struct");
            break;
          case TY_FLOAT:
          case TY_DOUBLE:
            if (fp < MAX_ARGREG) {
              popf(argfreg[fp++]);
            } else if (gp < MAX_ARGREG) {
              popf("ft1");
              println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
              fp++;
            }
            break;
          default:
            if (gp < MAX_ARGREG) {
              pop(argreg[gp++]);
            }
          }
        } else if (nm == 2 && cf >= 1) {
          if (cf == 1) {
            if (is_flonum(ty->members->ty)) { // floating first
              if (fp < MAX_ARGREG) {
                popf(argfreg[fp++]);
              } else if (gp < MAX_ARGREG) {
                popf("ft1");
                println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
                fp++;
              }
              if (gp < MAX_ARGREG) {
                pop(argreg[gp++]);
              }
            } else {
              if (gp < MAX_ARGREG) { // integer first
                pop(argreg[gp++]);
              }
              if (fp < MAX_ARGREG) {
                popf(argfreg[fp++]);
              } else if (gp < MAX_ARGREG) {
                popf("ft1");
                println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
                fp++;
              }
            }
          } else {
            if (fp < MAX_ARGREG) {
              popf(argfreg[fp++]);
            } else if (gp < MAX_ARGREG) {
              popf("ft1");
              println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
              fp++;
            }
            if (fp < MAX_ARGREG) {
              popf(argfreg[fp++]);
            } else if (gp < MAX_ARGREG) {
              popf("ft1");
              println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
              fp++;
            }
          }

        } else {
          for (int i = 0; i < sz; i++) {
            if (gp < MAX_ARGREG) {
              pop(argreg[gp++]);
            }
          }
        }

      } else {
        if (is_flonum(arg->ty)) {
          if (fp < MAX_ARGREG) {
            popf(argfreg[fp++]);
          } else if (gp < MAX_ARGREG) {
            popf("ft1");
            println("\t\tfmv.x.d %s,ft1", argreg[gp++]);
            fp++;
          }

        } else if (gp < MAX_ARGREG) {
          pop(argreg[gp++]);
        }
      }

      allp++;
    }

    println("\t\tjalr s1");
    int tmp_stack_args = 8 * stack_args;
    println("\t\taddi sp,sp, %d", tmp_stack_args);
    depth -= stack_args;

    println("\t\taddi sp,sp,-8");
    if (node->ty->kind == TY_FLOAT) {
      println("\t\tfsw fa0, 0(sp)");
    } else if (node->ty->kind == TY_DOUBLE) {
      println("\t\tfsd fa0, 0(sp)");
    } else {
      println("\t\tsd a0, 0(sp)");
    }

    switch (node->ty->kind) {
    case TY_BOOL:
      println("\t\tsnez s1, a0");
      break;
    case TY_CHAR:
      if (node->ty->is_unsigned) {
        println("\t\tlbu s1, 0(sp)");
      } else {
        println("\t\tlb s1, 0(sp)");
      }
      break;
    case TY_SHORT:
      if (node->ty->is_unsigned) {
        println("\t\tlhu s1, 0(sp)");
      } else {
        println("\t\tlh s1, 0(sp)");
      }
      break;
    case TY_INT:
      println("\t\tlw s1, 0(sp)");
      break;
    case TY_FLOAT:
      println("\t\tflw fs1, 0(sp)");
      break;
    case TY_DOUBLE:
      println("\t\tfld fs1, 0(sp)");
      break;
    default:
      println("\t\tld s1, 0(sp)");
      break;
    }

    println("\t\taddi sp,sp,8");

    if (node->ret_buffer && node->ty->size <= 16) {
      copy_ret_buffer(node->ret_buffer);
      //   println("  lea %d(%%rbp), %%rax", node->ret_buffer->offset);
    }

    return;
  }
  }

  if (is_flonum(node->lhs->ty)) {
    gen_expr(node->rhs);
    pushf();
    gen_expr(node->lhs);
    popf("ft0");

    char *sz = (node->lhs->ty->kind == TY_FLOAT) ? "s" : "d";

    switch (node->kind) {
    case ND_EQ:
      println("\t\tfeq.%s s1, fs1, ft0", sz);
      return;
    case ND_NE:
      println("\t\tfeq.%s s1, fs1, ft0", sz);
      println("\t\tseqz s1, s1");
      return;
    case ND_LT:
      println("\t\tflt.%s s1, fs1, ft0", sz);
      return;
    case ND_LE:
      println("\t\tfle.%s s1, fs1, ft0", sz);
      return;
    case ND_ADD:
      println("\t\tfadd.%s fs1, fs1, ft0", sz);
      return;
    case ND_SUB:
      println("\t\tfsub.%s fs1, fs1, ft0", sz);
      return;
    case ND_MUL:
      println("\t\tfmul.%s fs1, fs1, ft0", sz);
      return;
    case ND_DIV:
      println("\t\tfdiv.%s fs1, fs1, ft0", sz);
      return;
    }

    error_tok(node->tok, "invalid expression");
  }

  gen_expr(node->rhs);
  push();
  gen_expr(node->lhs);
  pop("t0");

  switch (node->kind) {
  case ND_EQ:
    println("\t\tsub t1, t0, s1");
    println("\t\tsltiu s1, t1, 1");
    return;
  case ND_NE:
    println("\t\tsub t1, t0, s1");
    println("\t\tsltu s1, zero, t1");
    return;
  case ND_LE:
    // println("\t\tsub t1, s1, t0");
    if (node->lhs->ty->is_unsigned) {
      println("\t\tsgtu s1, s1, t0");
    } else {
      println("\t\tsgt s1, s1, t0");
    }

    println("\t\txori s1, s1, 1");
    println("\t\tandi s1, s1, 0xff");
    return;
  case ND_MOD:
    if (node->lhs->ty->size == 8) {
      if (node->lhs->ty->is_unsigned) {
        println("\t\tremu s1, s1, t0");
      } else {
        println("\t\trem s1, s1, t0");
      }

    } else {
      if (node->lhs->ty->is_unsigned) {
        println("\t\tremuw s1, s1, t0");
      } else {
        println("\t\tremw s1, s1, t0");
      }
    }
    return;
  case ND_BITAND:
    println("\t\tand s1, s1, t0");
    return;
  case ND_BITOR:
    println("\t\tor s1, s1, t0");
    return;
  case ND_BITXOR:
    println("\t\txor s1, s1, t0");
    return;
  case ND_LT:
    // println("\t\tsub t1, t0, s1");
    if (node->lhs->ty->is_unsigned) {
      println("\t\tsgtu s1, t0, s1");
    } else {
      println("\t\tsgt s1, t0, s1");
    }
    return;
  case ND_ADD:
    println("\t\tadd s1, s1, t0");
    return;
  case ND_SUB:
    println("\t\tsub s1, s1, t0");
    return;
  case ND_MUL:
    if (node->ty->size == 8) {
      println("\t\tmul s1, s1, t0");
    } else {
      println("\t\tmulw s1, s1, t0");
    }

    return;
  case ND_DIV:
    if (node->ty->size == 8) {
      if (node->ty->is_unsigned) {
        println("\t\tdivu s1, s1, t0");
      } else {
        println("\t\tdiv s1, s1, t0");
      }

    } else {
      if (node->ty->is_unsigned) {
        println("\t\tdivuw s1, s1, t0");
      } else {
        println("\t\tdivw s1, s1, t0");
      }
    }

    return;
  case ND_SHL:
    if (node->ty->size == 8) {

      println("\t\tsll s1, s1, t0");

    } else {

      println("\t\tsllw s1, s1, t0");
    }
    return;
  case ND_SHR:

    if (node->ty->size == 8) {
      if (node->ty->is_unsigned) {
        println("\t\tsrl s1, s1, t0");
      } else {
        println("\t\tsra s1, s1, t0");
      }

    } else {
      if (node->ty->is_unsigned) {
        println("\t\tsrlw s1, s1, t0");
      } else {
        println("\t\tsraw s1, s1, t0");
      }
    }

    return;
  }

  error_tok(node->tok, "invalid expression");
}

static void gen_stmt(Node *node) {
  println("  .loc %d %d", node->tok->file->file_no, node->tok->line_no);

  switch (node->kind) {
  case ND_IF: {
    int c = count();
    gen_expr(node->cond);
    if (node->cond->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbnez s1, .L.else.%d", c);
    } else if (node->cond->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbnez s1, .L.else.%d", c);
    } else {
      println("\t\tbeqz s1, .L.else.%d", c);
    }
    gen_stmt(node->then);
    println("\t\tj .L.end.%d", c);
    println(".L.else.%d:", c);
    if (node->els) {
      gen_stmt(node->els);
    }
    println(".L.end.%d:", c);
    return;
  }
  case ND_FOR: {
    int c = count();
    if (node->init) {
      gen_stmt(node->init);
    }
    println(".L.begin.%d:", c);
    if (node->cond) {
      gen_expr(node->cond);
      if (node->cond->ty->kind == TY_FLOAT) {
        println("\t\tfmv.w.x ft1, zero");
        println("\t\tfeq.s s1, fs1,ft1");
        println("\t\tbnez s1,  %s", node->brk_label);
      } else if (node->cond->ty->kind == TY_DOUBLE) {
        println("\t\tfmv.d.x ft1, zero");
        println("\t\tfeq.d s1, fs1,ft1");
        println("\t\tbnez s1,  %s", node->brk_label);
      } else {
        println("\t\tbeqz s1, %s", node->brk_label);
      }
    }
    gen_stmt(node->then);
    println("%s:", node->cont_label);
    if (node->inc) {
      gen_expr(node->inc);
    }
    println("\t\tj .L.begin.%d", c);
    println("%s:", node->brk_label);
    return;
  }
  case ND_GOTO:
    println("\t\tj %s", node->unique_label);
    return;
  case ND_LABEL:
    println("%s:", node->unique_label);
    gen_stmt(node->rhs);
    return;
  case ND_DO: {
    int c = count();
    println(".L.begin.%d:", c);
    gen_stmt(node->then);
    println("%s:", node->cont_label);
    gen_expr(node->cond);
    if (node->cond->ty->kind == TY_FLOAT) {
      println("\t\tfmv.w.x ft1, zero");
      println("\t\tfeq.s s1, fs1,ft1");
      println("\t\tbeqz s1, .L.begin.%d", c);
    } else if (node->cond->ty->kind == TY_DOUBLE) {
      println("\t\tfmv.d.x ft1, zero");
      println("\t\tfeq.d s1, fs1,ft1");
      println("\t\tbeqz s1, .L.begin.%d", c);
    } else {
      println("  bnez s1, .L.begin.%d", c);
    }

    println("%s:", node->brk_label);
    return;
  }
  case ND_SWITCH:
    gen_expr(node->cond);

    for (Node *n = node->case_next; n; n = n->case_next) {
      println("\t\tli t1, %ld", n->val);
      println("\t\tsub t1, s1, t1");
      println("\t\tbeqz t1, %s", n->label);
    }

    if (node->default_case) {
      println("\t\tj %s", node->default_case->label);
    }

    println("\t\tj %s", node->brk_label);
    gen_stmt(node->then);
    println("%s:", node->brk_label);
    return;
  case ND_CASE:
    println("%s:", node->label);
    gen_stmt(node->rhs);
    return;
  case ND_BLOCK:
    for (Node *n = node->body; n; n = n->next) {
      gen_stmt(n);
    }
    return;
  case ND_RETURN:
    if (node->rhs) {
      gen_expr(node->rhs);
    }

    println("\t\tjal zero, .L.return.%s", cur_fn->name);
    return;
  case ND_EXPR_STMT:
    gen_expr(node->rhs);
    return;
  }

  error_tok(node->tok, "invalid statement");
}

static void assign_lvar_offsets(Obj *prog) {
  for (Obj *fn = prog; fn; fn = fn->next) {
    if (!fn->is_function) {
      continue;
    }
    int top = 0;
    int bottom = 24; // 16~24:ra, fp

    int gp = 0, fp = 0;

    for (Obj *var = fn->params; var; var = var->next) {
      if (is_flonum(var->ty)) {
        if (fp++ < MAX_ARGREG || (fp >= MAX_ARGREG && gp++ < MAX_ARGREG)) {
          continue;
        }
      } else {
        if (gp++ < MAX_ARGREG) {
          continue;
        }
      }
      if (top > 0) {
        top = align_to(top, 8);
      }
      var->offset = top;
      var->is_stack_param = true;
      top += var->ty->size;
    }

    for (Obj *var = fn->locals; var; var = var->next) {
      if (var->is_stack_param) {
        continue;
      }
      bottom += var->ty->size;
      bottom = align_to(bottom, var->align);
      var->offset = -bottom;
    }
    fn->stack_size = align_to(bottom, 16);
  }
}

static void emit_const(Obj *prog) {
  for (Obj *fn = prog; fn; fn = fn->next) {
  }
}

static int find_pow2(Token *tok, int val) {

  long p2 = 1;
  for (int i = 1; i <= 63; i++) {
    if (p2 << i == val) {
      return i;
    }
  }
  error_tok(tok, "requested alignment '%d' is not a positive power of 2", val);
  return -1;
}
static void emit_constval(ConstVal *begin) {
  for (ConstVal *cval = begin; cval; cval = cval->next) {

    switch (cval->kind) {
    case TY_FLOAT:
      println(".LC%d:", cval->idx);
      float v = (float)cval->fval;
      println("\t\t.word\t%d", *(int *)(&v));
      break;
    case TY_DOUBLE:
      println(".LC%d:", cval->idx);
      println("\t\t.quad\t%ld", *(long *)(&cval->fval));
      break;
    }
  }
}
static void emit_data(Obj *prog) {

  for (Obj *var = prog; var; var = var->next) {
    if (var->is_function || !var->is_definition) {
      continue;
    }
    if (var->is_static) {
      println("\t\t.local %s", var->name);
    } else {
      println("\t\t.globl %s", var->name);
    }
    Token *tok = var->ty->name;
    if (tok && var->align > 1) {
      int align = find_pow2(tok, var->align);
      if (var->ty->kind == TY_ARRAY || var->ty->kind == TY_STRUCT ||
          var->ty->kind == TY_UNION) {
        if (align < 3) {
          align = 3;
        }
      }
      println("\t\t.align %d", align);
    } else {
      // println("\t\t.align 1");
    }
    if (var->init_data) {
      println(".data");
      println("%s:", var->name);

      Relocation *rel = var->rel;
      int pos = 0;
      while (pos < var->ty->size) {
        if (rel && rel->offset == pos) {
          println("\t\t.quad %s%+ld", rel->label, rel->addend);
          rel = rel->next;
          pos += 8;
        } else {
          println("\t\t.byte %d", var->init_data[pos++]);
        }
      }

      continue;
    }
    println(".bss");
    println("%s:", var->name);
    println("\t\t.zero %d", var->ty->size);
  }
}

static void emit_normal_arg(Type *ty, int *gpi, int *fpi) {
  if (ty->size == 1) {
    println("\t\tsb %s, 0(t1)", argreg[(*gpi)++]);
  } else if (ty->size == 2) {
    println("\t\tsh %s, 0(t1)", argreg[(*gpi)++]);
  } else if (ty->size == 4) {
    if (ty->kind == TY_FLOAT) {
      if ((*fpi) < MAX_ARGREG) {
        println("\t\tfsw %s, 0(t1)", argfreg[(*fpi)++]);

      } else {
        println("\t\tmv s1, %s", argreg[(*gpi)++]);
        println("\t\tfmv.w.x fs1,s1");
        println("\t\tfsw fs1, 0(t1)");
      }
    } else {
      println("\t\tsw %s, 0(t1)", argreg[(*gpi)++]);
    }

  } else {
    if (ty->kind == TY_DOUBLE) {
      if ((*fpi) < MAX_ARGREG) {
        println("\t\tfsd %s, 0(t1)", argfreg[(*fpi)++]);
      } else {
        println("\t\tmv s1, %s", argreg[(*gpi)++]);
        println("\t\tfmv.d.x fs1,s1");
        println("\t\tfsd fs1, 0(t1)");
      }

    } else {
      println("\t\tsd %s, 0(t1)", argreg[(*gpi)++]);
    }
  }
}

void emit_text(Obj *prog) {

  for (Obj *fn = prog; fn; fn = fn->next) {
    if (!fn->is_function || !fn->is_definition) {
      continue;
    }
    if (fn->is_static) {
      println("\t\t.local %s", fn->name);

    } else {
      println("\t\t.globl %s", fn->name);
    }
    println(".text");
    println("%s:", fn->name);
    cur_fn = fn;

    println("\t\tsd ra, -16(sp)");
    println("\t\tsd fp, -24(sp)");
    println("\t\taddi fp, sp, 0");
    println("\t\tli t1, %d", fn->stack_size);
    println("\t\tsub sp, sp, t1");

    if (fn->va_area) {
      int np = 0;
      for (Obj *var = fn->params; var; var = var->next) {
        np++;
      }
      int offset = fn->va_area->offset;

      println("\t\tli t1, %d", offset);
      println("\t\tadd t1, t1, fp");
      offset = 0;

      for (int i = np; i < MAX_ARGREG; i++) {
        println("\t\tsd a%d, %d(t1)", i, offset);
        offset += 8;
      }
    }

    int gpi = 0, fpi = 0;
    for (Obj *var = fn->params; var; var = var->next) {
      if (var->is_stack_param) {
        continue;
      }

      println("\t\tli t1, %d", var->offset);
      println("\t\tadd t1, t1, fp");

      if (var->ty->kind == TY_STRUCT || var->ty->kind == TY_UNION) {

        Type *ty = var->ty;
        int nm = 0;
        int cf = 0;
        for (Member *member = ty->members; member; member = member->next) {
          nm++;
          if (member->ty->kind == TY_FLOAT || member->ty->kind == TY_DOUBLE) {
            cf++;
          }
        }
        int sz = align_to(ty->size, 8);
        if (sz > 16) {
          println("\t\tmv s2, %s", argreg[gpi++]);
          for (int i = 0; i < sz / 8; i++) {
            println("\t\tld t2, %d(s2)", i * 8);
            println("\t\tsd t2, %d(t1)", i * 8);
          }
        } else {
          if (nm == 1) {
            emit_normal_arg(ty->members->ty, &gpi, &fpi);
          } else if (nm == 2 && cf >= 1) {

            emit_normal_arg(ty->members->ty, &gpi, &fpi);
            println("\t\taddi t1, t1, %d", ty->members->next->offset);
            emit_normal_arg(ty->members->next->ty, &gpi, &fpi);
          } else {
            for (int i = 0; i < sz / 8; i++) {
              println("\t\tmv t2, %s", argreg[gpi++]);
              println("\t\tsd t2, %d(t1)", i * 8);
            }
          }
        }

        continue;
      }

      emit_normal_arg(var->ty, &gpi, &fpi);
    }

    gen_stmt(fn->body);
    assert(depth == 0);

    println(".L.return.%s:", fn->name);
    println("\t\tmv a0, s1");

    if (fn->ty->return_ty->kind == TY_FLOAT) {
      println("\t\taddi sp, sp, -8");
      println("\t\tfsw fs1, 0(sp)");
      println("\t\tflw fa0, 0(sp)");
      println("\t\taddi sp, sp, 8");

    } else if (fn->ty->return_ty->kind == TY_DOUBLE) {
      println("\t\taddi sp, sp, -8");
      println("\t\tfsd fs1, 0(sp)");
      println("\t\tfld fa0, 0(sp)");
      println("\t\taddi sp, sp, 8");
    }

    println("\t\tli t1, %d", fn->stack_size);
    println("\t\tadd sp, sp, t1");
    println("\t\tld ra, -16(sp)");
    println("\t\tld fp, -24(sp)");
    println("\t\tjr ra");
  }
}

void codegen(Obj *prog, FILE *out) {
  ConstVal cval = {};
  cur_const_val = &cval;
  output_file = out;

  File **files = get_input_files();
  for (int i = 0; files[i]; i++) {
    println("  .file %d \"%s\"", files[i]->file_no, files[i]->name);
  }

  assign_lvar_offsets(prog);
  emit_data(prog);
  emit_text(prog);
  emit_constval(&cval);
}

char *base_file;
StringArray include_paths;

static char *opt_o;
static bool opt_E;

static char *input_path;

static void usage(int status) {
  fprintf(stderr, "chibicc [ -o <path> ] <file>\n");
  exit(status);
}

static bool take_arg(char *arg) {
  char *x[] = {"-o", "-I"};

  for (int i = 0; i < sizeof(x) / sizeof(*x); i++) {
    if (!strcmp(arg, x[i])) {
      return true;
    }
  }

  return false;
}

static void add_default_include_paths(char *argv0) {

  strarray_push(&include_paths, format("%s/include", dirname(strdup(argv0))));

  strarray_push(&include_paths, "/usr/local/include");
  strarray_push(&include_paths, "/usr/include");
}

static void parse_args(int argc, char **argv) {

  for (int i = 1; i < argc; i++) {
    if (take_arg(argv[i])) {
      if (!argv[++i]) {
        usage(1);
      }
    }
  }

  for (int i = 1; i < argc; i++) {
    if (!strcmp(argv[i], "--help"))
      usage(0);

    if (!strcmp(argv[i], "-o")) {
      if (!argv[++i])
        usage(1);
      opt_o = argv[i];
      continue;
    }

    if (!strncmp(argv[i], "-o", 2)) {
      opt_o = argv[i] + 2;
      continue;
    }

    if (!strcmp(argv[i], "-E")) {
      opt_E = true;
      continue;
    }

    if (!strncmp(argv[i], "-I", 2)) {
      strarray_push(&include_paths, argv[i] + 2);
      continue;
    }

    if (argv[i][0] == '-' && argv[i][1] != '\0')
      error("unknown argument: %s", argv[i]);

    input_path = argv[i];
  }

  if (!input_path)
    error("no input files");
}

static FILE *open_file(char *path) {
  if (!path || strcmp(path, "-") == 0)
    return stdout;

  FILE *out = fopen(path, "w");
  if (!out)
    error("cannot open output file: %s: %s", path, strerror(errno));
  return out;
}

static void print_tokens(Token *tok) {
  FILE *out = open_file(opt_o ? opt_o : "-");

  int line = 1;
  for (; tok->kind != TK_EOF; tok = tok->next) {
    if (line > 1 && tok->at_bol) {
      fprintf(out, "\n");
    }
    if (tok->has_space && !tok->at_bol) {
      fprintf(out, " ");
    }
    fprintf(out, "%.*s", tok->len, tok->loc);
    line++;
  }
  fprintf(out, "\n");
}

int main(int argc, char **argv) {

  parse_args(argc, argv);
  add_default_include_paths(argv[0]);
  // Tokenize and parse.
  Token *tok = tokenize_file(input_path);
  if (!tok) {
    error("%s: %s", base_file, strerror(errno));
  }
  tok = preprocess(tok);
  if (opt_E) {
    print_tokens(tok);
    return 0;
  }
  Obj *prog = parse(tok);

  // Traverse the AST to emit assembly.
  FILE *out = open_file(opt_o);
  codegen(prog, out);
  return 0;
}

typedef struct VarScope VarScope;
struct VarScope {
  VarScope *next;
  char *name;
  Obj *var;
  Type *type_def;
  Type *enum_ty;
  int enum_val;
};

typedef struct TagScope TagScope;
struct TagScope {
  TagScope *next;
  char *name;
  Type *ty;
};

typedef struct Scope Scope;
struct Scope {
  Scope *next;
  VarScope *vars;
  TagScope *tags;
};

typedef struct {
  bool is_typedef;
  bool is_static;
  bool is_extern;
  int align;
} VarAttr;

typedef struct Initializer Initializer;
struct Initializer {
  Initializer *next;
  Type *ty;
  Token *tok;
  bool is_flexible;
  Node *expr;
  Initializer **children;
};
typedef struct InitDesg InitDesg;
struct InitDesg {
  InitDesg *next;
  int idx;
  Member *member;
  Obj *var;
};

static Obj *current_fn;
static Obj *locals;
static Obj *globals;
static Node *gotos;
static Node *labels;
static Node *current_switch;

static char *cont_label;
static char *brk_label;

static Scope *scope = &(Scope){};

static bool is_function(Token *tok);
static bool is_typename(Token *tok);
static Initializer *initializer(Token **rest, Token *tok, Type *ty,
                                Type **new_ty);
static int64_t eval_rval(Node *node, char **label);
static int64_t eval(Node *node);
static int64_t eval2(Node *node, char **label);
static double eval_double(Node *node);
static Node * bitor (Token * *rest, Token *tok);
static Node *add(Token **rest, Token *tok);
static Node *assign(Token **rest, Token *tok);
static Node *bitand(Token **rest, Token *tok);
static Node *bitxor(Token **rest, Token *tok);
static Node *block_stmt(Token **rest, Token *tok);
static Node *cast(Token **rest, Token *tok);
static Node *conditional(Token **rest, Token *tok);
static Node *declaration(Token **rest, Token *tok, Type *basety, VarAttr *attr);
static Node *equality(Token **rest, Token *tok);
static Node *expr_stmt(Token **rest, Token *tok);
static Node *expr(Token **rest, Token *tok);
static Node *logand(Token **rest, Token *tok);
static Node *logor(Token **rest, Token *tok);
static Node *lvar_initializer(Token **rest, Token *tok, Obj *var);
static Node *mul(Token **rest, Token *tok);
static Node *new_add(Node *lhs, Node *rhs, Token *tok);
static Node *new_sub(Node *lhs, Node *rhs, Token *tok);
static Node *funcall(Token **rest, Token *tok, Node *node);
static Node *postfix(Token **rest, Token *tok);
static Node *primary(Token **rest, Token *tok);
static Node *relational(Token **rest, Token *tok);
static Node *shift(Token **rest, Token *tok);
static Node *unary(Token **rest, Token *tok);
static Token *function(Token *tok, Type *basety, VarAttr *attr);
static Token *global_variables(Token *tok, Type *basety, VarAttr *attr);
static Token *parse_typedef(Token *tok, Type *basety);
static Type *declarator(Token **rest, Token *tok, Type *ty);
static Type *declspec(Token **rest, Token *tok, VarAttr *attr);
static Type *enum_specifier(Token **rest, Token *tok);
static Type *struct_decl(Token **rest, Token *tok);
static Type *type_suffix(Token **rest, Token *tok, Type *ty);
static Type *typename(Token **rest, Token *tok);
static Type *union_decl(Token **rest, Token *tok);
static void gvar_initializer(Token **rest, Token *tok, Obj *var);
static void initializer2(Token **rest, Token *tok, Initializer *init);

static Node *new_node(NodeKind kind, Token *tok) {
  Node *node = calloc(1, sizeof(Node));
  node->kind = kind;
  node->tok = tok;
  return node;
}

static void enter_scope(void) {
  Scope *sc = calloc(1, sizeof(Scope));
  sc->next = scope;
  scope = sc;
}

static void leave_scope(void) { scope = scope->next; }

static VarScope *find_var(Token *tok) {
  for (Scope *scp = scope; scp; scp = scp->next) {
    for (VarScope *var = scp->vars; var; var = var->next) {
      if (equal(tok, var->name)) {
        return var;
      }
    }
  }

  return NULL;
}

static Type *find_tag(Token *tok) {
  for (Scope *sc = scope; sc; sc = sc->next)
    for (TagScope *sc2 = sc->tags; sc2; sc2 = sc2->next)
      if (equal(tok, sc2->name)) {
        return sc2->ty;
      }
  return NULL;
}

static Node *new_variable(Obj *var, Token *tok) {
  Node *node = new_node(ND_VAR, tok);
  node->var = var;
  return node;
}

static VarScope *push_scope(char *name) {
  VarScope *sc = calloc(1, sizeof(VarScope));
  sc->name = name;
  sc->next = scope->vars;
  scope->vars = sc;
  return sc;
}

static Initializer *new_initializer(Type *ty, bool is_flexible) {
  Initializer *init = calloc(1, sizeof(Initializer));
  init->ty = ty;

  if (ty->kind == TY_ARRAY) {
    if (is_flexible && ty->size < 0) {
      init->is_flexible = true;
      return init;
    }
    init->children = calloc(ty->array_len, sizeof(Initializer *));
    for (int i = 0; i < ty->array_len; i++) {
      init->children[i] = new_initializer(ty->base, false);
    }
    return init;
  }
  if (ty->kind == TY_STRUCT || ty->kind == TY_UNION) {
    // Count the number of struct members.
    int len = 0;
    for (Member *mem = ty->members; mem; mem = mem->next) {
      len++;
    }

    init->children = calloc(len, sizeof(Initializer *));

    for (Member *mem = ty->members; mem; mem = mem->next) {
      if (is_flexible && ty->is_flexible && !mem->next) {
        Initializer *child = calloc(1, sizeof(Initializer));
        child->ty = mem->ty;
        child->is_flexible = true;
        init->children[mem->idx] = child;
      } else {
        init->children[mem->idx] = new_initializer(mem->ty, false);
      }
    }
    return init;
  }

  return init;
}
static Node *new_long(int64_t val, Token *tok) {
  Node *node = new_node(ND_NUM, tok);
  node->val = val;
  node->ty = ty_long;
  return node;
}

static Node *new_ulong(long val, Token *tok) {
  Node *node = new_node(ND_NUM, tok);
  node->val = val;
  node->ty = ty_ulong;
  return node;
}

static Obj *new_var(char *name, Type *ty) {
  Obj *var = calloc(1, sizeof(Obj));
  var->name = name;
  var->ty = ty;
  var->align = ty->align;
  push_scope(name)->var = var;
  return var;
}

static Obj *new_lvar(char *name, Type *ty) {
  Obj *var = new_var(name, ty);
  var->is_local = true;
  var->next = locals;
  locals = var;
  return var;
}

Node *new_cast(Node *expr, Type *ty) {
  add_type(expr);

  Node *node = calloc(1, sizeof(Node));
  node->kind = ND_CAST;
  node->tok = expr->tok;
  node->rhs = expr;
  node->ty = copy_type(ty);
  return node;
}

static Obj *new_gvar(char *name, Type *ty) {
  Obj *var = new_var(name, ty);
  var->next = globals;
  var->is_static = true;
  var->is_definition = true;
  globals = var;
  return var;
}

static Type *find_typedef(Token *tok) {
  if (tok->kind == TK_IDENT) {
    VarScope *sc = find_var(tok);
    if (sc) {
      return sc->type_def;
    }
  }
  return NULL;
}

static char *new_unique_name() {
  static int id = 0;
  return format(".L..%d", id++);
}

static Obj *new_anon_gvar(Type *ty) { return new_gvar(new_unique_name(), ty); }

static Obj *new_string_literal(char *p, Type *ty) {
  Obj *var = new_anon_gvar(ty);
  var->init_data = p;
  return var;
}

static char *get_ident(Token *tok) {
  if (tok->kind != TK_IDENT) {
    error_tok(tok, "expected an identifier");
  }
  return strndup(tok->loc, tok->len);
}

static void create_param_lvars(Type *param) {
  if (param) {
    create_param_lvars(param->next);
    if (!param->name) {
      error_tok(param->name_pos, "parameter name omitted");
    }

    new_lvar(get_ident(param->name), param);
  }
}

static void push_tag_scope(Token *tok, Type *ty) {
  TagScope *sc = calloc(1, sizeof(TagScope));
  sc->name = strndup(tok->loc, tok->len);
  sc->ty = ty;
  sc->next = scope->tags;
  scope->tags = sc;
}

static Type *declspec(Token **rest, Token *tok, VarAttr *attr) {
  enum {
    VOID = 1 << 0,
    BOOL = 1 << 2,
    CHAR = 1 << 4,
    SHORT = 1 << 6,
    INT = 1 << 8,
    LONG = 1 << 10,
    FLOAT = 1 << 12,
    DOUBLE = 1 << 14,
    OTHER = 1 << 16,
    SIGNED = 1 << 17,
    UNSIGNED = 1 << 18,
  };

  Type *ty = ty_int;
  int counter = 0;

  while (is_typename(tok)) {

    if (equal(tok, "typedef") || equal(tok, "static") || equal(tok, "extern")) {
      if (!attr) {
        error_tok(tok,
                  "storage class specifier is not allowed in this context");
      }
      if (equal(tok, "typedef")) {
        attr->is_typedef = true;
      } else if (equal(tok, "static")) {
        attr->is_static = true;
      } else {
        attr->is_extern = true;
      }
      if (attr->is_typedef && attr->is_extern + attr->is_static > 1) {
        error_tok(tok, "typedef may not be used with static or extern");
      }
      tok = tok->next;
      continue;
    }

    if (consume(&tok, tok, "const") || consume(&tok, tok, "volatile") ||
        consume(&tok, tok, "auto") || consume(&tok, tok, "register") ||
        consume(&tok, tok, "restrict") || consume(&tok, tok, "__restrict") ||
        consume(&tok, tok, "__restrict__") || consume(&tok, tok, "_Noreturn")) {
      continue;
    }

    if (equal(tok, "_Alignas")) {
      if (!attr) {
        error_tok(tok, "_Alignas is not allowed in this context");
      }
      tok = skip(tok->next, "(");

      if (is_typename(tok)) {
        attr->align = typename(&tok, tok)->align;
      } else {
        attr->align = const_expr(&tok, tok);
      }
      tok = skip(tok, ")");
      continue;
    }

    Type *ty2 = find_typedef(tok);

    if (equal(tok, "struct") || equal(tok, "union") || equal(tok, "enum") ||
        ty2) {
      if (counter) {
        break;
      }
      if (equal(tok, "struct")) {
        ty = struct_decl(&tok, tok->next);
      } else if (equal(tok, "enum")) {
        ty = enum_specifier(&tok, tok->next);
      } else if (equal(tok, "union")) {
        ty = union_decl(&tok, tok->next);
      } else {
        ty = ty2;
        tok = tok->next;
      }

      counter += OTHER;
      continue;
    }

    // Handle built-in types.
    if (equal(tok, "void"))
      counter += VOID;
    else if (equal(tok, "_Bool"))
      counter += BOOL;
    else if (equal(tok, "char"))
      counter += CHAR;
    else if (equal(tok, "short"))
      counter += SHORT;
    else if (equal(tok, "int"))
      counter += INT;
    else if (equal(tok, "long"))
      counter += LONG;
    else if (equal(tok, "float"))
      counter += FLOAT;
    else if (equal(tok, "double"))
      counter += DOUBLE;
    else if (equal(tok, "signed"))
      counter |= SIGNED;
    else if (equal(tok, "unsigned"))
      counter |= UNSIGNED;
    else
      unreachable();

    switch (counter) {
    case VOID:
      ty = ty_void;
      break;
    case BOOL:
      ty = ty_bool;
      break;
    case CHAR:
    case SIGNED + CHAR:
      ty = ty_char;
      break;
    case UNSIGNED + CHAR:
      ty = ty_uchar;
      break;
    case SHORT:
    case SHORT + INT:
    case SIGNED + SHORT:
    case SIGNED + SHORT + INT:
      ty = ty_short;
      break;
    case UNSIGNED + SHORT:
    case UNSIGNED + SHORT + INT:
      ty = ty_ushort;
      break;
    case INT:
    case SIGNED:
    case SIGNED + INT:
      ty = ty_int;
      break;
    case UNSIGNED:
    case UNSIGNED + INT:
      ty = ty_uint;
      break;
    case LONG:
    case LONG + INT:
    case LONG + LONG:
    case LONG + LONG + INT:
    case SIGNED + LONG:
    case SIGNED + LONG + INT:
    case SIGNED + LONG + LONG:
    case SIGNED + LONG + LONG + INT:
      ty = ty_long;
      break;
    case UNSIGNED + LONG:
    case UNSIGNED + LONG + INT:
    case UNSIGNED + LONG + LONG:
    case UNSIGNED + LONG + LONG + INT:
      ty = ty_ulong;
      break;
    case FLOAT:
      ty = ty_float;
      break;
    case DOUBLE:
    case LONG + DOUBLE:
      ty = ty_double;
      break;
    default:
      error_tok(tok, "invalid type");
    }

    tok = tok->next;
  }

  *rest = tok;
  return ty;
}

static bool is_end(Token *tok) {
  return equal(tok, "}") || (equal(tok, ",") && equal(tok->next, "}"));
}

static bool consume_end(Token **rest, Token *tok) {
  if (equal(tok, "}")) {
    *rest = tok->next;
    return true;
  }

  if (equal(tok, ",") && equal(tok->next, "}")) {
    *rest = tok->next->next;
    return true;
  }

  return false;
}

static Type *func_param(Token **rest, Token *tok, Type *ty) {
  if (equal(tok, "void") && equal(tok->next, ")")) {
    *rest = tok->next->next;
    return func_type(ty);
  }

  Type head = {};
  Type *cur = &head;
  bool is_variadic = false;

  while (!equal(tok, ")")) {
    if (cur != &head) {
      tok = skip(tok, ",");
    }
    if (equal(tok, "...")) {
      is_variadic = true;
      tok = tok->next;
      skip(tok, ")");
      break;
    }

    Type *ty2 = declspec(&tok, tok, NULL);
    ty2 = declarator(&tok, tok, ty2);
    Token *name = ty2->name;
    if (ty2->kind == TY_ARRAY) {
      ty2 = pointer_to(ty2->base);
      ty2->name = name;
    } else if (ty2->kind == TY_FUNC) {
      ty2 = pointer_to(ty2);
      ty2->name = name;
    }

    cur = cur->next = copy_type(ty2);
  }

  if (cur == &head) {
    // is_variadic = true;
  }

  ty = func_type(ty);
  ty->params = head.next;
  ty->is_variadic = is_variadic;
  *rest = tok->next;
  return ty;
}

/*
static long get_number(Token *tok) {
  if (tok->kind != TK_NUM) {
    error_tok(tok, "expected a number");
  }
  return tok->val;
}
*/

static Type *array_dimensions(Token **rest, Token *tok, Type *ty) {

  while (equal(tok, "static") || equal(tok, "restrict")) {
    tok = tok->next;
  }

  if (equal(tok, "]")) {
    ty = type_suffix(rest, tok->next, ty);
    return array_of(ty, -1);
  }

  int sz = const_expr(&tok, tok);
  tok = skip(tok, "]");
  ty = type_suffix(rest, tok, ty);
  return array_of(ty, sz);
}

static Type *type_suffix(Token **rest, Token *tok, Type *ty) {
  if (equal(tok, "(")) {
    return func_param(rest, tok->next, ty);
  }

  if (equal(tok, "[")) {
    return array_dimensions(rest, tok->next, ty);
  }

  *rest = tok;
  return ty;
}

static Type *pointers(Token **rest, Token *tok, Type *ty) {
  while (consume(&tok, tok, "*")) {
    ty = pointer_to(ty);
    while (equal(tok, "const") || equal(tok, "volatile") ||
           equal(tok, "restrict") || equal(tok, "__restrict") ||
           equal(tok, "__restrict__"))
      tok = tok->next;
  }
  *rest = tok;
  return ty;
}

static Type *declarator(Token **rest, Token *tok, Type *ty) {
  ty = pointers(&tok, tok, ty);

  if (equal(tok, "(")) {
    Token *start = tok;
    Type dummy = {};
    declarator(&tok, start->next, &dummy);
    tok = skip(tok, ")");
    ty = type_suffix(rest, tok, ty);
    return declarator(&tok, start->next, ty);
  }

  Token *name = NULL;
  Token *name_pos = tok;

  if (tok->kind == TK_IDENT) {
    name = tok;
    tok = tok->next;
  }

  ty = type_suffix(rest, tok, ty);
  ty->name = name;
  ty->name_pos = name_pos;
  return ty;
}

static Node *new_unary(NodeKind kind, Node *expr, Token *tok) {
  Node *node = new_node(kind, tok);
  node->rhs = expr;
  return node;
}

static Node *new_binary(NodeKind kind, Node *lhs, Node *rhs, Token *tok) {

  Node *node = new_node(kind, tok);
  node->lhs = lhs;
  node->rhs = rhs;
  return node;
}

static Node *new_num(int64_t val, Token *tok) {
  Node *node = new_node(ND_NUM, tok);
  node->val = val;
  return node;
}

static void write_buf(char *buf, uint64_t val, int sz) {
  if (sz == 1) {
    *buf = val;

  } else if (sz == 2) {
    *(uint16_t *)buf = val;

  } else if (sz == 4) {
    *(uint32_t *)buf = val;

  } else if (sz == 8) {
    *(uint64_t *)buf = val;

  } else {
    unreachable();
  }
}

static Relocation *write_gvar_data(Relocation *cur, Initializer *init, Type *ty,
                                   char *buf, int offset) {
  if (ty->kind == TY_ARRAY) {
    int sz = ty->base->size;
    for (int i = 0; i < ty->array_len; i++)
      cur = write_gvar_data(cur, init->children[i], ty->base, buf,
                            offset + sz * i);
    return cur;
  }

  if (ty->kind == TY_STRUCT) {
    for (Member *mem = ty->members; mem; mem = mem->next)
      cur = write_gvar_data(cur, init->children[mem->idx], mem->ty, buf,
                            offset + mem->offset);
    return cur;
  }

  if (ty->kind == TY_UNION)
    return write_gvar_data(cur, init->children[0], ty->members->ty, buf,
                           offset);

  if (!init->expr) {
    return cur;
  }

  if (ty->kind == TY_FLOAT) {
    *(float *)(buf + offset) = eval_double(init->expr);
    return cur;
  }

  if (ty->kind == TY_DOUBLE) {
    *(double *)(buf + offset) = eval_double(init->expr);
    return cur;
  }

  char *label = NULL;
  uint64_t val = eval2(init->expr, &label);

  if (!label) {
    write_buf(buf + offset, val, ty->size);
    return cur;
  }

  Relocation *rel = calloc(1, sizeof(Relocation));
  rel->offset = offset;
  rel->label = label;
  rel->addend = val;
  cur->next = rel;
  return cur->next;
}

static void gvar_initializer(Token **rest, Token *tok, Obj *var) {
  Initializer *init = initializer(rest, tok, var->ty, &var->ty);

  Relocation head = {};
  char *buf = calloc(1, var->ty->size);
  write_gvar_data(&head, init, var->ty, buf, 0);
  var->init_data = buf;
  var->rel = head.next;
}

static bool is_typename(Token *tok) {
  static char *kw[] = {
      "void",       "char",         "short",     "int",      "long",
      "struct",     "union",        "typedef",   "_Bool",    "enum",
      "static",     "extern",       "_Alignas",  "signed",   "unsigned",
      "const",      "volatile",     "auto",      "register", "restrict",
      "__restrict", "__restrict__", "_Noreturn", "float",    "double",
  };

  for (int i = 0; i < sizeof(kw) / sizeof(*kw); i++) {
    if (equal(tok, kw[i])) {
      return true;
    }
  }

  return find_typedef(tok);
}

static Type *enum_specifier(Token **rest, Token *tok) {
  Type *ty = enum_type();

  // Read a struct tag.
  Token *tag = NULL;
  if (tok->kind == TK_IDENT) {
    tag = tok;
    tok = tok->next;
  }

  if (tag && !equal(tok, "{")) {
    Type *ty = find_tag(tag);
    if (!ty) {
      error_tok(tag, "unknown enum type");
    }
    if (ty->kind != TY_ENUM) {
      error_tok(tag, "not an enum tag");
    }
    *rest = tok;
    return ty;
  }

  tok = skip(tok, "{");

  int i = 0;
  int val = 0;
  while (!consume_end(rest, tok)) {
    if (i++ > 0) {
      tok = skip(tok, ",");
    }

    char *name = get_ident(tok);
    tok = tok->next;

    if (equal(tok, "=")) {
      val = const_expr(&tok, tok->next);
    }

    VarScope *sc = push_scope(name);
    sc->enum_ty = ty;
    sc->enum_val = val++;
  }

  if (tag) {
    push_tag_scope(tag, ty);
  }
  return ty;
}

static Node *stmt(Token **rest, Token *tok) {
  if (equal(tok, "return")) {
    Node *node = new_node(ND_RETURN, tok);
    if (consume(rest, tok->next, ";")) {
      return node;
    }

    Node *exp = expr(&tok, tok->next);
    *rest = skip(tok, ";");

    add_type(exp);
    node->rhs = new_cast(exp, current_fn->ty->return_ty);
    return node;
  }

  if (equal(tok, "if")) {
    Node *node = new_node(ND_IF, tok);
    tok = skip(tok->next, "(");
    node->cond = expr(&tok, tok);
    tok = skip(tok, ")");
    node->then = stmt(&tok, tok);
    if (equal(tok, "else")) {
      node->els = stmt(&tok, tok->next);
    }
    *rest = tok;
    return node;
  }

  if (equal(tok, "switch")) {
    Node *node = new_node(ND_SWITCH, tok);
    tok = skip(tok->next, "(");
    node->cond = expr(&tok, tok);
    tok = skip(tok, ")");

    Node *sw = current_switch;
    current_switch = node;

    char *brk = brk_label;
    brk_label = node->brk_label = new_unique_name();

    node->then = stmt(rest, tok);

    current_switch = sw;
    brk_label = brk;
    return node;
  }

  if (equal(tok, "case")) {
    if (!current_switch) {
      error_tok(tok, "stray case");
    }

    Node *node = new_node(ND_CASE, tok);
    int val = const_expr(&tok, tok->next);
    tok = skip(tok, ":");
    node->label = new_unique_name();
    node->rhs = stmt(rest, tok);
    node->val = val;
    node->case_next = current_switch->case_next;
    current_switch->case_next = node;
    return node;
  }

  if (equal(tok, "default")) {
    if (!current_switch) {
      error_tok(tok, "stray default");
    }

    Node *node = new_node(ND_CASE, tok);
    tok = skip(tok->next, ":");
    node->label = new_unique_name();
    node->rhs = stmt(rest, tok);
    current_switch->default_case = node;
    return node;
  }

  if (equal(tok, "for")) {
    Node *node = new_node(ND_FOR, tok);
    tok = skip(tok->next, "(");
    char *brk = brk_label;
    char *cont = cont_label;

    brk_label = node->brk_label = new_unique_name();
    cont_label = node->cont_label = new_unique_name();

    enter_scope();
    if (is_typename(tok)) {
      Type *basety = declspec(&tok, tok, NULL);
      node->init = declaration(&tok, tok, basety, NULL);
    } else {
      node->init = expr_stmt(&tok, tok);
    }

    if (!equal(tok, ";")) {
      node->cond = expr(&tok, tok);
    }

    tok = skip(tok, ";");

    if (!equal(tok, ")")) {
      node->inc = expr(&tok, tok);
    }
    tok = skip(tok, ")");

    node->then = stmt(rest, tok);
    leave_scope();
    brk_label = brk;
    cont_label = cont;

    return node;
  }
  if (equal(tok, "do")) {
    Node *node = new_node(ND_DO, tok);

    char *brk = brk_label;
    char *cont = cont_label;
    brk_label = node->brk_label = new_unique_name();
    cont_label = node->cont_label = new_unique_name();

    node->then = stmt(&tok, tok->next);

    brk_label = brk;
    cont_label = cont;

    tok = skip(tok, "while");
    tok = skip(tok, "(");
    node->cond = expr(&tok, tok);
    tok = skip(tok, ")");
    *rest = skip(tok, ";");
    return node;
  }

  if (equal(tok, "while")) {
    Node *node = new_node(ND_FOR, tok);
    tok = skip(tok->next, "(");
    node->cond = expr(&tok, tok);
    tok = skip(tok, ")");
    char *brk = brk_label;
    char *cont = cont_label;
    brk_label = node->brk_label = new_unique_name();
    cont_label = node->cont_label = new_unique_name();

    node->then = stmt(rest, tok);
    brk_label = brk;
    cont_label = cont;

    return node;
  }

  if (equal(tok, "goto")) {
    Node *node = new_node(ND_GOTO, tok);
    node->label = get_ident(tok->next);
    node->goto_next = gotos;
    gotos = node;
    *rest = skip(tok->next->next, ";");
    return node;
  }
  if (equal(tok, "continue")) {
    if (!cont_label) {
      error_tok(tok, "stray continue");
    }
    Node *node = new_node(ND_GOTO, tok);
    node->unique_label = cont_label;
    *rest = skip(tok->next, ";");
    return node;
  }

  if (equal(tok, "break")) {
    if (!brk_label) {
      error_tok(tok, "stray break");
    }
    Node *node = new_node(ND_GOTO, tok);
    node->unique_label = brk_label;
    *rest = skip(tok->next, ";");
    return node;
  }

  if (tok->kind == TK_IDENT && equal(tok->next, ":")) {
    Node *node = new_node(ND_LABEL, tok);
    node->label = strndup(tok->loc, tok->len);
    node->unique_label = new_unique_name();
    node->rhs = stmt(rest, tok->next->next);
    node->goto_next = labels;
    labels = node;
    return node;
  }

  if (equal(tok, "{")) {
    return block_stmt(rest, tok->next);
  }

  return expr_stmt(rest, tok);
}

static int64_t eval(Node *node) { return eval2(node, NULL); }

static int64_t eval2(Node *node, char **label) {
  add_type(node);

  if (is_flonum(node->ty)) {
    return eval_double(node);
  }

  switch (node->kind) {
  case ND_ADD:
    return eval2(node->lhs, label) + eval(node->rhs);
  case ND_SUB:
    return eval2(node->lhs, label) - eval(node->rhs);
  case ND_MUL:
    return eval(node->lhs) * eval(node->rhs);
  case ND_DIV:
    if (node->ty->is_unsigned) {
      return (uint64_t)eval(node->lhs) / eval(node->rhs);
    }
    return eval(node->lhs) / eval(node->rhs);
  case ND_NEG:
    return -eval(node->rhs);
  case ND_MOD:
    if (node->ty->is_unsigned) {
      return (uint64_t)eval(node->lhs) % eval(node->rhs);
    }
    return eval(node->lhs) % eval(node->rhs);
  case ND_BITAND:
    return eval(node->lhs) & eval(node->rhs);
  case ND_BITOR:
    return eval(node->lhs) | eval(node->rhs);
  case ND_BITXOR:
    return eval(node->lhs) ^ eval(node->rhs);
  case ND_SHL:
    return eval(node->lhs) << eval(node->rhs);
  case ND_SHR:
    if (node->ty->is_unsigned && node->ty->size == 8) {
      return (uint64_t)eval(node->lhs) >> eval(node->rhs);
    }
    return eval(node->lhs) >> eval(node->rhs);
  case ND_EQ:
    return eval(node->lhs) == eval(node->rhs);
  case ND_NE:
    return eval(node->lhs) != eval(node->rhs);
  case ND_LT:
    if (node->lhs->ty->is_unsigned) {
      return (uint64_t)eval(node->lhs) < eval(node->rhs);
    }

    return eval(node->lhs) < eval(node->rhs);
  case ND_LE:
    if (node->lhs->ty->is_unsigned) {
      return (uint64_t)eval(node->lhs) <= eval(node->rhs);
    }

    return eval(node->lhs) <= eval(node->rhs);
  case ND_COND:
    return eval(node->cond) ? eval2(node->then, label)
                            : eval2(node->els, label);
  case ND_COMMA:
    return eval2(node->rhs, label);
  case ND_NOT:
    return !eval(node->rhs);
  case ND_BITNOT:
    return ~eval(node->rhs);
  case ND_LOGAND:
    return eval(node->lhs) && eval(node->rhs);
  case ND_LOGOR:
    return eval(node->lhs) || eval(node->rhs);
  case ND_CAST: {
    int64_t val = eval2(node->rhs, label);
    if (is_integer(node->ty)) {
      switch (node->ty->size) {
      case 1:
        return node->ty->is_unsigned ? (uint8_t)val : (int8_t)val;
      case 2:
        return node->ty->is_unsigned ? (uint16_t)val : (int16_t)val;
      case 4:
        return node->ty->is_unsigned ? (uint32_t)val : (int32_t)val;
      }
    }
    return val;
  }
  case ND_ADDR:
    return eval_rval(node->rhs, label);
  case ND_MEMBER:
    if (!label) {
      error_tok(node->tok, "not a compile-time constant");
    }
    if (node->ty->kind != TY_ARRAY) {
      error_tok(node->tok, "invalid initializer");
    }
    return eval_rval(node->rhs, label) + node->member->offset;
  case ND_VAR:
    if (!label) {
      error_tok(node->tok, "not a compile-time constant");
    }
    if (node->var->ty->kind != TY_ARRAY && node->var->ty->kind != TY_FUNC) {
      error_tok(node->tok, "invalid initializer");
    }
    *label = node->var->name;
    return 0;
  case ND_NUM:
    return node->val;
  }

  error_tok(node->tok, "not a compile-time constant");
}

static int64_t eval_rval(Node *node, char **label) {
  switch (node->kind) {
  case ND_VAR:
    if (node->var->is_local) {
      error_tok(node->tok, "not a compile-time constant");
    }
    *label = node->var->name;
    return 0;
  case ND_DEREF:
    return eval2(node->rhs, label);
  case ND_MEMBER:
    return eval_rval(node->rhs, label) + node->member->offset;
  }

  error_tok(node->tok, "invalid initializer");
}

int64_t const_expr(Token **rest, Token *tok) {
  Node *node = conditional(rest, tok);
  return eval(node);
}

static Type *abstract_declarator(Token **rest, Token *tok, Type *ty) {
  ty = pointers(&tok, tok, ty);

  if (equal(tok, "(")) {
    Token *start = tok;
    Type dummy = {};
    abstract_declarator(&tok, start->next, &dummy);
    tok = skip(tok, ")");
    ty = type_suffix(rest, tok, ty);
    return abstract_declarator(&tok, start->next, ty);
  }

  return type_suffix(rest, tok, ty);
}

static Type *typename(Token **rest, Token *tok) {
  Type *ty = declspec(&tok, tok, NULL);
  return abstract_declarator(rest, tok, ty);
}

static Node *declaration(Token **rest, Token *tok, Type *basety,
                         VarAttr *attr) {
  Node head = {};
  Node *cur = &head;
  int i = 0;

  while (!equal(tok, ";")) {
    if (i++ > 0) {
      tok = skip(tok, ",");
    }

    Type *ty = declarator(&tok, tok, basety);

    if (ty->kind == TY_VOID) {
      error_tok(tok, "variable declared void");
    }
    if (!ty->name) {
      error_tok(ty->name_pos, "variable name omitted");
    }

    if (attr && attr->is_static) {
      Obj *var = new_anon_gvar(ty);
      push_scope(get_ident(ty->name))->var = var;
      if (equal(tok, "=")) {
        gvar_initializer(&tok, tok->next, var);
      }
      continue;
    }

    Obj *var = new_lvar(get_ident(ty->name), ty);
    if (attr && attr->align) {
      var->align = attr->align;
    }

    if (equal(tok, "=")) {
      Node *expr = lvar_initializer(&tok, tok->next, var);
      cur = cur->next = new_unary(ND_EXPR_STMT, expr, tok);
    }
    if (var->ty->size < 0) {
      error_tok(ty->name, "variable has incomplete type");
    }
    if (var->ty->kind == TY_VOID) {
      error_tok(ty->name, "variable declared void");
    }
  }

  Node *node = new_node(ND_BLOCK, tok);
  node->body = head.next;
  *rest = tok->next;
  return node;
}

static Token *skip_excess_element(Token *tok) {
  if (equal(tok, "{")) {
    tok = skip_excess_element(tok->next);
    return skip(tok, "}");
  }

  assign(&tok, tok);
  return tok;
}

// string-initializer = string-literal
static void string_initializer(Token **rest, Token *tok, Initializer *init) {
  if (init->is_flexible) {
    *init =
        *new_initializer(array_of(init->ty->base, tok->ty->array_len), false);
  }
  int len = MIN(init->ty->array_len, tok->ty->array_len);
  for (int i = 0; i < len; i++)
    init->children[i]->expr = new_num(tok->str[i], tok);
  *rest = tok->next;
}

static int count_array_init_elements(Token *tok, Type *ty) {
  Initializer *dummy = new_initializer(ty->base, false);
  int i = 0;

  for (; !consume_end(&tok, tok); i++) {
    if (i > 0) {
      tok = skip(tok, ",");
    }
    initializer2(&tok, tok, dummy);
  }
  return i;
}

static void struct_initializer1(Token **rest, Token *tok, Initializer *init) {
  tok = skip(tok, "{");

  Member *mem = init->ty->members;

  while (!consume_end(rest, tok)) {
    if (mem != init->ty->members) {
      tok = skip(tok, ",");
    }

    if (mem) {
      initializer2(&tok, tok, init->children[mem->idx]);
      mem = mem->next;
    } else {
      tok = skip_excess_element(tok);
    }
  }
}

static void struct_initializer2(Token **rest, Token *tok, Initializer *init) {
  bool first = true;

  for (Member *mem = init->ty->members; mem && !is_end(tok); mem = mem->next) {
    if (!first) {
      tok = skip(tok, ",");
    }
    first = false;
    initializer2(&tok, tok, init->children[mem->idx]);
  }
  *rest = tok;
}

static void array_initializer1(Token **rest, Token *tok, Initializer *init) {

  tok = skip(tok, "{");

  if (init->is_flexible) {
    int len = count_array_init_elements(tok, init->ty);
    *init = *new_initializer(array_of(init->ty->base, len), false);
  }

  for (int i = 0; !consume_end(rest, tok); i++) {
    if (i > 0) {
      tok = skip(tok, ",");
    }

    if (i < init->ty->array_len) {
      initializer2(&tok, tok, init->children[i]);
    } else {
      tok = skip_excess_element(tok);
    }
  }
}

static void array_initializer2(Token **rest, Token *tok, Initializer *init) {
  if (init->is_flexible) {
    int len = count_array_init_elements(tok, init->ty);
    *init = *new_initializer(array_of(init->ty->base, len), false);
  }

  for (int i = 0; i < init->ty->array_len && !is_end(tok); i++) {
    if (i > 0) {
      tok = skip(tok, ",");
    }
    initializer2(&tok, tok, init->children[i]);
  }
  *rest = tok;
}

static void union_initializer(Token **rest, Token *tok, Initializer *init) {
  if (equal(tok, "{")) {
    initializer2(&tok, tok->next, init->children[0]);
    consume(&tok, tok, ",");
    *rest = skip(tok, "}");
  } else {
    initializer2(rest, tok, init->children[0]);
  }
}

static void initializer2(Token **rest, Token *tok, Initializer *init) {
  if (init->ty->kind == TY_ARRAY && tok->kind == TK_STR) {
    string_initializer(rest, tok, init);
    return;
  }

  if (init->ty->kind == TY_ARRAY) {
    if (equal(tok, "{"))
      array_initializer1(rest, tok, init);
    else
      array_initializer2(rest, tok, init);
    return;
  }

  if (init->ty->kind == TY_STRUCT) {
    if (equal(tok, "{")) {
      struct_initializer1(rest, tok, init);
      return;
    }
    Node *expr = assign(rest, tok);
    add_type(expr);
    if (expr->ty->kind == TY_STRUCT) {
      init->expr = expr;
      return;
    }

    struct_initializer2(rest, tok, init);
    return;
  }

  if (init->ty->kind == TY_UNION) {
    union_initializer(rest, tok, init);
    return;
  }

  if (equal(tok, "{")) {
    initializer2(&tok, tok->next, init);
    *rest = skip(tok, "}");
    return;
  }

  init->expr = assign(rest, tok);
}

static Type *copy_struct_type(Type *ty) {
  ty = copy_type(ty);

  Member head = {};
  Member *cur = &head;
  for (Member *mem = ty->members; mem; mem = mem->next) {
    Member *m = calloc(1, sizeof(Member));
    *m = *mem;
    cur = cur->next = m;
  }

  ty->members = head.next;
  return ty;
}

static Initializer *initializer(Token **rest, Token *tok, Type *ty,
                                Type **new_ty) {
  Initializer *init = new_initializer(ty, true);
  initializer2(rest, tok, init);

  if ((ty->kind == TY_STRUCT || ty->kind == TY_UNION) && ty->is_flexible) {
    ty = copy_struct_type(ty);

    Member *mem = ty->members;
    while (mem->next) {
      mem = mem->next;
    }
    mem->ty = init->children[mem->idx]->ty;
    ty->size += mem->ty->size;

    *new_ty = ty;
    return init;
  }

  *new_ty = init->ty;
  return init;
}

static Node *init_desg_expr(InitDesg *desg, Token *tok) {
  if (desg->var) {
    return new_variable(desg->var, tok);
  }

  if (desg->member) {
    Node *node = new_unary(ND_MEMBER, init_desg_expr(desg->next, tok), tok);
    node->member = desg->member;
    return node;
  }

  Node *lhs = init_desg_expr(desg->next, tok);
  Node *rhs = new_num(desg->idx, tok);
  return new_unary(ND_DEREF, new_add(lhs, rhs, tok), tok);
}

static Node *create_lvar_init(Initializer *init, Type *ty, InitDesg *desg,
                              Token *tok) {
  if (ty->kind == TY_ARRAY) {
    Node *node = new_node(ND_NULL_EXPR, tok);
    for (int i = 0; i < ty->array_len; i++) {
      InitDesg desg2 = {desg, i};
      Node *rhs = create_lvar_init(init->children[i], ty->base, &desg2, tok);
      node = new_binary(ND_COMMA, node, rhs, tok);
    }
    return node;
  }

  if (ty->kind == TY_STRUCT && !init->expr) {
    Node *node = new_node(ND_NULL_EXPR, tok);

    for (Member *mem = ty->members; mem; mem = mem->next) {
      InitDesg desg2 = {desg, 0, mem};
      Node *rhs =
          create_lvar_init(init->children[mem->idx], mem->ty, &desg2, tok);
      node = new_binary(ND_COMMA, node, rhs, tok);
    }
    return node;
  }

  if (ty->kind == TY_UNION) {
    InitDesg desg2 = {desg, 0, ty->members};
    return create_lvar_init(init->children[0], ty->members->ty, &desg2, tok);
  }

  if (!init->expr) {
    return new_node(ND_NULL_EXPR, tok);
  }
  Node *lhs = init_desg_expr(desg, tok);
  Node *rhs = init->expr;
  return new_binary(ND_ASSIGN, lhs, rhs, tok);
}

static Node *lvar_initializer(Token **rest, Token *tok, Obj *var) {
  Initializer *init = initializer(rest, tok, var->ty, &var->ty);
  InitDesg desg = {NULL, 0, NULL, var};
  Node *lhs = new_node(ND_MEMZERO, tok);
  lhs->var = var;

  Node *rhs = create_lvar_init(init, var->ty, &desg, tok);
  return new_binary(ND_COMMA, lhs, rhs, tok);
}

static Node *block_stmt(Token **rest, Token *tok) {
  Node *node = new_node(ND_BLOCK, tok);
  Node head = {};
  Node *cur = &head;

  enter_scope();

  while (!equal(tok, "}")) {
    if (is_typename(tok) && !equal(tok->next, ":")) {
      VarAttr attr = {};
      Type *basety = declspec(&tok, tok, &attr);

      if (attr.is_typedef) {
        tok = parse_typedef(tok, basety);
        continue;
      }

      if (is_function(tok)) {
        tok = function(tok, basety, &attr);
        continue;
      }

      if (attr.is_extern) {
        tok = global_variables(tok, basety, &attr);
        continue;
      }

      cur = cur->next = declaration(&tok, tok, basety, &attr);
    } else {
      cur = cur->next = stmt(&tok, tok);
    }
    add_type(cur);
  }

  leave_scope();

  node->body = head.next;
  *rest = tok->next;
  return node;
}

// stmt = expr-stmt
static Node *expr_stmt(Token **rest, Token *tok) {
  if (equal(tok, ";")) {
    *rest = tok->next;
    return new_node(ND_BLOCK, tok);
  }
  Node *node = new_node(ND_EXPR_STMT, tok);
  node->rhs = expr(&tok, tok);
  *rest = skip(tok, ";");
  return node;
}

static Node *expr(Token **rest, Token *tok) {
  Node *node = assign(&tok, tok);

  if (equal(tok, ",")) {
    return new_binary(ND_COMMA, node, expr(rest, tok->next), tok);
  }

  *rest = tok;
  return node;
}

static double eval_double(Node *node) {
  add_type(node);

  if (is_integer(node->ty)) {
    if (node->ty->is_unsigned)
      return (unsigned long)eval(node);
    return eval(node);
  }

  switch (node->kind) {
  case ND_ADD:
    return eval_double(node->lhs) + eval_double(node->rhs);
  case ND_SUB:
    return eval_double(node->lhs) - eval_double(node->rhs);
  case ND_MUL:
    return eval_double(node->lhs) * eval_double(node->rhs);
  case ND_DIV:
    return eval_double(node->lhs) / eval_double(node->rhs);
  case ND_NEG:
    return -eval_double(node->rhs);
  case ND_COND:
    return eval_double(node->cond) ? eval_double(node->then)
                                   : eval_double(node->els);
  case ND_COMMA:
    return eval_double(node->rhs);
  case ND_CAST:
    if (is_flonum(node->rhs->ty))
      return eval_double(node->rhs);
    return eval(node->rhs);
  case ND_NUM:
    return node->fval;
  }

  error_tok(node->tok, "not a compile-time constant");
}

// Convert `A op= B` to `tmp = &A, *tmp = *tmp op B`
// where tmp is a fresh pointer variable.
static Node *to_assign(Node *binary) {
  add_type(binary->lhs);
  add_type(binary->rhs);
  Token *tok = binary->tok;

  Obj *var = new_lvar("", pointer_to(binary->lhs->ty));

  Node *expr1 = new_binary(ND_ASSIGN, new_variable(var, tok),
                           new_unary(ND_ADDR, binary->lhs, tok), tok);

  Node *expr2 = new_binary(
      ND_ASSIGN, new_unary(ND_DEREF, new_variable(var, tok), tok),
      new_binary(binary->kind, new_unary(ND_DEREF, new_variable(var, tok), tok),
                 binary->rhs, tok),
      tok);

  return new_binary(ND_COMMA, expr1, expr2, tok);
}

static Node *assign(Token **rest, Token *tok) {
  Node *node = conditional(&tok, tok);

  if (equal(tok, "=")) {
    return new_binary(ND_ASSIGN, node, assign(rest, tok->next), tok);
  }
  if (equal(tok, "+=")) {
    return to_assign(new_add(node, assign(rest, tok->next), tok));
  }

  if (equal(tok, "-=")) {
    return to_assign(new_sub(node, assign(rest, tok->next), tok));
  }

  if (equal(tok, "*=")) {
    return to_assign(new_binary(ND_MUL, node, assign(rest, tok->next), tok));
  }

  if (equal(tok, "/=")) {
    return to_assign(new_binary(ND_DIV, node, assign(rest, tok->next), tok));
  }
  if (equal(tok, "%=")) {
    return to_assign(new_binary(ND_MOD, node, assign(rest, tok->next), tok));
  }
  if (equal(tok, "&=")) {
    return to_assign(new_binary(ND_BITAND, node, assign(rest, tok->next), tok));
  }

  if (equal(tok, "|=")) {
    return to_assign(new_binary(ND_BITOR, node, assign(rest, tok->next), tok));
  }

  if (equal(tok, "^=")) {
    return to_assign(new_binary(ND_BITXOR, node, assign(rest, tok->next), tok));
  }
  if (equal(tok, "<<=")) {
    return to_assign(new_binary(ND_SHL, node, assign(rest, tok->next), tok));
  }

  if (equal(tok, ">>=")) {
    return to_assign(new_binary(ND_SHR, node, assign(rest, tok->next), tok));
  }

  *rest = tok;
  return node;
}

static Node *conditional(Token **rest, Token *tok) {
  Node *cond = logor(&tok, tok);

  if (!equal(tok, "?")) {
    *rest = tok;
    return cond;
  }

  Node *node = new_node(ND_COND, tok);
  node->cond = cond;
  node->then = expr(&tok, tok->next);
  tok = skip(tok, ":");
  node->els = conditional(rest, tok);
  return node;
}

static Node *logor(Token **rest, Token *tok) {
  Node *node = logand(&tok, tok);
  while (equal(tok, "||")) {
    Token *start = tok;
    node = new_binary(ND_LOGOR, node, logand(&tok, tok->next), start);
  }
  *rest = tok;
  return node;
}

// logand = bitor ("&&" bitor)*
static Node *logand(Token **rest, Token *tok) {
  Node *node = bitor (&tok, tok);
  while (equal(tok, "&&")) {
    Token *start = tok;
    node = new_binary(ND_LOGAND, node, bitor (&tok, tok->next), start);
  }
  *rest = tok;
  return node;
}

// bitor = bitxor ("|" bitxor)*
static Node * bitor (Token * *rest, Token *tok) {
  Node *node = bitxor(&tok, tok);
  while (equal(tok, "|")) {
    Token *start = tok;
    node = new_binary(ND_BITOR, node, bitxor(&tok, tok->next), start);
  }
  *rest = tok;
  return node;
}

// bitxor = bitand ("^" bitand)*
static Node *bitxor(Token **rest, Token *tok) {
  Node *node = bitand(&tok, tok);
  while (equal(tok, "^")) {
    Token *start = tok;
    node = new_binary(ND_BITXOR, node, bitand(&tok, tok->next), start);
  }
  *rest = tok;
  return node;
}

// bitand = equality ("&" equality)*
static Node *bitand(Token **rest, Token *tok) {
  Node *node = equality(&tok, tok);
  while (equal(tok, "&")) {
    Token *start = tok;
    node = new_binary(ND_BITAND, node, equality(&tok, tok->next), start);
  }
  *rest = tok;
  return node;
}

static Node *equality(Token **rest, Token *tok) {

  Node *node = relational(&tok, tok);

  for (;;) {
    Token *start = tok;
    if (equal(tok, "==")) {
      node = new_binary(ND_EQ, node, relational(&tok, tok->next), start);
      continue;
    }

    if (equal(tok, "!=")) {
      node = new_binary(ND_NE, node, relational(&tok, tok->next), start);
      continue;
    }

    *rest = tok;
    return node;
  }
}

static Node *relational(Token **rest, Token *tok) {

  Node *node = shift(&tok, tok);

  for (;;) {
    Token *start = tok;
    if (equal(tok, "<")) {
      node = new_binary(ND_LT, node, shift(&tok, tok->next), start);
      continue;
    }

    if (equal(tok, "<=")) {
      node = new_binary(ND_LE, node, shift(&tok, tok->next), start);
      continue;
    }

    if (equal(tok, ">")) {
      node = new_binary(ND_LT, shift(&tok, tok->next), node, start);
      continue;
    }

    if (equal(tok, ">=")) {
      node = new_binary(ND_LE, shift(&tok, tok->next), node, start);
      continue;
    }

    *rest = tok;
    return node;
  }
}

static Node *shift(Token **rest, Token *tok) {
  Node *node = add(&tok, tok);

  for (;;) {
    Token *start = tok;

    if (equal(tok, "<<")) {
      node = new_binary(ND_SHL, node, add(&tok, tok->next), start);
      continue;
    }

    if (equal(tok, ">>")) {
      node = new_binary(ND_SHR, node, add(&tok, tok->next), start);
      continue;
    }

    *rest = tok;
    return node;
  }
}

static Node *new_add(Node *lhs, Node *rhs, Token *tok) {
  add_type(lhs);
  add_type(rhs);

  if (is_numeric(lhs->ty) && is_numeric(rhs->ty)) {
    return new_binary(ND_ADD, lhs, rhs, tok);
  }

  if (lhs->ty->base && rhs->ty->base) {
    error_tok(tok, "invalid operands");
  }

  if (!lhs->ty->base && rhs->ty->base) {
    Node *tmp = lhs;
    lhs = rhs;
    rhs = tmp;
  }

  rhs = new_binary(ND_MUL, rhs, new_long(lhs->ty->base->size, tok), tok);
  return new_binary(ND_ADD, lhs, rhs, tok);
}

static Node *new_sub(Node *lhs, Node *rhs, Token *tok) {
  add_type(lhs);
  add_type(rhs);

  if (is_numeric(lhs->ty) && is_numeric(rhs->ty)) {
    return new_binary(ND_SUB, lhs, rhs, tok);
  }

  if (lhs->ty->base && is_integer(rhs->ty)) {
    rhs = new_binary(ND_MUL, rhs, new_long(lhs->ty->base->size, tok), tok);
    add_type(rhs);
    Node *node = new_binary(ND_SUB, lhs, rhs, tok);
    node->ty = lhs->ty;
    return node;
  }

  if (lhs->ty->base && rhs->ty->base) {
    Node *node = new_binary(ND_SUB, lhs, rhs, tok);
    node->ty = ty_long;
    return new_binary(ND_DIV, node, new_num(lhs->ty->base->size, tok), tok);
  }

  error_tok(tok, "invalid operands");
}

static Node *add(Token **rest, Token *tok) {

  Node *node = mul(&tok, tok);

  for (;;) {
    Token *start = tok;
    if (equal(tok, "+")) {
      node = new_add(node, mul(&tok, tok->next), start);
      continue;
    }

    if (equal(tok, "-")) {
      node = new_sub(node, mul(&tok, tok->next), start);
      continue;
    }

    *rest = tok;
    return node;
  }
}

static Node *mul(Token **rest, Token *tok) {

  Node *node = cast(&tok, tok);

  for (;;) {
    Token *start = tok;
    if (equal(tok, "*")) {
      node = new_binary(ND_MUL, node, cast(&tok, tok->next), start);
      continue;
    }

    if (equal(tok, "/")) {
      node = new_binary(ND_DIV, node, cast(&tok, tok->next), start);
      continue;
    }
    if (equal(tok, "%")) {
      node = new_binary(ND_MOD, node, cast(&tok, tok->next), start);
      continue;
    }

    *rest = tok;
    return node;
  }
}

static Node *cast(Token **rest, Token *tok) {
  if (equal(tok, "(") && is_typename(tok->next)) {
    Token *start = tok;
    Type *ty = typename(&tok, tok->next);
    tok = skip(tok, ")");

    if (equal(tok, "{")) {
      return unary(rest, start);
    }

    Node *node = new_cast(cast(rest, tok), ty);
    node->tok = start;
    return node;
  }

  return unary(rest, tok);
}

static void struct_members(Token **rest, Token *tok, Type *ty) {
  Member head = {};
  Member *cur = &head;
  int idx = 0;

  while (!equal(tok, "}")) {
    VarAttr attr = {};
    Type *basety = declspec(&tok, tok, &attr);
    bool first = true;

    while (!consume(&tok, tok, ";")) {
      if (!first) {
        tok = skip(tok, ",");
      }
      first = false;

      Member *mem = calloc(1, sizeof(Member));
      mem->ty = declarator(&tok, tok, basety);
      mem->name = mem->ty->name;
      mem->idx = idx++;
      mem->align = attr.align ? attr.align : mem->ty->align;
      cur = cur->next = mem;
    }
  }

  if (cur != &head && cur->ty->kind == TY_ARRAY && cur->ty->array_len < 0) {
    cur->ty = array_of(cur->ty->base, 0);
    ty->is_flexible = true;
  }

  *rest = tok->next;
  ty->members = head.next;
}

static Type *struct_union_decl(Token **rest, Token *tok) {
  Token *tag = NULL;
  if (tok->kind == TK_IDENT) {
    tag = tok;
    tok = tok->next;
  }

  if (tag && !equal(tok, "{")) {
    *rest = tok;

    Type *ty = find_tag(tag);
    if (ty) {
      return ty;
    }

    ty = struct_type();
    ty->size = -1;
    push_tag_scope(tag, ty);
    return ty;
  }

  tok = skip(tok, "{");

  Type *ty = struct_type();
  struct_members(rest, tok, ty);

  if (tag) {
    // If this is a redefinition, overwrite a previous type.
    // Otherwise, register the struct type.
    for (TagScope *sc = scope->tags; sc; sc = sc->next) {
      if (equal(tag, sc->name)) {
        *sc->ty = *ty;
        return sc->ty;
      }
    }

    push_tag_scope(tag, ty);
  }
  return ty;
}

static Type *struct_decl(Token **rest, Token *tok) {
  Type *ty = struct_union_decl(rest, tok);
  ty->kind = TY_STRUCT;
  if (ty->size < 0) {
    return ty;
  }
  // Assign offsets within the struct to members.
  int offset = 0;
  for (Member *mem = ty->members; mem; mem = mem->next) {
    offset = align_to(offset, mem->align);
    mem->offset = offset;
    offset += mem->ty->size;
    if (ty->align < mem->align) {
      ty->align = mem->align;
    }
  }
  ty->size = align_to(offset, ty->align);

  return ty;
}

// union-decl = struct-union-decl
static Type *union_decl(Token **rest, Token *tok) {
  Type *ty = struct_union_decl(rest, tok);
  ty->kind = TY_UNION;
  if (ty->size < 0) {
    return ty;
  }
  // If union, we don't have to assign offsets because they
  // are already initialized to zero. We need to compute the
  // alignment and the size though.
  for (Member *mem = ty->members; mem; mem = mem->next) {
    if (ty->align < mem->align) {
      ty->align = mem->align;
    }
    if (ty->size < mem->ty->size) {
      ty->size = mem->ty->size;
    }
  }
  ty->size = align_to(ty->size, ty->align);
  return ty;
}

static Member *get_struct_member(Type *ty, Token *tok) {
  for (Member *mem = ty->members; mem; mem = mem->next)
    if (mem->name->len == tok->len &&
        !strncmp(mem->name->loc, tok->loc, tok->len))
      return mem;
  error_tok(tok, "no such member");
}

static Node *struct_ref(Node *lhs, Token *tok) {
  add_type(lhs);
  if (lhs->ty->kind != TY_STRUCT && lhs->ty->kind != TY_UNION) {
    error_tok(lhs->tok, "not a struct nor a union");
  }

  Node *node = new_unary(ND_MEMBER, lhs, tok);
  node->member = get_struct_member(lhs->ty, tok);
  return node;
}

static Node *new_inc_dec(Node *node, Token *tok, int addend) {
  add_type(node);
  return new_cast(new_add(to_assign(new_add(node, new_num(addend, tok), tok)),
                          new_num(-addend, tok), tok),
                  node->ty);
}

static Node *postfix(Token **rest, Token *tok) {

  if (equal(tok, "(") && is_typename(tok->next)) {
    // Compound literal
    Token *start = tok;
    Type *ty = typename(&tok, tok->next);
    tok = skip(tok, ")");

    if (scope->next == NULL) {
      Obj *var = new_anon_gvar(ty);
      gvar_initializer(rest, tok, var);
      return new_variable(var, start);
    }

    Obj *var = new_lvar("", ty);
    Node *lhs = lvar_initializer(rest, tok, var);
    Node *rhs = new_variable(var, tok);
    return new_binary(ND_COMMA, lhs, rhs, start);
  }

  Node *node = primary(&tok, tok);

  for (;;) {
    if (equal(tok, "(")) {
      node = funcall(&tok, tok->next, node);
      continue;
    }

    if (equal(tok, "[")) {
      Token *start = tok;
      Node *idx = expr(&tok, tok->next);
      tok = skip(tok, "]");
      node = new_unary(ND_DEREF, new_add(node, idx, start), start);
      continue;
    }
    if (equal(tok, ".")) {
      node = struct_ref(node, tok->next);
      tok = tok->next->next;
      continue;
    }
    if (equal(tok, "->")) {
      // x->y is short for (*x).y
      node = new_unary(ND_DEREF, node, tok);
      node = struct_ref(node, tok->next);
      tok = tok->next->next;
      continue;
    }
    if (equal(tok, "++")) {
      node = new_inc_dec(node, tok, 1);
      tok = tok->next;
      continue;
    }

    if (equal(tok, "--")) {
      node = new_inc_dec(node, tok, -1);
      tok = tok->next;
      continue;
    }
    *rest = tok;
    return node;
  }
}

static Node *unary(Token **rest, Token *tok) {

  if (equal(tok, "+")) {
    return cast(rest, tok->next);
  }

  if (equal(tok, "-")) {
    return new_unary(ND_NEG, cast(rest, tok->next), tok);
  }

  if (equal(tok, "&")) {
    return new_unary(ND_ADDR, cast(rest, tok->next), tok);
  }
  if (equal(tok, "!")) {
    return new_unary(ND_NOT, cast(rest, tok->next), tok);
  }
  if (equal(tok, "~")) {
    return new_unary(ND_BITNOT, cast(rest, tok->next), tok);
  }

  if (equal(tok, "*")) {
    return new_unary(ND_DEREF, cast(rest, tok->next), tok);
  }
  if (equal(tok, "++")) {
    return to_assign(new_add(unary(rest, tok->next), new_num(1, tok), tok));
  }

  if (equal(tok, "--")) {
    return to_assign(new_sub(unary(rest, tok->next), new_num(1, tok), tok));
  }
  return postfix(rest, tok);
}

static Node *funcall(Token **rest, Token *tok, Node *fn) {
  add_type(fn);

  if (fn->ty->kind != TY_FUNC &&
      (fn->ty->kind != TY_PTR || fn->ty->base->kind != TY_FUNC))
    error_tok(fn->tok, "not a function");

  Type *ty = (fn->ty->kind == TY_FUNC) ? fn->ty : fn->ty->base;
  Type *param_ty = ty->params;

  Node head = {};
  Node *cur = &head;

  while (!equal(tok, ")")) {
    if (cur != &head) {
      tok = skip(tok, ",");
    }
    Node *arg = assign(&tok, tok);
    add_type(arg);

    if (!param_ty && !ty->is_variadic) {
      error_tok(tok, "too many arguments");
    }

    if (param_ty) {
      if (param_ty->kind == TY_STRUCT || param_ty->kind == TY_UNION) {

      } else {
        arg = new_cast(arg, param_ty);
      }
      param_ty = param_ty->next;
    } else if (arg->ty->kind == TY_FLOAT) {
      arg = new_cast(arg, ty_double);
    }

    cur = cur->next = arg;
  }

  if (param_ty) {
    error_tok(tok, "too few arguments");
  }

  *rest = skip(tok, ")");

  Node *node = new_unary(ND_FUNCCAL, fn, tok);
  node->func_ty = ty;
  node->ty = ty->return_ty;
  node->args = head.next;

  if (node->ty->kind == TY_STRUCT || node->ty->kind == TY_UNION) {
    node->ret_buffer = new_lvar("", node->ty);
  }

  return node;
}

static Node *primary(Token **rest, Token *tok) {
  Token *start = tok;

  if (equal(tok, "(") && equal(tok->next, "{")) {
    Node *node = new_node(ND_STMT_EXPR, tok);
    node->body = block_stmt(&tok, tok->next->next)->body;
    *rest = skip(tok, ")");
    return node;
  }

  if (equal(tok, "(")) {

    Node *node = expr(&tok, tok->next);
    *rest = skip(tok, ")");
    return node;
  }
  if (equal(tok, "sizeof") && equal(tok->next, "(") &&
      is_typename(tok->next->next)) {
    Type *ty = typename(&tok, tok->next->next);
    *rest = skip(tok, ")");
    return new_ulong(ty->size, start);
  }

  if (equal(tok, "sizeof")) {
    Node *node = unary(rest, tok->next);
    add_type(node);
    return new_ulong(node->ty->size, tok);
  }
  if (equal(tok, "_Alignof") && equal(tok->next, "(") &&
      is_typename(tok->next->next)) {
    Type *ty = typename(&tok, tok->next->next);
    *rest = skip(tok, ")");
    return new_ulong(ty->align, tok);
  }

  if (equal(tok, "_Alignof")) {
    Node *node = unary(rest, tok->next);
    add_type(node);
    return new_ulong(node->ty->align, tok);
  }

  if (tok->kind == TK_STR) {
    Obj *var = new_string_literal(tok->str, tok->ty);
    *rest = tok->next;
    return new_variable(var, tok);
  }

  if (tok->kind == TK_IDENT) {
    VarScope *sc = find_var(tok);
    *rest = tok->next;

    if (sc) {
      if (sc->var) {
        return new_variable(sc->var, tok);
      }
      if (sc->enum_ty) {
        return new_num(sc->enum_val, tok);
      }
    }

    if (equal(tok->next, "(")) {
      error_tok(tok, "implicit declaration of a function");
    }
    error_tok(tok, "undefined variable");
  }

  if (tok->kind == TK_NUM) {
    Node *node;
    if (is_flonum(tok->ty)) {
      node = new_node(ND_NUM, tok);
      node->fval = tok->fval;
    } else {
      node = new_num(tok->val, tok);
    }
    node->ty = tok->ty;
    *rest = tok->next;
    return node;
  }

  error_tok(tok, "expected an expression");
}

static Token *parse_typedef(Token *tok, Type *basety) {
  bool first = true;

  while (!consume(&tok, tok, ";")) {
    if (!first) {
      tok = skip(tok, ",");
    }
    first = false;

    Type *ty = declarator(&tok, tok, basety);
    if (!ty->name) {
      error_tok(ty->name_pos, "typedef name omitted");
    }

    push_scope(get_ident(ty->name))->type_def = ty;
  }
  return tok;
}

static void resolve_goto_labels(void) {
  for (Node *x = gotos; x; x = x->goto_next) {
    for (Node *y = labels; y; y = y->goto_next) {
      if (!strcmp(x->label, y->label)) {
        x->unique_label = y->unique_label;
        break;
      }
    }

    if (x->unique_label == NULL)
      error_tok(x->tok->next, "use of undeclared label");
  }

  gotos = labels = NULL;
}

static Token *function(Token *tok, Type *basety, VarAttr *attr) {
  Type *ty = declarator(&tok, tok, basety);
  if (!ty->name) {
    error_tok(ty->name_pos, "function name omitted");
  }

  locals = NULL;

  Obj *fn = new_gvar(get_ident(ty->name), ty);
  fn->is_function = true;
  fn->is_definition = !consume(&tok, tok, ";");
  fn->is_static = attr->is_static;
  if (!fn->is_definition) {
    return tok;
  }
  current_fn = fn;
  enter_scope();
  create_param_lvars(ty->params);
  fn->params = locals;

  for (Obj *param = fn->params; param; param = param->next) {
    if (param->ty->kind == TY_STRUCT || param->ty->kind == TY_UNION) {
      param->align = 8;
    }
  }

  if (ty->is_variadic) {

    fn->va_area = new_lvar("__va_area__", array_of(ty_long, 8));
  }

  tok = skip(tok, "{");
  push_scope("__func__")->var =
      new_string_literal(fn->name, array_of(ty_char, strlen(fn->name) + 1));

  push_scope("__FUNCTION__")->var =
      new_string_literal(fn->name, array_of(ty_char, strlen(fn->name) + 1));

  fn->body = block_stmt(&tok, tok);
  fn->locals = locals;
  leave_scope();
  resolve_goto_labels();
  return tok;
}

static Token *global_variables(Token *tok, Type *basety, VarAttr *attr) {
  bool first = true;
  while (!consume(&tok, tok, ";")) {
    if (!first) {
      tok = skip(tok, ",");
    }
    first = false;
    Type *ty = declarator(&tok, tok, basety);
    if (!ty->name) {
      error_tok(ty->name_pos, "variable name omitted");
    }

    Obj *var = new_gvar(get_ident(ty->name), ty);
    var->is_definition = !attr->is_extern;
    var->is_static = attr->is_static;
    if (attr->align) {
      var->align = attr->align;
    }

    if (equal(tok, "=")) {
      gvar_initializer(&tok, tok->next, var);
    }
  }
  return tok;
}

static bool is_function(Token *tok) {

  if (equal(tok, ";")) {
    return false;
  }

  Type dummy = {};
  Type *ty = declarator(&tok, tok, &dummy);
  return ty->kind == TY_FUNC;
}

Obj *parse(Token *tok) {
  globals = NULL;

  while (tok->kind != TK_EOF) {
    VarAttr attr = {};
    Type *basety = declspec(&tok, tok, &attr);

    // Typedef
    if (attr.is_typedef) {
      tok = parse_typedef(tok, basety);
      continue;
    }
    if (is_function(tok)) {
      tok = function(tok, basety, &attr);
      continue;
    }

    tok = global_variables(tok, basety, &attr);
  }

  return globals;
}

typedef struct MacroParam MacroParam;
struct MacroParam {
  MacroParam *next;
  char *name;
};

typedef struct MacroArg MacroArg;
struct MacroArg {
  MacroArg *next;
  char *name;
  Token *tok;
};

typedef Token *macro_handler_fn(Token *);

typedef struct Macro Macro;
struct Macro {
  Macro *next;
  char *name;
  Token *body;
  bool deleted;
  MacroParam *params;
  bool is_variadic;
  bool is_objlike;
  macro_handler_fn *handler;
};

typedef struct CondIncl CondIncl;
struct CondIncl {
  CondIncl *next;
  enum { IN_THEN, IN_ELIF, IN_ELSE } ctx;
  Token *tok;
  bool included;
};

typedef struct Hideset Hideset;
struct Hideset {
  Hideset *next;
  char *name;
};

static Macro *macros;
static CondIncl *cond_incl;

static Token *preprocess2(Token *tok);
static Macro *find_macro(Token *tok);
static bool is_hash(Token *tok) { return tok->at_bol && equal(tok, "#"); }

static bool file_exists(char *path) {
  struct stat st;
  return !stat(path, &st);
}

static Token *copy_token(Token *tok) {
  Token *t = calloc(1, sizeof(Token));
  *t = *tok;
  t->next = NULL;
  return t;
}

static Token *new_eof(Token *tok) {
  Token *t = copy_token(tok);
  t->kind = TK_EOF;
  t->len = 0;
  return t;
}

static Token *skip_line(Token *tok) {
  if (tok->at_bol)
    return tok;
  warn_tok(tok, "extra token");
  while (tok->at_bol) {
    tok = tok->next;
  }
  return tok;
}

static Hideset *new_hideset(char *name) {
  Hideset *hs = calloc(1, sizeof(Hideset));
  hs->name = name;
  return hs;
}

static Hideset *hideset_union(Hideset *hs1, Hideset *hs2) {
  Hideset head = {};
  Hideset *cur = &head;

  for (; hs1; hs1 = hs1->next)
    cur = cur->next = new_hideset(hs1->name);
  cur->next = hs2;
  return head.next;
}

static bool hideset_contains(Hideset *hs, char *s, int len) {
  for (; hs; hs = hs->next)
    if (strlen(hs->name) == len && !strncmp(hs->name, s, len))
      return true;
  return false;
}

static Hideset *hideset_intersection(Hideset *hs1, Hideset *hs2) {
  Hideset head = {};
  Hideset *cur = &head;

  for (; hs1; hs1 = hs1->next) {
    if (hideset_contains(hs2, hs1->name, strlen(hs1->name))) {
      cur = cur->next = new_hideset(hs1->name);
    }
  }

  return head.next;
}

static Token *add_hideset(Token *tok, Hideset *hs) {
  Token head = {};
  Token *cur = &head;

  for (; tok; tok = tok->next) {
    Token *t = copy_token(tok);
    t->hideset = hideset_union(t->hideset, hs);
    cur = cur->next = t;
  }
  return head.next;
}

static Token *append(Token *tok1, Token *tok2) {
  if (tok1->kind == TK_EOF) {
    return tok2;
  }

  Token head = {};
  Token *cur = &head;

  for (; tok1->kind != TK_EOF; tok1 = tok1->next) {
    cur = cur->next = copy_token(tok1);
  }
  cur->next = tok2;
  return head.next;
}

static Token *skip_cond_incl2(Token *tok) {
  while (tok->kind != TK_EOF) {
    if (is_hash(tok) && (equal(tok->next, "if") || equal(tok->next, "ifdef") ||
                         equal(tok->next, "ifndef"))) {
      tok = skip_cond_incl2(tok->next->next);
      continue;
    }
    if (is_hash(tok) && equal(tok->next, "endif"))
      return tok->next->next;
    tok = tok->next;
  }
  return tok;
}

static Token *skip_cond_incl(Token *tok) {
  while (tok->kind != TK_EOF) {
    if (is_hash(tok) && (equal(tok->next, "if") || equal(tok->next, "ifdef") ||
                         equal(tok->next, "ifndef"))) {
      tok = skip_cond_incl2(tok->next->next);
      continue;
    }

    if (is_hash(tok) &&
        (equal(tok->next, "else") || equal(tok->next, "endif") ||
         equal(tok->next, "elif"))) {
      break;
    }
    tok = tok->next;
  }
  return tok;
}

static char *quote_string(char *str) {
  int bufsize = 3;
  for (int i = 0; str[i]; i++) {
    if (str[i] == '\\' || str[i] == '"') {
      bufsize++;
    }
    bufsize++;
  }

  char *buf = calloc(1, bufsize);
  char *p = buf;
  *p++ = '"';
  for (int i = 0; str[i]; i++) {
    if (str[i] == '\\' || str[i] == '"') {
      *p++ = '\\';
    }
    *p++ = str[i];
  }
  *p++ = '"';
  *p++ = '\0';
  return buf;
}

static Token *new_str_token(char *str, Token *tmpl) {
  char *buf = quote_string(str);
  return tokenize(new_file(tmpl->file->name, tmpl->file->file_no, buf));
}

static Token *copy_line(Token **rest, Token *tok) {
  Token head = {};
  Token *cur = &head;

  for (; !tok->at_bol; tok = tok->next) {
    cur = cur->next = copy_token(tok);
  }

  cur->next = new_eof(tok);
  *rest = tok;
  return head.next;
}

static Token *new_num_token(int val, Token *tmpl) {
  char *buf = format("%d\n", val);
  return tokenize(new_file(tmpl->file->name, tmpl->file->file_no, buf));
}

static Token *read_const_expr(Token **rest, Token *tok) {
  tok = copy_line(rest, tok);

  Token head = {};
  Token *cur = &head;

  while (tok->kind != TK_EOF) {

    if (equal(tok, "defined")) {
      Token *start = tok;
      bool has_paren = consume(&tok, tok->next, "(");

      if (tok->kind != TK_IDENT) {
        error_tok(start, "macro name must be an identifier");
      }
      Macro *m = find_macro(tok);
      tok = tok->next;

      if (has_paren) {
        tok = skip(tok, ")");
      }

      cur = cur->next = new_num_token(m ? 1 : 0, start);
      continue;
    }

    cur = cur->next = tok;
    tok = tok->next;
  }

  cur->next = tok;
  return head.next;
}

static long eval_const_expr(Token **rest, Token *tok) {
  Token *start = tok;
  Token *expr = read_const_expr(rest, tok->next);
  expr = preprocess2(expr);
  if (expr->kind == TK_EOF) {
    error_tok(start, "no expression");
  }

  for (Token *t = expr; t->kind != TK_EOF; t = t->next) {
    if (t->kind == TK_IDENT) {
      Token *next = t->next;
      *t = *new_num_token(0, t);
      t->next = next;
    }
  }

  Token *rest2;
  long val = const_expr(&rest2, expr);
  if (rest2->kind != TK_EOF) {
    error_tok(rest2, "extra token");
  }
  return val;
}

static CondIncl *push_cond_incl(Token *tok, bool included) {
  CondIncl *ci = calloc(1, sizeof(CondIncl));
  ci->next = cond_incl;
  ci->tok = tok;
  ci->ctx = IN_THEN;
  cond_incl = ci;
  ci->included = included;
  return ci;
}

static Macro *find_macro(Token *tok) {
  if (tok->kind != TK_IDENT) {
    return NULL;
  }

  for (Macro *m = macros; m; m = m->next) {
    if (strlen(m->name) == tok->len && !strncmp(m->name, tok->loc, tok->len)) {
      return m->deleted ? NULL : m;
    }
  }

  return NULL;
}

static Macro *add_macro(char *name, bool is_objlike, Token *body) {
  Macro *m = calloc(1, sizeof(Macro));
  m->next = macros;
  m->name = name;
  m->is_objlike = is_objlike;
  m->body = body;
  macros = m;
  return m;
}

static MacroParam *read_macro_params(Token **rest, Token *tok,
                                     bool *is_variadic) {
  MacroParam head = {};
  MacroParam *cur = &head;

  while (!equal(tok, ")")) {
    if (cur != &head) {
      tok = skip(tok, ",");
    }

    if (equal(tok, "...")) {
      *is_variadic = true;
      *rest = skip(tok->next, ")");
      return head.next;
    }

    if (tok->kind != TK_IDENT) {
      error_tok(tok, "expected an identifier");
    }
    MacroParam *m = calloc(1, sizeof(MacroParam));
    m->name = strndup(tok->loc, tok->len);
    cur = cur->next = m;
    tok = tok->next;
  }
  *rest = tok->next;
  return head.next;
}

static void read_macro_definition(Token **rest, Token *tok) {
  if (tok->kind != TK_IDENT)
    error_tok(tok, "macro name must be an identifier");
  char *name = strndup(tok->loc, tok->len);
  tok = tok->next;

  if (!tok->has_space && equal(tok, "(")) {
    bool is_variadic = false;
    MacroParam *params = read_macro_params(&tok, tok->next, &is_variadic);
    Macro *m = add_macro(name, false, copy_line(rest, tok));
    m->params = params;
    m->is_variadic = is_variadic;
  } else {
    add_macro(name, true, copy_line(rest, tok));
  }
}

static MacroArg *read_macro_arg_one(Token **rest, Token *tok, bool read_rest) {
  Token head = {};
  Token *cur = &head;
  int level = 0;

  for (;;) {
    if (level == 0 && equal(tok, ")")) {
      break;
    }
    if (level == 0 && !read_rest && equal(tok, ",")) {
      break;
    }
    if (tok->kind == TK_EOF) {
      error_tok(tok, "premature end of input");
    }
    if (equal(tok, "(")) {
      level++;

    } else if (equal(tok, ")")) {
      level--;
    }

    cur = cur->next = copy_token(tok);
    tok = tok->next;
  }

  cur->next = new_eof(tok);

  MacroArg *arg = calloc(1, sizeof(MacroArg));
  arg->tok = head.next;
  *rest = tok;
  return arg;
}

static char *search_include_paths(char *filename) {
  if (filename[0] == '/')
    return filename;

  for (int i = 0; i < include_paths.len; i++) {
    char *path = format("%s/%s", include_paths.data[i], filename);
    if (file_exists(path))
      return path;
  }
  return NULL;
}

static MacroArg *read_macro_args(Token **rest, Token *tok, MacroParam *params,
                                 bool is_variadic) {
  Token *start = tok;
  tok = tok->next->next;

  MacroArg head = {};
  MacroArg *cur = &head;

  MacroParam *pp = params;
  for (; pp; pp = pp->next) {
    if (cur != &head) {
      tok = skip(tok, ",");
    }
    cur = cur->next = read_macro_arg_one(&tok, tok, false);
    cur->name = pp->name;
  }
  if (is_variadic) {
    MacroArg *arg;
    if (equal(tok, ")")) {
      arg = calloc(1, sizeof(MacroArg));
      arg->tok = new_eof(tok);
    } else {
      if (pp != params) {
        tok = skip(tok, ",");
      }
      arg = read_macro_arg_one(&tok, tok, true);
    }
    arg->name = "__VA_ARGS__";
    cur = cur->next = arg;
  } else if (pp) {
    error_tok(start, "too many arguments");
  }
  skip(tok, ")");
  *rest = tok;
  return head.next;
}

static MacroArg *find_arg(MacroArg *args, Token *tok) {
  for (MacroArg *ap = args; ap; ap = ap->next)
    if (tok->len == strlen(ap->name) && !strncmp(tok->loc, ap->name, tok->len))
      return ap;
  return NULL;
}

static char *join_tokens(Token *tok, Token *end) {
  int len = 1;
  for (Token *t = tok; t != end && t->kind != TK_EOF; t = t->next) {
    if (t != tok && t->has_space) {
      len++;
    }
    len += t->len;
  }

  char *buf = calloc(1, len);

  int pos = 0;
  for (Token *t = tok; t != end && t->kind != TK_EOF; t = t->next) {
    if (t != tok && t->has_space) {
      buf[pos++] = ' ';
    }
    strncpy(buf + pos, t->loc, t->len);
    pos += t->len;
  }
  buf[pos] = '\0';
  return buf;
}

static Token *stringize(Token *hash, Token *arg) {
  char *s = join_tokens(arg, NULL);
  return new_str_token(s, hash);
}

static Token *paste(Token *lhs, Token *rhs) {
  char *buf = format("%.*s%.*s", lhs->len, lhs->loc, rhs->len, rhs->loc);
  Token *tok = tokenize(new_file(lhs->file->name, lhs->file->file_no, buf));
  if (tok->next->kind != TK_EOF) {
    error_tok(lhs, "pasting forms '%s', an invalid token", buf);
  }
  return tok;
}

static Token *subst(Token *tok, MacroArg *args) {
  Token head = {};
  Token *cur = &head;

  while (tok->kind != TK_EOF) {

    if (equal(tok, "#")) {
      MacroArg *arg = find_arg(args, tok->next);
      if (!arg) {
        error_tok(tok->next, "'#' is not followed by a macro parameter");
      }
      cur = cur->next = stringize(tok, arg->tok);
      tok = tok->next->next;
      continue;
    }

    if (equal(tok, "##")) {
      if (cur == &head) {
        error_tok(tok, "'##' cannot appear at start of macro expansion");
      }

      if (tok->next->kind == TK_EOF) {
        error_tok(tok, "'##' cannot appear at end of macro expansion");
      }

      MacroArg *arg = find_arg(args, tok->next);
      if (arg) {
        if (arg->tok->kind != TK_EOF) {
          *cur = *paste(cur, arg->tok);
          for (Token *t = arg->tok->next; t->kind != TK_EOF; t = t->next)
            cur = cur->next = copy_token(t);
        }
        tok = tok->next->next;
        continue;
      }

      *cur = *paste(cur, tok->next);
      tok = tok->next->next;
      continue;
    }

    MacroArg *arg = find_arg(args, tok);

    if (arg && equal(tok->next, "##")) {
      Token *rhs = tok->next->next;

      if (arg->tok->kind == TK_EOF) {
        MacroArg *arg2 = find_arg(args, rhs);
        if (arg2) {
          for (Token *t = arg2->tok; t->kind != TK_EOF; t = t->next)
            cur = cur->next = copy_token(t);
        } else {
          cur = cur->next = copy_token(rhs);
        }
        tok = rhs->next;
        continue;
      }

      for (Token *t = arg->tok; t->kind != TK_EOF; t = t->next)
        cur = cur->next = copy_token(t);
      tok = tok->next;
      continue;
    }

    if (arg) {
      Token *t = preprocess2(arg->tok);
      t->at_bol = tok->at_bol;
      t->has_space = tok->has_space;
      for (; t->kind != TK_EOF; t = t->next)
        cur = cur->next = copy_token(t);
      tok = tok->next;
      continue;
    }

    cur = cur->next = copy_token(tok);
    tok = tok->next;
    continue;
  }

  cur->next = tok;
  return head.next;
}

static bool expand_macro(Token **rest, Token *tok) {

  if (hideset_contains(tok->hideset, tok->loc, tok->len))
    return false;

  Macro *m = find_macro(tok);
  if (!m) {
    return false;
  }

  if (m->handler) {
    *rest = m->handler(tok);
    (*rest)->next = tok->next;
    return true;
  }

  if (m->is_objlike) {
    Hideset *hs = hideset_union(tok->hideset, new_hideset(m->name));
    Token *body = add_hideset(m->body, hs);
    for (Token *t = body; t->kind != TK_EOF; t = t->next) {
      t->origin = tok;
    }
    *rest = append(body, tok->next);
    (*rest)->at_bol = tok->at_bol;
    (*rest)->has_space = tok->has_space;
    return true;
  }

  if (!equal(tok->next, "("))
    return false;

  Token *macro_token = tok;
  MacroArg *args = read_macro_args(&tok, tok, m->params, m->is_variadic);
  Token *rparen = tok;

  Hideset *hs = hideset_intersection(macro_token->hideset, rparen->hideset);
  hs = hideset_union(hs, new_hideset(m->name));

  Token *body = subst(m->body, args);
  body = add_hideset(body, hs);
  for (Token *t = body; t->kind != TK_EOF; t = t->next) {
    t->origin = macro_token;
  }
  *rest = append(body, tok->next);
  (*rest)->at_bol = macro_token->at_bol;
  (*rest)->has_space = macro_token->has_space;
  return true;
}

static char *read_include_filename(Token **rest, Token *tok, bool *is_dquote) {
  if (tok->kind == TK_STR) {

    *is_dquote = true;
    *rest = skip_line(tok->next);
    return strndup(tok->loc + 1, tok->len - 2);
  }

  if (equal(tok, "<")) {

    Token *start = tok;

    for (; !equal(tok, ">"); tok = tok->next)
      if (tok->at_bol || tok->kind == TK_EOF)
        error_tok(tok, "expected '>'");

    *is_dquote = false;
    *rest = skip_line(tok->next);
    return join_tokens(start->next, tok);
  }

  if (tok->kind == TK_IDENT) {
    Token *tok2 = preprocess2(copy_line(rest, tok));
    return read_include_filename(&tok2, tok2, is_dquote);
  }

  error_tok(tok, "expected a filename");
}

static Token *include_file(Token *tok, char *path, Token *filename_tok) {
  Token *tok2 = tokenize_file(path);
  if (!tok2) {
    error_tok(filename_tok, "%s: cannot open file: %s", path, strerror(errno));
  }
  return append(tok2, tok);
}

static Token *preprocess2(Token *tok) {
  Token head = {};
  Token *cur = &head;

  while (tok->kind != TK_EOF) {
    if (expand_macro(&tok, tok)) {
      continue;
    }
    if (!is_hash(tok)) {
      cur = cur->next = tok;
      tok = tok->next;
      continue;
    }
    Token *start = tok;
    tok = tok->next;

    if (equal(tok, "include")) {
      bool is_dquote;
      char *filename = read_include_filename(&tok, tok->next, &is_dquote);

      if (filename[0] != '/' && is_dquote) {
        char *path =
            format("%s/%s", dirname(strdup(start->file->name)), filename);
        if (file_exists(path)) {
          tok = include_file(tok, path, start->next->next);
          continue;
        }
      }

      char *path = search_include_paths(filename);
      tok = include_file(tok, path ? path : filename, start->next->next);

      continue;
    }

    if (equal(tok, "define")) {
      read_macro_definition(&tok, tok->next);
      continue;
    }

    if (equal(tok, "undef")) {
      tok = tok->next;
      if (tok->kind != TK_IDENT) {
        error_tok(tok, "macro name must be an identifier");
      }
      char *name = strndup(tok->loc, tok->len);
      tok = skip_line(tok->next);

      Macro *m = add_macro(name, true, NULL);
      m->deleted = true;
      continue;
    }

    if (equal(tok, "if")) {
      long val = eval_const_expr(&tok, tok);
      push_cond_incl(start, val);
      if (!val) {
        tok = skip_cond_incl(tok);
      }
      continue;
    }

    if (equal(tok, "ifdef")) {
      bool defined = find_macro(tok->next);
      push_cond_incl(tok, defined);
      tok = skip_line(tok->next->next);
      if (!defined)
        tok = skip_cond_incl(tok);
      continue;
    }

    if (equal(tok, "ifndef")) {
      bool defined = find_macro(tok->next);
      push_cond_incl(tok, !defined);
      tok = skip_line(tok->next->next);
      if (defined)
        tok = skip_cond_incl(tok);
      continue;
    }

    if (equal(tok, "else")) {
      if (!cond_incl || cond_incl->ctx == IN_ELSE) {
        error_tok(start, "stray #else");
      }
      cond_incl->ctx = IN_ELSE;
      tok = skip_line(tok->next);

      if (cond_incl->included) {
        tok = skip_cond_incl(tok);
      }
      continue;
    }

    if (equal(tok, "elif")) {
      if (!cond_incl || cond_incl->ctx == IN_ELSE)
        error_tok(start, "stray #elif");
      cond_incl->ctx = IN_ELIF;

      if (!cond_incl->included && eval_const_expr(&tok, tok)) {
        cond_incl->included = true;

      } else {
        tok = skip_cond_incl(tok);
      }
      continue;
    }

    if (equal(tok, "endif")) {
      if (!cond_incl) {
        error_tok(start, "stray #endif");
      }
      cond_incl = cond_incl->next;
      tok = skip_line(tok->next);
      continue;
    }

    if (equal(tok, "error")) {
      error_tok(tok, "error");
    }

    if (tok->at_bol) {
      continue;
    }

    error_tok(tok, "invalid preprocessor directive");
  }

  cur->next = tok;
  return head.next;
}

static void define_macro(char *name, char *buf) {
  Token *tok = tokenize(new_file("<built-in>", 1, buf));
  add_macro(name, true, tok);
}

static Macro *add_builtin(char *name, macro_handler_fn *fn) {
  Macro *m = add_macro(name, true, NULL);
  m->handler = fn;
  return m;
}

static Token *file_macro(Token *tmpl) {
  while (tmpl->origin) {
    tmpl = tmpl->origin;
  }
  return new_str_token(tmpl->file->name, tmpl);
}

static Token *line_macro(Token *tmpl) {
  while (tmpl->origin) {
    tmpl = tmpl->origin;
  }
  return new_num_token(tmpl->line_no, tmpl);
}

static void init_macros(void) {
  // Define predefined macros
  define_macro("_LP64", "1");
  define_macro("__C99_MACRO_WITH_VA_ARGS", "1");
  define_macro("__ELF__", "1");
  define_macro("__LP64__", "1");
  define_macro("__SIZEOF_DOUBLE__", "8");
  define_macro("__SIZEOF_FLOAT__", "4");
  define_macro("__SIZEOF_INT__", "4");
  define_macro("__SIZEOF_LONG_DOUBLE__", "8");
  define_macro("__SIZEOF_LONG_LONG__", "8");
  define_macro("__SIZEOF_LONG__", "8");
  define_macro("__SIZEOF_POINTER__", "8");
  define_macro("__SIZEOF_PTRDIFF_T__", "8");
  define_macro("__SIZEOF_SHORT__", "2");
  define_macro("__SIZEOF_SIZE_T__", "8");
  define_macro("__SIZE_TYPE__", "unsigned long");
  define_macro("__STDC_HOSTED__", "1");
  define_macro("__STDC_NO_ATOMICS__", "1");
  define_macro("__STDC_NO_COMPLEX__", "1");
  define_macro("__STDC_NO_THREADS__", "1");
  define_macro("__STDC_NO_VLA__", "1");
  define_macro("__STDC_VERSION__", "201112L");
  define_macro("__STDC__", "1");
  define_macro("__USER_LABEL_PREFIX__", "");
  define_macro("__alignof__", "_Alignof");
  define_macro("__riscv", "1");
  define_macro("__riscv_xlen", "64");
  define_macro("__riscv64__", "1");
  define_macro("__chibicc__", "1");
  define_macro("__const__", "const");
  define_macro("__gnu_linux__", "1");
  define_macro("__inline__", "inline");
  define_macro("__linux", "1");
  define_macro("__linux__", "1");
  define_macro("__signed__", "signed");
  define_macro("__typeof__", "typeof");
  define_macro("__unix", "1");
  define_macro("__unix__", "1");
  define_macro("__volatile__", "volatile");
  define_macro("linux", "1");
  define_macro("unix", "1");

  add_builtin("__FILE__", file_macro);
  add_builtin("__LINE__", line_macro);
}

static void join_adjacent_string_literals(Token *tok1) {
  while (tok1->kind != TK_EOF) {
    if (tok1->kind != TK_STR || tok1->next->kind != TK_STR) {
      tok1 = tok1->next;
      continue;
    }

    Token *tok2 = tok1->next;
    while (tok2->kind == TK_STR)
      tok2 = tok2->next;

    int len = tok1->ty->array_len;
    for (Token *t = tok1->next; t != tok2; t = t->next)
      len = len + t->ty->array_len - 1;

    char *buf = calloc(tok1->ty->base->size, len);

    int i = 0;
    for (Token *t = tok1; t != tok2; t = t->next) {
      memcpy(buf + i, t->str, t->ty->size);
      i = i + t->ty->size - t->ty->base->size;
    }

    *tok1 = *copy_token(tok1);
    tok1->ty = array_of(tok1->ty->base, len);
    tok1->str = buf;
    tok1->next = tok2;
    tok1 = tok2;
  }
}

Token *preprocess(Token *tok) {
  init_macros();

  tok = preprocess2(tok);
  if (cond_incl)
    error_tok(cond_incl->tok, "unterminated conditional directive");
  convert_keywords(tok);
  join_adjacent_string_literals(tok);
  return tok;
}

void strarray_push(StringArray *arr, char *s) {
  if (!arr->data) {
    arr->data = calloc(8, sizeof(char *));
    arr->capacity = 8;
  }

  if (arr->capacity == arr->len) {
    arr->data = realloc(arr->data, sizeof(char *) * arr->capacity * 2);
    arr->capacity *= 2;
    for (int i = arr->len; i < arr->capacity; i++)
      arr->data[i] = NULL;
  }

  arr->data[arr->len++] = s;
}

char *format(char *fmt, ...) {
  char *buf;
  size_t buflen;
  FILE *out = open_memstream(&buf, &buflen);

  va_list ap;
  va_start(ap, fmt);
  vfprintf(out, fmt, ap);
  va_end(ap);
  fclose(out);
  return buf;
}

static bool at_bol;
static bool has_space;

static File *current_file;

static File **input_files;

static Token *new_token(TokenKind kind, char *start, char *end);

void error(char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n");
  exit(-1);
}

void verror_at(char *filename, char *input, int line_no, char *loc, char *fmt,
               va_list ap) {

  char *line = loc;
  while (input < line && line[-1] != '\n') {
    line--;
  }

  char *end = loc;
  while (*end && *end != '\n') {
    end++;
  }

  int indent = fprintf(stderr, "%s:%d:", filename, line_no);
  fprintf(stderr, "%.*s\n", (int)(end - line), line);

  int pos = loc - line + indent;

  fprintf(stderr, "%*s", pos, "");
  fprintf(stderr, "^ ");
  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n");
}

void error_at(char *loc, char *fmt, ...) {
  int line_no = 1;
  for (char *p = current_file->contents; p < loc; p++) {
    if (*p == '\n') {
      line_no++;
    }
  }

  va_list ap;
  va_start(ap, fmt);
  verror_at(current_file->name, current_file->contents, line_no, loc, fmt, ap);
  exit(-1);
}

void error_tok(Token *tok, char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  verror_at(tok->file->name, tok->file->contents, tok->line_no, tok->loc, fmt,
            ap);
  exit(-1);
}

void warn_tok(Token *tok, char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  verror_at(tok->file->name, tok->file->contents, tok->line_no, tok->loc, fmt,
            ap);
  va_end(ap);
}

bool equal(Token *tok, char *op) {
  return memcmp(tok->loc, op, tok->len) == 0 && op[tok->len] == '\0';
}

bool consume(Token **rest, Token *tok, char *str) {
  if (equal(tok, str)) {
    *rest = tok->next;
    return true;
  }
  *rest = tok;
  return false;
}

Token *skip(Token *tok, char *s) {
  if (!equal(tok, s)) {
    error_tok(tok, "expected '%s'", s);
  }
  return tok->next;
}

/*
static int get_number(Token *tok) {
  if (tok->kind != TK_NUM) {
    error_tok(tok, "expected a number");
  }
  return tok->val;
}
*/

static bool startwith(char *p, char *q) {
  return strncmp(p, q, strlen(q)) == 0;
}

static bool is_ident1(char c) {
  return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || c == '_';
}

static bool is_ident2(char c) { return is_ident1(c) || ('0' <= c && c <= '9'); }

static int read_punct(char *p) {
  static char *kw[] = {"<<=", ">>=", "...", "==", "!=", "<=", ">=", "->",
                       "+=",  "-=",  "*=",  "/=", "++", "--", "%=", "&=",
                       "|=",  "^=",  "&&",  "||", "<<", ">>", "##"};

  for (int i = 0; i < sizeof(kw) / sizeof(*kw); i++) {
    if (startwith(p, kw[i])) {
      return strlen(kw[i]);
    }
  }

  return ispunct(*p) ? 1 : 0;
}

static bool is_keyword(Token *tok) {
  static char *kw[] = {
      "return",       "if",        "else",     "for",      "while",
      "int",          "sizeof",    "char",     "struct",   "union",
      "short",        "long",      "void",     "typedef",  "_Bool",
      "enum",         "static",    "goto",     "break",    "continue",
      "switch",       "case",      "default",  "extern",   "_Alignof",
      "_Alignas",     "do",        "signed",   "unsigned", "const",
      "volatile",     "auto",      "register", "restrict", "__restrict",
      "__restrict__", "_Noreturn", "float",    "double",
  };

  for (int i = 0; i < sizeof(kw) / sizeof(*kw); i++) {
    if (equal(tok, kw[i])) {
      return true;
    }
  }
  return false;
}

static Token *read_int_literal(char *start) {
  char *p = start;

  int base = 10;
  if (!strncasecmp(p, "0x", 2) && isxdigit(p[2])) {
    p += 2;
    base = 16;
  } else if (!strncasecmp(p, "0b", 2) && (p[2] == '0' || p[2] == '1')) {
    p += 2;
    base = 2;
  } else if (*p == '0') {
    base = 8;
  }

  int64_t val = strtoul(p, &p, base);

  // Read U, L or LL suffixes.
  bool l = false;
  bool u = false;

  if (startwith(p, "LLU") || startwith(p, "LLu") || startwith(p, "llU") ||
      startwith(p, "llu") || startwith(p, "ULL") || startwith(p, "Ull") ||
      startwith(p, "uLL") || startwith(p, "ull")) {
    p += 3;
    l = u = true;
  } else if (!strncasecmp(p, "lu", 2) || !strncasecmp(p, "ul", 2)) {
    p += 2;
    l = u = true;
  } else if (startwith(p, "LL") || startwith(p, "ll")) {
    p += 2;
    l = true;
  } else if (*p == 'L' || *p == 'l') {
    p++;
    l = true;
  } else if (*p == 'U' || *p == 'u') {
    p++;
    u = true;
  }

  Type *ty;
  if (base == 10) {
    if (l && u)
      ty = ty_ulong;
    else if (l)
      ty = ty_long;
    else if (u)
      ty = (val >> 32) ? ty_ulong : ty_uint;
    else
      ty = (val >> 31) ? ty_long : ty_int;
  } else {
    if (l && u)
      ty = ty_ulong;
    else if (l)
      ty = (val >> 63) ? ty_ulong : ty_long;
    else if (u)
      ty = (val >> 32) ? ty_ulong : ty_uint;
    else if (val >> 63)
      ty = ty_ulong;
    else if (val >> 32)
      ty = ty_long;
    else if (val >> 31)
      ty = ty_uint;
    else
      ty = ty_int;
  }

  Token *tok = new_token(TK_NUM, start, p);
  tok->val = val;
  tok->ty = ty;
  return tok;
}

static Token *read_number(char *start) {

  Token *tok = read_int_literal(start);
  if (!strchr(".eEfF", start[tok->len])) {
    return tok;
  }

  char *end;
  double val = strtod(start, &end);

  Type *ty;
  if (*end == 'f' || *end == 'F') {
    ty = ty_float;
    end++;
  } else if (*end == 'l' || *end == 'L') {
    ty = ty_double;
    end++;
  } else {
    ty = ty_double;
  }

  tok = new_token(TK_NUM, start, end);
  tok->fval = val;
  tok->ty = ty;
  return tok;
}

void convert_keywords(Token *tok) {
  for (Token *t = tok; t->kind != TK_EOF; t = t->next) {
    if (is_keyword(t)) {
      t->kind = TK_KEYWORD;
    }
  }
}

static Token *new_token(TokenKind kind, char *start, char *end) {
  Token *tok = calloc(1, sizeof(Token));
  if (tok == NULL) {
    error("creating token faild");
  }
  tok->kind = kind;
  tok->loc = start;
  tok->len = end - start;
  tok->at_bol = at_bol;
  tok->file = current_file;
  tok->has_space = has_space;
  at_bol = has_space = false;
  return tok;
}

static int from_hex(char c) {
  if ('0' <= c && c <= '9')
    return c - '0';
  if ('a' <= c && c <= 'f')
    return c - 'a' + 10;
  return c - 'A' + 10;
}

static int read_escaped_char(char **new_pos, char *p) {

  if ('0' <= *p && *p <= '7') {
    // Read an octal number.
    int c = *p++ - '0';
    if ('0' <= *p && *p <= '7') {
      c = (c << 3) + (*p++ - '0');
      if ('0' <= *p && *p <= '7')
        c = (c << 3) + (*p++ - '0');
    }
    *new_pos = p;
    return c;
  }

  if (*p == 'x') {
    // Read a hexadecimal number.
    p++;
    if (!isxdigit(*p))
      error_at(p, "invalid hex escape sequence");

    int c = 0;
    for (; isxdigit(*p); p++)
      c = (c << 4) + from_hex(*p);
    *new_pos = p;
    return c;
  }

  *new_pos = p + 1;

  switch (*p) {
  case 'a':
    return '\a';
  case 'b':
    return '\b';
  case 't':
    return '\t';
  case 'n':
    return '\n';
  case 'v':
    return '\v';
  case 'f':
    return '\f';
  case 'r':
    return '\r';
  case 'e':
    return 27;
  default:
    return *p;
  }
}

static char *string_literal_end(char *p) {
  char *start = p;
  for (; *p != '"'; p++) {
    if (*p == '\n' || *p == '\0') {
      error_at(start, "unclosed string literal");
    }
    if (*p == '\\') {
      p++;
    }
  }
  return p;
}

static Token *read_char_literal(char *start, char *quote) {
  char *p = quote + 1;
  if (*p == '\0') {
    error_at(start, "unclosed char literal");
  }

  char c;
  if (*p == '\\') {
    c = read_escaped_char(&p, p + 1);

  } else {
    c = *p++;
  }

  char *end = strchr(p, '\'');
  if (!end) {
    error_at(p, "unclosed char literal");
  }

  Token *tok = new_token(TK_NUM, start, end + 1);
  tok->val = c;
  tok->ty = ty_int;
  return tok;
}

static Token *read_string_literal(char *start) {
  char *end = string_literal_end(start + 1);
  char *buf = calloc(1, end - start);
  int len = 0;
  for (char *p = start + 1; p < end;) {
    if (*p == '\\') {
      buf[len++] = read_escaped_char(&p, p + 1);
    } else {
      buf[len++] = *p++;
    }
  }
  Token *tok = new_token(TK_STR, start, end + 1);
  tok->ty = array_of(ty_char, len + 1);
  tok->str = buf;
  return tok;
}

// Initialize line info for all tokens.
static void add_line_numbers(Token *tok) {
  char *p = current_file->contents;
  int n = 1;

  do {
    if (p == tok->loc) {
      tok->line_no = n;
      tok = tok->next;
    }
    if (*p == '\n')
      n++;
  } while (*p++);
}

// tokenize 函数将表达式解析为多个token。token的存储结构为链表。
Token *tokenize(File *file) {
  current_file = file;
  Token head = {};
  Token *cur = &head;

  at_bol = true;
  has_space = false;

  char *p = file->contents;
  while (*p) {

    if (startwith(p, "//")) {
      p += 2;
      while (*p != '\n') {
        p++;
      }
      has_space = true;
      continue;
    }

    // Skip block comments.
    if (startwith(p, "/*")) {
      char *q = strstr(p + 2, "*/");
      if (!q) {
        error_at(p, "unclosed block comment");
      }
      p = q + 2;
      has_space = true;
      continue;
    }

    // Skip newline.
    if (*p == '\n') {
      p++;
      at_bol = true;
      has_space = false;
      continue;
    }

    if (isspace(*p)) {
      p++;
      has_space = true;
      continue;
    }

    if (*p == '"') {
      cur = cur->next = read_string_literal(p);
      p += cur->len;
      continue;
    }

    if (*p == '\'') {
      cur = cur->next = read_char_literal(p, p);
      p += cur->len;
      continue;
    }

    if (startwith(p, "L'")) {
      cur = cur->next = read_char_literal(p, p + 1);
      p = cur->loc + cur->len;
      continue;
    }

    if (isdigit(*p) || (*p == '.' && isdigit(p[1]))) {
      cur = cur->next = read_number(p);
      p += cur->len;
      continue;
    }

    if (is_ident1(*p)) {
      char *start = p;
      do {
        p++;
      } while (is_ident2(*p));
      cur = cur->next = new_token(TK_IDENT, start, p);
      continue;
    }

    int punck_len = read_punct(p);
    if (punck_len) {
      cur = cur->next = new_token(TK_PUNCT, p, p + punck_len);
      p += cur->len;
      continue;
    }

    error_at(p, "invalid token");
  }

  cur = cur->next = new_token(TK_EOF, p, p);
  add_line_numbers(head.next);
  return head.next;
}

static char *read_file(char *path) {
  FILE *fp;

  if (strcmp(path, "-") == 0) {
    fp = stdin;
  } else {
    fp = fopen(path, "r");
    if (!fp) {
      return NULL;
    }
  }

  char *buf;
  size_t buflen;
  FILE *out = open_memstream(&buf, &buflen);

  for (;;) {
    char buf2[4096];
    int n = fread(buf2, 1, sizeof(buf2), fp);
    if (n == 0) {
      break;
    }
    fwrite(buf2, 1, n, out);
  }

  if (fp != stdin) {
    fclose(fp);
  }

  fflush(out);
  if (buflen == 0 || buf[buflen - 1] != '\n') {
    fputc('\n', out);
  }
  fputc('\0', out);
  fclose(out);
  return buf;
}

File **get_input_files(void) { return input_files; }

File *new_file(char *name, int file_no, char *contents) {
  File *file = calloc(1, sizeof(File));
  file->name = name;
  file->file_no = file_no;
  file->contents = contents;
  return file;
}

static void remove_backslash_newline(char *p) {
  int i = 0, j = 0;

  int n = 0;

  while (p[i]) {
    if (p[i] == '\\' && p[i + 1] == '\n') {
      i += 2;
      n++;
    } else if (p[i] == '\n') {
      p[j++] = p[i++];
      for (; n > 0; n--) {
        p[j++] = '\n';
      }
    } else {
      p[j++] = p[i++];
    }
  }

  for (; n > 0; n--) {
    p[j++] = '\n';
  }
  p[j] = '\0';
}

Token *tokenize_file(char *path) {

  char *p = read_file(path);
  if (!p) {
    return NULL;
  }
  remove_backslash_newline(p);
  static int file_no;
  File *file = new_file(path, file_no + 1, p);

  input_files = realloc(input_files, sizeof(char *) * (file_no + 2));
  input_files[file_no] = file;
  input_files[file_no + 1] = NULL;
  file_no++;

  return tokenize(file);
}

Type *ty_void = &(Type){TY_VOID, 1, 1};
Type *ty_bool = &(Type){TY_BOOL, 1, 1};
Type *ty_int = &(Type){TY_INT, 4, 4};
Type *ty_long = &(Type){TY_LONG, 8, 8};
Type *ty_short = &(Type){TY_SHORT, 2, 2};
Type *ty_char = &(Type){TY_CHAR, 1, 1};

Type *ty_uchar = &(Type){TY_CHAR, 1, 1, true};
Type *ty_ushort = &(Type){TY_SHORT, 2, 2, true};
Type *ty_uint = &(Type){TY_INT, 4, 4, true};
Type *ty_ulong = &(Type){TY_LONG, 8, 8, true};

Type *ty_float = &(Type){TY_FLOAT, 4, 4};
Type *ty_double = &(Type){TY_DOUBLE, 8, 8};

static Type *new_type(TypeKind kind, int size, int align) {
  Type *ty = calloc(1, sizeof(Type));
  ty->kind = kind;
  ty->size = size;
  ty->align = align;
  return ty;
}

bool is_flonum(Type *ty) {
  return ty->kind == TY_FLOAT || ty->kind == TY_DOUBLE;
}

bool is_numeric(Type *ty) { return is_integer(ty) || is_flonum(ty); }

Type *struct_type(void) { return new_type(TY_STRUCT, 0, 1); }

bool is_integer(Type *ty) {
  TypeKind k = ty->kind;
  return k == TY_CHAR || k == TY_SHORT || k == TY_INT || k == TY_LONG ||
         k == TY_BOOL || k == TY_ENUM;
}

Type *enum_type(void) { return new_type(TY_ENUM, 4, 4); }

Type *copy_type(Type *ty) {
  Type *ret = calloc(1, sizeof(Type));
  *ret = *ty;
  return ret;
}

Type *pointer_to(Type *base) {
  Type *ty = new_type(TY_PTR, 8, 8);
  ty->base = base;
  ty->is_unsigned = true;
  return ty;
}

Type *func_type(Type *return_ty) {
  Type *ty = calloc(1, sizeof(Type));
  ty->kind = TY_FUNC;
  ty->return_ty = return_ty;
  return ty;
}

Type *array_of(Type *base, int len) {
  Type *ty = new_type(TY_ARRAY, base->size * len, base->align);
  ty->base = base;
  ty->array_len = len;
  return ty;
}

static Type *get_common_type(Type *ty1, Type *ty2) {
  if (ty1->base) {
    return pointer_to(ty1->base);
  }
  if (ty1->kind == TY_DOUBLE || ty2->kind == TY_DOUBLE) {
    return ty_double;
  }
  if (ty1->kind == TY_FLOAT || ty2->kind == TY_FLOAT) {
    return ty_float;
  }

  if (ty1->size < 4) {
    ty1 = ty_int;
  }

  if (ty2->size < 4) {
    ty2 = ty_int;
  }

  if (ty1->size != ty2->size) {
    return (ty1->size < ty2->size) ? ty2 : ty1;
  }

  if (ty2->is_unsigned) {
    return ty2;
  }

  return ty1;
}

static void usual_arith_conv(Node **lhs, Node **rhs) {
  Type *ty;
  ty = get_common_type((*lhs)->ty, (*rhs)->ty);
  *lhs = new_cast(*lhs, ty);
  *rhs = new_cast(*rhs, ty);
}

void add_type(Node *node) {

  if (!node || node->ty) {
    return;
  }

  add_type(node->lhs);
  add_type(node->rhs);
  add_type(node->cond);
  add_type(node->then);
  add_type(node->els);
  add_type(node->init);
  add_type(node->inc);

  for (Node *n = node->body; n; n = n->next) {
    add_type(n);
  }
  for (Node *n = node->args; n; n = n->next) {
    add_type(n);
  }

  switch (node->kind) {
  case ND_ADD:
  case ND_SUB:
  case ND_MUL:
  case ND_DIV:
  case ND_MOD:
  case ND_BITAND:
  case ND_BITOR:
  case ND_BITXOR:
    usual_arith_conv(&node->lhs, &node->rhs);
    node->ty = node->lhs->ty;
    return;
  case ND_ASSIGN:
    if (node->lhs->ty->kind == TY_ARRAY) {
      error_tok(node->lhs->tok, "not an lvalue");
    }
    if (node->lhs->ty->kind != TY_STRUCT) {
      node->rhs = new_cast(node->rhs, node->lhs->ty);
    }
    node->ty = node->lhs->ty;
    return;
  case ND_NEG: {
    Type *ty = get_common_type(ty_int, node->rhs->ty);
    node->rhs = new_cast(node->rhs, ty);
    node->ty = ty;
    return;
  }

  case ND_EQ:
  case ND_NE:
  case ND_LT:
  case ND_LE:
    usual_arith_conv(&node->lhs, &node->rhs);
    node->ty = ty_int;
    return;
  case ND_SHL:
  case ND_SHR:
    node->ty = node->lhs->ty;
    return;
  case ND_COND:
    if (node->then->ty->kind == TY_VOID || node->els->ty->kind == TY_VOID) {
      node->ty = ty_void;
    } else {
      usual_arith_conv(&node->then, &node->els);
      node->ty = node->then->ty;
    }
    return;
  case ND_BITNOT:
    node->ty = node->rhs->ty;
    return;
  case ND_NOT:
  case ND_LOGOR:
  case ND_LOGAND:
    node->ty = ty_int;
    return;
  case ND_NUM:
    node->ty = ty_int;
    return;
  case ND_FUNCCAL:
    node->ty = ty_long;
    return;
  case ND_VAR:
    node->ty = node->var->ty;
    return;
  case ND_MEMBER:
    node->ty = node->member->ty;
    return;
  case ND_COMMA:
    node->ty = node->rhs->ty;
    return;
  case ND_ADDR: {
    Type *ty = node->rhs->ty;
    if (ty->kind == TY_ARRAY) {
      node->ty = pointer_to(ty->base);
    } else {
      node->ty = pointer_to(ty);
    }
    return;
  }

  case ND_DEREF:
    if (!node->rhs->ty->base) {
      error_tok(node->tok, "invalid pointer dereference");
    }
    if (node->rhs->ty->base->kind == TY_VOID) {
      error_tok(node->tok, "dereferencing a void pointer");
    }

    node->ty = node->rhs->ty->base;
    return;
  case ND_STMT_EXPR:
    if (node->body) {
      Node *stmt = node->body;
      while (stmt->next) {
        stmt = stmt->next;
      }
      if (stmt->kind == ND_EXPR_STMT) {
        node->ty = stmt->rhs->ty;
        return;
      }
    }
    error_tok(node->tok, "statement expression return void is not supported");
    return;
  }
}
