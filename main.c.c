/// previous struct definition ///
/// struct definition ///
typedef char* string;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef long long int_fast8_t;

typedef long long int_fast16_t;

typedef long long int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned long  long uint_fast8_t;

typedef unsigned long  long uint_fast16_t;

typedef unsigned long  long uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

typedef struct mem_block mem_block_t;

extern struct mem_block* free_list;

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern int gComeMallocLib;

extern int gComeDebugLib;

extern int gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

typedef long  int ptrdiff_t;

typedef unsigned long  int size_t;

typedef int wchar_t;

typedef long  double max_align_t;

struct elfhdr
{
    unsigned int magic;
    unsigned char elf[12];
    unsigned short int type;
    unsigned short int machine;
    unsigned int version;
    unsigned long  long entry;
    unsigned long  long phoff;
    unsigned long  long shoff;
    unsigned int flags;
    unsigned short int ehsize;
    unsigned short int phentsize;
    unsigned short int phnum;
    unsigned short int shentsize;
    unsigned short int shnum;
    unsigned short int shstrndx;
};

struct proghdr
{
    unsigned int type;
    unsigned int flags;
    unsigned long  long off;
    unsigned long  long vaddr;
    unsigned long  long paddr;
    unsigned long  long filesz;
    unsigned long  long memsz;
    unsigned long  long align;
};

struct elfshdr
{
    unsigned int name;
    unsigned int type;
    unsigned long  long flags;
    unsigned long  long addr;
    unsigned long  long offset;
    unsigned long  long size;
    unsigned int link;
    unsigned int info;
    unsigned long  long addralign;
    unsigned long  long entsize;
};

struct elfsym
{
    unsigned int name;
    unsigned char info;
    unsigned char other;
    unsigned short int shndx;
    unsigned long  long value;
    unsigned long  long size;
};

struct superblock
{
    unsigned int size;
    unsigned int nblocks;
    unsigned int ninodes;
    unsigned int nlog;
    unsigned int logstart;
    unsigned int inodestart;
    unsigned int bmapstart;
};

struct dinode
{
    unsigned short int type;
    unsigned short int major;
    unsigned short int minor;
    unsigned short int nlink;
    unsigned int size;
    unsigned int addrs[12+2];
};

struct dirent
{
    unsigned short int inum;
    char name[14];
};

typedef int ssize_t;

struct spipe
{
    char data[512];
    unsigned int nread;
    unsigned int nwrite;
    int read_open;
    int write_open;
};

enum anonymous_typeY2 { FK_STDIN
,FK_STDOUT
,FK_STDERR
,FK_FILE
,FK_PIPE
};

struct file
{
    enum anonymous_typeY2 kind;
    unsigned int inum;
    struct dinode din;
    unsigned int off;
    int used;
    struct spipe* pipe;
};

unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb8, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x04, 0x00, 0x40, 0x00,
  0x0a, 0x00, 0x09, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x98, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x4e, 0x55, 0x00, 0x43, 0xf2, 0x0b, 0x4e, 0xf1, 0xb6, 0xa5, 0xcc,
  0x4e, 0x74, 0xf3, 0xb3, 0x03, 0x36, 0x97, 0x2d, 0xd1, 0x72, 0x0f, 0x66,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0xa0, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0xa3, 0x03,
  0xf4, 0xfe, 0x05, 0x45, 0x93, 0x07, 0x74, 0xfe, 0xbe, 0x85, 0x05, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe,
  0x01, 0x00, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x1d, 0x71,
  0x86, 0xec, 0xa2, 0xe8, 0x80, 0x10, 0xaa, 0x87, 0xae, 0x86, 0x32, 0x87,
  0x23, 0x26, 0xf4, 0xfa, 0xb6, 0x87, 0x23, 0x24, 0xf4, 0xfa, 0xba, 0x87,
  0x23, 0x22, 0xf4, 0xfa, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe,
  0x83, 0x27, 0x44, 0xfa, 0x81, 0x27, 0x8d, 0xc3, 0x83, 0x27, 0xc4, 0xfa,
  0x81, 0x27, 0x63, 0xdd, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfa, 0xbb, 0x07, 0xf0, 0x40, 0x81, 0x27, 0x23, 0x22,
  0xf4, 0xfe, 0x29, 0xa0, 0x83, 0x27, 0xc4, 0xfa, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x27, 0x44, 0xfe, 0x81, 0x27, 0xad, 0xeb, 0x13, 0x05, 0x00, 0x03,
  0xef, 0xf0, 0x9f, 0xf6, 0x65, 0xa0, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27,
  0x44, 0xfe, 0xbb, 0x77, 0xf7, 0x02, 0x81, 0x27, 0x23, 0x20, 0xf4, 0xfe,
  0x83, 0x27, 0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb,
  0xe7, 0x00, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87,
  0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x04, 0xfe,
  0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f,
  0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe,
  0x41, 0x17, 0x22, 0x97, 0x23, 0x04, 0xf7, 0xfc, 0x83, 0x27, 0x84, 0xfa,
  0x03, 0x27, 0x44, 0xfe, 0xbb, 0x57, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x27, 0x44, 0xfe, 0x81, 0x27, 0xd1, 0xfb, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x9f, 0xee,
  0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7,
  0x87, 0xfc, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xed, 0x83, 0x27, 0xc4, 0xfe,
  0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0xe3, 0xdf, 0x07, 0xfc, 0xe6, 0x60, 0x46, 0x64, 0x25, 0x61, 0x82, 0x80,
  0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8,
  0xae, 0x87, 0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28,
  0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27,
  0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb,
  0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9,
  0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9,
  0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x7f, 0xe6, 0x55, 0xa0,
  0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8,
  0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05,
  0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00,
  0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa,
  0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02,
  0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27,
  0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0,
  0xbf, 0xde, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97,
  0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xdd, 0x83, 0x27,
  0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe,
  0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61,
  0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c,
  0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87,
  0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe,
  0x83, 0x27, 0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9,
  0x63, 0xdb, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37,
  0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x9f, 0xd6,
  0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77,
  0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87,
  0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe,
  0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f,
  0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87,
  0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06,
  0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x08,
  0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57,
  0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02,
  0xef, 0xf0, 0xdf, 0xce, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xcd,
  0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27,
  0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74,
  0x65, 0x61, 0x82, 0x80, 0x31, 0x71, 0x86, 0xfc, 0xa2, 0xf8, 0x00, 0x01,
  0x23, 0x34, 0xa4, 0xf8, 0x0c, 0xe4, 0x10, 0xe8, 0x14, 0xec, 0x18, 0xf0,
  0x1c, 0xf4, 0x23, 0x38, 0x04, 0x03, 0x23, 0x3c, 0x14, 0x03, 0x93, 0x07,
  0x04, 0x04, 0x23, 0x30, 0xf4, 0xf8, 0x83, 0x37, 0x04, 0xf8, 0x93, 0x87,
  0x87, 0xfc, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf8, 0x23, 0x34,
  0xf4, 0xfe, 0xc9, 0xac, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0x93, 0x07, 0x50, 0x02, 0x63, 0x0a, 0xf7, 0x00, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xc6,
  0x5d, 0xa4, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x12, 0x85, 0x47, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x00, 0x89, 0x47, 0x23, 0x22,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x40, 0x06,
  0x63, 0x8d, 0xe7, 0x04, 0x13, 0x07, 0x80, 0x07, 0x63, 0x92, 0xe7, 0x0a,
  0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47, 0x63, 0x12,
  0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x38, 0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45,
  0x03, 0x35, 0x04, 0xfb, 0xef, 0xf0, 0x5f, 0xd1, 0x39, 0xa4, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63,
  0x23, 0x3c, 0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfb,
  0xef, 0xf0, 0x3f, 0xdf, 0xfd, 0xa2, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87,
  0x07, 0x00, 0x85, 0x47, 0x63, 0x13, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9,
  0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x30,
  0xf4, 0xfa, 0x83, 0x37, 0x04, 0xfa, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0xcc, 0x7d, 0xaa, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfa,
  0x83, 0x37, 0x84, 0xfa, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0x1f, 0xda, 0x71, 0xaa, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0xdf, 0xb4,
  0x23, 0x20, 0x04, 0xfe, 0x11, 0xa8, 0x13, 0x05, 0xc0, 0x06, 0xef, 0xf0,
  0xff, 0xb3, 0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe,
  0x83, 0x27, 0x04, 0xfe, 0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27,
  0x81, 0x27, 0xe3, 0x40, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xb1, 0xa9, 0xaa, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x80, 0x07,
  0x63, 0x88, 0xe7, 0x06, 0x13, 0x07, 0x80, 0x07, 0x63, 0x45, 0xf7, 0x12,
  0x13, 0x07, 0x30, 0x07, 0x63, 0x89, 0xe7, 0x0a, 0x13, 0x07, 0x30, 0x07,
  0x63, 0x4d, 0xf7, 0x10, 0x13, 0x07, 0x00, 0x07, 0x63, 0x89, 0xe7, 0x06,
  0x13, 0x07, 0x00, 0x07, 0x63, 0x45, 0xf7, 0x10, 0x13, 0x07, 0x40, 0x06,
  0x63, 0x8f, 0xe7, 0x00, 0x13, 0x07, 0x40, 0x06, 0x63, 0x4d, 0xf7, 0x0e,
  0x13, 0x07, 0x50, 0x02, 0x63, 0x84, 0xe7, 0x0e, 0x13, 0x07, 0x30, 0x06,
  0x63, 0x81, 0xe7, 0x0c, 0xdd, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x22, 0xf4, 0xfc,
  0x83, 0x27, 0x44, 0xfc, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0xdf, 0xac, 0xf1, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27,
  0x44, 0xfd, 0x01, 0x46, 0xc1, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0xbf, 0xaa,
  0x6d, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfc, 0x13, 0x05, 0x00, 0x03,
  0xef, 0xf0, 0x9f, 0xa5, 0x13, 0x05, 0x80, 0x07, 0xef, 0xf0, 0x1f, 0xa5,
  0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0, 0x1f, 0xb9,
  0x69, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x67, 0x1a, 0x23, 0x3c,
  0xf4, 0xfc, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x13, 0x87, 0x17, 0x00,
  0x23, 0x3c, 0xe4, 0xfc, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0,
  0x7f, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3,
  0x89, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x43, 0xa3, 0x01, 0xf4, 0xfc, 0x83, 0x47, 0x34, 0xfc,
  0x3e, 0x85, 0xef, 0xf0, 0xff, 0x9d, 0x15, 0xa0, 0x13, 0x05, 0x50, 0x02,
  0xef, 0xf0, 0x5f, 0x9d, 0x29, 0xa8, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0,
  0xbf, 0x9c, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0xdf, 0x9b, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0xe3, 0x94, 0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70, 0x46, 0x74,
  0x29, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x26, 0x04, 0xfe, 0x31, 0xa0, 0x83, 0x27,
  0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe,
  0x03, 0x37, 0x84, 0xfd, 0xba, 0x97, 0x83, 0xc7, 0x07, 0x00, 0xe5, 0xf7,
  0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x1d, 0x71, 0x86, 0xec, 0xa2, 0xe8, 0x80, 0x10, 0xaa, 0x87,
  0x23, 0x30, 0xb4, 0xfa, 0x23, 0x26, 0xf4, 0xfa, 0x83, 0x27, 0xc4, 0xfa,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xa5, 0x0c, 0xef, 0xf0,
  0x3f, 0xc8, 0x83, 0x27, 0xc4, 0xfa, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47,
  0x63, 0xc5, 0xe7, 0x00, 0x09, 0x45, 0xef, 0xf0, 0xbf, 0x90, 0x83, 0x37,
  0x04, 0xfa, 0xa1, 0x07, 0x9c, 0x63, 0x3e, 0x85, 0x81, 0x45, 0x01, 0x46,
  0x93, 0x08, 0x20, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x81, 0x27,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0xbe, 0x85, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x65, 0x09, 0xef, 0xf0, 0xff, 0xc3, 0x83, 0x27,
  0xc4, 0xfe, 0x3e, 0x85, 0x93, 0x07, 0x04, 0xfb, 0xbe, 0x85, 0x13, 0x06,
  0x00, 0x02, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x30,
  0xa4, 0xfe, 0x83, 0x37, 0x04, 0xfe, 0x23, 0x2e, 0xf4, 0xfc, 0x83, 0x27,
  0xc4, 0xfd, 0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x85, 0x06,
  0xef, 0xf0, 0x9f, 0xc0, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0x05, 0x45, 0x93, 0x07, 0x04, 0xfb,
  0xbe, 0x85, 0x83, 0x27, 0xc4, 0xfd, 0x3e, 0x86, 0x93, 0x08, 0x00, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x38, 0xa4, 0xfc, 0x05, 0x45, 0xef, 0xf0,
  0x7f, 0x87, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x60, 0x46, 0x64, 0x25, 0x61,
  0x82, 0x80, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00,
  0x61, 0x72, 0x67, 0x63, 0x20, 0x25, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x66, 0x64, 0x20, 0x25, 0x64, 0x0a, 0x00, 0x00,
  0x73, 0x69, 0x7a, 0x65, 0x20, 0x25, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x7a, 0x52, 0x00, 0x01, 0x7c, 0x01, 0x01, 0x1b, 0x0c, 0x02, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0xf8, 0xff, 0xff,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x20, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x14, 0xf8, 0xff, 0xff, 0x36, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x30, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x68, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x30, 0x42, 0x0e, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x22, 0xf8, 0xff, 0xff,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x60, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x03, 0x08, 0x01, 0xc1, 0x42, 0xc8, 0x0c,
  0x02, 0x60, 0x42, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x8c, 0x00, 0x00, 0x00, 0x0c, 0xf9, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x70, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x02, 0xf0, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x70, 0x42, 0x0e, 0x00,
  0x24, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0xe2, 0xf9, 0xff, 0xff,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x70, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x02, 0xf0, 0xc1, 0x42, 0xc8, 0x0c, 0x02,
  0x70, 0x42, 0x0e, 0x00, 0x28, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00,
  0xb8, 0xfa, 0xff, 0xff, 0x24, 0x03, 0x00, 0x00, 0x00, 0x42, 0x0e, 0xc0,
  0x01, 0x44, 0x81, 0x12, 0x88, 0x14, 0x42, 0x0c, 0x08, 0x40, 0x03, 0x16,
  0x03, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0xc0, 0x01, 0x42, 0x0e, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0xb0, 0xfd, 0xff, 0xff,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x30, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x6c, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x30,
  0x42, 0x0e, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00,
  0xc2, 0xfd, 0xff, 0xff, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x60,
  0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08, 0x00, 0x02, 0xca, 0xc1,
  0x42, 0xc8, 0x0c, 0x02, 0x60, 0x42, 0x0e, 0x00, 0x47, 0x43, 0x43, 0x3a,
  0x20, 0x28, 0x47, 0x4e, 0x55, 0x29, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e,
  0x31, 0x20, 0x32, 0x30, 0x32, 0x35, 0x30, 0x34, 0x32, 0x35, 0x20, 0x28,
  0x52, 0x65, 0x64, 0x20, 0x48, 0x61, 0x74, 0x20, 0x43, 0x72, 0x6f, 0x73,
  0x73, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e, 0x31, 0x2d, 0x31, 0x29, 0x00,
  0x41, 0x73, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x69, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0xe0, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x10, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x71, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x60, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x79, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0xa8, 0x04, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x00, 0x18, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x92, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa2, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0xaa, 0x03, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbc, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x06, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xcd, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x96, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd6, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe5, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xec, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf1, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0xcc, 0x07, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf8, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0xac, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63, 0x00, 0x24, 0x78, 0x72,
  0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30,
  0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64,
  0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63,
  0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63,
  0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63,
  0x61, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00,
  0x65, 0x78, 0x69, 0x74, 0x00, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72,
  0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c,
  0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72,
  0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c,
  0x6f, 0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42, 0x53,
  0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73,
  0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f, 0x5f,
  0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f,
  0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64,
  0x00, 0x73, 0x74, 0x72, 0x6c, 0x65, 0x6e, 0x00, 0x70, 0x72, 0x69, 0x6e,
  0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x6e, 0x6f,
  0x74, 0x65, 0x2e, 0x67, 0x6e, 0x75, 0x2e, 0x62, 0x75, 0x69, 0x6c, 0x64,
  0x2d, 0x69, 0x64, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72,
  0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x65, 0x68, 0x5f, 0x66, 0x72,
  0x61, 0x6d, 0x65, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74,
  0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72,
  0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9a, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe0, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x54, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x4f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x0d, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x52, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=4408;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x04, 0x00, 0x40, 0x00,
  0x0a, 0x00, 0x09, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x98, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x64, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x4e, 0x55, 0x00, 0x98, 0xcb, 0x70, 0xa5, 0x52, 0x5c, 0x08, 0x45,
  0x8d, 0x07, 0x11, 0x6d, 0x6b, 0x46, 0x05, 0xfe, 0xcc, 0x2d, 0xcb, 0xa4,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0xa0, 0x39, 0x71, 0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00,
  0x01, 0x45, 0x93, 0x07, 0x84, 0xfc, 0xbe, 0x85, 0x19, 0x46, 0x93, 0x08,
  0x10, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x05, 0x45,
  0x93, 0x07, 0x84, 0xfc, 0xbe, 0x85, 0x19, 0x46, 0x93, 0x08, 0x00, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfe, 0x05, 0x45, 0x97, 0x07,
  0x00, 0x00, 0x93, 0x87, 0x27, 0x04, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08,
  0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x3c, 0xa4, 0xfc, 0x09, 0x45,
  0xef, 0xf0, 0x5f, 0xf9, 0x81, 0x47, 0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74,
  0x21, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08,
  0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7a, 0x52, 0x00,
  0x01, 0x7c, 0x01, 0x01, 0x1b, 0x0c, 0x02, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x48, 0xff, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x20, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x44, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x40,
  0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08, 0x00, 0x02, 0x52, 0xc1,
  0x42, 0xc8, 0x0c, 0x02, 0x40, 0x42, 0x0e, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x7c, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x10, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x46, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x10, 0x42, 0x0e, 0x00, 0x00,
  0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x47, 0x4e, 0x55, 0x29, 0x20, 0x31,
  0x35, 0x2e, 0x31, 0x2e, 0x31, 0x20, 0x32, 0x30, 0x32, 0x35, 0x30, 0x34,
  0x32, 0x35, 0x20, 0x28, 0x52, 0x65, 0x64, 0x20, 0x48, 0x61, 0x74, 0x20,
  0x43, 0x72, 0x6f, 0x73, 0x73, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e, 0x31,
  0x2d, 0x31, 0x29, 0x00, 0x41, 0x73, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73,
  0x63, 0x76, 0x00, 0x01, 0x69, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72,
  0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30,
  0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64,
  0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63,
  0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63,
  0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63,
  0x61, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00,
  0xd8, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00,
  0xe0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
  0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00,
  0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00,
  0xc0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00,
  0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00,
  0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e,
  0x63, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31,
  0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66,
  0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d,
  0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63,
  0x64, 0x31, 0x70, 0x30, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x5f, 0x5f,
  0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74,
  0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f,
  0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00,
  0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00,
  0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f,
  0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61,
  0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79,
  0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x6e, 0x6f, 0x74, 0x65, 0x2e, 0x67, 0x6e, 0x75, 0x2e, 0x62, 0x75, 0x69,
  0x6c, 0x64, 0x2d, 0x69, 0x64, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00,
  0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x65, 0x68, 0x5f,
  0x66, 0x72, 0x61, 0x6d, 0x65, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65,
  0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74,
  0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x46, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x64, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd8, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa8, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=2192;
