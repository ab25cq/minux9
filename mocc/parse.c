#include "mocc.h"

// https://port70.net/~nsz/c/c11/n1570.html

int label_index = 0;

Type int_type = {TY_INT};
Type char_type = {TY_CHAR};
Type void_type = {TY_VOID};

char *node_kind_to_str(NodeKind kind) {
  switch (kind) {
#define NODE_KIND(k)                                                           \
  case k:                                                                      \
    return #k;
#include "node_kind.def"
#undef NODE_KIND
  }

  return "(unknown)";
}

Node *new_node(NodeKind kind, Node *lhs, Node *rhs) {
  Node *node = calloc(1, sizeof(Node));
  node->kind = kind;
  node->lhs = lhs;
  node->rhs = rhs;
  node->source_pos = prev_token->str;
  return node;
}

static Node *new_node_num(int val) {
  Node *node = new_node(ND_NUM, NULL, NULL);
  node->val = val;
  return node;
}

///// Parser /////

// Syntax:
//    program     = (funcdecl | vardecl)*
//    funcdecl    = type ident "(" type expr ("," type expr)* ")"
//                  "{" stmt* "}"
//    type        = ("int" | "char") "*"*
//                | ident
//                | "struct" ident ("{" (type ident ";")* "}")?
//                | "enum" ident ("{" ident ("," ident)* "}")?
//                | "typedef" type
//                  // これだけセマンティクスが違うのにちゅうい。 typedef type A
//                  // は変数 A の宣言ではない
//    stmt        = expr ";"
//                | "return" expr ";"
//                | "if" "(" expr ")" stmt ("else" stmt)?
//                | "switch" stmt
//                | "while" "(" expr ")" stmt
//                | "for" "(" (vardecl | expr)? ";" expr? ";" expr? ")" stmt
//                | "{" stmt* "}"
//                | "break" ";"
//                | vardecl ";"
//                | "case" expr ":" stmt
//    vardecl     = type ident ("[" num "]")? ("=" assign | initializer)?
//    expr        = assign ("," assign)*
//    assign      = cond
//                | unary (("=" | "+=" | "-=") assign)?
//    cond        = or ("?" expr ":" cond)?
//    or          = equality ("||" equality)*
//    equality    = relational ("==" relational | "!=" relational)*
//    relational  = add ("<" add | "<=" add | ">" add | ">=" add)*
//    add         = mul ("+" mul | "-" mul)*
//    mul         = unary ("*" unary | "/" unary)*
//    unary       = ("+" | "-")? postfix
//                | "*" unary
//                | "&" unary
//                | ("++" | "--") unary
//                | "sizeof" unary
//                | postfix
//    postfix     = primary ("[" expr "]")*
//                | primary ("." ident | "->" ident)*
//                | primary ("++" | "--")
//    primary     = num | ident ("(" (expr ("," expr)*)? ")")? | "(" expr ")"
//                | string
//    ident	      = /[a-z][a-z0-9]*/
//    num         = [0-9]+
//    string      = /"[^"]*"/

Node *parse_expr();
static Node *parse_assign();

Scope *curr_scope;
int scope_id = 0;

static Var *find_var_in_curr_scope(char *name, int len) {
  for (Scope *scope = curr_scope; scope; scope = scope->parent) {
    for (int i = 0; i < scope->node->locals->len; i++) {
      Var *var = scope->node->locals->data[i];
      if (var->scope_id == scope->id && var->len == len &&
          strncmp(var->name, name, len) == 0) {
        return var;
      }
    }
  }

  return NULL;
}

static int scope_offset(Scope *scope) {
  if (scope->node->locals->len == 0) {
    return 0;
  }

  Var *var = scope->node->locals->data[scope->node->locals->len - 1];
  return var->offset;
}

static void scope_create(Node *node) {
  node->locals = list_new();

  Scope *scope = calloc(1, sizeof(Scope));
  scope->node = node;
  scope->id = ++scope_id;
  curr_scope = scope;
}

static void scope_push(Node *node) {
  assert(curr_scope != NULL);
  assert(node->locals == NULL);

  node->locals = list_new();

  Scope *scope = calloc(1, sizeof(Scope));
  scope->node = node;
  scope->parent = curr_scope;
  scope->id = ++scope_id;
  curr_scope = scope;
}

