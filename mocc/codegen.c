#include "mocc.h"

// ターゲットの ISA は RISCV64GC ということにする
// https://riscv.org/wp-content/uploads/2015/01/riscv-calling.pdf
// https://inst.eecs.berkeley.edu/~cs61c/fa17/img/riscvcard.pdf
// int のサイズは 4 bytes
// void * のサイズは 8 bytes

// これ addi 4 にしたら死んだ
static void codegen_pop_t0() {
  printf("  # pop t0 {{{\n");
  printf("  ld t0, 0(sp)\n");
  printf("  addi sp, sp, 8\n");
  printf("  # }}}\n");
}

static void codegen_pop_t1() {
  printf("  # pop t1 {{{\n");
  printf("  ld t1, 0(sp)\n");
  printf("  addi sp, sp, 8\n");
  printf("  # }}}\n");
}

static void codegen_pop_discard() {
  printf("  # pop\n");
  printf("  addi sp, sp, 8\n");
}

static void codegen_push_t0() {
  printf("  # push t0 {{{\n");
  printf("  sd t0, -8(sp)\n");
  printf("  addi sp, sp, -8\n");
  printf("  # }}}\n");
}

Node *curr_func;

static int func_locals_offset(Node *func) {
  assert(func->kind == ND_FUNCDECL);

  if (func->locals->len == 0) {
    return 0;
  }

  Var *last = func->locals->data[func->locals->len - 1];
  return last->offset;
}

static int curr_varargs_index() {
  if (curr_func->args == NULL)
    return -1;

  for (int i = 0; i < curr_func->args->len; i++) {
    Node *node = curr_func->args->data[i];
    if (node->kind == ND_VARARGS) {
      return i;
    }
  }

  return -1;
}

static void codegen_prologue() {
  printf("  # Prologue\n");
  printf("  sd ra, -8(sp)\n");  // ra を保存
  printf("  sd fp, -16(sp)\n"); // fp を保存
  printf("  addi fp, sp, -16\n");
  // スタックポインタを移動。codegen_epilogue で戻す関数を抜けるまで動かない
  printf("  addi sp, sp, -%d\n",
         func_locals_offset(curr_func) + 16 /* for saved ra, fp */);

  // varargs_index != -1 なら fp をさらに 64 下げる
  // そして a1-a7 を fp+8 から fp+56 にコピーする
  // 仕様的に a0 に対応する named arg は必ず存在するので置く必要なし
  // FIXME: fp のほうが sp より下にあるので push したら消えていきそうな……
  int varargs_index = curr_varargs_index();
  if (varargs_index != -1) {
    printf("  # prepare for varargs\n");
    printf("  addi fp, fp, -64\n");
    for (int i = 1; i <= 7; i++) {
      printf("  sd a%d, %d(fp)\n", i, i * 8);
    }
    printf("  addi sp, sp, -64\n");
  }

  printf("\n");
}

// a0 に返り値を設定してから呼ぶこと
static void codegen_epilogue() {
  printf("\n");
  printf("  # Epilogue\n");
  int varargs_index = curr_varargs_index();
  if (varargs_index != -1) {
    printf("  addi sp, sp, 64\n");
  }
  // sp を戻す
  printf("  addi sp, sp, %d\n", func_locals_offset(curr_func) + 16);
  // fp も戻す
  // ここ lw にしたらおかしくなった
  printf("  ld fp, -16(sp)\n");
  // ra も戻す
  printf("  ld ra, -8(sp)\n");

  printf("  ret\n");
}

static void codegen_expr(Node *node);