unsigned char msh_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xe0, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x0d, 0x00, 0x0c, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x35, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x39, 0x71, 0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00,
  0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc, 0xb2, 0x87, 0x23, 0x26,
  0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x23, 0x34, 0xf4, 0xfe, 0x01, 0x00,
  0x83, 0x27, 0xc4, 0xfc, 0x1b, 0x87, 0xf7, 0xff, 0x23, 0x26, 0xe4, 0xfc,
  0x63, 0x5e, 0xf0, 0x02, 0x03, 0x37, 0x04, 0xfd, 0x93, 0x07, 0x17, 0x00,
  0x23, 0x38, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x93, 0x86, 0x17, 0x00,
  0x23, 0x3c, 0xd4, 0xfc, 0x03, 0x47, 0x07, 0x00, 0x23, 0x80, 0xe7, 0x00,
  0x83, 0xc7, 0x07, 0x00, 0xf1, 0xf7, 0x09, 0xa8, 0x83, 0x37, 0x84, 0xfd,
  0x13, 0x87, 0x17, 0x00, 0x23, 0x3c, 0xe4, 0xfc, 0x23, 0x80, 0x07, 0x00,
  0x83, 0x27, 0xc4, 0xfc, 0x1b, 0x87, 0xf7, 0xff, 0x23, 0x26, 0xe4, 0xfc,
  0xe3, 0x42, 0xf0, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0xe2, 0x70,
  0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd,
  0x23, 0x00, 0xf4, 0xfe, 0xa3, 0x00, 0x04, 0xfe, 0x05, 0x45, 0x93, 0x07,
  0x04, 0xfe, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x01, 0x00, 0xa2, 0x70, 0x02, 0x74,
  0x45, 0x61, 0x82, 0x80, 0x1d, 0x71, 0x86, 0xec, 0xa2, 0xe8, 0x80, 0x10,
  0xaa, 0x87, 0xae, 0x86, 0x32, 0x87, 0x23, 0x26, 0xf4, 0xfa, 0xb6, 0x87,
  0x23, 0x24, 0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22, 0xf4, 0xfa, 0x23, 0x26,
  0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfa, 0x81, 0x27,
  0x8d, 0xc3, 0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27, 0x63, 0xdd, 0x07, 0x00,
  0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfa, 0xbb, 0x07,
  0xf0, 0x40, 0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x29, 0xa0, 0x83, 0x27,
  0xc4, 0xfa, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x81, 0x27,
  0xad, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x5f, 0xf6, 0x65, 0xa0,
  0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x77, 0xf7, 0x02,
  0x81, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x1b, 0x87,
  0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x04, 0xfe,
  0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f,
  0x09, 0xa8, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87,
  0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06,
  0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x04,
  0xf7, 0xfc, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x57,
  0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x81, 0x27,
  0xd1, 0xfb, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05,
  0xd0, 0x02, 0xef, 0xf0, 0x5f, 0xee, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe,
  0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc, 0x3e, 0x85, 0xef, 0xf0,
  0x1f, 0xed, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xe6, 0x60,
  0x46, 0x64, 0x25, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0,
  0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87, 0x23, 0x2a,
  0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe,
  0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf,
  0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03,
  0xef, 0xf0, 0x3f, 0xe6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37,
  0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00,
  0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03,
  0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27,
  0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17,
  0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37,
  0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37,
  0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf,
  0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x7f, 0xde, 0x11, 0xa8, 0x83, 0x27,
  0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85,
  0xef, 0xf0, 0x3f, 0xdd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc,
  0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4,
  0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87,
  0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26,
  0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27,
  0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40,
  0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05,
  0x00, 0x03, 0xef, 0xf0, 0x5f, 0xd6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9,
  0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb,
  0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87,
  0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe,
  0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f,
  0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe,
  0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9,
  0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8,
  0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27,
  0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x9f, 0xce, 0x11, 0xa8,
  0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb,
  0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf,
  0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x31, 0x71,
  0x86, 0xfc, 0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34, 0xa4, 0xf8, 0x0c, 0xe4,
  0x10, 0xe8, 0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4, 0x23, 0x38, 0x04, 0x03,
  0x23, 0x3c, 0x14, 0x03, 0x93, 0x07, 0x04, 0x04, 0x23, 0x30, 0xf4, 0xf8,
  0x83, 0x37, 0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc, 0x23, 0x3c, 0xf4, 0xf8,
  0x83, 0x37, 0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe, 0xd9, 0xac, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x50, 0x02,
  0x63, 0x0a, 0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0xdf, 0xc5, 0x6d, 0xa4, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x12,
  0x85, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a,
  0xf7, 0x00, 0x89, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x81, 0x27, 0x13, 0x07, 0x40, 0x06, 0x63, 0x8d, 0xe7, 0x04, 0x13, 0x07,
  0x80, 0x07, 0x63, 0x92, 0xe7, 0x0a, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87,
  0x07, 0x00, 0x85, 0x47, 0x63, 0x12, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9,
  0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x38,
  0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x04, 0xfb, 0xef, 0xf0,
  0x5f, 0xd1, 0x09, 0xac, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfa, 0x01, 0x46,
  0xc1, 0x45, 0x03, 0x35, 0x84, 0xfb, 0xef, 0xf0, 0x3f, 0xdf, 0xcd, 0xaa,
  0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47, 0x63, 0x13,
  0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x30, 0xf4, 0xfa, 0x83, 0x37, 0x04, 0xfa,
  0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcc, 0xc9, 0xa2,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfa, 0x83, 0x37, 0x84, 0xfa, 0x05, 0x46,
  0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xda, 0x45, 0xa2, 0x13, 0x05,
  0x50, 0x02, 0xef, 0xf0, 0x9f, 0xb4, 0x23, 0x20, 0x04, 0xfe, 0x11, 0xa8,
  0x13, 0x05, 0xc0, 0x06, 0xef, 0xf0, 0xbf, 0xb3, 0x83, 0x27, 0x04, 0xfe,
  0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x3e, 0x87,
  0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x40, 0xf7, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0,
  0x1f, 0xb1, 0xb9, 0xaa, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x81, 0x27, 0x13, 0x07, 0x50, 0x02, 0x63, 0x86, 0xe7, 0x12, 0x13, 0x07,
  0x50, 0x02, 0x63, 0xc7, 0xe7, 0x12, 0x13, 0x07, 0x80, 0x07, 0x63, 0x43,
  0xf7, 0x12, 0x13, 0x07, 0x30, 0x06, 0x63, 0xcf, 0xe7, 0x10, 0x9b, 0x87,
  0xd7, 0xf9, 0xbe, 0x86, 0x1b, 0x87, 0x06, 0x00, 0xd5, 0x47, 0x63, 0xe7,
  0xe7, 0x10, 0x93, 0x97, 0x06, 0x02, 0x81, 0x93, 0x13, 0x97, 0x27, 0x00,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x6e, 0xba, 0x97, 0x9c, 0x43,
  0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x6d,
  0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x22, 0xf4, 0xfc, 0x83, 0x27,
  0x44, 0xfc, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xac,
  0xf1, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfd,
  0x01, 0x46, 0xc1, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xaa, 0x6d, 0xa8,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfc, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0,
  0x1f, 0xa5, 0x13, 0x05, 0x80, 0x07, 0xef, 0xf0, 0x9f, 0xa4, 0x01, 0x46,
  0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0, 0xdf, 0xb8, 0x69, 0xa0,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x9d, 0xe3,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x63, 0x23, 0x3c, 0xf4, 0xfc,
  0x21, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x13, 0x87, 0x17, 0x00, 0x23, 0x3c,
  0xe4, 0xfc, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x9f,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3, 0x89, 0xa0,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x43, 0xa3, 0x01, 0xf4, 0xfc, 0x83, 0x47, 0x34, 0xfc, 0x3e, 0x85,
  0xef, 0xf0, 0x7f, 0x9d, 0x15, 0xa0, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0,
  0xdf, 0x9c, 0x29, 0xa8, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x3f, 0x9c,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0,
  0x5f, 0x9b, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0xe3, 0x92,
  0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70, 0x46, 0x74, 0x29, 0x61,
  0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34,
  0xa4, 0xfe, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfe, 0x13, 0x87, 0x17, 0x00,
  0x23, 0x34, 0xe4, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0,
  0xdf, 0x96, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3,
  0x01, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80,
  0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0xaa, 0x87, 0x23, 0x38,
  0xb4, 0xf8, 0x32, 0x87, 0x23, 0x2e, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x2c,
  0xf4, 0xf8, 0x23, 0x28, 0x04, 0xfc, 0x23, 0x2a, 0x04, 0xfc, 0x03, 0x27,
  0xc4, 0xf9, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf7, 0x02, 0x03, 0x37,
  0x04, 0xf9, 0xba, 0x97, 0x23, 0x30, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xf9,
  0xfd, 0x37, 0x81, 0x27, 0x03, 0x27, 0xc4, 0xf9, 0x01, 0x27, 0x63, 0x18,
  0xf7, 0x06, 0x23, 0x26, 0x04, 0xfe, 0x1d, 0xa0, 0x83, 0x27, 0xc4, 0xfe,
  0x92, 0x07, 0x03, 0x37, 0x04, 0xfe, 0x3e, 0x97, 0x83, 0x26, 0xc4, 0xfe,
  0x93, 0x07, 0x84, 0xfb, 0x8e, 0x06, 0xb6, 0x97, 0x98, 0xe3, 0x83, 0x27,
  0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x37, 0x04, 0xfe,
  0x9c, 0x5b, 0x03, 0x27, 0xc4, 0xfe, 0x01, 0x27, 0xe3, 0x48, 0xf7, 0xfc,
  0x03, 0x27, 0xc4, 0xfe, 0x93, 0x07, 0x84, 0xfb, 0x0e, 0x07, 0xba, 0x97,
  0x23, 0xb0, 0x07, 0x00, 0x83, 0x37, 0x84, 0xfb, 0x3e, 0x85, 0x93, 0x07,
  0x84, 0xfb, 0xbe, 0x85, 0x93, 0x08, 0x50, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x13, 0x05, 0xf0, 0x07, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x01, 0xa0, 0x93, 0x07, 0x04, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x90, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x2e, 0xf4, 0xfc, 0x83, 0x27, 0xc4, 0xfd, 0x81, 0x27,
  0xa1, 0xe7, 0x83, 0x27, 0x44, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x30, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x83, 0x27, 0x04, 0xfd, 0x3e, 0x85, 0x81, 0x45,
  0x93, 0x08, 0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27, 0x04, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27,
  0xc4, 0xf9, 0x85, 0x27, 0x81, 0x27, 0x03, 0x27, 0x84, 0xf9, 0x3a, 0x86,
  0x83, 0x35, 0x04, 0xf9, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xee, 0x69, 0xa8,
  0x83, 0x27, 0x04, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x30, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x83, 0x27, 0x44, 0xfd, 0x3e, 0x85, 0x85, 0x45, 0x93, 0x08,
  0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27, 0x44, 0xfd, 0x3e, 0x85,
  0x93, 0x08, 0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x24, 0x04, 0xfe,
  0x1d, 0xa0, 0x83, 0x27, 0x84, 0xfe, 0x92, 0x07, 0x03, 0x37, 0x04, 0xfe,
  0x3e, 0x97, 0x83, 0x26, 0x84, 0xfe, 0x93, 0x07, 0x04, 0xfa, 0x8e, 0x06,
  0xb6, 0x97, 0x98, 0xe3, 0x83, 0x27, 0x84, 0xfe, 0x85, 0x27, 0x23, 0x24,
  0xf4, 0xfe, 0x83, 0x37, 0x04, 0xfe, 0x9c, 0x5b, 0x03, 0x27, 0x84, 0xfe,
  0x01, 0x27, 0xe3, 0x48, 0xf7, 0xfc, 0x03, 0x27, 0x84, 0xfe, 0x93, 0x07,
  0x04, 0xfa, 0x0e, 0x07, 0xba, 0x97, 0x23, 0xb0, 0x07, 0x00, 0x83, 0x37,
  0x04, 0xfa, 0x3e, 0x85, 0x93, 0x07, 0x04, 0xfa, 0xbe, 0x85, 0x93, 0x08,
  0x50, 0x04, 0x73, 0x00, 0x00, 0x00, 0x13, 0x05, 0xf0, 0x07, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x85, 0x47, 0x3e, 0x85,
  0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x29, 0x71, 0x06, 0xfe,
  0x22, 0xfa, 0x80, 0x02, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0x67, 0x3f, 0xbe, 0x85, 0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x23, 0x34, 0xa4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x01, 0x45,
  0x93, 0x07, 0x04, 0xf6, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x10, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfc, 0x05, 0x45, 0x93, 0x07,
  0x04, 0xf6, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x23, 0x3c, 0xa4, 0xfa, 0x03, 0x47, 0x04, 0xf6, 0x83, 0x37,
  0x84, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x8c, 0xe7, 0xf6, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x47, 0x04, 0xf6,
  0x3e, 0x87, 0xb5, 0x47, 0x63, 0x09, 0xf7, 0x00, 0x83, 0x47, 0x04, 0xf6,
  0x3e, 0x87, 0xa9, 0x47, 0x63, 0x05, 0xf7, 0x00, 0x4d, 0xb7, 0x01, 0x00,
  0x11, 0xa0, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xfd, 0x17, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x8c, 0x07, 0xf6, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00,
  0x93, 0x87, 0xc7, 0x36, 0xbe, 0x85, 0x09, 0x46, 0x93, 0x08, 0x00, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x38, 0xa4, 0xfa, 0x83, 0x47, 0x84, 0xf6,
  0x63, 0x82, 0x07, 0x28, 0x23, 0x22, 0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe,
  0x93, 0x07, 0x84, 0xf6, 0x23, 0x3c, 0xf4, 0xfc, 0x23, 0x34, 0x04, 0xfe,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0xc0, 0x07, 0x63, 0x14, 0xf7, 0x0a, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07,
  0x23, 0x3c, 0xf4, 0xfc, 0x31, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07,
  0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0x93, 0x07, 0x00, 0x02, 0xe3, 0x04, 0xf7, 0xfe, 0x83, 0x37,
  0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47, 0xe3, 0x0c,
  0xf7, 0xfc, 0x83, 0x27, 0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97,
  0x47, 0x00, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97,
  0xc1, 0x17, 0x33, 0x87, 0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97,
  0x23, 0x88, 0x07, 0xec, 0x03, 0x27, 0x44, 0xfe, 0x93, 0x07, 0x40, 0x03,
  0xb3, 0x07, 0xf7, 0x02, 0xc1, 0x17, 0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe,
  0x23, 0xa0, 0xe7, 0xf0, 0x83, 0x27, 0x44, 0xfe, 0x85, 0x27, 0x23, 0x22,
  0xf4, 0xfe, 0x23, 0x34, 0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x89, 0x47, 0xe3, 0xde, 0xe7, 0xf4,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x85, 0x29, 0xef, 0xf0, 0x3f, 0xc8,
  0xb1, 0xaa, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0x93, 0x07, 0x00, 0x02, 0x63, 0x00, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xfd,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47, 0x63, 0x11, 0xf7, 0x08,
  0x31, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0x00, 0x02, 0xe3, 0x04, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47, 0xe3, 0x0c, 0xf7, 0xfc, 0x83, 0x27,
  0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07,
  0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87,
  0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x88, 0x07, 0xec,
  0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x23, 0x34,
  0x04, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x89, 0x47,
  0x63, 0xd5, 0xe7, 0x0c, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x85, 0x20,
  0xef, 0xf0, 0x3f, 0xbe, 0x75, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0xb9, 0xeb, 0x83, 0x27, 0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe,
  0x13, 0x97, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02,
  0xba, 0x97, 0xc1, 0x17, 0x33, 0x87, 0x87, 0x00, 0x83, 0x37, 0x84, 0xfe,
  0xba, 0x97, 0x23, 0x88, 0x07, 0xec, 0x83, 0x27, 0x04, 0xfe, 0x85, 0x27,
  0x23, 0x20, 0xf4, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x93, 0x07, 0x40, 0x03,
  0xb3, 0x07, 0xf7, 0x02, 0xc1, 0x17, 0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe,
  0x23, 0xa0, 0xe7, 0xf0, 0x83, 0x27, 0x44, 0xfe, 0x85, 0x27, 0x23, 0x22,
  0xf4, 0xfe, 0xb9, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x03, 0xc7, 0x07, 0x00,
  0x83, 0x27, 0x04, 0xfe, 0x03, 0x26, 0x44, 0xfe, 0x93, 0x96, 0x47, 0x00,
  0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf6, 0x02, 0xb6, 0x97, 0xc1, 0x17,
  0xb3, 0x86, 0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xb6, 0x97, 0x23, 0x88,
  0xe7, 0xec, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc,
  0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x03, 0x37,
  0x84, 0xfe, 0xbd, 0x47, 0xe3, 0xd2, 0xe7, 0xe0, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x05, 0x16, 0xef, 0xf0, 0xbf, 0xb2, 0x11, 0xa0, 0xcd, 0xbb,
  0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26,
  0xf4, 0xfa, 0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27, 0x99, 0xeb, 0x03, 0x27,
  0x44, 0xfe, 0x93, 0x07, 0x04, 0xec, 0x3a, 0x86, 0xbe, 0x85, 0x01, 0x45,
  0xef, 0xf0, 0x9f, 0xb3, 0x01, 0xb3, 0x23, 0x2a, 0x04, 0xfc, 0x29, 0xa8,
  0x93, 0x07, 0xc4, 0xf5, 0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x83, 0x27, 0x44, 0xfd, 0x85, 0x27, 0x23, 0x2a, 0xf4, 0xfc,
  0x83, 0x27, 0x44, 0xfd, 0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27,
  0x81, 0x27, 0xe3, 0x4d, 0xf7, 0xfc, 0xf9, 0xb1, 0x01, 0x00, 0xe9, 0xb1,
  0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00, 0x13, 0x05, 0x04, 0x00,
  0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0xaf, 0xd8,
  0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0x2f, 0xc3, 0x83, 0x30, 0x81, 0x00,
  0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00, 0x13, 0x01, 0x01, 0xff,
  0x23, 0x34, 0x11, 0x00, 0x83, 0x32, 0x84, 0xfd, 0x13, 0x85, 0x02, 0x00,
  0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0xaf, 0xd5,
  0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0x2f, 0xc0, 0x83, 0x30, 0x81, 0x00,
  0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00, 0xf8, 0xf9, 0xff, 0xff,
  0x3c, 0xf9, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff,
  0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff,
  0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff,
  0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff,
  0x80, 0xf9, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff,
  0xb0, 0xf9, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff,
  0x20, 0xfa, 0xff, 0xff, 0x20, 0xfa, 0xff, 0xff, 0x5e, 0xf9, 0xff, 0xff,
  0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x45, 0x52, 0x52, 0x20, 0x4d, 0x41, 0x58, 0x20,
  0x43, 0x4f, 0x4d, 0x4d, 0x41, 0x4e, 0x44, 0x00, 0x41, 0x52, 0x47, 0x20,
  0x4e, 0x55, 0x4d, 0x20, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x00, 0x00, 0x00,
  0x45, 0x52, 0x52, 0x20, 0x41, 0x52, 0x47, 0x20, 0x4e, 0x55, 0x4d, 0x00,
  0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36,
  0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30,
  0x00, 0x41, 0x65, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00,
  0x01, 0x5b, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34,
  0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32,
  0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32,
  0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c,
  0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7c, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x11,
  0x00, 0x10, 0x06, 0x11, 0x01, 0x12, 0x01, 0x03, 0x0e, 0x1b, 0x0e, 0x25,
  0x0e, 0x13, 0x05, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x02, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x01, 0xfb, 0x0e, 0x0a, 0x00, 0x01, 0x01,
  0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78,
  0x2e, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x20, 0x0d,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x07, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09,
  0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x09, 0x04, 0x00,
  0x00, 0x01, 0x01, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x2f,
  0x55, 0x73, 0x65, 0x72, 0x73, 0x2f, 0x61, 0x62, 0x32, 0x35, 0x63, 0x71,
  0x2f, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x39, 0x00, 0x47, 0x4e, 0x55, 0x20,
  0x41, 0x53, 0x20, 0x32, 0x2e, 0x34, 0x33, 0x2e, 0x31, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x80, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x07, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x09, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0x20, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x6e, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xba, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x1c, 0x26, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x20, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x1c, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xe2, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xbc, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x20, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x4c, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xe0, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x35, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xa8, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4d, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x20, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xbe, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x73, 0x68, 0x2e, 0x63, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x6f, 0x00, 0x24, 0x78, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61,
  0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63,
  0x31, 0x70, 0x30, 0x00, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72, 0x00,
  0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f,
  0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24,
  0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x00, 0x72, 0x75, 0x6e,
  0x5f, 0x63, 0x6f, 0x6d, 0x6d, 0x61, 0x6e, 0x64, 0x00, 0x5f, 0x5f, 0x53,
  0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f,
  0x00, 0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c,
  0x6f, 0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x73, 0x74, 0x72, 0x6e,
  0x63, 0x70, 0x79, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e,
  0x44, 0x5f, 0x5f, 0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x5f,
  0x6d, 0x69, 0x6e, 0x75, 0x73, 0x34, 0x30, 0x00, 0x5f, 0x5f, 0x62, 0x73,
  0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f, 0x5f,
  0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f,
  0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64,
  0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x00,
  0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72,
  0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61,
  0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64,
  0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74,
  0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72,
  0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75,
  0x67, 0x5f, 0x61, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x73, 0x00, 0x2e, 0x64,
  0x65, 0x62, 0x75, 0x67, 0x5f, 0x69, 0x6e, 0x66, 0x6f, 0x00, 0x2e, 0x64,
  0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x62, 0x62, 0x72, 0x65, 0x76, 0x00,
  0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x00,
  0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x73, 0x74, 0x72, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x94, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0d, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x35, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x79, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xcf, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x63, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x63, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int msh_elf_len=6184;
typedef int pid_t;

typedef unsigned long  int anonymous_var_nameX25;

typedef long  int anonymous_var_nameX26;

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
typedef unsigned long  int anonymous_var_nameX29;

typedef long  int anonymous_var_nameX30;

extern char _end2[];
extern char _end3[];
struct context_t
{
    unsigned long  long ra;
    unsigned long  long sp;
    unsigned long  long gp;
    unsigned long  long tp;
    unsigned long  long t0;
    unsigned long  long t1;
    unsigned long  long t2;
    unsigned long  long t3;
    unsigned long  long t4;
    unsigned long  long t5;
    unsigned long  long t6;
    unsigned long  long a0;
    unsigned long  long a1;
    unsigned long  long a2;
    unsigned long  long a3;
    unsigned long  long a4;
    unsigned long  long a5;
    unsigned long  long a6;
    unsigned long  long a7;
    unsigned long  long s0;
    unsigned long  long s1;
    unsigned long  long s2;
    unsigned long  long s3;
    unsigned long  long s4;
    unsigned long  long s5;
    unsigned long  long s6;
    unsigned long  long s7;
    unsigned long  long s8;
    unsigned long  long s9;
    unsigned long  long s10;
    unsigned long  long s11;
    unsigned long  long mepc;
};

typedef unsigned long  long pte_t;

typedef unsigned long  long pde_t;

typedef unsigned long  long* pagetable_t;

unsigned long  long* kernel_pagetable;
struct tuple2$2void$plong$
{
    void* v1;
    long v2;
};

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
};

struct list$1void$p
{
    struct list_item$1void$p* head;
    struct list_item$1void$p* tail;
    int len;
    struct list_item$1void$p* it;
};

struct map$2void$ptuple2$2void$plong$$ph
{
    void** keys;
    _Bool* item_existance;
    struct tuple2$2void$plong$** items;
    int size;
    int len;
    struct list$1void$p* key_list;
    int it;
};

struct proc
{
    struct context_t trapframe;
    struct context_t context;
    struct proc* parent;
    char* stack_top;
    unsigned long  long vaddr;
    unsigned long  long sz;
    int zombie;
    unsigned long  long* pagetable;
    char* program;
    int xstatus;
    struct map$2void$ptuple2$2void$plong$$ph* mapping_values;
    struct file* file_table;
    int deleted;
};

struct cpu
{
    struct proc* proc;
    struct context_t context;
    int noff;
    int intena;
};

struct cpu gCPU;
struct list_item$1proc$ph
{
    struct proc* item;
    struct list_item$1proc$ph* prev;
    struct list_item$1proc$ph* next;
};

struct list$1proc$ph
{
    struct list_item$1proc$ph* head;
    struct list_item$1proc$ph* tail;
    int len;
    struct list_item$1proc$ph* it;
};

struct list$1proc$ph* gProc;
int gActiveProc;
struct run
{
    struct run* next;
};

struct spinlock
{
    unsigned int locked;
    char* name;
    struct cpu* cpu;
};

struct anonymous_typeX3
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX4
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX5
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX6
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX7
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX7 kmem;
extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
extern char COMMON2[];
unsigned long  long kernel_sp __attribute__((section(".common")));
unsigned long  long user_sp __attribute__((section(".common")));
unsigned long  long kernel_satp __attribute__((section(".common")));
unsigned long  long user_satp __attribute__((section(".common")));
char last_key=0;
extern char stack_top[];
char __attribute__((section(".common"))) yield_stack[(4096*16)];
struct sKernelState
{
    struct context_t gYieldContext;
    struct context_t gYieldReturnContext;
    char gYieldStack[(4096*16)];
    unsigned long  long gYieldUserSatp;
    unsigned long  long gYieldUserSP;
    unsigned long  long gYieldUserActiveProc;
};

