#include "cc.h"

// 入力ファイル
static File *CurrentFile;

// 入力ファイル一覧
static File **InputFiles;

// 行頭にいるとき真
static bool AtBOL;

// トークンの直前に空白があれば真
static bool HasSpace;

// エラー出力
// static はファイル内限定の関数
// Fmt は書式、... は可変引数（Fmt に続くすべての引数）
void error(char *Fmt, ...) {
  // va_list 変数を用意
  va_list VA;
  // Fmt 以降の引数を取得
  va_start(VA, Fmt);
  // vfprintf は va_list を出力
  vfprintf(stderr, Fmt, VA);
  // 末尾に改行を追加
  fprintf(stderr, "\n");
  // VA を後始末
  va_end(VA);
  // プロセス終了
  exit(1);
}

// 次のような形式でエラーを表示して終了
// foo.c:10: x = y + 1;
//               ^ <エラー内容>
static void verrorAt(char *Filename, char *Input, int LineNo, char *Loc,
                     char *Fmt, va_list VA) {
  // Loc を含む行を探す
  char *Line = Loc;
  // 行頭まで戻す（先頭や直前が改行になるまで）
  while (Input < Line && Line[-1] != '\n')
    Line--;

  // 行末の改行まで進める
  char *End = Loc;
  while (*End != '\n')
    End++;

  // ファイル名:行番号 を出力
  // Indent は出力済みの文字数
  int Indent = fprintf(stderr, "%s:%d: ", Filename, LineNo);
  // 行内容（改行除く）を出力
  fprintf(stderr, "%.*s\n", (int)(End - Line), Line);

  // エラー位置（行内オフセット + 先頭の出力分）を計算
  int Pos = displayWidth(Line, Loc - Line) + Indent;

  // Pos まで空白で埋める
  fprintf(stderr, "%*s", Pos, "");
  fprintf(stderr, "^ ");
  vfprintf(stderr, Fmt, VA);
  fprintf(stderr, "\n");
  va_end(VA);
}

// 文字解析エラー
void errorAt(char *Loc, char *Fmt, ...) {
  int LineNo = 1;
  for (char *P = CurrentFile->Contents; P < Loc; P++)
    if (*P == '\n')
      LineNo++;

  va_list VA;
  va_start(VA, Fmt);
  verrorAt(CurrentFile->Name, CurrentFile->Contents, LineNo, Loc, Fmt, VA);
  exit(1);
}

// トークン解析エラー
void errorTok(Token *Tok, char *Fmt, ...) {
  va_list VA;
  va_start(VA, Fmt);
  verrorAt(Tok->File->Name, Tok->File->Contents, Tok->LineNo, Tok->Loc, Fmt,
           VA);
  exit(1);
}

// トークン解析の警告
void warnTok(Token *Tok, char *Fmt, ...) {
  va_list VA;
  va_start(VA, Fmt);
  verrorAt(Tok->File->Name, Tok->File->Contents, Tok->LineNo, Tok->Loc, Fmt,
           VA);
  va_end(VA);
}

// Tok の値が指定文字列と等しいか
bool equal(Token *Tok, char *Str) {
  // 先頭 N 文字を比較し、Str の長さが N であることも確認
  return memcmp(Tok->Loc, Str, Tok->Len) == 0 && Str[Tok->Len] == '\0';
}

// 指定文字列をスキップ
Token *skip(Token *Tok, char *Str) {
  if (!equal(Tok, Str))
    errorTok(Tok, "expect '%s'", Str);
  return Tok->Next;
}

// 指定トークンを消費
bool consume(Token **Rest, Token *Tok, char *Str) {
  // 一致する場合
  if (equal(Tok, Str)) {
    *Rest = Tok->Next;
    return true;
  }
  // 一致しない場合
  *Rest = Tok;
  return false;
}

// 新しいトークンを生成
static Token *newToken(TokenKind Kind, char *Start, char *End) {
  // 1 個分のメモリを確保
  Token *Tok = calloc(1, sizeof(Token));
  Tok->Kind = Kind;
  Tok->Loc = Start;
  Tok->Len = End - Start;
  // 入力ファイル
  Tok->File = CurrentFile;
  Tok->Filename = CurrentFile->DisplayName;
  // 行頭フラグを設定してから false に戻す
  Tok->AtBOL = AtBOL;
  AtBOL = false;
  // 直前が空白かのフラグを設定してから false に戻す
  Tok->HasSpace = HasSpace;
  HasSpace = false;
  return Tok;
}

