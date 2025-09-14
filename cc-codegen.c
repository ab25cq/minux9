#include "cc.h"

#define GP_MAX 8
#define FP_MAX 8

// 出力ファイル
static FILE *OutputFile;
// スタックの深さ
static int Depth;
// 大きな構造体の深さ
static int BSDepth;
// 現在の関数
static Obj *CurrentFn;

// fs0〜fs11 を2本ずつのペアにして6組使用
// long double の保存に用い、操作ごとに2本増減
static int LDSP;

static void genExpr(Node *Nd);
static void genStmt(Node *Nd);

// 出力先へ文字列を書き出して改行
__attribute__((format(printf, 1, 2))) static void printLn(char *Fmt, ...) {
  va_list VA;

  va_start(VA, Fmt);
  vfprintf(OutputFile, Fmt, VA);
  va_end(VA);

  fprintf(OutputFile, "\n");
}

// コード片のカウンタ
static int count(void) {
  static int I = 1;
  return I++;
}

// プッシュ: 結果を一時的にスタックへ
// sp はスタックポインタ。64bit では 8B 単位で下方向に成長。
// 現在の sp 先頭へ a0 を保存。保持数が可変のためレジスタではなくスタックを使う。
static void push(void) {
  printLn("  # プッシュ: a0 の値をスタック先頭へ");
  printLn("  addi sp, sp, -8");
  printLn("  sd a0, 0(sp)");
  Depth++;
}

// ポップ: スタック先頭の値を a1 へ
static void pop(int Reg) {
  printLn("  # ポップ: スタック先頭の値を a%d へ", Reg);
  printLn("  ld a%d, 0(sp)", Reg);
  printLn("  addi sp, sp, 8");
  Depth--;
}

// 浮動小数点のプッシュ
static void pushF(void) {
  printLn("  # プッシュ: fa0 の値をスタック先頭へ");
  printLn("  addi sp, sp, -8");
  printLn("  fsd fa0, 0(sp)");
  Depth++;
}

// 浮動小数点のポップ
static void popF(int Reg) {
  printLn("  # ポップ: スタック先頭の値を fa%d へ", Reg);
  printLn("  fld fa%d, 0(sp)", Reg);
  printLn("  addi sp, sp, 8");
  Depth--;
}

// long double のプッシュ
static void pushLD(void) {
  printLn("  # LD プッシュ: a0,a1 を LD スタックへ");
  printLn("  fmv.d.x fs%d, a1", LDSP + 1);
  printLn("  fmv.d.x fs%d, a0", LDSP);
  LDSP += 2;
  if (LDSP > 10)
    error("LDSP can't be larger than 10!");
}

// long double のポップ
static void popLD(int Reg) {
  LDSP -= 2;
  if (LDSP < 0)
    error("LDSP can't be less than 0!");
  printLn("  # LD ポップ: LD スタック先頭を a%d,a%d へ", Reg, Reg + 1);
  printLn("  fmv.x.d a%d, fs%d", Reg + 1, LDSP + 1);
  printLn("  fmv.x.d a%d, fs%d", Reg, LDSP);
}

// Align の倍数にアライン
int alignTo(int N, int Align) {
  // (0,Align] は Align を返す
  return (N + Align - 1) / Align * Align;
}

// 指定ノードの絶対アドレスを計算
// エラーならメモリ上にない
static void genAddr(Node *Nd) {
  switch (Nd->Kind) {
  // 変数
  case ND_VAR:
    // VLA（可変長配列）はローカル変数
    if (Nd->Var->Ty->Kind == TY_VLA) {
      printLn("  # VLA 用のローカル変数を生成");
      printLn("  li t0, %d", Nd->Var->Offset);
      printLn("  add t0, t0, fp");
      printLn("  ld a0, 0(t0)");
      return;
    }

    // ローカル変数
    if (Nd->Var->IsLocal) { // オフセットは fp 基準
      printLn("  # ローカル変数 %s のスタック内アドレス %d(fp) を取得", Nd->Var->Name,
              Nd->Var->Offset);
      printLn("  li t0, %d", Nd->Var->Offset);
      printLn("  add a0, fp, t0");
      return;
    }

    // 位置非依存コード (PIC) を生成
    if (OptFPIC) {
      int C = count();
      printLn(".Lpcrel_hi%d:", C);
      // スレッドローカル変数
      if (Nd->Var->IsTLS) {
        printLn("  # PIC 中の TLS %s のアドレスを取得", Nd->Var->Name);
        // TLS の上位 20bit アドレスを計算
        printLn("  auipc a0, %%tls_gd_pcrel_hi(%s)", Nd->Var->Name);
        // TLS の下位 12bit アドレスを計算
        printLn("  addi a0, a0, %%pcrel_lo(.Lpcrel_hi%d)", C);
        // アドレスを取得
        printLn("  call __tls_get_addr@plt");
        return;
      }

      // 関数またはグローバル変数
      printLn("  # PIC 中の %s%s のアドレスを取得",
              Nd->Ty->Kind == TY_FUNC ? "関数" : "グローバル変数", Nd->Var->Name);
      // 上位 20bit を a0 に
      printLn("  auipc a0, %%got_pcrel_hi(%s)", Nd->Var->Name);
      // 下位 12bit を a0 に加算
      printLn("  ld a0, %%pcrel_lo(.Lpcrel_hi%d)(a0)", C);
      return;
    }

    // スレッドローカル変数
    if (Nd->Var->IsTLS) {
      // TLS の上位 20bit アドレスを計算
      printLn("  lui a0, %%tprel_hi(%s)", Nd->Var->Name);
      // TLS の下位 12bit アドレスを計算
      printLn("  addi a0, a0, %%tprel_lo(%s)", Nd->Var->Name);
      return;
    }

    // 関数
    if (Nd->Ty->Kind == TY_FUNC) {
      // 定義された関数
      if (Nd->Var->IsDefinition) {
        printLn("  # 関数 %s のアドレスを取得", Nd->Var->Name);
        printLn("  la a0, %s", Nd->Var->Name);
      }
      // 外部関数
      else {
        int C = count();
        printLn("  # 外部関数の絶対アドレスを取得");
        printLn(".Lpcrel_hi%d:", C);
        // 上位 20bit を a0 に
        printLn("  auipc a0, %%got_pcrel_hi(%s)", Nd->Var->Name);
        // 下位 12bit を a0 に加算
        printLn("  ld a0, %%pcrel_lo(.Lpcrel_hi%d)(a0)", C);
      }
      return;
    }

    // グローバル変数
    int C = count();
    printLn("  # グローバル変数の絶対アドレスを取得");
    printLn(".Lpcrel_hi%d:", C);
    // 上位 20bit を a0 に
    printLn("  auipc a0, %%got_pcrel_hi(%s)", Nd->Var->Name);
    // 下位 12bit を a0 に加算
    printLn("  ld a0, %%pcrel_lo(.Lpcrel_hi%d)(a0)", C);
    return;
  // 間接参照 *
  case ND_DEREF:
    genExpr(Nd->LHS);
    return;
  // カンマ
  case ND_COMMA:
    genExpr(Nd->LHS);
    genAddr(Nd->RHS);
    return;
  // 構造体メンバ
  case ND_MEMBER:
    genAddr(Nd->LHS);
    printLn("  # メンバのオフセットを加算");
    printLn("  li t0, %d", Nd->Mem->Offset);
    printLn("  add a0, a0, t0");
    return;
  // 関数呼び出し
  case ND_FUNCALL:
    // 戻り先バッファがある場合
    if (Nd->RetBuffer) {
      genExpr(Nd);
      return;
    }
    break;
  case ND_ASSIGN:
  case ND_COND:
    // 構造体メンバを = や ?: で扱えるようにする
    if (Nd->Ty->Kind == TY_STRUCT || Nd->Ty->Kind == TY_UNION) {
      genExpr(Nd);
      return;
    }
    break;
  case ND_VLA_PTR:
    // VLA のポインタ
    printLn("  # VLA のポインタを生成");
    printLn("  li t0, %d", Nd->Var->Offset);
    printLn("  add a0, t0, fp");
    return;
  default:
    break;
  }

  errorTok(Nd->Tok, "not an lvalue");
}

// a0 の指す値をロード
static void load(Type *Ty) {
  switch (Ty->Kind) {
  case TY_ARRAY:
  case TY_STRUCT:
  case TY_UNION:
  case TY_FUNC:
  case TY_VLA:
    return;
  case TY_FLOAT:
    printLn("  # a0 の指すアドレスから値を fa0 へ");
    printLn("  flw fa0, 0(a0)");
    return;
  case TY_DOUBLE:
    printLn("  # a0 の指すアドレスから値を fa0 へ");
    printLn("  fld fa0, 0(a0)");
    return;
  case TY_LDOUBLE:
    printLn("  # a0 の指すアドレスから値を LD スタックへ");
    printLn("  fld fs%d, 8(a0)", LDSP + 1);
    printLn("  fld fs%d, 0(a0)", LDSP);
    LDSP += 2;
    return;
  default:
    break;
  }

  // 符号なし型には接尾辞 u を付与
  char *Suffix = Ty->IsUnsigned ? "u" : "";

  printLn("  # a0 の指すアドレスから値を a0 へ");
  if (Ty->Size == 1)
    printLn("  lb%s a0, 0(a0)", Suffix);
  else if (Ty->Size == 2)
    printLn("  lh%s a0, 0(a0)", Suffix);
  else if (Ty->Size == 4)
    printLn("  lw%s a0, 0(a0)", Suffix);
  else
    printLn("  ld a0, 0(a0)");
}

// スタック先頭（アドレス）を a0 に
static void store(Type *Ty) {
  pop(1);

  switch (Ty->Kind) {
  case TY_STRUCT:
  case TY_UNION:
    printLn("  # %s へ代入", Ty->Kind == TY_STRUCT ? "構造体" : "共用体");
    for (int I = 0; I < Ty->Size; ++I) {
      printLn("  li t0, %d", I);
      printLn("  add t0, a0, t0");
      printLn("  lb t1, 0(t0)");

      printLn("  li t0, %d", I);
      printLn("  add t0, a1, t0");
      printLn("  sb t1, 0(t0)");
    }
    return;
  case TY_FLOAT:
    printLn("  # fa0 の値を a1 の指すアドレスへ");
    printLn("  fsw fa0, 0(a1)");
    return;
  case TY_DOUBLE:
    printLn("  # fa0 の値を a1 の指すアドレスへ");
    printLn("  fsd fa0, 0(a1)");
    return;
  case TY_LDOUBLE:
    printLn("  # LD スタック先頭の値を a1 の指すアドレスへ");
    LDSP -= 2;
    printLn("  fsd fs%d, 8(a1)", LDSP + 1);
    printLn("  fsd fs%d, 0(a1)", LDSP);
    return;
  default:
    break;
  }

  printLn("  # a0 の値を a1 の指すアドレスへ");
  if (Ty->Size == 1)
    printLn("  sb a0, 0(a1)");
  else if (Ty->Size == 2)
    printLn("  sh a0, 0(a1)");
  else if (Ty->Size == 4)
    printLn("  sw a0, 0(a1)");
  else
    printLn("  sd a0, 0(a1)");
};

// 0 と比較し、非 0 なら 1 に
static void notZero(Type *Ty) {
  switch (Ty->Kind) {
  case TY_FLOAT:
    printLn("  # fa1 が 0 か判定（0→0, 非0→1）");
    printLn("  fmv.s.x fa1, zero");
    printLn("  feq.s a0, fa0, fa1");
    printLn("  xori a0, a0, 1");
    return;
  case TY_DOUBLE:
    printLn("  # fa1 が 0 か判定（0→0, 非0→1）");
    printLn("  fmv.d.x fa1, zero");
    printLn("  feq.d a0, fa0, fa1");
    printLn("  xori a0, a0, 1");
    return;
  case TY_LDOUBLE:
    printLn("  # fa1 が 0 か判定（0→0, 非0→1）");
    popLD(0);
    printLn("  mv a2, zero");
    printLn("  mv a3, zero");
    printLn("  call __netf2@plt");
    printLn("  snez a0, a0");
    return;
  default:
    return;
  }
}