struct sKernelState __attribute__((section(".common"))) gKernelState[16];
int gNumKernelState __attribute__((section(".common")));
int gKernelStateHead __attribute__((section(".common")));
int gKernelStateTail __attribute__((section(".common")));
static struct spinlock console_lock;
// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void read_block(unsigned int blockno, void* buf);
void read_superblock();
void read_inode(unsigned int inum, struct dinode* dest);
void read_data(struct dinode* inode, unsigned int offset, unsigned char* buf, unsigned int size);
unsigned int path_lookup(const char* path);
unsigned int dir_lookup(struct dinode* parent, const char* name);
void dump_inode(unsigned int inum);
void virtio_blk_init();
int fs_open(const char* path);
int fs_read(int fd, void* buf, unsigned long  int count);
int fs_close(long fd);
int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);
void pipe_open(int* fd1, int* fd2);
int piperead(int fd, char* addr, int n);
int pipewrite(int fd, char* addr, int n);
void fs_dup2(int oldfd, int newfd);
struct file* fs_init();
struct file* fs_dup_table(struct file* orig);
int fs_size(int fd);
static void* kalloc_page(unsigned long  long bump);
void* kalloc_pages(unsigned long  int npages);
void perror(char* str);
void panic(char* str);
unsigned long  long make_satp(unsigned long  long* pagetable);
struct cpu* mycpu();
void free_proc(struct proc* p);
void initlock(struct spinlock* lk, char* name);
void acquire(struct spinlock* lk);
void release(struct spinlock* lk);
int holding(struct spinlock* lk);
void push_off();
void pop_off();
void kinit();
void freerange(void* pa_start, void* pa_end);
void kfree(void* pa);
void* kalloc();
unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc);
int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm);
void dump_physical_memory(unsigned long  long pa, int count);
void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level);
void vmprint(unsigned long  long* pagetable);
void enable_mmu(unsigned long  long* kernel_pagetable);
void* common_kalloc(unsigned long  int size);
char uart_getc();
unsigned long  int uart_readline(char* buf, unsigned long  int maxlen);
unsigned long  int uart_readn(char* buf, unsigned long  int len);
void uart_rx_handler();
void uart_init();
void putc(char c);
void putchar(char c);
void mmu_init();
void* walkaddr(unsigned long  long* pagetable, unsigned long  long va);
int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len);
int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len);
int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max);
void setting_user_pagetable(struct proc* proc, unsigned long  long* pagetable);
void alloc_prog(char* elf_buf, int fork_flag, int exec_flag);
static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position);
static void proc_finalize(struct proc* self);
static void map$2void$ptuple2$2void$plong$$ph$p_finalize(struct map$2void$ptuple2$2void$plong$$ph* self);
static void tuple2$2void$plong$$p_finalize(struct tuple2$2void$plong$* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position);
static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph$p_clone(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_initialize(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct list$1void$p* list$1void$p_initialize(struct list$1void$p* self);
static void list$1void$p_finalize(struct list$1void$p* self);
static void* map$2void$ptuple2$2void$plong$$ph_begin(struct map$2void$ptuple2$2void$plong$$ph* self);
static _Bool map$2void$ptuple2$2void$plong$$ph_end(struct map$2void$ptuple2$2void$plong$$ph* self);
static void* map$2void$ptuple2$2void$plong$$ph_next(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_at(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* default_value);
static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_put(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item);
static void map$2void$ptuple2$2void$plong$$ph_rehash(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct list$1void$p* list$1void$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p_reset(struct list$1void$p* self);
static void* list$1void$p_begin(struct list$1void$p* self);
static _Bool list$1void$p_end(struct list$1void$p* self);
static void* list$1void$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p_push_back(struct list$1void$p* self, void* item);
static struct tuple2$2void$plong$* tuple2$2void$plong$_clone(struct tuple2$2void$plong$* self);
static void tuple2$2void$plong$_finalize(struct tuple2$2void$plong$* self);
static void map$2void$ptuple2$2void$plong$$ph_finalize(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph$p_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key);
static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key);
static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item);
unsigned long  long* uvmcreate();
unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz);
static void free_pagetable(unsigned long  long* pagetable, int level);
struct file* get_current_file_table();
void reset_watchdog();
void plic_init();
void trap_init();
void uart_rx_init();
void plic_enable(int irq);
void trapvec();
void my_intr_off();
void my_intr_on();
void enable_timer_interrupts();
void disable_timer_interrupts();
void swtch(struct context_t* new_);
void timer_reset();
void yield();
void kernel_yield();
void yield_return();
void kernel_yield_return();
void timer_handler();
static int list$1proc$ph_length(struct list$1proc$ph* self);
void console_init();
int Sys_write();
int Sys_exit();
int Sys_wait();
static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self);
static _Bool list$1proc$ph_end(struct list$1proc$ph* self);
static struct proc* list$1proc$ph_next(struct list$1proc$ph* self);
static void list$1proc$ph$p_finalize(struct list$1proc$ph* self);
static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self);
int Sys_open();
int Sys_fork();
int Sys_execv();
void uvmunmap(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long npages, int do_free);
void uvm_dealloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz);
int uvm_alloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz);
int Sys_brk();
int Sys_dup2();
int Sys_pipe();
static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item);
static struct tuple2$2void$plong$* tuple2$2void$plong$_initialize(struct tuple2$2void$plong$* self, void* v1, unsigned long v2);
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX369, unsigned long  int anonymous_var_nameX370, unsigned long  int anonymous_var_nameX371, unsigned long  long anonymous_var_nameX372, unsigned long  long anonymous_var_nameX373);
void timerinit();
struct proc* get_current_proc();
void append_mapping_values(void* user_va, void* pa, unsigned long  int size);
void global_init();
static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self);
static void list$1proc$ph_finalize(struct list$1proc$ph* self);
int main();
void* sbrk(long incr);
void* malloc(unsigned long  int size);
void free(void* ptr);
void* calloc(unsigned long  int nmemb, unsigned long  int size);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
void puts(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
char* strtok(char* s, const char* delim);
void exit(int n);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
int printf(const char* fmt, ...);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
// uniq global variable
struct mem_block* free_list=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

int gComeMallocLib=0;

int gComeDebugLib=0;

int gComeGCLib=0;

int gNumAlloc=0;

int gNumFree=0;

// inline function
static inline unsigned long  long r_time(){
unsigned long  long x_0;
memset(&x_0, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_0));
    return x_0;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_6;
memset(&x_6, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_6));
    return x_6;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_7;
memset(&x_7, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_7));
    return x_7;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_8;
    x_8=r_sstatus();
    x_8|=(1L<<1);
    w_sstatus(x_8);
}
static inline void intr_off(){
    w_sstatus(r_sstatus()&~(1L<<1));
}
static inline void intr_off_direct(){
    __asm volatile("csrc sstatus, %0" : : "r"((1L<<1)));
}
static inline void intr_on_direct(){
    __asm volatile("csrs sstatus, %0" : : "r"((1L<<1)));
}
static inline int intr_get(){
unsigned long  long x_9;
    x_9=r_sstatus();
    return (x_9&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_182;
memset(&x_182, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_182));
    return x_182;
}
static inline void w_sie(unsigned long  long x){
    __asm volatile("csrw sie, %0" : : "r"(x));
}
static inline void w_stvec(unsigned long  long x){
    __asm volatile("csrw stvec, %0" : : "r"(x));
}
static inline unsigned long  long read_mtime(){
    return *(unsigned long  long*)33603576UL;
}
static inline void write_mtimecmp(unsigned long  long v){
    *(unsigned long  long*)33570816UL=v;
}
static inline unsigned long  long r_sip(){
unsigned long  long x_357;
memset(&x_357, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_357));
    return x_357;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_358;
memset(&sp_val_358, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出オペランド %0 に
        : "=r"(sp_val_358): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_358;
}
static inline void sfence_vma(){
    __asm volatile("sfence.vma zero, zero");
}
static inline void w_satp(unsigned long  long x){
    __asm volatile("csrw satp, %0" : : "r" (x));
}
static inline void w_sepc(unsigned long  long x){
    __asm volatile("csrw sepc, %0" : : "r" (x));
}

// body function
static void* kalloc_page(unsigned long  long bump){
void* p_1;
void* __result_obj__1;
    p_1=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__1 = p_1;
    return __result_obj__1;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_2;
void* base_3;
unsigned long  int i_4;
void* pg_5;
void* __result_obj__2;
    bump_2=(unsigned long  long)_end2;
    base_3=((void*)0);
    for(    i_4=0    ;    i_4<npages    ;    i_4++    ){
        pg_5=kalloc_page(bump_2);
        if(        i_4==0        ) {
            base_3=pg_5;
        }
    }
    __result_obj__2 = base_3;
    return __result_obj__2;
}

void perror(char* str){
    puts(str);
}

void panic(char* str){
    puts(str);
    puts("panic!");
}

struct cpu* mycpu(){
struct cpu* __result_obj__3;
    __result_obj__3 = &gCPU;
    return __result_obj__3;
}

void free_proc(struct proc* p){
    free_pagetable(p->pagetable,2);
    kfree(p->pagetable);
}

void initlock(struct spinlock* lk, char* name){
    lk->name=name;
    lk->locked=0;
    lk->cpu=0;
}

void acquire(struct spinlock* lk){
    push_off();
    if(    holding(lk)    ) {
        panic("acquire");
    }
    while(    __sync_lock_test_and_set(&lk->locked,1)!=0    ) {
        ;
    }
    __sync_synchronize();
    lk->cpu=mycpu();
}

void release(struct spinlock* lk){
    if(    !holding(lk)    ) {
        panic("release");
    }
    lk->cpu=0;
    __sync_synchronize();
    __sync_lock_release(&lk->locked);
    pop_off();
}

int holding(struct spinlock* lk){
int r_10;
memset(&r_10, 0, sizeof(int));
    r_10=(lk->locked&&lk->cpu==mycpu());
    return r_10;
}

void push_off(){
int old_11;
    old_11=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_11;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_12;
    c_12=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_12->noff<1    ) {
        panic("pop_off");
    }
    c_12->noff-=1;
    if(    c_12->noff==0&&c_12->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_13;
p_13 = (void*)0;
    p_13=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_13+4096<=(char*)pa_end    ;    p_13+=4096    ){
        kfree(p_13);
    }
}

void kfree(void* pa){
struct run* r_14;
r_14 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_14=(struct run*)pa;
    acquire(&kmem.lock);
    r_14->next=kmem.freelist;
    kmem.freelist=r_14;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_15;
void* __result_obj__4;
r_15 = (void*)0;
    acquire(&kmem.lock);
    r_15=kmem.freelist;
    if(    r_15    ) {
        kmem.freelist=r_15->next;
    }
    release(&kmem.lock);
    if(    r_15    ) {
        memset((char*)r_15,0,4096);
    }
    __result_obj__4 = (void*)r_15;
    return __result_obj__4;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_16;
unsigned long  long* pte_17;
unsigned long  long* __result_obj__5;
unsigned long  long* __result_obj__6;
    for(    level_16=2    ;    level_16>0    ;    level_16--    ){
        pte_17=(unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_16))))&511)];
        if(        *pte_17&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_17)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__5 = (void*)0;
                return __result_obj__5;
            }
            memset(pagetable,0,4096);
            *pte_17=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__6 = (unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__6;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_18;
unsigned long  long last_19;
unsigned long  long* pte_20;
memset(&a_18, 0, sizeof(unsigned long  long));
memset(&last_19, 0, sizeof(unsigned long  long));
pte_20 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_18=va;
    last_19=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_20=walk(pagetable,a_18,1))==0        ) {
            return -1;
        }
        if(        *pte_20&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_20&1023,perm);
        }
        *pte_20=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_18==last_19        ) {
            break;
        }
        a_18+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_21;
int i_22;
    ptr_21=(unsigned int*)pa;
    for(    i_22=0    ;    i_22<count    ;    i_22++    ){
        if(        i_22%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_21+i_22));
        }
        printf("%p ",ptr_21[i_22]);
        if(        i_22%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_23;
unsigned long  long pte_24;
unsigned long  long pa_25;
unsigned long  long child_va_26;
int j_27;
    for(    i_23=0    ;    i_23<512    ;    i_23++    ){
        pte_24=pagetable[i_23];
        if(        pte_24&(1L<<0)        ) {
            pa_25=(((pte_24)>>10)<<12);
            child_va_26=va|((unsigned long  long)i_23<<(12+9*(2-level)));
            for(            j_27=0            ;            j_27<level            ;            j_27++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_26,pa_25,i_23,level);
            if(            (pte_24&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_24&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_24&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_24&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_24&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_24&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_24&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_25,child_va_26,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_28;
    satp_28=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_28));
    __asm volatile("sfence.vma zero, zero");
}

void* common_kalloc(unsigned long  int size){
void* r_32;
void* __result_obj__7;
    static unsigned long  int offset_29=0;
    const unsigned long  int base_30=(unsigned long  int)COMMON2;
    const unsigned long  int align_31=8;
    offset_29=(offset_29+(align_31-1))&~(align_31-1);
    r_32=(void*)(base_30+offset_29);
    offset_29+=size;
    __result_obj__7 = r_32;
    return __result_obj__7;
}

void uart_rx_handler(){
    last_key=*(((unsigned int*)(268435456UL+0)));
}

void uart_init(){
    *((unsigned char*)(268435456UL+1))|=1;
    plic_enable(10);
    __asm volatile("csrs sie, %0" :: "r"((1UL<<9)));
    __asm volatile("csrs sstatus, %0" :: "r"((1UL<<1)));
}

void putc(char c){
    while(    !(*((unsigned char*)(268435456UL+5))&32)    ) {
        __asm volatile("wfi");
    }
    *((unsigned char*)(268435456UL+0))=c;
}

void putchar(char c){
    putc(c);
}

void mmu_init(){
unsigned long  long addr_33;
int i_34;
unsigned long  long va_35;
unsigned long  long pa_36;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_33=2147483648UL    ;    addr_33<2164260864UL    ;    addr_33+=4096    ){
        mappages(kernel_pagetable,addr_33,4096,addr_33,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_34=0    ;    i_34<8    ;    i_34++    ){
        va_35=268439552UL+i_34*4096UL;
        pa_36=va_35;
        mappages(kernel_pagetable,va_35,4096UL,pa_36,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_37;
void* __result_obj__8;
void* __result_obj__9;
void* __result_obj__10;
unsigned long  long pa_38;
void* __result_obj__11;
    pte_37=walk(pagetable,va,0);
    if(    pte_37==0    ) {
        __result_obj__8 = (void*)0;
        return __result_obj__8;
    }
    if(    (*pte_37&(1L<<0))==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_37&(1L<<4))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    pa_38=(((*pte_37)>>10)<<12);
    __result_obj__11 = (void*)(pa_38+(va&(4096-1)));
    return __result_obj__11;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_39;
unsigned long  long off_40;
char* pa_41;
unsigned long  long n_42;
pa_41 = (void*)0;
    va0_39=(((dstva))&~(4096-1));
    off_40=dstva-va0_39;
    while(    len>0    ) {
        if(        (pa_41=walkaddr(pagetable,va0_39))==0        ) {
            return -1;
        }
        n_42=4096-off_40;
        if(        n_42>len        ) {
            n_42=len;
        }
        memcpy(pa_41+off_40,src,n_42);
        len-=n_42;
        src+=n_42;
        va0_39+=4096;
        off_40=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_43;
unsigned long  long va0_44;
unsigned long  long pa0_45;
memset(&n_43, 0, sizeof(unsigned long  long));
memset(&va0_44, 0, sizeof(unsigned long  long));
memset(&pa0_45, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_44=(((srcva))&~(4096-1));
        pa0_45=(unsigned long  long)walkaddr(pagetable,va0_44);
        if(        pa0_45==0        ) {
            return -1;
        }
        n_43=4096-(srcva-va0_44);
        if(        n_43>len        ) {
            n_43=len;
        }
        memmove(dst,(void*)(pa0_45+(srcva-va0_44)),n_43);
        len-=n_43;
        dst+=n_43;
        srcva=va0_44+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_46;
unsigned long  long va0_47;
unsigned long  long pa0_48;
int got_null_49;
char* dst2_50;
char* p_51;
memset(&n_46, 0, sizeof(unsigned long  long));
memset(&va0_47, 0, sizeof(unsigned long  long));
memset(&pa0_48, 0, sizeof(unsigned long  long));
    got_null_49=0;
    dst2_50=dst;
    while(    got_null_49==0&&max>0    ) {
        va0_47=(((srcva))&~(4096-1));
        pa0_48=(unsigned long  long)walkaddr(pagetable,va0_47);
        if(        pa0_48==0        ) {
            return -1;
        }
        n_46=4096-(srcva-va0_47);
        if(        n_46>max        ) {
            n_46=max;
        }
        p_51=(char*)(pa0_48+(srcva-va0_47));
        while(        n_46>0        ) {
            if(            *p_51==0            ) {
                *dst2_50=0;
                got_null_49=dst2_50-dst;
                break;
            }
            else {
                *dst2_50=*p_51;
            }
            --n_46;
            --max;
            p_51++;
            dst2_50++;
        }
        srcva=va0_47+4096;
    }
    if(    got_null_49    ) {
        dst2_50[got_null_49]=0;
        return got_null_49;
    }
    else {
        return -1;
    }
}

void setting_user_pagetable(struct proc* proc, unsigned long  long* pagetable){
int i_52;
int i_53;
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    for(    i_52=0    ;    i_52<32    ;    i_52++    ){
        mappages(pagetable,(unsigned long  long)COMMON+i_52*4096,4096,(unsigned long  long)COMMON+i_52*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    for(    i_53=0    ;    i_53<32    ;    i_53++    ){
        mappages(pagetable,(unsigned long  long)COMMON2+i_53*4096,4096,(unsigned long  long)COMMON2+i_53*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* elf_buf, int fork_flag, int exec_flag){
void* __right_value0 = (void*)0;
struct proc* result_54;
void* __right_value1 = (void*)0;
struct proc* parent_55;
void* __right_value25 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __dec_obj3;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __dec_obj4;
unsigned long  long* pagetable_120;
struct elfhdr* eh_121;
struct proghdr* ph_122;
unsigned long  long va_123;
unsigned long  long max_va_end_124;
int i_125;
void* pa_126;
unsigned long  long gp_127;
struct elfshdr* sh_128;
struct elfsym* symtab_130;
int symtab_size_132;
int i_133;
int i_134;
void* __right_value28 = (void*)0;
struct proc* parent_135;
unsigned long  long parent_current_136;
unsigned long  long parent_stack_top_137;
unsigned long  long stack_base_138;
int i_139;
char* pa_140;
char* src_141;
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_142;
void* it_143;
void* __right_value29 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var1 = (void*)0;
void* pa_150=0;
long size_151=0;
void* __right_value30 = (void*)0;
struct proc* parent_152;
unsigned long  long stack_base_153;
int i_154;
char* pa_155;
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_156;
void* it_157;
void* __right_value31 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var2 = (void*)0;
void* pa_158=0;
long size_159=0;
    result_54=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 806, "struct proc*"));
    result_54->program=elf_buf;
    if(    fork_flag||exec_flag    ) {
        parent_55=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj3=result_54->mapping_values,
        result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph$p_clone(parent_55->mapping_values));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj4=result_54->mapping_values,
        result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 816, "struct map$2void$ptuple2$2void$plong$$ph*"))));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    pagetable_120=(unsigned long  long*)kalloc();
    memset(pagetable_120,0,4096);
    setting_user_pagetable(result_54,pagetable_120);
    result_54->pagetable=pagetable_120;
    eh_121=(struct elfhdr*)elf_buf;
    if(    eh_121->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic: not elf");
        }
    }
    ph_122=(struct proghdr*)(elf_buf+eh_121->phoff);
    va_123=0;
    max_va_end_124=0;
    for(    i_125=0    ;    i_125<eh_121->phnum    ;    i_125++,ph_122++    ){
        if(        ph_122->type!=1        ) {
            continue;
        }
        if(        ph_122->vaddr+ph_122->memsz>max_va_end_124        ) {
            max_va_end_124=ph_122->vaddr+ph_122->memsz;
        }
        for(        va_123=(((ph_122->vaddr))&~(4096-1))        ;        va_123<ph_122->vaddr+ph_122->memsz        ;        va_123+=4096        ){
            pa_126=kalloc();
            if(            !pa_126            ) {
                panic("kalloc");
            }
            memset(pa_126,0,4096);
            mappages(result_54->pagetable,va_123,4096,(unsigned long  long)pa_126,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
        }
        if(        copyout(result_54->pagetable,ph_122->vaddr,elf_buf+ph_122->off,ph_122->filesz)<0        ) {
            panic("copyout");
        }
    }
    result_54->sz=(((max_va_end_124)+4096-1)&~(4096-1));
    gp_127=0;
    sh_128=(struct elfshdr*)(elf_buf+eh_121->shoff);
    const char* shstrtab_129=elf_buf+sh_128[eh_121->shstrndx].offset;
    symtab_130=(void*)0;
    const char* strtab_131=(void*)0;
    symtab_size_132=0;
    for(    i_133=0    ;    i_133<eh_121->shnum    ;    i_133++    ){
        if(        strcmp(shstrtab_129+sh_128[i_133].name,".symtab")==0        ) {
            symtab_130=(struct elfsym*)(elf_buf+sh_128[i_133].offset);
            symtab_size_132=sh_128[i_133].size;
        }
        if(        strcmp(shstrtab_129+sh_128[i_133].name,".strtab")==0        ) {
            strtab_131=elf_buf+sh_128[i_133].offset;
        }
    }
    if(    symtab_130&&strtab_131    ) {
        for(        i_134=0        ;        i_134<symtab_size_132/sizeof(struct elfsym)        ;        i_134++        ){
            if(            strcmp(strtab_131+symtab_130[i_134].name,"__global_pointer$")==0            ) {
                gp_127=symtab_130[i_134].value;
                break;
            }
        }
    }
    if(    gp_127==0    ) {
    }
    if(    fork_flag    ) {
        parent_135=((struct proc*)(__right_value28=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_136=parent_135->context.sp;
        parent_stack_top_137=(unsigned long  long)parent_135->stack_top;
        stack_base_138=1073741824UL-16*4096;
        for(        i_139=0        ;        i_139<16        ;        i_139++        ){
            pa_140=kalloc();
            src_141=walkaddr(parent_135->pagetable,parent_stack_top_137+i_139*4096);
            if(            src_141            ) {
                memmove(pa_140,(void*)src_141,4096);
            }
            mappages(result_54->pagetable,stack_base_138+i_139*4096,4096,(unsigned long  long)pa_140,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_138;
        result_54->context.sp=stack_base_138+16*4096;
        result_54->context.gp=parent_135->context.gp;
        for(        o2_saved_142=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_135->mapping_values)),it_143=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_142))        ;        !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_142))        ;        it_143=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_142))        ){
            multiple_assign_var1=((struct tuple2$2void$plong$*)(__right_value29=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_135->mapping_values,it_143)));
            pa_150=multiple_assign_var1->v1;
            size_151=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            copyout(result_54->pagetable,(unsigned long  long)it_143,pa_150,size_151)<0            ) {
                panic("copyout");
            }
        }
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        result_54->file_table=fs_dup_table(parent_135->file_table);
    }
    else {
        parent_152=((struct proc*)(__right_value30=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value30, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        stack_base_153=1073741824UL-16*4096;
        for(        i_154=0        ;        i_154<16        ;        i_154++        ){
            pa_155=kalloc();
            mappages(result_54->pagetable,stack_base_153+i_154*4096,4096,(unsigned long  long)pa_155,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_153;
        result_54->context.sp=stack_base_153+16*4096;
        result_54->context.gp=gp_127;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            for(            o2_saved_156=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_152->mapping_values)),it_157=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_156))            ;            !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_156))            ;            it_157=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_156))            ){
                multiple_assign_var2=((struct tuple2$2void$plong$*)(__right_value31=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_152->mapping_values,it_157)));
                pa_158=multiple_assign_var2->v1;
                size_159=multiple_assign_var2->v2;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value31, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                copyout(result_54->pagetable,(unsigned long  long)it_157,pa_158,size_159)<0                ) {
                    panic("copyout");
                }
            }
            come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            result_54->file_table=fs_dup_table(parent_152->file_table);
        }
        else {
            result_54->file_table=fs_init();
        }
    }
    result_54->context.mepc=eh_121->entry;
    if(    exec_flag    ) {
        list$1proc$ph_replace(gProc,gActiveProc,(struct proc*)come_increment_ref_count(result_54));
        user_satp=((8L<<60)|(((unsigned long  long)result_54->pagetable)>>12));
        user_sp=result_54->context.sp;
    }
    else {
        list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_54));
    }
    come_call_finalizer(proc_finalize, result_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_56;
int i_57;
struct proc* __result_obj__12;
struct proc* default_value_62;
struct proc* __result_obj__13;
default_value_62 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_56=self->head;
    i_57=0;
    while(    it_56!=((void*)0)    ) {
        if(        position==i_57        ) {
            __result_obj__12 = (struct proc*)come_increment_ref_count(it_56->item);
            come_call_finalizer(proc_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__12;
        }
        it_56=it_56->next;
        i_57++;
    }
    memset(&default_value_62,0,sizeof(struct proc*));
    __result_obj__13 = (struct proc*)come_increment_ref_count(default_value_62);
    come_call_finalizer(proc_finalize, default_value_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__13;
}

static void proc_finalize(struct proc* self){
    if(    self!=((void*)0)&&self->mapping_values!=((void*)0)    ) {
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, self->mapping_values, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2void$ptuple2$2void$plong$$ph$p_finalize(struct map$2void$ptuple2$2void$plong$$ph* self){
int i_58;
int i_59;
    for(    i_58=0    ;    i_58<self->size    ;    i_58++    ){
        if(        self->item_existance[i_58]        ) {
            if(            1            ) {
                come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[i_58], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_59=0    ;    i_59<self->size    ;    i_59++    ){
        if(        self->item_existance[i_59]        ) {
            if(            0            ) {
                (self->keys[i_59] = come_decrement_ref_count(self->keys[i_59], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void tuple2$2void$plong$$p_finalize(struct tuple2$2void$plong$* self){
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_60;
struct list_item$1void$p* prev_it_61;
    it_60=self->head;
    while(    it_60!=((void*)0)    ) {
        prev_it_61=it_60;
        it_60=it_60->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_63;
int i_64;
struct proc* __result_obj__14;
struct proc* default_value_65;
struct proc* __result_obj__15;
default_value_65 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_63=self->head;
    i_64=0;
    while(    it_63!=((void*)0)    ) {
        if(        position==i_64        ) {
            __result_obj__14 = (struct proc*)come_increment_ref_count(it_63->item);
            come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__14;
        }
        it_63=it_63->next;
        i_64++;
    }
    memset(&default_value_65,0,sizeof(struct proc*));
    __result_obj__15 = (struct proc*)come_increment_ref_count(default_value_65);
    come_call_finalizer(proc_finalize, default_value_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph$p_clone(struct map$2void$ptuple2$2void$plong$$ph* self){
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__16;
void* __right_value2 = (void*)0;
void* __right_value8 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* result_69;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1void$p* __dec_obj2;
void* it_72;
struct tuple2$2void$plong$* default_value_75;
void* __right_value11 = (void*)0;
struct tuple2$2void$plong$* it2_78;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__43;
default_value_75 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__16;
    }
    result_69=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "/usr/local/include/comelang.h", 2013, "struct map$2void$ptuple2$2void$plong$$ph*"))));
    __dec_obj2=result_69->key_list,
    result_69->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 2015, "struct list$1void$p*"))));
    come_call_finalizer(list$1void$p_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_72=map$2void$ptuple2$2void$plong$$ph_begin(self)    ;    !map$2void$ptuple2$2void$plong$$ph_end(self)    ;    it_72=map$2void$ptuple2$2void$plong$$ph_next(self)    ){
        memset(&default_value_75,0,sizeof(struct tuple2$2void$plong$*));
        it2_78=(struct tuple2$2void$plong$*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_at(self,it_72,(struct tuple2$2void$plong$*)come_increment_ref_count(default_value_75)));
        if(        0&&1        ) {
            map$2void$ptuple2$2void$plong$$ph_put(result_69,it_72,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_78)));
        }
        else if(        0        ) {
            map$2void$ptuple2$2void$plong$$ph_put(result_69,it_72,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_78)));
        }
        else if(        1        ) {
            map$2void$ptuple2$2void$plong$$ph_put(result_69,it_72,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_78)));
        }
        else {
            map$2void$ptuple2$2void$plong$$ph_put(result_69,it_72,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_78)));
        }
        come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2void$plong$$p_finalize, it2_78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__43 = (struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(result_69);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, result_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__43;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_initialize(struct map$2void$ptuple2$2void$plong$$ph* self){
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
int i_66;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1void$p* __dec_obj1;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__18;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value3=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1942, "void**"))));
    self->items=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value4=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(128)), "/usr/local/include/comelang.h", 1943, "struct tuple2$2void$plong$**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value5=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1944, "_Bool*"))));
    for(    i_66=0    ;    i_66<128    ;    i_66++    ){
        self->item_existance[i_66]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj1=self->key_list,
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1954, "struct list$1void$p*"))));
    come_call_finalizer(list$1void$p_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__18 = (struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__18;
}

static struct list$1void$p* list$1void$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1void$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1void$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1void$p$p_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_67;
struct list_item$1void$p* prev_it_68;
    it_67=self->head;
    while(    it_67!=((void*)0)    ) {
        prev_it_68=it_67;
        it_67=it_67->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void* map$2void$ptuple2$2void$plong$$ph_begin(struct map$2void$ptuple2$2void$plong$$ph* self){
void* result_70;
void* __result_obj__19;
void* __result_obj__20;
void* result_71;
void* __result_obj__21;
result_70 = (void*)0;
result_71 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_70,0,sizeof(void*));
        __result_obj__19 = result_70;
        return __result_obj__19;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__20 = self->key_list->it->item;
        return __result_obj__20;
    }
    memset(&result_71,0,sizeof(void*));
    __result_obj__21 = result_71;
    return __result_obj__21;
}