static void scope_pop() {
  Scope *parent = curr_scope->parent;
  assert(parent != NULL);

  // このスコープに定義された変数を親スコープにマージする
  int offset = scope_offset(parent);
  for (int i = 0; i < curr_scope->node->locals->len; i++) {
    Var *var = curr_scope->node->locals->data[i];
    var->offset += offset;
  }

  list_concat(parent->node->locals, curr_scope->node->locals);

  curr_scope = parent;
}

static Scope *scope_find(NodeKind kind) {
  assert(curr_scope != NULL);
  for (Scope *scope = curr_scope; scope; scope = scope->parent) {
    if (scope->node->kind == kind) {
      return scope;
    }
  }

  return NULL;
}

static Node *parse_primary() {
  if (token_consume_punct("(")) {
    Node *node = parse_expr();
    token_expect_punct(")");
    return node;
  }

  // parse_ident 相当
  Token *tok = token_consume(TK_IDENT);
  if (tok != NULL) {
    if (token_consume_punct("(")) {
      // 関数呼び出しだった

      Node *node = calloc(1, sizeof(Node));
      node->kind = ND_CALL;
      node->ident = tok;
      node->source_pos = tok->str;
      node->source_len = tok->len;

      __debug_self("ND_CALL");
      Func *func = NULL;
      for (int i = 0; i < funcs->len; i++) {
        Func *f = funcs->data[i];
        if (f->name_len == tok->len &&
            strncmp(f->name, tok->str, tok->len) == 0) {
          func = f;
          break;
        }
      }

      if (func == NULL) {
        if (tok->len == 8 && strncmp(tok->str, "va_start", 8) == 0) {
          node->type = &void_type;
        } else {
          error("function is not defined: %.*s", tok->len, tok->str);
        }
      } else {
        node->type = func->type;
      }

      List *args = list_new();
      if (token_consume_punct(")")) {
        // 引数ナシ
      } else {
        for (;;) {
          list_append(args, parse_assign());
          if (token_consume_punct(")")) {
            break;
          }
          token_expect_punct(",");
        }
      }
      node->nodes = args;

      return node;
    }

    Var *lvar = find_var_in_curr_scope(tok->str, tok->len);
    if (lvar) {
      Node *node = calloc(1, sizeof(Node));
      node->kind = ND_LVAR;
      node->lvar = lvar;
      node->source_pos = tok->str;
      node->source_len = tok->len;

      // ここで生の配列を見つけた場合は &a を返す、というコードを書いていたが
      // int a[100]; のとき a は int へのポインタ int * だが
      // &a は int[100] へのポインタ int (*)[100] になり
      // 別物なのでやめた

      return node;
    }

    Var *gvar = find_var(globals, tok->str, tok->len);
    if (gvar) {
      Node *node = calloc(1, sizeof(Node));
      node->kind = ND_GVAR;
      node->gvar = gvar;
      node->source_pos = tok->str;
      node->source_len = tok->len;
      return node;
    }

    Var *cvar = find_var(constants, tok->str, tok->len);
    if (cvar) {
      return cvar->const_val;
    }

    error("variable not found: '%.*s'", tok->len, tok->str);
  }

  Token *tok_str = token_consume(TK_STRING);
  if (tok_str) {
    String *str = calloc(1, sizeof(String));
    str->str = tok_str->str;
    str->len = tok_str->len;

    int n = list_append(strings, str);

    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_STRING;
    node->val = n;
    node->source_pos = tok_str->str;
    node->source_len = tok_str->len;
    return node;
  }

  tok = token_consume(TK_NUM);
  if (tok != NULL) {
    return new_node_num(tok->val);
  }

  error("expected primary: () or ident or string or number");
}

static Type *new_type_ptr_to(Type *base) {
  Type *type = calloc(1, sizeof(Type));
  type->ty = TY_PTR;
  type->base = base;
  return type;
}

static Type *new_type_array_of(Type *base, int size) {
  Type *type = calloc(1, sizeof(Type));
  type->ty = TY_ARRAY;
  type->base = base;
  type->array_size = size;
  return type;
}