// 型の列挙
enum { I8, I16, I32, I64, U8, U16, U32, U64, F32, F64, F128 };

// 型に対応する列挙値を取得
static int getTypeId(Type *Ty) {
  switch (Ty->Kind) {
  case TY_CHAR:
    return Ty->IsUnsigned ? U8 : I8;
  case TY_SHORT:
    return Ty->IsUnsigned ? U16 : I16;
  case TY_INT:
    return Ty->IsUnsigned ? U32 : I32;
  case TY_LONG:
    return Ty->IsUnsigned ? U64 : I64;
  case TY_FLOAT:
    return F32;
  case TY_DOUBLE:
    return F64;
  case TY_LDOUBLE:
    return F128;
  default:
    return U64;
  }
}

// 型変換テーブル
// 符号付き整数の変換
static char i32f32[] = "  # i32 を f32 に変換\n"
                       "  fcvt.s.w fa0, a0";
static char i32f64[] = "  # i32 を f64 に変換\n"
                       "  fcvt.d.w fa0, a0";
static char i32f128[] = "  # i32 を f128 に変換\n"
                        "  call __floatsitf@plt";

// 先逻辑左移N位，再算术右移N位，就实现了将64位有符号数转换为64-N位的有符号数
static char i64i8[] = "  # i8 に変換\n"
                      "  slli a0, a0, 56\n"
                      "  srai a0, a0, 56";
static char i64i16[] = "  # i16 に変換\n"
                       "  slli a0, a0, 48\n"
                       "  srai a0, a0, 48";
static char i64i32[] = "  # i32 に変換\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";

// 先逻辑左移N位，再逻辑右移N位，就实现了将64位无符号数转换为64-N位的无符号数
static char i64u8[] = "  # u8 に変換\n"
                      "  slli a0, a0, 56\n"
                      "  srli a0, a0, 56";
static char i64u16[] = "  # u16 に変換\n"
                       "  slli a0, a0, 48\n"
                       "  srli a0, a0, 48";
static char i64u32[] = "  # u32 に変換\n"
                       "  slli a0, a0, 32\n"
                       "  srli a0, a0, 32";

// 有符号整型转换为浮点数
static char i64f32[] = "  # i64 を f32 に変換\n"
                       "  fcvt.s.l fa0, a0";
static char i64f64[] = "  # i64 を f64 に変換\n"
                       "  fcvt.d.l fa0, a0";
static char i64f128[] = "  # i64 を f128 に変換\n"
                        "  call __floatditf@plt";

// 无符号整型转换
static char u32f32[] = "  # u32 を f32 に変換\n"
                       "  fcvt.s.wu fa0, a0";
static char u32f64[] = "  # u32 を f64 に変換\n"
                       "  fcvt.d.wu fa0, a0";
static char u32f128[] = "  # u32 を f128 に変換\n"
                        "  call __floatunsitf@plt";

static char u32i64[] = "  # u32 を i64 に変換\n"
                       "  slli a0, a0, 32\n"
                       "  srli a0, a0, 32";

// 无符号整型转换为浮点数
static char u64f32[] = "  # u64 を f32 に変換\n"
                       "  fcvt.s.lu fa0, a0";
static char u64f64[] = "  # u64 を f64 に変換\n"
                       "  fcvt.d.lu fa0, a0";
static char u64f128[] = "  # u64 を f128 に変換\n"
                        "  call __floatunditf@plt";

// 单精度浮点数转换为整型
static char f32i8[] = "  # f32 を i8 に変換\n"
                      "  fcvt.w.s a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srai a0, a0, 56";
static char f32i16[] = "  # f32 を i16 に変換\n"
                       "  fcvt.w.s a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srai a0, a0, 48";
static char f32i32[] = "  # f32 を i32 に変換\n"
                       "  fcvt.w.s a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f32i64[] = "  # f32 を i64 に変換\n"
                       "  fcvt.l.s a0, fa0, rtz";

// 单精度浮点数转换为无符号浮点数
static char f32u8[] = "  # f32 を u8 に変換\n"
                      "  fcvt.wu.s a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srli a0, a0, 56";
static char f32u16[] = "  # f32 を u16 に変換\n"
                       "  fcvt.wu.s a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srli a0, a0, 48\n";
static char f32u32[] = "  # f32 を u32 に変換\n"
                       "  fcvt.wu.s a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f32u64[] = "  # f32 を u64 に変換\n"
                       "  fcvt.lu.s a0, fa0, rtz";

// 单精度转换为双精度浮点数
static char f32f64[] = "  # f32 を f64 に変換\n"
                       "  fcvt.d.s fa0, fa0";
static char f32f128[] = "  # f32 を f128 に変換\n"
                        "  call __extendsftf2@plt";

// 双精度浮点数转换为整型
static char f64i8[] = "  # f64 を i8 に変換\n"
                      "  fcvt.w.d a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srai a0, a0, 56";
static char f64i16[] = "  # f64 を i16 に変換\n"
                       "  fcvt.w.d a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srai a0, a0, 48";
static char f64i32[] = "  # f64 を i32 に変換\n"
                       "  fcvt.w.d a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f64i64[] = "  # f64 を i64 に変換\n"
                       "  fcvt.l.d a0, fa0, rtz";

// 双精度浮点数转换为无符号整型
static char f64u8[] = "  # f64 を u8 に変換\n"
                      "  fcvt.wu.d a0, fa0, rtz\n"
                      "  slli a0, a0, 56\n"
                      "  srli a0, a0, 56";
static char f64u16[] = "  # f64 を u16 に変換\n"
                       "  fcvt.wu.d a0, fa0, rtz\n"
                       "  slli a0, a0, 48\n"
                       "  srli a0, a0, 48";
static char f64u32[] = "  # f64 を u32 に変換\n"
                       "  fcvt.wu.d a0, fa0, rtz\n"
                       "  slli a0, a0, 32\n"
                       "  srai a0, a0, 32";
static char f64u64[] = "  # f64 を u64 に変換\n"
                       "  fcvt.lu.d a0, fa0, rtz";

// 双精度转换为单精度浮点数
static char f64f32[] = "  # f64 を f32 に変換\n"
                       "  fcvt.s.d fa0, fa0";

static char f64f128[] = "  # f64 を f128 に変換\n"
                        "  call __extenddftf2@plt";

// long double转换
static char f128i8[] = "  # f128 を i8 に変換\n"
                       "  call __fixtfsi@plt\n"
                       "  slli a0, a0, 56\n"
                       "  srai a0, a0, 56";

static char f128i16[] = "  # f128 を i16 に変換\n"
                        "  call __fixtfsi@plt\n"
                        "  slli a0, a0, 48\n"
                        "  srai a0, a0, 48";

static char f128i32[] = "  # f128 を i32 に変換\n"
                        "  call __fixtfsi@plt\n"
                        "  slli a0, a0, 32\n"
                        "  srai a0, a0, 32";

static char f128i64[] = "  # f128 を i64 に変換\n"
                        "  call __fixtfdi@plt";

static char f128u8[] = "  # f128 を u8 に変換\n"
                       "  call __fixunstfsi@plt\n"
                       "  slli a0, a0, 56\n"
                       "  srli a0, a0, 56";

static char f128u16[] = "  # f128 を u16 に変換\n"
                        "  call __fixunstfsi@plt\n"
                        "  slli a0, a0, 48\n"
                        "  srli a0, a0, 48";

static char f128u32[] = "  # f128 を u32 に変換\n"
                        "  call __fixunstfsi@plt\n"
                        "  slli a0, a0, 32\n"
                        "  srai a0, a0, 32";

static char f128u64[] = "  # f128 を u64 に変換\n"
                        "  call __fixunstfdi@plt";

static char f128f32[] = "  # f128 を f32 に変換\n"
                        "  call __trunctfsf2@plt";

static char f128f64[] = "  # f128 を f64 に変換\n"
                        "  call __trunctfdf2@plt";

// すべての型変換表
static char *castTable[11][11] = {
    // clang-format off

  // マッピング先
  // {i8,  i16,     i32,     i64,     u8,     u16,     u32,     u64,     f32,     f64,     f128}
  {NULL,   NULL,    NULL,    NULL,    i64u8,  i64u16,  i64u32,  NULL,    i32f32,  i32f64,  i32f128}, // from i8
  {i64i8,  NULL,    NULL,    NULL,    i64u8,  i64u16,  i64u32,  NULL,    i32f32,  i32f64,  i32f128}, // from i16
  {i64i8,  i64i16,  NULL,    NULL,    i64u8,  i64u16,  i64u32,  NULL,    i32f32,  i32f64,  i32f128}, // from i32
  {i64i8,  i64i16,  i64i32,  NULL,    i64u8,  i64u16,  i64u32,  NULL,    i64f32,  i64f64,  i64f128}, // from i64

  {i64i8,  NULL,    NULL,    NULL,    NULL,   NULL,    NULL,    NULL,    u32f32,  u32f64,  u32f128}, // from u8
  {i64i8,  i64i16,  NULL,    NULL,    i64u8,  NULL,    NULL,    NULL,    u32f32,  u32f64,  u32f128}, // from u16
  {i64i8,  i64i16,  i64i32,  u32i64,  i64u8,  i64u16,  NULL,    u32i64,  u32f32,  u32f64,  u32f128}, // from u32
  {i64i8,  i64i16,  i64i32,  NULL,    i64u8,  i64u16,  i64u32,  NULL,    u64f32,  u64f64,  u64f128}, // from u64

  {f32i8,  f32i16,  f32i32,  f32i64,  f32u8,  f32u16,  f32u32,  f32u64,  NULL,    f32f64,  f32f128}, // from f32
  {f64i8,  f64i16,  f64i32,  f64i64,  f64u8,  f64u16,  f64u32,  f64u64,  f64f32,  NULL,    f64f128}, // from f64
  {f128i8, f128i16, f128i32, f128i64, f128u8, f128u16, f128u32, f128u64, f128f32, f128f64, NULL},    // from f128

    // clang-format on
};

// 型変換
static void cast(Type *From, Type *To) {
  if (To->Kind == TY_VOID)
    return;

  if (To->Kind == TY_BOOL) {
    notZero(From);
    printLn("  # bool へ変換（0→0, 非0→1）");
    printLn("  snez a0, a0");
    return;
  }

  // 获取类型的枚举值
  int T1 = getTypeId(From);
  int T2 = getTypeId(To);
  if (castTable[T1][T2]) {
    printLn("  # 変換関数");
    if (T1 == F128)
      popLD(0);
    printLn("%s", castTable[T1][T2]);
    if (T2 == F128)
      pushLD();
  }
}

// 获取浮点结构体的成员类型
void getFloStMemsTy(Type *Ty, Type **RegsTy, int *Idx) {
  switch (Ty->Kind) {
  case TY_STRUCT:
    // 遍历结构体的成员，获取成员类型
    for (Member *Mem = Ty->Mems; Mem; Mem = Mem->Next)
      getFloStMemsTy(Mem->Ty, RegsTy, Idx);
    return;
  case TY_UNION:
    // 含有联合体不是浮点结构体
    *Idx += 2;
    return;
  case TY_LDOUBLE:
    // long double不是浮点结构体
    *Idx += 2;
    return;
  case TY_ARRAY:
    // 遍历数组的成员，计算是否为浮点结构体
    for (int I = 0; I < Ty->ArrayLen; ++I)
      getFloStMemsTy(Ty->Base, RegsTy, Idx);
    return;
  default:
    // 若为基础类型，且存在可用寄存器时，填充成员的类型
    if (*Idx < 2)
      RegsTy[*Idx] = Ty;
    *Idx += 1;
    return;
  }
}

