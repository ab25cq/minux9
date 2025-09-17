#include "cc.h"

// Note: Do NOT include Minux9 syscall macros here to avoid
// macro redefinitions of libc calls. Syscall glue is isolated in syscalls.c.

// 【注意】
// クロスコンパイルの場合は、このパスを $RISCV に合わせて変更してください
// 注意: ~ は具体的な /home/ユーザー名 のパスに置き換えてください
static char *RVPath = "";

// ファイル種別
typedef enum {
  FILE_NONE, // 空の種別
  FILE_C,    // C言語ソース
  FILE_ASM,  // アセンブリソース
  FILE_OBJ,  // 再配置可能オブジェクト
  FILE_AR,   // 静的ライブラリ
  FILE_DSO,  // 共有ライブラリ
} FileType;

// インクルードパス領域
StringArray IncludePaths;
// common セクションをデフォルトで生成
bool OptFCommon = true;
// 位置非依存コードのフラグ
bool OptFPIC;

// -x オプション
static FileType OptX;
// -include で読み込むファイル
static StringArray OptInclude;
// -E オプション
static bool OptE;
// -M オプション
static bool OptM;
// -MD オプション
static bool OptMD;
// -MMD オプション
static bool OptMMD;
// -MP オプション
static bool OptMP;
// -S オプション
static bool OptS;
// -c オプション
static bool OptC;
// cc1 オプション
static bool OptCC1;
// ### オプション
static bool OptHashHashHash;
// -static オプション
static bool OptStatic;
// -shared オプション
static bool OptShared;
// -MF オプション
static char *OptMF;
// -MT オプション
static char *OptMT;
// 出力ファイルのパス
static char *OptO;

// リンカ追加引数
static StringArray LdExtraArgs;
// 標準ライブラリのインクルードパス（-MMD 用）
static StringArray StdIncludePaths;

// 入力ファイル名
char *BaseFile;
// 出力ファイル名
static char *OutputFile;

// 入力ファイル領域
static StringArray InputPaths;
// 一時ファイル領域
static StringArray TmpFiles;

// プログラムの使用法を表示
static void usage(int Status) {
  fprintf(stderr, "rvcc [ -o <path> ] <file>\n");
  exit(Status);
}

// 引数を要するオプションに値があるか確認
static bool takeArg(char *Arg) {
  char *X[] = {"-o", "-I",  "-idirafter", "-include",
               "-x", "-MF", "-MT",        "-Xlinker"};

  for (int I = 0; I < sizeof(X) / sizeof(*X); I++)
    if (!strcmp(Arg, X[I]))
      return true;
  return false;
}

// デフォルトのインクルードパスを追加
static void addDefaultIncludePaths(char *Argv0) {
#ifndef CC_S_ONLY
  // rvcc特定の引入先 + 標準パス（Minux9 以外）
  strArrayPush(&IncludePaths, "/usr/local/include");
  strArrayPush(&IncludePaths, "/usr/include/riscv64-linux-gnu");
  strArrayPush(&IncludePaths, "/usr/include");
#else
  // Minux9: 既定の標準パスは追加しない（ユーザが -I で指定）
#endif
  for (int I = 0; I < IncludePaths.Len; I++)
    strArrayPush(&StdIncludePaths, IncludePaths.Data[I]);
}

// マクロを定義
static void define(char *Str) {
  char *Eq = strchr(Str, '=');
  if (Eq)
    // 値の指定があればその値を使用
    defineMacro(strndup(Str, Eq - Str), Eq + 1);
  else
    // 値がなければ 1 を設定
    defineMacro(Str, "1");
}

// -x オプションを解析
static FileType parseOptX(char *S) {
  // -xc は C ソースとして解釈
  if (!strcmp(S, "c"))
    return FILE_C;
  // -xassembler はアセンブリとして解釈
  if (!strcmp(S, "assembler"))
    return FILE_ASM;
  // -xnone は空の種別とする
  if (!strcmp(S, "none"))
    return FILE_NONE;
  error("<command line>: unknown argument for -x: %s", S);
}

// Make のターゲット中の特殊文字を処理
static char *quoteMakefile(char *S) {
  // 新しい文字列バッファ（全変換＋終端分を確保）
  char *Buf = calloc(1, strlen(S) * 2 + 1);

  // 文字列を走査し特殊文字を処理
  for (int I = 0, J = 0; S[I]; I++) {
    switch (S[I]) {
    case '$':
      Buf[J++] = '$';
      Buf[J++] = '$';
      break;
    case '#':
      Buf[J++] = '\\';
      Buf[J++] = '#';
      break;
    case ' ':
    case '\t':
      // 直前のバックスラッシュを逆順に走査
      for (int K = I - 1; K >= 0 && S[K] == '\\'; K--)
        Buf[J++] = '\\';
      Buf[J++] = '\\';
      Buf[J++] = S[I];
      break;
    default:
      Buf[J++] = S[I];
      break;
    }
  }
  // 新しい文字列を返す
  return Buf;
}