// 文字列 Str が SubStr で始まるか
static bool startsWith(char *Str, char *SubStr) {
  // 先頭 N 文字が等しいか
  return strncmp(Str, SubStr, strlen(SubStr)) == 0;
}

// 識別子の先頭文字の規則
// [a-zA-Z_]
bool isIdent1(char C) {
  // a-z と A-Z は ASCII で連続していないため個別に判定
  return ('a' <= C && C <= 'z') || ('A' <= C && C <= 'Z') || C == '_';
}

// 識別子の2文字目以降の規則
// [a-zA-Z0-9_]
bool isIdent2(char C) { return isIdent1(C) || ('0' <= C && C <= '9'); }

// 識別子を読み取り長さを返す
static int readIdent(char *Start) {
  char *P = Start;
  uint32_t C = decodeUTF8(&P, P);
  // 識別子でなければ 0 を返す
  if (!isIdent1_1(C))
    return 0;

  // 識別子の残りを走査
  while (true) {
    char *Q;
    C = decodeUTF8(&Q, P);
    if (!isIdent2_1(C))
      // 識別子の長さを返す
      return P - Start;
    P = Q;
  }
}

// 1 桁の 16 進を 10 進へ
// hexDigit = [0-9a-fA-F]
// 16: 0 1 2 3 4 5 6 7 8 9  A  B  C  D  E  F
// 10: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
static int fromHex(char C) {
  if ('0' <= C && C <= '9')
    return C - '0';
  if ('a' <= C && C <= 'f')
    return C - 'a' + 10;
  return C - 'A' + 10;
}

// 演算子を読み取る
static int readPunct(char *Ptr) {
  // 複数文字の演算子を判定
  static char *Kw[] = {"<<=", ">>=", "...", "==", "!=", "<=", ">=", "->",
                       "+=",  "-=",  "*=",  "/=", "++", "--", "%=", "&=",
                       "|=",  "^=",  "&&",  "||", "<<", ">>", "##",
  };

  // 一覧を走査して一致を探す
  for (int I = 0; I < sizeof(Kw) / sizeof(*Kw); ++I) {
    if (startsWith(Ptr, Kw[I]))
      return strlen(Kw[I]);
  }

  // 1 文字の演算子を判定
  return ispunct(*Ptr) ? 1 : 0;
}

// キーワードか判定
static bool isKeyword(Token *Tok) {
  static HashMap Map;

  // 初回: ハッシュ表が未初期化
  if (Map.Capacity == 0) {
    static char *Kw[] = {
        "return",    "if",         "else",
        "for",       "while",      "int",
        "sizeof",    "char",       "struct",
        "union",     "long",       "short",
        "void",      "typedef",    "_Bool",
        "enum",      "static",     "goto",
        "break",     "continue",   "switch",
        "case",      "default",    "extern",
        "_Alignof",  "_Alignas",   "do",
        "signed",    "unsigned",   "const",
        "volatile",  "auto",       "register",
        "restrict",  "__restrict", "__restrict__",
        "_Noreturn", "float",      "double",
        "typeof",    "asm",        "_Thread_local",
        "__thread",  "_Atomic",    "__attribute__",
    };

    // キーワード一覧をハッシュに登録
    for (int I = 0; I < sizeof(Kw) / sizeof(*Kw); I++)
      hashmapPut(&Map, Kw[I], (void *)1);
  }

  return hashmapGet2(&Map, Tok->Loc, Tok->Len);
}