// Var である node のアドレスを push する
// または、ポインタの deref を計算してアドレスを push する
static void codegen_push_lvalue(Node *node) {
  if (node->kind == ND_LVAR) {
    printf("  # (lvalue) address for '%.*s'\n", node->lvar->len,
           node->lvar->name);
    printf("  addi t0, fp, -%d\n", node->lvar->offset);
    codegen_push_t0();
    return;
  }

  // *y -> y の値をアドレスとして push する
  // y が配列のときは *y[0] みたいな感じであつかう
  // **z -> (*z) の値をアドレスとして push する
  if (node->kind == ND_DEREF) {
    printf("  # (lvalue) deref address of (%s)\n",
           type_to_string(typeof_node(node->lhs)));
    codegen_expr(node->lhs);
    return;
  }

  if (node->kind == ND_GVAR) {
    printf("  # (lvalue) address for global variable '%.*s'\n", node->gvar->len,
           node->gvar->name);
    printf("  lui t0, %%hi(%.*s)\n", node->gvar->len, node->gvar->name);
    printf("  addi t0, t0, %%lo(%.*s)\n", node->gvar->len, node->gvar->name);
    codegen_push_t0();
    return;
  }

  if (node->kind == ND_MEMBER) {
    Type *type = typeof_node(node->lhs);
    Var *member = find_var(type->members, node->ident->str, node->ident->len);
    if (member == NULL) {
      error("member not found: %.*s on (%s)", node->ident->len,
            node->ident->str, type_to_string(type));
    }

    codegen_push_lvalue(node->lhs);
    codegen_pop_t0();
    printf("  # (lvalue) address for member '%.*s'\n", node->ident->len,
           node->ident->str);
    printf("  addi t0, t0, %d\n", member->offset);
    codegen_push_t0();
    return;
  }

  error_at(node->source_pos, "not an lvalue: %s", node_kind_to_str(node->kind));
}

static void codegen_builtin_va_start(Node *ap);