static _Bool map$2void$ptuple2$2void$plong$$ph_end(struct map$2void$ptuple2$2void$plong$$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$ptuple2$2void$plong$$ph_next(struct map$2void$ptuple2$2void$plong$$ph* self){
void* result_73;
void* __result_obj__22;
void* __result_obj__23;
void* result_74;
void* __result_obj__24;
result_73 = (void*)0;
result_74 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_73,0,sizeof(void*));
        __result_obj__22 = result_73;
        return __result_obj__22;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__23 = self->key_list->it->item;
        return __result_obj__23;
    }
    memset(&result_74,0,sizeof(void*));
    __result_obj__24 = result_74;
    return __result_obj__24;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_at(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* default_value){
unsigned int hash_76;
unsigned int it_77;
struct tuple2$2void$plong$* __result_obj__25;
struct tuple2$2void$plong$* __result_obj__26;
struct tuple2$2void$plong$* __result_obj__27;
struct tuple2$2void$plong$* __result_obj__28;
    hash_76=voidp_get_hash_key(((void*)key))%self->size;
    it_77=hash_76;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_77]        ) {
            if(            voidp_equals(self->keys[it_77],key)            ) {
                __result_obj__25 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_77]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__25, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__25;
            }
            it_77++;
            if(            it_77>=self->size            ) {
                it_77=0;
            }
            else if(            it_77==hash_76            ) {
                __result_obj__26 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__28;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_put(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_90;
int it_91;
_Bool same_key_exist_108;
void* it2_111;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__40;
    if(    self->len*2>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_90=voidp_get_hash_key(((void*)key))%self->size;
    it_91=hash_90;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_91]        ) {
            if(            voidp_equals(self->keys[it_91],key)            ) {
                if(                0                ) {
                    (self->keys[it_91] = come_decrement_ref_count(self->keys[it_91], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1void$p_remove(self->key_list,self->keys[it_91]);
                    self->keys[it_91]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_91]);
                    self->keys[it_91]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_91], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_91]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_91]=item;
                }
                break;
            }
            it_91++;
            if(            it_91>=self->size            ) {
                it_91=0;
            }
            else if(            it_91==hash_90            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_91]=(_Bool)1;
            if(            0            ) {
                self->keys[it_91]=key;
            }
            else {
                self->keys[it_91]=key;
            }
            if(            1            ) {
                self->items[it_91]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_91]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_108=(_Bool)0;
    for(    it2_111=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_111=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_111,key)        ) {
            same_key_exist_108=(_Bool)1;
        }
    }
    if(    !same_key_exist_108    ) {
        list$1void$p_push_back(self->key_list,key);
    }
    __result_obj__40 = self;
    come_call_finalizer(tuple2$2void$plong$$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__40;
}

static void map$2void$ptuple2$2void$plong$$ph_rehash(struct map$2void$ptuple2$2void$plong$$ph* self){
int size_79;
void* __right_value12 = (void*)0;
void** keys_80;
void* __right_value13 = (void*)0;
struct tuple2$2void$plong$** items_81;
void* __right_value14 = (void*)0;
_Bool* item_existance_82;
int len_83;
void* it_84;
struct tuple2$2void$plong$* default_value_85;
void* __right_value15 = (void*)0;
struct tuple2$2void$plong$* it2_86;
unsigned int hash_87;
int n_88;
struct tuple2$2void$plong$* default_value_89;
void* __right_value16 = (void*)0;
default_value_85 = (void*)0;
default_value_89 = (void*)0;
    size_79=self->size*10;
    keys_80=(void**)come_increment_ref_count(((void**)(__right_value12=(void**)come_calloc_v2(1, sizeof(void*)*(1*(size_79)), "/usr/local/include/comelang.h", 2181, "void**"))));
    items_81=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value13=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(size_79)), "/usr/local/include/comelang.h", 2182, "struct tuple2$2void$plong$**"))));
    item_existance_82=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value14=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_79)), "/usr/local/include/comelang.h", 2183, "_Bool*"))));
    len_83=0;
    for(    it_84=map$2void$ptuple2$2void$plong$$ph_begin(self)    ;    !map$2void$ptuple2$2void$plong$$ph_end(self)    ;    it_84=map$2void$ptuple2$2void$plong$$ph_next(self)    ){
        memset(&default_value_85,0,sizeof(struct tuple2$2void$plong$*));
        it2_86=((struct tuple2$2void$plong$*)(__right_value15=map$2void$ptuple2$2void$plong$$ph_at(self,it_84,(struct tuple2$2void$plong$*)come_increment_ref_count(default_value_85))));
        come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_87=voidp_get_hash_key(((void*)it_84))%size_79;
        n_88=hash_87;
        while(        (_Bool)1        ) {
            if(            item_existance_82[n_88]            ) {
                n_88++;
                if(                n_88>=size_79                ) {
                    n_88=0;
                }
                else if(                n_88==hash_87                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_82[n_88]=(_Bool)1;
                keys_80[n_88]=it_84;
                items_81[n_88]=((struct tuple2$2void$plong$*)(__right_value16=map$2void$ptuple2$2void$plong$$ph_at(self,it_84,(struct tuple2$2void$plong$*)come_increment_ref_count(default_value_89))));
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_83++;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_80;
    self->items=items_81;
    self->item_existance=item_existance_82;
    self->size=size_79;
    self->len=len_83;
}

static struct list$1void$p* list$1void$p_remove(struct list$1void$p* self, void* item){
int it2_92;
struct list_item$1void$p* it_93;
struct list$1void$p* __result_obj__32;
    it2_92=0;
    it_93=self->head;
    while(    it_93!=((void*)0)    ) {
        if(        voidp_equals(it_93->item,item)        ) {
            list$1void$p_delete(self,it2_92,it2_92+1);
            break;
        }
        it2_92++;
        it_93=it_93->next;
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1void$p* list$1void$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_94;
struct list$1void$p* __result_obj__29;
struct list_item$1void$p* it_97;
int i_98;
struct list_item$1void$p* prev_it_99;
struct list_item$1void$p* it_100;
int i_101;
struct list_item$1void$p* prev_it_102;
struct list_item$1void$p* it_103;
struct list_item$1void$p* head_prev_it_104;
struct list_item$1void$p* tail_it_105;
int i_106;
struct list_item$1void$p* prev_it_107;
struct list$1void$p* __result_obj__31;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_94=tail;
        tail=head;
        head=tmp_94;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__29 = self;
        return __result_obj__29;
    }
    if(    head==0&&tail==self->len    ) {
        list$1void$p_reset(self);
    }
    else if(    head==0    ) {
        it_97=self->head;
        i_98=0;
        while(        it_97!=((void*)0)        ) {
            if(            i_98<tail            ) {
                prev_it_99=it_97;
                it_97=it_97->next;
                i_98++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_98==tail            ) {
                self->head=it_97;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_97=it_97->next;
                i_98++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_100=self->head;
        i_101=0;
        while(        it_100!=((void*)0)        ) {
            if(            i_101==head            ) {
                self->tail=it_100->prev;
                self->tail->next=((void*)0);
            }
            if(            i_101>=head            ) {
                prev_it_102=it_100;
                it_100=it_100->next;
                i_101++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_100=it_100->next;
                i_101++;
            }
        }
    }
    else {
        it_103=self->head;
        head_prev_it_104=((void*)0);
        tail_it_105=((void*)0);
        i_106=0;
        while(        it_103!=((void*)0)        ) {
            if(            i_106==head            ) {
                head_prev_it_104=it_103->prev;
            }
            if(            i_106==tail            ) {
                tail_it_105=it_103;
            }
            if(            i_106>=head&&i_106<tail            ) {
                prev_it_107=it_103;
                it_103=it_103->next;
                i_106++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_103=it_103->next;
                i_106++;
            }
        }
        if(        head_prev_it_104!=((void*)0)        ) {
            head_prev_it_104->next=tail_it_105;
        }
        if(        tail_it_105!=((void*)0)        ) {
            tail_it_105->prev=head_prev_it_104;
        }
    }
    __result_obj__31 = self;
    return __result_obj__31;
}

static struct list$1void$p* list$1void$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_95;
struct list_item$1void$p* prev_it_96;
struct list$1void$p* __result_obj__30;
    it_95=self->head;
    while(    it_95!=((void*)0)    ) {
        prev_it_96=it_95;
        it_95=it_95->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = self;
    return __result_obj__30;
}

static void* list$1void$p_begin(struct list$1void$p* self){
void* result_109;
void* __result_obj__33;
void* __result_obj__34;
void* result_110;
void* __result_obj__35;
result_109 = (void*)0;
result_110 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_109,0,sizeof(void*));
        __result_obj__33 = result_109;
        return __result_obj__33;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__34 = self->it->item;
        return __result_obj__34;
    }
    memset(&result_110,0,sizeof(void*));
    __result_obj__35 = result_110;
    return __result_obj__35;
}

static _Bool list$1void$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p_next(struct list$1void$p* self){
void* result_112;
void* __result_obj__36;
void* __result_obj__37;
void* result_113;
void* __result_obj__38;
result_112 = (void*)0;
result_113 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_112,0,sizeof(void*));
        __result_obj__36 = result_112;
        return __result_obj__36;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__37 = self->it->item;
        return __result_obj__37;
    }
    memset(&result_113,0,sizeof(void*));
    __result_obj__38 = result_113;
    return __result_obj__38;
}

static struct list$1void$p* list$1void$p_push_back(struct list$1void$p* self, void* item){
void* __right_value17 = (void*)0;
struct list_item$1void$p* litem_114;
void* __right_value18 = (void*)0;
struct list_item$1void$p* litem_115;
void* __right_value19 = (void*)0;
struct list_item$1void$p* litem_116;
struct list$1void$p* __result_obj__39;
    if(    self->len==0    ) {
        litem_114=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value17=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1void$p*"))));
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        litem_114->item=item;
        self->tail=litem_114;
        self->head=litem_114;
    }
    else if(    self->len==1    ) {
        litem_115=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value18=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1void$p*"))));
        litem_115->prev=self->head;
        litem_115->next=((void*)0);
        litem_115->item=item;
        self->tail=litem_115;
        self->head->next=litem_115;
    }
    else {
        litem_116=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value19=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1void$p*"))));
        litem_116->prev=self->tail;
        litem_116->next=((void*)0);
        litem_116->item=item;
        self->tail->next=litem_116;
        self->tail=litem_116;
    }
    self->len++;
    __result_obj__39 = self;
    return __result_obj__39;
}

static struct tuple2$2void$plong$* tuple2$2void$plong$_clone(struct tuple2$2void$plong$* self){
struct tuple2$2void$plong$* __result_obj__41;
void* __right_value20 = (void*)0;
struct tuple2$2void$plong$* result_117;
struct tuple2$2void$plong$* __result_obj__42;
    if(    self==(void*)0    ) {
        __result_obj__41 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__41, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__41;
    }
    result_117=(struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "tuple2$2void$plong$_clone", 3, "struct tuple2$2void$plong$*"));
    if(    self!=((void*)0)    ) {
        result_117->v1=self->v1;
    }
    if(    self!=((void*)0)    ) {
        result_117->v2=self->v2;
    }
    __result_obj__42 = (struct tuple2$2void$plong$*)come_increment_ref_count(result_117);
    come_call_finalizer(tuple2$2void$plong$_finalize, result_117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__42, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__42;
}

static void tuple2$2void$plong$_finalize(struct tuple2$2void$plong$* self){
}

static void map$2void$ptuple2$2void$plong$$ph_finalize(struct map$2void$ptuple2$2void$plong$$ph* self){
int i_118;
int i_119;
    for(    i_118=0    ;    i_118<self->size    ;    i_118++    ){
        if(        self->item_existance[i_118]        ) {
            if(            1            ) {
                come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[i_118], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_119=0    ;    i_119<self->size    ;    i_119++    ){
        if(        self->item_existance[i_119]        ) {
            if(            0            ) {
                (self->keys[i_119] = come_decrement_ref_count(self->keys[i_119], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph$p_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_144;
unsigned int hash_145;
unsigned int it_146;
struct tuple2$2void$plong$* __result_obj__44;
struct tuple2$2void$plong$* __result_obj__45;
struct tuple2$2void$plong$* __result_obj__46;
struct tuple2$2void$plong$* __result_obj__47;
default_value_144 = (void*)0;
    memset(&default_value_144,0,sizeof(struct tuple2$2void$plong$*));
    hash_145=voidp_get_hash_key(((void*)key))%self->size;
    it_146=hash_145;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_146]        ) {
            if(            voidp_equals(self->keys[it_146],key)            ) {
                __result_obj__44 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_146]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__44;
            }
            it_146++;
            if(            it_146>=self->size            ) {
                it_146=0;
            }
            else if(            it_146==hash_145            ) {
                __result_obj__45 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_144);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__45;
            }
        }
        else {
            __result_obj__46 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_144);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__46;
        }
    }
    __result_obj__47 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_144);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_147;
unsigned int hash_148;
unsigned int it_149;
struct tuple2$2void$plong$* __result_obj__48;
struct tuple2$2void$plong$* __result_obj__49;
struct tuple2$2void$plong$* __result_obj__50;
struct tuple2$2void$plong$* __result_obj__51;
default_value_147 = (void*)0;
    memset(&default_value_147,0,sizeof(struct tuple2$2void$plong$*));
    hash_148=voidp_get_hash_key(((void*)key))%self->size;
    it_149=hash_148;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_149]        ) {
            if(            voidp_equals(self->keys[it_149],key)            ) {
                __result_obj__48 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_149]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__48;
            }
            it_149++;
            if(            it_149>=self->size            ) {
                it_149=0;
            }
            else if(            it_149==hash_148            ) {
                __result_obj__49 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_147);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__49;
            }
        }
        else {
            __result_obj__50 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_147);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__50;
        }
    }
    __result_obj__51 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_147);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item){
int len_160;
int i_161;
struct proc* default_value_162;
struct list$1proc$ph* __result_obj__53;
struct list_item$1proc$ph* it_166;
int i_167;
struct proc* __dec_obj8;
struct list$1proc$ph* __result_obj__54;
default_value_162 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_160=self->len;
        for(        i_161=0        ;        i_161<position-len_160        ;        i_161++        ){
            memset(&default_value_162,0,sizeof(struct proc*));
            list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(default_value_162));
            come_call_finalizer(proc_finalize, default_value_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(item));
        __result_obj__53 = self;
        come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__53;
    }
    it_166=self->head;
    i_167=0;
    while(    it_166!=((void*)0)    ) {
        if(        position==i_167        ) {
            __dec_obj8=it_166->item,
            it_166->item=(struct proc*)come_increment_ref_count(item);
            come_call_finalizer(proc_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_166=it_166->next;
        i_167++;
    }
    __result_obj__54 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item){
void* __right_value32 = (void*)0;
struct list_item$1proc$ph* litem_163;
struct proc* __dec_obj5;
void* __right_value33 = (void*)0;
struct list_item$1proc$ph* litem_164;
struct proc* __dec_obj6;
void* __right_value34 = (void*)0;
struct list_item$1proc$ph* litem_165;
struct proc* __dec_obj7;
struct list$1proc$ph* __result_obj__52;
    if(    self->len==0    ) {
        litem_163=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value32=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1proc$ph*"))));
        litem_163->prev=((void*)0);
        litem_163->next=((void*)0);
        __dec_obj5=litem_163->item,
        litem_163->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_163;
        self->head=litem_163;
    }
    else if(    self->len==1    ) {
        litem_164=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value33=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1proc$ph*"))));
        litem_164->prev=self->head;
        litem_164->next=((void*)0);
        __dec_obj6=litem_164->item,
        litem_164->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_164;
        self->head->next=litem_164;
    }
    else {
        litem_165=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value34=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1proc$ph*"))));
        litem_165->prev=self->tail;
        litem_165->next=((void*)0);
        __dec_obj7=litem_165->item,
        litem_165->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_165;
        self->tail=litem_165;
    }
    self->len++;
    __result_obj__52 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value35 = (void*)0;
struct list_item$1proc$ph* litem_168;
struct proc* __dec_obj9;
void* __right_value36 = (void*)0;
struct list_item$1proc$ph* litem_169;
struct proc* __dec_obj10;
void* __right_value37 = (void*)0;
struct list_item$1proc$ph* litem_170;
struct proc* __dec_obj11;
struct list$1proc$ph* __result_obj__55;
    if(    self->len==0    ) {
        litem_168=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value35=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1045, "struct list_item$1proc$ph*"))));
        litem_168->prev=((void*)0);
        litem_168->next=((void*)0);
        __dec_obj9=litem_168->item,
        litem_168->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_168;
        self->head=litem_168;
    }
    else if(    self->len==1    ) {
        litem_169=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value36=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1055, "struct list_item$1proc$ph*"))));
        litem_169->prev=self->head;
        litem_169->next=((void*)0);
        __dec_obj10=litem_169->item,
        litem_169->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_169;
        self->head->next=litem_169;
    }
    else {
        litem_170=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value37=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1065, "struct list_item$1proc$ph*"))));
        litem_170->prev=self->tail;
        litem_170->next=((void*)0);
        __dec_obj11=litem_170->item,
        litem_170->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_170;
        self->tail=litem_170;
    }
    self->len++;
    __result_obj__55 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__55;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_171;
unsigned long  long* __result_obj__56;
unsigned long  long* __result_obj__57;
pagetable_171 = (void*)0;
    pagetable_171=(unsigned long  long*)kalloc();
    if(    pagetable_171==0    ) {
        __result_obj__56 = (unsigned long  long*)0;
        return __result_obj__56;
    }
    memset(pagetable_171,0,4096);
    __result_obj__57 = pagetable_171;
    return __result_obj__57;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__172;