// コマンドライン引数を解析
static void parseArgs(int Argc, char **Argv) {
  // 値が必要なオプションに値があることを確認
  for (int I = 1; I < Argc; I++)
    // 値を要する場合
    if (takeArg(Argv[I]))
      // 値がなければ使用法を表示
      if (!Argv[++I])
        usage(1);

  // -idirafter のパスを一時保存
  StringArray Idirafter = {};

  // 引数を順に解析
  for (int I = 1; I < Argc; I++) {
    // -### を解析
    if (!strcmp(Argv[I], "-###")) {
      OptHashHashHash = true;
      continue;
    }

    // -cc1 を解析
    if (!strcmp(Argv[I], "-cc1")) {
      OptCC1 = true;
      continue;
    }

    // --help なら使用法を表示
    if (!strcmp(Argv[I], "--help"))
      usage(0);

    // -o XXX を解析
    if (!strcmp(Argv[I], "-o")) {
      // 出力ファイルのパス
      OptO = Argv[++I];
      continue;
    }

    // -oXXX を解析
    if (!strncmp(Argv[I], "-o", 2)) {
      // 出力ファイルのパス
      OptO = Argv[I] + 2;
      continue;
    }

    // -S を解析
    if (!strcmp(Argv[I], "-S")) {
      OptS = true;
      continue;
    }

    // // -fcommon を解析
    if (!strcmp(Argv[I], "-fcommon")) {
      OptFCommon = true;
      continue;
    }

    // -fno-common を解析
    if (!strcmp(Argv[I], "-fno-common")) {
      OptFCommon = false;
      continue;
    }

    // -c を解析
    if (!strcmp(Argv[I], "-c")) {
      OptC = true;
      continue;
    }

    // -E を解析
    if (!strcmp(Argv[I], "-E")) {
      OptE = true;
      continue;
    }

    // -I を解析
    if (!strncmp(Argv[I], "-I", 2)) {
      strArrayPush(&IncludePaths, Argv[I] + 2);
      continue;
    }

    // -D を解析
    if (!strcmp(Argv[I], "-D")) {
      define(Argv[++I]);
      continue;
    }

    // -D を解析
    if (!strncmp(Argv[I], "-D", 2)) {
      define(Argv[I] + 2);
      continue;
    }

    // -U を解析
    if (!strcmp(Argv[I], "-U")) {
      undefMacro(Argv[++I]);
      continue;
    }

    // -U を解析
    if (!strncmp(Argv[I], "-U", 2)) {
      undefMacro(Argv[I] + 2);
      continue;
    }

    // -include を解析
    if (!strcmp(Argv[I], "-include")) {
      strArrayPush(&OptInclude, Argv[++I]);
      continue;
    }

    // -x を解析
    if (!strcmp(Argv[I], "-x")) {
      OptX = parseOptX(Argv[++I]);
      continue;
    }

    // -x を解析
    if (!strncmp(Argv[I], "-x", 2)) {
      OptX = parseOptX(Argv[I] + 2);
      continue;
    }

    // -l と -Wl, を解析
    if (!strncmp(Argv[I], "-l", 2) || !strncmp(Argv[I], "-Wl,", 4)) {
      strArrayPush(&InputPaths, Argv[I]);
      continue;
    }

    // -Xlinker を解析
    if (!strcmp(Argv[I], "-Xlinker")) {
      strArrayPush(&LdExtraArgs, Argv[++I]);
      continue;
    }

    // -s を解析（リンカへ渡す strip 指定として扱う）
    if (!strcmp(Argv[I], "-s")) {
      strArrayPush(&LdExtraArgs, "-s");
      continue;
    }

    // -M を解析
    if (!strcmp(Argv[I], "-M")) {
      OptM = true;
      continue;
    }

    // -MF を解析
    if (!strcmp(Argv[I], "-MF")) {
      OptMF = Argv[++I];
      continue;
    }

    // -MP を解析
    if (!strcmp(Argv[I], "-MP")) {
      OptMP = true;
      continue;
    }

    // -MT を解析
    // `-MT File` で依存規則のターゲットを指定
    if (!strcmp(Argv[I], "-MT")) {
      if (OptMT == NULL)
        // 依存規則のターゲットが未設定
        OptMT = Argv[++I];
      else
        // 依存規則のターゲットを結合
        OptMT = format("%s %s", OptMT, Argv[++I]);
      continue;
    }

    // -MD を解析
    if (!strcmp(Argv[I], "-MD")) {
      OptMD = true;
      continue;
    }

    // -MQ を解析
    if (!strcmp(Argv[I], "-MQ")) {
      if (OptMT == NULL)
        // 依存規則のターゲットが未設定
        OptMT = quoteMakefile(Argv[++I]);
      else
        // 依存規則のターゲットを結合
        OptMT = format("%s %s", OptMT, quoteMakefile(Argv[++I]));
      continue;
    }

    // -MMD を解析
    if (!strcmp(Argv[I], "-MMD")) {
      // -MD も同時に有効化
      OptMD = OptMMD = true;
      continue;
    }

    // -fpic または -fPIC を解析
    if (!strcmp(Argv[I], "-fpic") || !strcmp(Argv[I], "-fPIC")) {
      OptFPIC = true;
      continue;
    }

    // -cc1-input を解析
    if (!strcmp(Argv[I], "-cc1-input")) {
      BaseFile = Argv[++I];
      continue;
    }

    // -cc1-output を解析
    if (!strcmp(Argv[I], "-cc1-output")) {
      OutputFile = Argv[++I];
      continue;
    }

    // -idirafter を解析
    // 引数を Idirafter に格納
    if (!strcmp(Argv[I], "-idirafter")) {
      strArrayPush(&Idirafter, Argv[I++]);
      continue;
    }

    // -static を解析
    if (!strcmp(Argv[I], "-static")) {
      OptStatic = true;
      strArrayPush(&LdExtraArgs, "-static");
      continue;
    }

    // -shared を解析
    if (!strcmp(Argv[I], "-shared")) {
      OptShared = true;
      strArrayPush(&LdExtraArgs, "-shared");
      continue;
    }

    // -L を解析
    if (!strcmp(Argv[I], "-L")) {
      strArrayPush(&LdExtraArgs, "-L");
      strArrayPush(&LdExtraArgs, Argv[++I]);
      continue;
    }

    // -L を解析
    if (!strncmp(Argv[I], "-L", 2)) {
      strArrayPush(&LdExtraArgs, "-L");
      strArrayPush(&LdExtraArgs, Argv[I] + 2);
      continue;
    }

    // ハッシュマップのテスト
    if (!strcmp(Argv[I], "-hashmap-test")) {
      hashmapTest();
      exit(0);
    }

    // 複数のオプションは無視
    if (!strncmp(Argv[I], "-O", 2) || !strncmp(Argv[I], "-W", 2) ||
        !strncmp(Argv[I], "-g", 2) || !strncmp(Argv[I], "-std=", 5) ||
        !strcmp(Argv[I], "-ffreestanding") ||
        !strcmp(Argv[I], "-fno-builtin") ||
        !strcmp(Argv[I], "-fno-omit-frame-pointer") ||
        !strcmp(Argv[I], "-fno-stack-protector") ||
        !strcmp(Argv[I], "-fno-strict-aliasing") || !strcmp(Argv[I], "-m64") ||
        !strcmp(Argv[I], "-mno-red-zone") || !strcmp(Argv[I], "-w") ||
        !strcmp(Argv[I], "-march=native"))
      continue;

    // 単独の '-' を解析
    if (Argv[I][0] == '-' && Argv[I][1] != '\0')
      error("unknown argument: %s", Argv[I]);

    // それ以外は入力ファイルとして扱う
    strArrayPush(&InputPaths, Argv[I]);
  }

  // Idirafter のパスをインクルードパスに追加
  for (int I = 0; I < Idirafter.Len; I++)
    strArrayPush(&IncludePaths, Idirafter.Data[I]);

  // 入力ファイルがなければエラー
  if (InputPaths.Len == 0)
    error("no input files");

  // -E の場合は入力を C として扱う
  if (OptE)
    OptX = FILE_C;
}