// エスケープ文字を読み取る
static int readEscapedChar(char **NewPos, char *P) {
  if ('0' <= *P && *P <= '7') {
    // 8 進数字（最大 3 桁）を読む
    // \abc = (a*8+b)*8+c
    int C = *P++ - '0';
    if ('0' <= *P && *P <= '7') {
      C = (C << 3) + (*P++ - '0');
      if ('0' <= *P && *P <= '7')
        C = (C << 3) + (*P++ - '0');
    }
    *NewPos = P;
    return C;
  }

  if (*P == 'x') {
    P++;
    // 16 進か判定
    if (!isxdigit(*P))
      errorAt(P, "invalid hex escape sequence");

    int C = 0;
    // 1 桁以上の 16 進数字を読む
    // \xWXYZ = ((W*16+X)*16+Y)*16+Z
    for (; isxdigit(*P); P++)
      C = (C << 4) + fromHex(*P);
    *NewPos = P;
    return C;
  }

  *NewPos = P + 1;

  switch (*P) {
  case 'a': // ベル
    return '\a';
  case 'b': // バックスペース
    return '\b';
  case 't': // 水平タブ
    return '\t';
  case 'n': // 改行
    return '\n';
  case 'v': // 垂直タブ
    return '\v';
  case 'f': // 改ページ
    return '\f';
  case 'r': // 復帰
    return '\r';
  // GNU C 拡張
  case 'e': // エスケープ
    return 27;
  default: // 既定: その文字を返す
    return *P;
  }
}

// 文字列リテラルの終端まで進める
static char *stringLiteralEnd(char *P) {
  char *Start = P;
  for (; *P != '"'; P++) {
    if (*P == '\n' || *P == '\0')
      errorAt(Start, "unclosed string literal");
    if (*P == '\\')
      P++;
  }
  return P;
}

// 文字列リテラルを読み込む（開始位置と左引用符）
static Token *readStringLiteral(char *Start, char *Quote) {
  // 右側の引用符まで読む
  char *End = stringLiteralEnd(Quote + 1);
  // 文字数+1 分のバッファを確保
  // 最大長の文字列を格納
  char *Buf = calloc(1, End - Quote);
  // 実際の文字数（エスケープは 1 文字）
  int Len = 0;

  // 読み取った内容を Buf に書き込む
  for (char *P = Quote + 1; P < End;) {
    if (*P == '\\') {
      Buf[Len++] = readEscapedChar(&P, P + 1);
    } else {
      Buf[Len++] = *P++;
    }
  }

  // トークンは両端の二重引用符を含む
  Token *Tok = newToken(TK_STR, Start, End + 1);
  // 終端用に +1 する
  Tok->Ty = arrayOf(TyChar, Len + 1);
  Tok->Str = Buf;
  return Tok;
}

// UTF-8 をデコードし UTF-16 に変換
//
// UTF-16 は 2 バイトまたは 4 バイトで符号化。
// U+10000 未満は 2 バイト。
// それ以上は 4 バイト（サロゲートペア）。
static Token *readUTF16StringLiteral(char *Start, char *Quote) {
  char *End = stringLiteralEnd(Quote + 1);
  uint16_t *Buf = calloc(2, End - Start);
  int Len = 0;

  // 引用符内を走査
  for (char *P = Quote + 1; P < End;) {
    // エスケープを処理
    if (*P == '\\') {
      Buf[Len++] = readEscapedChar(&P, P + 1);
      continue;
    }

    // UTF-8 の文字をデコード
    uint32_t C = decodeUTF8(&P, P);
    if (C < 0x10000) {
      // 2 バイトで出力
      Buf[Len++] = C;
    } else {
      // 2 バイトで出力
      C -= 0x10000;
      // 上位サロゲート
      Buf[Len++] = 0xd800 + ((C >> 10) & 0x3ff);
      // 下位サロゲート
      Buf[Len++] = 0xdc00 + (C & 0x3ff);
    }
  }

  // UTF-16 文字列トークンを構築
  Token *Tok = newToken(TK_STR, Start, End + 1);
  Tok->Ty = arrayOf(TyUShort, Len + 1);
  Tok->Str = (char *)Buf;
  return Tok;
}