unsigned long  long* __result_obj__58;
unsigned long  long addr_173;
unsigned long  long* pte_174;
unsigned long  long pa_175;
unsigned int flags_176;
char* mem_177;
unsigned long  long* __result_obj__59;
new__172 = (void*)0;
    new__172=uvmcreate();
    if(    new__172==0    ) {
        __result_obj__58 = (unsigned long  long*)0;
        return __result_obj__58;
    }
    for(    addr_173=0    ;    addr_173<sz    ;    addr_173+=4096    ){
        pte_174=walk(old,addr_173,0);
        if(        !pte_174||!(*pte_174&(1L<<0))        ) {
            continue;
        }
        pa_175=(((*pte_174)>>10)<<12);
        flags_176=((*pte_174)&1023);
        mem_177=kalloc();
        if(        mem_177==0        ) {
            panic("coypuvm");
        }
        memmove(mem_177,(char*)pa_175,4096);
        if(        mappages(new__172,addr_173,4096,((((unsigned long  long)mem_177)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_177);
            panic("copyuvm");
        }
    }
    __result_obj__59 = new__172;
    return __result_obj__59;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_178;
unsigned long  long pte_179;
unsigned long  long pa_180;
unsigned long  long* child_181;
    for(    i_178=0    ;    i_178<512    ;    i_178++    ){
        pte_179=pagetable[i_178];
        if(        !(pte_179&(1L<<0))        ) {
            continue;
        }
        pa_180=(((pte_179)>>10)<<12);
        if(        pte_179&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_180);
            }
        }
        else if(        level>0        ) {
            child_181=(unsigned long  long*)pa_180;
            free_pagetable(child_181,level-1);
            kfree(child_181);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value38 = (void*)0;
struct file* __result_obj__60;
    __result_obj__60 = ((struct proc*)(__right_value38=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__60;
}

void my_intr_off(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void my_intr_on(){
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void enable_timer_interrupts(){
unsigned long  int x_183;
memset(&x_183, 0, sizeof(unsigned long  int));
    x_183=r_sie();
    x_183|=(1UL<<5);
    w_sie(x_183);
    x_183=r_sstatus();
    x_183|=(1UL<<1);
    w_sstatus(x_183);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_184;
    next_184=r_time()+10000UL;
    w_stimecmp(next_184);
}

void kernel_yield(){
    if(    ((gKernelStateTail+1)%16)==gKernelStateHead    ) {
        panic("kernel state queue max");
    }
    gKernelState[gKernelStateTail].gYieldReturnContext=*(struct context_t*)TRAPFRAME;
    gKernelState[gKernelStateTail].gYieldUserSatp=user_satp;
    gKernelState[gKernelStateTail].gYieldUserSP=user_sp;
    gKernelState[gKernelStateTail].gYieldUserActiveProc=gActiveProc;
    gKernelState[gKernelStateTail].gYieldContext=*(struct context_t*)TRAPFRAME2;
    memmove(gKernelState[gKernelStateTail].gYieldStack,yield_stack,(4096*16));
    gKernelStateTail=(gKernelStateTail+1)%16;
    gNumKernelState++;
    timer_handler();
}

void kernel_yield_return(){
struct context_t* trapframe_185;
    gNumKernelState--;
    user_satp=gKernelState[gKernelStateHead].gYieldUserSatp;
    user_sp=gKernelState[gKernelStateHead].gYieldUserSP;
    gActiveProc=gKernelState[gKernelStateHead].gYieldUserActiveProc;
    trapframe_185=(struct context_t*)TRAPFRAME2;
    *trapframe_185=gKernelState[gKernelStateHead].gYieldContext;
    trapframe_185=(struct context_t*)TRAPFRAME;
    *trapframe_185=gKernelState[gKernelStateHead].gYieldReturnContext;
    memmove(yield_stack,gKernelState[gKernelStateHead].gYieldStack,(4096*16));
    gKernelStateHead=(gKernelStateHead+1)%16;
    yield_return();
}

void timer_handler(){
void* __right_value39 = (void*)0;
struct proc* p_186;
struct context_t* tf_187;
int old_active_proc_188;
void* __right_value40 = (void*)0;
struct proc* old_189;
void* __right_value41 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value42 = (void*)0;
struct proc* new__190;
unsigned long  long a0_191;
    disable_timer_interrupts();
    p_186=((struct proc*)(__right_value39=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value39, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_187=(struct context_t*)TRAPFRAME;
    p_186->context=*tf_187;
    timer_reset();
    old_active_proc_188=gActiveProc;
    old_189=((struct proc*)(__right_value40=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value40, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    (_condtional_value_X1=(gActiveProc<list$1proc$ph_length(gProc)&&((struct proc*)(__right_value41=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->deleted)),    come_call_finalizer(proc_finalize, __right_value41, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X1    ) {
        gActiveProc++;
    }
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    if(    gActiveProc==gKernelState[gKernelStateHead].gYieldUserActiveProc&&gNumKernelState>0    ) {
        kernel_yield_return();
    }
    new__190=((struct proc*)(__right_value42=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value42, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__190!=old_189&&new__190->zombie==0    ) {
        user_sp=new__190->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__190->pagetable)>>12));
        old_189->context=*(struct context_t*)TRAPFRAME;
        a0_191=new__190->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_191));
        swtch(&new__190->context);
    }
    else {
        gActiveProc=old_active_proc_188;
    }
}

static int list$1proc$ph_length(struct list$1proc$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void console_init(){
    initlock(&console_lock,"console");
}

int Sys_write(){
struct context_t* trapframe_192;
unsigned long  int arg0_193;
unsigned long  int arg1_194;
unsigned long  int arg2_195;
unsigned long  int arg3_196;
unsigned long  int arg4_197;
unsigned long  int arg5_198;
unsigned long  int arg6_199;
unsigned long  int arg_syscall_no_200;
int fd_201;
unsigned long  long user_va_203;
int len_204;
void* __right_value43 = (void*)0;
struct proc* p_205;
int ret_206;
int i_207;
    trapframe_192=(struct context_t*)TRAPFRAME;
    arg0_193=trapframe_192->a0;
    arg1_194=trapframe_192->a1;
    arg2_195=trapframe_192->a2;
    arg3_196=trapframe_192->a3;
    arg4_197=trapframe_192->a4;
    arg5_198=trapframe_192->a5;
    arg6_199=trapframe_192->a6;
    arg_syscall_no_200=trapframe_192->a7;
    fd_201=arg0_193;
    char kernel_buf_202[256];
    memset(&kernel_buf_202, 0, sizeof(char)    *(256)    );
    user_va_203=arg1_194;
    len_204=arg2_195;
    memset(kernel_buf_202,0,256);
    p_205=((struct proc*)(__right_value43=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value43, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_206=copyin(p_205->pagetable,kernel_buf_202,user_va_203,len_204);
    if(    ret_206<0    ) {
        panic("copyinstr");
    }
    if(    is_pipe(fd_201)    ) {
        pipewrite(fd_201,kernel_buf_202,len_204);
    }
    else if(    is_stdout(fd_201)    ) {
        for(        i_207=0        ;        i_207<len_204        ;        i_207++        ){
            putchar(kernel_buf_202[i_207]);
        }
    }
    else {
        panic("write(X)");
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_208;
unsigned long  int arg0_209;
unsigned long  int arg1_210;
unsigned long  int arg2_211;
unsigned long  int arg3_212;
unsigned long  int arg4_213;
unsigned long  int arg5_214;
unsigned long  int arg6_215;
unsigned long  int arg_syscall_no_216;
void* __right_value44 = (void*)0;
struct proc* p_217;
    trapframe_208=(struct context_t*)TRAPFRAME;
    arg0_209=trapframe_208->a0;
    arg1_210=trapframe_208->a1;
    arg2_211=trapframe_208->a2;
    arg3_212=trapframe_208->a3;
    arg4_213=trapframe_208->a4;
    arg5_214=trapframe_208->a5;
    arg6_215=trapframe_208->a6;
    arg_syscall_no_216=trapframe_208->a7;
    p_217=((struct proc*)(__right_value44=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value44, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_217->xstatus=arg0_209;
    p_217->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_218;
unsigned long  int arg0_219;
unsigned long  int arg1_220;
unsigned long  int arg2_221;
unsigned long  int arg3_222;
unsigned long  int arg4_223;
unsigned long  int arg5_224;
unsigned long  int arg6_225;
unsigned long  int arg_syscall_no_226;
int* status_va_227;
int exit_status_228;
int child_pid_229;
int n_230;
struct proc* zombie_proc_231;
struct list$1proc$ph* o2_saved_232;
struct proc* it_235;
void* __right_value45 = (void*)0;
struct proc* p_240;
    trapframe_218=(struct context_t*)TRAPFRAME;
    arg0_219=trapframe_218->a0;
    arg1_220=trapframe_218->a1;
    arg2_221=trapframe_218->a2;
    arg3_222=trapframe_218->a3;
    arg4_223=trapframe_218->a4;
    arg5_224=trapframe_218->a5;
    arg6_225=trapframe_218->a6;
    arg_syscall_no_226=trapframe_218->a7;
    status_va_227=(int*)arg0_219;
    exit_status_228=0;
    child_pid_229=-1;
    while(    1    ) {
        n_230=0;
        zombie_proc_231=((void*)0);
        for(        o2_saved_232=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_235=list$1proc$ph_begin((o2_saved_232))        ;        !list$1proc$ph_end((o2_saved_232))        ;        it_235=list$1proc$ph_next((o2_saved_232))        ){
            if(            it_235->deleted            ) {
            }
            else if(            it_235->zombie            ) {
                zombie_proc_231=it_235;
                child_pid_229=n_230;
                break;
            }
            n_230++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        zombie_proc_231        ) {
            exit_status_228=zombie_proc_231->xstatus;
            free(zombie_proc_231->file_table);
            free_proc(zombie_proc_231);
            zombie_proc_231->deleted=1;
            break;
        }
        else {
            yield();
        }
    }
    p_240=((struct proc*)(__right_value45=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_240->pagetable,(unsigned long  long)status_va_227,(void*)&exit_status_228,sizeof(int))<0    ) {
        panic("wait: copyout failed");
    }
    return child_pid_229;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_233;
struct proc* __result_obj__61;
struct proc* __result_obj__62;
struct proc* result_234;
struct proc* __result_obj__63;
result_233 = (void*)0;
result_234 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_233,0,sizeof(struct proc*));
        __result_obj__61 = result_233;
        return __result_obj__61;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__62 = self->it->item;
        return __result_obj__62;
    }
    memset(&result_234,0,sizeof(struct proc*));
    __result_obj__63 = result_234;
    return __result_obj__63;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_236;
struct proc* __result_obj__64;
struct proc* __result_obj__65;
struct proc* result_237;
struct proc* __result_obj__66;
result_236 = (void*)0;
result_237 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_236,0,sizeof(struct proc*));
        __result_obj__64 = result_236;
        return __result_obj__64;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__65 = self->it->item;
        return __result_obj__65;
    }
    memset(&result_237,0,sizeof(struct proc*));
    __result_obj__66 = result_237;
    return __result_obj__66;
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_238;
struct list_item$1proc$ph* prev_it_239;
    it_238=self->head;
    while(    it_238!=((void*)0)    ) {
        prev_it_239=it_238;
        it_238=it_238->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_241;
unsigned long  int arg0_242;
unsigned long  int arg1_243;
unsigned long  int arg2_244;
unsigned long  int arg3_245;
unsigned long  int arg4_246;
unsigned long  int arg5_247;
unsigned long  int arg6_248;
unsigned long  int arg_syscall_no_249;
unsigned long  long user_va_251;
void* __right_value46 = (void*)0;
struct proc* p_252;
int result_253;
    trapframe_241=(struct context_t*)TRAPFRAME;
    arg0_242=trapframe_241->a0;
    arg1_243=trapframe_241->a1;
    arg2_244=trapframe_241->a2;
    arg3_245=trapframe_241->a3;
    arg4_246=trapframe_241->a4;
    arg5_247=trapframe_241->a5;
    arg6_248=trapframe_241->a6;
    arg_syscall_no_249=trapframe_241->a7;
    char kernel_buf_250[256];
    memset(&kernel_buf_250, 0, sizeof(char)    *(256)    );
    user_va_251=arg0_242;
    p_252=((struct proc*)(__right_value46=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_252->pagetable,kernel_buf_250,user_va_251,256);
    result_253=fs_open(kernel_buf_250);
    return result_253;
}

int Sys_fork(){
struct context_t* trapframe_254;
unsigned long  int arg0_255;
unsigned long  int arg1_256;
unsigned long  int arg2_257;
unsigned long  int arg3_258;
unsigned long  int arg4_259;
unsigned long  int arg5_260;
unsigned long  int arg6_261;
unsigned long  int arg_syscall_no_262;
void* __right_value47 = (void*)0;
struct proc* p_263;
int fork_flag_264;
void* __right_value48 = (void*)0;
struct proc* child_265;
unsigned long  long sp_266;
int result_267;
memset(&fork_flag_264, 0, sizeof(int));
    trapframe_254=(struct context_t*)TRAPFRAME;
    arg0_255=trapframe_254->a0;
    arg1_256=trapframe_254->a1;
    arg2_257=trapframe_254->a2;
    arg3_258=trapframe_254->a3;
    arg4_259=trapframe_254->a4;
    arg5_260=trapframe_254->a5;
    arg6_261=trapframe_254->a6;
    arg_syscall_no_262=trapframe_254->a7;
    p_263=((struct proc*)(__right_value47=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_263->program,fork_flag_264=1,0);
    child_265=((struct proc*)(__right_value48=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_266=child_265->context.sp;
    child_265->context=*trapframe_254;
    child_265->context.mepc=child_265->context.mepc+4;
    child_265->context.sp=sp_266;
    child_265->context.a0=0;
    result_267=list$1proc$ph_length(gProc)-1;
    return result_267;
}

int Sys_execv(){
struct context_t* trapframe_268;
unsigned long  int arg0_269;
unsigned long  int arg1_270;
unsigned long  long user_va_272;
void* __right_value49 = (void*)0;
struct proc* p_273;
char* path_274;
unsigned long  long user_argv_277;
int argc_278;
unsigned long  int uargp_279;
int fd_280;
int size_281;
char* elf_buf_282;
int ret_283;
void* __right_value50 = (void*)0;
struct proc* new_p_284;
unsigned long  long sp_285;
int i_287;
unsigned long  int len_288;
unsigned long  long argv_base_289;
int i_290;
unsigned long  long ptr_291;
unsigned long  long nullp_292;
memset(&uargp_279, 0, sizeof(unsigned long  int));
    trapframe_268=(struct context_t*)TRAPFRAME;
    arg0_269=trapframe_268->a0;
    arg1_270=trapframe_268->a1;
    char kernel_buf_271[256];
    memset(&kernel_buf_271, 0, sizeof(char)    *(256)    );
    user_va_272=arg0_269;
    p_273=((struct proc*)(__right_value49=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyinstr(p_273->pagetable,kernel_buf_271,user_va_272,256)<0    ) {
        trapframe_268->a0=-1;
        return -1;
    }
    path_274=kernel_buf_271;
    char argv_storage_275[32][32];
    memset(&argv_storage_275, 0, sizeof(char)    *(32)    *(32)    );
    char* kargv_276[32];
    memset(&kargv_276, 0, sizeof(char*)    *(32)    );
    user_argv_277=arg1_270;
    argc_278=0;
    for(    argc_278=0    ;    argc_278<32    ;    argc_278++    ){
        if(        copyin(p_273->pagetable,(char*)&uargp_279,user_argv_277+argc_278*sizeof(unsigned long  int),sizeof(unsigned long  int))<0        ) {
            trapframe_268->a0=-1;
            return -1;
        }
        if(        uargp_279==0        ) {
            break;
        }
        if(        copyinstr(p_273->pagetable,argv_storage_275[argc_278],uargp_279,sizeof(argv_storage_275[0]))<0        ) {
            trapframe_268->a0=-1;
            return -1;
        }
        kargv_276[argc_278]=argv_storage_275[argc_278];
    }
    kargv_276[argc_278]=((void*)0);
    fd_280=fs_open(path_274);
    if(    fd_280<0    ) {
        trapframe_268->a0=-1;
        return -1;
    }
    size_281=fs_size(fd_280);
    elf_buf_282=calloc(1,size_281);
    ret_283=fs_read(fd_280,elf_buf_282,size_281);
    fs_close(fd_280);
    if(    ret_283<=0    ) {
        trapframe_268->a0=-1;
        return -1;
    }
    alloc_prog(elf_buf_282,0,1);
    free(elf_buf_282);
    new_p_284=((struct proc*)(__right_value50=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_285=new_p_284->context.sp;
    unsigned long  long str_addrs_286[32];
    memset(&str_addrs_286, 0, sizeof(unsigned long  long)    *(32)    );
    for(    i_287=argc_278-1    ;    i_287>=0    ;    i_287--    ){
        len_288=strlen(kargv_276[i_287])+1;
        sp_285-=len_288;
        if(        copyout(new_p_284->pagetable,sp_285,kargv_276[i_287],len_288)<0        ) {
            panic("execv: copyout string failed");
        }
        str_addrs_286[i_287]=sp_285;
    }
    sp_285-=(argc_278+1)*sizeof(unsigned long  long);
    sp_285&=~7;
    argv_base_289=sp_285;
    for(    i_290=0    ;    i_290<argc_278    ;    i_290++    ){
        ptr_291=str_addrs_286[i_290];
        if(        copyout(new_p_284->pagetable,argv_base_289+i_290*sizeof(unsigned long  long),&ptr_291,sizeof(unsigned long  long))<0        ) {
            panic("execv: copyout ptr failed");
        }
    }
    nullp_292=0;
    if(    copyout(new_p_284->pagetable,argv_base_289+argc_278*sizeof(unsigned long  long),&nullp_292,sizeof(unsigned long  long))<0    ) {
        panic("execv: copyout nullp failed");
    }
    trapframe_268->a0=argc_278;
    trapframe_268->a1=argv_base_289;
    trapframe_268->sp=sp_285;
    trapframe_268->mepc=new_p_284->context.mepc-4;
    user_sp=sp_285;
    return argc_278;
}

void uvmunmap(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long npages, int do_free){
unsigned long  long a_293;
unsigned long  long* pte_294;
unsigned long  long pa_295;
    if(    (va%4096)!=0    ) {
        panic("uvmunmap: not aligned");
    }
    for(    a_293=va    ;    a_293<va+npages*4096    ;    a_293+=4096    ){
        pte_294=walk(pagetable,a_293,0);
        if(        pte_294==0||(*pte_294&(1L<<0))==0        ) {
            continue;
        }
        if(        do_free        ) {
            pa_295=(((*pte_294)>>10)<<12);
            kfree((void*)pa_295);
        }
        *pte_294=0;
    }
}

void uvm_dealloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
    if(    new_sz>=old_sz    ) {
        return;
    }
    uvmunmap(pagetable,(((new_sz)+4096-1)&~(4096-1)),((((old_sz)+4096-1)&~(4096-1))-(((new_sz)+4096-1)&~(4096-1)))/4096,1);
}

int uvm_alloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
unsigned long  long a_296;
char* mem_297;
    if(    new_sz<=old_sz    ) {
        return 0;
    }
    a_296=(((old_sz)+4096-1)&~(4096-1));
    for(    ;    a_296<new_sz    ;    a_296+=4096    ){
        mem_297=kalloc();
        if(        mem_297==0        ) {
            uvm_dealloc(pagetable,a_296,old_sz);
            return -1;
        }
        memset(mem_297,0,4096);
        if(        mappages(pagetable,a_296,4096,(unsigned long  long)mem_297,(1L<<2)|(1L<<1)|(1L<<4)|(1L<<0))<0        ) {
            kfree(mem_297);
            uvm_dealloc(pagetable,a_296,old_sz);
            return -1;
        }
    }
    __asm volatile("sfence.vma zero, zero");
    return 0;
}

int Sys_brk(){
struct context_t* trapframe_298;
unsigned long  long addr_299;
void* __right_value51 = (void*)0;
struct proc* p_300;
unsigned long  long old_sz_301;
    trapframe_298=(struct context_t*)TRAPFRAME;
    addr_299=trapframe_298->a0;
    p_300=((struct proc*)(__right_value51=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    old_sz_301=p_300->sz;
    if(    addr_299==0    ) {
        return old_sz_301;
    }
    if(    addr_299>old_sz_301    ) {
        if(        uvm_alloc(p_300->pagetable,old_sz_301,addr_299)<0        ) {
            printf("Sys_brk: uvm_alloc failed!\n");
            return -1;
        }
    }
    else if(    addr_299<old_sz_301    ) {
        uvm_dealloc(p_300->pagetable,old_sz_301,addr_299);
    }
    p_300->sz=addr_299;
    return p_300->sz;
}

int Sys_dup2(){
struct context_t* trapframe_302;
unsigned long  int arg0_303;
unsigned long  int arg1_304;
unsigned long  int arg2_305;
unsigned long  int arg3_306;
unsigned long  int arg4_307;
unsigned long  int arg5_308;
unsigned long  int arg6_309;
unsigned long  int arg_syscall_no_310;
int oldfd_311;
int newfd_312;
    trapframe_302=(struct context_t*)TRAPFRAME;
    arg0_303=trapframe_302->a0;
    arg1_304=trapframe_302->a1;
    arg2_305=trapframe_302->a2;
    arg3_306=trapframe_302->a3;
    arg4_307=trapframe_302->a4;
    arg5_308=trapframe_302->a5;
    arg6_309=trapframe_302->a6;
    arg_syscall_no_310=trapframe_302->a7;
    oldfd_311=arg0_303;
    newfd_312=arg1_304;
    fs_dup2(oldfd_311,newfd_312);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_313;
unsigned long  int arg0_314;
unsigned long  int arg1_315;
unsigned long  int arg2_316;
unsigned long  int arg3_317;
unsigned long  int arg4_318;
unsigned long  int arg5_319;
unsigned long  int arg6_320;
unsigned long  int arg_syscall_no_321;
char* kernel_buf_322;
unsigned long  long user_va_323;
int* fd_324;
void* __right_value52 = (void*)0;
struct proc* p_325;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
kernel_buf_322 = (void*)0;
    trapframe_313=(struct context_t*)TRAPFRAME;
    arg0_314=trapframe_313->a0;
    arg1_315=trapframe_313->a1;
    arg2_316=trapframe_313->a2;
    arg3_317=trapframe_313->a3;
    arg4_318=trapframe_313->a4;
    arg5_319=trapframe_313->a5;
    arg6_320=trapframe_313->a6;
    arg_syscall_no_321=trapframe_313->a7;
    user_va_323=arg0_314;
    fd_324=common_kalloc(sizeof(int)*2);
    pipe_open(&fd_324[0],&fd_324[1]);
    p_325=((struct proc*)(__right_value52=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value52, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_325->pagetable,(unsigned long  long)user_va_323,(char*)fd_324,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    map$2void$ptuple2$2void$plong$$ph_insert(p_325->mapping_values,(void*)user_va_323,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1733, "struct tuple2$2void$plong$")),(void*)fd_324,sizeof(int)*2)));
    return 0;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_326;
unsigned int it_327;
_Bool same_key_exist_328;
void* it2_329;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__67;
    if(    self->len*10>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_326=voidp_get_hash_key(((void*)key))%self->size;
    it_327=hash_326;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_327]        ) {
            if(            voidp_equals(self->keys[it_327],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_327]);
                    (self->keys[it_327] = come_decrement_ref_count(self->keys[it_327], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_327]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_327]);
                    self->keys[it_327]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_327], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_327]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_327]=item;
                }
                break;
            }
            it_327++;
            if(            it_327>=self->size            ) {
                it_327=0;
            }
            else if(            it_327==hash_326            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_327]=(_Bool)1;
            if(            0            ) {
                self->keys[it_327]=key;
            }
            else {
                self->keys[it_327]=key;
            }
            if(            1            ) {
                self->items[it_327]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_327]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_328=(_Bool)0;
    for(    it2_329=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_329=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_329,key)        ) {
            same_key_exist_328=(_Bool)1;
        }
    }
    if(    !same_key_exist_328    ) {
        list$1void$p_push_back(self->key_list,key);
    }
    __result_obj__67 = self;
    come_call_finalizer(tuple2$2void$plong$$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__67;
}

static struct tuple2$2void$plong$* tuple2$2void$plong$_initialize(struct tuple2$2void$plong$* self, void* v1, unsigned long v2){
struct tuple2$2void$plong$* __result_obj__68;
    self->v1=v1;
    self->v2=v2;
    __result_obj__68 = (struct tuple2$2void$plong$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__68;
}

int Sys_read(){
struct context_t* trapframe_330;
unsigned long  int arg0_331;
unsigned long  int arg1_332;
unsigned long  int arg2_333;
unsigned long  int arg3_334;
unsigned long  int arg4_335;
unsigned long  int arg5_336;
unsigned long  int arg6_337;
unsigned long  int arg_syscall_no_338;
int fd_339;
unsigned long  long destva_340;
unsigned long  int n_341;
int ret_343;
void* __right_value55 = (void*)0;
struct proc* p_344;
memset(&ret_343, 0, sizeof(int));
    trapframe_330=(struct context_t*)TRAPFRAME;
    arg0_331=trapframe_330->a0;
    arg1_332=trapframe_330->a1;
    arg2_333=trapframe_330->a2;
    arg3_334=trapframe_330->a3;
    arg4_335=trapframe_330->a4;
    arg5_336=trapframe_330->a5;
    arg6_337=trapframe_330->a6;
    arg_syscall_no_338=trapframe_330->a7;
    fd_339=arg0_331;
    destva_340=arg1_332;
    n_341=arg2_333;
    char kernel_buf_342[256];
    memset(&kernel_buf_342, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_339)    ) {
        ret_343=uart_readn(kernel_buf_342,n_341);
    }
    else if(    is_pipe(fd_339)    ) {
        ret_343=piperead(fd_339,kernel_buf_342,n_341);
    }
    else {
        ret_343=fs_read(fd_339,kernel_buf_342,n_341);
        if(        ret_343<0        ) {
            trapframe_330->a0=ret_343;
            return 0;
        }
        kernel_buf_342[ret_343]=0;
    }
    p_344=((struct proc*)(__right_value55=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_344->pagetable,destva_340,kernel_buf_342,ret_343)<0    ) {
        panic("read: copyout failed");
    }
    return ret_343;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_345;
unsigned long  int arg0_346;
unsigned long  int arg1_347;
unsigned long  int arg2_348;
unsigned long  int arg3_349;
unsigned long  int arg4_350;
unsigned long  int arg5_351;
unsigned long  int arg6_352;
unsigned long  int arg_syscall_no_353;
unsigned long  long result_354;
long fd_355;
int ret_356;
    disable_timer_interrupts();
    trapframe_345=(struct context_t*)TRAPFRAME;
    arg0_346=trapframe_345->a0;
    arg1_347=trapframe_345->a1;
    arg2_348=trapframe_345->a2;
    arg3_349=trapframe_345->a3;
    arg4_350=trapframe_345->a4;
    arg5_351=trapframe_345->a5;
    arg6_352=trapframe_345->a6;
    arg_syscall_no_353=trapframe_345->a7;
    result_354=0;
    switch (    arg_syscall_no_353) {
        case 64:
        {
            result_354=Sys_write();
        }
        break;
        case 73:
        {
            result_354=Sys_pipe();
        }
        break;
        case 72:
        {
            result_354=Sys_dup2();
        }
        break;
        case 70:
        {
            result_354=Sys_exit();
        }
        break;
        case 71:
        {
            result_354=Sys_wait();
        }
        break;
        case 66:
        {
            result_354=Sys_open();
        }
        break;
        case 65:
        {
            result_354=Sys_read();
        }
        break;
        case 67:
        {
            fd_355=arg0_346;
            ret_356=fs_close(fd_355);
            result_354=ret_356;
        }
        break;
        case 68:
        {
            result_354=Sys_fork();
        }
        break;
        case 69:
        {
            result_354=Sys_execv();
        }
        break;
        case 74:
        {
            result_354=Sys_brk();
        }
        break;
        default:
        printf("NO. %d\n",arg_syscall_no_353);
        panic("invalid syscall");
        while(        1        ) {
            ;
        }
    }
    trapframe_345->a0=result_354;
    return result_354;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

struct proc* get_current_proc(){
void* __right_value56 = (void*)0;
struct proc* __result_obj__69;
    __result_obj__69 = ((struct proc*)(__right_value56=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__69;
}

void append_mapping_values(void* user_va, void* pa, unsigned long  int size){
struct proc* c_359;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
    c_359=get_current_proc();
    map$2void$ptuple2$2void$plong$$ph_insert(c_359->mapping_values,user_va,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1935, "struct tuple2$2void$plong$")),pa,(long)size)));
}

void global_init(){
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1proc$ph* __dec_obj12;
    __dec_obj12=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 1940, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    gKernelStateHead=0;
    gKernelStateTail=0;
    gNumKernelState=0;
    memset(gKernelState,0,sizeof(struct sKernelState)*16);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__70;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_360;
struct list_item$1proc$ph* prev_it_361;
    it_360=self->head;
    while(    it_360!=((void*)0)    ) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_361, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_362;
void* __right_value61 = (void*)0;
struct proc* p_363;
int gp_364;
unsigned long  int usersp_365;
unsigned long  long usersatp_366;
unsigned long  int entry_367;
memset(&fork_flag_362, 0, sizeof(int));
    come_heap_init(0, 0, 0);
    timerinit();
    trap_init();
    plic_init();
    plic_enable(10);
    w_stimecmp(r_time()+10000000);
    uart_init();
    kinit();
    console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();
    global_init();
    w_stimecmp(r_time()+10000000);
    alloc_prog((char*)msh_elf,fork_flag_362=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_363=((struct proc*)(__right_value61=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gp_364=p_363->context.gp;
    usersp_365=(unsigned long  long)(p_363->context.sp);
    usersatp_366=((8L<<60)|(((unsigned long  long)p_363->pagetable)>>12));
    entry_367=p_363->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_363;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_367,usersp_365,usersatp_366,10000UL,gp_364);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__71;
void* prev_368;
void* __result_obj__72;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__71 = (void*)-1;
        return __result_obj__71;
    }
    prev_368=heap_end;
    heap_end+=incr;
    __result_obj__72 = prev_368;
    return __result_obj__72;
}

void* malloc(unsigned long  int size){
void* __result_obj__73;
struct mem_block* current_369;
struct mem_block* prev_370;
void* __result_obj__74;
struct mem_block* new_mem_371;
void* __result_obj__75;
void* __result_obj__76;
    if(    size==0    ) {
        __result_obj__73 = ((void*)0);
        return __result_obj__73;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_369=free_list;
    prev_370=((void*)0);
    while(    current_369!=((void*)0)    ) {
        if(        current_369->size>=size        ) {
            if(            prev_370==((void*)0)            ) {
                free_list=current_369->next;
            }
            else {
                prev_370->next=current_369->next;
            }
            __result_obj__74 = (void*)(current_369+1);
            return __result_obj__74;
        }
        prev_370=current_369;
        current_369=current_369->next;
    }
    new_mem_371=(struct mem_block*)sbrk(size);
    if(    new_mem_371==(void*)-1    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    new_mem_371->size=size;
    new_mem_371->next=((void*)0);
    __result_obj__76 = (void*)(new_mem_371+1);
    return __result_obj__76;
}

void free(void* ptr){
struct mem_block* block_372;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_372=(struct mem_block*)ptr-1;
    block_372->next=free_list;
    free_list=block_372;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_373;
void* __result_obj__77;
void* ptr_374;
void* __result_obj__78;
    total_size_373=nmemb*size;
    if(    total_size_373==0    ) {
        __result_obj__77 = ((void*)0);
        return __result_obj__77;
    }
    ptr_374=malloc(total_size_373);
    if(    ptr_374!=((void*)0)    ) {
        memset(ptr_374,0,total_size_373);
    }
    __result_obj__78 = ptr_374;
    return __result_obj__78;
}

char* strdup(const char* s){
char* s2_375;
unsigned long  int len_376;
char* p_377;
char* __result_obj__79;
    s2_375=s;
    len_376=strlen(s2_375)+1;
    p_377=malloc(len_376);
    if(    p_377    ) {
        memcpy(p_377,s2_375,len_376);
    }
    __result_obj__79 = p_377;
    return __result_obj__79;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__80;
char* __result_obj__81;
char* __result_obj__82;
    if(    !*needle    ) {
        __result_obj__80 = (char*)haystack;
        return __result_obj__80;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_378=haystack;
        const char* n_379=needle;
        while(        *h_378&&*n_379&&(*h_378==*n_379)        ) {
            h_378++;
            n_379++;
        }
        if(        !*n_379        ) {
            __result_obj__81 = (char*)haystack;
            return __result_obj__81;
        }
    }
    __result_obj__82 = ((void*)0);
    return __result_obj__82;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_380;
int i_381;
void* __result_obj__83;
    cdst_380=(char*)dst;
    for(    i_381=0    ;    i_381<n    ;    i_381++    ){
        cdst_380[i_381]=c;
    }
    __result_obj__83 = dst;
    return __result_obj__83;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_382;
const unsigned char* s2_383;
memset(&s1_382, 0, sizeof(const unsigned char*));
memset(&s2_383, 0, sizeof(const unsigned char*));
    s1_382=v1;
    s2_383=v2;
    while(    n-->0    ) {
        if(        *s1_382!=*s2_383        ) {
            return *s1_382-*s2_383;
        }
        s1_382++,s2_383++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_384;
char* d_385;
void* __result_obj__84;
void* __result_obj__85;
s_384 = (void*)0;
d_385 = (void*)0;
    if(    n==0    ) {
        __result_obj__84 = dst;
        return __result_obj__84;
    }
    s_384=src;
    d_385=dst;
    if(    s_384<d_385&&s_384+n>d_385    ) {
        s_384+=n;
        d_385+=n;
        while(        n-->0        ) {
            *--d_385=*--s_384;
        }
    }
    else {
        while(        n-->0        ) {
            *d_385++=*s_384++;
        }
    }
    __result_obj__85 = dst;
    return __result_obj__85;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__86;
    __result_obj__86 = memmove(dst,src,n);
    return __result_obj__86;
}

int strncmp(const char* p, const char* q, unsigned int n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_386;
char* __result_obj__87;
os_386 = (void*)0;
    os_386=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__87 = os_386;
    return __result_obj__87;
}

int strlen(const char* s){
int n_387;
memset(&n_387, 0, sizeof(int));
    for(    n_387=0    ;    s[n_387]    ;    n_387++    ){
        ;
    }
    return n_387;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_388;
char* __result_obj__88;
    d_388=dest;
    while(    *d_388    ) {
        d_388++;
    }
    while(    n--&&*src    ) {
        *d_388++=*src++;
    }
    *d_388=0;
    __result_obj__88 = dest;
    return __result_obj__88;
}

char* strtok(char* s, const char* delim){
static char* next_389;
char* start_390;
char* p_391;
char* __result_obj__89;
int is_delim_393;
char* __result_obj__90;
int is_delim_395;
char* __result_obj__91;
next_389 = (void*)0;
start_390 = (void*)0;
p_391 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_389=s;
    }
    if(    next_389==((void*)0)    ) {
        __result_obj__89 = ((void*)0);
        return __result_obj__89;
    }
    start_390=next_389;
    while(    *start_390!=0    ) {
        const char* d_392=delim;
        is_delim_393=0;
        while(        *d_392!=0        ) {
            if(            *start_390==*d_392            ) {
                is_delim_393=1;
                break;
            }
            d_392++;
        }
        if(        !is_delim_393        ) {
            break;
        }
        start_390++;
    }
    if(    *start_390==0    ) {
        next_389=((void*)0);
        __result_obj__90 = ((void*)0);
        return __result_obj__90;
    }
    p_391=start_390;
    while(    *p_391!=0    ) {
        const char* d_394=delim;
        is_delim_395=0;
        while(        *d_394!=0        ) {
            if(            *p_391==*d_394            ) {
                is_delim_395=1;
                break;
            }
            d_394++;
        }
        if(        is_delim_395        ) {
            break;
        }
        p_391++;
    }
    if(    *p_391==0    ) {
        next_389=((void*)0);
    }
    else {
        *p_391=0;
        next_389=p_391+1;
    }
    __result_obj__91 = start_390;
    return __result_obj__91;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_396;
int i_398;
int negative_399;
char* __result_obj__92;
int digit_400;
char* __result_obj__93;
    p_396=buf;
    char tmp_397[32];
    memset(&tmp_397, 0, sizeof(char)    *(32)    );
    i_398=0;
    negative_399=0;
    if(    base<2||base>16    ) {
        *p_396=0;
        __result_obj__92 = p_396;
        return __result_obj__92;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_399=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_400=val_%base;
        tmp_397[i_398++]=(((digit_400<10))?(48+digit_400):(97+digit_400-10));
        val_/=base;
    } while(    val_    );
    if(    negative_399    ) {
        *p_396++=45;
    }
    while(    i_398--    ) {
        *p_396++=tmp_397[i_398];
    }
    *p_396=0;
    __result_obj__93 = buf;
    return __result_obj__93;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_402;
const char* s_403;
unsigned long  int remaining_405;
s_403 = (void*)0;
    char out2_401[512];
    memset(&out2_401, 0, sizeof(char)    *(512)    );
    p_402=out2_401;
    char buf_404[32];
    memset(&buf_404, 0, sizeof(char)    *(32)    );
    remaining_405=sizeof(out2_401);
    for(    ;    *fmt&&remaining_405>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_402++=*fmt;
            remaining_405--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_404,__builtin_va_arg(ap,int),10,1);
            s_403=buf_404;
            break;
            case 117:
            itoa(buf_404,__builtin_va_arg(ap,unsigned int),10,0);
            s_403=buf_404;
            break;
            case 120:
            itoa(buf_404,__builtin_va_arg(ap,unsigned int),16,0);
            s_403=buf_404;
            break;
            case 115:
            s_403=__builtin_va_arg(ap,const char*);
            if(            !s_403            ) {
                s_403="(null)";
            }
            break;
            case 99:
            buf_404[0]=(char)__builtin_va_arg(ap,int);
            buf_404[1]=0;
            s_403=buf_404;
            break;
            case 112:
            strncpy(buf_404,"0x",32);
            itoa(buf_404+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_403=buf_404;
            break;
            case 37:
            buf_404[0]=37;
            buf_404[1]=0;
            s_403=buf_404;
            break;
            default:
            buf_404[0]=37;
            buf_404[1]=*fmt;
            buf_404[2]=0;
            s_403=buf_404;
            break;
        }
        while(        *s_403&&remaining_405>1        ) {
            *p_402++=*s_403++;
            remaining_405--;
        }
    }
    *p_402=0;
    *out=strdup(out2_401);
    return p_402-out2_401;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_406;
char* p_407;
const char* s_408;
unsigned long  int remaining_410;
memset(&ap_406, 0, sizeof(va_list));
s_408 = (void*)0;
    __builtin_va_start(ap_406,fmt);
    p_407=out;
    char buf_409[32];
    memset(&buf_409, 0, sizeof(char)    *(32)    );
    remaining_410=out_size;
    if(    remaining_410==0    ) {
        __builtin_va_end(ap_406);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_410>1            ) {
                *p_407++=*fmt;
                remaining_410--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_408=__builtin_va_arg(ap_406,const char*);
            while(            *s_408&&remaining_410>1            ) {
                *p_407++=*s_408++;
                remaining_410--;
            }
            break;
            case 100:
            itoa(buf_409,__builtin_va_arg(ap_406,int),10,0);
            s_408=buf_409;
            while(            *s_408&&remaining_410>1            ) {
                *p_407++=*s_408++;
                remaining_410--;
            }
            break;
            case 120:
            itoa(buf_409,(unsigned int)__builtin_va_arg(ap_406,int),16,1);
            s_408=buf_409;
            while(            *s_408&&remaining_410>1            ) {
                *p_407++=*s_408++;
                remaining_410--;
            }
            break;
            case 99:
            if(            remaining_410>1            ) {
                *p_407++=(char)__builtin_va_arg(ap_406,int);
                remaining_410--;
            }
            break;
            case 112:
            s_408="0x";
            while(            *s_408&&remaining_410>1            ) {
                *p_407++=*s_408++;
                remaining_410--;
            }
            itoa(buf_409,(long)__builtin_va_arg(ap_406,void*),16,1);
            s_408=buf_409;
            while(            *s_408&&remaining_410>1            ) {
                *p_407++=*s_408++;
                remaining_410--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_409,__builtin_va_arg(ap_406,long),10,1);
                s_408=buf_409;
                while(                *s_408&&remaining_410>1                ) {
                    *p_407++=*s_408++;
                    remaining_410--;
                }
            }
            break;
            default:
            if(            remaining_410>1            ) {
                *p_407++=37;
                remaining_410--;
                if(                remaining_410>1                ) {
                    *p_407++=*fmt;
                    remaining_410--;
                }
            }
            break;
        }
    }
    *p_407=0;
    __builtin_va_end(ap_406);
    return p_407-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_411;
char* p_412;
const char* s_413;
unsigned long  int remaining_415;
memset(&ap_411, 0, sizeof(va_list));
s_413 = (void*)0;
    __builtin_va_start(ap_411,fmt);
    p_412=out;
    char buf_414[32];
    memset(&buf_414, 0, sizeof(char)    *(32)    );
    remaining_415=out_size;
    if(    remaining_415==0    ) {
        __builtin_va_end(ap_411);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_415>1            ) {
                *p_412++=*fmt;
                remaining_415--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_413=__builtin_va_arg(ap_411,const char*);
            while(            *s_413&&remaining_415>1            ) {
                *p_412++=*s_413++;
                remaining_415--;
            }
            break;
            case 100:
            itoa(buf_414,__builtin_va_arg(ap_411,int),10,0);
            s_413=buf_414;
            while(            *s_413&&remaining_415>1            ) {
                *p_412++=*s_413++;
                remaining_415--;
            }
            break;
            case 120:
            itoa(buf_414,(unsigned int)__builtin_va_arg(ap_411,int),16,1);
            s_413=buf_414;
            while(            *s_413&&remaining_415>1            ) {
                *p_412++=*s_413++;
                remaining_415--;
            }
            break;
            case 99:
            if(            remaining_415>1            ) {
                *p_412++=(char)__builtin_va_arg(ap_411,int);
                remaining_415--;
            }
            break;
            case 112:
            s_413="0x";
            while(            *s_413&&remaining_415>1            ) {
                *p_412++=*s_413++;
                remaining_415--;
            }
            itoa(buf_414,(long)__builtin_va_arg(ap_411,void*),16,1);
            s_413=buf_414;
            while(            *s_413&&remaining_415>1            ) {
                *p_412++=*s_413++;
                remaining_415--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_414,__builtin_va_arg(ap_411,long),10,1);
                s_413=buf_414;
                while(                *s_413&&remaining_415>1                ) {
                    *p_412++=*s_413++;
                    remaining_415--;
                }
            }
            break;
            default:
            if(            remaining_415>1            ) {
                *p_412++=37;
                remaining_415--;
                if(                remaining_415>1                ) {
                    *p_412++=*fmt;
                    remaining_415--;
                }
            }
            break;
        }
    }
    *p_412=0;
    __builtin_va_end(ap_411);
    return p_412-out;
}

void printint(int val_, int base, int sign){
int i_417;
int negative_418;
unsigned int uval_419;
int digit_420;
memset(&uval_419, 0, sizeof(unsigned int));
    char buf_416[33];
    memset(&buf_416, 0, sizeof(char)    *(33)    );
    i_417=0;
    negative_418=0;
    if(    sign&&val_<0    ) {
        negative_418=1;
        uval_419=-val_;
    }
    else {
        uval_419=(unsigned int)val_;
    }
    if(    uval_419==0    ) {
        putchar(48);
        return;
    }
    while(    uval_419>0    ) {
        digit_420=uval_419%base;
        buf_416[i_417++]=((digit_420<10)?(48+digit_420):(97+(digit_420-10)));
        uval_419/=base;
    }
    if(    negative_418    ) {
        putchar(45);
    }
    while(    --i_417>=0    ) {
        putchar(buf_416[i_417]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_422;
int negative_423;
int digit_424;
    char buf_421[65];
    memset(&buf_421, 0, sizeof(char)    *(65)    );
    i_422=0;
    negative_423=0;
    if(    sign&&(long)val_<0    ) {
        negative_423=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_424=val_%base;
        buf_421[i_422++]=((digit_424<10)?(48+digit_424):(97+(digit_424-10)));
        val_/=base;
    }
    if(    negative_423    ) {
        putchar(45);
    }
    while(    --i_422>=0    ) {
        putchar(buf_421[i_422]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_426;
int negative_427;
int digit_428;
    char buf_425[65];
    memset(&buf_425, 0, sizeof(char)    *(65)    );
    i_426=0;
    negative_427=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_427=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_428=val_%base;
        buf_425[i_426++]=((digit_428<10)?(48+digit_428):(97+(digit_428-10)));
        val_/=base;
    }
    if(    negative_427    ) {
        putchar(45);
    }
    while(    --i_426>=0    ) {
        putchar(buf_425[i_426]);
    }
}

int printf(const char* fmt, ...){
va_list ap_429;
const char* p_430;
int lcount_431;
unsigned long  int val__432;
unsigned long  long val__433;
long val__434;
long long val__435;
int i_436;
int val__437;
unsigned int val__438;
unsigned long  int val__439;
char c_441;
memset(&ap_429, 0, sizeof(va_list));
p_430 = (void*)0;
    __builtin_va_start(ap_429,fmt);
    for(    p_430=fmt    ;    *p_430    ;    p_430++    ){
        if(        *p_430!=37        ) {
            putchar(*p_430);
            continue;
        }
        p_430++;
        if(        *p_430==108        ) {
            lcount_431=1;
            if(            *(p_430+1)==108            ) {
                lcount_431=2;
                p_430++;
            }
            p_430++;
            switch (            *p_430) {
                case 120:
                {
                    if(                    lcount_431==1                    ) {
                        val__432=__builtin_va_arg(ap_429,unsigned long  int);
                        printlong(val__432,16,0);
                    }
                    else {
                        val__433=__builtin_va_arg(ap_429,unsigned long  long);
                        printlonglong(val__433,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_431==1                    ) {
                        val__434=__builtin_va_arg(ap_429,long);
                        printlong(val__434,10,1);
                    }
                    else {
                        val__435=__builtin_va_arg(ap_429,long  long);
                        printlonglong(val__435,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_436=0                    ;                    i_436<lcount_431                    ;                    i_436++                    ){
                        putchar(108);
                    }
                    putchar(*p_430);
                    break;
                }
            }
        }
        else {
            switch (            *p_430) {
                case 100:
                {
                    val__437=__builtin_va_arg(ap_429,int);
                    printint(val__437,10,1);
                    break;
                }
                case 120:
                {
                    val__438=__builtin_va_arg(ap_429,unsigned int);
                    printint(val__438,16,0);
                    break;
                }
                case 112:
                {
                    val__439=(unsigned long  int)__builtin_va_arg(ap_429,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__439,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_440=__builtin_va_arg(ap_429,const char*);
                    if(                    !s_440                    ) {
                        s_440="(null)";
                    }
                    while(                    *s_440                    ) {
                        putchar(*s_440++);
                    }
                    break;
                }
                case 99:
                {
                    c_441=(char)__builtin_va_arg(ap_429,int);
                    putchar(c_441);
                    break;
                }
                case 37:
                {
                    putchar(37);
                    break;
                }
                default:
                {
                    putchar(37);
                    putchar(*p_430);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_429);
    return 0;
}

void come_push_stackframe(char* sname, int sline, int id){
}

void come_pop_stackframe(){
}

void come_save_stackframe(char* sname, int sline){
}

void stackframe(){
}

char* come_get_stackframe(){
void* __right_value62 = (void*)0;
char* __result_obj__94;
    __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value62=__builtin_string(""))));
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
}

void come_heap_final(){
}

void* alloc_from_pages(unsigned long  int size){
void* result_442;
void* __result_obj__95;
    result_442=((void*)0);
    size=(size+7&~7);
    result_442=calloc(1,size);
    __result_obj__95 = result_442;
    return __result_obj__95;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_443;
struct sMemHeaderTiny* prev_it_444;
struct sMemHeaderTiny* next_it_445;
unsigned long  int size_446;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_443=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_443->allocated!=177783            ) {
                return;
            }
            it_443->allocated=0;
            prev_it_444=it_443->prev;
            next_it_445=it_443->next;
            if(            gAllocMem==it_443            ) {
                gAllocMem=(struct sMemHeader*)next_it_445;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_444                ) {
                    prev_it_444->next=next_it_445;
                }
                if(                next_it_445                ) {
                    next_it_445->prev=prev_it_444;
                }
            }
            size_446=it_443->size;
            free(it_443);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_447;
struct sMemHeaderTiny* it_448;
void* __result_obj__96;
    if(    gComeDebugLib    ) {
    }
    else {
        result_447=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_448=result_447;
        it_448->allocated=177783;
        it_448->class_name=class_name;
        it_448->sname=sname;
        it_448->sline=sline;
        it_448->size=size+sizeof(struct sMemHeaderTiny);
        it_448->free_next=((void*)0);
        it_448->next=(struct sMemHeaderTiny*)gAllocMem;
        it_448->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_448;
        }
        gAllocMem=(struct sMemHeader*)it_448;
        gNumAlloc++;
        __result_obj__96 = (char*)result_447+sizeof(struct sMemHeaderTiny);
        return __result_obj__96;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_449;
char* __result_obj__97;
struct sMemHeaderTiny* it_450;
char* __result_obj__98;
    if(    gComeDebugLib    ) {
        it_449=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_449->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_449);
            exit(2);
        }
        __result_obj__97 = it_449->class_name;
        return __result_obj__97;
    }
    else {
        it_450=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_450->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_450);
            exit(2);
        }
        __result_obj__98 = it_450->class_name;
        return __result_obj__98;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_451;
unsigned long  int* ref_count_452;
unsigned long  int* size2_453;
void* __result_obj__99;
    mem_451=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_452=(unsigned long  int*)mem_451;
    *ref_count_452=0;
    size2_453=(unsigned long  int*)(mem_451+sizeof(unsigned long  int));
    *size2_453=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__99 = mem_451+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__99;
}

void come_free(void* mem){
unsigned long  int* ref_count_454;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_454=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_454);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__100;
char* mem_455;
unsigned long  int* size_p_456;
unsigned long  int size_457;
void* result_458;
void* __result_obj__101;
    if(    !block    ) {
        __result_obj__100 = ((void*)0);
        return __result_obj__100;
    }
    mem_455=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_456=(unsigned long  int*)(mem_455+sizeof(unsigned long  int));
    size_457=*size_p_456-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_458=come_calloc_v2(1,size_457,sname,sline,class_name);
    memcpy(result_458,block,size_457);
    __result_obj__101 = result_458;
    return __result_obj__101;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__102;
unsigned long  int* ref_count_459;
void* __result_obj__103;
    if(    mem==((void*)0)    ) {
        __result_obj__102 = mem;
        return __result_obj__102;
    }
    ref_count_459=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_459)++;
    __result_obj__103 = mem;
    return __result_obj__103;
}

void* come_print_ref_count(void* mem){
void* __result_obj__104;
unsigned long  int* ref_count_460;
void* __result_obj__105;
    if(    mem==((void*)0)    ) {
        __result_obj__104 = mem;
        return __result_obj__104;
    }
    ref_count_460=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_460);
    __result_obj__105 = mem;
    return __result_obj__105;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_461;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_461=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_461;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__106;
void* __result_obj__107;
unsigned long  int* ref_count_462;
unsigned long  int count_463;
void (*finalizer_464)(void*);
void* __result_obj__108;
void* __result_obj__109;
memset(&finalizer_464, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__106 = mem;
            return __result_obj__106;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__107 = ((void*)0);
        return __result_obj__107;
    }
    ref_count_462=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_462)--;
    }
    count_463=*ref_count_462;
    if(    !no_free&&count_463<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_464=protocol_fun;
            finalizer_464(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__108 = ((void*)0);
        return __result_obj__108;
    }
    __result_obj__109 = mem;
    return __result_obj__109;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_465)(void*);
void (*finalizer_466)(void*);
void (*finalizer_467)(void*);
unsigned long  int* ref_count_468;
unsigned long  int count_469;
void (*finalizer_470)(void*);
void (*finalizer_471)(void*);
void (*finalizer_472)(void*);
memset(&finalizer_465, 0, sizeof(void (*)(void*)));
memset(&finalizer_466, 0, sizeof(void (*)(void*)));
memset(&finalizer_467, 0, sizeof(void (*)(void*)));
memset(&finalizer_470, 0, sizeof(void (*)(void*)));
memset(&finalizer_471, 0, sizeof(void (*)(void*)));
memset(&finalizer_472, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            return;
        }
    }
    if(    mem==((void*)0)    ) {
        return;
    }
    if(    call_finalizer_only    ) {
        if(        fun        ) {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_465=protocol_fun;
                finalizer_465(protocol_obj);
            }
            finalizer_466=fun;
            finalizer_466(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_467=protocol_fun;
                finalizer_467(protocol_obj);
            }
        }
    }
    else {
        ref_count_468=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_468)--;
        }
        count_469=*ref_count_468;
        if(        !no_free&&count_469<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_470=protocol_fun;
                        finalizer_470(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_471=fun;
                        finalizer_471(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_472=protocol_fun;
                        finalizer_472(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__110;
int len_473;
void* __right_value63 = (void*)0;
char* result_474;
char* __result_obj__111;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_473=strlen(str)+1;
    result_474=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_473)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_474,str,len_473);
    __result_obj__111 = (char*)come_increment_ref_count(result_474);
    (result_474 = come_decrement_ref_count(result_474, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value64 = (void*)0;
char* __result_obj__112;
    __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value64=come_get_stackframe())));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__113;
    __result_obj__113 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__113;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value65 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__114;
    self->size=128;
    __dec_obj13=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2915, "char*"));
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__114 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value66 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__115;
    self->size=128;
    __dec_obj14=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2925, "char*"));
    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__115 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__116;