// 浮動メンバを1つ/2つ含む構造体か
void setFloStMemsTy(Type **Ty, int GP, int FP) {
  Type *T = *Ty;
  T->FSReg1Ty = TyVoid;
  T->FSReg2Ty = TyVoid;

  // 共用体は浮動レジスタで渡さない
  if (T->Kind == TY_UNION)
    return;

  // RTy: RegsType（第1/第2レジスタの型）
  Type *RTy[2] = {TyVoid, TyVoid};
  // 使用可能なレジスタのインデックス
  int RegsTyIdx = 0;
  // 浮動構造体のレジスタ型（なければ TyVoid）
  getFloStMemsTy(T, RTy, &RegsTyIdx);

  // 浮動構造体でないなら終了
  if (RegsTyIdx > 2)
    return;

  if ( // 浮動1メンバ→FP1つ
      (isSFloNum(RTy[0]) && RTy[1] == TyVoid && FP < FP_MAX) ||
      // 浮動+整数→FP1つ+GP1つ
      (isSFloNum(RTy[0]) && isInteger(RTy[1]) && FP < FP_MAX && GP < GP_MAX) ||
      (isInteger(RTy[0]) && isSFloNum(RTy[1]) && FP < FP_MAX && GP < GP_MAX) ||
      // 浮動2メンバ→FP2つ
      (isSFloNum(RTy[0]) && isSFloNum(RTy[1]) && FP + 1 < FP_MAX)) {
    T->FSReg1Ty = RTy[0];
    T->FSReg2Ty = RTy[1];
  }
}

// 为大结构体开辟空间
static int createBSSpace(Node *Args) {
  int BSStack = 0;
  for (Node *Arg = Args; Arg; Arg = Arg->Next) {
    Type *Ty = Arg->Ty;
    // 16バイト超の構造体
    if (Ty->Size > 16 && Ty->Kind == TY_STRUCT) {
      printLn("  # 16バイト超の構造体のためスタック領域を確保");
      int Sz = alignTo(Ty->Size, 8);
      printLn("  addi sp, sp, -%d", Sz);
      // t6指向了最终的 大结构体空间的起始位置
      printLn("  mv t6, sp");
      Depth += Sz / 8;
      BSStack += Sz / 8;
      BSDepth += Sz / 8;
    }
  }
  return BSStack;
}

// 传递结构体的指针
static void pushStruct(Type *Ty) {
  // 16バイト超の構造体
  if (Ty->Size > 16) {
    // 構造体をスタックへコピーし，そのアドレスをレジスタ/スタックで渡す
    // ---------------------------------
    //             大構造体      ←
    // --------------------------------- <- t6
    //      スタック渡し  その他の変数
    // ---------------------------------
    //            大構造体へのポインタ  ↑
    // --------------------------------- <- sp

    // 大構造体のオフセットを計算
    int Sz = alignTo(Ty->Size, 8);
    // BSDepth は残りバイト数（8B 単位）
    BSDepth -= Sz / 8;
    // t6 は大構造体領域の先頭
    int BSOffset = BSDepth * 8;

    printLn("  # 大構造体 %d バイトを %d(t6) にコピー", Sz, BSOffset);
    for (int I = 0; I < Sz; I++) {
      printLn("  lb t0, %d(a0)", I);
      printLn("  sb t0, %d(t6)", BSOffset + I);
    }

    printLn("  # 16バイト超の構造体：そのアドレスをプッシュ");
    printLn("  addi a0, t6, %d", BSOffset);
    push();
    return;
  }

  // 2メンバ（浮動含む）の構造体
  // スタック内の 8 バイト×2 に展開
  if ((isSFloNum(Ty->FSReg1Ty) && Ty->FSReg2Ty != TyVoid) ||
      isSFloNum(Ty->FSReg2Ty)) {
    printLn("  # 2メンバ（浮動含む）構造体をプッシュ");
    printLn("  addi sp, sp, -16");
    Depth += 2;

    printLn("  ld t0, 0(a0)");
    printLn("  sd t0, 0(sp)");

    // 第2部のオフセット（2 メンバ間の最大サイズ）
    int Off = MAX(Ty->FSReg1Ty->Size, Ty->FSReg2Ty->Size);
    printLn("  ld t0, %d(a0)", Off);
    printLn("  sd t0, 8(sp)");

    return;
  }
  // 浮動1メンバのみ，または 16 バイト以下
  char *Str = isSFloNum(Ty->FSReg1Ty) ? "浮動1個のみ" : "16バイト以下";
  int Sz = alignTo(Ty->Size, 8);
  printLn("  # 構造体（%s）に %d バイトの領域を確保", Str, Sz);
  printLn("  addi sp, sp, -%d", Sz);
  Depth += Sz / 8;

  printLn("  # %d バイト確保し %s のメモリをコピー", Sz, Str);
  for (int I = 0; I < Ty->Size; I++) {
    printLn("  lb t0, %d(a0)", I);
    printLn("  sb t0, %d(sp)", I);
  }
  return;
}

// 関数実引数を評価してプッシュ
static void pushArgs2(Node *Args, bool FirstPass) {
  // 引数が空ならそのまま返る
  if (!Args)
    return;

  // 最後の実引数まで再帰
  pushArgs2(Args->Next, FirstPass);

  // 1回目: スタック渡しをプッシュ
  // 2回目: レジスタ渡しをプッシュ
  if ((FirstPass && !Args->PassByStack) ||
      (!FirstPass && Args->PassByStack))
    return;

  printLn("\n  # ↓式を評価してプッシュ↓");
  // 式を評価
  genExpr(Args);
  // 型に応じてプッシュ
  switch (Args->Ty->Kind) {
  case TY_STRUCT:
  case TY_UNION:
    pushStruct(Args->Ty);
    break;
  case TY_FLOAT:
  case TY_DOUBLE:
    pushF();
    break;
  case TY_LDOUBLE:
    printLn("  # long double 実引数を評価してプッシュ");
    LDSP -= 2;
    printLn("  addi sp, sp, -16");
    printLn("  fsd fs%d, 8(sp)", LDSP + 1);
    printLn("  fsd fs%d, 0(sp)", LDSP);
    Depth += 2;
    break;
  default:
    push();
  }
  printLn("  # ↑プッシュ完了↑");
}

// 引数処理後にプッシュ
static int pushArgs(Node *Nd) {
  int Stack = 0, GP = 0, FP = 0;

  // 16バイト超の構造体なら第1レジスタでポインタ渡し
  if (Nd->RetBuffer && Nd->Ty->Size > 16)
    GP++;

  // 全引数を走査（優先: レジスタ → スタック）
  Type *CurArg = Nd->FuncType->Params;
  for (Node *Arg = Nd->Args; Arg; Arg = Arg->Next) {
    // 可変部の引数は整数レジスタ/スタックのみ使用
    if (Nd->FuncType->IsVariadic && CurArg == NULL) {
      int64_t Val = Arg->Val ? Arg->Val : Arg->FVal;
      if (GP < GP_MAX) {
    printLn("  # 可変引数 %ld を a%d で渡す", Val, GP);
        GP++;
      } else {
    printLn("  # 可変引数 %ld をスタックで渡す", Val);
        Arg->PassByStack = true;
        Stack++;
      }
      continue;
    }

    // 実引数を進め，可変部に入ったか確認
    CurArg = CurArg->Next;

    // 実引数の型を取得
    Type *Ty = Arg->Ty;

    switch (Ty->Kind) {
    case TY_STRUCT:
    case TY_UNION: {
      // 判断结构体的类型
      setFloStMemsTy(&Ty, GP, FP);
      // 处理一或两个浮点成员变量的结构体
      if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
        Type *Regs[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
        for (int I = 0; I < 2; ++I) {
          if (isSFloNum(Regs[I]))
            FP++;
          if (isInteger(Regs[I]))
            GP++;
        }
        break;
      }

      // 9~16字节整型结构体用两个寄存器，其他字节结构体用一个寄存器
      int Regs = (8 < Ty->Size && Ty->Size <= 16) ? 2 : 1;
      for (int I = 1; I <= Regs; ++I) {
        if (GP < GP_MAX) {
          GP++;
        } else {
          Arg->PassByStack = true;
          Stack++;
        }
      }
      break;
    }
    case TY_FLOAT:
    case TY_DOUBLE:
      // 浮点优先使用FP，而后是GP，最后是栈传递
      if (FP < FP_MAX) {
        printLn("  # 浮動 %Lf を fa%d で渡す", Arg->FVal, FP);
        FP++;
      } else if (GP < GP_MAX) {
        printLn("  # 浮動 %Lf を a%d で渡す", Arg->FVal, GP);
        GP++;
      } else {
        printLn("  # 浮動 %Lf をスタックで渡す", Arg->FVal);
        Arg->PassByStack = true;
        Stack++;
      }
      break;
    case TY_LDOUBLE:
      for (int I = 1; I <= 2; ++I) {
        if (GP < GP_MAX) {
          printLn("  # LD 第%d部の %Lf を a%d で渡す", I, Arg->FVal, GP);
          GP++;
        } else {
          printLn("  # LD 第%d部の %Lf をスタックで渡す", I, Arg->FVal);
          Stack++;
        }
      }
      break;
    default:
      // 整型优先使用GP，最后是栈传递
      if (GP < GP_MAX) {
        printLn("  # 整数 %ld を a%d で渡す", Arg->Val, GP);
        GP++;
      } else {
        printLn("  # 整数 %ld をスタックで渡す", Arg->Val);
        Arg->PassByStack = true;
        Stack++;
      }
      break;
    }
  }

  // 对齐栈边界
  if ((Depth + Stack) % 2 == 1) {
    printLn("  # スタック境界を 16 バイトに整列");
    printLn("  addi sp, sp, -8");
    Depth++;
    Stack++;
  }

  // 进行压栈
  // 开辟大于16字节的结构体的栈空间
  int BSStack = createBSSpace(Nd->Args);
  // 第一遍对栈传递的变量进行压栈
  pushArgs2(Nd->Args, true);
  // 第二遍对寄存器传递的变量进行压栈
  pushArgs2(Nd->Args, false);
  // 返回栈传递参数的个数

  if (Nd->RetBuffer && Nd->Ty->Size > 16) {
    printLn("  # 戻り値が 16 バイト超の構造体：そのポインタをプッシュ");
    printLn("  li t0, %d", Nd->RetBuffer->Offset);
    printLn("  add a0, fp, t0");
    push();
  }

  return Stack + BSStack;
}

// 复制结构体返回值到缓冲区中
static void copyRetBuffer(Obj *Var) {
  Type *Ty = Var->Ty;
  int GP = 0, FP = 0;

  setFloStMemsTy(&Ty, GP, FP);

  printLn("  # 戻りバッファへコピー");
  printLn("  # struct のアドレスを t0 へロード");
  printLn("  li t0, %d", Var->Offset);
  printLn("  add t1, fp, t0");

  // 处理浮点结构体的情况
  if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
    int Off = 0;
    Type *RTys[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
    for (int I = 0; I < 2; ++I) {
      switch (RTys[I]->Kind) {
      case TY_FLOAT:
        printLn("  fsw fa%d, %d(t1)", FP++, Off);
        Off = 4;
        break;
      case TY_DOUBLE:
        printLn("  fsd fa%d, %d(t1)", FP++, Off);
        Off = 8;
        break;
      case TY_VOID:
        break;
      default:
        printLn("  sd a%d, %d(t1)", GP++, Off);
        Off = 8;
        break;
      }
    }
    return;
  }

  printLn("  # 整数構造体の戻り値をバッファへコピー");
  for (int Off = 0; Off < Ty->Size; Off += 8) {
    switch (Ty->Size - Off) {
    case 1:
      printLn("  sb a%d, %d(t1)", GP++, Off);
      break;
    case 2:
      printLn("  sh a%d, %d(t1)", GP++, Off);
      break;
    case 3:
    case 4:
      printLn("  sw a%d, %d(t1)", GP++, Off);
      break;
    default:
      printLn("  sd a%d, %d(t1)", GP++, Off);
      break;
    }
  }
}