// UTF-8 をデコードし UTF-32 に変換
//
// UTF-32 は 4 バイト符号化
static Token *readUTF32StringLiteral(char *Start, char *Quote, Type *Ty) {
  char *End = stringLiteralEnd(Quote + 1);
  uint32_t *Buf = calloc(4, End - Quote);
  int Len = 0;

  // UTF-8 の文字列をデコード
  for (char *P = Quote + 1; P < End;) {
    if (*P == '\\')
      // 处理转义字符
      Buf[Len++] = readEscapedChar(&P, P + 1);
    else
      // 解码UTF-8
      Buf[Len++] = decodeUTF8(&P, P);
  }

  // UTF-32 文字列トークンを構築
  Token *Tok = newToken(TK_STR, Start, End + 1);
  Tok->Ty = arrayOf(Ty, Len + 1);
  Tok->Str = (char *)Buf;
  return Tok;
}

// 文字リテラルを読み取る
static Token *readCharLiteral(char *Start, char *Quote, Type *Ty) {
  char *P = Quote + 1;
  // 直後が \0 ならエラー
  if (*P == '\0')
    errorAt(Start, "unclosed char literal");

  // 文字を解析
  int C;
  // エスケープ
  if (*P == '\\')
    C = readEscapedChar(&P, P + 1);
  else
    // それ以外はデコード
    C = decodeUTF8(&P, P);

  // strchr返回以 ' 开头的字符串，若无则为NULL
  char *End = strchr(P, '\'');
  if (!End)
    errorAt(P, "unclosed char literal");

  // 数値トークンを構築（値は C）
  Token *Tok = newToken(TK_NUM, Start, End + 1);
  Tok->Val = C;
  Tok->Ty = Ty;
  return Tok;
}

// 前処理数値を解釈
static bool convertPPInt(Token *Tok) {
  // トークンの文字列を取得
  char *P = Tok->Loc;

  // 2/8/10/16 進を判定
  // 既定は 10 進
  int Base = 10;
  // 接頭辞を調べる（0x, 0b など）
  if (!strncasecmp(P, "0x", 2) && isxdigit(P[2])) {
    // 16 進
    P += 2;
    Base = 16;
  } else if (!strncasecmp(P, "0b", 2) && (P[2] == '0' || P[2] == '1')) {
    // 2 進
    P += 2;
    Base = 2;
  } else if (*P == '0') {
    // 8 進
    Base = 8;
  }

  // 文字列を基数 Base の数に変換
  int64_t Val = strtoul(P, &P, Base);

  // U/L/LL 接尾辞を読む
  bool L = false;
  bool U = false;

  // LLU
  if (startsWith(P, "LLU") || startsWith(P, "LLu") || startsWith(P, "llU") ||
      startsWith(P, "llu") || startsWith(P, "ULL") || startsWith(P, "Ull") ||
      startsWith(P, "uLL") || startsWith(P, "ull")) {
    P += 3;
    L = U = true;
  } else if (!strncasecmp(P, "lu", 2) || !strncasecmp(P, "ul", 2)) {
    // LU
    P += 2;
    L = U = true;
  } else if (startsWith(P, "LL") || startsWith(P, "ll")) {
    // LL
    P += 2;
    L = true;
  } else if (*P == 'L' || *P == 'l') {
    // L
    P++;
    L = true;
  } else if (*P == 'U' || *P == 'u') {
    // U
    P++;
    U = true;
  }

  // 整数として解釈できない
  if (P != Tok->Loc + Tok->Len)
    return false;

  // 値に収まる最小の整数型を推定
  Type *Ty;
  if (Base == 10) {
    if (L && U)
      Ty = TyULong;
    else if (L)
      Ty = TyLong;
    else if (U)
      Ty = (Val >> 32) ? TyULong : TyUInt;
    else
      Ty = (Val >> 31) ? TyLong : TyInt;
  } else {
    if (L && U)
      Ty = TyULong;
    else if (L)
      Ty = (Val >> 63) ? TyULong : TyLong;
    else if (U)
      Ty = (Val >> 32) ? TyULong : TyUInt;
    else if (Val >> 63)
      Ty = TyULong;
    else if (Val >> 32)
      Ty = TyLong;
    else if (Val >> 31)
      Ty = TyUInt;
    else
      Ty = TyInt;
  }

  // 数値トークンへ変換
  Tok->Kind = TK_NUM;
  Tok->Val = Val;
  Tok->Ty = Ty;
  return true;
}