// TODO: TY_TYPEDEF が来た場合は base にする処理をすべてのパスに
Type *typeof_node(Node *node) {
  switch (node->kind) {
  case ND_NUM:
    return &int_type;

  case ND_ADD:
  case ND_SUB: {
    Type *ltype = typeof_node(node->lhs);
    Type *rtype = typeof_node(node->rhs);

    if (ltype->ty == TY_ARRAY)
      ltype = new_type_ptr_to(ltype->base);
    if (rtype->ty == TY_ARRAY)
      rtype = new_type_ptr_to(rtype->base);

    if (ltype->ty == TY_INT && rtype->ty == TY_INT) {
      return &int_type;
    }
    if (ltype->ty == TY_PTR && rtype->ty == TY_INT) {
      return ltype;
    }
    if (ltype->ty == TY_INT && rtype->ty == TY_PTR) {
      return rtype;
    }
    if (ltype->ty == TY_PTR && rtype->ty == TY_PTR &&
        ltype->base->ty == rtype->base->ty && node->kind == ND_SUB) {
      // https://port70.net/~nsz/c/c11/n1570.html#6.5.6p9
      // ポインタ同士の減算
      return &int_type;
    }

    error_at(node->source_pos,
             "invalid or unimplemented pointer arithmetic: %s (%s) and (%s)",
             node_kind_to_str(node->kind), type_to_string(ltype),
             type_to_string(rtype));
  }

  case ND_MUL:
  case ND_DIV:
    return &int_type;

  case ND_CALL:
    return node->type;

  case ND_LVAR: {
    Type *type = node->lvar->type;
    if (type->ty == TY_TYPEDEF) {
      return type->base;
    }
    return type;
  }

  case ND_DEREF: {
    Type *type = typeof_node(node->lhs);
    if (type->ty == TY_PTR || type->ty == TY_ARRAY) {
      return type->base;
    }

    error_at(node->source_pos,
             "invalid dereference (or not implemented) for type (%s)",
             type_to_string(type));
  }

  case ND_ADDR:
    return new_type_ptr_to(typeof_node(node->lhs));

  case ND_GVAR: {
    Type *type = node->gvar->type;
    if (type->ty == TY_TYPEDEF) {
      return type->base;
    }
    return type;
  }

  case ND_MEMBER: {
    Type *stype = typeof_node(node->lhs);
    if (stype->ty != TY_STRUCT) {
      error_at(node->source_pos, "not a struct");
    }

    Var *member = find_var(stype->members, node->ident->str, node->ident->len);
    Type *type = member->type;
    if (type->ty == TY_TYPEDEF) {
      return type->base;
    }
    return type;
  }

  case ND_POSTINC:
    return typeof_node(node->lhs);

  default:
    error_at(node->source_pos, "typeof_node: unimplemented: %s",
             node_kind_to_str(node->kind));
  }
}

int sizeof_type(Type *type) {
  switch (type->ty) {
  case TY_CHAR:
    return 1;
  case TY_INT:
  case TY_ENUM:
    return 4;
  case TY_PTR:
    return 8;
  case TY_ARRAY:
    return type->array_size * sizeof_type(type->base);
  case TY_STRUCT: {
    if (type->members == NULL) {
      error("sizeof: empty struct");
    }
    if (type->members->len == 0) {
      return 0;
    }
    Var *last = type->members->data[type->members->len - 1];
    return last->offset + sizeof_type(last->type);
  }
  case TY_TYPEDEF:
    return sizeof_type(type->base);
  case TY_VOID:
    // なんでここ1なんだろうなー
    return 1;
  }
}

