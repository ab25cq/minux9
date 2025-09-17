//#include "cc.h"
#include "minux.h"

void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void putchar(char c)
{
    write(1, &c, 1);
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}

void *newFile(char *Name, int FileNo, char *Contents) {
    return (void*)0;
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
