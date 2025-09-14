// 本ファイルはオープンアドレッシング方式のハッシュ表の実装です。

#include "cc.h"

// 初期ハッシュ表サイズ（16 個のエントリ）
#define INIT_SIZE 16

// 高水位: 使用率 70% 超で再ハッシュ
#define HIGH_WATERMARK 70

// 低水位: 超過で容量拡張が必要
#define LOW_WATERMARK 50

// 削除済みスロットを表す
// 挿入時は墓石スロットを優先利用して容量増加を抑制
#define TOMBSTONE ((void *)-1)

// 64 ビット FNV-1 ハッシュ
// 文字列のハッシュ計算に高効率
static uint64_t fnvHash(char *S, int Len) {
  // FNV 初期オフセット (FNV_offset_basis)
  uint64_t Hash = 0xCBF29CE484222325;
  // 各バイトを走査して計算
  for (int I = 0; I < Len; I++) {
    // ハッシュ値に FNV 素数（64 ビット）を乗算
    Hash *= 0x100000001B3;
    // ハッシュ値とバイト値を XOR
    Hash ^= (unsigned char)S[I];
  }
  // 計算したハッシュ値を返す
  return Hash;
}

// 墓石の除去と必要に応じた容量拡張を行い、挿入先を確保
static void rehash(HashMap *Map) {
  // 新しいテーブル容量を計算
  // 使用中エントリ数を数える
  int NKeys = 0;
  // 全バケットを走査
  for (int I = 0; I < Map->Capacity; I++)
    // 有効（非墓石）のエントリなら
    if (Map->Buckets[I].Key && Map->Buckets[I].Key != TOMBSTONE)
      NKeys++;

  // Cap に新容量（初期は現容量）
  int Cap = Map->Capacity;
  // 使用率が LOW_WATERMARK を超える間
  while ((NKeys * 100) / Cap >= LOW_WATERMARK)
    // 容量を 2 倍に拡張
    Cap = Cap * 2;
  // Cap が 0 以下なら異常終了
  assert(Cap > 0);

  // 新しいテーブル Map2 を作成し全エントリを再配置
  HashMap Map2 = {};
  // Cap 個のバケットを確保
  Map2.Buckets = calloc(Cap, sizeof(HashEntry));
  // Map2 の容量を Cap に設定
  Map2.Capacity = Cap;

  // 全バケットを走査
  for (int I = 0; I < Map->Capacity; I++) {
    // 現在のバケットへのポインタ
    HashEntry *Ent = &Map->Buckets[I];
    // 有効（非墓石）のエントリなら
    if (Ent->Key && Ent->Key != TOMBSTONE)
      // エントリを Map2 に再挿入
      hashmapPut2(&Map2, Ent->Key, Ent->KeyLen, Ent->Val);
  }

  // Map2 の使用数が NKeys と一致することを確認
  assert(Map2.Used == NKeys);
  // 古いテーブルを Map2 で置き換える
  *Map = Map2;
}

// 指定キーがエントリと一致するか判定
static bool match(HashEntry *Ent, char *Key, int KeyLen) {
  // 非空・非墓石・キー長一致
  // かつキー内容が一致
  return Ent->Key && Ent->Key != TOMBSTONE && Ent->KeyLen == KeyLen &&
         memcmp(Ent->Key, Key, KeyLen) == 0;
}

// キーに対応するエントリを取得
static HashEntry *getEntry(HashMap *Map, char *Key, int KeyLen) {
  // バケット未確保なら NULL
  if (!Map->Buckets)
    return NULL;

  // キーのハッシュ値を計算
  uint64_t Hash = fnvHash(Key, KeyLen);

  // 全バケットを走査
  for (int I = 0; I < Map->Capacity; I++) {
    // オープンアドレッシング: 衝突時は隣接を探索
    // 位置が不一致なら I のオフセットで試行
    HashEntry *Ent = &Map->Buckets[(Hash + I) % Map->Capacity];
    // 一致するキー/長なら返す
    if (match(Ent, Key, KeyLen))
      return Ent;
    // 空スロットに到達したら NULL
    if (Ent->Key == NULL)
      return NULL;
  }
  unreachable();
}