// 書き込み対象のファイルを開く
static FILE *openFile(char *Path) {
  if (!Path || strcmp(Path, "-") == 0)
    return stdout;

  // 書き込みモードで開く
  FILE *Out = fopen(Path, "w");
  if (!Out)
    error("cannot open output file: %s: %s", Path, strerror(errno));
  return Out;
}

// 文字列 P が Q で終わるか判定
static bool endsWith(char *P, char *Q) {
  int len1 = strlen(P);
  int len2 = strlen(Q);
  // P が十分に長く末尾 len2 文字が Q と等しい
  return (len1 >= len2) && !strcmp(P + len1 - len2, Q);
}

// ファイル拡張子を置き換え
static char *replaceExtn(char *Tmpl, char *Extn) {
  // パスを除去しベース名を取得
  char *Filename = Tmpl; //basename(strdup(Tmpl));
  //char *Filename = basename(strdup(Tmpl));
  // 最後に現れる文字の位置
  char *Dot = strrchr(Filename, '.');
  // '.' があれば以降を削除
  if (Dot)
    *Dot = '\0';
  // 新しい拡張子を書き込む
  return format("%s%s", Filename, Extn);
}

// 一時ファイル領域を掃除
static void cleanup(void) {
  // 一時ファイルを順に削除
  for (int I = 0; I < TmpFiles.Len; I++)
    unlink(TmpFiles.Data[I]);
}

