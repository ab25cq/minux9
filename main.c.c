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
    int used;
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
    int read_pipe;
    int write_pipe;
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
  0x22, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x7f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x66, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0x23, 0x00,
  0xf4, 0xfe, 0xa3, 0x00, 0x04, 0xfe, 0x05, 0x45, 0x93, 0x07, 0x04, 0xfe,
  0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x34, 0xa4, 0xfe, 0x01, 0x00, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0xaa, 0x87,
  0x23, 0x38, 0xb4, 0xfc, 0x23, 0x2e, 0xf4, 0xfc, 0x05, 0x45, 0x97, 0x07,
  0x00, 0x00, 0x93, 0x87, 0xa7, 0x02, 0xbe, 0x85, 0x15, 0x46, 0x93, 0x08,
  0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x05, 0x45,
  0x93, 0x08, 0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x41, 0x42, 0x43, 0x0d, 0x0a, 0x00, 0x47, 0x43,
  0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66,
  0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41,
  0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f,
  0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32,
  0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31,
  0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73,
  0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x60, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x58, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x66, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x6a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x66, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x68, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x86, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x66, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x92, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x22, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x97, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x66, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa6, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x66, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xad, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x68, 0x11, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x6d, 0x73, 0x68, 0x2e, 0x63, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x70, 0x75, 0x74, 0x63,
  0x68, 0x61, 0x72, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c,
  0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f,
  0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f,
  0x5f, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f,
  0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72,
  0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54,
  0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65,
  0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e,
  0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61,
  0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00,
  0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69,
  0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x12, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int msh_elf_len=1624;
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
    struct file* file_table[16];
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
int fs_close(long fd, int force_pipe_close);
int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);
void pipe_open(int* fd1, int* fd2);
int piperead(int fd, char* addr, int n);
int pipewrite(int fd, char* addr, int n);
void fs_dup2(int oldfd, int newfd);
void fs_init(struct file** file_table);
void fs_dup_table(struct file** result, struct file** orig);
int fs_size(int fd);
void fs_exit(struct file** file_table);
void free_fs_table(struct file** file_table);
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
static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position);
static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item);
unsigned long  long* uvmcreate();
unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz);
static void free_pagetable(unsigned long  long* pagetable, int level);
struct file** get_current_file_table();
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
void remove_kernel_state(int active_proc);
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
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX321, unsigned long  int anonymous_var_nameX322, unsigned long  int anonymous_var_nameX323, unsigned long  long anonymous_var_nameX324, unsigned long  long anonymous_var_nameX325);
void timerinit();
struct proc* get_current_proc();
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
unsigned long  long x_104;
memset(&x_104, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_104));
    return x_104;
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
unsigned long  long x_282;
memset(&x_282, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_282));
    return x_282;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_283;