// 存在すれば返し、なければ挿入して返す
static HashEntry *getOrInsertEntry(HashMap *Map, char *Key, int KeyLen) {
  if (!Map->Buckets) {
    // 未初期化なら INIT_SIZE で確保
    Map->Buckets = calloc(INIT_SIZE, sizeof(HashEntry));
    Map->Capacity = INIT_SIZE;
  } else if ((Map->Used * 100) / Map->Capacity >= HIGH_WATERMARK) {
    // 使用率が HIGH_WATERMARK 超なら再ハッシュ
    rehash(Map);
  }

  // 指定キーのハッシュ値を計算
  uint64_t Hash = fnvHash(Key, KeyLen);

  // 全バケットを走査
  for (int I = 0; I < Map->Capacity; I++) {
    // オープンアドレッシング: 衝突時は隣接を探索
    // 位置が不一致なら I のオフセットで試行
    HashEntry *Ent = &Map->Buckets[(Hash + I) % Map->Capacity];

    // 一致するキー/長なら返す
    if (match(Ent, Key, KeyLen))
      return Ent;

    // 墓石スロットなら再利用（キーと長を設定）
    if (Ent->Key == TOMBSTONE) {
      Ent->Key = Key;
      Ent->KeyLen = KeyLen;
      return Ent;
    }

    // 空スロットならキーと長を設定して使用
    if (Ent->Key == NULL) {
      Ent->Key = Key;
      Ent->KeyLen = KeyLen;
      // 使用数をインクリメント
      Map->Used++;
      return Ent;
    }
  }
  unreachable();
}

// ハッシュ表からキーを検索
void *hashmapGet(HashMap *Map, char *Key) {
  return hashmapGet2(Map, Key, strlen(Key));
}

void *hashmapGet2(HashMap *Map, char *Key, int KeyLen) {
  // エントリを取得
  HashEntry *Ent = getEntry(Map, Key, KeyLen);
  // 見つかれば値を返し、なければ NULL
  return Ent ? Ent->Val : NULL;
}

// 指定キーを挿入
void hashmapPut(HashMap *Map, char *Key, void *Val) {
  hashmapPut2(Map, Key, strlen(Key), Val);
}

void hashmapPut2(HashMap *Map, char *Key, int KeyLen, void *Val) {
  // 既存または新規のエントリを取得
  HashEntry *Ent = getOrInsertEntry(Map, Key, KeyLen);
  // 値を設定
  Ent->Val = Val;
}

// エントリを削除（墓石設定）
void hashmapDelete(HashMap *Map, char *Key) {
  hashmapDelete2(Map, Key, strlen(Key));
}

void hashmapDelete2(HashMap *Map, char *Key, int KeyLen) {
  // 指定キーのエントリを検索
  HashEntry *Ent = getEntry(Map, Key, KeyLen);
  // 存在すれば墓石を設定
  if (Ent)
    Ent->Key = TOMBSTONE;
}

// ハッシュ機能のテスト用関数
void hashmapTest(void) {
  // 空のハッシュ表を作成
  HashMap *Map = calloc(1, sizeof(HashMap));

  // 0  -  1000  -  1500  -  1600  -  2000  -  5000  -  6000  -  7000
  // ｜ 有り ｜ 削除 ｜ 有り ｜ 削除 ｜ 有り ｜ 空 ｜ 有り ｜
  for (int I = 0; I < 5000; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);
  for (int I = 1000; I < 2000; I++)
    hashmapDelete(Map, format("key %d", I));
  for (int I = 1500; I < 1600; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);
  for (int I = 6000; I < 7000; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);

  for (int I = 0; I < 1000; I++)
    assert((size_t)hashmapGet(Map, format("key %d", I)) == I);
  for (int I = 1000; I < 1500; I++)
    assert(hashmapGet(Map, "no such key") == NULL);
  for (int I = 1500; I < 1600; I++)
    assert((size_t)hashmapGet(Map, format("key %d", I)) == I);
  for (int I = 1600; I < 2000; I++)
    assert(hashmapGet(Map, "no such key") == NULL);
  for (int I = 2000; I < 5000; I++)
    assert((size_t)hashmapGet(Map, format("key %d", I)) == I);
  for (int I = 5000; I < 6000; I++)
    assert(hashmapGet(Map, "no such key") == NULL);
  for (int I = 6000; I < 7000; I++)
    hashmapPut(Map, format("key %d", I), (void *)(size_t)I);

  assert(hashmapGet(Map, "no such key") == NULL);
  printf("OK\n");
}