static Node *parse_postfix() {
  Node *node = parse_primary();

  for (;;) {
    if (token_consume_punct("[")) {
      Node *expr = parse_expr();
      token_expect_punct("]");
      node = new_node(ND_DEREF, new_node(ND_ADD, node, expr), NULL);
      continue;
    }

    if (token_consume_punct(".")) {
      Token *ident = token_consume(TK_IDENT);
      if (ident == NULL) {
        error("expected identifier after '.'");
      }
      node = new_node(ND_MEMBER, node, NULL);
      node->ident = ident;
      continue;
    }

    if (token_consume_punct("->")) {
      Token *ident = token_consume(TK_IDENT);
      if (ident == NULL) {
        error("expected identifier after '.'");
      }
      Node *lhs = new_node(ND_DEREF, node, NULL);
      node = new_node(ND_MEMBER, lhs, NULL);
      node->ident = ident;
      continue;
    }

    if (token_consume_punct("++")) {
      node = new_node(ND_POSTINC, node, NULL);
      node->val = 1;
      return node;
    }

    if (token_consume_punct("--")) {
      node = new_node(ND_POSTINC, node, NULL);
      node->val = -1;
      return node;
    }

    break;
  }

  return node;
}

static Type *parse_type();

static Node *parse_unary() {
  if (token_consume_punct("+")) {
    return parse_postfix();
  }

  if (token_consume_punct("-")) {
    return new_node(ND_SUB, new_node_num(0), parse_primary());
  }

  if (token_consume_punct("*")) {
    return new_node(ND_DEREF, parse_unary(), NULL);
  }

  if (token_consume_punct("&")) {
    Node *node = parse_unary();
    return new_node(ND_ADDR, node, NULL);
  }

  if (token_consume_punct("!")) {
    Node *node = parse_unary();
    return new_node(ND_NOT, node, NULL);
  }

  if (token_consume_punct("++")) {
    // ++x は x = x + 1 に読み替えてよい
    Node *node = parse_unary();
    return new_node(ND_ASSIGN, node, new_node(ND_ADD, node, new_node_num(1)));
  }

  if (token_consume_punct("--")) {
    Node *node = parse_unary();
    return new_node(ND_ASSIGN, node, new_node(ND_ADD, node, new_node_num(-1)));
  }

  if (token_consume(TK_SIZEOF) != NULL) {
    Type *type;
    if (token_consume_punct("(")) {
      // sizeof に型が与えられるときは (,) で囲まれてるっぽい
      type = parse_type();
      if (type == NULL) {
        Node *node = parse_unary();
        type = typeof_node(node);
      }
      token_expect_punct(")");
    } else {
      Node *node = parse_unary();
      type = typeof_node(node);
    }

    int size = sizeof_type(type);
    return new_node_num(size);
  }

  return parse_postfix();
}

static Node *parse_mul() {
  Node *node = parse_unary();
  for (;;) {
    if (token_consume_punct("*")) {
      node = new_node(ND_MUL, node, parse_unary());
    } else if (token_consume_punct("/")) {
      node = new_node(ND_DIV, node, parse_unary());
    } else {
      return node;
    }
  }
}

static Node *parse_add() {
  Node *node = parse_mul();
  for (;;) {
    if (token_consume_punct("+")) {
      node = new_node(ND_ADD, node, parse_mul());
    } else if (token_consume_punct("-")) {
      node = new_node(ND_SUB, node, parse_mul());
    } else {
      return node;
    }
  }
}

static Node *parse_relational() {
  Node *node = parse_add();
  for (;;) {
    if (token_consume_punct("<")) {
      node = new_node(ND_LT, node, parse_add());
    } else if (token_consume_punct(">")) {
      node = new_node(ND_LT, parse_add(), node);
    } else if (token_consume_punct("<=")) {
      node = new_node(ND_GE, parse_add(), node);
    } else if (token_consume_punct(">=")) {
      node = new_node(ND_GE, node, parse_add());
    } else {
      return node;
    }
  }
}

static Node *parse_equality() {
  Node *node = parse_relational();
  for (;;) {
    if (token_consume_punct("==")) {
      node = new_node(ND_EQ, node, parse_relational());
    } else if (token_consume_punct("!=")) {
      node = new_node(ND_NE, node, parse_relational());
    } else {
      return node;
    }
  }
}

// and = eq
//     | and "&&" eq
static Node *parse_and() {
  Node *node = parse_equality();
  for (;;) {
    if (token_consume_punct("&&")) {
      node = new_node(ND_LOGAND, node, parse_equality());
    } else {
      return node;
    }
  }
}