void* __right_value67 = (void*)0;
struct buffer* result_475;
void* __right_value68 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__117;
    if(    self==((void*)0)    ) {
        __result_obj__116 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__116;
    }
    result_475=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_475->size=self->size;
    __dec_obj15=result_475->buf,
    result_475->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_475->len=self->len;
    memcpy(result_475->buf,self->buf,self->len);
    __result_obj__117 = (struct buffer*)come_increment_ref_count(result_475);
    come_call_finalizer(buffer_finalize, result_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
_Bool __result_obj__118;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__118 = string_equals(((char*)(__right_value69=buffer_to_string(left))),((char*)(__right_value70=buffer_to_string(right))));
    (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__118;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)    ) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)    ) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__119;
void* __right_value71 = (void*)0;
char* old_buf_476;
int old_len_477;
int new_size_478;
void* __right_value72 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__120;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__119 = self;
        return __result_obj__119;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_476=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_476,self->buf,self->size);
        old_len_477=self->len;
        new_size_478=(self->size+size+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_478)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_476,old_len_477);
        self->buf[old_len_477]=0;
        self->size=new_size_478;
        (old_buf_476 = come_decrement_ref_count(old_buf_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__120 = self;
    return __result_obj__120;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__121;
void* __right_value73 = (void*)0;
char* old_buf_479;
int old_len_480;
int new_size_481;
void* __right_value74 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = ((void*)0);
        return __result_obj__121;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_479=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_480=self->len;
        new_size_481=(self->size+10+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_481)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_479,old_len_480);
        self->buf[old_len_480]=0;
        self->size=new_size_481;
        (old_buf_479 = come_decrement_ref_count(old_buf_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__122 = self;
    return __result_obj__122;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__123;
int size_482;
void* __right_value75 = (void*)0;
char* old_buf_483;
int old_len_484;
int new_size_485;
void* __right_value76 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__124;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__123 = self;
        return __result_obj__123;
    }
    size_482=strlen(mem);
    if(    self->len+size_482+1+1>=self->size    ) {
        old_buf_483=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_483,self->buf,self->size);
        old_len_484=self->len;
        new_size_485=(self->size+size_482+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_485)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_483,old_len_484);
        self->buf[old_len_484]=0;
        self->size=new_size_485;
        (old_buf_483 = come_decrement_ref_count(old_buf_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_482);
    self->len+=size_482;
    self->buf[self->len]=0;
    __result_obj__124 = self;
    return __result_obj__124;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__125;
va_list args_486;
char* result_487;
int len_488;
struct buffer* __result_obj__126;
void* __right_value77 = (void*)0;
char* mem_489;
int size_490;
void* __right_value78 = (void*)0;
char* old_buf_491;
int old_len_492;
int new_size_493;
void* __right_value79 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__127;
result_487 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__125 = self;
        return __result_obj__125;
    }
    __builtin_va_start(args_486,msg);
    len_488=vasprintf(&result_487,msg,args_486);
    __builtin_va_end(args_486);
    if(    len_488<0    ) {
        __result_obj__126 = self;
        return __result_obj__126;
    }
    mem_489=(char*)come_increment_ref_count(__builtin_string(result_487));
    size_490=strlen(mem_489);
    if(    self->len+size_490+1+1>=self->size    ) {
        old_buf_491=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_491,self->buf,self->size);
        old_len_492=self->len;
        new_size_493=(self->size+size_490+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_493)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_491,old_len_492);
        self->buf[old_len_492]=0;
        self->size=new_size_493;
        (old_buf_491 = come_decrement_ref_count(old_buf_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_489,size_490);
    self->len+=size_490;
    self->buf[self->len]=0;
    free(result_487);
    __result_obj__127 = self;
    (mem_489 = come_decrement_ref_count(mem_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__127;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__128;
int size_494;
void* __right_value80 = (void*)0;
char* old_buf_495;
int old_len_496;
int new_size_497;
void* __right_value81 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__129;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__128 = self;
        return __result_obj__128;
    }
    size_494=strlen(mem)+1;
    if(    self->len+size_494+1+1+1>=self->size    ) {
        old_buf_495=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_495,self->buf,self->size);
        old_len_496=self->len;
        new_size_497=(self->size+size_494+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_497)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_495,old_len_496);
        self->buf[old_len_496]=0;
        self->size=new_size_497;
        (old_buf_495 = come_decrement_ref_count(old_buf_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_494);
    self->len+=size_494;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__130;
int* mem_498;
int size_499;
void* __right_value82 = (void*)0;
char* old_buf_500;
int old_len_501;
int new_size_502;
void* __right_value83 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__131;
    if(    self==((void*)0)    ) {
        __result_obj__130 = ((void*)0);
        return __result_obj__130;
    }
    mem_498=&value;
    size_499=sizeof(int);
    if(    self->len+size_499+1+1>=self->size    ) {
        old_buf_500=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_500,self->buf,self->size);
        old_len_501=self->len;
        new_size_502=(self->size+size_499+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_502)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_500,old_len_501);
        self->buf[old_len_501]=0;
        self->size=new_size_502;
        (old_buf_500 = come_decrement_ref_count(old_buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_498,size_499);
    self->len+=size_499;
    self->buf[self->len]=0;
    __result_obj__131 = self;
    return __result_obj__131;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_503;
int size_504;
void* __right_value84 = (void*)0;
char* old_buf_505;
int old_len_506;
int new_size_507;
void* __right_value85 = (void*)0;
char* __dec_obj22;
struct buffer* __result_obj__132;
    mem_503=&value;
    size_504=sizeof(long);
    if(    self->len+size_504+1+1>=self->size    ) {
        old_buf_505=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_505,self->buf,self->size);
        old_len_506=self->len;
        new_size_507=(self->size+size_504+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_507)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_505,old_len_506);
        self->buf[old_len_506]=0;
        self->size=new_size_507;
        (old_buf_505 = come_decrement_ref_count(old_buf_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_503,size_504);
    self->len+=size_504;
    self->buf[self->len]=0;
    __result_obj__132 = self;
    return __result_obj__132;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__133;
short* mem_508;
int size_509;
void* __right_value86 = (void*)0;
char* old_buf_510;
int old_len_511;
int new_size_512;
void* __right_value87 = (void*)0;
char* __dec_obj23;
struct buffer* __result_obj__134;
    if(    self==((void*)0)    ) {
        __result_obj__133 = ((void*)0);
        return __result_obj__133;
    }
    mem_508=&value;
    size_509=sizeof(short);
    if(    self->len+size_509+1+1>=self->size    ) {
        old_buf_510=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_510,self->buf,self->size);
        old_len_511=self->len;
        new_size_512=(self->size+size_509+1)*2;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_512)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_510,old_len_511);
        self->buf[old_len_511]=0;
        self->size=new_size_512;
        (old_buf_510 = come_decrement_ref_count(old_buf_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_508,size_509);
    self->len+=size_509;
    self->buf[self->len]=0;
    __result_obj__134 = self;
    return __result_obj__134;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__135;
int len_513;
int new_size_514;
void* __right_value88 = (void*)0;
char* __dec_obj24;
int i_515;
struct buffer* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__135 = ((void*)0);
        return __result_obj__135;
    }
    len_513=self->len;
    len_513=(len_513+3)&~3;
    if(    len_513>=self->size    ) {
        new_size_514=(self->size+1+1)*2;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_514)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_514;
    }
    for(    i_515=self->len    ;    i_515<len_513    ;    i_515++    ){
        self->buf[i_515]=0;
    }
    self->len=len_513;
    __result_obj__136 = self;
    return __result_obj__136;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* result_516;