// 一時ファイルを作成
static char *createTmpFile(void) {
  // 一時ファイルのパス形式
  char *Path = strdup("/tmp/rvcc-XXXXXX");
  // 一時ファイルを作成
  int FD = mkstemp(Path);
  // 一時ファイルの作成に失敗
  if (FD == -1)
    error("mkstemp failed: %s", strerror(errno));
  // ファイルを閉じる
  close(FD);

  // パスを一時ファイル領域に記録
  strArrayPush(&TmpFiles, Path);
  return Path;
}

// 子プロセスを生成
static void runSubprocess(char **Argv) {
#ifdef CC_S_ONLY
  // Minux9 cc wrapper must never spawn subprocesses
  fprintf(stderr, "cc: subprocess disabled in -S-only mode\n");
  exit(1);
#endif
  // 子プロセス実行コマンドを出力
  if (OptHashHashHash) {
    // プログラム名
    fprintf(stderr, "%s", Argv[0]);
    // プログラム引数
    for (int I = 1; Argv[I]; I++)
      fprintf(stderr, " %s", Argv[I]);
    // 改行
    fprintf(stderr, "\n");
  }

  // fork-exec モデル
  // 現在のプロセスを複製して子プロセスを生成
  // 返り値 -1 は失敗、0 は成功
  if (fork() == 0) {
    // rvcc を実行（スラッシュなしなら PATH 検索）。子プロセスを置き換える
    execvp(Argv[0], Argv);
    // exec が戻った場合は実行失敗
    fprintf(stderr, "exec failed: %s: %s\n", Argv[0], strerror(errno));
    exit(1);
  }

  // 親プロセスは子の終了を待つ
  int Status;
  while (wait(&Status) > 0)
    ;
  // 子プロセスの終了コードを処理
  if (Status != 0)
    exit(1);
}

// cc1 を起動して実行
// rvcc 自身が cc1 であるため
// 自プロセスを -cc1 付きで起動する
static void runCC1(int Argc, char **Argv, char *Input, char *Output) {
  // 追加引数用に 10 個分多めに確保
  char **Args = calloc(Argc + 10, sizeof(char *));
  // 既存の引数を Args にコピー
  memcpy(Args, Argv, Argc * sizeof(char *));
  // 末尾に "-cc1" を追加
  Args[Argc++] = "-cc1";

  // 入力ファイルの指定を追加
  if (Input) {
    Args[Argc++] = "-cc1-input";
    Args[Argc++] = Input;
  }

  // 出力ファイルの指定を追加
  if (Output) {
    Args[Argc++] = "-cc1-output";
    Args[Argc++] = Output;
  }

  // 自プロセスを子として起動し引数を渡す
  runSubprocess(Args);
}

// -E 指定時は全トークンを出力
static void printTokens(Token *Tok) {
  // 出力先（デフォルトは stdout）
  FILE *Out = openFile(OptO ? OptO : "-");

  // 行番号を記録
  int Line = 1;
  // トークンを順に処理
  for (; Tok->Kind != TK_EOF; Tok = Tok->Next) {
    // 行頭では改行を出力
    if (Line > 1 && Tok->AtBOL)
      fprintf(Out, "\n");
    // 必要な箇所に空白を出力
    if (Tok->HasSpace && !Tok->AtBOL)
      fprintf(Out, " ");
    // トークン文字列を出力
    fprintf(Out, "%.*s", Tok->Len, Tok->Loc);
    Line++;
  }
  // 末尾に改行を付加
  fprintf(Out, "\n");
}

// 標準ライブラリのパスか判定
static bool inStdIncludePath(char *Path) {
  for (int I = 0; I < StdIncludePaths.Len; I++) {
    char *Dir = StdIncludePaths.Data[I];
    int Len = strlen(Dir);
    // ライブラリパスと一致し、その直後が '/' なら真
    if (strncmp(Dir, Path, Len) == 0 && Path[Len] == '/')
      return true;
  }
  return false;
}

