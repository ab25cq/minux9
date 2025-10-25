#include "minux.h"
#include <stdint.h>
#include <stddef.h>

#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif

// ELF64 structures (little endian)
typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

typedef struct {
    uint32_t sh_name;
    uint32_t sh_type;
    uint64_t sh_flags;
    uint64_t sh_addr;
    uint64_t sh_offset;
    uint64_t sh_size;
    uint32_t sh_link;
    uint32_t sh_info;
    uint64_t sh_addralign;
    uint64_t sh_entsize;
} Elf64_Shdr;

typedef struct {
    uint32_t st_name;
    unsigned char st_info;
    unsigned char st_other;
    uint16_t st_shndx;
    uint64_t st_value;
    uint64_t st_size;
} Elf64_Sym;

// ELF constants
#define EI_MAG0 0
#define EI_MAG1 1
#define EI_MAG2 2
#define EI_MAG3 3
#define EI_CLASS 4
#define EI_DATA  5

#define ELFMAG0 0x7f
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'
#define ELFCLASS64 2
#define ELFDATA2LSB 1

#define SHT_NULL    0
#define SHT_SYMTAB  2
#define SHT_STRTAB  3
#define SHT_NOBITS  8

#define SHF_WRITE      0x1
#define SHF_ALLOC      0x2
#define SHF_EXECINSTR  0x4
#define SHF_TLS        0x400

#define STB_LOCAL  0
#define STB_GLOBAL 1
#define STB_WEAK   2

#define STT_NOTYPE  0
#define STT_OBJECT  1
#define STT_FUNC    2
#define STT_SECTION 3
#define STT_FILE    4

#define SHN_UNDEF   0
#define SHN_LORESERVE 0xff00
#define SHN_ABS     0xfff1
#define SHN_COMMON  0xfff2

typedef struct {
    const char* name;
    uint64_t value;
    char type;
} NmEntry;

static int check_magic(const Elf64_Ehdr* eh) {
    return (eh->e_ident[EI_MAG0] == ELFMAG0 &&
            eh->e_ident[EI_MAG1] == ELFMAG1 &&
            eh->e_ident[EI_MAG2] == ELFMAG2 &&
            eh->e_ident[EI_MAG3] == ELFMAG3);
}

static char classify_symbol(const Elf64_Sym* sym,
                            const Elf64_Shdr* sections,
                            uint16_t shnum) {
    unsigned char bind = sym->st_info >> 4;
    unsigned char type = sym->st_info & 0xf;
    uint16_t shndx = sym->st_shndx;

    if (bind == STB_WEAK) {
        if (shndx == SHN_UNDEF) {
            return (type == STT_OBJECT) ? 'v' : 'w';
        }
        return (type == STT_OBJECT) ? 'V' : 'W';
    }

    if (shndx == SHN_UNDEF) {
        return 'U';
    }
    if (shndx == SHN_ABS) {
        return 'A';
    }
    if (shndx == SHN_COMMON) {
        return 'C';
    }
    if (shndx >= shnum) {
        return '?';
    }

    const Elf64_Shdr* sec = &sections[shndx];
    uint64_t flags = sec->sh_flags;
    uint32_t stype = sec->sh_type;

    char c = '?';
    if ((flags & SHF_ALLOC) && (flags & SHF_EXECINSTR)) {
        c = 'T';
    } else if ((flags & SHF_ALLOC) && (flags & SHF_WRITE)) {
        if (stype == SHT_NOBITS) c = 'B';
        else c = 'D';
    } else if (flags & SHF_ALLOC) {
        c = 'R';
    } else {
        c = 'N';
    }

    if (flags & SHF_TLS) {
        c = (c == 'B') ? 'B' : 'D';
    }

    if (bind == STB_LOCAL && c >= 'A' && c <= 'Z') {
        c = (char)(c - 'A' + 'a');
    }
    return c;
}

static int is_value_shown(char t) {
    return !(t == 'U' || t == 'u' || t == 'w' || t == 'v');
}

static int cmp_entries(const NmEntry* a, const NmEntry* b) {
    if (a->value < b->value) return -1;
    if (a->value > b->value) return 1;
    const char* na = a->name ? a->name : "";
    const char* nb = b->name ? b->name : "";
    while (*na && *nb) {
        if (*na != *nb) return (*na < *nb) ? -1 : 1;
        na++; nb++;
    }
    if (*na == 0 && *nb == 0) return 0;
    return (*na == 0) ? -1 : 1;
}

static void sort_entries(NmEntry* entries, size_t count) {
    for (size_t i = 0; i < count; i++) {
        for (size_t j = i + 1; j < count; j++) {
            if (cmp_entries(&entries[j], &entries[i]) < 0) {
                NmEntry tmp = entries[i];
                entries[i] = entries[j];
                entries[j] = tmp;
            }
        }
    }
}