// or = and
//    | or "||" and
static Node *parse_or() {
  __debug_self("parse_or");
  Node *node = parse_and();
  for (;;) {
    if (token_consume_punct("||")) {
      node = new_node(ND_LOGOR, node, parse_and());
    } else {
      return node;
    }
  }
}

static Node *parse_cond() {
  __debug_self("parse_cond");
  Node *node = parse_or();

  if (token_consume_punct("?")) {
    Node *node_then = parse_expr();
    token_expect_punct(":");
    Node *node_else = parse_cond();

    node = new_node(ND_COND, node, node_then);
    node->node3 = node_else;
    node->label_index = ++label_index;
    return node;
  }

  return node;
}

// https://port70.net/~nsz/c/c11/n1570.html#6.5.16
static Node *parse_assign() {
  __debug_self("parse_assign");

  Node *node = parse_cond(); // ほんとは cond | unary "=" assign なのだが
  if (token_consume_punct("=")) {
    node = new_node(ND_ASSIGN, node, parse_assign());
  } else if (token_consume_punct("+=")) {
    // node += expr は node = node + expr に読み替えてよい
    node = new_node(ND_ASSIGN, node, new_node(ND_ADD, node, parse_assign()));
  } else if (token_consume_punct("-=")) {
    node = new_node(ND_ASSIGN, node, new_node(ND_SUB, node, parse_assign()));
  } else if (token_consume_punct("*=")) {
    node = new_node(ND_ASSIGN, node, new_node(ND_MUL, node, parse_assign()));
  }
  return node;
}

// https://port70.net/~nsz/c/c11/n1570.html#6.5.17
Node *parse_expr() {
  Node *expr = parse_assign();
  if (token_consume_punct(",")) {
    Node *node = new_node(ND_COMMA, expr, parse_expr());
    return node;
  }

  return expr;
}

Node *parse_stmt();

Node *parse_block() {
  if (token_consume_punct("{")) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_BLOCK;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;

    // FIXME: 関数宣言の場合はスコープを作らないなどしたい (see test.sh)
    scope_push(node);

    List *stmts = list_new();
    while (!token_consume_punct("}")) {
      list_append(stmts, parse_stmt());
    }

    node->nodes = stmts;

    scope_pop();

    return node;
  }

  return NULL;
}

Type *parse_type() {
  Type *type = calloc(1, sizeof(Type));

  if (token_consume_type("int")) {
    type->ty = TY_INT;
  } else if (token_consume_type("char")) {
    type->ty = TY_CHAR;
  } else if (token_consume_type("void")) {
    type->ty = TY_VOID;
  } else if (token_consume(TK_STRUCT)) {
    type->ty = TY_STRUCT;

    Token *name = token_consume(TK_IDENT);
    if (name != NULL) {
      type->name = name->str;
      type->name_len = name->len;
    }

    if (token_consume_punct("{")) {
      // ND_FUNCDECL の場合と似てるかも
      type->members = list_new();

      while (true) {
        Type *member_type = parse_type();
        if (!member_type) {
          error("expected member type");
        }

        Token *member_name = token_consume(TK_IDENT);
        if (!member_name) {
          error("expected member name");
        }

        add_var(type->members, member_name->str, member_name->len, member_type,
                /* is_extern */ false, /* is_struct_member */ true, -1);

        token_expect_punct(";");

        if (token_consume_punct("}")) {
          break;
        }
      }

      if (name != NULL) {
        type = add_or_find_defined_type(type);
      }
    } else if (name != NULL) {
      // type = "struct A" という感じで本体がない
      // 先行定義？ か既存の構造体を参照しているかどっちか
      type = add_or_find_defined_type(type);
    } else {
      // type = "struct" という感じでおかしい
      error("either struct name nor members not given");
    }
  } else if (token_consume(TK_ENUM)) {
    type->ty = TY_ENUM;

    Token *name = token_consume(TK_IDENT);
    if (name != NULL) {
      type->name = name->str;
      type->name_len = name->len;
      type = add_or_find_defined_type(type);
    }

    if (token_consume_punct("{")) {
      for (int i = 0;; i++) {
        if (token_consume_punct("}")) {
          // ケツカンマ用
          if (i == 0) {
            error("empty enum");
          }
          break;
        }

        Token *enum_item = token_consume(TK_IDENT);
        if (!enum_item) {
          error("expected name");
        }

        Var *var =
            add_var(constants, enum_item->str, enum_item->len, type,
                    /* is_extern */ false, /* is_struct_member */ false, -1);
        var->const_val = new_node_num(i);

        if (token_consume_punct("}")) {
          break;
        }

        token_expect_punct(",");
      }
    }
  } else if (token_consume(TK_TYPEDEF)) {
    type->ty = TY_TYPEDEF;
    type->base = parse_type();
    // typedef の場合は空の宣言がないので add_defined_type がよいのではないか
    return type;
  } else {
    if (curr_token->kind != TK_IDENT) {
      return NULL;
    }
    __debug_self("find_defined_type: %.*s", curr_token->len, curr_token->str);
    type = find_defined_type(curr_token->str, curr_token->len);
    if (type == NULL) {
      return NULL;
    }

    if (type->ty == TY_TYPEDEF) {
      // parse_decl で typedef かどうかを見てるので
      // typedef 済みの型を見つけたら元の型を返す
      type = type->base;
    }

    // 読み捨てておく
    Token *ident = token_consume(TK_IDENT);
    assert(ident != NULL);
  }

  while (token_consume_punct("*")) {
    Type *type_p = calloc(1, sizeof(Type));
    type_p->ty = TY_PTR;
    type_p->base = type;

    type = type_p;
  }

  return type;
}