struct buffer* __result_obj__137;
struct buffer* __result_obj__138;
    result_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__137 = (struct buffer*)come_increment_ref_count(result_516);
        come_call_finalizer(buffer_finalize, result_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__137;
    }
    buffer_append_str(result_516,self);
    __result_obj__138 = (struct buffer*)come_increment_ref_count(result_516);
    come_call_finalizer(buffer_finalize, result_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

char* buffer_to_string(struct buffer* self){
void* __right_value91 = (void*)0;
char* __result_obj__139;
void* __right_value92 = (void*)0;
char* __result_obj__140;
    if(    self==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(self->buf))));
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__141;
    __result_obj__141 = self->buf;
    return __result_obj__141;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* result_517;
struct buffer* __result_obj__142;
    result_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_517,self,sizeof(char)*len);
    __result_obj__142 = (struct buffer*)come_increment_ref_count(result_517);
    come_call_finalizer(buffer_finalize, result_517, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct buffer* result_518;
int i_519;
struct buffer* __result_obj__143;
    result_518=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_519=0    ;    i_519<len    ;    i_519++    ){
        buffer_append(result_518,self[i_519],strlen(self[i_519]));
    }
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_518);
    come_call_finalizer(buffer_finalize, result_518, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct buffer* result_520;
struct buffer* __result_obj__144;
    result_520=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_520,(char*)self,sizeof(short)*len);
    __result_obj__144 = (struct buffer*)come_increment_ref_count(result_520);
    come_call_finalizer(buffer_finalize, result_520, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__144, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__144;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct buffer* result_521;
struct buffer* __result_obj__145;
    result_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_521,(char*)self,sizeof(int)*len);
    __result_obj__145 = (struct buffer*)come_increment_ref_count(result_521);
    come_call_finalizer(buffer_finalize, result_521, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__145;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct buffer* result_522;
struct buffer* __result_obj__146;
    result_522=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_522,(char*)self,sizeof(long)*len);
    __result_obj__146 = (struct buffer*)come_increment_ref_count(result_522);
    come_call_finalizer(buffer_finalize, result_522, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct buffer* result_523;
struct buffer* __result_obj__147;
    result_523=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_523,(char*)self,sizeof(float)*len);
    __result_obj__147 = (struct buffer*)come_increment_ref_count(result_523);
    come_call_finalizer(buffer_finalize, result_523, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct buffer* result_524;
struct buffer* __result_obj__148;
    result_524=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_524,(char*)self,sizeof(double)*len);
    __result_obj__148 = (struct buffer*)come_increment_ref_count(result_524);
    come_call_finalizer(buffer_finalize, result_524, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

char* buffer_printable(struct buffer* self){
int len_525;
void* __right_value107 = (void*)0;
char* result_526;
int n_527;
int i_528;
unsigned char c_529;
char* __result_obj__149;
    len_525=self->len;
    result_526=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_525*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_527=0;
    for(    i_528=0    ;    i_528<len_525    ;    i_528++    ){
        c_529=self->buf[i_528];
        if(        (c_529>=0&&c_529<32)||c_529==127        ) {
            result_526[n_527++]=94;
            result_526[n_527++]=c_529+65-1;
        }
        else if(        c_529>127        ) {
            result_526[n_527++]=63;
        }
        else {
            result_526[n_527++]=c_529;
        }
    }
    result_526[n_527]=0;
    __result_obj__149 = (char*)come_increment_ref_count(result_526);
    (result_526 = come_decrement_ref_count(result_526, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_530;
struct list$1char$* __result_obj__151;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_530=0    ;    i_530<num_value    ;    i_530++    ){
        list$1char$_push_back(self,values[i_530]);
    }
    __result_obj__151 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value109 = (void*)0;
struct list_item$1char$* litem_531;
void* __right_value110 = (void*)0;
struct list_item$1char$* litem_532;
void* __right_value111 = (void*)0;
struct list_item$1char$* litem_533;
struct list$1char$* __result_obj__150;
    if(    self->len==0    ) {
        litem_531=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value109=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_531->prev=((void*)0);
        litem_531->next=((void*)0);
        litem_531->item=item;
        self->tail=litem_531;
        self->head=litem_531;
    }
    else if(    self->len==1    ) {
        litem_532=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value110=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_532->prev=self->head;
        litem_532->next=((void*)0);
        litem_532->item=item;
        self->tail=litem_532;
        self->head->next=litem_532;
    }
    else {
        litem_533=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value111=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_533->prev=self->tail;
        litem_533->next=((void*)0);
        litem_533->item=item;
        self->tail->next=litem_533;
        self->tail=litem_533;
    }
    self->len++;
    __result_obj__150 = self;
    return __result_obj__150;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_534;
struct list_item$1char$* prev_it_535;
    it_534=self->head;
    while(    it_534!=((void*)0)    ) {
        prev_it_535=it_534;
        it_534=it_534->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value108 = (void*)0;
void* __right_value112 = (void*)0;
struct list$1char$* __result_obj__152;
    __result_obj__152 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value112=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_536;
struct list$1char$p* __result_obj__154;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_536=0    ;    i_536<num_value    ;    i_536++    ){
        list$1char$p_push_back(self,values[i_536]);
    }
    __result_obj__154 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__154;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value114 = (void*)0;
struct list_item$1char$p* litem_537;
void* __right_value115 = (void*)0;
struct list_item$1char$p* litem_538;
void* __right_value116 = (void*)0;
struct list_item$1char$p* litem_539;
struct list$1char$p* __result_obj__153;
    if(    self->len==0    ) {
        litem_537=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value114=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_537->prev=((void*)0);
        litem_537->next=((void*)0);
        litem_537->item=item;
        self->tail=litem_537;
        self->head=litem_537;
    }
    else if(    self->len==1    ) {
        litem_538=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value115=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_538->prev=self->head;
        litem_538->next=((void*)0);
        litem_538->item=item;
        self->tail=litem_538;
        self->head->next=litem_538;
    }
    else {
        litem_539=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value116=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_539->prev=self->tail;
        litem_539->next=((void*)0);
        litem_539->item=item;
        self->tail->next=litem_539;
        self->tail=litem_539;
    }
    self->len++;
    __result_obj__153 = self;
    return __result_obj__153;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_540;
struct list_item$1char$p* prev_it_541;
    it_540=self->head;
    while(    it_540!=((void*)0)    ) {
        prev_it_541=it_540;
        it_540=it_540->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_541, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value113 = (void*)0;
void* __right_value117 = (void*)0;
struct list$1char$p* __result_obj__155;
    __result_obj__155 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value117=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value117, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__155;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_542;
struct list$1short$* __result_obj__157;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_542=0    ;    i_542<num_value    ;    i_542++    ){
        list$1short$_push_back(self,values[i_542]);
    }
    __result_obj__157 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value119 = (void*)0;
struct list_item$1short$* litem_543;
void* __right_value120 = (void*)0;
struct list_item$1short$* litem_544;
void* __right_value121 = (void*)0;
struct list_item$1short$* litem_545;
struct list$1short$* __result_obj__156;
    if(    self->len==0    ) {
        litem_543=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value119=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_543->prev=((void*)0);
        litem_543->next=((void*)0);
        litem_543->item=item;
        self->tail=litem_543;
        self->head=litem_543;
    }
    else if(    self->len==1    ) {
        litem_544=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value120=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_544->prev=self->head;
        litem_544->next=((void*)0);
        litem_544->item=item;
        self->tail=litem_544;
        self->head->next=litem_544;
    }
    else {
        litem_545=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value121=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_545->prev=self->tail;
        litem_545->next=((void*)0);
        litem_545->item=item;
        self->tail->next=litem_545;
        self->tail=litem_545;
    }
    self->len++;
    __result_obj__156 = self;
    return __result_obj__156;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_546;
struct list_item$1short$* prev_it_547;
    it_546=self->head;
    while(    it_546!=((void*)0)    ) {
        prev_it_547=it_546;
        it_546=it_546->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value118 = (void*)0;
void* __right_value122 = (void*)0;
struct list$1short$* __result_obj__158;
    __result_obj__158 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value122=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_548;
struct list$1int$* __result_obj__160;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_548=0    ;    i_548<num_value    ;    i_548++    ){
        list$1int$_push_back(self,values[i_548]);
    }
    __result_obj__160 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value124 = (void*)0;
struct list_item$1int$* litem_549;
void* __right_value125 = (void*)0;
struct list_item$1int$* litem_550;
void* __right_value126 = (void*)0;
struct list_item$1int$* litem_551;
struct list$1int$* __result_obj__159;
    if(    self->len==0    ) {
        litem_549=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value124=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_549->prev=((void*)0);
        litem_549->next=((void*)0);
        litem_549->item=item;
        self->tail=litem_549;
        self->head=litem_549;
    }
    else if(    self->len==1    ) {
        litem_550=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value125=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_550->prev=self->head;
        litem_550->next=((void*)0);
        litem_550->item=item;
        self->tail=litem_550;
        self->head->next=litem_550;
    }
    else {
        litem_551=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value126=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_551->prev=self->tail;
        litem_551->next=((void*)0);
        litem_551->item=item;
        self->tail->next=litem_551;
        self->tail=litem_551;
    }
    self->len++;
    __result_obj__159 = self;
    return __result_obj__159;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_552;
struct list_item$1int$* prev_it_553;
    it_552=self->head;
    while(    it_552!=((void*)0)    ) {
        prev_it_553=it_552;
        it_552=it_552->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_553, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value123 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1int$* __result_obj__161;
    __result_obj__161 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value127=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__161;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_554;
struct list$1long$* __result_obj__163;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_554=0    ;    i_554<num_value    ;    i_554++    ){
        list$1long$_push_back(self,values[i_554]);
    }
    __result_obj__163 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value129 = (void*)0;
struct list_item$1long$* litem_555;
void* __right_value130 = (void*)0;
struct list_item$1long$* litem_556;
void* __right_value131 = (void*)0;
struct list_item$1long$* litem_557;
struct list$1long$* __result_obj__162;
    if(    self->len==0    ) {
        litem_555=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value129=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_555->prev=((void*)0);
        litem_555->next=((void*)0);
        litem_555->item=item;
        self->tail=litem_555;
        self->head=litem_555;
    }
    else if(    self->len==1    ) {
        litem_556=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value130=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_556->prev=self->head;
        litem_556->next=((void*)0);
        litem_556->item=item;
        self->tail=litem_556;
        self->head->next=litem_556;
    }
    else {
        litem_557=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value131=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_557->prev=self->tail;
        litem_557->next=((void*)0);
        litem_557->item=item;
        self->tail->next=litem_557;
        self->tail=litem_557;
    }
    self->len++;
    __result_obj__162 = self;
    return __result_obj__162;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_558;
struct list_item$1long$* prev_it_559;
    it_558=self->head;
    while(    it_558!=((void*)0)    ) {
        prev_it_559=it_558;
        it_558=it_558->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_559, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value128 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1long$* __result_obj__164;
    __result_obj__164 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value132=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value132, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__164;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_560;
struct list$1float$* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_560=0    ;    i_560<num_value    ;    i_560++    ){
        list$1float$_push_back(self,values[i_560]);
    }
    __result_obj__166 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value134 = (void*)0;
struct list_item$1float$* litem_561;
void* __right_value135 = (void*)0;
struct list_item$1float$* litem_562;
void* __right_value136 = (void*)0;
struct list_item$1float$* litem_563;
struct list$1float$* __result_obj__165;
    if(    self->len==0    ) {
        litem_561=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value134=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_561->prev=((void*)0);
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail=litem_561;
        self->head=litem_561;
    }
    else if(    self->len==1    ) {
        litem_562=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value135=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_562->prev=self->head;
        litem_562->next=((void*)0);
        litem_562->item=item;
        self->tail=litem_562;
        self->head->next=litem_562;
    }
    else {
        litem_563=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value136=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_563->prev=self->tail;
        litem_563->next=((void*)0);
        litem_563->item=item;
        self->tail->next=litem_563;
        self->tail=litem_563;
    }
    self->len++;
    __result_obj__165 = self;
    return __result_obj__165;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_564;
struct list_item$1float$* prev_it_565;
    it_564=self->head;
    while(    it_564!=((void*)0)    ) {
        prev_it_565=it_564;
        it_564=it_564->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_565, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value133 = (void*)0;
void* __right_value137 = (void*)0;
struct list$1float$* __result_obj__167;
    __result_obj__167 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value137=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value137, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_566;
struct list$1double$* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_566=0    ;    i_566<num_value    ;    i_566++    ){
        list$1double$_push_back(self,values[i_566]);
    }
    __result_obj__169 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value139 = (void*)0;
struct list_item$1double$* litem_567;
void* __right_value140 = (void*)0;
struct list_item$1double$* litem_568;
void* __right_value141 = (void*)0;
struct list_item$1double$* litem_569;
struct list$1double$* __result_obj__168;
    if(    self->len==0    ) {
        litem_567=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value139=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_567->prev=((void*)0);
        litem_567->next=((void*)0);
        litem_567->item=item;
        self->tail=litem_567;
        self->head=litem_567;
    }
    else if(    self->len==1    ) {
        litem_568=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value140=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_568->prev=self->head;
        litem_568->next=((void*)0);
        litem_568->item=item;
        self->tail=litem_568;
        self->head->next=litem_568;
    }
    else {
        litem_569=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value141=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_569->prev=self->tail;
        litem_569->next=((void*)0);
        litem_569->item=item;
        self->tail->next=litem_569;
        self->tail=litem_569;
    }
    self->len++;
    __result_obj__168 = self;
    return __result_obj__168;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_570;
struct list_item$1double$* prev_it_571;
    it_570=self->head;
    while(    it_570!=((void*)0)    ) {
        prev_it_571=it_570;
        it_570=it_570->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_571, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value138 = (void*)0;
void* __right_value142 = (void*)0;
struct list$1double$* __result_obj__170;
    __result_obj__170 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value142=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value142, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__170;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value143 = (void*)0;
char* __result_obj__171;
int len_572;
void* __right_value144 = (void*)0;
char* result_573;
char* __result_obj__172;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    len_572=strlen(self)+strlen(right);
    result_573=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_572+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_573,self,len_572+1);
    strncat(result_573,right,len_572+1);
    __result_obj__172 = (char*)come_increment_ref_count(result_573);
    (result_573 = come_decrement_ref_count(result_573, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* string_operator_add(char* self, char* right){
void* __right_value145 = (void*)0;
char* __result_obj__173;
int len_574;
void* __right_value146 = (void*)0;
char* result_575;
char* __result_obj__174;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    len_574=strlen(self)+strlen(right);
    result_575=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_574+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_575,self,len_574+1);
    strncat(result_575,right,len_574+1);
    __result_obj__174 = (char*)come_increment_ref_count(result_575);
    (result_575 = come_decrement_ref_count(result_575, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* charp_operator_mult(char* self, int right){
void* __right_value147 = (void*)0;
char* __result_obj__175;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct buffer* buf_576;
int i_577;
void* __right_value150 = (void*)0;
char* __result_obj__176;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    buf_576=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_577=0    ;    i_577<right    ;    i_577++    ){
        buffer_append_str(buf_576,self);
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value150=buffer_to_string(buf_576))));
    come_call_finalizer(buffer_finalize, buf_576, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* string_operator_mult(char* self, int right){
void* __right_value151 = (void*)0;
char* __result_obj__177;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct buffer* buf_578;
int i_579;
void* __right_value154 = (void*)0;
char* __result_obj__178;
    if(    self==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    buf_578=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_579=0    ;    i_579<right    ;    i_579++    ){
        buffer_append_str(buf_578,self);
    }
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value154=buffer_to_string(buf_578))));
    come_call_finalizer(buffer_finalize, buf_578, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_580;
int i_581;
    result_580=(_Bool)0;
    for(    i_581=0    ;    i_581<len    ;    i_581++    ){
        if(        strncmp(self[i_581],str,strlen(self[i_581]))==0        ) {
            result_580=(_Bool)1;
            break;
        }
    }
    return result_580;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_582;
char* p_583;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_582=0;
    p_583=value;
    while(    *p_583    ) {
        result_582+=(*p_583);
        p_583++;
    }
    return result_582;
}

unsigned int string_get_hash_key(char* value){
int result_584;
char* p_585;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_584=0;
    p_585=value;
    while(    *p_585    ) {
        result_584+=(*p_585);
        p_585++;
    }
    return result_584;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xisalpha(char c){
_Bool result_586;
    result_586=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_586;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_587;
    result_587=(c>=32&&c<=126);
    return result_587;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value155 = (void*)0;
char* __result_obj__179;
int len_588;
void* __right_value156 = (void*)0;
char* result_589;
int i_590;
char* __result_obj__180;
    if(    str==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(""))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    len_588=strlen(str);
    result_589=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_588+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_590=0    ;    i_590<len_588    ;    i_590++    ){
        result_589[i_590]=str[len_588-i_590-1];
    }
    result_589[len_588]=0;
    __result_obj__180 = (char*)come_increment_ref_count(result_589);
    (result_589 = come_decrement_ref_count(result_589, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value157 = (void*)0;
char* __result_obj__181;
int len_591;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
char* __result_obj__182;
void* __right_value160 = (void*)0;
char* __result_obj__183;
void* __right_value161 = (void*)0;
char* __result_obj__184;
void* __right_value162 = (void*)0;
char* result_592;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(""))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    len_591=strlen(str);
    if(    head<0    ) {
        head+=len_591;
    }
    if(    tail<0    ) {
        tail+=len_591+1;
    }
    if(    head>tail    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value159=charp_reverse(((char*)(__right_value158=charp_substring(str,tail,head)))))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_591    ) {
        tail=len_591;
    }
    if(    head==tail    ) {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string(""))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    if(    tail-head+1<1    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string(""))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    result_592=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_592,str+head,tail-head);
    result_592[tail-head]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_592);
    (result_592 = come_decrement_ref_count(result_592, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value163 = (void*)0;
char* __result_obj__186;
int len_593;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
char* __result_obj__187;
void* __right_value166 = (void*)0;
char* __result_obj__188;
void* __right_value167 = (void*)0;
char* __result_obj__189;
void* __right_value168 = (void*)0;
char* result_594;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(""))));
        (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_593=strlen(str);
    if(    head<0    ) {
        head+=len_593;
    }
    if(    tail<0    ) {
        tail+=len_593+1;
    }
    if(    head>tail    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value165=charp_reverse(((char*)(__right_value164=charp_substring(str,tail,head)))))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_593    ) {
        tail=len_593;
    }
    if(    head==tail    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    if(    tail-head+1<1    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    result_594=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_594,str+head,tail-head);
    result_594[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_594);
    (result_594 = come_decrement_ref_count(result_594, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value169 = (void*)0;
char* __result_obj__191;
int len_595;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
char* __result_obj__192;
void* __right_value172 = (void*)0;
char* __result_obj__193;
void* __right_value173 = (void*)0;
char* __result_obj__194;
void* __right_value174 = (void*)0;
char* result_596;
char* __result_obj__195;
    if(    str==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    len_595=strlen(str);
    if(    head<0    ) {
        head+=len_595;
    }
    if(    tail<0    ) {
        tail+=len_595+1;
    }
    if(    head>tail    ) {
        __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value171=charp_reverse(((char*)(__right_value170=charp_substring(str,tail,head)))))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__192;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_595    ) {
        tail=len_595;
    }
    if(    head==tail    ) {
        __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__193;
    }
    if(    tail-head+1<1    ) {
        __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__194;
    }
    result_596=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_596,str+head,tail-head);
    result_596[tail-head]=0;
    __result_obj__195 = (char*)come_increment_ref_count(result_596);
    (result_596 = come_decrement_ref_count(result_596, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* xsprintf(char* msg, ...){
void* __right_value175 = (void*)0;
char* __result_obj__196;
va_list args_597;
char* result_598;
int len_599;
void* __right_value176 = (void*)0;
char* __result_obj__197;
void* __right_value177 = (void*)0;
char* result2_600;
char* __result_obj__198;
result_598 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(""))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    __builtin_va_start(args_597,msg);
    len_599=vasprintf(&result_598,msg,args_597);
    __builtin_va_end(args_597);
    if(    len_599<0    ) {
        __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__197;
    }
    result2_600=(char*)come_increment_ref_count(__builtin_string(result_598));
    free(result_598);
    __result_obj__198 = (char*)come_increment_ref_count(result2_600);
    (result2_600 = come_decrement_ref_count(result2_600, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__198;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value178 = (void*)0;
char* __result_obj__199;
int len_601;
void* __right_value179 = (void*)0;
char* __result_obj__200;
void* __right_value180 = (void*)0;
char* __result_obj__201;
void* __right_value181 = (void*)0;
char* result_602;
char* __result_obj__202;
    if(    str==((void*)0)    ) {
        __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__199;
    }
    len_601=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(str))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__200;
    }
    if(    head<0    ) {
        head+=len_601;
    }
    if(    tail<0    ) {
        tail+=len_601+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(str))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__201;
    }
    if(    tail>=len_601    ) {
        tail=len_601;
    }
    result_602=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_601-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_602,str,head);
    memcpy(result_602+head,str+tail,len_601-tail);
    result_602[len_601-(tail-head)]=0;
    __result_obj__202 = (char*)come_increment_ref_count(result_602);
    (result_602 = come_decrement_ref_count(result_602, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__202;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__203;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__203 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__203;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_603;
struct list_item$1char$ph* prev_it_604;
    it_603=self->head;
    while(    it_603!=((void*)0)    ) {
        prev_it_604=it_603;
        it_603=it_603->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_604, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value188 = (void*)0;
struct list_item$1char$ph* litem_608;
char* __dec_obj25;
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_609;
char* __dec_obj26;
void* __right_value190 = (void*)0;
struct list_item$1char$ph* litem_610;
char* __dec_obj27;
struct list$1char$ph* __result_obj__205;
    if(    self->len==0    ) {
        litem_608=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value188=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_608->prev=((void*)0);
        litem_608->next=((void*)0);
        __dec_obj25=litem_608->item,
        litem_608->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_608;
        self->head=litem_608;
    }
    else if(    self->len==1    ) {
        litem_609=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_609->prev=self->head;
        litem_609->next=((void*)0);
        __dec_obj26=litem_609->item,
        litem_609->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_609;
        self->head->next=litem_609;
    }
    else {
        litem_610=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value190=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_610->prev=self->tail;
        litem_610->next=((void*)0);
        __dec_obj27=litem_610->item,
        litem_610->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_610;
        self->tail=litem_610;
    }
    self->len++;
    __result_obj__205 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__205;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct list$1char$ph* __result_obj__204;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct list$1char$ph* result_605;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct buffer* str_606;
int i_607;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct list$1char$ph* __result_obj__206;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value183=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value183, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__204;
    }
    result_605=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_606=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_607=0    ;    i_607<charp_length(self)    ;    i_607++    ){
        if(        self[i_607]==c        ) {
            list$1char$ph_push_back(result_605,(char*)come_increment_ref_count(__builtin_string(str_606->buf)));
            buffer_reset(str_606);
        }
        else {
            buffer_append_char(str_606,self[i_607]);
        }
    }
    if(    buffer_length(str_606)!=0    ) {
        list$1char$ph_push_back(result_605,(char*)come_increment_ref_count(__builtin_string(str_606->buf)));
    }
    __result_obj__206 = (struct list$1char$ph*)come_increment_ref_count(result_605);
    come_call_finalizer(list$1char$ph$p_finalize, result_605, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_606, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__206;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value193 = (void*)0;
char* __result_obj__207;
    __result_obj__207 = (char*)come_increment_ref_count(((char*)(__right_value193=xsprintf(msg,self))));
    (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__207;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value194 = (void*)0;
char* __result_obj__208;
    __result_obj__208 = (char*)come_increment_ref_count(((char*)(__right_value194=xsprintf(msg,self))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__208;
}

char* charp_printable(char* str){
int len_611;
void* __right_value195 = (void*)0;
char* result_612;
int n_613;
int i_614;
char c_615;
char* __result_obj__209;
    len_611=charp_length(str);
    result_612=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_611*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_613=0;
    for(    i_614=0    ;    i_614<len_611    ;    i_614++    ){
        c_615=str[i_614];
        if(        (c_615>=0&&c_615<32)||c_615==127        ) {
            result_612[n_613++]=94;
            result_612[n_613++]=c_615+65-1;
        }
        else {
            result_612[n_613++]=c_615;
        }
    }
    result_612[n_613]=0;
    __result_obj__209 = (char*)come_increment_ref_count(result_612);
    (result_612 = come_decrement_ref_count(result_612, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__209;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value196 = (void*)0;
char* __result_obj__210;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct buffer* result_616;
char* p_617;
char* p2_618;
void* __right_value199 = (void*)0;
char* __result_obj__211;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__210 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string(self))));
        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__210;
    }
    result_616=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_617=self;
    while(    (_Bool)1    ) {
        p2_618=strstr(p_617,str);
        if(        p2_618==((void*)0)        ) {
            p2_618=p_617;
            while(            *p2_618            ) {
                p2_618++;
            }
            buffer_append(result_616,p_617,p2_618-p_617);
            break;
        }
        buffer_append(result_616,p_617,p2_618-p_617);
        buffer_append_str(result_616,replace);
        p_617=p2_618+strlen(str);
    }
    __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value199=buffer_to_string(result_616))));
    come_call_finalizer(buffer_finalize, result_616, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__211;
}

char* xbasename(char* path){
void* __right_value200 = (void*)0;
char* __result_obj__212;
char* p_619;
void* __right_value201 = (void*)0;
char* __result_obj__213;
void* __right_value202 = (void*)0;
char* __result_obj__214;
void* __right_value203 = (void*)0;
char* __result_obj__215;
    if(    path==((void*)0)    ) {
        __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value200=__builtin_string(""))));
        (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__212;
    }
    p_619=path+strlen(path);
    while(    p_619>=path    ) {
        if(        *p_619==47        ) {
            break;
        }
        else {
            p_619--;
        }
    }
    if(    p_619<path    ) {
        __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string(path))));
        (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__213;
    }
    else {
        __result_obj__214 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(p_619+1))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__214;
    }
    __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(""))));
    (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__215;
}