memset(&sp_val_283, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出オペランド %0 に
        : "=r"(sp_val_283): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_283;
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
    memset(pa,0,4096);
    r_14=(struct run*)kmem.freelist;
    while(    r_14    ) {
        if(        r_14==pa        ) {
            printf("kfree ALREADY %p\n",pa);
            return;
        }
        r_14=r_14->next;
    }
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
            printf("mappage kalloc %p\n",pagetable);
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
unsigned long  long addr_29;
int i_30;
unsigned long  long va_31;
unsigned long  long pa_32;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_29=2147483648UL    ;    addr_29<2164260864UL    ;    addr_29+=4096    ){
        mappages(kernel_pagetable,addr_29,4096,addr_29,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_30=0    ;    i_30<8    ;    i_30++    ){
        va_31=268439552UL+i_30*4096UL;
        pa_32=va_31;
        mappages(kernel_pagetable,va_31,4096UL,pa_32,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_33;
void* __result_obj__7;
void* __result_obj__8;
void* __result_obj__9;
unsigned long  long pa_34;
void* __result_obj__10;
    pte_33=walk(pagetable,va,0);
    if(    pte_33==0    ) {
        __result_obj__7 = (void*)0;
        return __result_obj__7;
    }
    if(    (*pte_33&(1L<<0))==0    ) {
        __result_obj__8 = (void*)0;
        return __result_obj__8;
    }
    if(    (*pte_33&(1L<<4))==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    pa_34=(((*pte_33)>>10)<<12);
    __result_obj__10 = (void*)(pa_34+(va&(4096-1)));
    return __result_obj__10;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_35;
unsigned long  long off_36;
char* pa_37;
unsigned long  long n_38;
pa_37 = (void*)0;
    va0_35=(((dstva))&~(4096-1));
    off_36=dstva-va0_35;
    while(    len>0    ) {
        if(        (pa_37=walkaddr(pagetable,va0_35))==0        ) {
            return -1;
        }
        n_38=4096-off_36;
        if(        n_38>len        ) {
            n_38=len;
        }
        memcpy(pa_37+off_36,src,n_38);
        len-=n_38;
        src+=n_38;
        va0_35+=4096;
        off_36=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_39;
unsigned long  long va0_40;
unsigned long  long pa0_41;
memset(&n_39, 0, sizeof(unsigned long  long));
memset(&va0_40, 0, sizeof(unsigned long  long));
memset(&pa0_41, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_40=(((srcva))&~(4096-1));
        pa0_41=(unsigned long  long)walkaddr(pagetable,va0_40);
        if(        pa0_41==0        ) {
            return -1;
        }
        n_39=4096-(srcva-va0_40);
        if(        n_39>len        ) {
            n_39=len;
        }
        memmove(dst,(void*)(pa0_41+(srcva-va0_40)),n_39);
        len-=n_39;
        dst+=n_39;
        srcva=va0_40+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_42;
unsigned long  long va0_43;
unsigned long  long pa0_44;
int got_null_45;
char* dst2_46;
char* p_47;
memset(&n_42, 0, sizeof(unsigned long  long));
memset(&va0_43, 0, sizeof(unsigned long  long));
memset(&pa0_44, 0, sizeof(unsigned long  long));
    got_null_45=0;
    dst2_46=dst;
    while(    got_null_45==0&&max>0    ) {
        va0_43=(((srcva))&~(4096-1));
        pa0_44=(unsigned long  long)walkaddr(pagetable,va0_43);
        if(        pa0_44==0        ) {
            return -1;
        }
        n_42=4096-(srcva-va0_43);
        if(        n_42>max        ) {
            n_42=max;
        }
        p_47=(char*)(pa0_44+(srcva-va0_43));
        while(        n_42>0        ) {
            if(            *p_47==0            ) {
                *dst2_46=0;
                got_null_45=dst2_46-dst;
                break;
            }
            else {
                *dst2_46=*p_47;
            }
            --n_42;
            --max;
            p_47++;
            dst2_46++;
        }
        srcva=va0_43+4096;
    }
    if(    got_null_45    ) {
        dst2_46[got_null_45]=0;
        return got_null_45;
    }
    else {
        return -1;
    }
}

void setting_user_pagetable(struct proc* proc, unsigned long  long* pagetable){
int i_48;
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    for(    i_48=0    ;    i_48<32    ;    i_48++    ){
        mappages(pagetable,(unsigned long  long)COMMON+i_48*4096,4096,(unsigned long  long)COMMON+i_48*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* elf_buf, int fork_flag, int exec_flag){
void* __right_value0 = (void*)0;
struct proc* result_49;
unsigned long  long* pagetable_50;
struct elfhdr* eh_51;
struct proghdr* ph_52;
unsigned long  long va_53;
unsigned long  long max_va_end_54;
int i_55;
void* pa_56;
unsigned long  long gp_57;
struct elfshdr* sh_58;
struct elfsym* symtab_60;
int symtab_size_62;
int i_63;
int i_64;
void* __right_value1 = (void*)0;
struct proc* parent_65;
unsigned long  long parent_current_72;
unsigned long  long parent_stack_top_73;
unsigned long  long stack_base_74;
int i_75;
char* pa_76;
char* src_77;
void* __right_value2 = (void*)0;
struct proc* parent_78;
unsigned long  long stack_base_79;
int i_80;
char* pa_81;
    puts("ALLOC PROG START");
    result_49=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 802, "struct proc*"));
    result_49->program=elf_buf;
    pagetable_50=(unsigned long  long*)kalloc();
    memset(pagetable_50,0,4096);
    setting_user_pagetable(result_49,pagetable_50);
    result_49->pagetable=pagetable_50;
    eh_51=(struct elfhdr*)elf_buf;
    if(    eh_51->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic: not elf");
        }
    }
    ph_52=(struct proghdr*)(elf_buf+eh_51->phoff);
    va_53=0;
    max_va_end_54=0;
    for(    i_55=0    ;    i_55<eh_51->phnum    ;    i_55++,ph_52++    ){
        if(        ph_52->type!=1        ) {
            continue;
        }
        if(        ph_52->vaddr+ph_52->memsz>max_va_end_54        ) {
            max_va_end_54=ph_52->vaddr+ph_52->memsz;
        }
        for(        va_53=(((ph_52->vaddr))&~(4096-1))        ;        va_53<ph_52->vaddr+ph_52->memsz        ;        va_53+=4096        ){
            pa_56=kalloc();
            if(            !pa_56            ) {
                panic("kalloc");
            }
            memset(pa_56,0,4096);
            mappages(result_49->pagetable,va_53,4096,(unsigned long  long)pa_56,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
        }
        if(        copyout(result_49->pagetable,ph_52->vaddr,elf_buf+ph_52->off,ph_52->filesz)<0        ) {
            panic("copyout");
        }
    }
    result_49->sz=(((max_va_end_54)+4096-1)&~(4096-1));
    gp_57=0;
    sh_58=(struct elfshdr*)(elf_buf+eh_51->shoff);
    const char* shstrtab_59=elf_buf+sh_58[eh_51->shstrndx].offset;
    symtab_60=(void*)0;
    const char* strtab_61=(void*)0;
    symtab_size_62=0;
    for(    i_63=0    ;    i_63<eh_51->shnum    ;    i_63++    ){
        if(        strcmp(shstrtab_59+sh_58[i_63].name,".symtab")==0        ) {
            symtab_60=(struct elfsym*)(elf_buf+sh_58[i_63].offset);
            symtab_size_62=sh_58[i_63].size;
        }
        if(        strcmp(shstrtab_59+sh_58[i_63].name,".strtab")==0        ) {
            strtab_61=elf_buf+sh_58[i_63].offset;
        }
    }
    if(    symtab_60&&strtab_61    ) {
        for(        i_64=0        ;        i_64<symtab_size_62/sizeof(struct elfsym)        ;        i_64++        ){
            if(            strcmp(strtab_61+symtab_60[i_64].name,"__global_pointer$")==0            ) {
                gp_57=symtab_60[i_64].value;
                break;
            }
        }
    }
    if(    gp_57==0    ) {
    }
    if(    fork_flag    ) {
        parent_65=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_72=parent_65->context.sp;
        parent_stack_top_73=(unsigned long  long)parent_65->stack_top;
        stack_base_74=1073741824UL-16*4096;
        for(        i_75=0        ;        i_75<16        ;        i_75++        ){
            pa_76=kalloc();
            src_77=walkaddr(parent_65->pagetable,parent_stack_top_73+i_75*4096);
            if(            src_77            ) {
                memmove(pa_76,(void*)src_77,4096);
            }
            mappages(result_49->pagetable,stack_base_74+i_75*4096,4096,(unsigned long  long)pa_76,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_49->stack_top=(char*)stack_base_74;
        result_49->context.sp=stack_base_74+16*4096;
        result_49->context.gp=parent_65->context.gp;
        fs_dup_table(result_49->file_table,parent_65->file_table);
    }
    else {
        parent_78=((struct proc*)(__right_value2=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value2, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        stack_base_79=1073741824UL-16*4096;
        for(        i_80=0        ;        i_80<16        ;        i_80++        ){
            pa_81=kalloc();
            mappages(result_49->pagetable,stack_base_79+i_80*4096,4096,(unsigned long  long)pa_81,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_49->stack_top=(char*)stack_base_79;
        result_49->context.sp=stack_base_79+16*4096;
        result_49->context.gp=gp_57;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            memcpy(result_49->file_table,parent_78->file_table,sizeof(struct file*)*16);
        }
        else {
            fs_init(result_49->file_table);
        }
    }
    result_49->context.mepc=eh_51->entry;
    puts("ALLOC PROG END");
    if(    exec_flag    ) {
        list$1proc$ph_replace(gProc,gActiveProc,(struct proc*)come_increment_ref_count(result_49));
        user_satp=((8L<<60)|(((unsigned long  long)result_49->pagetable)>>12));
        user_sp=result_49->context.sp;
    }
    else {
        list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_49));
    }
    come_call_finalizer(proc_finalize, result_49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_66;
int i_67;
struct proc* __result_obj__11;
struct proc* default_value_68;
struct proc* __result_obj__12;
default_value_68 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_66=self->head;
    i_67=0;
    while(    it_66!=((void*)0)    ) {
        if(        position==i_67        ) {
            __result_obj__11 = (struct proc*)come_increment_ref_count(it_66->item);
            come_call_finalizer(proc_finalize, __result_obj__11, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__11;
        }
        it_66=it_66->next;
        i_67++;
    }
    memset(&default_value_68,0,sizeof(struct proc*));
    __result_obj__12 = (struct proc*)come_increment_ref_count(default_value_68);
    come_call_finalizer(proc_finalize, default_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__12, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__12;
}

static void proc_finalize(struct proc* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_69;
int i_70;
struct proc* __result_obj__13;
struct proc* default_value_71;
struct proc* __result_obj__14;
default_value_71 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_69=self->head;
    i_70=0;
    while(    it_69!=((void*)0)    ) {
        if(        position==i_70        ) {
            __result_obj__13 = (struct proc*)come_increment_ref_count(it_69->item);
            come_call_finalizer(proc_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
        it_69=it_69->next;
        i_70++;
    }
    memset(&default_value_71,0,sizeof(struct proc*));
    __result_obj__14 = (struct proc*)come_increment_ref_count(default_value_71);
    come_call_finalizer(proc_finalize, default_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item){
int len_82;
int i_83;
struct proc* default_value_84;
struct list$1proc$ph* __result_obj__16;
struct list_item$1proc$ph* it_88;
int i_89;
struct proc* __dec_obj4;
struct list$1proc$ph* __result_obj__17;
default_value_84 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_82=self->len;
        for(        i_83=0        ;        i_83<position-len_82        ;        i_83++        ){
            memset(&default_value_84,0,sizeof(struct proc*));
            list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(default_value_84));
            come_call_finalizer(proc_finalize, default_value_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(item));
        __result_obj__16 = self;
        come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__16;
    }
    it_88=self->head;
    i_89=0;
    while(    it_88!=((void*)0)    ) {
        if(        position==i_89        ) {
            __dec_obj4=it_88->item,
            it_88->item=(struct proc*)come_increment_ref_count(item);
            come_call_finalizer(proc_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_88=it_88->next;
        i_89++;
    }
    __result_obj__17 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item){
void* __right_value3 = (void*)0;
struct list_item$1proc$ph* litem_85;
struct proc* __dec_obj1;
void* __right_value4 = (void*)0;
struct list_item$1proc$ph* litem_86;
struct proc* __dec_obj2;
void* __right_value5 = (void*)0;
struct list_item$1proc$ph* litem_87;
struct proc* __dec_obj3;
struct list$1proc$ph* __result_obj__15;
    if(    self->len==0    ) {
        litem_85=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value3=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1proc$ph*"))));
        litem_85->prev=((void*)0);
        litem_85->next=((void*)0);
        __dec_obj1=litem_85->item,
        litem_85->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_85;
        self->head=litem_85;
    }
    else if(    self->len==1    ) {
        litem_86=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value4=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1proc$ph*"))));
        litem_86->prev=self->head;
        litem_86->next=((void*)0);
        __dec_obj2=litem_86->item,
        litem_86->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_86;
        self->head->next=litem_86;
    }
    else {
        litem_87=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value5=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1proc$ph*"))));
        litem_87->prev=self->tail;
        litem_87->next=((void*)0);
        __dec_obj3=litem_87->item,
        litem_87->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_87;
        self->tail=litem_87;
    }
    self->len++;
    __result_obj__15 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value6 = (void*)0;
struct list_item$1proc$ph* litem_90;
struct proc* __dec_obj5;
void* __right_value7 = (void*)0;
struct list_item$1proc$ph* litem_91;
struct proc* __dec_obj6;
void* __right_value8 = (void*)0;
struct list_item$1proc$ph* litem_92;
struct proc* __dec_obj7;
struct list$1proc$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_90=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value6=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1045, "struct list_item$1proc$ph*"))));
        litem_90->prev=((void*)0);
        litem_90->next=((void*)0);
        __dec_obj5=litem_90->item,
        litem_90->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_90;
        self->head=litem_90;
    }
    else if(    self->len==1    ) {
        litem_91=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value7=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1055, "struct list_item$1proc$ph*"))));
        litem_91->prev=self->head;
        litem_91->next=((void*)0);
        __dec_obj6=litem_91->item,
        litem_91->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_91;
        self->head->next=litem_91;
    }
    else {
        litem_92=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value8=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1065, "struct list_item$1proc$ph*"))));
        litem_92->prev=self->tail;
        litem_92->next=((void*)0);
        __dec_obj7=litem_92->item,
        litem_92->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_92;
        self->tail=litem_92;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_93;
unsigned long  long* __result_obj__19;
unsigned long  long* __result_obj__20;
pagetable_93 = (void*)0;
    pagetable_93=(unsigned long  long*)kalloc();
    if(    pagetable_93==0    ) {
        __result_obj__19 = (unsigned long  long*)0;
        return __result_obj__19;
    }
    memset(pagetable_93,0,4096);
    __result_obj__20 = pagetable_93;
    return __result_obj__20;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__94;
unsigned long  long* __result_obj__21;
unsigned long  long addr_95;
unsigned long  long* pte_96;
unsigned long  long pa_97;
unsigned int flags_98;
char* mem_99;
unsigned long  long* __result_obj__22;
new__94 = (void*)0;
    new__94=uvmcreate();
    if(    new__94==0    ) {
        __result_obj__21 = (unsigned long  long*)0;
        return __result_obj__21;
    }
    for(    addr_95=0    ;    addr_95<sz    ;    addr_95+=4096    ){
        pte_96=walk(old,addr_95,0);
        if(        !pte_96||!(*pte_96&(1L<<0))        ) {
            continue;
        }
        pa_97=(((*pte_96)>>10)<<12);
        flags_98=((*pte_96)&1023);
        mem_99=kalloc();
        if(        mem_99==0        ) {
            panic("coypuvm");
        }
        memmove(mem_99,(char*)pa_97,4096);
        if(        mappages(new__94,addr_95,4096,((((unsigned long  long)mem_99)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_99);
            panic("copyuvm");
        }
    }
    __result_obj__22 = new__94;
    return __result_obj__22;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_100;
unsigned long  long pte_101;
unsigned long  long pa_102;
unsigned long  long* child_103;
    for(    i_100=0    ;    i_100<512    ;    i_100++    ){
        pte_101=pagetable[i_100];
        if(        !(pte_101&(1L<<0))        ) {
            continue;
        }
        pa_102=(((pte_101)>>10)<<12);
        if(        pte_101&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                printf("free_pagetable %p\n",pa_102);
                kfree((void*)pa_102);
            }
        }
        else if(        level>0        ) {
            child_103=(unsigned long  long*)pa_102;
            free_pagetable(child_103,level-1);
            kfree(child_103);
            printf("free_pagetable %p\n",child_103);
        }
    }
}

struct file** get_current_file_table(){
void* __right_value9 = (void*)0;
struct file** __result_obj__23;
    __result_obj__23 = ((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__23;
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
unsigned long  int x_105;
memset(&x_105, 0, sizeof(unsigned long  int));
    x_105=r_sie();
    x_105|=(1UL<<5);
    w_sie(x_105);
    x_105=r_sstatus();
    x_105|=(1UL<<1);
    w_sstatus(x_105);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_106;
    next_106=r_time()+10000UL;
    w_stimecmp(next_106);
}

void remove_kernel_state(int active_proc){
int index_107;
int i_108;
int i_109;
int current_index_110;
int next_index_111;
    if(    gKernelStateHead==gKernelStateTail    ) {
        return;
    }
    index_107=-1;
    for(    i_108=0    ;    i_108<16    ;    i_108++    ){
        if(        gKernelState[i_108].gYieldUserActiveProc==active_proc        ) {
            index_107=i_108;
            break;
        }
    }
    if(    index_107==-1    ) {
        return;
    }
    for(    i_109=index_107    ;    i_109<gNumKernelState-1    ;    i_109++    ){
        current_index_110=(gKernelStateHead+i_109)%16;
        next_index_111=(gKernelStateHead+i_109+1)%16;
        gKernelState[current_index_110]=gKernelState[next_index_111];
    }
    gKernelStateTail=(gKernelStateTail-1+16)%16;
    gNumKernelState--;
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
struct context_t* trapframe_112;
    gNumKernelState--;
    user_satp=gKernelState[gKernelStateHead].gYieldUserSatp;
    user_sp=gKernelState[gKernelStateHead].gYieldUserSP;
    gActiveProc=gKernelState[gKernelStateHead].gYieldUserActiveProc;
    trapframe_112=(struct context_t*)TRAPFRAME2;
    *trapframe_112=gKernelState[gKernelStateHead].gYieldContext;
    trapframe_112=(struct context_t*)TRAPFRAME;
    *trapframe_112=gKernelState[gKernelStateHead].gYieldReturnContext;
    memmove(yield_stack,gKernelState[gKernelStateHead].gYieldStack,(4096*16));
    gKernelStateHead=(gKernelStateHead+1)%16;
    yield_return();
}

void timer_handler(){
void* __right_value10 = (void*)0;
struct proc* p_113;
struct context_t* tf_114;
int old_active_proc_115;
void* __right_value11 = (void*)0;
struct proc* old_116;
void* __right_value12 = (void*)0;
_Bool _condtional_value_X1;
void* __right_value13 = (void*)0;
struct proc* new__117;
unsigned long  long a0_118;
    disable_timer_interrupts();
    p_113=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_114=(struct context_t*)TRAPFRAME;
    p_113->context=*tf_114;
    timer_reset();
    old_active_proc_115=gActiveProc;
    old_116=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    while(    (_condtional_value_X1=(gActiveProc<list$1proc$ph_length(gProc)&&((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->deleted)),    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0),
    _condtional_value_X1    ) {
        gActiveProc++;
    }
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    if(    gActiveProc==gKernelState[gKernelStateHead].gYieldUserActiveProc&&gNumKernelState>0    ) {
        kernel_yield_return();
    }
    new__117=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__117!=old_116&&new__117->zombie==0    ) {
        user_sp=new__117->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__117->pagetable)>>12));
        old_116->context=*(struct context_t*)TRAPFRAME;
        a0_118=new__117->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_118));
        swtch(&new__117->context);
    }
    else {
        gActiveProc=old_active_proc_115;
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
struct context_t* trapframe_119;
unsigned long  int arg0_120;
unsigned long  int arg1_121;
unsigned long  int arg2_122;
unsigned long  int arg3_123;
unsigned long  int arg4_124;
unsigned long  int arg5_125;
unsigned long  int arg6_126;
unsigned long  int arg_syscall_no_127;
int fd_128;
unsigned long  long user_va_130;
int len_131;
void* __right_value14 = (void*)0;
struct proc* p_132;
int ret_133;
int i_134;
    trapframe_119=(struct context_t*)TRAPFRAME;
    arg0_120=trapframe_119->a0;
    arg1_121=trapframe_119->a1;
    arg2_122=trapframe_119->a2;
    arg3_123=trapframe_119->a3;
    arg4_124=trapframe_119->a4;
    arg5_125=trapframe_119->a5;
    arg6_126=trapframe_119->a6;
    arg_syscall_no_127=trapframe_119->a7;
    fd_128=arg0_120;
    char kernel_buf_129[256];
    memset(&kernel_buf_129, 0, sizeof(char)    *(256)    );
    user_va_130=arg1_121;
    len_131=arg2_122;
    memset(kernel_buf_129,0,256);
    p_132=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_133=copyin(p_132->pagetable,kernel_buf_129,user_va_130,len_131);
    if(    ret_133<0    ) {
        panic("copyinstr");
    }
    if(    is_pipe(fd_128)    ) {
        pipewrite(fd_128,kernel_buf_129,len_131);
    }
    else if(    is_stdout(fd_128)    ) {
        for(        i_134=0        ;        i_134<len_131        ;        i_134++        ){
            putchar(kernel_buf_129[i_134]);
        }
    }
    else {
        return -1;
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_135;
unsigned long  int arg0_136;
unsigned long  int arg1_137;
unsigned long  int arg2_138;
unsigned long  int arg3_139;
unsigned long  int arg4_140;
unsigned long  int arg5_141;
unsigned long  int arg6_142;
unsigned long  int arg_syscall_no_143;
void* __right_value15 = (void*)0;
struct proc* p_144;
    trapframe_135=(struct context_t*)TRAPFRAME;
    arg0_136=trapframe_135->a0;
    arg1_137=trapframe_135->a1;
    arg2_138=trapframe_135->a2;
    arg3_139=trapframe_135->a3;
    arg4_140=trapframe_135->a4;
    arg5_141=trapframe_135->a5;
    arg6_142=trapframe_135->a6;
    arg_syscall_no_143=trapframe_135->a7;
    p_144=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    fs_exit(p_144->file_table);
    p_144->xstatus=arg0_136;
    p_144->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_145;
unsigned long  int arg0_146;
unsigned long  int arg1_147;
unsigned long  int arg2_148;
unsigned long  int arg3_149;
unsigned long  int arg4_150;
unsigned long  int arg5_151;
unsigned long  int arg6_152;
unsigned long  int arg_syscall_no_153;
int* status_va_154;
int exit_status_155;
int child_pid_156;
int n_157;
struct proc* zombie_proc_158;
int num_deleted_proc_159;
struct list$1proc$ph* o2_saved_160;
struct proc* it_163;
void* __right_value16 = (void*)0;
struct proc* p_168;
    trapframe_145=(struct context_t*)TRAPFRAME;
    arg0_146=trapframe_145->a0;
    arg1_147=trapframe_145->a1;
    arg2_148=trapframe_145->a2;
    arg3_149=trapframe_145->a3;
    arg4_150=trapframe_145->a4;
    arg5_151=trapframe_145->a5;
    arg6_152=trapframe_145->a6;
    arg_syscall_no_153=trapframe_145->a7;
    status_va_154=(int*)arg0_146;
    exit_status_155=0;
    child_pid_156=-1;
    while(    1    ) {
        n_157=0;
        zombie_proc_158=((void*)0);
        num_deleted_proc_159=0;
        for(        o2_saved_160=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_163=list$1proc$ph_begin((o2_saved_160))        ;        !list$1proc$ph_end((o2_saved_160))        ;        it_163=list$1proc$ph_next((o2_saved_160))        ){
            if(            it_163->deleted            ) {
                num_deleted_proc_159++;
            }
            else if(            it_163->zombie            ) {
                num_deleted_proc_159++;
                zombie_proc_158=it_163;
                child_pid_156=n_157;
                break;
            }
            n_157++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        zombie_proc_158        ) {
            exit_status_155=zombie_proc_158->xstatus;
            free_fs_table(zombie_proc_158->file_table);
            free_proc(zombie_proc_158);
            zombie_proc_158->deleted=1;
            remove_kernel_state(child_pid_156);
            break;
        }
        else {
            yield();
        }
    }
    p_168=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_168->pagetable,(unsigned long  long)status_va_154,(void*)&exit_status_155,sizeof(int))<0    ) {
        panic("wait: copyout failed");
    }
    return child_pid_156;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_161;
struct proc* __result_obj__24;
struct proc* __result_obj__25;
struct proc* result_162;
struct proc* __result_obj__26;
result_161 = (void*)0;
result_162 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_161,0,sizeof(struct proc*));
        __result_obj__24 = result_161;
        return __result_obj__24;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__25 = self->it->item;
        return __result_obj__25;
    }
    memset(&result_162,0,sizeof(struct proc*));
    __result_obj__26 = result_162;
    return __result_obj__26;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_164;
