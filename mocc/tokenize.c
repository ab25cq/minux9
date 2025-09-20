#include "mocc.h"

Token *curr_token;
Token *prev_token;

Token *token_consume(TokenKind kind) {
  if (curr_token->kind != kind) {
    return NULL;
  }

  prev_token = curr_token;
  curr_token = curr_token->next;
  return prev_token;
}

bool token_consume_punct(char *op) {
  if (curr_token->kind != TK_PUNCT || curr_token->len != strlen(op) ||
      strncmp(curr_token->str, op, curr_token->len) != 0) {
    return false;
  }

  prev_token = curr_token;
  curr_token = curr_token->next;
  return true;
}

bool token_consume_type(char *type) {
  if (curr_token->kind != TK_TYPE || curr_token->len != strlen(type) ||
      strncmp(curr_token->str, type, curr_token->len) != 0) {
    return false;
  }

  prev_token = curr_token;
  curr_token = curr_token->next;
  return true;
}

bool token_at_eof() {
  return curr_token->kind == TK_EOF;
}

void token_expect_punct(char *op) {
  if (!token_consume_punct(op)) {
    error("expected '%s'", op);
  }
}

int token_expect_number() {
  Token *tok = token_consume(TK_NUM);
  if (!tok) {
    error("expected number");
  }

  return tok->val;
}

static Token *new_token(TokenKind kind, Token *cur, char *str, int len) {
  Token *tok = calloc(1, sizeof(Token));
  tok->kind = kind;
  tok->str = str;
  tok->len = len;

  cur->next = tok;
  return tok;
}

static Token *new_token_num(Token *cur, int val) {
  Token *tok = new_token(TK_NUM, cur, NULL, 0);
  tok->val = val;
  return tok;
}

static bool isident(char ch) {
  return isalnum(ch) || ch == '_';
}