// Make 用の依存関係ルールを出力
static void printDependencies(void) {
  char *Path;
  if (OptMF)
    // `-MF File` で指定されたファイルへ書き出す
    Path = OptMF;
  else if (OptMD)
    // `-M -MF File.d` と同等で .d に出力
    Path = replaceExtn(OptO ? OptO : BaseFile, ".d");
  else if (OptO)
    Path = OptO;
  else
    Path = "-";

  // 出力先ファイル
  FILE *Out = openFile(Path);
  // MT 未指定ならターゲット名の特殊文字を処理
  if (OptMT)
    fprintf(Out, "%s:", OptMT);
  else
    // MT があればそれを、なければ拡張子を .o に置換
    fprintf(Out, "%s:", quoteMakefile(replaceExtn(BaseFile, ".o")));

  // 入力ファイルを取得
  File **Files = getInputFiles();

  // 入力ファイルを走査して整形結果を出力
  for (int I = 0; Files[I]; I++) {
    // 標準ライブラリ内のファイルは出力しない
    if (OptMMD && inStdIncludePath(Files[I]->Name))
      continue;
    fprintf(Out, " \\\n  %s", Files[I]->Name);
  }

  fprintf(Out, "\n\n");

  // -MP 指定時はヘッダに擬似ターゲットを生成
  if (OptMP) {
    for (int I = 1; Files[I]; I++) {
      // 標準ライブラリ内のファイルは出力しない
      if (OptMMD && inStdIncludePath(Files[I]->Name))
        continue;
      // ヘッダ名の特殊文字を処理
      fprintf(Out, "%s:\n\n", quoteMakefile(Files[I]->Name));
    }
  }
}

// ファイルを解析してトークン列を生成
static Token *mustTokenizeFile(char *Path) {
  Token *Tok = tokenizeFile(Path);
  // トークン化に失敗したら当該ファイルをエラーにする
  if (!Tok)
    error("%s: %s", Path, strerror(errno));
  return Tok;
}

// トークン列を連結
static Token *appendTokens(Token *Tok1, Token *Tok2) {
  // Tok1 が空なら Tok2 を返す
  if (!Tok1 || Tok1->Kind == TK_EOF)
    return Tok2;
  // 連結リスト用のポインタ T
  Token *T = Tok1;
  // T を Tok1 の末尾まで進める
  while (T->Next->Kind != TK_EOF)
    T = T->Next;
  // T->Next を Tok2 に接続
  T->Next = Tok2;
  // 連結後の Tok1 を返す
  return Tok1;
}

// C ファイルをアセンブリにコンパイル
static void cc1(void) {
  Token *Tok = NULL;

  // -include オプションを処理
  for (int I = 0; I < OptInclude.Len; I++) {
    // 取り込むファイル
    char *Incl = OptInclude.Data[I];

    char *Path;
    if (fileExists(Incl)) {
      // 存在すればそのパスを使用
      Path = Incl;
    } else {
      // なければインクルードパスから検索
      Path = searchIncludePaths(Incl);
      if (!Path)
        error("-include: %s: %s", Incl, strerror(errno));
    }

    // ファイルを解析してトークン列を生成
    Token *Tok2 = mustTokenizeFile(Path);
    Tok = appendTokens(Tok, Tok2);
  }

  // ファイルを解析してトークン列を生成
  Token *Tok2 = mustTokenizeFile(BaseFile);
  Tok = appendTokens(Tok, Tok2);

  // 前処理
  Tok = preprocess(Tok);

  // -M 指定時は依存関係を出力
  if (OptM || OptMD) {
    printDependencies();
    if (OptM)
      return;
  }

  // -E 指定時は前処理済み C を出力
  if (OptE) {
    printTokens(Tok);
    return;
  }

  // トークン列を構文解析
  Obj *Prog = parse(Tok);

  // コード生成

  // 途中終了で不完全な出力にならないように
  // 一時出力バッファを開く
  char *Buf;
  size_t BufLen;
  FILE *OutputBuf = open_memstream(&Buf, &BufLen);

  // アセンブリをバッファへ出力
  codegen(Prog, OutputBuf);
  fclose(OutputBuf);

  // バッファからファイルへ書き込む
  FILE *Out = openFile(OutputFile);
  fwrite(Buf, BufLen, 1, Out);
  fclose(Out);
}