struct proc* __result_obj__27;
struct proc* __result_obj__28;
struct proc* result_165;
struct proc* __result_obj__29;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_164,0,sizeof(struct proc*));
        __result_obj__27 = result_164;
        return __result_obj__27;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_165,0,sizeof(struct proc*));
    __result_obj__29 = result_165;
    return __result_obj__29;
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_166;
struct list_item$1proc$ph* prev_it_167;
    it_166=self->head;
    while(    it_166!=((void*)0)    ) {
        prev_it_167=it_166;
        it_166=it_166->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_169;
unsigned long  int arg0_170;
unsigned long  int arg1_171;
unsigned long  int arg2_172;
unsigned long  int arg3_173;
unsigned long  int arg4_174;
unsigned long  int arg5_175;
unsigned long  int arg6_176;
unsigned long  int arg_syscall_no_177;
unsigned long  long user_va_179;
void* __right_value17 = (void*)0;
struct proc* p_180;
int result_181;
    trapframe_169=(struct context_t*)TRAPFRAME;
    arg0_170=trapframe_169->a0;
    arg1_171=trapframe_169->a1;
    arg2_172=trapframe_169->a2;
    arg3_173=trapframe_169->a3;
    arg4_174=trapframe_169->a4;
    arg5_175=trapframe_169->a5;
    arg6_176=trapframe_169->a6;
    arg_syscall_no_177=trapframe_169->a7;
    char kernel_buf_178[256];
    memset(&kernel_buf_178, 0, sizeof(char)    *(256)    );
    user_va_179=arg0_170;
    p_180=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_180->pagetable,kernel_buf_178,user_va_179,256);
    result_181=fs_open(kernel_buf_178);
    return result_181;
}

int Sys_fork(){
struct context_t* trapframe_182;
unsigned long  int arg0_183;
unsigned long  int arg1_184;
unsigned long  int arg2_185;
unsigned long  int arg3_186;
unsigned long  int arg4_187;
unsigned long  int arg5_188;
unsigned long  int arg6_189;
unsigned long  int arg_syscall_no_190;
void* __right_value18 = (void*)0;
struct proc* p_191;
int fork_flag_192;
void* __right_value19 = (void*)0;
struct proc* child_193;
unsigned long  long sp_194;
int result_195;
memset(&fork_flag_192, 0, sizeof(int));
    trapframe_182=(struct context_t*)TRAPFRAME;
    arg0_183=trapframe_182->a0;
    arg1_184=trapframe_182->a1;
    arg2_185=trapframe_182->a2;
    arg3_186=trapframe_182->a3;
    arg4_187=trapframe_182->a4;
    arg5_188=trapframe_182->a5;
    arg6_189=trapframe_182->a6;
    arg_syscall_no_190=trapframe_182->a7;
    p_191=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_191->program,fork_flag_192=1,0);
    child_193=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_194=child_193->context.sp;
    child_193->context=*trapframe_182;
    child_193->context.mepc=child_193->context.mepc+4;
    child_193->context.sp=sp_194;
    child_193->context.a0=0;
    result_195=list$1proc$ph_length(gProc)-1;
    return result_195;
}

int Sys_execv(){
struct context_t* trapframe_196;
unsigned long  int arg0_197;
unsigned long  int arg1_198;
unsigned long  long user_va_200;
void* __right_value20 = (void*)0;
struct proc* p_201;
char* path_202;
unsigned long  long user_argv_205;
int argc_206;
unsigned long  int uargp_207;
int fd_208;
int size_209;
char* elf_buf_210;
int ret_211;
void* __right_value21 = (void*)0;
struct proc* new_p_212;
unsigned long  long sp_213;
int i_215;
unsigned long  int len_216;
unsigned long  long argv_base_217;
int i_218;
unsigned long  long ptr_219;
unsigned long  long nullp_220;
memset(&uargp_207, 0, sizeof(unsigned long  int));
    trapframe_196=(struct context_t*)TRAPFRAME;
    arg0_197=trapframe_196->a0;
    arg1_198=trapframe_196->a1;
    char kernel_buf_199[256];
    memset(&kernel_buf_199, 0, sizeof(char)    *(256)    );
    user_va_200=arg0_197;
    p_201=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyinstr(p_201->pagetable,kernel_buf_199,user_va_200,256)<0    ) {
        trapframe_196->a0=-1;
        return -1;
    }
    path_202=kernel_buf_199;
    char argv_storage_203[32][32];
    memset(&argv_storage_203, 0, sizeof(char)    *(32)    *(32)    );
    char* kargv_204[32];
    memset(&kargv_204, 0, sizeof(char*)    *(32)    );
    user_argv_205=arg1_198;
    argc_206=0;
    for(    argc_206=0    ;    argc_206<32    ;    argc_206++    ){
        if(        copyin(p_201->pagetable,(char*)&uargp_207,user_argv_205+argc_206*sizeof(unsigned long  int),sizeof(unsigned long  int))<0        ) {
            trapframe_196->a0=-1;
            return -1;
        }
        if(        uargp_207==0        ) {
            break;
        }
        if(        copyinstr(p_201->pagetable,argv_storage_203[argc_206],uargp_207,sizeof(argv_storage_203[0]))<0        ) {
            trapframe_196->a0=-1;
            return -1;
        }
        kargv_204[argc_206]=argv_storage_203[argc_206];
    }
    kargv_204[argc_206]=((void*)0);
    fd_208=fs_open(path_202);
    if(    fd_208<0    ) {
        trapframe_196->a0=-1;
        return -1;
    }
    size_209=fs_size(fd_208);
    elf_buf_210=calloc(1,size_209);
    ret_211=fs_read(fd_208,elf_buf_210,size_209);
    fs_close(fd_208,0);
    if(    ret_211<=0    ) {
        trapframe_196->a0=-1;
        return -1;
    }
    alloc_prog(elf_buf_210,0,1);
    free(elf_buf_210);
    new_p_212=((struct proc*)(__right_value21=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value21, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_213=new_p_212->context.sp;
    unsigned long  long str_addrs_214[32];
    memset(&str_addrs_214, 0, sizeof(unsigned long  long)    *(32)    );
    for(    i_215=argc_206-1    ;    i_215>=0    ;    i_215--    ){
        len_216=strlen(kargv_204[i_215])+1;
        sp_213-=len_216;
        if(        copyout(new_p_212->pagetable,sp_213,kargv_204[i_215],len_216)<0        ) {
            panic("execv: copyout string failed");
        }
        str_addrs_214[i_215]=sp_213;
    }
    sp_213-=(argc_206+1)*sizeof(unsigned long  long);
    sp_213&=~7;
    argv_base_217=sp_213;
    for(    i_218=0    ;    i_218<argc_206    ;    i_218++    ){
        ptr_219=str_addrs_214[i_218];
        if(        copyout(new_p_212->pagetable,argv_base_217+i_218*sizeof(unsigned long  long),&ptr_219,sizeof(unsigned long  long))<0        ) {
            panic("execv: copyout ptr failed");
        }
    }
    nullp_220=0;
    if(    copyout(new_p_212->pagetable,argv_base_217+argc_206*sizeof(unsigned long  long),&nullp_220,sizeof(unsigned long  long))<0    ) {
        panic("execv: copyout nullp failed");
    }
    trapframe_196->a0=argc_206;
    trapframe_196->a1=argv_base_217;
    trapframe_196->sp=sp_213;
    trapframe_196->mepc=new_p_212->context.mepc-4;
    user_sp=sp_213;
    return argc_206;
}

void uvmunmap(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long npages, int do_free){
unsigned long  long a_221;
unsigned long  long* pte_222;
unsigned long  long pa_223;
    if(    (va%4096)!=0    ) {
        panic("uvmunmap: not aligned");
    }
    for(    a_221=va    ;    a_221<va+npages*4096    ;    a_221+=4096    ){
        pte_222=walk(pagetable,a_221,0);
        if(        pte_222==0||(*pte_222&(1L<<0))==0        ) {
            continue;
        }
        if(        do_free        ) {
            pa_223=(((*pte_222)>>10)<<12);
            kfree((void*)pa_223);
        }
        *pte_222=0;
    }
}

void uvm_dealloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
    if(    new_sz>=old_sz    ) {
        return;
    }
    uvmunmap(pagetable,(((new_sz)+4096-1)&~(4096-1)),((((old_sz)+4096-1)&~(4096-1))-(((new_sz)+4096-1)&~(4096-1)))/4096,1);
}

int uvm_alloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
unsigned long  long a_224;
char* mem_225;
    if(    new_sz<=old_sz    ) {
        return 0;
    }
    a_224=(((old_sz)+4096-1)&~(4096-1));
    for(    ;    a_224<new_sz    ;    a_224+=4096    ){
        mem_225=kalloc();
        if(        mem_225==0        ) {
            uvm_dealloc(pagetable,a_224,old_sz);
            return -1;
        }
        memset(mem_225,0,4096);
        if(        mappages(pagetable,a_224,4096,(unsigned long  long)mem_225,(1L<<2)|(1L<<1)|(1L<<4)|(1L<<0))<0        ) {
            kfree(mem_225);
            uvm_dealloc(pagetable,a_224,old_sz);
            return -1;
        }
    }
    __asm volatile("sfence.vma zero, zero");
    return 0;
}