// https://port70.net/~nsz/c/c11/n1570.html#6.7.9
static List *parse_initializer_list() {
  if (token_consume_punct("{") == false) {
    return NULL;
  }
  if (token_consume_punct("}")) {
    return list_new();
  }

  List *inits = list_new();
  for (;;) {
    list_append(inits, parse_assign());
    if (token_consume_punct("}")) {
      break;
    }
    token_expect_punct(",");
  }

  return inits;
}

static Node *parse_vardecl() {
  Type *type = parse_type();
  if (type == NULL)
    return NULL;

  Token *tok_var = token_consume(TK_IDENT);
  if (!tok_var) {
    error("expected variable name");
  }

  while (token_consume_punct("[")) {
    int size = token_expect_number();
    token_expect_punct("]");

    type = new_type_array_of(type, size);
  }

  Var *lvar = add_var(curr_scope->node->locals, tok_var->str, tok_var->len,
                      type, /* is_extern */ false, /* is_struct_member */ false,
                      curr_scope->id);

  Node *node = calloc(1, sizeof(Node));
  node->kind = ND_VARDECL;
  node->lvar = lvar;
  node->source_pos = tok_var->str;
  node->source_len = tok_var->len;

  if (token_consume_punct("=")) {
    List *inits = parse_initializer_list();
    if (inits != NULL) {
      node->nodes = inits;
    } else {
      node->rhs = parse_expr();
    }
  }

  token_expect_punct(";");

  return node;
}

static int compute_const_expr(Node *node) {
  switch (node->kind) {
  case ND_NUM:
    return node->val;

  case ND_LT:
    return compute_const_expr(node->lhs) < compute_const_expr(node->rhs);

  case ND_GE:
    return compute_const_expr(node->lhs) >= compute_const_expr(node->rhs);

  case ND_ADD:
    return compute_const_expr(node->lhs) + compute_const_expr(node->rhs);

  case ND_SUB:
    return compute_const_expr(node->lhs) - compute_const_expr(node->rhs);

  case ND_MUL:
    return compute_const_expr(node->lhs) * compute_const_expr(node->rhs);

  case ND_DIV:
    return compute_const_expr(node->lhs) / compute_const_expr(node->rhs);

  case ND_EQ:
    return compute_const_expr(node->lhs) == compute_const_expr(node->rhs);

  case ND_NE:
    return compute_const_expr(node->lhs) != compute_const_expr(node->rhs);

  default:
    error("not a constant expression");
  }
}