// アセンブラを呼び出す
static void assemble(char *Input, char *Output) {
#ifdef CC_S_ONLY
  fprintf(stderr, "cc: assembler disabled in -S-only mode\n");
  exit(1);
#endif
  // 環境に応じたアセンブラを選択
  char *As = strlen(RVPath)
                 ? format("%s/bin/riscv64-unknown-linux-gnu-as", RVPath)
                 : "as";
  char *Cmd[] = {As, "-c", Input, "-o", Output, NULL};
  runSubprocess(Cmd);
}

// ファイルを検索
static char *findFile(char *Pattern) {
  char *Path = NULL;
  // Linux のパス名パターンマッチ
  glob_t Buf = {};
  // 引数: パターン, フラグ, エラー処理, 結果バッファ
  glob(Pattern, 0, NULL, &Buf);
  // 一致したパス数 gl_pathc
  // 最後の一致結果を Path にコピー
  if (Buf.gl_pathc > 0)
    Path = strdup(Buf.gl_pathv[Buf.gl_pathc - 1]);
  // メモリを解放
  globfree(&Buf);
  return Path;
}

// ファイルが存在すれば真
bool fileExists(char *Path) {
#ifdef CC_S_ONLY
  int fd = open(Path, O_RDONLY, 0);
  if (fd >= 0) { close(fd); return true; }
  return false;
#else
  struct stat St;
  return !stat(Path, &St);
#endif
}

// ライブラリパスを検索
static char *findLibPath(void) {
  if (fileExists("/usr/lib/riscv64-linux-gnu/crti.o"))
    return "/usr/lib/riscv64-linux-gnu";
  if (fileExists("/usr/lib64/crti.o"))
    return "/usr/lib64";

  if (fileExists(format("%s/sysroot/usr/lib/crti.o", RVPath)))
    return format("%s/sysroot/usr/lib/", RVPath);
  error("library path is not found");
  return NULL;
}

//static char *findGCCLibPath(void) {
//  char *paths[] = {
//      "/usr/lib/gcc/riscv64-linux-gnu/*/crtbegin.o",
//      "/usr/lib/gcc/riscv64-pc-linux-gnu/*/crtbegin.o",
//      "/usr/lib/gcc/riscv64-redhat-linux/*/crtbegin.o",
//      format("%s/lib/gcc/riscv64-unknown-linux-gnu/*/crtbegin.o", RVPath),
//  };
//
//  // GCC ライブラリのパスを走査して探索
//  for (int I = 0; I < sizeof(paths) / sizeof(*paths); I++) {
//    char *path = findFile(paths[I]);
//    if (path)
//      return dirname(path);
//  }
//
//  error("gcc library path is not found");
//  return NULL;
//}

// リンカ ld を起動
static void runLinker(StringArray *Inputs, char *Output) {
  // ld 子プロセスへ渡す引数
  StringArray Arr = {};

  // リンカ
  char *Ld = strlen(RVPath)
                 ? format("%s/bin/riscv64-unknown-linux-gnu-ld", RVPath)
                 : "ld";
  strArrayPush(&Arr, Ld);

  // 出力ファイル
  strArrayPush(&Arr, "-o");
  strArrayPush(&Arr, Output);
  strArrayPush(&Arr, "-m");
  strArrayPush(&Arr, "elf64lriscv");
  if (!OptStatic) {
    strArrayPush(&Arr, "-dynamic-linker");

    char *LP64D =
        strlen(RVPath)
            ? format("%s/sysroot/lib/ld-linux-riscv64-lp64d.so.1", RVPath)
            : "/lib/ld-linux-riscv64-lp64d.so.1";
    strArrayPush(&Arr, LP64D);
  }

  char *LibPath = findLibPath();
//c  char *GccLibPath = findGCCLibPath();

  if (OptShared) {
    strArrayPush(&Arr, format("%s/crti.o", LibPath));
//    strArrayPush(&Arr, format("%s/crtbeginS.o", GccLibPath));
  } else {
    strArrayPush(&Arr, format("%s/crt1.o", LibPath));
    strArrayPush(&Arr, format("%s/crti.o", LibPath));
//    strArrayPush(&Arr, format("%s/crtbegin.o", GccLibPath));
  }

//  strArrayPush(&Arr, format("-L%s", GccLibPath));

  if (strlen(RVPath)) {
    strArrayPush(&Arr, format("-L%s/sysroot/usr/lib64", RVPath));
    strArrayPush(&Arr, format("-L%s/sysroot/lib64", RVPath));
    strArrayPush(&Arr,
                 format("-L%s/sysroot/usr/lib/riscv64-linux-gnu", RVPath));
    strArrayPush(&Arr,
                 format("-L%s/sysroot/usr/lib/riscv64-pc-linux-gnu", RVPath));
    strArrayPush(&Arr,
                 format("-L%s/sysroot/usr/lib/riscv64-redhat-linux", RVPath));
    strArrayPush(&Arr, format("-L%s/sysroot/usr/lib", RVPath));
    strArrayPush(&Arr, format("-L%s/sysroot/lib", RVPath));
  } else {
    strArrayPush(&Arr, "-L/usr/lib64");
    strArrayPush(&Arr, "-L/lib64");
    strArrayPush(&Arr, "-L/usr/lib/riscv64-linux-gnu");
    strArrayPush(&Arr, "-L/usr/lib/riscv64-pc-linux-gnu");
    strArrayPush(&Arr, "-L/usr/lib/riscv64-redhat-linux");
    strArrayPush(&Arr, "-L/usr/lib");
    strArrayPush(&Arr, "-L/lib");
  }

  // 追加のリンカ引数を追加
  for (int I = 0; I < LdExtraArgs.Len; I++)
    strArrayPush(&Arr, LdExtraArgs.Data[I]);

  // 入力ファイルをリンカ引数に追加
  for (int I = 0; I < Inputs->Len; I++)
    strArrayPush(&Arr, Inputs->Data[I]);

  if (OptStatic) {
    strArrayPush(&Arr, "--start-group");
    strArrayPush(&Arr, "-lgcc");
    strArrayPush(&Arr, "-lgcc_eh");
    strArrayPush(&Arr, "-lc");
    strArrayPush(&Arr, "--end-group");
  } else {
    strArrayPush(&Arr, "-lc");
    strArrayPush(&Arr, "-lgcc");
    strArrayPush(&Arr, "--as-needed");
    strArrayPush(&Arr, "-lgcc_s");
    strArrayPush(&Arr, "--no-as-needed");
  }

/*
  if (OptShared)
    strArrayPush(&Arr, format("%s/crtendS.o", GccLibPath));
  else
    strArrayPush(&Arr, format("%s/crtend.o", GccLibPath));
*/
  strArrayPush(&Arr, format("%s/crtn.o", LibPath));
  strArrayPush(&Arr, NULL);

  // リンカの子プロセスを起動
  runSubprocess(Arr.Data);
}