// 前処理段階の数値リテラルは後段の定義より広い
// ため、まず pp-number として保持し後で通常の数値トークンへ変換
//
// 前処理数値トークンを通常の数値に変換
static void convertPPNumber(Token *Tok) {
  // まず整数として試す
  if (convertPPInt(Tok))
    return;

  // だめなら浮動小数点とみなす
  char *End;
  long double Val = strtod(Tok->Loc, &End);

  // 浮動小数点の接尾辞を処理
  Type *Ty;
  if (*End == 'f' || *End == 'F') {
    Ty = TyFloat;
    End++;
  } else if (*End == 'l' || *End == 'L') {
    Ty = TyLDouble;
    End++;
  } else {
    Ty = TyDouble;
  }

  // 浮動小数点トークンへ変換
  if (Tok->Loc + Tok->Len != End)
    errorTok(Tok, "invalid numeric constant");

  Tok->Kind = TK_NUM;
  Tok->FVal = Val;
  Tok->Ty = Ty;
}

// 前処理トークンを変換
void convertPPTokens(Token *Tok) {
  for (Token *T = Tok; T->Kind != TK_EOF; T = T->Next) {
    if (isKeyword(T))
      // キーワードは TK_KEYWORD にする
      T->Kind = TK_KEYWORD;
    else if (T->Kind == TK_PP_NUM)
      // 前処理数値を変換
      convertPPNumber(T);
  }
}

// 全トークンに行番号を付与
static void addLineNumbers(Token *Tok) {
  // 現ファイル内容から
  char *P = CurrentFile->Contents;
  int N = 1;

  do {
    if (P == Tok->Loc) {
      Tok->LineNo = N;
      Tok = Tok->Next;
    }
    if (*P == '\n')
      N++;
  } while (*P++);
}

// 文字列リテラルをトークナイズ
Token *tokenizeStringLiteral(Token *Tok, Type *BaseTy) {
  Token *T;
  if (BaseTy->Size == 2)
    // UTF-16
    T = readUTF16StringLiteral(Tok->Loc, Tok->Loc);
  else
    // UTF-32
    T = readUTF32StringLiteral(Tok->Loc, Tok->Loc, BaseTy);
  T->Next = Tok->Next;
  return T;
}