int Sys_brk(){
struct context_t* trapframe_226;
unsigned long  long addr_227;
void* __right_value22 = (void*)0;
struct proc* p_228;
unsigned long  long old_sz_229;
    trapframe_226=(struct context_t*)TRAPFRAME;
    addr_227=trapframe_226->a0;
    p_228=((struct proc*)(__right_value22=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    old_sz_229=p_228->sz;
    if(    addr_227==0    ) {
        return old_sz_229;
    }
    if(    addr_227>old_sz_229    ) {
        if(        uvm_alloc(p_228->pagetable,old_sz_229,addr_227)<0        ) {
            printf("Sys_brk: uvm_alloc failed!\n");
            return -1;
        }
    }
    else if(    addr_227<old_sz_229    ) {
        uvm_dealloc(p_228->pagetable,old_sz_229,addr_227);
    }
    p_228->sz=addr_227;
    return p_228->sz;
}

int Sys_dup2(){
struct context_t* trapframe_230;
unsigned long  int arg0_231;
unsigned long  int arg1_232;
unsigned long  int arg2_233;
unsigned long  int arg3_234;
unsigned long  int arg4_235;
unsigned long  int arg5_236;
unsigned long  int arg6_237;
unsigned long  int arg_syscall_no_238;
int oldfd_239;
int newfd_240;
    trapframe_230=(struct context_t*)TRAPFRAME;
    arg0_231=trapframe_230->a0;
    arg1_232=trapframe_230->a1;
    arg2_233=trapframe_230->a2;
    arg3_234=trapframe_230->a3;
    arg4_235=trapframe_230->a4;
    arg5_236=trapframe_230->a5;
    arg6_237=trapframe_230->a6;
    arg_syscall_no_238=trapframe_230->a7;
    oldfd_239=arg0_231;
    newfd_240=arg1_232;
    fs_dup2(oldfd_239,newfd_240);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_241;
unsigned long  int arg0_242;
unsigned long  int arg1_243;
unsigned long  int arg2_244;
unsigned long  int arg3_245;
unsigned long  int arg4_246;
unsigned long  int arg5_247;
unsigned long  int arg6_248;
unsigned long  int arg_syscall_no_249;
char* kernel_buf_250;
unsigned long  long user_va_251;
int* fd_253;
void* __right_value23 = (void*)0;
struct proc* p_254;
kernel_buf_250 = (void*)0;
    trapframe_241=(struct context_t*)TRAPFRAME;
    arg0_242=trapframe_241->a0;
    arg1_243=trapframe_241->a1;
    arg2_244=trapframe_241->a2;
    arg3_245=trapframe_241->a3;
    arg4_246=trapframe_241->a4;
    arg5_247=trapframe_241->a5;
    arg6_248=trapframe_241->a6;
    arg_syscall_no_249=trapframe_241->a7;
    user_va_251=arg0_242;
    int pipe_fds_252[2];
    memset(&pipe_fds_252, 0, sizeof(int)    *(2)    );
    fd_253=(int*)pipe_fds_252;
    pipe_open(&fd_253[0],&fd_253[1]);
    p_254=((struct proc*)(__right_value23=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_254->pagetable,(unsigned long  long)user_va_251,(char*)fd_253,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context_t* trapframe_255;
unsigned long  int arg0_256;
unsigned long  int arg1_257;
unsigned long  int arg2_258;
unsigned long  int arg3_259;
unsigned long  int arg4_260;
unsigned long  int arg5_261;
unsigned long  int arg6_262;
unsigned long  int arg_syscall_no_263;
int fd_264;
unsigned long  long destva_265;
unsigned long  int n_266;
int ret_268;
void* __right_value24 = (void*)0;
struct proc* p_269;
memset(&ret_268, 0, sizeof(int));
    trapframe_255=(struct context_t*)TRAPFRAME;
    arg0_256=trapframe_255->a0;
    arg1_257=trapframe_255->a1;
    arg2_258=trapframe_255->a2;
    arg3_259=trapframe_255->a3;
    arg4_260=trapframe_255->a4;
    arg5_261=trapframe_255->a5;
    arg6_262=trapframe_255->a6;
    arg_syscall_no_263=trapframe_255->a7;
    fd_264=arg0_256;
    destva_265=arg1_257;
    n_266=arg2_258;
    char kernel_buf_267[256];
    memset(&kernel_buf_267, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_264)    ) {
        ret_268=uart_readn(kernel_buf_267,n_266);
    }
    else if(    is_pipe(fd_264)    ) {
        ret_268=piperead(fd_264,kernel_buf_267,n_266);
    }
    else {
        ret_268=fs_read(fd_264,kernel_buf_267,n_266);
        if(        ret_268<0        ) {
            trapframe_255->a0=ret_268;
            return 0;
        }
        kernel_buf_267[ret_268]=0;
    }
    p_269=((struct proc*)(__right_value24=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_269->pagetable,destva_265,kernel_buf_267,ret_268)<0    ) {
        panic("read: copyout failed");
    }
    return ret_268;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_270;
unsigned long  int arg0_271;
unsigned long  int arg1_272;
unsigned long  int arg2_273;
unsigned long  int arg3_274;
unsigned long  int arg4_275;
unsigned long  int arg5_276;
unsigned long  int arg6_277;
unsigned long  int arg_syscall_no_278;
unsigned long  long result_279;
long fd_280;
int ret_281;
    disable_timer_interrupts();
    trapframe_270=(struct context_t*)TRAPFRAME;
    arg0_271=trapframe_270->a0;
    arg1_272=trapframe_270->a1;
    arg2_273=trapframe_270->a2;
    arg3_274=trapframe_270->a3;
    arg4_275=trapframe_270->a4;
    arg5_276=trapframe_270->a5;
    arg6_277=trapframe_270->a6;
    arg_syscall_no_278=trapframe_270->a7;
    result_279=0;
    switch (    arg_syscall_no_278) {
        case 64:
        {
            result_279=Sys_write();
        }
        break;
        case 73:
        {
            result_279=Sys_pipe();
        }
        break;
        case 72:
        {
            result_279=Sys_dup2();
        }
        break;
        case 70:
        {
            result_279=Sys_exit();
        }
        break;
        case 71:
        {
            result_279=Sys_wait();
        }
        break;
        case 66:
        {
            result_279=Sys_open();
        }
        break;
        case 65:
        {
            result_279=Sys_read();
        }
        break;
        case 67:
        {
            fd_280=arg0_271;
            ret_281=fs_close(fd_280,0);
            result_279=ret_281;
        }
        break;
        case 68:
        {
            result_279=Sys_fork();
        }
        break;
        case 69:
        {
            result_279=Sys_execv();
        }
        break;
        case 74:
        {
            result_279=Sys_brk();
        }
        break;
        default:
        printf("NO. %d\n",arg_syscall_no_278);
        panic("invalid syscall");
        while(        1        ) {
            ;
        }
    }
    trapframe_270->a0=result_279;
    return result_279;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

struct proc* get_current_proc(){
void* __right_value25 = (void*)0;
struct proc* __result_obj__30;
    __result_obj__30 = ((struct proc*)(__right_value25=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value25, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__30;
}

void global_init(){
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1proc$ph* __dec_obj8;
    __dec_obj8=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 1900, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    gKernelStateHead=0;
    gKernelStateTail=0;
    gNumKernelState=0;
    memset(gKernelState,0,sizeof(struct sKernelState)*16);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__31;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__31 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__31;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_284;
struct list_item$1proc$ph* prev_it_285;
    it_284=self->head;
    while(    it_284!=((void*)0)    ) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_285, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_286;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct proc* p_287;
int gp_288;
unsigned long  int usersp_289;
unsigned long  long usersatp_290;
unsigned long  int entry_291;
memset(&fork_flag_286, 0, sizeof(int));
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
    alloc_prog((char*)msh_elf,fork_flag_286=0,0);
    free_proc(((struct proc*)(__right_value28=list$1proc$ph_operator_load_element(gProc,0))));
    come_call_finalizer(proc_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    while(    1    ) {
        ;
    }
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_287=((struct proc*)(__right_value29=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gp_288=p_287->context.gp;
    usersp_289=(unsigned long  long)(p_287->context.sp);
    usersatp_290=((8L<<60)|(((unsigned long  long)p_287->pagetable)>>12));
    entry_291=p_287->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_287;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_291,usersp_289,usersatp_290,10000UL,gp_288);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__32;
void* prev_292;
void* __result_obj__33;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__32 = (void*)-1;
        return __result_obj__32;
    }
    prev_292=heap_end;
    heap_end+=incr;
    __result_obj__33 = prev_292;
    return __result_obj__33;
}

void* malloc(unsigned long  int size){
void* __result_obj__34;
struct mem_block* current_293;
struct mem_block* prev_294;
void* __result_obj__35;
struct mem_block* new_mem_295;
void* __result_obj__36;
void* __result_obj__37;
    if(    size==0    ) {
        __result_obj__34 = ((void*)0);
        return __result_obj__34;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_293=free_list;
    prev_294=((void*)0);
    while(    current_293!=((void*)0)    ) {
        if(        current_293->size>=size        ) {
            if(            prev_294==((void*)0)            ) {
                free_list=current_293->next;
            }
            else {
                prev_294->next=current_293->next;
            }
            __result_obj__35 = (void*)(current_293+1);
            return __result_obj__35;
        }
        prev_294=current_293;
        current_293=current_293->next;
    }
    new_mem_295=(struct mem_block*)sbrk(size);
    if(    new_mem_295==(void*)-1    ) {
        __result_obj__36 = ((void*)0);
        return __result_obj__36;
    }
    new_mem_295->size=size;
    new_mem_295->next=((void*)0);
    __result_obj__37 = (void*)(new_mem_295+1);
    return __result_obj__37;
}

void free(void* ptr){
struct mem_block* block_296;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_296=(struct mem_block*)ptr-1;
    block_296->next=free_list;
    free_list=block_296;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_297;
void* __result_obj__38;
void* ptr_298;
void* __result_obj__39;
    total_size_297=nmemb*size;
    if(    total_size_297==0    ) {
        __result_obj__38 = ((void*)0);
        return __result_obj__38;
    }
    ptr_298=malloc(total_size_297);
    if(    ptr_298!=((void*)0)    ) {
        memset(ptr_298,0,total_size_297);
    }
    __result_obj__39 = ptr_298;
    return __result_obj__39;
}

char* strdup(const char* s){
char* s2_299;
unsigned long  int len_300;
char* p_301;
char* __result_obj__40;
    s2_299=s;
    len_300=strlen(s2_299)+1;
    p_301=malloc(len_300);
    if(    p_301    ) {
        memcpy(p_301,s2_299,len_300);
    }
    __result_obj__40 = p_301;
    return __result_obj__40;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__41;
char* __result_obj__42;
char* __result_obj__43;
    if(    !*needle    ) {
        __result_obj__41 = (char*)haystack;
        return __result_obj__41;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_302=haystack;
        const char* n_303=needle;
        while(        *h_302&&*n_303&&(*h_302==*n_303)        ) {
            h_302++;
            n_303++;
        }
        if(        !*n_303        ) {
            __result_obj__42 = (char*)haystack;
            return __result_obj__42;
        }
    }
    __result_obj__43 = ((void*)0);
    return __result_obj__43;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_304;
int i_305;
void* __result_obj__44;
    cdst_304=(char*)dst;
    for(    i_305=0    ;    i_305<n    ;    i_305++    ){
        cdst_304[i_305]=c;
    }
    __result_obj__44 = dst;
    return __result_obj__44;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_306;
const unsigned char* s2_307;
memset(&s1_306, 0, sizeof(const unsigned char*));
memset(&s2_307, 0, sizeof(const unsigned char*));
    s1_306=v1;
    s2_307=v2;
    while(    n-->0    ) {
        if(        *s1_306!=*s2_307        ) {
            return *s1_306-*s2_307;
        }
        s1_306++,s2_307++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_308;
char* d_309;
void* __result_obj__45;
void* __result_obj__46;
s_308 = (void*)0;
d_309 = (void*)0;
    if(    n==0    ) {
        __result_obj__45 = dst;
        return __result_obj__45;
    }
    s_308=src;
    d_309=dst;
    if(    s_308<d_309&&s_308+n>d_309    ) {
        s_308+=n;
        d_309+=n;
        while(        n-->0        ) {
            *--d_309=*--s_308;
        }
    }
    else {
        while(        n-->0        ) {
            *d_309++=*s_308++;
        }
    }
    __result_obj__46 = dst;
    return __result_obj__46;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__47;
    __result_obj__47 = memmove(dst,src,n);
    return __result_obj__47;
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
char* os_310;
char* __result_obj__48;
os_310 = (void*)0;
    os_310=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__48 = os_310;
    return __result_obj__48;
}

int strlen(const char* s){
int n_311;
memset(&n_311, 0, sizeof(int));
    for(    n_311=0    ;    s[n_311]    ;    n_311++    ){
        ;
    }
    return n_311;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_312;
char* __result_obj__49;
    d_312=dest;
    while(    *d_312    ) {
        d_312++;
    }
    while(    n--&&*src    ) {
        *d_312++=*src++;
    }
    *d_312=0;
    __result_obj__49 = dest;
    return __result_obj__49;
}

char* strtok(char* s, const char* delim){
static char* next_313;
char* start_314;
char* p_315;
char* __result_obj__50;
int is_delim_317;
char* __result_obj__51;
int is_delim_319;
char* __result_obj__52;
next_313 = (void*)0;
start_314 = (void*)0;
p_315 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_313=s;
    }
    if(    next_313==((void*)0)    ) {
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    start_314=next_313;
    while(    *start_314!=0    ) {
        const char* d_316=delim;
        is_delim_317=0;
        while(        *d_316!=0        ) {
            if(            *start_314==*d_316            ) {
                is_delim_317=1;
                break;
            }
            d_316++;
        }
        if(        !is_delim_317        ) {
            break;
        }
        start_314++;
    }
    if(    *start_314==0    ) {
        next_313=((void*)0);
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    p_315=start_314;
    while(    *p_315!=0    ) {
        const char* d_318=delim;
        is_delim_319=0;
        while(        *d_318!=0        ) {
            if(            *p_315==*d_318            ) {
                is_delim_319=1;
                break;
            }
            d_318++;
        }
        if(        is_delim_319        ) {
            break;
        }
        p_315++;
    }
    if(    *p_315==0    ) {
        next_313=((void*)0);
    }
    else {
        *p_315=0;
        next_313=p_315+1;
    }
    __result_obj__52 = start_314;
    return __result_obj__52;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_320;
int i_322;
int negative_323;
char* __result_obj__53;
int digit_324;
char* __result_obj__54;
    p_320=buf;
    char tmp_321[32];
    memset(&tmp_321, 0, sizeof(char)    *(32)    );
    i_322=0;
    negative_323=0;
    if(    base<2||base>16    ) {
        *p_320=0;
        __result_obj__53 = p_320;
        return __result_obj__53;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_323=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_324=val_%base;
        tmp_321[i_322++]=(((digit_324<10))?(48+digit_324):(97+digit_324-10));
        val_/=base;
    } while(    val_    );
    if(    negative_323    ) {
        *p_320++=45;
    }
    while(    i_322--    ) {
        *p_320++=tmp_321[i_322];
    }
    *p_320=0;
    __result_obj__54 = buf;
    return __result_obj__54;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_326;
const char* s_327;
unsigned long  int remaining_329;
s_327 = (void*)0;
    char out2_325[512];
    memset(&out2_325, 0, sizeof(char)    *(512)    );
    p_326=out2_325;
    char buf_328[32];
    memset(&buf_328, 0, sizeof(char)    *(32)    );
    remaining_329=sizeof(out2_325);
    for(    ;    *fmt&&remaining_329>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_326++=*fmt;
            remaining_329--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_328,__builtin_va_arg(ap,int),10,1);
            s_327=buf_328;
            break;
            case 117:
            itoa(buf_328,__builtin_va_arg(ap,unsigned int),10,0);
            s_327=buf_328;
            break;
            case 120:
            itoa(buf_328,__builtin_va_arg(ap,unsigned int),16,0);
            s_327=buf_328;
            break;
            case 115:
            s_327=__builtin_va_arg(ap,const char*);
            if(            !s_327            ) {
                s_327="(null)";
            }
            break;
            case 99:
            buf_328[0]=(char)__builtin_va_arg(ap,int);
            buf_328[1]=0;
            s_327=buf_328;
            break;
            case 112:
            strncpy(buf_328,"0x",32);
            itoa(buf_328+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_327=buf_328;
            break;
            case 37:
            buf_328[0]=37;
            buf_328[1]=0;
            s_327=buf_328;
            break;
            default:
            buf_328[0]=37;
            buf_328[1]=*fmt;
            buf_328[2]=0;
            s_327=buf_328;
            break;
        }
        while(        *s_327&&remaining_329>1        ) {
            *p_326++=*s_327++;
            remaining_329--;
        }
    }
    *p_326=0;
    *out=strdup(out2_325);
    return p_326-out2_325;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_330;
char* p_331;
const char* s_332;
unsigned long  int remaining_334;
memset(&ap_330, 0, sizeof(va_list));
s_332 = (void*)0;
    __builtin_va_start(ap_330,fmt);
    p_331=out;
    char buf_333[32];
    memset(&buf_333, 0, sizeof(char)    *(32)    );
    remaining_334=out_size;
    if(    remaining_334==0    ) {
        __builtin_va_end(ap_330);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_334>1            ) {
                *p_331++=*fmt;
                remaining_334--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_332=__builtin_va_arg(ap_330,const char*);
            while(            *s_332&&remaining_334>1            ) {
                *p_331++=*s_332++;
                remaining_334--;
            }
            break;
            case 100:
            itoa(buf_333,__builtin_va_arg(ap_330,int),10,0);
            s_332=buf_333;
            while(            *s_332&&remaining_334>1            ) {
                *p_331++=*s_332++;
                remaining_334--;
            }
            break;
            case 120:
            itoa(buf_333,(unsigned int)__builtin_va_arg(ap_330,int),16,1);
            s_332=buf_333;
            while(            *s_332&&remaining_334>1            ) {
                *p_331++=*s_332++;
                remaining_334--;
            }
            break;
            case 99:
            if(            remaining_334>1            ) {
                *p_331++=(char)__builtin_va_arg(ap_330,int);
                remaining_334--;
            }
            break;
            case 112:
            s_332="0x";
            while(            *s_332&&remaining_334>1            ) {
                *p_331++=*s_332++;
                remaining_334--;
            }
            itoa(buf_333,(long)__builtin_va_arg(ap_330,void*),16,1);
            s_332=buf_333;
            while(            *s_332&&remaining_334>1            ) {
                *p_331++=*s_332++;
                remaining_334--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_333,__builtin_va_arg(ap_330,long),10,1);
                s_332=buf_333;
                while(                *s_332&&remaining_334>1                ) {
                    *p_331++=*s_332++;
                    remaining_334--;
                }
            }
            break;
            default:
            if(            remaining_334>1            ) {
                *p_331++=37;
                remaining_334--;
                if(                remaining_334>1                ) {
                    *p_331++=*fmt;
                    remaining_334--;
                }
            }
            break;
        }
    }
    *p_331=0;
    __builtin_va_end(ap_330);
    return p_331-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_335;
char* p_336;
const char* s_337;
unsigned long  int remaining_339;
memset(&ap_335, 0, sizeof(va_list));
s_337 = (void*)0;
    __builtin_va_start(ap_335,fmt);
    p_336=out;
    char buf_338[32];
    memset(&buf_338, 0, sizeof(char)    *(32)    );
    remaining_339=out_size;
    if(    remaining_339==0    ) {
        __builtin_va_end(ap_335);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_339>1            ) {
                *p_336++=*fmt;
                remaining_339--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_337=__builtin_va_arg(ap_335,const char*);
            while(            *s_337&&remaining_339>1            ) {
                *p_336++=*s_337++;
                remaining_339--;
            }
            break;
            case 100:
            itoa(buf_338,__builtin_va_arg(ap_335,int),10,0);
            s_337=buf_338;
            while(            *s_337&&remaining_339>1            ) {
                *p_336++=*s_337++;
                remaining_339--;
            }
            break;
            case 120:
            itoa(buf_338,(unsigned int)__builtin_va_arg(ap_335,int),16,1);
            s_337=buf_338;
            while(            *s_337&&remaining_339>1            ) {
                *p_336++=*s_337++;
                remaining_339--;
            }
            break;
            case 99:
            if(            remaining_339>1            ) {
                *p_336++=(char)__builtin_va_arg(ap_335,int);
                remaining_339--;
            }
            break;
            case 112:
            s_337="0x";
            while(            *s_337&&remaining_339>1            ) {
                *p_336++=*s_337++;
                remaining_339--;
            }
            itoa(buf_338,(long)__builtin_va_arg(ap_335,void*),16,1);
            s_337=buf_338;
            while(            *s_337&&remaining_339>1            ) {
                *p_336++=*s_337++;
                remaining_339--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_338,__builtin_va_arg(ap_335,long),10,1);
                s_337=buf_338;
                while(                *s_337&&remaining_339>1                ) {
                    *p_336++=*s_337++;
                    remaining_339--;
                }
            }
            break;
            default:
            if(            remaining_339>1            ) {
                *p_336++=37;
                remaining_339--;
                if(                remaining_339>1                ) {
                    *p_336++=*fmt;
                    remaining_339--;
                }
            }
            break;
        }
    }
    *p_336=0;
    __builtin_va_end(ap_335);
    return p_336-out;
}

void printint(int val_, int base, int sign){
int i_341;
int negative_342;
unsigned int uval_343;
int digit_344;
memset(&uval_343, 0, sizeof(unsigned int));
    char buf_340[33];
    memset(&buf_340, 0, sizeof(char)    *(33)    );
    i_341=0;
    negative_342=0;
    if(    sign&&val_<0    ) {
        negative_342=1;
        uval_343=-val_;
    }
    else {
        uval_343=(unsigned int)val_;
    }
    if(    uval_343==0    ) {
        putchar(48);
        return;
    }
    while(    uval_343>0    ) {
        digit_344=uval_343%base;
        buf_340[i_341++]=((digit_344<10)?(48+digit_344):(97+(digit_344-10)));
        uval_343/=base;
    }
    if(    negative_342    ) {
        putchar(45);
    }
    while(    --i_341>=0    ) {
        putchar(buf_340[i_341]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_346;
int negative_347;
int digit_348;
    char buf_345[65];
    memset(&buf_345, 0, sizeof(char)    *(65)    );
    i_346=0;
    negative_347=0;
    if(    sign&&(long)val_<0    ) {
        negative_347=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_348=val_%base;
        buf_345[i_346++]=((digit_348<10)?(48+digit_348):(97+(digit_348-10)));
        val_/=base;
    }
    if(    negative_347    ) {
        putchar(45);
    }
    while(    --i_346>=0    ) {
        putchar(buf_345[i_346]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_350;
int negative_351;
int digit_352;
    char buf_349[65];
    memset(&buf_349, 0, sizeof(char)    *(65)    );
    i_350=0;
    negative_351=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_351=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_352=val_%base;
        buf_349[i_350++]=((digit_352<10)?(48+digit_352):(97+(digit_352-10)));
        val_/=base;
    }
    if(    negative_351    ) {
        putchar(45);
    }
    while(    --i_350>=0    ) {
        putchar(buf_349[i_350]);
    }
}

int printf(const char* fmt, ...){
va_list ap_353;
const char* p_354;
int lcount_355;
unsigned long  int val__356;
unsigned long  long val__357;
long val__358;
long long val__359;
int i_360;
int val__361;
unsigned int val__362;
unsigned long  int val__363;
char c_365;
memset(&ap_353, 0, sizeof(va_list));
p_354 = (void*)0;
    __builtin_va_start(ap_353,fmt);
    for(    p_354=fmt    ;    *p_354    ;    p_354++    ){
        if(        *p_354!=37        ) {
            putchar(*p_354);
            continue;
        }
        p_354++;
        if(        *p_354==108        ) {
            lcount_355=1;
            if(            *(p_354+1)==108            ) {
                lcount_355=2;
                p_354++;
            }
            p_354++;
            switch (            *p_354) {
                case 120:
                {
                    if(                    lcount_355==1                    ) {
                        val__356=__builtin_va_arg(ap_353,unsigned long  int);
                        printlong(val__356,16,0);
                    }
                    else {
                        val__357=__builtin_va_arg(ap_353,unsigned long  long);
                        printlonglong(val__357,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_355==1                    ) {
                        val__358=__builtin_va_arg(ap_353,long);
                        printlong(val__358,10,1);
                    }
                    else {
                        val__359=__builtin_va_arg(ap_353,long  long);
                        printlonglong(val__359,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_360=0                    ;                    i_360<lcount_355                    ;                    i_360++                    ){
                        putchar(108);
                    }
                    putchar(*p_354);
                    break;
                }
            }
        }
        else {
            switch (            *p_354) {
                case 100:
                {
                    val__361=__builtin_va_arg(ap_353,int);
                    printint(val__361,10,1);
                    break;
                }
                case 120:
                {
                    val__362=__builtin_va_arg(ap_353,unsigned int);
                    printint(val__362,16,0);
                    break;
                }
                case 112:
                {
                    val__363=(unsigned long  int)__builtin_va_arg(ap_353,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__363,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_364=__builtin_va_arg(ap_353,const char*);
                    if(                    !s_364                    ) {
                        s_364="(null)";
                    }
                    while(                    *s_364                    ) {
                        putchar(*s_364++);
                    }
                    break;
                }
                case 99:
                {
                    c_365=(char)__builtin_va_arg(ap_353,int);
                    putchar(c_365);
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
                    putchar(*p_354);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_353);
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
void* __right_value30 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value30=__builtin_string(""))));
    (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
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
void* result_366;
void* __result_obj__56;
    result_366=((void*)0);
    size=(size+7&~7);
    result_366=calloc(1,size);
    __result_obj__56 = result_366;
    return __result_obj__56;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_367;
struct sMemHeaderTiny* prev_it_368;
struct sMemHeaderTiny* next_it_369;
unsigned long  int size_370;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_367=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_367->allocated!=177783            ) {
                return;
            }
            it_367->allocated=0;
            prev_it_368=it_367->prev;
            next_it_369=it_367->next;
            if(            gAllocMem==it_367            ) {
                gAllocMem=(struct sMemHeader*)next_it_369;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_368                ) {
                    prev_it_368->next=next_it_369;
                }
                if(                next_it_369                ) {
                    next_it_369->prev=prev_it_368;
                }
            }
            size_370=it_367->size;
            free(it_367);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_371;
struct sMemHeaderTiny* it_372;
void* __result_obj__57;
    if(    gComeDebugLib    ) {
    }
    else {
        result_371=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_372=result_371;
        it_372->allocated=177783;
        it_372->class_name=class_name;
        it_372->sname=sname;
        it_372->sline=sline;
        it_372->size=size+sizeof(struct sMemHeaderTiny);
        it_372->free_next=((void*)0);
        it_372->next=(struct sMemHeaderTiny*)gAllocMem;
        it_372->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_372;
        }
        gAllocMem=(struct sMemHeader*)it_372;
        gNumAlloc++;
        __result_obj__57 = (char*)result_371+sizeof(struct sMemHeaderTiny);
        return __result_obj__57;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_373;
char* __result_obj__58;
struct sMemHeaderTiny* it_374;
char* __result_obj__59;
    if(    gComeDebugLib    ) {
        it_373=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_373->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_373);
            exit(2);
        }
        __result_obj__58 = it_373->class_name;
        return __result_obj__58;
    }
    else {
        it_374=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_374->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_374);
            exit(2);
        }
        __result_obj__59 = it_374->class_name;
        return __result_obj__59;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_375;
unsigned long  int* ref_count_376;
unsigned long  int* size2_377;
void* __result_obj__60;
    mem_375=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_376=(unsigned long  int*)mem_375;
    *ref_count_376=0;
    size2_377=(unsigned long  int*)(mem_375+sizeof(unsigned long  int));
    *size2_377=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__60 = mem_375+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__60;
}

void come_free(void* mem){
unsigned long  int* ref_count_378;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_378=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_378);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__61;
char* mem_379;
unsigned long  int* size_p_380;
unsigned long  int size_381;
void* result_382;
void* __result_obj__62;
    if(    !block    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_379=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_380=(unsigned long  int*)(mem_379+sizeof(unsigned long  int));
    size_381=*size_p_380-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_382=come_calloc_v2(1,size_381,sname,sline,class_name);
    memcpy(result_382,block,size_381);
    __result_obj__62 = result_382;
    return __result_obj__62;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__63;
unsigned long  int* ref_count_383;
void* __result_obj__64;
    if(    mem==((void*)0)    ) {
        __result_obj__63 = mem;
        return __result_obj__63;
    }
    ref_count_383=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_383)++;
    __result_obj__64 = mem;
    return __result_obj__64;
}

void* come_print_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_384;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_384=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_384);
    __result_obj__66 = mem;
    return __result_obj__66;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_385;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_385=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_385;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__67;
void* __result_obj__68;
unsigned long  int* ref_count_386;
unsigned long  int count_387;
void (*finalizer_388)(void*);
void* __result_obj__69;
void* __result_obj__70;
memset(&finalizer_388, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__67 = mem;
            return __result_obj__67;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    ref_count_386=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_386)--;
    }
    count_387=*ref_count_386;
    if(    !no_free&&count_387<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_388=protocol_fun;
            finalizer_388(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__69 = ((void*)0);
        return __result_obj__69;
    }
    __result_obj__70 = mem;
    return __result_obj__70;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_389)(void*);
void (*finalizer_390)(void*);
void (*finalizer_391)(void*);
unsigned long  int* ref_count_392;
unsigned long  int count_393;
void (*finalizer_394)(void*);
void (*finalizer_395)(void*);
void (*finalizer_396)(void*);
memset(&finalizer_389, 0, sizeof(void (*)(void*)));
memset(&finalizer_390, 0, sizeof(void (*)(void*)));
memset(&finalizer_391, 0, sizeof(void (*)(void*)));
memset(&finalizer_394, 0, sizeof(void (*)(void*)));
memset(&finalizer_395, 0, sizeof(void (*)(void*)));
memset(&finalizer_396, 0, sizeof(void (*)(void*)));
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
                finalizer_389=protocol_fun;
                finalizer_389(protocol_obj);
            }
            finalizer_390=fun;
            finalizer_390(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_391=protocol_fun;
                finalizer_391(protocol_obj);
            }
        }
    }
    else {
        ref_count_392=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_392)--;
        }
        count_393=*ref_count_392;
        if(        !no_free&&count_393<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_394=protocol_fun;
                        finalizer_394(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_395=fun;
                        finalizer_395(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_396=protocol_fun;
                        finalizer_396(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__71;
int len_397;
void* __right_value31 = (void*)0;
char* result_398;
char* __result_obj__72;
    if(    str==((void*)0)    ) {
        __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    len_397=strlen(str)+1;
    result_398=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_397)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_398,str,len_397);
    __result_obj__72 = (char*)come_increment_ref_count(result_398);
    (result_398 = come_decrement_ref_count(result_398, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
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
void* __right_value32 = (void*)0;
char* __result_obj__73;
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value32=come_get_stackframe())));
    (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__73;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__74;
    __result_obj__74 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__74;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value33 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__75;
    self->size=128;
    __dec_obj9=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2915, "char*"));
    __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__75 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value34 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__76;
    self->size=128;
    __dec_obj10=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2925, "char*"));
    __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__77;
