#include "cc.h"

// 文字列配列に追加する
void strArrayPush(StringArray *Arr, char *S) {
  // 空ならデータがない
  if (!Arr->Data) {
    // 文字列8個分の領域を確保
    Arr->Data = calloc(8, sizeof(char *));
    // 容量を8に設定
    Arr->Capacity = 8;
  }

  // 満杯なら容量を倍に確保
  if (Arr->Capacity == Arr->Len) {
    // 現在容量の倍の領域を再確保
    Arr->Data = realloc(Arr->Data, sizeof(char *) * Arr->Capacity * 2);
    // 容量を倍増
    Arr->Capacity *= 2;
    // 新しく確保した領域をクリア
    for (int I = Arr->Len; I < Arr->Capacity; I++)
      Arr->Data[I] = NULL;
  }

  // 文字列を格納
  Arr->Data[Arr->Len++] = S;
}

// 整形して文字列を返す
char *format(char *Fmt, ...) {
  char *Buf;
  size_t BufLen;
  // 文字列用のメモリをI/Oストリームとして開く
  FILE *Out = open_memstream(&Buf, &BufLen);

  va_list VA;
  va_start(VA, Fmt);
  // ストリームへ書き込む
  vfprintf(Out, Fmt, VA);
  va_end(VA);

  fclose(Out);
  return Buf;
}