// トークナイズ（ファイル名と内容）
Token *tokenize(File *FP) {
write(1, "U", 1);
  // 現在のファイルを設定
  CurrentFile = FP;
write(1, "U", 1);

  // 入力文字列の先頭
  char *P = FP->Contents;
write(1, "U", 1);

  Token Head = {};
  Token *Cur = &Head;

  // ファイル先頭は行頭
  AtBOL = true;
  // ファイル先頭は直前に空白なし
  HasSpace = false;

  while (*P) {
    // 行コメントをスキップ
    if (startsWith(P, "//")) {
      P += 2;
      while (*P != '\n')
        P++;
      HasSpace = true;
      continue;
    }

    // ブロックコメントをスキップ
    if (startsWith(P, "/*")) {
      // 最初の "*/" を探す
      char *Q = strstr(P + 2, "*/");
      if (!Q)
        errorAt(P, "unclosed block comment");
      P = Q + 2;
      HasSpace = true;
      continue;
    }

    // 改行で行頭に設定
    if (*P == '\n') {
      P++;
      AtBOL = true;
      HasSpace = true;
      continue;
    }

    // 空白（スペース・復帰など）をスキップ
    if (isspace(*P)) {
      ++P;
      HasSpace = true;
      continue;
    }

    // 整数/浮動小数点を解析
    if (isdigit(*P) || (*P == '.' && isdigit(P[1]))) {
      char *Q = P++;
      while (true) {
        if (P[0] && P[1] && strchr("eEpP", P[0]) && strchr("+-", P[1]))
          P += 2;
        else if (isalnum(*P) || *P == '.')
          P++;
        else
          break;
      }
      Cur = Cur->Next = newToken(TK_PP_NUM, Q, P);
      continue;
    }

    // 文字列リテラルを解析
    if (*P == '"') {
      Cur->Next = readStringLiteral(P, P);
      Cur = Cur->Next;
      P += Cur->Len;
      continue;
    }

    // UTF-8 文字列リテラル
    if (startsWith(P, "u8\"")) {
      Cur = Cur->Next = readStringLiteral(P, P + 2);
      P += Cur->Len;
      continue;
    }

    // UTF-16 文字列リテラル
    if (startsWith(P, "u\"")) {
      Cur = Cur->Next = readUTF16StringLiteral(P, P + 1);
      P += Cur->Len;
      continue;
    }

    // ワイド文字列リテラル
    if (startsWith(P, "L\"")) {
      Cur = Cur->Next = readUTF32StringLiteral(P, P + 1, TyInt);
      P += Cur->Len;
      continue;
    }

    // UTF-32 文字列リテラル
    if (startsWith(P, "U\"")) {
      Cur = Cur->Next = readUTF32StringLiteral(P, P + 1, TyUInt);
      P += Cur->Len;
      continue;
    }

    // 文字リテラルを解析
    if (*P == '\'') {
      Cur->Next = readCharLiteral(P, P, TyInt);
      // 1 バイト文字
      Cur->Val = (char)Cur->Val;
      Cur = Cur->Next;
      P += Cur->Len;
      continue;
    }

    // UTF-16 文字リテラル
    if (startsWith(P, "u'")) {
      // 2 バイトを使用
      Cur = Cur->Next = readCharLiteral(P, P + 1, TyUShort);
      Cur->Val &= 0xffff;
      P += Cur->Len;
      continue;
    }

    // ワイド文字リテラル（2 バイト）
    if (startsWith(P, "L'")) {
      Cur = Cur->Next = readCharLiteral(P, P + 1, TyInt);
      P += Cur->Len;
      continue;
    }

    // UTF-32 文字リテラル
    if (startsWith(P, "U'")) {
      // 4 バイトを使用
      Cur = Cur->Next = readCharLiteral(P, P + 1, TyUInt);
      P += Cur->Len;
      continue;
    }

    // 識別子またはキーワードを解析
    // [a-zA-Z_][a-zA-Z0-9_]*
    int IdentLen = readIdent(P);
    if (IdentLen) {
      Cur->Next = newToken(TK_IDENT, P, P + IdentLen);
      Cur = Cur->Next;
      P += Cur->Len;
      continue;
    }

    // 演算子を解析
    int PunctLen = readPunct(P);
    if (PunctLen) {
      Cur->Next = newToken(TK_PUNCT, P, P + PunctLen);
      Cur = Cur->Next;
      // ポインタを演算子長分だけ進める
      P += PunctLen;
      continue;
    }

    // 不明な文字を処理
    errorAt(P, "invalid token");
  }

  // 解析終了。EOF トークンを追加
  Cur->Next = newToken(TK_EOF, P, P);
  // 全トークンに行番号を付与
  addLineNumbers(Head.Next);
  // Head は空なので Next を返す
  return Head.Next;
}

// 指定ファイルの内容を返す
static char *readFile(char *Path) {
  FILE *FP;

  if (strcmp(Path, "-") == 0) {
    // "-" は標準入力
    FP = stdin;
  } else {
    FP = fopen(Path, "r");
    // 失敗したら NULL
    if (!FP)
      return NULL;
  }

  // 返却する文字列
  char *Buf;
  size_t BufLen;
  FILE *Out = open_memstream(&Buf, &BufLen);

  // ファイル全体を読む
  while (true) {
    char Buf2[4096];
    // fread で読み込み
    int N = fread(Buf2, 1, sizeof(Buf2), FP);
    if (N == 0)
      break;
    // バッファへ書き出す
    fwrite(Buf2, 1, N, Out);
  }

  // 読み込み終了
  if (FP != stdin)
    fclose(FP);

  // 出力をフラッシュ
  fflush(Out);
  // 最終行が改行で終わるようにする
  if (BufLen == 0 || Buf[BufLen - 1] != '\n')
    // 文字を出力
    fputc('\n', Out);
  fputc('\0', Out);
  fclose(Out);
  return Buf;
}

// 入力ファイル一覧を取得
File **getInputFiles(void) { return InputFiles; }