// ファイル種別を取得
static FileType getFileType(char *Filename) {
  // -x が指定済みならその種別を使用
  if (OptX != FILE_NONE)
    return OptX;

  // 拡張子 .a は静的ライブラリ
  if (endsWith(Filename, ".a"))
    return FILE_AR;
  // .so は共有ライブラリ
  if (endsWith(Filename, ".so"))
    return FILE_DSO;
  // .o は再配置可能オブジェクト
  if (endsWith(Filename, ".o"))
    return FILE_OBJ;
  // .c は C ソース
  if (endsWith(Filename, ".c"))
    return FILE_C;
  // .s/.S はアセンブリ
  if (endsWith(Filename, ".s") || endsWith(Filename, ".S"))
    return FILE_ASM;

  error("<command line>: unknown file extension: %s", Filename);
}

// コンパイラドライバのフロー
//
// ソースファイル
//   ↓
// 前処理後のファイル
//   ↓
// cc1 がアセンブリへコンパイル
//   ↓
// as がオブジェクトへコンパイル
//   ↓
// ld が実行ファイルへリンク
void strArrayPush(StringArray *Arr, char *S) {
}
char *format(char *Fmt, ...) {
}
//static void runLinker(StringArray *Inputs, char *Output) {
//}
void error(char *Fmt, ...) {
}
void undefMacro(char *Name) {
}
File **getInputFiles(void) { }
char *searchIncludePaths(char *Filename) {}
void hashmapTest(void) { }
Token *tokenizeFile(char *Path) { }
void codegen(Obj *Prog, FILE *Out) { }
Token *preprocess(Token *Tok) { }
Obj *parse(Token *Tok) { }

File *newFile(char *Name, int FileNo, char *Contents) {
write(1, "LLL", 3);
  File *FP = calloc(1, sizeof(File));
write(1, "LLG", 3);
  FP->Name = Name;
  FP->DisplayName = FP->Name;
  FP->FileNo = FileNo;
  FP->Contents = Contents;
  return FP;
}

void defineMacro(char *Name, char *Buf) {
write(1, "Y", 1);
  newFile("<built-in>", 1, Buf);
write(1, "SI", 1);
  //Token *Tok = tokenize(newFile("<built-in>", 1, Buf));
}

void initMacros(void) {
write(1, "X", 1);
  defineMacro("_LP64", "1");
}

