#ifdef __mocc_self__

typedef int bool;
typedef int size_t; // ホントは違うとおもうが
typedef void FILE;
typedef void *va_list;

#define SEEK_SET 0
#define SEEK_END 2

// extern void *stdin;
// extern void *stderr;

struct _reent {
  int _errno;
  void *_stdin;
  void *_stdout;
  void *_stderr;
};

extern struct _reent *_impure_ptr;

#define stdin (_impure_ptr->_stdin)
#define stderr (_impure_ptr->_stderr)

extern int errno;

#define __attribute__(x)
#define noreturn

#define NULL (0)
#define true (1)
#define false (0)
#define static

#define assert(x) 1

int printf();
int fopen();
int strncmp();
int strlen();
int fprintf();
char *strerror();
int vsnprintf();
int vfprintf();
void *calloc();
int isalnum();
int isspace();
int snprintf();
int strstr();
int strchr();
int isdigit();
int strtol();
void exit();
int fseek();
int ftell();
int fread();
int fclose();
int realloc();
int ferror();
int feof();

#else

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>

#endif

extern char *user_input;
extern char *input_filename;

void codegen();

typedef struct List List;
typedef struct Node Node;
typedef struct Token Token;
typedef struct Type Type;
typedef struct Var Var;
typedef struct String String;
typedef struct Func Func;

typedef enum {
#define NODE_KIND(k) k,
#include "node_kind.def"
#undef NODE_KIND
} NodeKind;

struct Node {
  NodeKind kind;

  Node *lhs; // ND_IF, ND_WHILE のときは expr // FIXME: node1 にしたい
  Node *rhs; // ND_IF, ND_WHILE のときは stmt
  Node *node3; // ND_IF のときは else, ND_FOR のときは i++ みたいなとこ
  Node *node4; // ND_FOR のときのみ stmt

  // ND_BLOCK のとき: stmt, ...
  // ND_CALL のとき: params = expr, ...
  // ND_FUNCDECL のとき: args = ident, ...
  // ND_GVARDECL のときは initializer = { expr, ... } （rhs == NULL
  // のときにかぎる）
  List *nodes; // of Node *

  // あとで locals とかにしたいかも？？
  // すくなくとも LVar *にしたい気がする
  List *args; // of Node *

  // ND_CALL, ND_FUNCDECL のときだけ。関数名
  // そのうち関数の使用に宣言が必要になったら
  // これも Func * みたいなものになりそう (cf. lvar, gvar)
  Token *ident;
  // ND_FUNCDECL のときだけ。返り値の型
  // やはりこれがあることを考えると type+ident
  // をひとつの型にしたほうがいい気もする
  Type *type;

  int val;   // used when kind == ND_NUM
             // あと ND_STRING のとき str_lits の index
  Var *lvar; // ND_LVAR || ND_VARDECL
  Var *gvar; // ND_VARDECL かつトップレベル
  List *locals;

  int label_index; // ND_WHILE || ND_FOR
                   // FIXME: scope->id ですませられる説がある

  char *source_pos; // デバッグ用
  int source_len;   // デバッグ用
};

typedef struct Scope Scope;

struct Scope {
  Scope *parent;
  Node *node;
  int id;
  // ここにブロック中のローカル変数も出てくるかもしれない
};

void parse_program();
char *node_kind_to_str(NodeKind kind);
Node *new_node(NodeKind kind, Node *lhs, Node *rhs);
char *type_to_str(Type *type);
void __debug_self(char *fmt, ...);

typedef enum {
  TK_PUNCT,
  TK_RETURN,
  TK_IF,
  TK_ELSE,
  TK_SWITCH,
  TK_CASE,
  TK_DEFAULT,
  TK_WHILE,
  TK_FOR,
  TK_IDENT,
  TK_NUM,
  TK_EOF,
  TK_TYPE,
  TK_SIZEOF,
  TK_STRING,
  TK_BREAK,
  TK_CONTINUE,
  TK_STRUCT,
  TK_ENUM,
  TK_TYPEDEF,
  TK_EXTERN,
} TokenKind;

struct Token {
  TokenKind kind;
  Token *next;

  int val;

  // ソースコード上の位置
  char *str;
  int len;
};

extern Token *curr_token;
extern Token *prev_token;

void tokenize(char *p);

Token *token_consume(TokenKind kind);
bool token_consume_punct(char *op);
bool token_consume_type(char *type);
bool token_at_eof();
void token_expect_punct(char *op);
int token_expect_number();

typedef enum TypeKind {
  TY_CHAR,
  TY_INT,
  TY_PTR,
  TY_VOID,
  TY_ARRAY,
  TY_STRUCT,
  TY_ENUM,
  TY_TYPEDEF,
} TypeKind;

struct Type {
  TypeKind ty;
  Type *base;
  Type *next;

  size_t array_size; // ty == ARRAY
  List *members;     // of Var *, ty == STRUCT

  // 定義されたものはこれ
  char *name;
  int name_len; // name の長さ
};

extern List *defined_types; // of Type *

// ローカル変数、構造体メンバ、グローバル変数
struct Var {
  char *name;
  int len; // name の長さ
  Type *type;
  int offset; // メモリ上のオフセット。ローカル変数の場合
              // fp からの位置、構造体のメンバの場合は先頭からの位置
  Node *const_val; // 定数のときのみ。 なんなら enum のみ。

  bool is_extern;
  int scope_id; // 同じ名前だけどスコープが違うものは別の変数になる。(name,
                // scope_id) でユニークにする
};

// 文字列リテラル!!!
struct String {
  char *str;
  int len;
};

// 宣言された関数だ！
struct Func {
  char *name;
  int name_len;
  Type *type;
};

int sizeof_type(Type *type);
Type *typeof_node(Node *node);

char *type_to_string(Type *type);

Var *add_var(List *vars, char *name, int len, Type *type, bool is_extern,
             bool is_struct_member, int scope_id);
Var *find_var(List *vars, char *name, int len);

Type *add_or_find_defined_type(Type *type);
Type *find_defined_type(char *name, int len);

noreturn void error(char *fmt, ...) __attribute__((format(printf, 1, 2)));
noreturn void error_at(char *loc, char *fmt, ...)
    __attribute__((format(printf, 2, 3)));

struct List {
  int len;
  int cap;
  void **data;
};

List *list_new();
int list_append(List *list, void *data);
int list_concat(List *list, List *other);

extern List *code;      // of Node *
extern List *strings;   // of String *
extern List *funcs;     // of Func *
extern List *globals;   // of Var *
extern List *constants; // of Var *