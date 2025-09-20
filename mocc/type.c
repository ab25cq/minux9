// 型と名前とスコープ

#include "mocc.h"

List *globals;   // of Var *
List *constants; // of Var *
List *defined_types;

char *type_to_string(Type *type) {
  char *buf = calloc(80, sizeof(char));
  if (type->ty == TY_INT) {
    return "int";
  } else if (type->ty == TY_CHAR) {
    return "char";
  } else if (type->ty == TY_PTR) {
    snprintf(buf, 80, "ptr to %s", type_to_string(type->base));
    return buf;
  } else if (type->ty == TY_ARRAY) {
    snprintf(buf, 80, "array[%ld] of %s", type->array_size,
             type_to_string(type->base));
    return buf;
  } else if (type->ty == TY_STRUCT) {
    snprintf(buf, 80, "struct %.*s", type->name_len, type->name);
    return buf;
  } else if (type->ty == TY_ENUM) {
    snprintf(buf, 80, "enum %.*s", type->name_len, type->name);
    return buf;
  } else if (type->ty == TY_TYPEDEF) {
    snprintf(buf, 80, "typedef %.*s for %s", type->name_len, type->name,
             type_to_string(type->base));
    return buf;
  }

  return "(unknown)";
}

Var *find_var(List *vars, char *name, int len) {
  for (int i = 0; i < vars->len; i++) {
    Var *var = vars->data[i];
    if (var->len == len && !strncmp(var->name, name, len)) {
      return var;
    }
  }

  return NULL;
}

static int roundup_to_word(int size) {
  return (size + 3) / 4 * 4;
}
static int roundup_to_dword(int size) {
  return (size + 7) / 8 * 8;
}

Var *add_var(List *vars, char *name, int len, Type *type, bool is_extern,
             bool is_struct_member, int scope_id) {
  if (type->ty == TY_VOID) {
    error("void is not a valid type");
  }

  int offset = 0;
  for (int i = 0; i < vars->len; i++) {
    Var *var = vars->data[i];
    if (var->scope_id == scope_id && var->len == len &&
        !strncmp(var->name, name, len)) {
      if (var->is_extern) {
        // TODO: 型のチェックだけしたい
        continue;
      }

      error("variable already defined: '%.*s'", len, name);
    }

    offset = var->offset; //+ sizeof_type(var->type);
  }

  Var *var = calloc(1, sizeof(Var));
  var->name = name;
  var->len = len;
  var->scope_id = scope_id;
  var->is_extern = is_extern;
  if (is_struct_member) {
    // ここあまり自信がない
    // FIXME ローカル変数と処理同じにならない？
    Var *last = vars->len > 0 ? vars->data[vars->len - 1] : NULL;
    if (last != NULL) {
      offset += sizeof_type(last->type);
    }
    // TODO: 型ごとのアラインメントが決まってるのでそれにあわせる
    var->offset = sizeof_type(type) == 8 ? roundup_to_dword(offset)
                                         : roundup_to_word(offset);
  } else {
    var->offset = offset + roundup_to_dword(sizeof_type(type));
  }
  var->type = type;

  list_append(vars, var);

  return var;
}

Type *find_defined_type(char *name, int len) {
  for (int i = 0; i < defined_types->len; i++) {
    Type *type = defined_types->data[i];
    if (type->name_len == len && strncmp(type->name, name, len) == 0 &&
        type->ty == TY_TYPEDEF) {
      return type;
    }
  }

  return NULL;
}

// 既存の型で、空のものがあったらその中身を埋めて返す
Type *add_or_find_defined_type(Type *type) {
  assert(type->ty == TY_STRUCT || type->ty == TY_ENUM ||
         type->ty == TY_TYPEDEF);
  if (type->name == NULL) {
    error("unnamed type: (%s)", type_to_string(type));
  }

  for (int i = 0; i < defined_types->len; i++) {
    Type *it = defined_types->data[i];
    if (it->name_len == type->name_len &&
        strncmp(it->name, type->name, type->name_len) == 0 &&
        it->ty == type->ty) {
      if (type->ty == TY_STRUCT && type->members != NULL) {
        if (it->members != NULL) {
          error("type already defined: '%.*s'", type->name_len, type->name);
        }
        it->members = type->members;
      }
      return it;
    }
  }

  list_append(defined_types, type);

  return type;
}