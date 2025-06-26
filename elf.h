#ifndef ELF_H
#define ELF_H

// ELFヘッダマジック
#define ELF_MAGIC 0x464C457F  // "\x7FELF" (リトルエンディアンで逆順)

// ELFヘッダ（最初の52バイト程度）
struct elfhdr {
    uint32_t magic;   // ELF_MAGIC
    uint8_t  elf[12]; // ELF識別子（無視してよい）
    uint16_t type;
    uint16_t machine;
    uint32_t version;
    uint64_t entry;   // エントリポイント
    uint64_t phoff;   // プログラムヘッダテーブルのオフセット
    uint64_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;   // プログラムヘッダの数
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

// プログラムヘッダ（LOADセグメントなど）
struct proghdr {
    uint32_t type;
    uint32_t flags;
    uint64_t off;     // ファイル中の位置
    uint64_t vaddr;   // 仮想アドレス
    uint64_t paddr;
    uint64_t filesz;  // ファイル中のサイズ
    uint64_t memsz;   // メモリ上のサイズ（BSS含む）
    uint64_t align;
};

// セグメント種別
#define ELF_PROG_LOAD 1

// ELF ヘッダ全体の定義（既にあるなら省略可）
typedef struct {
    unsigned char e_ident[16];  // マジック + クラス + データエンディアンなど
    uint16_t      e_type;
    uint16_t      e_machine;
    uint32_t      e_version;
    uint64_t      e_entry;      // エントリポイント
    uint64_t      e_phoff;      // プログラムヘッダテーブルのファイルオフセット
    uint64_t      e_shoff;      // セクションヘッダテーブルのファイルオフセット
    uint32_t      e_flags;
    uint16_t      e_ehsize;
    uint16_t      e_phentsize;  // プログラムヘッダのエントリ長
    uint16_t      e_phnum;      // プログラムヘッダ数
    uint16_t      e_shentsize;  // セクションヘッダのエントリ長
    uint16_t      e_shnum;      // セクションヘッダ数
    uint16_t      e_shstrndx;   // セクション名文字列テーブルのインデックス
} Elf64_Ehdr;

/*
// プログラムヘッダ（PT_LOAD をむときに既に使っているはず）
typedef struct {
    uint32_t p_type;
    uint32_t p_flags;
    uint64_t p_offset;
    uint64_t p_vaddr;
    uint64_t p_paddr;
    uint64_t p_filesz;
    uint64_t p_memsz;
    uint64_t p_align;
} Elf64_Phdr;

// ■ ここからセクションヘッダ定義 ■
typedef struct {
    uint32_t sh_name;      // セクション名（文字列テーブル内のオフセット）
    uint32_t sh_type;      // セクションタイプ（例：SHT_PROGBITS, SHT_NOBITS…）
    uint64_t sh_flags;     // フラグ（SHF_ALLOC, SHF_WRITE, SHF_EXECINSTR…）
    uint64_t sh_addr;      // メモリ上のアドレス
    uint64_t sh_offset;    // ファイル内オフセット
    uint64_t sh_size;      // セクションのバイト数
    uint32_t sh_link;      // リンク／依存関係（例：シンボルテーブルの idx）
    uint32_t sh_info;      // その他情報
    uint64_t sh_addralign; // アライメント
    uint64_t sh_entsize;   // テーブルエンリサイズ（テーブル型セクション時）
} Elf64_Shdr;

// sh_type 用定数
#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_NOBITS   8

// sh_flags 用定数
#define SHF_WRITE     (1UL << 0)
#define SHF_ALLOC     (1UL << 1)
#define SHF_EXECINSTR (1UL << 2)
*/


#endif