static int process_file(const char* path, int print_header) {
    struct stat st;
    if (stat(path, &st) < 0) {
        printf("nm: unable to stat %s\n", path);
        return 1;
    }
    if (st.size < (int)sizeof(Elf64_Ehdr)) {
        printf("nm: file too small: %s\n", path);
        return 1;
    }

    int fd = open(path, O_RDONLY, 0);
    if (fd < 0) {
        printf("nm: unable to open %s\n", path);
        return 1;
    }

    unsigned long fsize = (unsigned long)st.size;
    unsigned char* buf = (unsigned char*)malloc(fsize);
    if (!buf) {
        printf("nm: malloc failed\n");
        close(fd);
        return 1;
    }

    unsigned long off = 0;
    while (off < fsize) {
        int n = read(fd, buf + off, (int)(fsize - off));
        if (n <= 0) break;
        off += (unsigned long)n;
    }
    close(fd);
    if (off != fsize) {
        printf("nm: short read on %s\n", path);
        free(buf);
        return 1;
    }

    const Elf64_Ehdr* eh = (const Elf64_Ehdr*)buf;
    if (!check_magic(eh) || eh->e_ident[EI_CLASS] != ELFCLASS64 || eh->e_ident[EI_DATA] != ELFDATA2LSB) {
        printf("nm: unsupported ELF format: %s\n", path);
        free(buf);
        return 1;
    }

    if (eh->e_shoff == 0 || eh->e_shnum == 0) {
        printf("nm: no section headers: %s\n", path);
        free(buf);
        return 1;
    }

    const Elf64_Shdr* sections = (const Elf64_Shdr*)(buf + eh->e_shoff);
    int sym_index = -1;
    for (uint16_t i = 0; i < eh->e_shnum; i++) {
        if (sections[i].sh_type == SHT_SYMTAB) {
            sym_index = (int)i;
            break;
        }
    }
    if (sym_index < 0) {
        if (print_header) {
            printf("\n%s:\n", path);
        }
        printf("nm: no symbols\n");
        free(buf);
        return 1;
    }

    const Elf64_Shdr* sym_sec = &sections[sym_index];
    if (sym_sec->sh_entsize == 0) {
        printf("nm: invalid symbol table\n");
        free(buf);
        return 1;
    }

    uint16_t str_index = sym_sec->sh_link;
    const char* strtab = NULL;
    uint64_t strsz = 0;
    if (str_index < eh->e_shnum && sections[str_index].sh_type == SHT_STRTAB) {
        strtab = (const char*)(buf + sections[str_index].sh_offset);
        strsz = sections[str_index].sh_size;
    }

    uint64_t sym_count = sym_sec->sh_size / sym_sec->sh_entsize;
    const Elf64_Sym* syms = (const Elf64_Sym*)(buf + sym_sec->sh_offset);

    NmEntry* entries = (NmEntry*)malloc(sizeof(NmEntry) * sym_count);
    if (!entries) {
        printf("nm: malloc failed for symbols\n");
        free(buf);
        return 1;
    }

    size_t count = 0;
    for (uint64_t i = 0; i < sym_count; i++) {
        const Elf64_Sym* sym = &syms[i];
        unsigned char type = sym->st_info & 0xf;
        if (type == STT_SECTION || type == STT_FILE) {
            continue;
        }

        const char* name = "";
        if (strtab && sym->st_name < strsz) {
            name = strtab + sym->st_name;
        }
        if (!name || name[0] == '\0') {
            continue;
        }

        char kind = classify_symbol(sym, sections, eh->e_shnum);
        entries[count].name = name;
        entries[count].value = sym->st_value;
        entries[count].type = kind;
        count++;
    }

    sort_entries(entries, count);

    if (print_header) {
        printf("\n%s:\n", path);
    }

    for (size_t i = 0; i < count; i++) {
        NmEntry* ent = &entries[i];
        if (!is_value_shown(ent->type)) {
            printf("                 %c %s\n", ent->type, ent->name ? ent->name : "");
        } else {
            printf("%016llx %c %s\n",
                   (unsigned long long)ent->value,
                   ent->type,
                   ent->name ? ent->name : "");
        }
    }

    free(entries);
    free(buf);
    return 0;
}

static void usage(void) {
    printf("usage: nm <elf-file> [elf-file...]\n");
}

int main(int argc, char** argv) {
    if (argc < 2) {
        usage();
        return 1;
    }

    int num_files = argc - 1;
    int status = 0;
    for (int i = 1; i < argc; i++) {
        int need_header = (num_files > 1);
        int rc = process_file(argv[i], need_header);
        if (rc != 0) {
            status = rc;
        }
    }
    return status;
}