// かならず何かしらの値をひとつだけ push した状態で返ってくること
static void codegen_expr(Node *node) {
  switch (node->kind) {
  case ND_NUM:
    printf("  # constant '%d'\n", node->val);
    printf("  li t0, %d\n", node->val);

    // push
    codegen_push_t0();
    return;

  case ND_LT:
    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    codegen_pop_t1();
    codegen_pop_t0();

    printf("  slt t0, t0, t1\n");

    codegen_push_t0();
    return;

  case ND_GE:
    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    codegen_pop_t1();
    codegen_pop_t0();

    printf("  slt t0, t0, t1\n");
    printf("  xori t0, t0, 1\n");

    codegen_push_t0();
    return;

  case ND_ADD:
  case ND_SUB: {
    int lptr_size = 0;
    int rptr_size = 0;

    // TODO: ltype しかみてないけど rtype もみたいよね
    Type *ltype = typeof_node(node->lhs);
    if (ltype->ty == TY_PTR || ltype->ty == TY_ARRAY) {
      lptr_size = sizeof_type(ltype->base);
    }

    Type *rtype = typeof_node(node->rhs);
    if (rtype->ty == TY_PTR || rtype->ty == TY_ARRAY) {
      rptr_size = sizeof_type(rtype->base);
    }

    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    printf("  # pointer arithmetic: ltype=(%s), rtype=(%s)\n",
           type_to_string(ltype), type_to_string(rtype));

    if (lptr_size > 1) {
      if (rptr_size > 1) {
        if (node->kind != ND_SUB) {
          error("must not happen (bug in parser)");
        }
        if (lptr_size != rptr_size) {
          error("pointer arithmetic with different pointer types");
        }
        codegen_pop_t1();
        codegen_pop_t0();

        // ptr (t0) - ptr (t1)
        // 減算したうえで base の size で割る
        printf("  sub t0, t0, t1\n");
        printf("  # do pointer arithmetic\n");
        printf("  li t3, %d\n", lptr_size);
        printf("  div t0, t0, t3\n");
        codegen_push_t0();
        return;
      } else {
        // ptr (t0) + int (t1)
        // int のほうを size 倍する
        codegen_pop_t1();
        printf("  # do pointer arithmetic\n");
        printf("  li t3, %d\n", lptr_size);
        printf("  mul t1, t1, t3\n");
      }
    } else {
      // こっちは普通の加減算
      codegen_pop_t1();
    }

    codegen_pop_t0();

    if (node->kind == ND_ADD) {
      printf("  add t0, t0, t1\n");
    } else if (node->kind == ND_SUB) {
      printf("  sub t0, t0, t1\n");
    } else {
      assert(0);
    }

    codegen_push_t0();
    return;
  }

  case ND_MUL:
  case ND_DIV:
    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    codegen_pop_t1();
    codegen_pop_t0();

    if (node->kind == ND_MUL) {
      printf("  mul t0, t0, t1\n");
    } else if (node->kind == ND_DIV) {
      printf("  div t0, t0, t1\n");
    } else {
      assert(0);
    }

    codegen_push_t0();
    return;

  case ND_EQ:
  case ND_NE:
    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    codegen_pop_t1();
    codegen_pop_t0();

    printf("  xor t0, t0, t1\n");
    if (node->kind == ND_EQ) {
      printf("  seqz t0, t0\n");
    } else {
      printf("  snez t0, t0\n");
    }

    codegen_push_t0();
    return;

  case ND_LOGOR:
    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    codegen_pop_t1();
    codegen_pop_t0();

    printf("  or t0, t0, t1\n");
    printf("  snez t0, t0\n");

    codegen_push_t0();
    return;

  case ND_LOGAND:
    codegen_expr(node->lhs); // -> t0
    codegen_expr(node->rhs); // -> t1

    codegen_pop_t1();
    codegen_pop_t0();

    printf("  snez t0, t0\n");
    printf("  snez t1, t1\n");
    printf("  and t0, t0, t1\n");

    codegen_push_t0();
    return;

  case ND_LVAR:
    if (node->lvar->type->ty == TY_ARRAY) {
      // 配列の場合は先頭要素へのポインタに変換されるのでアドレスを push
      // sizeof, & の場合だけ例外だがそれはそちら側で処理されてる。はず。
      // ここ add でも通ってたけどいいのか？？
      printf("  # lvar (array) '%.*s'\n", node->lvar->len, node->lvar->name);
      printf("  addi t0, fp, -%d\n", node->lvar->offset);
    } else {
      printf("  # lvar '%.*s'\n", node->lvar->len, node->lvar->name);

      int size = sizeof_type(node->lvar->type);

      switch (size) {
      case 1:
        printf("  lb t0, -%d(fp)\n", node->lvar->offset);
        break;
      case 4:
        printf("  lw t0, -%d(fp)\n", node->lvar->offset);
        break;
      case 8:
        printf("  ld t0, -%d(fp)\n", node->lvar->offset);
        break;
      default:
        error("unknown size of lvar: (%s)",
              type_to_string(typeof_node(node->lhs)));
      }
    }
    codegen_push_t0();
    return;

  case ND_ASSIGN:
    printf("  # ND_ASSIGN {{{\n");
    // -> t0
    codegen_push_lvalue(node->lhs);
    // -> t1
    codegen_expr(node->rhs);

    codegen_pop_t1();
    codegen_pop_t0();

    printf("  # assign to variable '%.*s'\n", node->lhs->source_len,
           node->lhs->source_pos);

    switch (sizeof_type(typeof_node(node->lhs))) {
    case 1:
      printf("  sb t1, 0(t0)\n");
      break;
    case 4:
      printf("  sw t1, 0(t0)\n");
      break;
    case 8:
      printf("  sd t1, 0(t0)\n");
      break;
    default:
      error("unknown size of variable: (%s)",
            type_to_string(typeof_node(node->lhs)));
    }

    printf("  mv t0, t1\n");
    codegen_push_t0();

    printf("  # }}} ND_ASSIGN\n");
    return;

  case ND_COND: {
    // -> t0
    codegen_expr(node->lhs);
    codegen_pop_t0();

    printf("  beqz t0, .Lelse%03d\n", node->label_index);

    printf("  # if {\n");
    codegen_expr(node->rhs);
    printf("  j .Lend%03d\n", node->label_index);
    printf("  # if }\n");

    printf("  # else {\n");
    printf(".Lelse%03d:\n", node->label_index);
    codegen_expr(node->node3);
    printf("  # else }\n");

    printf(".Lend%03d:\n", node->label_index);
    return;
  }

  case ND_CALL: {
    // FIXME: __builtin_va_start に #define してからよびたい
    if (node->ident->len == 8 &&
        strncmp("va_start", node->ident->str, node->ident->len) == 0) {
      // 最初の引数 ap だけ渡す。一般化できるといいけどとりあえず。
      codegen_builtin_va_start(node->nodes->data[0]);
      codegen_push_t0();
      return;
    }

    int arg_count = 0;
    for (int i = 0; i < node->nodes->len; i++) {
      codegen_expr(node->nodes->data[i]);
      arg_count++;
    }

    while (arg_count > 0) {
      codegen_pop_t0();
      printf("  mv a%d, t0\n", --arg_count);
    }

    // これいるか？？ sp はどういう状態で引き渡せばいいんだ
    printf("  addi sp, sp, -8\n");
    printf("  call %.*s\n", node->ident->len, node->ident->str);
    printf("  addi sp, sp, 8\n");

    // 結果は a0 に入っているよな
    printf("  # push return value (a0) {{{\n");
    printf("  sd a0, -8(sp)\n");
    printf("  addi sp, sp, -8\n");
    printf("  # }}}\n");
    return;
  }

  case ND_DEREF: {
    codegen_expr(node->lhs);

    if (typeof_node(node)->ty == TY_ARRAY) {
      // deref した結果が配列の場合はさらにポインタとしてあつかうので
      // push されたアドレスをそのまま返す
      // ややこしすぎでは。なんか別の箇所にまとめられそう
      return;
    }

    Type *type = typeof_node(node->lhs);
    int size = sizeof_type(type->base);

    codegen_pop_t0();

    printf("  # deref to get (%s)\n", type_to_string(type->base));
    switch (size) {
    case 1:
      printf("  lb t0, 0(t0)\n");
      break;
    case 4:
      printf("  lw t0, 0(t0)\n");
      break;
    case 8:
      printf("  ld t0, 0(t0)\n");
      break;

    default:
      error("unknown size of deref: (%s)",
            type_to_string(typeof_node(node->lhs)));
    }
    codegen_push_t0();

    return;
  }

  case ND_ADDR:
    codegen_push_lvalue(node->lhs);

    return;

  case ND_GVAR:
    if (node->gvar->type->ty == TY_ARRAY) {
      // lvar と同様なんだけどこれこんなにあちこちでやるもんなのか？
      printf("  lui t0, %%hi(%.*s)\n", node->gvar->len, node->gvar->name);
      printf("  addi t0, t0, %%lo(%.*s)\n", node->gvar->len, node->gvar->name);
    } else {
      printf("  lui t0, %%hi(%.*s)\n", node->gvar->len, node->gvar->name);
      printf("  lw t0, %%lo(%.*s)(t0)\n", node->gvar->len, node->gvar->name);
    }
    codegen_push_t0();

    return;

  case ND_STRING:
    printf("  lui t0, %%hi(.LC%d)\n", node->val);
    printf("  addi t0, t0, %%lo(.LC%d)\n", node->val);
    codegen_push_t0();

    return;

  case ND_MEMBER: {
    Type *type = typeof_node(node->lhs);
    if (type->ty != TY_STRUCT) {
      error("not a struct: (%s)", type_to_string(type));
    }

    Var *member = find_var(type->members, node->ident->str, node->ident->len);
    if (member == NULL) {
      error("member not found: %.*s on (%s)", node->ident->len,
            node->ident->str, type_to_string(type));
    }

    codegen_push_lvalue(node->lhs);
    codegen_pop_t0();
    printf("  # address for member '%.*s'\n", member->len, member->name);

    // TODO: ND_LVAR とだいぶ似てる
    if (member->type->ty == TY_ARRAY) {
      printf("  addi t0, t0, %d\n", member->offset);
    } else {
      int size = sizeof_type(member->type);

      switch (size) {
      case 1:
        printf("  lb t0, %d(t0)\n", member->offset);
        break;
      case 4:
        printf("  lw t0, %d(t0)\n", member->offset);
        break;
      case 8:
        printf("  ld t0, %d(t0)\n", member->offset);
        break;

      default:
        error("unknown size of member: (%s)", type_to_string(member->type));
      }
    }

    codegen_push_t0();

    return;
  }

  case ND_NOT:
    codegen_expr(node->lhs);
    codegen_pop_t0();
    printf("  seqz t0, t0\n");
    codegen_push_t0();

    return;

  case ND_POSTINC:
    codegen_push_lvalue(node->lhs);
    codegen_pop_t1();

    // FIXME ND_LVAR といっしょ！
    switch (sizeof_type(typeof_node(node->lhs))) {
    case 1:
      printf("  lb t0, 0(t1)\n");
      break;
    case 4:
      printf("  lw t0, 0(t1)\n");
      break;
    case 8:
      printf("  ld t0, 0(t1)\n");
      break;
    default:
      error("unknown size of lvar: (%s)",
            type_to_string(typeof_node(node->lhs)));
    }

    printf("  addi t2, t0, %d\n", node->val);

    switch (sizeof_type(typeof_node(node->lhs))) {
    case 1:
      printf("  sb t2, 0(t1)\n");
      break;
    case 4:
      printf("  sw t2, 0(t1)\n");
      break;
    case 8:
      printf("  sd t2, 0(t1)\n");
      break;
    default:
      error("unknown size of lvar: (%s)",
            type_to_string(typeof_node(node->lhs)));
    }

    codegen_push_t0();

    return;

  case ND_COMMA:
    codegen_expr(node->lhs);
    codegen_pop_discard();
    codegen_expr(node->rhs);
    return;

  case ND_RETURN:
  case ND_IF:
  case ND_SWITCH:
  case ND_WHILE:
  case ND_FOR:
  case ND_BLOCK:
  case ND_FUNCDECL:
  case ND_VARDECL:
  case ND_GVARDECL:
  case ND_BREAK:
  case ND_CONTINUE:
  case ND_CASE:
  case ND_DEFAULT:
  case ND_VARARGS:
    break;

  case ND_NOP:
    return;
  }

  error_at(node->source_pos, "not an expression: %s",
           node_kind_to_str(node->kind));
}