// 拷贝结构体的寄存器
static void copyStructReg(void) {
  Type *Ty = CurrentFn->Ty->ReturnTy;
  int GP = 0, FP = 0;

  printLn("  # 構造体レジスタをコピー");
  printLn("  # レジスタを読み 0(t1)（struct アドレス）へ書き込み");
  printLn("  mv t1, a0");

  setFloStMemsTy(&Ty, GP, FP);

  if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
    int Off = 0;
    Type *RTys[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
    for (int I = 0; I < 2; ++I) {
      switch (RTys[I]->Kind) {
      case TY_FLOAT:
        printLn("  flw fa%d, %d(t1)", FP++, Off);
        Off = 4;
        break;
      case TY_DOUBLE:
        printLn("  fld fa%d, %d(t1)", FP++, Off);
        Off = 8;
        break;
      case TY_VOID:
        break;
      default:
        printLn("  ld a%d, %d(t1)", GP++, Off);
        Off = 8;
        break;
      }
    }
    return;
  }

  printLn("  # 戻りの整数構造体の値をコピー");
  for (int Off = 0; Off < Ty->Size; Off += 8) {
    switch (Ty->Size - Off) {
    case 1:
      printLn("  lb a%d, %d(t1)", GP++, Off);
      break;
    case 2:
      printLn("  lh a%d, %d(t1)", GP++, Off);
      break;
    case 3:
    case 4:
      printLn("  lw a%d, %d(t1)", GP++, Off);
      break;
    default:
      printLn("  ld a%d, %d(t1)", GP++, Off);
      break;
    }
  }
}

// 大于16字节的结构体返回值，需要拷贝内存
static void copyStructMem(void) {
  Type *Ty = CurrentFn->Ty->ReturnTy;
  // 第一个参数，调用者的缓冲区指针
  Obj *Var = CurrentFn->Params;

  printLn("  # 16バイト超の構造体メモリをコピー");
  printLn("  # スタック上の struct アドレスを t1（呼び出し側アドレス）へ");
  printLn("  li t0, %d", Var->Offset);
  printLn("  add t0, fp, t0");
  printLn("  ld t1, 0(t0)");

  printLn("  # 構造体を走査し a0 から全バイトを t1 へコピー");
  for (int I = 0; I < Ty->Size; I++) {
    printLn("  lb t0, %d(a0)", I);
    printLn("  sb t0, %d(t1)", I);
  }
}

// 开辟Alloca空间
static void builtinAlloca(void) {
  // 对齐需要的空间t1到16字节
  //
  // 加上15，然后去除最低位的十六进制数
  printLn("  addi t1, t1, 15");
  printLn("  andi t1, t1, -16");

  // 注意t2与t1大小不定，仅为示例
  // ----------------------------- 旧sp（AllocaBottom所存的sp）
  // - - - - - - - - - - - - - - -
  //  需要在此开辟大小为t1的Alloca区域
  // - - - - - - - - - - - - - - -
  //            ↑
  //    t2（旧sp和新sp间的距离）
  //            ↓
  // ----------------------------- 新sp ← sp

  // 根据t1的值，提升临时区域
  //
  // 加载 旧sp 到t2中
  printLn("  li t0, %d", CurrentFn->AllocaBottom->Offset);
  printLn("  add t0, fp, t0");
  printLn("  ld t2, 0(t0)");
  // t2=旧sp-新sp，将二者的距离存入t2
  printLn("  sub t2, t2, sp");

  // 保存 新sp 存入a0
  printLn("  mv a0, sp");
  // 新sp 开辟（减去）所需要的空间数，结果存入 sp
  // 并将 新sp开辟空间后的栈顶 同时存入t3
  printLn("  sub sp, sp, t1");
  printLn("  mv t3, sp");

  // 注意t2与t1大小不定，仅为示例
  // ----------------------------- 旧sp（AllocaBottom所存的sp）
  //              ↑
  //      t2（旧sp和新sp间的距离）
  //              ↓
  // ----------------------------- 新sp  ← a0
  //              ↑
  //     t1（Alloca所需要的空间数）
  //              ↓
  // ----------------------------- 新新sp ← sp,t3

  // 将 新sp内（底部和顶部间的）数据，复制到 新sp的顶部之上
  printLn("1:");
  // t2为0时跳转到标签2，结束复制
  printLn("beqz t2, 2f");
  // 将 新sp底部 内容复制到 新sp顶部之上
  printLn("  lb t0, 0(a0)");
  printLn("  sb t0, 0(t3)");
  printLn("  addi a0, a0, 1");
  printLn("  addi t3, t3, 1");
  printLn("  addi t2, t2, -1");
  printLn("  j 1b");
  printLn("2:");

  // 注意t2与t1大小不定，仅为示例
  // ------------------------------ 旧sp   a0
  //             ↑                         ↓
  //       t1（Alloca区域）
  //             ↓
  // ------------------------------ 新sp ← a0
  //             ↑
  //  t2（旧sp和新sp间的内容，复制到此）
  //             ↓
  // ------------------------------ 新新sp ← sp

  // 移动alloca_bottom指针
  //
  // 加载 旧sp 到 a0
  printLn("  li t0, %d", CurrentFn->AllocaBottom->Offset);
  printLn("  add t0, fp, t0");
  printLn("  ld a0, 0(t0)");
  // 旧sp 减去开辟的空间 t1
  printLn("  sub a0, a0, t1");
  // 存储a0到alloca底部地址
  printLn("sd a0, 0(t0)");
}