// File を生成
File *newFile(char *Name, int FileNo, char *Contents) {
  File *FP = calloc(1, sizeof(File));
  FP->Name = Name;
  FP->DisplayName = FP->Name;
  FP->FileNo = FileNo;
  FP->Contents = Contents;
  return FP;
}

// \r または \r\n を \n に正規化
static void canonicalizeNewline(char *P) {
  int I = 0, J = 0;

  while (P[I]) {
    if (P[I] == '\r' && P[I + 1] == '\n') {
      // \r\n を置換
      I += 2;
      P[J++] = '\n';
    } else if (P[I] == '\r') {
      // \r を置換
      I++;
      P[J++] = '\n';
    } else {
      P[J++] = P[I++];
    }
  }

  P[J] = '\0';
}

// 継続行（バックスラッシュ+改行）を除去
static void removeBackslashNewline(char *P) {
  // 旧/新のインデックス（J<=I なので同一バッファ内で安全）
  int I = 0, J = 0;

  // 行番号維持のため削除行を記録
  int N = 0;

  // 文字が残っている間
  while (P[I]) {
    // '\\' と '\n'
    if (P[I] == '\\' && P[I + 1] == '\n') {
      // I を 2 文字進める
      I += 2;
      // 削除行数を加算
      N++;
    }
    // 改行なら
    else if (P[I] == '\n') {
      // P[J]='\n' として I/J を進める
      P[J++] = P[I++];
      // 削除分の改行を補い行番号を保つ
      for (; N > 0; N--)
        P[J++] = '\n';
    }
    // それ以外は P[J]=P[I] とし I/J を進める
    else {
      P[J++] = P[I++];
    }
  }

  // 末尾にも削除分の改行を補う
  for (; N > 0; N--)
    P[J++] = '\n';
  // NUL 終端
  P[J] = '\0';
}

// Unicode 文字を読む
static uint32_t readUniversalChar(char *P, int Len) {
  uint32_t C = 0;
  for (int I = 0; I < Len; I++) {
    if (!isxdigit(P[I]))
      return 0;
    // 4 ビット左シフトして加える
    C = (C << 4) | fromHex(P[I]);
  }
  return C;
}

// \\u/\\U エスケープを UTF-8 に変換
static void convertUniversalChars(char *P) {
  char *Q = P;

  while (*P) {
    if (startsWith(P, "\\u")) {
      // 16 ビット（4 桁）幅
      uint32_t C = readUniversalChar(P + 2, 4);
      if (C) {
        P += 6;
        Q += encodeUTF8(Q, C);
      } else {
        *Q++ = *P++;
      }
    } else if (startsWith(P, "\\U")) {
      // 32 ビット（8 桁）幅
      uint32_t C = readUniversalChar(P + 2, 8);
      if (C) {
        P += 10;
        Q += encodeUTF8(Q, C);
      } else {
        *Q++ = *P++;
      }
    } else if (P[0] == '\\') {
      // バックスラッシュの扱い
      *Q++ = *P++;
      *Q++ = *P++;
    } else {
      // それ以外
      *Q++ = *P++;
    }
  }

  *Q = '\0';
}

// ファイルをトークナイズ
Token *tokenizeFile(char *Path) {
  // ファイル内容を読み込む
  char *P = readFile(Path);
  if (!P)
    return NULL;

  // UTF-8 BOM をスキップ
  if (!memcmp(P, "\xef\xbb\xbf", 3))
    P += 3;

  // 改行を正規化
  canonicalizeNewline(P);
  // 継続行を除去
  removeBackslashNewline(P);
  // Unicode エスケープを UTF-8 に
  convertUniversalChars(P);

  // ファイル番号
  static int FileNo;
  // パス・番号・内容で File を作成
  File *FP = newFile(Path, FileNo + 1, P);

  // アセンブリの .file 指示用に保存
  // 配列末尾は NULL
  // 配列を (FileNo+2) に再確保
  InputFiles = realloc(InputFiles, sizeof(char *) * (FileNo + 2));
  // 現ファイルを登録
  InputFiles[FileNo] = FP;
  // 配列末尾は NULL
  InputFiles[FileNo + 1] = NULL;
  // ファイル番号をインクリメント
  FileNo++;

  // ファイルをトークナイズ
  return tokenize(FP);
}