static void codegen_preamble() {
  printf("  .section .rodata\n");
  for (int i = 0; i < strings->len; i++) {
    String *str = strings->data[i];
    printf(".LC%d:\n", i);
    printf("  .string \"%.*s\"\n", str->len, str->str);
  }

  printf("\n");
  printf("  .global main\n");
}

static void codegen_builtin_va_start(Node *ap) {
  int varargs_index = curr_varargs_index();
  if (varargs_index == -1) {
    error("va_start must be called in a function with varargs");
  }

  printf("  # va_start\n");
  printf("  addi t0, fp, %d\n", varargs_index * 8);
  codegen_push_t0();
  codegen_push_lvalue(ap);
  codegen_pop_t0();
  codegen_pop_t1();
  printf("  sd t1, 0(t0)\n");
}

static void codegen_init_struct_var(Node *node_var, Type *type, List *inits) {
  int i;
  for (i = 0; i < inits->len; i++) {
    Var *member = type->members->data[i];

    Node *node = inits->data[i];

    Node *mem = new_node(ND_MEMBER, node_var, NULL);
    mem->ident = calloc(1, sizeof(Token));
    mem->ident->str = member->name;
    mem->ident->len = member->len;

    Node *assign = new_node(ND_ASSIGN, mem, node);
    codegen_expr(assign);
    codegen_pop_discard();
  }

  for (; i < type->members->len; i++) {
    Var *member = type->members->data[i];

    // ここで初期化されていないメンバーは 0 で初期化する
    Node *node_mem = new_node(ND_MEMBER, node_var, NULL);
    node_mem->ident = calloc(1, sizeof(Token));
    node_mem->ident->str = member->name;
    node_mem->ident->len = member->len;

    Node *assign = new_node(ND_ASSIGN, node_mem, new_node(ND_NUM, NULL, NULL));
    codegen_expr(assign);
    codegen_pop_discard();
  }
}

