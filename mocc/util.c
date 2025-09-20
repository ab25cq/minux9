#include "mocc.h"

noreturn void verror_at(char *loc, char *fmt, va_list ap) {
  if (loc && *loc) {
    char *line = loc;
    while (user_input < line && line[-1] != '\n') {
      line--;
    }

    char *end = loc;
    while (*end != '\n') {
      end++;
    }

    int line_num = 1;
    for (char *p = user_input; p < line; p++) {
      if (*p == '\n') {
        line_num++;
      }
    }

    int indent = fprintf(stderr, "%s:%d: ", input_filename, line_num);
    fprintf(stderr, "%.*s\n", (end - line), line);

    int pos = loc - line + indent;
    fprintf(stderr, "%*s", pos, " ");
    fprintf(stderr, "^ ");
  }

  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n");

  exit(1);
}

noreturn void error_at(char *loc, char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);

  verror_at(loc, fmt, ap);
}

noreturn void error(char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  if (!curr_token) {
    verror_at(NULL, fmt, ap);
  } else {
    verror_at(curr_token->str, fmt, ap);
  }
}

void __debug_self(char *fmt, ...) {
#ifdef __mocc_self_debug__
  va_list ap;
  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n");
#endif
}

List *list_new() {
  List *list = calloc(1, sizeof(List));
  return list;
}

int list_append(List *list, void *data) {
  if (list->len == list->cap) {
    list->cap = list->cap ? list->cap * 2 : 16;
    list->data = realloc(list->data, sizeof(void *) * list->cap);
  }
  list->data[list->len++] = data;
  return list->len - 1;
}

int list_concat(List *list, List *other) {
  for (int i = 0; i < other->len; i++) {
    list_append(list, other->data[i]);
  }
  return list->len - 1;
}