void* __right_value35 = (void*)0;
struct buffer* result_399;
void* __right_value36 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__77;
    }
    result_399=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_399->size=self->size;
    __dec_obj11=result_399->buf,
    result_399->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_399->len=self->len;
    memcpy(result_399->buf,self->buf,self->len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_399);
    come_call_finalizer(buffer_finalize, result_399, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
_Bool __result_obj__79;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__79 = string_equals(((char*)(__right_value37=buffer_to_string(left))),((char*)(__right_value38=buffer_to_string(right))));
    (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__79;
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
struct buffer* __result_obj__80;
void* __right_value39 = (void*)0;
char* old_buf_400;
int old_len_401;
int new_size_402;
void* __right_value40 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__81;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_400=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_400,self->buf,self->size);
        old_len_401=self->len;
        new_size_402=(self->size+size+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_402)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_400,old_len_401);
        self->buf[old_len_401]=0;
        self->size=new_size_402;
        (old_buf_400 = come_decrement_ref_count(old_buf_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__82;
void* __right_value41 = (void*)0;
char* old_buf_403;
int old_len_404;
int new_size_405;
void* __right_value42 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_403=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_404=self->len;
        new_size_405=(self->size+10+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_405)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_403,old_len_404);
        self->buf[old_len_404]=0;
        self->size=new_size_405;
        (old_buf_403 = come_decrement_ref_count(old_buf_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__84;
int size_406;
void* __right_value43 = (void*)0;
char* old_buf_407;
int old_len_408;
int new_size_409;
void* __right_value44 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__85;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    size_406=strlen(mem);
    if(    self->len+size_406+1+1>=self->size    ) {
        old_buf_407=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_407,self->buf,self->size);
        old_len_408=self->len;
        new_size_409=(self->size+size_406+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_409)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_407,old_len_408);
        self->buf[old_len_408]=0;
        self->size=new_size_409;
        (old_buf_407 = come_decrement_ref_count(old_buf_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_406);
    self->len+=size_406;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__86;
va_list args_410;
char* result_411;
int len_412;
struct buffer* __result_obj__87;
void* __right_value45 = (void*)0;
char* mem_413;
int size_414;
void* __right_value46 = (void*)0;
char* old_buf_415;
int old_len_416;
int new_size_417;
void* __right_value47 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__88;
result_411 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    __builtin_va_start(args_410,msg);
    len_412=vasprintf(&result_411,msg,args_410);
    __builtin_va_end(args_410);
    if(    len_412<0    ) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    mem_413=(char*)come_increment_ref_count(__builtin_string(result_411));
    size_414=strlen(mem_413);
    if(    self->len+size_414+1+1>=self->size    ) {
        old_buf_415=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_415,self->buf,self->size);
        old_len_416=self->len;
        new_size_417=(self->size+size_414+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_417)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_415,old_len_416);
        self->buf[old_len_416]=0;
        self->size=new_size_417;
        (old_buf_415 = come_decrement_ref_count(old_buf_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_413,size_414);
    self->len+=size_414;
    self->buf[self->len]=0;
    free(result_411);
    __result_obj__88 = self;
    (mem_413 = come_decrement_ref_count(mem_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__88;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__89;
int size_418;
void* __right_value48 = (void*)0;
char* old_buf_419;
int old_len_420;
int new_size_421;
void* __right_value49 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__90;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    size_418=strlen(mem)+1;
    if(    self->len+size_418+1+1+1>=self->size    ) {
        old_buf_419=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_419,self->buf,self->size);
        old_len_420=self->len;
        new_size_421=(self->size+size_418+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_421)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_419,old_len_420);
        self->buf[old_len_420]=0;
        self->size=new_size_421;
        (old_buf_419 = come_decrement_ref_count(old_buf_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_418);
    self->len+=size_418;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__91;
int* mem_422;
int size_423;
void* __right_value50 = (void*)0;
char* old_buf_424;
int old_len_425;
int new_size_426;
void* __right_value51 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__92;
    if(    self==((void*)0)    ) {
        __result_obj__91 = ((void*)0);
        return __result_obj__91;
    }
    mem_422=&value;
    size_423=sizeof(int);
    if(    self->len+size_423+1+1>=self->size    ) {
        old_buf_424=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_424,self->buf,self->size);
        old_len_425=self->len;
        new_size_426=(self->size+size_423+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_426)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_424,old_len_425);
        self->buf[old_len_425]=0;
        self->size=new_size_426;
        (old_buf_424 = come_decrement_ref_count(old_buf_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_422,size_423);
    self->len+=size_423;
    self->buf[self->len]=0;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_427;
int size_428;
void* __right_value52 = (void*)0;
char* old_buf_429;
int old_len_430;
int new_size_431;
void* __right_value53 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__93;
    mem_427=&value;
    size_428=sizeof(long);
    if(    self->len+size_428+1+1>=self->size    ) {
        old_buf_429=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_429,self->buf,self->size);
        old_len_430=self->len;
        new_size_431=(self->size+size_428+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_431)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_429,old_len_430);
        self->buf[old_len_430]=0;
        self->size=new_size_431;
        (old_buf_429 = come_decrement_ref_count(old_buf_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_427,size_428);
    self->len+=size_428;
    self->buf[self->len]=0;
    __result_obj__93 = self;
    return __result_obj__93;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__94;
short* mem_432;
int size_433;
void* __right_value54 = (void*)0;
char* old_buf_434;
int old_len_435;
int new_size_436;
void* __right_value55 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__95;
    if(    self==((void*)0)    ) {
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    mem_432=&value;
    size_433=sizeof(short);
    if(    self->len+size_433+1+1>=self->size    ) {
        old_buf_434=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_434,self->buf,self->size);
        old_len_435=self->len;
        new_size_436=(self->size+size_433+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_436)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_434,old_len_435);
        self->buf[old_len_435]=0;
        self->size=new_size_436;
        (old_buf_434 = come_decrement_ref_count(old_buf_434, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_432,size_433);
    self->len+=size_433;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__96;
int len_437;
int new_size_438;
void* __right_value56 = (void*)0;
char* __dec_obj20;
int i_439;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    len_437=self->len;
    len_437=(len_437+3)&~3;
    if(    len_437>=self->size    ) {
        new_size_438=(self->size+1+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_438)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_438;
    }
    for(    i_439=self->len    ;    i_439<len_437    ;    i_439++    ){
        self->buf[i_439]=0;
    }
    self->len=len_437;
    __result_obj__97 = self;
    return __result_obj__97;
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
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct buffer* result_440;
struct buffer* __result_obj__98;
struct buffer* __result_obj__99;
    result_440=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__98 = (struct buffer*)come_increment_ref_count(result_440);
        come_call_finalizer(buffer_finalize, result_440, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__98;
    }
    buffer_append_str(result_440,self);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_440);
    come_call_finalizer(buffer_finalize, result_440, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

char* buffer_to_string(struct buffer* self){
void* __right_value59 = (void*)0;
char* __result_obj__100;
void* __right_value60 = (void*)0;
char* __result_obj__101;
    if(    self==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value59=__builtin_string(""))));
        (__right_value59 = come_decrement_ref_count(__right_value59, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value60=__builtin_string(self->buf))));
    (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__102;
    __result_obj__102 = self->buf;
    return __result_obj__102;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* result_441;
struct buffer* __result_obj__103;
    result_441=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_441,self,sizeof(char)*len);
    __result_obj__103 = (struct buffer*)come_increment_ref_count(result_441);
    come_call_finalizer(buffer_finalize, result_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* result_442;
int i_443;
struct buffer* __result_obj__104;
    result_442=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_443=0    ;    i_443<len    ;    i_443++    ){
        buffer_append(result_442,self[i_443],strlen(self[i_443]));
    }
    __result_obj__104 = (struct buffer*)come_increment_ref_count(result_442);
    come_call_finalizer(buffer_finalize, result_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* result_444;
struct buffer* __result_obj__105;
    result_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_444,(char*)self,sizeof(short)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_444);
    come_call_finalizer(buffer_finalize, result_444, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* result_445;
struct buffer* __result_obj__106;
    result_445=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_445,(char*)self,sizeof(int)*len);
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_445);
    come_call_finalizer(buffer_finalize, result_445, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* result_446;
struct buffer* __result_obj__107;
    result_446=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_446,(char*)self,sizeof(long)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_446);
    come_call_finalizer(buffer_finalize, result_446, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* result_447;
struct buffer* __result_obj__108;
    result_447=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_447,(char*)self,sizeof(float)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_447);
    come_call_finalizer(buffer_finalize, result_447, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* result_448;
struct buffer* __result_obj__109;
    result_448=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_448,(char*)self,sizeof(double)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_448);
    come_call_finalizer(buffer_finalize, result_448, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

char* buffer_printable(struct buffer* self){
int len_449;
void* __right_value75 = (void*)0;
char* result_450;
int n_451;
int i_452;
unsigned char c_453;
char* __result_obj__110;
    len_449=self->len;
    result_450=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_449*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_451=0;
    for(    i_452=0    ;    i_452<len_449    ;    i_452++    ){
        c_453=self->buf[i_452];
        if(        (c_453>=0&&c_453<32)||c_453==127        ) {
            result_450[n_451++]=94;
            result_450[n_451++]=c_453+65-1;
        }
        else if(        c_453>127        ) {
            result_450[n_451++]=63;
        }
        else {
            result_450[n_451++]=c_453;
        }
    }
    result_450[n_451]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_450);
    (result_450 = come_decrement_ref_count(result_450, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_454;
struct list$1char$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_454=0    ;    i_454<num_value    ;    i_454++    ){
        list$1char$_push_back(self,values[i_454]);
    }
    __result_obj__112 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value77 = (void*)0;
struct list_item$1char$* litem_455;
void* __right_value78 = (void*)0;
struct list_item$1char$* litem_456;
void* __right_value79 = (void*)0;
struct list_item$1char$* litem_457;
struct list$1char$* __result_obj__111;
    if(    self->len==0    ) {
        litem_455=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value77=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_455->prev=((void*)0);
        litem_455->next=((void*)0);
        litem_455->item=item;
        self->tail=litem_455;
        self->head=litem_455;
    }
    else if(    self->len==1    ) {
        litem_456=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value78=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_456->prev=self->head;
        litem_456->next=((void*)0);
        litem_456->item=item;
        self->tail=litem_456;
        self->head->next=litem_456;
    }
    else {
        litem_457=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value79=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_457->prev=self->tail;
        litem_457->next=((void*)0);
        litem_457->item=item;
        self->tail->next=litem_457;
        self->tail=litem_457;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_458;
struct list_item$1char$* prev_it_459;
    it_458=self->head;
    while(    it_458!=((void*)0)    ) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value76 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1char$* __result_obj__113;
    __result_obj__113 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value80=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_460;
struct list$1char$p* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_460=0    ;    i_460<num_value    ;    i_460++    ){
        list$1char$p_push_back(self,values[i_460]);
    }
    __result_obj__115 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value82 = (void*)0;
struct list_item$1char$p* litem_461;
void* __right_value83 = (void*)0;
struct list_item$1char$p* litem_462;
void* __right_value84 = (void*)0;
struct list_item$1char$p* litem_463;
struct list$1char$p* __result_obj__114;
    if(    self->len==0    ) {
        litem_461=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value82=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_461->prev=((void*)0);
        litem_461->next=((void*)0);
        litem_461->item=item;
        self->tail=litem_461;
        self->head=litem_461;
    }
    else if(    self->len==1    ) {
        litem_462=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value83=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_462->prev=self->head;
        litem_462->next=((void*)0);
        litem_462->item=item;
        self->tail=litem_462;
        self->head->next=litem_462;
    }
    else {
        litem_463=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value84=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_463->prev=self->tail;
        litem_463->next=((void*)0);
        litem_463->item=item;
        self->tail->next=litem_463;
        self->tail=litem_463;
    }
    self->len++;
    __result_obj__114 = self;
    return __result_obj__114;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_464;
struct list_item$1char$p* prev_it_465;
    it_464=self->head;
    while(    it_464!=((void*)0)    ) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_465, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value81 = (void*)0;
void* __right_value85 = (void*)0;
struct list$1char$p* __result_obj__116;
    __result_obj__116 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value85=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value85, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_466;
struct list$1short$* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_466=0    ;    i_466<num_value    ;    i_466++    ){
        list$1short$_push_back(self,values[i_466]);
    }
    __result_obj__118 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value87 = (void*)0;
struct list_item$1short$* litem_467;
void* __right_value88 = (void*)0;
struct list_item$1short$* litem_468;
void* __right_value89 = (void*)0;
struct list_item$1short$* litem_469;
struct list$1short$* __result_obj__117;
    if(    self->len==0    ) {
        litem_467=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value87=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_467->prev=((void*)0);
        litem_467->next=((void*)0);
        litem_467->item=item;
        self->tail=litem_467;
        self->head=litem_467;
    }
    else if(    self->len==1    ) {
        litem_468=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value88=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_468->prev=self->head;
        litem_468->next=((void*)0);
        litem_468->item=item;
        self->tail=litem_468;
        self->head->next=litem_468;
    }
    else {
        litem_469=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value89=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_469->prev=self->tail;
        litem_469->next=((void*)0);
        litem_469->item=item;
        self->tail->next=litem_469;
        self->tail=litem_469;
    }
    self->len++;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_470;
struct list_item$1short$* prev_it_471;
    it_470=self->head;
    while(    it_470!=((void*)0)    ) {
        prev_it_471=it_470;
        it_470=it_470->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_471, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value86 = (void*)0;
void* __right_value90 = (void*)0;
struct list$1short$* __result_obj__119;
    __result_obj__119 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value90=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_472;
struct list$1int$* __result_obj__121;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_472=0    ;    i_472<num_value    ;    i_472++    ){
        list$1int$_push_back(self,values[i_472]);
    }
    __result_obj__121 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value92 = (void*)0;
struct list_item$1int$* litem_473;
void* __right_value93 = (void*)0;
struct list_item$1int$* litem_474;
void* __right_value94 = (void*)0;
struct list_item$1int$* litem_475;
struct list$1int$* __result_obj__120;
    if(    self->len==0    ) {
        litem_473=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value92=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_473->prev=((void*)0);
        litem_473->next=((void*)0);
        litem_473->item=item;
        self->tail=litem_473;
        self->head=litem_473;
    }
    else if(    self->len==1    ) {
        litem_474=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value93=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_474->prev=self->head;
        litem_474->next=((void*)0);
        litem_474->item=item;
        self->tail=litem_474;
        self->head->next=litem_474;
    }
    else {
        litem_475=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value94=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_475->prev=self->tail;
        litem_475->next=((void*)0);
        litem_475->item=item;
        self->tail->next=litem_475;
        self->tail=litem_475;
    }
    self->len++;
    __result_obj__120 = self;
    return __result_obj__120;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_476;
struct list_item$1int$* prev_it_477;
    it_476=self->head;
    while(    it_476!=((void*)0)    ) {
        prev_it_477=it_476;
        it_476=it_476->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_477, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1int$* __result_obj__122;
    __result_obj__122 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value95=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value95, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_478;
struct list$1long$* __result_obj__124;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_478=0    ;    i_478<num_value    ;    i_478++    ){
        list$1long$_push_back(self,values[i_478]);
    }
    __result_obj__124 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value97 = (void*)0;
struct list_item$1long$* litem_479;
void* __right_value98 = (void*)0;
struct list_item$1long$* litem_480;
void* __right_value99 = (void*)0;
struct list_item$1long$* litem_481;
struct list$1long$* __result_obj__123;
    if(    self->len==0    ) {
        litem_479=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value97=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_479->prev=((void*)0);
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail=litem_479;
        self->head=litem_479;
    }
    else if(    self->len==1    ) {
        litem_480=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value98=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_480->prev=self->head;
        litem_480->next=((void*)0);
        litem_480->item=item;
        self->tail=litem_480;
        self->head->next=litem_480;
    }
    else {
        litem_481=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value99=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_481->prev=self->tail;
        litem_481->next=((void*)0);
        litem_481->item=item;
        self->tail->next=litem_481;
        self->tail=litem_481;
    }
    self->len++;
    __result_obj__123 = self;
    return __result_obj__123;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_482;
struct list_item$1long$* prev_it_483;
    it_482=self->head;
    while(    it_482!=((void*)0)    ) {
        prev_it_483=it_482;
        it_482=it_482->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1long$* __result_obj__125;
    __result_obj__125 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value100=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value100, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_484;
struct list$1float$* __result_obj__127;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_484=0    ;    i_484<num_value    ;    i_484++    ){
        list$1float$_push_back(self,values[i_484]);
    }
    __result_obj__127 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value102 = (void*)0;
struct list_item$1float$* litem_485;
void* __right_value103 = (void*)0;
struct list_item$1float$* litem_486;
void* __right_value104 = (void*)0;
struct list_item$1float$* litem_487;
struct list$1float$* __result_obj__126;
    if(    self->len==0    ) {
        litem_485=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value102=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_485->prev=((void*)0);
        litem_485->next=((void*)0);
        litem_485->item=item;
        self->tail=litem_485;
        self->head=litem_485;
    }
    else if(    self->len==1    ) {
        litem_486=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value103=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_486->prev=self->head;
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail=litem_486;
        self->head->next=litem_486;
    }
    else {
        litem_487=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value104=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_487->prev=self->tail;
        litem_487->next=((void*)0);
        litem_487->item=item;
        self->tail->next=litem_487;
        self->tail=litem_487;
    }
    self->len++;
    __result_obj__126 = self;
    return __result_obj__126;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_488;
struct list_item$1float$* prev_it_489;
    it_488=self->head;
    while(    it_488!=((void*)0)    ) {
        prev_it_489=it_488;
        it_488=it_488->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_489, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1float$* __result_obj__128;
    __result_obj__128 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value105=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value105, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_490;
struct list$1double$* __result_obj__130;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_490=0    ;    i_490<num_value    ;    i_490++    ){
        list$1double$_push_back(self,values[i_490]);
    }
    __result_obj__130 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value107 = (void*)0;
struct list_item$1double$* litem_491;
void* __right_value108 = (void*)0;
struct list_item$1double$* litem_492;
void* __right_value109 = (void*)0;
struct list_item$1double$* litem_493;
struct list$1double$* __result_obj__129;
    if(    self->len==0    ) {
        litem_491=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value107=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_491->prev=((void*)0);
        litem_491->next=((void*)0);
        litem_491->item=item;
        self->tail=litem_491;
        self->head=litem_491;
    }
    else if(    self->len==1    ) {
        litem_492=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value108=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_492->prev=self->head;
        litem_492->next=((void*)0);
        litem_492->item=item;
        self->tail=litem_492;
        self->head->next=litem_492;
    }
    else {
        litem_493=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value109=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_493->prev=self->tail;
        litem_493->next=((void*)0);
        litem_493->item=item;
        self->tail->next=litem_493;
        self->tail=litem_493;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_494;
struct list_item$1double$* prev_it_495;
    it_494=self->head;
    while(    it_494!=((void*)0)    ) {
        prev_it_495=it_494;
        it_494=it_494->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_495, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1double$* __result_obj__131;
    __result_obj__131 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value110=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
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
void* __right_value111 = (void*)0;
char* __result_obj__132;
int len_496;
void* __right_value112 = (void*)0;
char* result_497;
char* __result_obj__133;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_496=strlen(self)+strlen(right);
    result_497=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_496+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_497,self,len_496+1);
    strncat(result_497,right,len_496+1);
    __result_obj__133 = (char*)come_increment_ref_count(result_497);
    (result_497 = come_decrement_ref_count(result_497, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* string_operator_add(char* self, char* right){
void* __right_value113 = (void*)0;
char* __result_obj__134;
int len_498;
void* __right_value114 = (void*)0;
char* result_499;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_498=strlen(self)+strlen(right);
    result_499=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_498+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_499,self,len_498+1);
    strncat(result_499,right,len_498+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_499);
    (result_499 = come_decrement_ref_count(result_499, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_operator_mult(char* self, int right){
void* __right_value115 = (void*)0;
char* __result_obj__136;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct buffer* buf_500;
int i_501;
void* __right_value118 = (void*)0;
char* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    buf_500=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_501=0    ;    i_501<right    ;    i_501++    ){
        buffer_append_str(buf_500,self);
    }
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value118=buffer_to_string(buf_500))));
    come_call_finalizer(buffer_finalize, buf_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* string_operator_mult(char* self, int right){
void* __right_value119 = (void*)0;
char* __result_obj__138;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct buffer* buf_502;
int i_503;
void* __right_value122 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_502=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_503=0    ;    i_503<right    ;    i_503++    ){
        buffer_append_str(buf_502,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value122=buffer_to_string(buf_502))));
    come_call_finalizer(buffer_finalize, buf_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_504;
int i_505;
    result_504=(_Bool)0;
    for(    i_505=0    ;    i_505<len    ;    i_505++    ){
        if(        strncmp(self[i_505],str,strlen(self[i_505]))==0        ) {
            result_504=(_Bool)1;
            break;
        }
    }
    return result_504;
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
int result_506;
char* p_507;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_506=0;
    p_507=value;
    while(    *p_507    ) {
        result_506+=(*p_507);
        p_507++;
    }
    return result_506;
}

unsigned int string_get_hash_key(char* value){
int result_508;
char* p_509;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_508=0;
    p_509=value;
    while(    *p_509    ) {
        result_508+=(*p_509);
        p_509++;
    }
    return result_508;
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
_Bool result_510;
    result_510=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_510;
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
_Bool result_511;
    result_511=(c>=32&&c<=126);
    return result_511;
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
void* __right_value123 = (void*)0;
char* __result_obj__140;
int len_512;
void* __right_value124 = (void*)0;
char* result_513;
int i_514;
char* __result_obj__141;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_512=strlen(str);
    result_513=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_512+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_514=0    ;    i_514<len_512    ;    i_514++    ){
        result_513[i_514]=str[len_512-i_514-1];
    }
    result_513[len_512]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_513);
    (result_513 = come_decrement_ref_count(result_513, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value125 = (void*)0;
char* __result_obj__142;
int len_515;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
char* __result_obj__143;
void* __right_value128 = (void*)0;
char* __result_obj__144;
void* __right_value129 = (void*)0;
char* __result_obj__145;
void* __right_value130 = (void*)0;
char* result_516;
char* __result_obj__146;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_515=strlen(str);
    if(    head<0    ) {
        head+=len_515;
    }
    if(    tail<0    ) {
        tail+=len_515+1;
    }
    if(    head>tail    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value127=charp_reverse(((char*)(__right_value126=charp_substring(str,tail,head)))))));
        (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_515    ) {
        tail=len_515;
    }
    if(    head==tail    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value128=__builtin_string(""))));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    tail-head+1<1    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    result_516=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_516,str+head,tail-head);
    result_516[tail-head]=0;
    __result_obj__146 = (char*)come_increment_ref_count(result_516);
    (result_516 = come_decrement_ref_count(result_516, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value131 = (void*)0;
char* __result_obj__147;
int len_517;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
char* __result_obj__148;
void* __right_value134 = (void*)0;
char* __result_obj__149;
void* __right_value135 = (void*)0;
char* __result_obj__150;
void* __right_value136 = (void*)0;
char* result_518;
char* __result_obj__151;
    if(    str==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value131=__builtin_string(""))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    len_517=strlen(str);
    if(    head<0    ) {
        head+=len_517;
    }
    if(    tail<0    ) {
        tail+=len_517+1;
    }
    if(    head>tail    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value133=charp_reverse(((char*)(__right_value132=charp_substring(str,tail,head)))))));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_517    ) {
        tail=len_517;
    }
    if(    head==tail    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(""))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    if(    tail-head+1<1    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(""))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    result_518=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_518,str+head,tail-head);
    result_518[tail-head]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_518);
    (result_518 = come_decrement_ref_count(result_518, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value137 = (void*)0;
char* __result_obj__152;
int len_519;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
char* __result_obj__153;
void* __right_value140 = (void*)0;
char* __result_obj__154;
void* __right_value141 = (void*)0;
char* __result_obj__155;
void* __right_value142 = (void*)0;
char* result_520;
char* __result_obj__156;
    if(    str==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(""))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    len_519=strlen(str);
    if(    head<0    ) {
        head+=len_519;
    }
    if(    tail<0    ) {
        tail+=len_519+1;
    }
    if(    head>tail    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value139=charp_reverse(((char*)(__right_value138=charp_substring(str,tail,head)))))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_519    ) {
        tail=len_519;
    }
    if(    head==tail    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    if(    tail-head+1<1    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_520=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_520,str+head,tail-head);
    result_520[tail-head]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_520);
    (result_520 = come_decrement_ref_count(result_520, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xsprintf(char* msg, ...){
void* __right_value143 = (void*)0;
char* __result_obj__157;
va_list args_521;
char* result_522;
int len_523;
void* __right_value144 = (void*)0;
char* __result_obj__158;
void* __right_value145 = (void*)0;
char* result2_524;
char* __result_obj__159;
result_522 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __builtin_va_start(args_521,msg);
    len_523=vasprintf(&result_522,msg,args_521);
    __builtin_va_end(args_521);
    if(    len_523<0    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    result2_524=(char*)come_increment_ref_count(__builtin_string(result_522));
    free(result_522);
    __result_obj__159 = (char*)come_increment_ref_count(result2_524);
    (result2_524 = come_decrement_ref_count(result2_524, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value146 = (void*)0;
char* __result_obj__160;
int len_525;
void* __right_value147 = (void*)0;
char* __result_obj__161;
void* __right_value148 = (void*)0;
char* __result_obj__162;
void* __right_value149 = (void*)0;
char* result_526;
char* __result_obj__163;
    if(    str==((void*)0)    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    len_525=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(str))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    if(    head<0    ) {
        head+=len_525;
    }
    if(    tail<0    ) {
        tail+=len_525+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(str))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    if(    tail>=len_525    ) {
        tail=len_525;
    }
    result_526=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_525-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_526,str,head);
    memcpy(result_526+head,str+tail,len_525-tail);
    result_526[len_525-(tail-head)]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_526);
    (result_526 = come_decrement_ref_count(result_526, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__164;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__164 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__164;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_527;
struct list_item$1char$ph* prev_it_528;
    it_527=self->head;
    while(    it_527!=((void*)0)    ) {
        prev_it_528=it_527;
        it_527=it_527->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value156 = (void*)0;
struct list_item$1char$ph* litem_532;
char* __dec_obj21;
void* __right_value157 = (void*)0;
struct list_item$1char$ph* litem_533;
char* __dec_obj22;
void* __right_value158 = (void*)0;
struct list_item$1char$ph* litem_534;
char* __dec_obj23;
struct list$1char$ph* __result_obj__166;
    if(    self->len==0    ) {
        litem_532=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value156=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_532->prev=((void*)0);
        litem_532->next=((void*)0);
        __dec_obj21=litem_532->item,
        litem_532->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_532;
        self->head=litem_532;
    }
    else if(    self->len==1    ) {
        litem_533=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value157=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_533->prev=self->head;
        litem_533->next=((void*)0);
        __dec_obj22=litem_533->item,
        litem_533->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_533;
        self->head->next=litem_533;
    }
    else {
        litem_534=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value158=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_534->prev=self->tail;
        litem_534->next=((void*)0);
        __dec_obj23=litem_534->item,
        litem_534->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_534;
        self->tail=litem_534;
    }
    self->len++;
    __result_obj__166 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__166;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct list$1char$ph* __result_obj__165;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct list$1char$ph* result_529;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct buffer* str_530;
int i_531;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct list$1char$ph* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value151=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value151, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__165;
    }
    result_529=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_531=0    ;    i_531<charp_length(self)    ;    i_531++    ){
        if(        self[i_531]==c        ) {
            list$1char$ph_push_back(result_529,(char*)come_increment_ref_count(__builtin_string(str_530->buf)));
            buffer_reset(str_530);
        }
        else {
            buffer_append_char(str_530,self[i_531]);
        }
    }
    if(    buffer_length(str_530)!=0    ) {
        list$1char$ph_push_back(result_529,(char*)come_increment_ref_count(__builtin_string(str_530->buf)));
    }
    __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(result_529);
    come_call_finalizer(list$1char$ph$p_finalize, result_529, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value161 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf(msg,self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value162 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf(msg,self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_printable(char* str){
int len_535;
void* __right_value163 = (void*)0;
char* result_536;
int n_537;
int i_538;
char c_539;
char* __result_obj__170;
    len_535=charp_length(str);
    result_536=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_535*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_537=0;
    for(    i_538=0    ;    i_538<len_535    ;    i_538++    ){
        c_539=str[i_538];
        if(        (c_539>=0&&c_539<32)||c_539==127        ) {
            result_536[n_537++]=94;
            result_536[n_537++]=c_539+65-1;
        }
        else {
            result_536[n_537++]=c_539;
        }
    }
    result_536[n_537]=0;
    __result_obj__170 = (char*)come_increment_ref_count(result_536);
    (result_536 = come_decrement_ref_count(result_536, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value164 = (void*)0;
char* __result_obj__171;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct buffer* result_540;
char* p_541;
char* p2_542;
void* __right_value167 = (void*)0;
char* __result_obj__172;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(self))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    result_540=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_541=self;
    while(    (_Bool)1    ) {
        p2_542=strstr(p_541,str);
        if(        p2_542==((void*)0)        ) {
            p2_542=p_541;
            while(            *p2_542            ) {
                p2_542++;
            }
            buffer_append(result_540,p_541,p2_542-p_541);
            break;
        }
        buffer_append(result_540,p_541,p2_542-p_541);
        buffer_append_str(result_540,replace);
        p_541=p2_542+strlen(str);
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value167=buffer_to_string(result_540))));
    come_call_finalizer(buffer_finalize, result_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* xbasename(char* path){
void* __right_value168 = (void*)0;
char* __result_obj__173;
char* p_543;
void* __right_value169 = (void*)0;
char* __result_obj__174;
void* __right_value170 = (void*)0;
char* __result_obj__175;
void* __right_value171 = (void*)0;
char* __result_obj__176;
    if(    path==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    p_543=path+strlen(path);
    while(    p_543>=path    ) {
        if(        *p_543==47        ) {
            break;
        }
        else {
            p_543--;
        }
    }
    if(    p_543<path    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(path))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    else {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(p_543+1))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* xnoextname(char* path){
void* __right_value172 = (void*)0;
char* __result_obj__177;
void* __right_value173 = (void*)0;
char* path2_544;
char* p_545;
void* __right_value174 = (void*)0;
char* __result_obj__178;
void* __right_value175 = (void*)0;
char* __result_obj__179;
void* __right_value176 = (void*)0;
char* __result_obj__180;
    if(    path==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    path2_544=(char*)come_increment_ref_count(xbasename(path));
    p_545=path2_544+strlen(path2_544);
    while(    p_545>=path2_544    ) {
        if(        *p_545==46        ) {
            break;
        }
        else {
            p_545--;
        }
    }
    if(    p_545<path2_544    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(path2_544))));
        (path2_544 = come_decrement_ref_count(path2_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value175=charp_substring(path2_544,0,p_545-path2_544))));
        (path2_544 = come_decrement_ref_count(path2_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
    (path2_544 = come_decrement_ref_count(path2_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* xextname(char* path){
void* __right_value177 = (void*)0;
char* __result_obj__181;
char* p_546;
void* __right_value178 = (void*)0;
char* __result_obj__182;
void* __right_value179 = (void*)0;
char* __result_obj__183;
void* __right_value180 = (void*)0;
char* __result_obj__184;
    if(    path==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    p_546=path+strlen(path);
    while(    p_546>=path    ) {
        if(        *p_546==46        ) {
            break;
        }
        else {
            p_546--;
        }
    }
    if(    p_546<path    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(path))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    else {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(p_546+1))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(""))));
    (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* bool_to_string(_Bool self){
void* __right_value181 = (void*)0;
char* __result_obj__185;
void* __right_value182 = (void*)0;
char* __result_obj__186;
    if(    self    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value181=__builtin_string("true"))));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    else {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string("false"))));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value183 = (void*)0;
char* __result_obj__187;
void* __right_value184 = (void*)0;
char* __result_obj__188;
    if(    self    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value183=__builtin_string("true"))));
        (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    else {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string("false"))));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
}

char* char_to_string(char self){
void* __right_value185 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value185=xsprintf("%c",self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

char* short_to_string(short self){
void* __right_value186 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value186=xsprintf("%d",self))));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* int_to_string(int self){
void* __right_value187 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value187=xsprintf("%d",self))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* long_to_string(long self){
void* __right_value188 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value188=xsprintf("%ld",self))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__192;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value189 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value189=xsprintf("%ld",self))));
    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* float_to_string(float self){
void* __right_value190 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value190=xsprintf("%f",self))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__194;
}

char* double_to_string(double self){
void* __right_value191 = (void*)0;
char* __result_obj__195;
    __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value191=xsprintf("%lf",self))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* string_to_string(char* self){
void* __right_value192 = (void*)0;
char* __result_obj__196;
void* __right_value193 = (void*)0;
char* __result_obj__197;
    if(    self==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string(""))));
        (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value193=__builtin_string(self))));
    (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* charp_to_string(char* self){
void* __right_value194 = (void*)0;
char* __result_obj__198;
void* __right_value195 = (void*)0;
char* __result_obj__199;
    if(    self==((void*)0)    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string(""))));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string(self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__199;
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
void* __right_value196 = (void*)0;
char* __result_obj__200;
void* __right_value197 = (void*)0;
char* __result_obj__201;
    if(    self==((void*)0)    ) {
        __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string(""))));
        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__200;
    }
    puts(self);
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
    (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
}

char* charp_print(char* self){
void* __right_value198 = (void*)0;
char* __result_obj__202;
void* __right_value199 = (void*)0;
char* __result_obj__203;
    if(    self==((void*)0)    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value198=__builtin_string(""))));
        (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    printf("%s",self);
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value199=__builtin_string(self))));
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_printf(char* self, ...){
void* __right_value200 = (void*)0;
char* __result_obj__204;
char* msg2_547;
va_list args_548;
void* __right_value201 = (void*)0;
char* __result_obj__205;
msg2_547 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value200=__builtin_string(""))));
        (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    __builtin_va_start(args_548,self);
    vasprintf(&msg2_547,self,args_548);
    __builtin_va_end(args_548);
    printf("%s",msg2_547);
    free(msg2_547);
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string(self))));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_549;
    for(    i_549=0    ;    i_549<self    ;    i_549++    ){
        block(parent,i_549);
    }
}