void tokenize(char *p) {
  Token head;
  head.next = NULL;
  Token *cur = &head;

  while (*p) {
    if (isspace(*p)) {
      p++;
      continue;
    }

    if (*p == '\'') {
      char *start = p;
      int n;
      p++;
      if (*p == '\\') {
        p++;
        if (*p == '\\') {
          n = '\\';
        } else if (*p == '\'') {
          n = '\'';
        } else if (*p == 'n') {
          n = '\n';
        } else if (*p == '0') {
          n = '\0';
        } else {
          error_at(p, "unknown character escape");
        }
      } else if (*p == '\'') {
        error("character is empty");
      } else {
        n = *p;
      }
      cur = new_token(TK_NUM, cur, start, p - start + 1);
      cur->val = n;
      p++;
      if (*p != '\'') {
        error_at(p, "character is not closed");
      }
      p++;
      continue;
    }

    if (*p == '"') {
      char *end = p + 1;
      while (*end != '"') {
        end++;
        // かなり適当。\000 のようなパターンは無視、かつ
        // エスケープを解釈せずにそのまま受け取る。
        // .s // にママで吐き出して、
        // アセンブラがよしなに受け取ってくれることを期待している
        if (*end == '\\') {
          end += 2;
        }
      }
      cur = new_token(TK_STRING, cur, p + 1, end - p - 1);
      p = end + 1;
      continue;
    }

    if (strncmp(p, "//", 2) == 0) {
      p += 2;
      while (*p != '\n')
        p++;
      continue;
    }

    if (strncmp(p, "/*", 2) == 0) {
      char *end = strstr(p + 2, "*/");
      if (!end) {
        error("unclosed comment");
      }
      p = end + 2;
      continue;
    }

    if (strncmp(p, "<=", 2) == 0 || strncmp(p, ">=", 2) == 0 ||
        strncmp(p, "==", 2) == 0 || strncmp(p, "!=", 2) == 0 ||
        strncmp(p, "||", 2) == 0 || strncmp(p, "&&", 2) == 0 ||
        strncmp(p, "->", 2) == 0 || strncmp(p, "++", 2) == 0 ||
        strncmp(p, "--", 2) == 0 || strncmp(p, "+=", 2) == 0 ||
        strncmp(p, "-=", 2) == 0 || strncmp(p, "*=", 2) == 0) {
      cur = new_token(TK_PUNCT, cur, p, 2);
      p += 2;
      continue;
    }

    if (strncmp(p, "...", 3) == 0) {
      cur = new_token(TK_PUNCT, cur, p, 3);
      p += 3;
      continue;
    }

    if (strchr("+-*/()<>=;{},&[].!?:", *p)) {
      cur = new_token(TK_PUNCT, cur, p++, 1);
      continue;
    }

    if (strncmp(p, "return", 6) == 0 && !isident(p[6])) {
      cur = new_token(TK_RETURN, cur, p, 6);
      p += 6;
      continue;
    }

    if (strncmp(p, "if", 2) == 0 && !isident(p[2])) {
      cur = new_token(TK_IF, cur, p, 2);
      p += 2;
      continue;
    }

    if (strncmp(p, "else", 4) == 0 && !isident(p[4])) {
      cur = new_token(TK_ELSE, cur, p, 4);
      p += 4;
      continue;
    }

    if (strncmp(p, "switch", 6) == 0 && !isident(p[6])) {
      cur = new_token(TK_SWITCH, cur, p, 6);
      p += 6;
      continue;
    }

    if (strncmp(p, "case", 4) == 0 && !isident(p[4])) {
      cur = new_token(TK_CASE, cur, p, 4);
      p += 4;
      continue;
    }

    if (strncmp(p, "default", 7) == 0 && !isident(p[7])) {
      cur = new_token(TK_DEFAULT, cur, p, 7);
      p += 7;
      continue;
    }

    if (strncmp(p, "while", 5) == 0 && !isident(p[5])) {
      cur = new_token(TK_WHILE, cur, p, 5);
      p += 5;
      continue;
    }

    if (strncmp("for", p, 3) == 0 && !isident(p[3])) {
      cur = new_token(TK_FOR, cur, p, 3);
      p += 3;
      continue;
    }

    if (strncmp("break", p, 5) == 0 && !isident(p[5])) {
      cur = new_token(TK_BREAK, cur, p, 5);
      p += 5;
      continue;
    }

    if (strncmp("continue", p, 8) == 0 && !isident(p[8])) {
      cur = new_token(TK_CONTINUE, cur, p, 8);
      p += 8;
      continue;
    }

    if (strncmp("sizeof", p, 6) == 0 && !isident(p[6])) {
      cur = new_token(TK_SIZEOF, cur, p, 6);
      p += 6;
      continue;
    }

    if (strncmp("struct", p, 6) == 0 && !isident(p[6])) {
      cur = new_token(TK_STRUCT, cur, p, 6);
      p += 6;
      continue;
    }

    if (strncmp("enum", p, 4) == 0 && !isident(p[4])) {
      cur = new_token(TK_ENUM, cur, p, 4);
      p += 4;
      continue;
    }

    if (strncmp("typedef", p, 7) == 0 && !isident(p[7])) {
      cur = new_token(TK_TYPEDEF, cur, p, 7);
      p += 7;
      continue;
    }

    if (strncmp("int", p, 3) == 0 && !isident(p[3])) {
      cur = new_token(TK_TYPE, cur, p, 3);
      p += 3;
      continue;
    }

    if (strncmp("char", p, 4) == 0 && !isident(p[4])) {
      cur = new_token(TK_TYPE, cur, p, 4);
      p += 4;
      continue;
    }

    if (strncmp("void", p, 4) == 0 && !isident(p[4])) {
      cur = new_token(TK_TYPE, cur, p, 4);
      p += 4;
      continue;
    }

    if (strncmp("extern", p, 6) == 0 && !isident(p[6])) {
      cur = new_token(TK_EXTERN, cur, p, 6);
      p += 6;
      continue;
    }

    if (('a' <= *p && *p <= 'z') || ('A' <= *p && *p <= 'Z') || *p == '_') {
      int n = 1;
      while (*(p + n) && isident(*(p + n))) {
        n++;
      }

      cur = new_token(TK_IDENT, cur, p, n);
      p += n;

      continue;
    }

    if (isdigit(*p)) {
      cur = new_token_num(cur, strtol(p, &p, 10));
      continue;
    }

    error_at(p, "cannot tokenize: '%c'", *p);
  }

  new_token(TK_EOF, cur, p, 0);
  curr_token = head.next;
}