Node *parse_stmt() {
  if (token_consume(TK_RETURN) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_RETURN;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;
    if (token_consume_punct(";")) {
      Scope *func = scope_find(ND_FUNCDECL);
      if (func->node->type->ty != TY_VOID) {
        error("must return value from non-void function");
      }
      return node;
    }

    node->lhs = parse_expr();
    token_expect_punct(";");

    return node;
  }

  if (token_consume(TK_IF) != NULL) {
    __debug_self("TK_IF");
    token_expect_punct("(");
    Node *expr = parse_expr();
    token_expect_punct(")");
    Node *stmt = parse_stmt();

    Node *else_stmt = NULL;
    if (token_consume(TK_ELSE) != NULL) {
      else_stmt = parse_stmt();
    }

    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_IF;
    node->label_index = ++label_index;
    node->lhs = expr;
    node->rhs = stmt;
    node->node3 = else_stmt;
    node->source_pos = expr->source_pos;
    node->source_len = expr->source_len;
    return node;
  }

  if (token_consume(TK_SWITCH) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_SWITCH;
    node->label_index = ++label_index;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;

    scope_push(node);

    token_expect_punct("(");
    node->lhs = parse_expr();
    token_expect_punct(")");
    node->rhs = parse_stmt();

    scope_pop();

    return node;
  }

  if (token_consume(TK_WHILE) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_WHILE;
    node->label_index = ++label_index;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;

    scope_push(node);

    token_expect_punct("(");
    node->lhs = parse_expr();
    token_expect_punct(")");
    node->rhs = parse_stmt();

    scope_pop();

    return node;
  }

  if (token_consume(TK_FOR) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_FOR;
    node->label_index = ++label_index;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;

    scope_push(node);

    token_expect_punct("(");

    if (!token_consume_punct(";")) {
      node->lhs = parse_vardecl();
      if (node->lhs == NULL) {
        node->lhs = parse_expr();
        token_expect_punct(";");
      }
    }

    if (!token_consume_punct(";")) {
      node->rhs = parse_expr();
      token_expect_punct(";");
    }

    if (!token_consume_punct(")")) {
      node->node3 = parse_expr();
      token_expect_punct(")");
    }

    if (!token_consume_punct(";")) {
      node->node4 = parse_stmt();
    }

    scope_pop();

    return node;
  }

  if (token_consume(TK_BREAK) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_BREAK;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;

    Scope *target_scope = NULL;
    for (Scope *scope = curr_scope; scope; scope = scope->parent) {
      if (scope->node->kind == ND_WHILE || scope->node->kind == ND_FOR ||
          scope->node->kind == ND_SWITCH) {
        target_scope = scope;
        break;
      }
    }
    if (!target_scope) {
      error("not in while, for or switch");
    }

    node->label_index = target_scope->node->label_index;

    token_expect_punct(";");
    return node;
  }

  if (token_consume(TK_CONTINUE) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_CONTINUE;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;

    Scope *target_scope = NULL;
    for (Scope *scope = curr_scope; scope; scope = scope->parent) {
      if (scope->node->kind == ND_WHILE || scope->node->kind == ND_FOR) {
        target_scope = scope;
        break;
      }
    }
    if (!target_scope) {
      error("not in while or for loop");
    }
    node->label_index = target_scope->node->label_index;

    token_expect_punct(";");
    return node;
  }

  if (token_consume(TK_CASE) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_CASE;
    node->val = compute_const_expr(parse_expr());
    node->label_index = ++label_index;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;
    token_expect_punct(":");
    return node;
  }

  if (token_consume(TK_DEFAULT) != NULL) {
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_DEFAULT;
    node->label_index = ++label_index;
    node->source_pos = prev_token->str;
    node->source_len = prev_token->len;
    token_expect_punct(":");
    return node;
  }

  Node *node = parse_vardecl();
  if (node != NULL) {
    return node;
  }

  node = parse_block();
  if (node != NULL) {
    return node;
  }

  node = parse_expr();
  token_expect_punct(";");

  return node;
}

static bool _parse_decl_func(Node *node, Type *type);