// rvcc のエントリポイント
int main(int Argc, char **Argv) {
write(1, "ABC", 3);
  // 終了時に cleanup を実行
  //atexit(cleanup);
write(1, "DEF", 3);
  // あらかじめ定義されたマクロを初期化
  initMacros();
/*
  // コマンドライン引数を解析
write(1, "FGH", 3);
  parseArgs(Argc, Argv);
  
puts("1");

#ifdef CC_S_ONLY
  // Force assembly-only mode for Minux9 cc wrapper
  OptS = true;
  OptC = false;
  OptE = false;
#endif

  // -cc1 が指定された場合
  // C を直接アセンブリにコンパイル
  if (OptCC1) {
    // デフォルトのインクルードパスを追加
    addDefaultIncludePaths(Argv[0]);
    cc1();
    return 0;
  }
puts("2");

  // -c/-S/-E と -o の併用で複数入力は不可
  if (InputPaths.Len > 1 && OptO && (OptC || OptS || OptE))
    error("cannot specify '-o' with '-c', '-S' or '-E' with multiple files");

  // リンカ引数
  StringArray LdArgs = {};
puts("3");

  // 各入力ファイルを処理
  for (int I = 0; I < InputPaths.Len; I++) {
    // 入力ファイル名を取得
    char *Input = InputPaths.Data[I];

    // リンク時に指定されたライブラリを検索
    if (!strncmp(Input, "-l", 2)) {
      strArrayPush(&LdArgs, Input);
      continue;
    }

    // -Wl, の後続をリンカ引数に展開
    if (!strncmp(Input, "-Wl,", 4)) {
      // カンマ区切りの引数列
      char *S = strdup(Input + 4);
      // カンマで分割して1件ずつ取得
      char *Arg = strtok(S, ",");
      // 残りを順に処理
      while (Arg) {
        // リンカ引数に追加
        strArrayPush(&LdArgs, Arg);
        Arg = strtok(NULL, ",");
      }
      continue;
    }
puts("4");

    // 出力ファイル
    char *Output;
    // 出力が指定されていればそれを使用
    if (OptO)
      Output = OptO;
    // 未指定で -S の場合は .s に出力
    else if (OptS)
      Output = replaceExtn(Input, ".s");
    // それ以外は .o に出力
    else
      Output = replaceExtn(Input, ".o");

    // 获取输入文件的类型
    FileType Ty = getFileType(Input);
puts("5");

    // 处理.o或.a或.so文件
    if (Ty == FILE_OBJ || Ty == FILE_AR || Ty == FILE_DSO) {
      // 存入链接器选项中
      strArrayPush(&LdArgs, Input);
      continue;
    }
puts("6");

    // 处理.s文件
    if (Ty == FILE_ASM) {
      // 如果没有指定-S，那么需要进行汇编
      if (!OptS)
        assemble(Input, Output);
      continue;
    }

    // 处理.c文件
    assert(Ty == FILE_C);

    // 只进行解析（Minux9: フォークせず同プロセスで cc1 実行）
    if (OptE || OptM) {
puts("7");
      addDefaultIncludePaths(Argv[0]);
      BaseFile = Input;
      OutputFile = NULL;
      cc1();
puts("8");
      continue;
    }

    // 如果有-S选项，那么同プロセスで cc1 を直接呼ぶ（Minux9用）
    if (OptS) {
      addDefaultIncludePaths(Argv[0]);
      BaseFile = Input;
      OutputFile = Output;
      cc1();
      continue;
    }

    // コンパイルしてアセンブル
    if (OptC) {
puts("9");
      // 一時ファイル Tmp は cc1 の出力（アセンブリ）
      char *Tmp = createTmpFile();
      // cc1 で C をアセンブリにコンパイル
      runCC1(Argc, Argv, Input, Tmp);
puts("10");
      // as でアセンブリをオブジェクトに
      assemble(Tmp, Output);
puts("11");
      continue;
    }

    // それ以外は cc1 と as を実行
    // 一時ファイル Tmp1 は cc1 の出力（アセンブリ）
    // 一時ファイル Tmp2 は as の出力（オブジェクト）
puts("12");
    char *Tmp1 = createTmpFile();
    char *Tmp2 = createTmpFile();
    // cc1 で C をアセンブリにコンパイル
    runCC1(Argc, Argv, Input, Tmp1);
    // as でアセンブリをオブジェクトに
    assemble(Tmp1, Tmp2);
    // Tmp2 をリンカ引数に追加
    strArrayPush(&LdArgs, Tmp2);
    continue;
  }
puts("13");

  // リンクが必要な場合
  // 出力名未指定なら a.out
  if (LdArgs.Len > 0)
    runLinker(&LdArgs, OptO ? OptO : "a.out");
puts("14");

*/
  return 0;
}