// 生成表达式
static void genExpr(Node *Nd) {
  // .loc 文件编号 行号
  printLn("  .loc %d %d", Nd->Tok->File->FileNo, Nd->Tok->LineNo);

  // 生成各个根节点
  switch (Nd->Kind) {
  // 空表达式
  case ND_NULL_EXPR:
    return;
  // 加载数字到a0

  // float和uint32、double和uint64 共用一份内存空间
  case ND_NUM: {
    switch (Nd->Ty->Kind) {
    case TY_FLOAT: {
      union {
        float F32;
        uint32_t U32;
      } U;
      U.F32 = Nd->FVal;
      printLn("  # a0 を float に変換し値 %Lf を fa0 へ", Nd->FVal);
      printLn("  li a0, %u  # float %Lf", U.U32, Nd->FVal);
      printLn("  fmv.w.x fa0, a0");
      return;
    }
    case TY_DOUBLE: {
      union {
        double F64;
        uint64_t U64;
      } U;
      printLn("  # a0 を double に変換し値 %Lf を fa0 へ", Nd->FVal);
      U.F64 = Nd->FVal;
      printLn("  li a0, %lu  # double %Lf", U.U64, Nd->FVal);
      printLn("  fmv.d.x fa0, a0");
      return;
    }
    case TY_LDOUBLE: {
#ifdef __riscv
      union {
        long double F128;
        uint64_t U64[2];
      } U;
      memset(&U, 0, sizeof(U));
      U.F128 = Nd->FVal;
      printLn("  # long double %Lf を LD スタックへ", Nd->FVal);
      printLn("  li a0, 0x%016lx  # long double %Lf", U.U64[0], Nd->FVal);
      printLn("  fmv.d.x fs%d, a0", LDSP);

      printLn("  li a0, 0x%016lx", U.U64[1]);
      printLn("  fmv.d.x fs%d, a0", LDSP + 1);
      LDSP += 2;
      return;
#endif // __riscv
#ifdef __x86_64
      // 【注意】交叉环境当中，x86_64的long double是f80而非f128
      // 因而此处的支持仅供交叉测试，存在f80->f64的精度的丢失！
      union {
        double F64;
        uint64_t U64;
      } U = {Nd->FVal};
      printLn("  # 【注意】ここでは f80→f64 の精度損失があります！");
      printLn("  # long double %Lf を LD スタックへ", Nd->FVal);
      printLn("  li a0, %lu  # double %Lf", U.U64, Nd->FVal);
      printLn("  fmv.d.x fa0, a0");
      printLn("  call __extenddftf2@plt");
      pushLD();
      return;
#endif // __x86_64
    }
    default:
      printLn("  # %ld を a0 にロード", Nd->Val);
      printLn("  li a0, %ld", Nd->Val);
      return;
    }
  }
  // 对寄存器取反
  case ND_NEG:
    // 计算左部的表达式
    genExpr(Nd->LHS);

    switch (Nd->Ty->Kind) {
    case TY_FLOAT:
      printLn("  # float（fa0）の値を反転");
      printLn("  fneg.s fa0, fa0");
      return;
    case TY_DOUBLE:
      printLn("  # double（fa0）の値を反転");
      printLn("  fneg.d fa0, fa0");
      return;
    case TY_LDOUBLE:
      printLn("  # long double（LD スタック先頭）を反転");
      printLn("  li t0, -1");
      printLn("  slli t0, t0, 63");
      printLn("  xor a%d, a%d, t0", LDSP + 1, LDSP + 1);
      return;
    default:
      // neg a0, a0是sub a0, x0, a0的别名, 即a0=0-a0
      printLn("  # a0 の値を反転");
      printLn("  neg%s a0, a0", Nd->Ty->Size <= 4 ? "w" : "");
      return;
    }
  // 变量
  case ND_VAR:
    // 计算出变量的地址，然后存入a0
    genAddr(Nd);
    load(Nd->Ty);
    return;
  // 成员变量
  case ND_MEMBER: {
    // 计算出成员变量的地址，然后存入a0
    genAddr(Nd);
    load(Nd->Ty);

    Member *Mem = Nd->Mem;
    if (Mem->IsBitfield) {
      printLn("  # 清除位域的成员变量（%d位）未用到的位", Mem->BitWidth);
      // 清除位域成员变量未用到的高位
      printLn("  slli a0, a0, %d", 64 - Mem->BitWidth - Mem->BitOffset);
      // 清除位域成员变量未用到的低位
      if (Mem->Ty->IsUnsigned)
        printLn("  srli a0, a0, %d", 64 - Mem->BitWidth);
      else
        printLn("  srai a0, a0, %d", 64 - Mem->BitWidth);
    }
    return;
  }
  // 解引用
  case ND_DEREF:
    genExpr(Nd->LHS);
    load(Nd->Ty);
    return;
  // 取地址
  case ND_ADDR:
    genAddr(Nd->LHS);
    return;
  // 赋值
  case ND_ASSIGN:
    // 左部是左值，保存值到的地址
    genAddr(Nd->LHS);
    push();
    // 右部是右值，为表达式的值
    genExpr(Nd->RHS);

    // 如果是位域成员变量，需要先从内存中读取当前值，然后合并到新值中
    if (Nd->LHS->Kind == ND_MEMBER && Nd->LHS->Mem->IsBitfield) {
      printLn("\n  # ビットフィールド代入 ↓");
      printLn("  # 代入値 a0 をバックアップ");
      printLn("  mv t2, a0");

      printLn("  # ビットフィールド新値を計算：");
      Member *Mem = Nd->LHS->Mem;
      // 将需要赋的值a0存入t1
      printLn("  mv t1, a0");
      // 构造一个和位域成员长度相同，全为1的二进制数
      printLn("  li t0, %ld", (1L << Mem->BitWidth) - 1);
      // 取交之后，位域长度的低位，存储了我们需要的值，其他位都为0
      printLn("  and t1, t1, t0");
      // 然后将该值左移，相应的位偏移量中
      // 此时我们所需要的位域数值已经处于正确的位置，且其他位置都为0
      printLn("  slli t1, t1, %d", Mem->BitOffset);

      printLn("  # ビットフィールド現値を読み出し：");
      // 将位域值保存的地址加载进来
      printLn("  ld a0, 0(sp)");
      // 读取该地址的值
      load(Mem->Ty);

      printLn("  # メンバ新値を現値へ書き込み：");
      // 位域值对应的掩码，即t1需要写入的位置
      // 掩码位都为1，其余位为0
      long Mask = ((1L << Mem->BitWidth) - 1) << Mem->BitOffset;
      // 对掩码取反，此时，其余位都为1，掩码位都为0
      printLn("  li t0, %ld", ~Mask);
      // 取交，保留除掩码位外所有的位
      printLn("  and a0, a0, t0");
      // 取或，将成员变量的新值写入到掩码位
      printLn("  or a0, a0, t1");

      store(Nd->Ty);
      printLn("  # 戻り値として a0 を復元");
      printLn("  mv a0, t2");
      printLn("  # ビットフィールド代入 完了 ↑\n");
      return;
    }

    store(Nd->Ty);
    return;
  // 文ステートメント（GNU拡張）
  case ND_STMT_EXPR:
    for (Node *N = Nd->Body; N; N = N->Next)
      genStmt(N);
    return;
  // カンマ演算子
  case ND_COMMA:
    genExpr(Nd->LHS);
    genExpr(Nd->RHS);
    return;
  // 型変換
  case ND_CAST:
    genExpr(Nd->LHS);
    cast(Nd->LHS->Ty, Nd->Ty);
    return;
  // メモリのゼロクリア
  case ND_MEMZERO: {
    printLn("  # %s のメモリ %d(fp) を %d バイトゼロクリア", Nd->Var->Name, Nd->Var->Offset,
            Nd->Var->Ty->Size);
    // スタック上の各バイトをゼロにする
    for (int I = 0; I < Nd->Var->Ty->Size; I++) {
      printLn("  li t0, %d", Nd->Var->Offset + I);
      printLn("  add t0, fp, t0");
      printLn("  sb zero, 0(t0)");
    }
    return;
  }
  // 条件运算符
  case ND_COND: {
    int C = count();
    printLn("\n# =====条件演算子 %d===========", C);
    genExpr(Nd->Cond);
    notZero(Nd->Cond->Ty);
    printLn("  # 条件判定，0なら分岐");
    printLn("  beqz a0, .L.else.%d", C);
    genExpr(Nd->Then);
    printLn("  # 条件演算子の末尾へ分岐");
    printLn("  j .L.end.%d", C);
    printLn(".L.else.%d:", C);
    genExpr(Nd->Els);
    printLn(".L.end.%d:", C);
    return;
  }
  // 非运算
  case ND_NOT:
    genExpr(Nd->LHS);
    notZero(Nd->LHS->Ty);
    printLn("  # 論理否定");
    // a0=0则置1，否则为0
    printLn("  seqz a0, a0");
    return;
  // 逻辑与
  case ND_LOGAND: {
    int C = count();
    printLn("\n# =====論理 AND %d===============", C);
    genExpr(Nd->LHS);
    // 判断是否为短路操作
    notZero(Nd->LHS->Ty);
    printLn("  # 左オペランドの短絡判定，0なら分岐");
    printLn("  beqz a0, .L.false.%d", C);
    genExpr(Nd->RHS);
    notZero(Nd->RHS->Ty);
    printLn("  # 右オペランド判定，0なら分岐");
    printLn("  beqz a0, .L.false.%d", C);
    printLn("  li a0, 1");
    printLn("  j .L.end.%d", C);
    printLn(".L.false.%d:", C);
    printLn("  li a0, 0");
    printLn(".L.end.%d:", C);
    return;
  }
  // 逻辑或
  case ND_LOGOR: {
    int C = count();
    printLn("\n# =====論理 OR %d===============", C);
    genExpr(Nd->LHS);
    notZero(Nd->LHS->Ty);
    // 判断是否为短路操作
    printLn("  # 左オペランドの短絡判定，非0なら分岐");
    printLn("  bnez a0, .L.true.%d", C);
    genExpr(Nd->RHS);
    notZero(Nd->RHS->Ty);
    printLn("  # 右オペランド判定，非0なら分岐");
    printLn("  bnez a0, .L.true.%d", C);
    printLn("  li a0, 0");
    printLn("  j .L.end.%d", C);
    printLn(".L.true.%d:", C);
    printLn("  li a0, 1");
    printLn(".L.end.%d:", C);
    return;
  }
  // 按位取非运算
  case ND_BITNOT:
    genExpr(Nd->LHS);
    printLn("  # ビット反転");
    // 这里的 not a0, a0 为 xori a0, a0, -1 的伪码
    printLn("  not a0, a0");
    return;
  // 函数调用
  case ND_FUNCALL: {
    // 对alloca函数进行处理
    if (Nd->LHS->Kind == ND_VAR && !strcmp(Nd->LHS->Var->Name, "alloca")) {
      // 解析alloca函数的参数，确定开辟空间的字节数
      genExpr(Nd->Args);
      // 将需要的字节数存入t1
      printLn("  mv t1, a0");
      // 生成Alloca函数汇编
      builtinAlloca();
      return;
    }

    // 计算所有参数的值，正向压栈
    // 此处获取到栈传递参数的数量
    int StackArgs = pushArgs(Nd);
    genExpr(Nd->LHS);
    // 将a0的值存入t5
    printLn("  mv t5, a0");

    // 反向弹栈，a0->参数1，a1->参数2……
    int GP = 0, FP = 0;

    if (Nd->RetBuffer && Nd->Ty->Size > 16) {
      printLn("  # 返回结构体大于16字节，那么第一个参数指向返回缓冲区");
      pop(GP++);
    }

    // 读取函数形参中的参数类型
    Type *CurArg = Nd->FuncType->Params;
    for (Node *Arg = Nd->Args; Arg; Arg = Arg->Next) {
      // 如果是可变参数函数
      // 匹配到空参数（最后一个）的时候，将剩余的整型寄存器弹栈
      if (Nd->FuncType->IsVariadic && CurArg == NULL) {
        if (GP < GP_MAX) {
          if (Arg->Ty->Kind == TY_LDOUBLE) {
            // 在可变参数函数的调用中
            // LD的第一个寄存器必须是偶数下标，即a0,a2,a4,a6
            if (GP % 2 == 1)
              GP++;
            printLn("  # long double 可変実引数を a%d,a%d で渡す", GP, GP + 1);
            pop(GP++);
            if (GP < GP_MAX)
              pop(GP++);
          } else {
            printLn("  # a%d传递可变实参", GP);
            pop(GP++);
          }
        }
        continue;
      }

      CurArg = CurArg->Next;
      // 实参的类型
      Type *Ty = Arg->Ty;

      switch (Ty->Kind) {
      case TY_STRUCT:
      case TY_UNION: {
        // 判断结构体的类型
        // 结构体的大小
        int Sz = Ty->Size;

        // 处理一或两个浮点成员变量的结构体
        if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
          Type *Regs[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
          for (int I = 0; I < 2; ++I) {
            if (Regs[I]->Kind == TY_FLOAT) {
              printLn("  # %d バイトの float 構造体 %d を fa%d で渡す", Sz, I, FP);
              printLn("  # ポップしてスタック先頭の値を fa%d へ", FP);
              printLn("  flw fa%d, 0(sp)", FP++);
              printLn("  addi sp, sp, 8");
              Depth--;
            }
            if (Regs[I]->Kind == TY_DOUBLE) {
              printLn("  # %d バイトの double 構造体 %d を fa%d で渡す", Sz, I, FP);
              popF(FP++);
            }
            if (isInteger(Regs[I])) {
              printLn("  # %d バイトの浮動構造体 %d を a%d で渡す", Sz, I, GP);
              pop(GP++);
            }
          }
          break;
        }

        // その他の整数/多バイト構造体
        // 9〜16B の整数構造体はレジスタ2個, それ以外は1個
        int Regs = (8 < Sz && Sz <= 16) ? 2 : 1;
        for (int I = 1; I <= Regs; ++I) {
          if (GP < GP_MAX) {
            printLn("  # %d バイトの整数構造体 %d を a%d で渡す", Sz, I, GP);
            pop(GP++);
          }
        }
        break;
      }
      case TY_FLOAT:
      case TY_DOUBLE:
        if (FP < FP_MAX) {
          printLn("  # fa%d传递浮点参数", FP);
          popF(FP++);
        } else if (GP < GP_MAX) {
          printLn("  # a%d传递浮点参数", GP);
          pop(GP++);
        }
        break;
      case TY_LDOUBLE:
        if (GP == GP_MAX - 1) {
          printLn("  # a%d传递LD一半参数", GP);
          pop(GP++);
        }
        if (GP < GP_MAX - 1) {
          printLn("  # a%d传递long double第%d部分参数", GP, 1);
          pop(GP++);
          pop(GP++);
        }
        break;
      default:
        if (GP < GP_MAX) {
          printLn("  # a%d传递整型参数", GP);
          pop(GP++);
        }
        break;
      }
    }

    // 関数呼び出し
    printLn("  # 関数を呼び出し");
    printLn("  jalr t5");

    if (Nd->Ty->Kind == TY_LDOUBLE) {
      printLn("  # long double 戻り値を保存");
      pushLD();
    }

    // スタック渡しに確保した領域を回収
    if (StackArgs) {
      // スタック深さからスタック渡し分のバイト数を減算
      Depth -= StackArgs;
      printLn("  # スタック渡し引数の %d バイトを回収", StackArgs * 8);
      printLn("  addi sp, sp, %d", StackArgs * 8);
      // 記録された大構造体数をクリア
      BSDepth = 0;
    }

    // レジスタの上位不要ビットをクリア
    switch (Nd->Ty->Kind) {
    case TY_BOOL:
      printLn("  # bool 型の上位をクリア");
      printLn("  slli a0, a0, 63");
      printLn("  srli a0, a0, 63");
      return;
    case TY_CHAR:
      printLn("  # char 型の上位をクリア");
      if (Nd->Ty->IsUnsigned) {
        printLn("  slli a0, a0, 56");
        printLn("  srli a0, a0, 56");
      } else {
        printLn("  slli a0, a0, 56");
        printLn("  srai a0, a0, 56");
      }
      return;
    case TY_SHORT:
      printLn("  # short 型の上位をクリア");
      if (Nd->Ty->IsUnsigned) {
        printLn("  slli a0, a0, 48");
        printLn("  srli a0, a0, 48");
      } else {
        printLn("  slli a0, a0, 48");
        printLn("  srai a0, a0, 48");
      }
      return;
    default:
      break;
    }

    // 戻り構造体が 16 バイト未満ならレジスタで返す
    if (Nd->RetBuffer && Nd->Ty->Size <= 16) {
      copyRetBuffer(Nd->RetBuffer);
      printLn("  li t0, %d", Nd->RetBuffer->Offset);
      printLn("  add a0, fp, t0");
    }

    return;
  }
  case ND_LABEL_VAL:
    printLn("  # ラベル %s の値を a0 へロード", Nd->UniqueLabel);
    printLn("  la a0, %s", Nd->UniqueLabel);
    return;
  case ND_CAS: {
    printLn("# =====原子比較交換===============");
    // 当 t1地址中的值t0 与 t3旧值 相同时，将 t1地址中的值 替换为 t4新值
    // 若不同时，将 地址中的值t0 替换掉 旧值
    genExpr(Nd->CasAddr);
    printLn("  mv t1, a0"); // t1地址
    genExpr(Nd->CasOld);
    printLn("  mv t2, a0"); // t2旧值地址
    load(Nd->CasOld->Ty->Base);
    printLn("  mv t3, a0"); // t3旧值
    genExpr(Nd->CasNew);
    printLn("  mv t4, a0"); // t4新值

    // fence はデバイス・メモリの read/write 順序を制御
    // iorw: fence 以前の I/O/メモリ RW は fence より後にならない
    // ow:   fence 以後の出力/書き込みは fence より前にならない
    printLn("  fence iorw, ow");
    printLn("1:");
    // アドレスの値を t0 にロード
    // lr（Load-Reserved）: アドレスをロードし予約
    // aq（acquire）: AMO 以後のメモリ操作が AMO より前に来ない
    printLn("  lr.w.aq t0, (t1)");
    // 値と旧値を比較し，不一致なら抜ける
    printLn("  bne t0, t3, 2f");
    // 新値を書き込み
    // sc（Store-Conditional）: 予約が有効なら書き込み成功
    printLn("  sc.w.aq a0, t4, (t1)");
    // 非 0 なら失敗。リトライ
    printLn("  bnez a0, 1b");

    printLn("2:");
    // t0（現値）- t3（旧値）→ t3
    printLn("  subw t3, t0, t3");
    // t3==0 なら a0=1，非 0 なら a0=0
    printLn("  seqz a0, t3");
    // t3==0 なら末尾へ分岐
    printLn("  beqz t3, 3f");
    // 不一致なら 現値 t0 を旧値アドレス t2 へ書き戻す
    printLn("  sw t0, (t2)");
    printLn("3:");
    return;
  }
  case ND_EXCH: {
    genExpr(Nd->LHS);
    push();
    genExpr(Nd->RHS);
    pop(1);

    int Sz = Nd->LHS->Ty->Base->Size;
    char *S = (Sz <= 4) ? "w" : "d";
    printLn("  # 原子交換");
    printLn("  amoswap.%s.aq a0, a0, (a1)", S);
    return;
  }
  default:
    break;
  }

  // 处理浮点类型
  switch (Nd->LHS->Ty->Kind) {
  case TY_FLOAT:
  case TY_DOUBLE: {
    // 递归到最右节点
    genExpr(Nd->RHS);
    // 将结果压入栈
    pushF();
    // 递归到左节点
    genExpr(Nd->LHS);
    // 将结果弹栈到fa1
    popF(1);

    // 生成各个二叉树节点
    // float对应s(single)后缀，double对应d(double)后缀
    char *Suffix = (Nd->LHS->Ty->Kind == TY_FLOAT) ? "s" : "d";

    switch (Nd->Kind) {
    case ND_ADD:
      printLn("  # fa0+fa1，结果写入fa0");
      printLn("  fadd.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_SUB:
      printLn("  # fa0-fa1，结果写入fa0");
      printLn("  fsub.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_MUL:
      printLn("  # fa0×fa1，结果写入fa0");
      printLn("  fmul.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_DIV:
      printLn("  # fa0÷fa1，结果写入fa0");
      printLn("  fdiv.%s fa0, fa0, fa1", Suffix);
      return;
    case ND_EQ:
      printLn("  # 判断是否fa0=fa1");
      printLn("  feq.%s a0, fa0, fa1", Suffix);
      return;
    case ND_NE:
      printLn("  # 判断是否fa0≠fa1");
      printLn("  feq.%s a0, fa0, fa1", Suffix);
      printLn("  seqz a0, a0");
      return;
    case ND_LT:
      printLn("  # 判断是否fa0<fa1");
      printLn("  flt.%s a0, fa0, fa1", Suffix);
      return;
    case ND_LE:
      printLn("  # 判断是否fa0≤fa1");
      printLn("  fle.%s a0, fa0, fa1", Suffix);
      return;
    default:
      errorTok(Nd->Tok, "invalid expression");
    }
  }
  case TY_LDOUBLE: {
    genExpr(Nd->LHS);
    genExpr(Nd->RHS);

    popLD(2);
    popLD(0);
    switch (Nd->Kind) {
    case ND_ADD:
      printLn("  # long double加法，从栈顶读取32个字节");
      printLn("  call __addtf3@plt");
      pushLD();
      return;
    case ND_SUB:
      printLn("  # long double减法，从栈顶读取32个字节");
      printLn("  call __subtf3@plt");
      pushLD();
      return;
    case ND_MUL:
      printLn("  # long double乘法，从栈顶读取32个字节");
      printLn("  call __multf3@plt");
      pushLD();
      return;
    case ND_DIV:
      printLn("  # long double除法，从栈顶读取32个字节");
      printLn("  call __divtf3@plt");
      pushLD();
      return;
    case ND_EQ:
      printLn("  # long double相等，从栈顶读取32个字节");
      printLn("  call __eqtf2@plt");
      printLn("  seqz a0, a0");
      return;
    case ND_NE:
      printLn("  # long double不等，从栈顶读取32个字节");
      printLn("  call __netf2@plt");
      printLn("  snez a0, a0");
      return;
    case ND_LT:
      printLn("  # long double小于，从栈顶读取32个字节");
      printLn("  call __lttf2@plt");
      printLn("  slti a0, a0, 0");
      return;
    case ND_LE:
      printLn("  # long double小于等于，从栈顶读取32个字节");
      printLn("  call __letf2@plt");
      printLn("  slti a0, a0, 1");
      return;
    default:
      errorTok(Nd->Tok, "invalid expression");
    }
  }
  default:
    break;
  }

  // 递归到最右节点
  genExpr(Nd->RHS);
  // 将结果压入栈
  push();
  // 递归到左节点
  genExpr(Nd->LHS);
  // 将结果弹栈到a1
  pop(1);

  // 生成各个二叉树节点
  char *Suffix = Nd->LHS->Ty->Kind == TY_LONG || Nd->LHS->Ty->Base ? "" : "w";
  switch (Nd->Kind) {
  case ND_ADD: // + a0=a0+a1
    printLn("  # a0+a1，结果写入a0");
    printLn("  add%s a0, a0, a1", Suffix);
    return;
  case ND_SUB: // - a0=a0-a1
    printLn("  # a0-a1，结果写入a0");
    printLn("  sub%s a0, a0, a1", Suffix);
    return;
  case ND_MUL: // * a0=a0*a1
    printLn("  # a0×a1，结果写入a0");
    printLn("  mul%s a0, a0, a1", Suffix);
    return;
  case ND_DIV: // / a0=a0/a1
    printLn("  # a0÷a1，结果写入a0");
    if (Nd->Ty->IsUnsigned)
      printLn("  divu%s a0, a0, a1", Suffix);
    else
      printLn("  div%s a0, a0, a1", Suffix);
    return;
  case ND_MOD: // % a0=a0%a1
    printLn("  # a0%%a1，结果写入a0");
    if (Nd->Ty->IsUnsigned)
      printLn("  remu%s a0, a0, a1", Suffix);
    else
      printLn("  rem%s a0, a0, a1", Suffix);
    return;
  case ND_BITAND: // & a0=a0&a1
    printLn("  # a0&a1，结果写入a0");
    printLn("  and a0, a0, a1");
    return;
  case ND_BITOR: // | a0=a0|a1
    printLn("  # a0|a1，结果写入a0");
    printLn("  or a0, a0, a1");
    return;
  case ND_BITXOR: // ^ a0=a0^a1
    printLn("  # a0^a1，结果写入a0");
    printLn("  xor a0, a0, a1");
    return;
  case ND_EQ:
  case ND_NE:
    if (Nd->LHS->Ty->IsUnsigned && Nd->LHS->Ty->Kind == TY_INT) {
      printLn("  # 左部是U32类型，需要截断");
      printLn("slli a0, a0, 32");
      printLn("srli a0, a0, 32");
    };
    if (Nd->RHS->Ty->IsUnsigned && Nd->RHS->Ty->Kind == TY_INT) {
      printLn("  # 右部是U32类型，需要截断");
      printLn("slli a1, a1, 32");
      printLn("srli a1, a1, 32");
    };
    // a0=a0^a1，异或指令
    printLn("  # 判断是否a0%sa1", Nd->Kind == ND_EQ ? "=" : "≠");
    printLn("  xor a0, a0, a1");

    if (Nd->Kind == ND_EQ)
      // a0==a1
      // a0=a0^a1, sltiu a0, a0, 1
      // 等于0则置1
      printLn("  seqz a0, a0");
    else
      // a0!=a1
      // a0=a0^a1, sltu a0, x0, a0
      // 不等于0则置1
      printLn("  snez a0, a0");
    return;
  case ND_LT:
    printLn("  # 判断a0<a1");
    if (Nd->LHS->Ty->IsUnsigned)
      printLn("  sltu a0, a0, a1");
    else
      printLn("  slt a0, a0, a1");
    return;
  case ND_LE:
    // a0<=a1等价于
    // a0=a1<a0, a0=a0^1
    printLn("  # 判断是否a0≤a1");
    if (Nd->LHS->Ty->IsUnsigned)
      printLn("  sltu a0, a1, a0");
    else
      printLn("  slt a0, a1, a0");
    printLn("  xori a0, a0, 1");
    return;
  case ND_SHL:
    printLn("  # a0逻辑左移a1位");
    printLn("  sll%s a0, a0, a1", Suffix);
    return;
  case ND_SHR:
    printLn("  # a0算术右移a1位");
    if (Nd->Ty->IsUnsigned)
      printLn("  srl%s a0, a0, a1", Suffix);
    else
      printLn("  sra%s a0, a0, a1", Suffix);
    return;
  default:
    break;
  }

  errorTok(Nd->Tok, "invalid expression");
}

// 生成语句
static void genStmt(Node *Nd) {
  // .loc 文件编号 行号
  printLn("  .loc %d %d", Nd->Tok->File->FileNo, Nd->Tok->LineNo);

  switch (Nd->Kind) {
  // 生成if语句
  case ND_IF: {
    // 代码段计数
    int C = count();
    printLn("\n# =====分支语句%d==============", C);
    // 生成条件内语句
    printLn("\n# Cond表达式%d", C);
    genExpr(Nd->Cond);
    notZero(Nd->Cond->Ty);
    // 判断结果是否为0，为0则跳转到else标签
    printLn("  # 若a0为0，则跳转到分支%d的.L.else.%d段", C, C);
    printLn("  beqz a0, .L.else.%d", C);
    // 生成符合条件后的语句
    printLn("\n# Then语句%d", C);
    genStmt(Nd->Then);
    // 执行完后跳转到if语句后面的语句
    printLn("  # 跳转到分支%d的.L.end.%d段", C, C);
    printLn("  j .L.end.%d", C);
    // else代码块，else可能为空，故输出标签
    printLn("\n# Else语句%d", C);
    printLn("# 分支%d的.L.else.%d段标签", C, C);
    printLn(".L.else.%d:", C);
    // 生成不符合条件后的语句
    if (Nd->Els)
      genStmt(Nd->Els);
    // 结束if语句，继续执行后面的语句
    printLn("\n# 分支%d的.L.end.%d段标签", C, C);
    printLn(".L.end.%d:", C);
    return;
  }
  // 生成for或while循环语句
  case ND_FOR: {
    // 代码段计数
    int C = count();
    printLn("\n# =====循环语句%d===============", C);
    // 生成初始化语句
    if (Nd->Init) {
      printLn("\n# Init语句%d", C);
      genStmt(Nd->Init);
    }
    // 输出循环头部标签
    printLn("\n# 循环%d的.L.begin.%d段标签", C, C);
    printLn(".L.begin.%d:", C);
    // 处理循环条件语句
    printLn("# Cond表达式%d", C);
    if (Nd->Cond) {
      // 生成条件循环语句
      genExpr(Nd->Cond);
      notZero(Nd->Cond->Ty);
      // 判断结果是否为0，为0则跳转到结束部分
      printLn("  # 若a0为0，则跳转到循环%d的%s段", C, Nd->BrkLabel);
      printLn("  beqz a0, %s", Nd->BrkLabel);
    }
    // 生成循环体语句
    printLn("\n# Then语句%d", C);
    genStmt(Nd->Then);
    // continue标签语句
    printLn("%s:", Nd->ContLabel);
    // 处理循环递增语句
    if (Nd->Inc) {
      printLn("\n# Inc语句%d", C);
      // 生成循环递增语句
      genExpr(Nd->Inc);
    }
    // 跳转到循环头部
    printLn("  # 跳转到循环%d的.L.begin.%d段", C, C);
    printLn("  j .L.begin.%d", C);
    // 输出循环尾部标签
    printLn("\n# 循环%d的%s段标签", C, Nd->BrkLabel);
    printLn("%s:", Nd->BrkLabel);
    return;
  }
  // 生成do while语句
  case ND_DO: {
    int C = count();
    printLn("\n# =====do while语句%d============", C);
    printLn("\n# begin语句%d", C);
    printLn(".L.begin.%d:", C);

    printLn("\n# Then语句%d", C);
    genStmt(Nd->Then);

    printLn("\n# Cond语句%d", C);
    printLn("%s:", Nd->ContLabel);
    genExpr(Nd->Cond);

    notZero(Nd->Cond->Ty);
    printLn("  # 跳转到循环%d的.L.begin.%d段", C, C);
    printLn("  bnez a0, .L.begin.%d", C);

    printLn("\n# 循环%d的%s段标签", C, Nd->BrkLabel);
    printLn("%s:", Nd->BrkLabel);
    return;
  }
  case ND_SWITCH:
    printLn("\n# =====switch语句===============");
    genExpr(Nd->Cond);

    printLn("  # 遍历跳转到值等于a0的case标签");
    for (Node *N = Nd->CaseNext; N; N = N->CaseNext) {
      // 常规case，case范围前后一致
      if (N->Begin == N->End) {
        printLn("  li t0, %ld", N->Begin);
        printLn("  beq a0, t0, %s", N->Label);
        continue;
      }

      printLn("  # 处理case范围值：%ld...%ld", N->Begin, N->End);
      // a0为当前switch中的值
      printLn("  mv t1, a0");
      printLn("  li t0, %ld", N->Begin);
      // t1存储了a0-Begin的值
      printLn("  sub t1, t1, t0");
      // t2存储了End-Begin的值
      printLn("  li t2, %ld", N->End - N->Begin);
      // 如果0<=t1<=t2，那么就说明在范围内
      printLn("  bleu t1, t2, %s", N->Label);
    }

    if (Nd->DefaultCase) {
      printLn("  # 跳转到default标签");
      printLn("  j %s", Nd->DefaultCase->Label);
    }

    printLn("  # 结束switch，跳转break标签");
    printLn("  j %s", Nd->BrkLabel);
    // 生成case标签的语句
    genStmt(Nd->Then);
    printLn("# switch的break标签，结束switch");
    printLn("%s:", Nd->BrkLabel);
    return;
  case ND_CASE:
    printLn("# case标签，值为%ld", Nd->Val);
    printLn("%s:", Nd->Label);
    genStmt(Nd->LHS);
    return;
  // 生成代码块，遍历代码块的语句链表
  case ND_BLOCK:
    for (Node *N = Nd->Body; N; N = N->Next)
      genStmt(N);
    return;
  // goto语句
  case ND_GOTO:
    printLn("  j %s", Nd->UniqueLabel);
    return;
  case ND_GOTO_EXPR:
    printLn("  # GOTO跳转到存储标签的地址");
    genExpr(Nd->LHS);
    printLn("  jr a0");
    return;
  // 标签语句
  case ND_LABEL:
    printLn("%s:", Nd->UniqueLabel);
    genStmt(Nd->LHS);
    return;
  // 生成return语句
  case ND_RETURN:
    printLn("# 返回语句");
    // 不为空返回语句时
    if (Nd->LHS) {
      genExpr(Nd->LHS);

      Type *Ty = Nd->LHS->Ty;
      // 处理结构体作为返回值的情况
      if (Ty->Kind == TY_STRUCT || Ty->Kind == TY_UNION) {
        if (Ty->Size <= 16)
          // 小于16字节拷贝寄存器
          copyStructReg();
        else
          // 大于16字节拷贝内存
          copyStructMem();
      }
      if (Ty->Kind == TY_LDOUBLE) {
        printLn("  # LD类型作为返回值时，需要将LD栈顶元素拷贝到a0，a1中");
        popLD(0);
      }
    }
    // 无条件跳转语句，跳转到.L.return段
    // j offset是 jal x0, offset的别名指令
    printLn("  # 跳转到.L.return.%s段", CurrentFn->Name);
    printLn("  j .L.return.%s", CurrentFn->Name);
    return;
  // 生成表达式语句
  case ND_EXPR_STMT:
    genExpr(Nd->LHS);
    return;
  case ND_ASM:
    printLn("  # 插入的ASM代码片段");
    printLn("  %s", Nd->AsmStr);
    return;
  default:
    break;
  }

  errorTok(Nd->Tok, "invalid statement");
}

// 根据变量的链表计算出偏移量
static void assignLVarOffsets(Obj *Prog) {
  // 为每个函数计算其变量所用的栈空间
  for (Obj *Fn = Prog; Fn; Fn = Fn->Next) {
    // 如果不是函数,则终止
    if (!Fn->IsFunction)
      continue;

    // 反向偏移量
    int ReOffset = 16;

    // 被调用函数将自己的ra、fp也压入栈了，
    // 所以fp+16才是上一级函数的sp顶
    // /             栈保存的N个变量            / N*8
    // /---------------本级函数----------------/ sp
    // /                 ra                  / sp-8
    // /                fp（上一级）           / fp = sp-16

    // 寄存器传递
    int GP = 0, FP = 0;
    // 寄存器传递的参数
    for (Obj *Var = Fn->Params; Var; Var = Var->Next) {
      // 读取形参类型
      Type *Ty = Var->Ty;

      switch (Ty->Kind) {
      case TY_STRUCT:
      case TY_UNION:
        setFloStMemsTy(&Ty, GP, FP);

        // 计算浮点结构体所使用的寄存器
        // 这里一定寄存器可用，所以不判定是否超过寄存器最大值
        if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
          Type *Regs[2] = {Ty->FSReg1Ty, Ty->FSReg2Ty};
          for (int I = 0; I < 2; ++I) {
            if (isSFloNum(Regs[I]))
              FP++;
            if (isInteger(Regs[I]))
              GP++;
          }
          continue;
        }

        // 9～16字节的结构体要用两个寄存器
        if (8 < Ty->Size && Ty->Size <= 16) {
          // 如果只剩一个寄存器，那么剩余一半通过栈传递
          if (GP == GP_MAX - 1)
            Var->IsHalfByStack = true;
          if (GP < GP_MAX)
            GP++;
        }
        // 所有字节的结构体都在至少使用了一个寄存器（如果可用）
        if (GP < GP_MAX) {
          GP++;
          continue;
        }

        // 没使用寄存器的需要栈传递
        break;
      case TY_FLOAT:
      case TY_DOUBLE:
        if (FP < FP_MAX) {
          printLn(" #  FP%d传递浮点变量%s", FP, Var->Name);
          FP++;
          continue;
        } else if (GP < GP_MAX) {
          printLn(" #  GP%d传递浮点变量%s", GP, Var->Name);
          GP++;
          continue;
        }
        break;
      case TY_LDOUBLE:
        if (GP == GP_MAX - 1) {
          printLn(" #  GP%d传递一半浮点变量%s，另一半栈传递", GP, Var->Name);
          Var->IsHalfByStack = true;
          GP++;
          break;
        }
        if (GP < GP_MAX - 1) {
          printLn(" #  GP%d传递浮点变量%s", GP, Var->Name);
          GP++;
          GP++;
          continue;
        }
        break;
      default:
        if (GP < GP_MAX) {
          printLn(" #  GP%d传递整型变量%s", GP, Var->Name);
          GP++;
          continue;
        }
        break;
      }

      // 栈传递

      // 对齐变量
      ReOffset = alignTo(ReOffset, 8);
      // 为栈传递变量赋一个偏移量，或者说是反向栈地址
      Var->Offset = ReOffset;
      // 栈传递变量计算反向偏移量，传递一半的结构体减去寄存器的部分
      ReOffset += Var->IsHalfByStack ? Var->Ty->Size - 8 : Var->Ty->Size;
      printLn(" #  栈传递变量%s偏移量%d", Var->Name, Var->Offset);
    }

    // 可变参数函数VaArea的偏移量
    if (Fn->VaArea) {
      ReOffset = alignTo(ReOffset, 8);
      Fn->VaArea->Offset = ReOffset;
    }

    int Offset = 0;
    // 读取所有变量
    for (Obj *Var = Fn->Locals; Var; Var = Var->Next) {
      // 栈传递的变量的直接跳过
      if (Var->Offset && !Var->IsHalfByStack)
        continue;

      // 数组超过16字节时，对齐值至少为16字节
      int Align = (Var->Ty->Kind == TY_ARRAY && Var->Ty->Size >= 16)
                      ? MAX(16, Var->Align)
                      : Var->Align;

      // 每个变量分配空间
      Offset += Var->Ty->Size;
      // 对齐变量
      Offset = alignTo(Offset, Align);
      // 为每个变量赋一个偏移量，或者说是栈中地址
      Var->Offset = -Offset;
      printLn(" #  寄存器传递变量%s偏移量%d", Var->Name, Var->Offset);
    }
    // 将栈对齐到16字节
    Fn->StackSize = alignTo(Offset, 16);
  }
}

// 返回2^N的N值
static int simpleLog2(int Num) {
  int N = Num;
  int E = 0;
  while (N > 1) {
    if (N % 2 == 1)
      error("Wrong value %d", Num);
    N /= 2;
    ++E;
  }
  return E;
}

static void emitData(Obj *Prog) {
  for (Obj *Var = Prog; Var; Var = Var->Next) {
    // 跳过是函数或者无定义的变量
    if (Var->IsFunction || !Var->IsDefinition)
      continue;

    if (Var->IsStatic) {
      printLn("\n  # static全局变量%s", Var->Name);
      printLn("  .local %s", Var->Name);
    } else {
      printLn("\n  # 全局变量%s", Var->Name);
      printLn("  .globl %s", Var->Name);
    }

    printLn("  # 对齐全局变量");
    if (!Var->Align)
      error("Align can not be 0!");
    // 数组超过16字节时，对齐值至少为16字节
    int Align = (Var->Ty->Kind == TY_ARRAY && Var->Ty->Size >= 16)
                    ? MAX(16, Var->Align)
                    : Var->Align;

    // 为试探性的全局变量生成指示
    if (OptFCommon && Var->IsTentative) {
      printLn("  .comm %s, %d, %d", Var->Name, Var->Ty->Size, Align);
      continue;
    }

    // 判断是否有初始值
    // .data 或 .tdata 段
    if (Var->InitData) {
      if (Var->IsTLS) {
        printLn("\n  # TLS数据段标签");
        // a：可加载执行
        // w：可写
        // T：线程局部的
        // progbits：包含程序数据
        printLn("  .section .tdata,\"awT\",@progbits");
      } else {
        printLn("\n  # 数据段标签");
        printLn("  .data");
      }

      printLn("  .type %s, @object", Var->Name);
      printLn("  .size %s, %d", Var->Name, Var->Ty->Size);
      printLn("  .align %d", simpleLog2(Align));
      printLn("%s:", Var->Name);
      Relocation *Rel = Var->Rel;
      int Pos = 0;
      while (Pos < Var->Ty->Size) {
        if (Rel && Rel->Offset == Pos) {
          // 使用其他变量进行初始化
          printLn("  # %s全局变量", Var->Name);
          printLn("  .quad %s%+ld", *Rel->Label, Rel->Addend);
          Rel = Rel->Next;
          Pos += 8;
        } else {
          // 打印出字符串的内容，包括转义字符
          char C = Var->InitData[Pos++];
          if (isprint(C))
            printLn("  .byte %d\t# 字符：%c", C, C);
          else
            printLn("  .byte %d", C);
        }
      }
      continue;
    }

    // bss段未给数据分配空间，只记录数据所需空间的大小
    // .bss 或 .tbss 段
    if (Var->IsTLS) {
      // nobits：不含数据
      printLn("\n  # TLS未初始化的全局变量");
      printLn("  .section .tbss,\"awT\",@nobits");
    } else {
      printLn("\n  # 未初始化的全局变量");
      printLn("  .bss");
    }

    printLn("  .align %d", simpleLog2(Align));
    printLn("%s:", Var->Name);
    printLn("  # 全局变量零填充%d字节", Var->Ty->Size);
    printLn("  .zero %d", Var->Ty->Size);
  }
}

// 将浮点寄存器的值存入栈中
static void storeFloat(int Reg, int Offset, int Sz) {
  printLn("  # 将fa%d寄存器的值存入%d(fp)的栈地址", Reg, Offset);
  printLn("  li t0, %d", Offset);
  printLn("  add t0, fp, t0");

  switch (Sz) {
  case 4:
    printLn("  fsw fa%d, 0(t0)", Reg);
    return;
  case 8:
    printLn("  fsd fa%d, 0(t0)", Reg);
    return;
  default:
    unreachable();
  }
}

// 将整形寄存器的值存入栈中
static void storeGeneral(int Reg, int Offset, int Size) {
  printLn("  # 将a%d寄存器的值存入%d(fp)的栈地址", Reg, Offset);
  printLn("  li t0, %d", Offset);
  printLn("  add t0, fp, t0");
  switch (Size) {
  case 1:
    printLn("  sb a%d, 0(t0)", Reg);
    return;
  case 2:
    printLn("  sh a%d, 0(t0)", Reg);
    return;
  case 4:
    printLn("  sw a%d, 0(t0)", Reg);
    return;
  case 8:
    printLn("  sd a%d, 0(t0)", Reg);
    return;
  }
  unreachable();
}

// 存储结构体到栈内开辟的空间
static void storeStruct(int Reg, int Offset, int Size) {
  // t0是结构体的地址，复制t0指向的结构体到栈相应的位置中
  for (int I = 0; I < Size; I++) {
    printLn("  lb t0, %d(a%d)", I, Reg);

    printLn("  li t1, %d", Offset + I);
    printLn("  add t1, fp, t1");
    printLn("  sb t0, 0(t1)");
  }
  return;
}

// 代码生成入口函数，包含代码块的基础信息
void emitText(Obj *Prog) {
  // 为每个函数单独生成代码
  for (Obj *Fn = Prog; Fn; Fn = Fn->Next) {
    if (!Fn->IsFunction || !Fn->IsDefinition)
      continue;

    // 如果未存活，就不生成static inline函数
    if (!Fn->IsLive)
      continue;

    if (Fn->IsStatic) {
      printLn("\n  # 定义局部%s函数", Fn->Name);
      printLn("  .local %s", Fn->Name);
    } else {
      printLn("\n  # 定义全局%s函数", Fn->Name);
      printLn("  .globl %s", Fn->Name);
    }

    printLn("  # 代码段标签");
    printLn("  .text");
    printLn("# =====%s段开始===============", Fn->Name);
    printLn("# %s段标签", Fn->Name);
    printLn("  .type %s, @function", Fn->Name);
    printLn("%s:", Fn->Name);
    CurrentFn = Fn;

    // 栈布局
    // ------------------------------//
    //        上一级函数的栈传递参数
    // ==============================// sp（本级函数）
    //         VaArea(寄存器可用时)
    // ------------------------------// sp = sp（本级函数）-VaArea
    //              ra
    //-------------------------------// ra = sp-8
    //              fp
    //-------------------------------// fp = sp-16
    //             变量
    //-------------------------------// sp = sp-16-StackSize
    //           表达式计算
    //-------------------------------//

    // Prologue, 前言

    // 为剩余的整型寄存器开辟空间，用于存储可变参数
    int VaSize = 0;
    if (Fn->VaArea) {
      // 遍历正常参数所使用的浮点、整型寄存器
      int GPs = 0, FPs = 0;

      // 可变参数函数，非可变的参数使用寄存器
      for (Obj *Var = Fn->Params; Var; Var = Var->Next) {
        // 计算所有类型所使用的寄存器数量
        Type *Ty = Var->Ty;
        switch (Ty->Kind) {
        case TY_STRUCT:
        case TY_UNION:
          // 对寄存器传递的参数
          if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
            // 浮点结构体的第一部分
            isSFloNum(Ty->FSReg1Ty) ? FPs++ : GPs++;
            // 浮点结构体的第二部分
            if (Ty->FSReg2Ty->Kind != TY_VOID)
              isSFloNum(Ty->FSReg2Ty) ? FPs++ : GPs++;
            break;
          }

          // 小于8字节的结构体、大于16字节的结构体
          // 一半寄存器，一半栈传递的结构体
          if (Ty->Size < 8 || Ty->Size > 16 || Var->IsHalfByStack)
            GPs++;
          // 处理大于8字节，小于16字节的结构体
          else
            GPs += 2;
          break;
        case TY_FLOAT:
        case TY_DOUBLE:
          // 可变参数函数中的浮点参数
          FPs < FP_MAX ? FPs++ : GPs++;
          break;
        default:
          // 可变参数函数中的整型参数
          GPs++;
          break;
        }
      }

      // 需确保使用到了整形寄存器，否则不开辟此空间
      if (GPs < GP_MAX) {
        VaSize = (8 - GPs) * 8;
        printLn("  # VaArea的区域，大小为%d", VaSize);
        printLn("  addi sp, sp, -%d", VaSize);
      }
    }

    // 将ra寄存器压栈,保存ra的值
    printLn("  # 将ra寄存器压栈,保存ra的值");
    printLn("  addi sp, sp, -16");
    printLn("  sd ra, 8(sp)");
    // 将fp压入栈中，保存fp的值
    printLn("  # 将fp压栈，fp属于“被调用者保存”的寄存器，需要恢复原值");
    printLn("  sd fp, 0(sp)");
    // 将sp写入fp
    printLn("  # 将sp的值写入fp");
    printLn("  mv fp, sp");

    printLn("  # 保存所有的fs0~fs11寄存器");
    for (int I = 0; I <= 11; ++I)
      printLn("  fsgnj.d ft%d, fs%d, fs%d", I, I, I);

    // 偏移量为实际变量所用的栈大小
    printLn("  # sp腾出StackSize大小的栈空间");
    printLn("  li t0, -%d", Fn->StackSize);
    printLn("  add sp, sp, t0");
    // Alloca函数
    printLn("  # 将当前的sp值，存入到Alloca区域的底部");
    printLn("  li t0, %d", Fn->AllocaBottom->Offset);
    printLn("  add t0, t0, fp");
    printLn("  sd sp, 0(t0)");

    // 正常传递的形参
    // 记录整型寄存器，浮点寄存器使用的数量
    int GP = 0, FP = 0;
    for (Obj *Var = Fn->Params; Var; Var = Var->Next) {
      // 不处理栈传递的形参，栈传递一半的结构体除外
      if (Var->Offset > 0 && !Var->IsHalfByStack)
        continue;

      Type *Ty = Var->Ty;

      // 正常传递的形参
      switch (Ty->Kind) {
      case TY_STRUCT:
      case TY_UNION:
        printLn("  # 对寄存器传递的结构体进行压栈");

        // 处理浮点结构体
        if (isSFloNum(Ty->FSReg1Ty) || isSFloNum(Ty->FSReg2Ty)) {
          printLn("  # 浮点结构体的第一部分进行压栈");
          // 浮点结构体的第一部分，偏移量为0
          int Sz1 = Var->Ty->FSReg1Ty->Size;
          if (isSFloNum(Ty->FSReg1Ty))
            storeFloat(FP++, Var->Offset, Sz1);
          else
            storeGeneral(GP++, Var->Offset, Sz1);

          // 浮点结构体的第二部分
          if (Ty->FSReg2Ty->Kind != TY_VOID) {
            printLn("  # 浮点结构体的第二部分进行压栈");
            int Sz2 = Ty->FSReg2Ty->Size;
            // 结构体内偏移量为两个成员间的最大尺寸
            int Off = MAX(Sz1, Sz2);

            if (isSFloNum(Ty->FSReg2Ty))
              storeFloat(FP++, Var->Offset + Off, Sz2);
            else
              storeGeneral(GP++, Var->Offset + Off, Sz2);
          }
          break;
        }

        // 大于16字节的结构体参数，通过访问它的地址，
        // 将原来位置的结构体复制到栈中
        if (Ty->Size > 16) {
          printLn("  # 大于16字节的结构体进行压栈");
          storeStruct(GP++, Var->Offset, Ty->Size);
          break;
        }

        // 一半寄存器、一半栈传递的结构体
        if (Var->IsHalfByStack) {
          printLn("  # 一半寄存器、一半栈传递结构体进行压栈");
          storeGeneral(GP++, Var->Offset, 8);
          // 拷贝栈传递的一半结构体到当前栈中
          for (int I = 0; I != Var->Ty->Size - 8; ++I) {
            printLn("  lb t0, %d(fp)", 16 + I);

            printLn("  li t1, %d", Var->Offset + 8 + I);
            printLn("  add t1, fp, t1");
            printLn("  sb t0, 0(t1)");
          }
          break;
        }

        // 处理小于16字节的结构体
        if (Ty->Size <= 16)
          storeGeneral(GP++, Var->Offset, MIN(8, Ty->Size));
        if (Ty->Size > 8)
          storeGeneral(GP++, Var->Offset + 8, Ty->Size - 8);
        break;
      case TY_FLOAT:
      case TY_DOUBLE:
        // 正常传递的浮点形参
        if (FP < FP_MAX) {
          printLn("  # 将浮点形参%s的寄存器fa%d的值压栈", Var->Name, FP);
          storeFloat(FP++, Var->Offset, Var->Ty->Size);
        } else {
          printLn("  # 将浮点形参%s的寄存器a%d的值压栈", Var->Name, GP);
          storeGeneral(GP++, Var->Offset, Var->Ty->Size);
        }
        break;
      case TY_LDOUBLE:
        if (Var->IsHalfByStack) {
          printLn("  # 将LD形参%s的第一部分a%d的值压栈", Var->Name, GP);
          printLn("  ld t0, 16(fp)");
          printLn("  sd t0, %d(fp)", Var->Offset + 8);
          break;
        }
        if (GP < GP_MAX - 1) {
          printLn("  # 将LD形参%s的第一部分a%d的值压栈", Var->Name, GP);
          storeGeneral(GP++, Var->Offset, 8);
          printLn("  # 将LD形参%s的第二部分a%d的值压栈", Var->Name, GP);
          storeGeneral(GP++, Var->Offset + 8, 8);
        }
        break;
      default:
        // 正常传递的整型形参
        printLn("  # 将整型形参%s的寄存器a%d的值压栈", Var->Name, GP);
        storeGeneral(GP++, Var->Offset, Var->Ty->Size);
        break;
      }
    }

    // 可变参数
    if (Fn->VaArea) {
      // 可变参数位置位于本函数的最上方，即sp的位置，也就是fp+16

      // 可变参数存入__va_area__，注意最多为7个
      int Offset = Fn->VaArea->Offset;
      printLn("  # 可变参数VaArea的偏移量为%d", Fn->VaArea->Offset);
      while (GP < GP_MAX) {
        printLn("  # 可变参数，相对%s的偏移量为%d", Fn->VaArea->Name,
                Offset - Fn->VaArea->Offset);
        storeGeneral(GP++, Offset, 8);
        Offset += 8;
      }
    }

    // 生成语句链表的代码
    printLn("# =====%s段主体===============", Fn->Name);
    genStmt(Fn->Body);
    assert(Depth == 0);

    // main默认返回0
    if (strcmp(Fn->Name, "main") == 0)
        printLn("  li a0, 0");

    // Epilogue，后语
    // 输出return段标签
    printLn("# =====%s段结束===============", Fn->Name);
    printLn("# return段标签");
    printLn(".L.return.%s:", Fn->Name);

    printLn("  # 恢复所有的fs0~fs11寄存器");
    for (int I = 0; I <= 11; ++I)
        printLn("  fsgnj.d fs%d, ft%d, ft%d", I, I, I);

    // 将fp的值改写回sp
    printLn("  # 将fp的值写回sp");
    printLn("  mv sp, fp");
    // 将最早fp保存的值弹栈，恢复fp。
    printLn("  # 将最早fp保存的值弹栈，恢复fp和sp");
    printLn("  ld fp, 0(sp)");
    // 将ra寄存器弹栈,恢复ra的值
    printLn("  # 将ra寄存器弹栈,恢复ra的值");
    printLn("  ld ra, 8(sp)");
    printLn("  addi sp, sp, 16");

    // 归还可变参数寄存器压栈的那一部分
    if (Fn->VaArea && VaSize > 0) {
      printLn("  # 归还VaArea的区域，大小为%d", VaSize);
      printLn("  addi sp, sp, %d", VaSize);
    }

    // 返回
    printLn("  # 返回a0值给系统调用");
    printLn("  ret");
  }
}

void codegen(Obj *Prog, FILE *Out) {
  // 设置目标文件的文件流指针
  OutputFile = Out;

  // 获取所有的输入文件，并输出.file指示
  File **Files = getInputFiles();
  for (int I = 0; Files[I]; I++)
    printLn("  .file %d \"%s\"", Files[I]->FileNo, Files[I]->Name);

  // 计算局部变量的偏移量
  assignLVarOffsets(Prog);
  // 生成数据
  emitData(Prog);
  // 生成代码
  emitText(Prog);
}
