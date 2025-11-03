#ifndef _ELF_H
#define _ELF_H

#include <stdint.h>

// Identifier index values for e_ident
#ifndef EI_NIDENT
#define EI_NIDENT 16
#endif
#ifndef EI_CLASS
#define EI_CLASS 4
#endif
#ifndef EI_DATA
#define EI_DATA 5
#endif
#ifndef EI_VERSION
#define EI_VERSION 6
#endif
#ifndef EI_OSABI
#define EI_OSABI 7
#endif
#ifndef EI_ABIVERSION
#define EI_ABIVERSION 8
#endif

// ELF class
#ifndef ELFCLASS64
#define ELFCLASS64 2
#endif

// Data encoding
#ifndef ELFDATA2LSB
#define ELFDATA2LSB 1
#endif

// ELF version
#ifndef EV_CURRENT
#define EV_CURRENT 1
#endif

// Object file types
#ifndef ET_EXEC
#define ET_EXEC 2
#endif

// Program header types
#ifndef PT_LOAD
#define PT_LOAD 1
#endif

// Section indices
#ifndef SHN_LORESERVE
#define SHN_LORESERVE 0xFF00
#endif
#ifndef SHN_XINDEX
#define SHN_XINDEX 0xFFFF
#endif
#ifndef SHN_ABS
#define SHN_ABS 0xFFF1
#endif
#ifndef SHN_COMMON
#define SHN_COMMON 0xFFF2
#endif

// Section header flags
#ifndef SHF_WRITE
#define SHF_WRITE 0x1
#endif
#ifndef SHF_ALLOC
#define SHF_ALLOC 0x2
#endif
#ifndef SHF_EXECINSTR
#define SHF_EXECINSTR 0x4
#endif
#ifndef SHF_MERGE
#define SHF_MERGE 0x10
#endif
#ifndef SHF_STRINGS
#define SHF_STRINGS 0x20
#endif
#ifndef SHF_TLS
#define SHF_TLS 0x400
#endif
#ifndef SHF_GROUP
#define SHF_GROUP 0x200
#endif
#ifndef SHF_LINK_ORDER
#define SHF_LINK_ORDER 0x80
#endif

// Section header types
#ifndef SHT_GROUP
#define SHT_GROUP 17
#endif
#ifndef SHT_SYMTAB_SHNDX
#define SHT_SYMTAB_SHNDX 18
#endif

// Program header flags
#ifndef PF_X
#define PF_X 0x1
#endif
#ifndef PF_W
#define PF_W 0x2
#endif
#ifndef PF_R
#define PF_R 0x4
#endif

// ELFヘッダのマジックナンバー (リトルエンディアン)
#ifndef ELF_MAGIC
#define ELF_MAGIC 0x464C457FU  // "\x7FELF"
#endif

// ELFヘッダ (64-bit)
struct elfhdr {
    uint32_t magic;      // ELF_MAGIC である必要がある
    uint8_t  elf[12];    // ELF識別情報
    uint16_t type;       // オブジェクトファイルの種類
    uint16_t machine;    // アーキテクチャ
    uint32_t version;    // オブジェクトファイルのバージョン
    uint64_t entry;      // エントリポイントの仮想アドレス
    uint64_t phoff;      // プログラムヘッダテーブルのファイルオフセット
    uint64_t shoff;      // セクションヘッダテーブルのファイルオフセット
    uint32_t flags;      // プロセッサ固有のフラグ
    uint16_t ehsize;     // ELFヘッダのサイズ
    uint16_t phentsize;  // プログラムヘッダテーブルのエントリサイズ
    uint16_t phnum;      // プログラヘッダテーブルのエントリ数
    uint16_t shentsize;  // セクションヘッダテーブルのエントリサイズ
    uint16_t shnum;      // セクションヘッダテーブルのエントリ数
    uint16_t shstrndx;   // セクション名文字列テーブルのインデックス
};

// プログラムヘッダ (64-bit)
struct proghdr {
    uint32_t type;       // セグメントの種類
    uint32_t flags;      // セグメントのフラグ
    uint64_t off;        // ファイル先頭からセグメントまでのオフセット
    uint64_t vaddr;      // セグメントの仮想アドレス
    uint64_t paddr;      // セグメントの物理アドレス (通常は無視)
    uint64_t filesz;     // ファイルイメージ内のセグメントサイズ
    uint64_t memsz;      // メモリイメージ内のセグメントサイズ (BSS対応)
    uint64_t align;      // セグメントのアライメント
};

// プログラムヘッダの `type` フィールドの値
#define ELF_PROG_LOAD    1 // ロード可能なセグメント

// プログラムヘッダの `flags` フィールドのビットマスク
#define ELF_PROG_FLAG_EXEC  1 // 実行可能
#define ELF_PROG_FLAG_WRITE 2 // 書き込み可能
#define ELF_PROG_FLAG_READ  4 // 読み込み可能

// セクションヘッダ (64-bit)
struct elfshdr {
    uint32_t name;       // セクション名 (文字列テーブルへのインデックス)
    uint32_t type;       // セクションの種類
    uint64_t flags;      // セクションのフラグ
    uint64_t addr;       // メモリ上のアドレス (もしあれば)
    uint64_t offset;     // ファイル先頭からのオフセット
    uint64_t size;       // セクションのサイズ
    uint32_t link;       // 他のセクションへのリンク
    uint32_t info;       // 追加情報
    uint64_t addralign;  // アライメント
    uint64_t entsize;    // テーブルエントリのサイズ
};

// セクションヘッダの `type` フィールドの
#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_RELA     4
#define SHT_HASH     5
#define SHT_DYNAMIC  6
#define SHT_NOTE     7
#define SHT_NOBITS   8 // .bss のようなセクション
#define SHT_REL      9
#define SHT_SHLIB    10
#define SHT_DYNSYM   11

// シンボルテーブルエントリ (64-bit)
struct elfsym {
    uint32_t name;       // シンボル名 (文字列テーブルへのインデックス)
    uint8_t  info;       // シンボルの種類とバインディング属性
    uint8_t  other;      // 予約
    uint16_t shndx;      // 関連するセクションのインデックス
    uint64_t value;      // シンボルの値 (アドレスなど)
    uint64_t size;       // シンボルのサイズ
};

typedef struct {
    uint32_t st_name;
    uint8_t  st_info;
    uint8_t  st_other;
    uint16_t st_shndx;
    uint64_t st_value;
    uint64_t st_size;
} Elf64_Sym;

#endif // _ELF_H