char* xnoextname(char* path){
void* __right_value204 = (void*)0;
char* __result_obj__216;
void* __right_value205 = (void*)0;
char* path2_620;
char* p_621;
void* __right_value206 = (void*)0;
char* __result_obj__217;
void* __right_value207 = (void*)0;
char* __result_obj__218;
void* __right_value208 = (void*)0;
char* __result_obj__219;
    if(    path==((void*)0)    ) {
        __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string(""))));
        (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__216;
    }
    path2_620=(char*)come_increment_ref_count(xbasename(path));
    p_621=path2_620+strlen(path2_620);
    while(    p_621>=path2_620    ) {
        if(        *p_621==46        ) {
            break;
        }
        else {
            p_621--;
        }
    }
    if(    p_621<path2_620    ) {
        __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value206=__builtin_string(path2_620))));
        (path2_620 = come_decrement_ref_count(path2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__217;
    }
    else {
        __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value207=charp_substring(path2_620,0,p_621-path2_620))));
        (path2_620 = come_decrement_ref_count(path2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__218;
    }
    __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value208=__builtin_string(""))));
    (path2_620 = come_decrement_ref_count(path2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__219;
}

char* xextname(char* path){
void* __right_value209 = (void*)0;
char* __result_obj__220;
char* p_622;
void* __right_value210 = (void*)0;
char* __result_obj__221;
void* __right_value211 = (void*)0;
char* __result_obj__222;
void* __right_value212 = (void*)0;
char* __result_obj__223;
    if(    path==((void*)0)    ) {
        __result_obj__220 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(""))));
        (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__220;
    }
    p_622=path+strlen(path);
    while(    p_622>=path    ) {
        if(        *p_622==46        ) {
            break;
        }
        else {
            p_622--;
        }
    }
    if(    p_622<path    ) {
        __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value210=__builtin_string(path))));
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__221;
    }
    else {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(p_622+1))));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
    __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(""))));
    (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__223;
}

char* bool_to_string(_Bool self){
void* __right_value213 = (void*)0;
char* __result_obj__224;
void* __right_value214 = (void*)0;
char* __result_obj__225;
    if(    self    ) {
        __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value213=__builtin_string("true"))));
        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__224;
    }
    else {
        __result_obj__225 = (char*)come_increment_ref_count(((char*)(__right_value214=__builtin_string("false"))));
        (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__225;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value215 = (void*)0;
char* __result_obj__226;
void* __right_value216 = (void*)0;
char* __result_obj__227;
    if(    self    ) {
        __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value215=__builtin_string("true"))));
        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__226;
    }
    else {
        __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value216=__builtin_string("false"))));
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__227;
    }
}

char* char_to_string(char self){
void* __right_value217 = (void*)0;
char* __result_obj__228;
    __result_obj__228 = (char*)come_increment_ref_count(((char*)(__right_value217=xsprintf("%c",self))));
    (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__228;
}

char* short_to_string(short self){
void* __right_value218 = (void*)0;
char* __result_obj__229;
    __result_obj__229 = (char*)come_increment_ref_count(((char*)(__right_value218=xsprintf("%d",self))));
    (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__229;
}

char* int_to_string(int self){
void* __right_value219 = (void*)0;
char* __result_obj__230;
    __result_obj__230 = (char*)come_increment_ref_count(((char*)(__right_value219=xsprintf("%d",self))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__230;
}

char* long_to_string(long self){
void* __right_value220 = (void*)0;
char* __result_obj__231;
    __result_obj__231 = (char*)come_increment_ref_count(((char*)(__right_value220=xsprintf("%ld",self))));
    (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__231;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value221 = (void*)0;
char* __result_obj__232;
    __result_obj__232 = (char*)come_increment_ref_count(((char*)(__right_value221=xsprintf("%ld",self))));
    (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__232;
}

char* float_to_string(float self){
void* __right_value222 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value222=xsprintf("%f",self))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__233;
}

char* double_to_string(double self){
void* __right_value223 = (void*)0;
char* __result_obj__234;
    __result_obj__234 = (char*)come_increment_ref_count(((char*)(__right_value223=xsprintf("%lf",self))));
    (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__234;
}

char* string_to_string(char* self){
void* __right_value224 = (void*)0;
char* __result_obj__235;
void* __right_value225 = (void*)0;
char* __result_obj__236;
    if(    self==((void*)0)    ) {
        __result_obj__235 = (char*)come_increment_ref_count(((char*)(__right_value224=__builtin_string(""))));
        (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__235;
    }
    __result_obj__236 = (char*)come_increment_ref_count(((char*)(__right_value225=__builtin_string(self))));
    (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__236 = come_decrement_ref_count(__result_obj__236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__236;
}

char* charp_to_string(char* self){
void* __right_value226 = (void*)0;
char* __result_obj__237;
void* __right_value227 = (void*)0;
char* __result_obj__238;
    if(    self==((void*)0)    ) {
        __result_obj__237 = (char*)come_increment_ref_count(((char*)(__right_value226=__builtin_string(""))));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__237;
    }
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value227=__builtin_string(self))));
    (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__238;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

char* charp_puts(char* self){
void* __right_value228 = (void*)0;
char* __result_obj__239;
void* __right_value229 = (void*)0;
char* __result_obj__240;
    if(    self==((void*)0)    ) {
        __result_obj__239 = (char*)come_increment_ref_count(((char*)(__right_value228=__builtin_string(""))));
        (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__239;
    }
    puts(self);
    __result_obj__240 = (char*)come_increment_ref_count(((char*)(__right_value229=__builtin_string(self))));
    (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__240 = come_decrement_ref_count(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__240;
}

char* charp_print(char* self){
void* __right_value230 = (void*)0;
char* __result_obj__241;
void* __right_value231 = (void*)0;
char* __result_obj__242;
    if(    self==((void*)0)    ) {
        __result_obj__241 = (char*)come_increment_ref_count(((char*)(__right_value230=__builtin_string(""))));
        (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__241;
    }
    printf("%s",self);
    __result_obj__242 = (char*)come_increment_ref_count(((char*)(__right_value231=__builtin_string(self))));
    (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__242;
}

char* charp_printf(char* self, ...){
void* __right_value232 = (void*)0;
char* __result_obj__243;
char* msg2_623;
va_list args_624;
void* __right_value233 = (void*)0;
char* __result_obj__244;
msg2_623 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__243 = (char*)come_increment_ref_count(((char*)(__right_value232=__builtin_string(""))));
        (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__243;
    }
    __builtin_va_start(args_624,self);
    vasprintf(&msg2_623,self,args_624);
    __builtin_va_end(args_624);
    printf("%s",msg2_623);
    free(msg2_623);
    __result_obj__244 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(self))));
    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__244;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_625;
    for(    i_625=0    ;    i_625<self    ;    i_625++    ){
        block(parent,i_625);
    }
}