static Node *parse_decl() {
  bool is_extern = token_consume(TK_EXTERN) != NULL;

  Type *type = parse_type();
  if (!type) {
    error("decl: expected type");
  }

  Token *ident = token_consume(TK_IDENT);
  if (!ident) {
    // struct S { int i; }; など識別子が登場しない場合、たぶん型の宣言
    //
    if (type->ty == TY_STRUCT || type->ty == TY_ENUM) {
      token_expect_punct(";");

      // じつはここでもう処理は済んでしまっている
      // 適当に無害な Node を作って返す
      Node *node = calloc(1, sizeof(Node));
      node->kind = ND_NOP;
      return node;
    } else {
      error("expected declaration name");
    }
  }

  if (type->ty == TY_TYPEDEF) {
    token_expect_punct(";");

    // この場合だけ変数の宣言ではなく型をつくる
    // FIXME: add_defined_type のほうがいい
    type->name = ident->str;
    type->name_len = ident->len;

    add_or_find_defined_type(type);
    Node *node = calloc(1, sizeof(Node));
    node->kind = ND_NOP;
    return node;
  }

  Node *node = calloc(1, sizeof(Node));
  node->ident = ident;
  node->source_pos = ident->str;
  node->source_len = ident->len;

  if (_parse_decl_func(node, type)) {
    return node;
  }

  // こちらからグローバル変数になります
  node->kind = ND_GVARDECL;

  while (token_consume_punct("[")) {
    // TODO: ここが省略できることもある
    int size = token_expect_number();
    token_expect_punct("]");

    type = new_type_array_of(type, size);
  }

  if (token_consume_punct("=")) {
    // TODO: 文字列リテラルの場合は {} に読み替えることにする
    if (token_consume_punct("{")) {
      if (token_consume_punct("}")) {
        // 空の場合はゼロ初期化と同じなので何もしない
      } else {
        // ここは ND_CALL とよく似てるので parse_expr_list
        // とかにできるとよさそう
        List *inits = list_new();
        while (true) {
          list_append(inits, new_node_num(compute_const_expr(parse_assign())));

          if (token_consume_punct("}")) {
            break;
          }

          token_expect_punct(",");
        }

        node->nodes = inits;
      }
    } else {
      node->rhs = new_node_num(compute_const_expr(parse_expr()));
    }
  }

  token_expect_punct(";");

  Var *gvar =
      add_var(globals, ident->str, ident->len, type, is_extern, false, -1);
  node->gvar = gvar;

  return node;
}

static bool _parse_decl_func(Node *node, Type *type) {
  if (token_consume_punct("(") == false) {
    return false;
  }

  scope_create(node);

  node->kind = ND_FUNCDECL;
  node->type = type;

  List *args = list_new();
  if (token_consume_punct(")")) {
    // 引数ナシ
  } else {
    for (;;) {
      if (token_consume_punct("...")) {
        Node *node = calloc(1, sizeof(Node));
        node->kind = ND_VARARGS;
        list_append(args, node);
        token_expect_punct(")");
        break;
      }

      Type *type = parse_type();
      if (!type) {
        error("expected argument type");
      }

      Token *tok = token_consume(TK_IDENT);
      if (!tok) {
        error("expected argument name");
      }

      Node *ident = calloc(1, sizeof(Node));
      ident->kind = ND_LVAR;
      Var *lvar = add_var(curr_scope->node->locals, tok->str, tok->len, type,
                          false, false, curr_scope->id);
      ident->lvar = lvar;
      ident->source_pos = tok->str;
      ident->source_len = tok->len;

      list_append(args, ident);

      if (token_consume_punct(")")) {
        break;
      }

      token_expect_punct(",");
    }
  }

  node->args = args;

  Func *func = calloc(1, sizeof(Func));
  func->name = node->ident->str;
  func->name_len = node->ident->len;
  func->type = type;

  list_append(funcs, func);

  Node *block = parse_block();
  if (!block) {
    // 関数の宣言のみ。
    token_expect_punct(";");

    node->kind = ND_NOP;
    return true;
  }

  node->nodes = block->nodes;

  curr_scope = NULL;

  return true;
}

List *code;
List *strings;
List *funcs;

void parse_program() {
  code = list_new();
  strings = list_new();
  funcs = list_new();
  defined_types = list_new();
  globals = list_new();
  constants = list_new();

  while (!token_at_eof()) {
    list_append(code, parse_decl());
  }

  if (curr_token != NULL && curr_token->kind != TK_EOF) {
    error("not all tokens are consumed");
  }
}