static bool codegen_node(Node *node) {
  switch (node->kind) {
  case ND_NUM:
  case ND_LT:
  case ND_GE:
  case ND_ADD:
  case ND_SUB:
  case ND_MUL:
  case ND_DIV:
  case ND_EQ:
  case ND_NE:
  case ND_LOGOR:
  case ND_LOGAND:
  case ND_LVAR:
  case ND_ASSIGN:
  case ND_COND:
  case ND_CALL:
  case ND_DEREF:
  case ND_ADDR:
  case ND_GVAR:
  case ND_STRING:
  case ND_MEMBER:
  case ND_NOT:
  case ND_POSTINC:
  case ND_COMMA:
    codegen_expr(node);
    return true;

  case ND_RETURN:
    if (node->lhs) {
      codegen_expr(node->lhs);
      codegen_pop_t0();
      printf("  mv a0, t0\n");
    }

    codegen_epilogue();

    return false;

  case ND_IF: {
    printf("  # ND_IF {{{\n");

    codegen_expr(node->lhs);
    codegen_pop_t0();

    printf("  beqz t0, .Lelse%03d\n", node->label_index);

    printf("  # if {\n");
    if (codegen_node(node->rhs))
      codegen_pop_discard();
    printf("  j .Lend%03d\n", node->label_index);
    printf("  # if }\n");

    printf("  # else {\n");
    printf(".Lelse%03d:\n", node->label_index);
    if (node->node3) {
      if (codegen_node(node->node3))
        codegen_pop_discard();
    }
    printf("  # else }\n");

    printf(".Lend%03d:\n", node->label_index);

    printf("  # ND_IF }}}\n");
    printf("\n");

    return false;
  }

  case ND_SWITCH: {
    codegen_expr(node->lhs);
    codegen_pop_t0();

    // FIXME 直下が ND_BLOCK である前提だしネストしてたらうまくいかない
    Node *node_default = NULL;
    for (int i = 0; i < node->rhs->nodes->len; i++) {
      Node *stmt = node->rhs->nodes->data[i];
      if (stmt->kind == ND_CASE) {
        printf("  li t1, %d\n", stmt->val);
        printf("  beq t0, t1, .Lcase%03d\n", stmt->label_index);
      } else if (stmt->kind == ND_DEFAULT) {
        node_default = stmt;
      }
    }
    if (node_default) {
      printf("  j .Ldefault%03d\n", node_default->label_index);
    }

    printf("  j .Lbreak%03d\n", node->label_index);
    codegen_node(node->rhs);
    printf(".Lbreak%03d:\n", node->label_index);

    return false;
  }

  case ND_WHILE: {
    printf(".Lbegin%03d:\n", node->label_index);
    printf(".Lcontinue%03d:\n", node->label_index);

    codegen_expr(node->lhs);
    codegen_pop_t0();

    printf("  beqz t0, .Lend%03d\n", node->label_index);

    if (codegen_node(node->rhs))
      codegen_pop_discard();

    printf("  j .Lbegin%03d\n", node->label_index);

    printf(".Lbreak%03d:\n", node->label_index);
    printf(".Lend%03d:\n", node->label_index);

    return false;
  }

  case ND_FOR: {
    if (node->lhs) {
      if (codegen_node(node->lhs))
        codegen_pop_discard();
    }

    printf(".Lbegin%03d:\n", node->label_index);

    if (node->rhs) {
      codegen_expr(node->rhs);
      codegen_pop_t0();
      printf("  beqz t0, .Lend%03d\n", node->label_index);
    }

    if (node->node4) {
      if (codegen_node(node->node4)) // { ... }
        codegen_pop_discard();
    }

    printf(".Lcontinue%03d:\n", node->label_index);

    // i++ みたいなとこ
    if (node->node3) {
      codegen_expr(node->node3);
      codegen_pop_discard();
    }

    printf("j .Lbegin%03d\n", node->label_index);

    printf(".Lbreak%03d:\n", node->label_index);
    printf(".Lend%03d:\n", node->label_index);

    return false;
  }

  case ND_BLOCK:
    // scope の対応がいるかもね
    for (int i = 0; i < node->nodes->len; i++) {
      if (codegen_node(node->nodes->data[i]))
        codegen_pop_discard();
    }

    return false;

  case ND_FUNCDECL:
    printf("\n");
    printf("  .global %.*s\n", node->ident->len, node->ident->str);
    printf("  .text\n");
    printf("%.*s:\n", node->ident->len, node->ident->str);

    curr_func = node;
    codegen_prologue();

    for (int i = 0; i < node->args->len; i++) {
      Node *arg = node->args->data[i];
      if (arg->kind == ND_VARARGS) {
        // これは vararg なのでオワリ
        printf("  # vararg\n");
        break;
      }

      // a0 を lvar xyz に代入するみたいなことをする
      printf("  # assign to argument '%.*s'\n", arg->source_len,
             arg->source_pos);
      printf("  sd a%d, -%d(fp)\n", i, arg->lvar->offset);
    }

    for (int i = 0; i < node->nodes->len; i++) {
      Node *stmt = node->nodes->data[i];
      if (codegen_node(stmt))
        codegen_pop_t0();
    }

    printf("  mv a0, zero\n");
    codegen_epilogue();
    curr_func = NULL;

    return false;

  case ND_VARDECL: {
    printf("  # vardecl '%.*s' offset=%d size=%d\n", node->lvar->len,
           node->lvar->name, node->lvar->offset, sizeof_type(node->lvar->type));

    if (node->rhs) {
      Node *lvar = calloc(1, sizeof(Node));
      lvar->kind = ND_LVAR;
      lvar->lvar = node->lvar;
      Node *assign = new_node(ND_ASSIGN, lvar, node->rhs);
      codegen_expr(assign);
      codegen_pop_discard();
    } else if (node->nodes) {
      if (node->lvar->type->ty == TY_STRUCT) {
        Node *lvar = calloc(1, sizeof(Node));
        lvar->kind = ND_LVAR;
        lvar->lvar = node->lvar;
        codegen_init_struct_var(lvar, node->lvar->type, node->nodes);
      } else {
        error("not implemented for type (%s)", type_to_string(node->type));
      }
    }

    return false;
  }

  case ND_GVARDECL: {
    if (node->gvar->is_extern) {
      printf("  # extern %.*s\n", node->gvar->len, node->gvar->name);
      return false;
    }

    printf("\n");
    printf("  .global %.*s\n", node->gvar->len, node->gvar->name);
    printf("  .data\n");
    printf("%.*s:\n", node->gvar->len, node->gvar->name);
    if (node->rhs != NULL) {
      // TODO: 構造体はまだ
      // TODO: ポインタの演算はまだ
      // TODO: long だったら quad とからしい。dword?
      printf("  .word %d\n", node->rhs->val);
    } else if (node->nodes != NULL) {
      if (node->gvar->type->ty == TY_ARRAY) {
        int len = node->gvar->type->array_size;
        for (int i = 0; i < node->nodes->len; i++) {
          Node *init = node->nodes->data[i];
          printf("  .word %d\n", init->val);
          if (--len < 0) {
            error("too many elements in array initializer");
          }
        }
        while (len--) {
          printf("  .zero %d\n", sizeof_type(node->gvar->type->base));
        }
      } else if (node->gvar->type->ty == TY_STRUCT) {
        int i;
        for (i = 0; i < node->nodes->len; i++) {
          Var *member = node->gvar->type->members->data[i];
          Node *init = node->nodes->data[i];
          switch (sizeof_type(member->type)) {
          case 1:
            printf("  .byte %d\n", init->val);
            break;
          case 4:
            printf("  .word %d\n", init->val);
            break;
          case 8:
            printf("  .dword %d\n", init->val);
            break;
          default:
            error("unsupported member type (%s)", type_to_string(member->type));
          }
        }
        for (; i < node->gvar->type->members->len; i++) {
          Var *member = node->gvar->type->members->data[i];
          switch (sizeof_type(member->type)) {
          case 1:
            printf("  .byte 0\n");
            break;
          case 4:
            printf("  .word 0\n");
            break;
          case 8:
            printf("  .dword 0\n");
            break;
          default:
            error("unsupported member type (%s)", type_to_string(member->type));
          }
        }
      } else {
        error("global initializer not supported for type (%s)",
              type_to_string(node->gvar->type));
      }
    } else {
      printf("  .zero %d\n", sizeof_type(node->gvar->type));
    }
    return false;
  }

  case ND_BREAK:
    printf("  j .Lbreak%03d\n", node->label_index);
    return false;

  case ND_CONTINUE:
    printf("  j .Lcontinue%03d\n", node->label_index);
    return false;

  case ND_CASE:
    printf("  # case %d\n", node->val);
    printf(".Lcase%03d:\n", node->label_index);
    return false;

  case ND_DEFAULT:
    printf("  # case default\n");
    printf(".Ldefault%03d:\n", node->label_index);
    return false;

  case ND_VARARGS:
  case ND_NOP:
    return false;
  }

  error_at(node->source_pos, "codegen not implemented: %s",
           node_kind_to_str(node->kind));
}

void codegen() {
  codegen_preamble();

  for (int i = 0; i < code->len; i++) {
    if (codegen_node(code->data[i]))
      codegen_pop_t0();
  }
}
