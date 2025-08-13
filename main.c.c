/// previous struct definition ///
struct file;

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
    struct file* linked_file[32];
    int num_linked_file;
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
    int pipe_used;
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
  0xe0, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x35, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x6d, 0xba, 0x97, 0x9c, 0x43,
  0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x6c,
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
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x62, 0x23, 0x3c, 0xf4, 0xfc,
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
  0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x21, 0x71, 0x06, 0xff,
  0x22, 0xfb, 0x80, 0x03, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0xe7, 0x3e, 0xbe, 0x85, 0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x23, 0x34, 0xa4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x01, 0x45,
  0x93, 0x07, 0x84, 0xf5, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x10, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfc, 0x05, 0x45, 0x93, 0x07,
  0x84, 0xf5, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x23, 0x3c, 0xa4, 0xfa, 0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87,
  0xa1, 0x47, 0x63, 0x09, 0xf7, 0x00, 0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87,
  0x93, 0x07, 0xf0, 0x07, 0x63, 0x1f, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xfe,
  0x63, 0x5b, 0xf0, 0x02, 0x83, 0x37, 0x84, 0xfe, 0xfd, 0x17, 0x23, 0x34,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x88,
  0x07, 0xf6, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x47, 0x37,
  0xbe, 0x85, 0x0d, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x38, 0xa4, 0xfa, 0x15, 0xa8, 0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87,
  0xb5, 0x47, 0x63, 0x06, 0xf7, 0x02, 0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87,
  0xa9, 0x47, 0x63, 0x02, 0xf7, 0x02, 0x03, 0x47, 0x84, 0xf5, 0x83, 0x37,
  0x84, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x88, 0xe7, 0xf6, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0xb9, 0xb7, 0x01, 0x00,
  0x11, 0xa0, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xc1, 0x17, 0xa2, 0x97,
  0x23, 0x88, 0x07, 0xf6, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0xa7, 0x31, 0xbe, 0x85, 0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x23, 0x34, 0xa4, 0xfa, 0x83, 0x47, 0x04, 0xf6, 0x63, 0x82,
  0x07, 0x28, 0x23, 0x22, 0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe, 0x93, 0x07,
  0x04, 0xf6, 0x23, 0x3c, 0xf4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x83, 0x37,
  0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x07,
  0x63, 0x14, 0xf7, 0x0a, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c,
  0xf4, 0xfc, 0x31, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c,
  0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0x93, 0x07, 0x00, 0x02, 0xe3, 0x04, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfd,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47, 0xe3, 0x0c, 0xf7, 0xfc,
  0x83, 0x27, 0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00,
  0x93, 0x07, 0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17,
  0x33, 0x87, 0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x80,
  0x07, 0xe6, 0x03, 0x27, 0x44, 0xfe, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07,
  0xf7, 0x02, 0xc1, 0x17, 0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe, 0x23, 0xa8,
  0xe7, 0xe8, 0x83, 0x27, 0x44, 0xfe, 0x85, 0x27, 0x23, 0x22, 0xf4, 0xfe,
  0x23, 0x34, 0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfe,
  0x1b, 0x87, 0x07, 0x00, 0x91, 0x47, 0xe3, 0xde, 0xe7, 0xf4, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x65, 0x24, 0xef, 0xf0, 0x1f, 0xc3, 0xb1, 0xaa,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0x00, 0x02, 0x63, 0x00, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47, 0x63, 0x11, 0xf7, 0x08, 0x31, 0xa0,
  0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37,
  0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x00, 0x02,
  0xe3, 0x04, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0xa5, 0x47, 0xe3, 0x0c, 0xf7, 0xfc, 0x83, 0x27, 0x04, 0xfe,
  0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03,
  0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87, 0x87, 0x00,
  0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x80, 0x07, 0xe6, 0x83, 0x27,
  0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x23, 0x34, 0x04, 0xfe,
  0x83, 0x27, 0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x89, 0x47, 0x63, 0xd5,
  0xe7, 0x0c, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x65, 0x1b, 0xef, 0xf0,
  0x1f, 0xb9, 0x75, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0xb9, 0xeb, 0x83, 0x27, 0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97,
  0x47, 0x00, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97,
  0xc1, 0x17, 0x33, 0x87, 0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97,
  0x23, 0x80, 0x07, 0xe6, 0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20,
  0xf4, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07,
  0xf7, 0x02, 0xc1, 0x17, 0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe, 0x23, 0xa8,
  0xe7, 0xe8, 0x83, 0x27, 0x44, 0xfe, 0x85, 0x27, 0x23, 0x22, 0xf4, 0xfe,
  0xb9, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x03, 0xc7, 0x07, 0x00, 0x83, 0x27,
  0x04, 0xfe, 0x03, 0x26, 0x44, 0xfe, 0x93, 0x96, 0x47, 0x00, 0x93, 0x07,
  0x40, 0x03, 0xb3, 0x07, 0xf6, 0x02, 0xb6, 0x97, 0xc1, 0x17, 0xb3, 0x86,
  0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xb6, 0x97, 0x23, 0x80, 0xe7, 0xe6,
  0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x03, 0x37, 0x84, 0xfe,
  0xbd, 0x47, 0xe3, 0xd2, 0xe7, 0xe0, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0xe5, 0x10, 0xef, 0xf0, 0x9f, 0xad, 0x11, 0xa0, 0xcd, 0xbb, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x22, 0xf4, 0xfa,
  0x83, 0x27, 0x44, 0xfa, 0x81, 0x27, 0x99, 0xeb, 0x03, 0x27, 0x44, 0xfe,
  0x93, 0x07, 0x04, 0xe5, 0x3a, 0x86, 0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0,
  0x7f, 0xae, 0x7d, 0xb1, 0x23, 0x2a, 0x04, 0xfc, 0x29, 0xa8, 0x93, 0x07,
  0xc4, 0xe4, 0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x83, 0x27, 0x44, 0xfd, 0x85, 0x27, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27,
  0x44, 0xfd, 0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27,
  0xe3, 0x4d, 0xf7, 0xfc, 0xb5, 0xb9, 0x01, 0x00, 0xa5, 0xb9, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00,
  0x00, 0xfa, 0xff, 0xff, 0x44, 0xf9, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x28, 0xfa, 0xff, 0xff, 0x88, 0xf9, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x28, 0xfa, 0xff, 0xff, 0xb8, 0xf9, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff, 0x28, 0xfa, 0xff, 0xff,
  0x66, 0xf9, 0xff, 0xff, 0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x45, 0x52, 0x52, 0x20, 0x4d, 0x41, 0x58, 0x20,
  0x43, 0x4f, 0x4d, 0x4d, 0x41, 0x4e, 0x44, 0x00, 0x41, 0x52, 0x47, 0x20,
  0x4e, 0x55, 0x4d, 0x20, 0x45, 0x52, 0x52, 0x4f, 0x52, 0x00, 0x00, 0x00,
  0x45, 0x52, 0x52, 0x20, 0x41, 0x52, 0x47, 0x20, 0x4e, 0x55, 0x4d, 0x00,
  0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36,
  0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30,
  0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00,
  0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34,
  0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32,
  0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32,
  0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c,
  0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x78, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x6e, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xba, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x1c, 0x26, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x1c, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xe2, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xbc, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x20, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xe0, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x92, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xa8, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x1c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x20, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xbe, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x73, 0x68,
  0x2e, 0x63, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70,
  0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f,
  0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61,
  0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63,
  0x31, 0x70, 0x30, 0x00, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72, 0x00,
  0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f,
  0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24,
  0x00, 0x72, 0x75, 0x6e, 0x5f, 0x63, 0x6f, 0x6d, 0x6d, 0x61, 0x6e, 0x64,
  0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47,
  0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x72,
  0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00,
  0x73, 0x74, 0x72, 0x6e, 0x63, 0x70, 0x79, 0x00, 0x5f, 0x5f, 0x42, 0x53,
  0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73,
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
  0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x0c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0d, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x35, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xab, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int msh_elf_len=5104;
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
    unsigned long  long memsz;
    unsigned long  long sz;
    int zombie;
    unsigned long  long* pagetable;
    char* program;
    int xstatus;
    struct file* file_table[16];
    char* process_kalloc_address[64];
    int num_process_kalloc_address;
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
struct proc* gProc[1024];
int gNumProc;
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
void alloc_prog(char* elf_buf, int fork_flag, int exec_flag, int* child_proc_index);
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
void console_init();
int Sys_write();
int Sys_exit();
int Sys_wait();
int Sys_open();
int Sys_fork();
int Sys_execv();
void uvmunmap(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long npages, int do_free);
void uvm_dealloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz);
int uvm_alloc(struct proc* p, unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz);
int Sys_brk();
int Sys_dup2();
int Sys_pipe();
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX313, unsigned long  int anonymous_var_nameX314, unsigned long  int anonymous_var_nameX315, unsigned long  long anonymous_var_nameX316, unsigned long  long anonymous_var_nameX317);
void timerinit();
struct proc* get_current_proc();
void global_init();
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
unsigned long  long x_10;
memset(&x_10, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_10));
    return x_10;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_11;
memset(&x_11, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_11));
    return x_11;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_12;
    x_12=r_sstatus();
    x_12|=(1L<<1);
    w_sstatus(x_12);
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
unsigned long  long x_13;
    x_13=r_sstatus();
    return (x_13&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_87;
memset(&x_87, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_87));
    return x_87;
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
unsigned long  long x_259;
memset(&x_259, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_259));
    return x_259;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_260;
memset(&sp_val_260, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出オペランド %0 に
        : "=r"(sp_val_260): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_260;
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
unsigned long  long stack_base_6;
int i_7;
char* pa_8;
int i_9;
    stack_base_6=1073741824UL-16*4096;
    for(    i_7=0    ;    i_7<16    ;    i_7++    ){
        pa_8=walkaddr(p->pagetable,stack_base_6+i_7*4096);
        kfree(pa_8);
    }
    for(    i_9=0    ;    i_9<p->num_process_kalloc_address    ;    i_9++    ){
        kfree(p->process_kalloc_address[i_9]);
    }
    free_pagetable(p->pagetable,2);
    kfree(p->pagetable);
    kfree(p);
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
int r_14;
memset(&r_14, 0, sizeof(int));
    r_14=(lk->locked&&lk->cpu==mycpu());
    return r_14;
}

void push_off(){
int old_15;
    old_15=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_15;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_16;
    c_16=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_16->noff<1    ) {
        panic("pop_off");
    }
    c_16->noff-=1;
    if(    c_16->noff==0&&c_16->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_17;
p_17 = (void*)0;
    p_17=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_17+4096<=(char*)pa_end    ;    p_17+=4096    ){
        kfree(p_17);
    }
}

void kfree(void* pa){
struct run* r_18;
r_18 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        puts("kfree panic");
        while(        1        ) {
            ;
        }
    }
    memset(pa,0,4096);
    r_18=(struct run*)kmem.freelist;
    while(    r_18    ) {
        if(        r_18==pa        ) {
            return;
        }
        r_18=r_18->next;
    }
    r_18=(struct run*)pa;
    acquire(&kmem.lock);
    r_18->next=kmem.freelist;
    kmem.freelist=r_18;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_19;
void* __result_obj__4;
r_19 = (void*)0;
    acquire(&kmem.lock);
    r_19=kmem.freelist;
    if(    r_19    ) {
        kmem.freelist=r_19->next;
    }
    release(&kmem.lock);
    if(    r_19    ) {
        memset((char*)r_19,0,4096);
    }
    __result_obj__4 = (void*)r_19;
    return __result_obj__4;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_20;
unsigned long  long* pte_21;
unsigned long  long* __result_obj__5;
unsigned long  long* __result_obj__6;
    for(    level_20=2    ;    level_20>0    ;    level_20--    ){
        pte_21=(unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_20))))&511)];
        if(        *pte_21&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_21)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__5 = (void*)0;
                return __result_obj__5;
            }
            memset(pagetable,0,4096);
            *pte_21=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__6 = (unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__6;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_22;
unsigned long  long last_23;
unsigned long  long* pte_24;
memset(&a_22, 0, sizeof(unsigned long  long));
memset(&last_23, 0, sizeof(unsigned long  long));
pte_24 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_22=va;
    last_23=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_24=walk(pagetable,a_22,1))==0        ) {
            return -1;
        }
        if(        *pte_24&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_24&1023,perm);
        }
        *pte_24=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_22==last_23        ) {
            break;
        }
        a_22+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_25;
int i_26;
    ptr_25=(unsigned int*)pa;
    for(    i_26=0    ;    i_26<count    ;    i_26++    ){
        if(        i_26%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_25+i_26));
        }
        printf("%p ",ptr_25[i_26]);
        if(        i_26%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_27;
unsigned long  long pte_28;
unsigned long  long pa_29;
unsigned long  long child_va_30;
int j_31;
    for(    i_27=0    ;    i_27<512    ;    i_27++    ){
        pte_28=pagetable[i_27];
        if(        pte_28&(1L<<0)        ) {
            pa_29=(((pte_28)>>10)<<12);
            child_va_30=va|((unsigned long  long)i_27<<(12+9*(2-level)));
            for(            j_31=0            ;            j_31<level            ;            j_31++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_30,pa_29,i_27,level);
            if(            (pte_28&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_28&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_28&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_28&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_28&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_28&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_28&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_29,child_va_30,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_32;
    satp_32=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_32));
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
void* __result_obj__7;
void* __result_obj__8;
void* __result_obj__9;
unsigned long  long pa_38;
void* __result_obj__10;
    pte_37=walk(pagetable,va,0);
    if(    pte_37==0    ) {
        __result_obj__7 = (void*)0;
        return __result_obj__7;
    }
    if(    (*pte_37&(1L<<0))==0    ) {
        __result_obj__8 = (void*)0;
        return __result_obj__8;
    }
    if(    (*pte_37&(1L<<4))==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    pa_38=(((*pte_37)>>10)<<12);
    __result_obj__10 = (void*)(pa_38+(va&(4096-1)));
    return __result_obj__10;
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
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    for(    i_52=0    ;    i_52<32    ;    i_52++    ){
        mappages(pagetable,(unsigned long  long)COMMON+i_52*4096,4096,(unsigned long  long)COMMON+i_52*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* elf_buf, int fork_flag, int exec_flag, int* child_proc_index){
struct proc* result_53;
unsigned long  long* pagetable_54;
struct elfhdr* eh_55;
struct proghdr* ph_56;
unsigned long  long va_57;
unsigned long  long max_va_end_58;
int i_59;
void* pa_60;
unsigned long  long gp_61;
struct elfshdr* sh_62;
struct elfsym* symtab_64;
int symtab_size_66;
int i_67;
int i_68;
struct proc* parent_69;
unsigned long  long parent_current_70;
unsigned long  long parent_stack_top_71;
unsigned long  long stack_base_72;
int i_73;
char* pa_74;
char* src_75;
struct proc* parent_76;
unsigned long  long stack_base_77;
int i_78;
char* pa_79;
struct proc* parent_80;
int found_81;
int i_82;
    result_53=kalloc();
    result_53->program=elf_buf;
    pagetable_54=(unsigned long  long*)kalloc();
    memset(pagetable_54,0,4096);
    setting_user_pagetable(result_53,pagetable_54);
    result_53->pagetable=pagetable_54;
    eh_55=(struct elfhdr*)elf_buf;
    if(    eh_55->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic: not elf");
        }
    }
    ph_56=(struct proghdr*)(elf_buf+eh_55->phoff);
    result_53->num_process_kalloc_address=0;
    va_57=0;
    max_va_end_58=0;
    for(    i_59=0    ;    i_59<eh_55->phnum    ;    i_59++,ph_56++    ){
        if(        ph_56->type!=1        ) {
            continue;
        }
        if(        ph_56->vaddr+ph_56->memsz>max_va_end_58        ) {
            max_va_end_58=ph_56->vaddr+ph_56->memsz;
        }
        for(        va_57=(((ph_56->vaddr))&~(4096-1))        ;        va_57<ph_56->vaddr+ph_56->memsz        ;        va_57+=4096        ){
            pa_60=kalloc();
            result_53->process_kalloc_address[result_53->num_process_kalloc_address++]=pa_60;
            if(            result_53->num_process_kalloc_address>=64            ) {
                puts("ELF MAX ERROR");
                while(                1                ) {
                    ;
                }
            }
            if(            !pa_60            ) {
                panic("kalloc");
            }
            memset(pa_60,0,4096);
            mappages(result_53->pagetable,va_57,4096,(unsigned long  long)pa_60,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
        }
        if(        copyout(result_53->pagetable,ph_56->vaddr,elf_buf+ph_56->off,ph_56->filesz)<0        ) {
            panic("copyout");
        }
    }
    result_53->vaddr=ph_56->vaddr;
    result_53->memsz=ph_56->memsz;
    gp_61=0;
    sh_62=(struct elfshdr*)(elf_buf+eh_55->shoff);
    const char* shstrtab_63=elf_buf+sh_62[eh_55->shstrndx].offset;
    symtab_64=(void*)0;
    const char* strtab_65=(void*)0;
    symtab_size_66=0;
    for(    i_67=0    ;    i_67<eh_55->shnum    ;    i_67++    ){
        if(        strcmp(shstrtab_63+sh_62[i_67].name,".symtab")==0        ) {
            symtab_64=(struct elfsym*)(elf_buf+sh_62[i_67].offset);
            symtab_size_66=sh_62[i_67].size;
        }
        if(        strcmp(shstrtab_63+sh_62[i_67].name,".strtab")==0        ) {
            strtab_65=elf_buf+sh_62[i_67].offset;
        }
    }
    if(    symtab_64&&strtab_65    ) {
        for(        i_68=0        ;        i_68<symtab_size_66/sizeof(struct elfsym)        ;        i_68++        ){
            if(            strcmp(strtab_65+symtab_64[i_68].name,"__global_pointer$")==0            ) {
                gp_61=symtab_64[i_68].value;
                break;
            }
        }
    }
    if(    gp_61==0    ) {
    }
    if(    fork_flag    ) {
        parent_69=gProc[gActiveProc];
        parent_current_70=parent_69->context.sp;
        parent_stack_top_71=(unsigned long  long)parent_69->stack_top;
        stack_base_72=1073741824UL-16*4096;
        for(        i_73=0        ;        i_73<16        ;        i_73++        ){
            pa_74=kalloc();
            src_75=walkaddr(parent_69->pagetable,parent_stack_top_71+i_73*4096);
            if(            src_75            ) {
                memmove(pa_74,(void*)src_75,4096);
            }
            mappages(result_53->pagetable,stack_base_72+i_73*4096,4096,(unsigned long  long)pa_74,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_53->stack_top=(char*)stack_base_72;
        result_53->context.sp=stack_base_72+16*4096;
        result_53->context.gp=parent_69->context.gp;
        fs_dup_table(result_53->file_table,parent_69->file_table);
    }
    else {
        parent_76=gProc[gActiveProc];
        stack_base_77=1073741824UL-16*4096;
        for(        i_78=0        ;        i_78<16        ;        i_78++        ){
            pa_79=kalloc();
            mappages(result_53->pagetable,stack_base_77+i_78*4096,4096,(unsigned long  long)pa_79,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_53->stack_top=(char*)stack_base_77;
        result_53->context.sp=stack_base_77+16*4096;
        result_53->context.gp=gp_61;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            memcpy(result_53->file_table,parent_76->file_table,sizeof(struct file*)*16);
        }
        else {
            fs_init(result_53->file_table);
        }
    }
    result_53->context.mepc=eh_55->entry;
    if(    exec_flag    ) {
        parent_80=gProc[gActiveProc];
        free_proc(parent_80);
        gProc[gActiveProc]=result_53;
        user_satp=((8L<<60)|(((unsigned long  long)result_53->pagetable)>>12));
        user_sp=result_53->context.sp;
        *child_proc_index=gActiveProc;
    }
    else {
        if(        gNumProc>=1024        ) {
            found_81=0;
            for(            i_82=0            ;            i_82<1024            ;            i_82++            ){
                if(                gProc[i_82]==((void*)0)                ) {
                    gProc[i_82]=result_53;
                    *child_proc_index=i_82;
                    found_81=1;
                    break;
                }
            }
            if(            found_81==0            ) {
                puts("proc max");
                while(                1                ) {
                    ;
                }
            }
        }
        else {
            gProc[gNumProc++]=result_53;
            *child_proc_index=gNumProc-1;
        }
    }
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_83;
unsigned long  long pte_84;
unsigned long  long pa_85;
unsigned long  long* child_86;
    for(    i_83=0    ;    i_83<512    ;    i_83++    ){
        pte_84=pagetable[i_83];
        if(        !(pte_84&(1L<<0))        ) {
            continue;
        }
        pa_85=(((pte_84)>>10)<<12);
        if(        pte_84&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_85);
            }
        }
        else if(        level>0        ) {
            child_86=(unsigned long  long*)pa_85;
            free_pagetable(child_86,level-1);
            kfree(child_86);
        }
    }
}

struct file** get_current_file_table(){
struct file** __result_obj__11;
    __result_obj__11 = gProc[gActiveProc]->file_table;
    return __result_obj__11;
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
unsigned long  int x_88;
memset(&x_88, 0, sizeof(unsigned long  int));
    x_88=r_sie();
    x_88|=(1UL<<5);
    w_sie(x_88);
    x_88=r_sstatus();
    x_88|=(1UL<<1);
    w_sstatus(x_88);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_89;
    next_89=r_time()+10000UL;
    w_stimecmp(next_89);
}

void remove_kernel_state(int active_proc){
int index_90;
int i_91;
int i_92;
int current_index_93;
int next_index_94;
    if(    gKernelStateHead==gKernelStateTail    ) {
        return;
    }
    index_90=-1;
    for(    i_91=0    ;    i_91<16    ;    i_91++    ){
        if(        gKernelState[i_91].gYieldUserActiveProc==active_proc        ) {
            index_90=i_91;
            break;
        }
    }
    if(    index_90==-1    ) {
        return;
    }
    for(    i_92=index_90    ;    i_92<gNumKernelState-1    ;    i_92++    ){
        current_index_93=(gKernelStateHead+i_92)%16;
        next_index_94=(gKernelStateHead+i_92+1)%16;
        gKernelState[current_index_93]=gKernelState[next_index_94];
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
struct context_t* trapframe_95;
    gNumKernelState--;
    user_satp=gKernelState[gKernelStateHead].gYieldUserSatp;
    user_sp=gKernelState[gKernelStateHead].gYieldUserSP;
    gActiveProc=gKernelState[gKernelStateHead].gYieldUserActiveProc;
    trapframe_95=(struct context_t*)TRAPFRAME2;
    *trapframe_95=gKernelState[gKernelStateHead].gYieldContext;
    trapframe_95=(struct context_t*)TRAPFRAME;
    *trapframe_95=gKernelState[gKernelStateHead].gYieldReturnContext;
    memmove(yield_stack,gKernelState[gKernelStateHead].gYieldStack,(4096*16));
    gKernelStateHead=(gKernelStateHead+1)%16;
    yield_return();
}

void timer_handler(){
struct proc* p_96;
struct context_t* tf_97;
int old_active_proc_98;
struct proc* old_99;
struct proc* new__100;
unsigned long  long a0_101;
    disable_timer_interrupts();
    p_96=gProc[gActiveProc];
    tf_97=(struct context_t*)TRAPFRAME;
    p_96->context=*tf_97;
    timer_reset();
    old_active_proc_98=gActiveProc;
    old_99=gProc[gActiveProc];
    gActiveProc++;
    while(    gActiveProc<gNumProc&&gProc[gActiveProc]==((void*)0)    ) {
        gActiveProc++;
    }
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    if(    gActiveProc==gKernelState[gKernelStateHead].gYieldUserActiveProc&&gNumKernelState>0    ) {
        kernel_yield_return();
    }
    new__100=gProc[gActiveProc];
    if(    new__100!=old_99&&new__100->zombie==0    ) {
        user_sp=new__100->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__100->pagetable)>>12));
        old_99->context=*(struct context_t*)TRAPFRAME;
        a0_101=new__100->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_101));
        swtch(&new__100->context);
    }
    else {
        gActiveProc=old_active_proc_98;
    }
}

void console_init(){
    initlock(&console_lock,"console");
}

int Sys_write(){
struct context_t* trapframe_102;
unsigned long  int arg0_103;
unsigned long  int arg1_104;
unsigned long  int arg2_105;
unsigned long  int arg3_106;
unsigned long  int arg4_107;
unsigned long  int arg5_108;
unsigned long  int arg6_109;
unsigned long  int arg_syscall_no_110;
int fd_111;
unsigned long  long user_va_113;
int len_114;
struct proc* p_115;
int ret_116;
int i_117;
    trapframe_102=(struct context_t*)TRAPFRAME;
    arg0_103=trapframe_102->a0;
    arg1_104=trapframe_102->a1;
    arg2_105=trapframe_102->a2;
    arg3_106=trapframe_102->a3;
    arg4_107=trapframe_102->a4;
    arg5_108=trapframe_102->a5;
    arg6_109=trapframe_102->a6;
    arg_syscall_no_110=trapframe_102->a7;
    fd_111=arg0_103;
    char kernel_buf_112[256];
    memset(&kernel_buf_112, 0, sizeof(char)    *(256)    );
    user_va_113=arg1_104;
    len_114=arg2_105;
    memset(kernel_buf_112,0,256);
    p_115=gProc[gActiveProc];
    ret_116=copyin(p_115->pagetable,kernel_buf_112,user_va_113,len_114);
    if(    ret_116<0    ) {
        panic("copyinstr");
    }
    if(    is_pipe(fd_111)    ) {
        pipewrite(fd_111,kernel_buf_112,len_114);
    }
    else if(    is_stdout(fd_111)    ) {
        for(        i_117=0        ;        i_117<len_114        ;        i_117++        ){
            putchar(kernel_buf_112[i_117]);
        }
    }
    else {
        return -1;
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_118;
unsigned long  int arg0_119;
unsigned long  int arg1_120;
unsigned long  int arg2_121;
unsigned long  int arg3_122;
unsigned long  int arg4_123;
unsigned long  int arg5_124;
unsigned long  int arg6_125;
unsigned long  int arg_syscall_no_126;
struct proc* p_127;
    trapframe_118=(struct context_t*)TRAPFRAME;
    arg0_119=trapframe_118->a0;
    arg1_120=trapframe_118->a1;
    arg2_121=trapframe_118->a2;
    arg3_122=trapframe_118->a3;
    arg4_123=trapframe_118->a4;
    arg5_124=trapframe_118->a5;
    arg6_125=trapframe_118->a6;
    arg_syscall_no_126=trapframe_118->a7;
    p_127=gProc[gActiveProc];
    fs_exit(p_127->file_table);
    p_127->xstatus=arg0_119;
    p_127->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_128;
unsigned long  int arg0_129;
unsigned long  int arg1_130;
unsigned long  int arg2_131;
unsigned long  int arg3_132;
unsigned long  int arg4_133;
unsigned long  int arg5_134;
unsigned long  int arg6_135;
unsigned long  int arg_syscall_no_136;
int* status_va_137;
int exit_status_138;
int child_pid_139;
struct proc* zombie_proc_140;
int n_141;
struct proc* it_142;
struct proc* p_143;
    trapframe_128=(struct context_t*)TRAPFRAME;
    arg0_129=trapframe_128->a0;
    arg1_130=trapframe_128->a1;
    arg2_131=trapframe_128->a2;
    arg3_132=trapframe_128->a3;
    arg4_133=trapframe_128->a4;
    arg5_134=trapframe_128->a5;
    arg6_135=trapframe_128->a6;
    arg_syscall_no_136=trapframe_128->a7;
    status_va_137=(int*)arg0_129;
    exit_status_138=0;
    child_pid_139=-1;
    while(    1    ) {
        zombie_proc_140=((void*)0);
        for(        n_141=0        ;        n_141<gNumProc        ;        n_141++        ){
            it_142=gProc[n_141];
            if(            it_142==((void*)0)            ) {
            }
            else if(            it_142->zombie            ) {
                zombie_proc_140=it_142;
                child_pid_139=n_141;
                break;
            }
        }
        if(        zombie_proc_140        ) {
            exit_status_138=zombie_proc_140->xstatus;
            free_fs_table(zombie_proc_140->file_table);
            free_proc(zombie_proc_140);
            remove_kernel_state(child_pid_139);
            gProc[child_pid_139]=((void*)0);
            break;
        }
        else {
            yield();
        }
    }
    p_143=gProc[gActiveProc];
    if(    copyout(p_143->pagetable,(unsigned long  long)status_va_137,(void*)&exit_status_138,sizeof(int))<0    ) {
        panic("wait: copyout failed");
    }
    return child_pid_139;
}

int Sys_open(){
struct context_t* trapframe_144;
unsigned long  int arg0_145;
unsigned long  int arg1_146;
unsigned long  int arg2_147;
unsigned long  int arg3_148;
unsigned long  int arg4_149;
unsigned long  int arg5_150;
unsigned long  int arg6_151;
unsigned long  int arg_syscall_no_152;
unsigned long  long user_va_154;
struct proc* p_155;
int result_156;
    trapframe_144=(struct context_t*)TRAPFRAME;
    arg0_145=trapframe_144->a0;
    arg1_146=trapframe_144->a1;
    arg2_147=trapframe_144->a2;
    arg3_148=trapframe_144->a3;
    arg4_149=trapframe_144->a4;
    arg5_150=trapframe_144->a5;
    arg6_151=trapframe_144->a6;
    arg_syscall_no_152=trapframe_144->a7;
    char kernel_buf_153[256];
    memset(&kernel_buf_153, 0, sizeof(char)    *(256)    );
    user_va_154=arg0_145;
    p_155=gProc[gActiveProc];
    copyinstr(p_155->pagetable,kernel_buf_153,user_va_154,256);
    result_156=fs_open(kernel_buf_153);
    return result_156;
}

int Sys_fork(){
struct context_t* trapframe_157;
unsigned long  int arg0_158;
unsigned long  int arg1_159;
unsigned long  int arg2_160;
unsigned long  int arg3_161;
unsigned long  int arg4_162;
unsigned long  int arg5_163;
unsigned long  int arg6_164;
unsigned long  int arg_syscall_no_165;
struct proc* p_166;
int fork_flag_167;
int child_proc_index_168;
struct proc* child_proc_169;
unsigned long  long sp_170;
int result_171;
memset(&fork_flag_167, 0, sizeof(int));
    trapframe_157=(struct context_t*)TRAPFRAME;
    arg0_158=trapframe_157->a0;
    arg1_159=trapframe_157->a1;
    arg2_160=trapframe_157->a2;
    arg3_161=trapframe_157->a3;
    arg4_162=trapframe_157->a4;
    arg5_163=trapframe_157->a5;
    arg6_164=trapframe_157->a6;
    arg_syscall_no_165=trapframe_157->a7;
    p_166=gProc[gActiveProc];
    child_proc_index_168=-1;
    alloc_prog((char*)p_166->program,fork_flag_167=1,0,&child_proc_index_168);
    child_proc_169=gProc[child_proc_index_168];
    sp_170=child_proc_169->context.sp;
    child_proc_169->context=*trapframe_157;
    child_proc_169->context.mepc=child_proc_169->context.mepc+4;
    child_proc_169->context.sp=sp_170;
    child_proc_169->context.a0=0;
    result_171=child_proc_index_168;
    return result_171;
}

int Sys_execv(){
struct context_t* trapframe_172;
unsigned long  int arg0_173;
unsigned long  int arg1_174;
unsigned long  long user_va_176;
struct proc* p_177;
char* path_178;
unsigned long  long user_argv_181;
int argc_182;
unsigned long  int uargp_183;
int fd_184;
int size_185;
int ret_187;
int child_proc_index_188;
struct proc* new_p_189;
unsigned long  long sp_190;
int i_192;
unsigned long  int len_193;
unsigned long  long argv_base_194;
int i_195;
unsigned long  long ptr_196;
unsigned long  long nullp_197;
memset(&uargp_183, 0, sizeof(unsigned long  int));
    trapframe_172=(struct context_t*)TRAPFRAME;
    arg0_173=trapframe_172->a0;
    arg1_174=trapframe_172->a1;
    char kernel_buf_175[256];
    memset(&kernel_buf_175, 0, sizeof(char)    *(256)    );
    user_va_176=arg0_173;
    p_177=gProc[gActiveProc];
    if(    copyinstr(p_177->pagetable,kernel_buf_175,user_va_176,256)<0    ) {
        trapframe_172->a0=-1;
        return -1;
    }
    path_178=kernel_buf_175;
    char argv_storage_179[32][32];
    memset(&argv_storage_179, 0, sizeof(char)    *(32)    *(32)    );
    char* kargv_180[32];
    memset(&kargv_180, 0, sizeof(char*)    *(32)    );
    user_argv_181=arg1_174;
    argc_182=0;
    for(    argc_182=0    ;    argc_182<32    ;    argc_182++    ){
        if(        copyin(p_177->pagetable,(char*)&uargp_183,user_argv_181+argc_182*sizeof(unsigned long  int),sizeof(unsigned long  int))<0        ) {
            trapframe_172->a0=-1;
            return -1;
        }
        if(        uargp_183==0        ) {
            break;
        }
        if(        copyinstr(p_177->pagetable,argv_storage_179[argc_182],uargp_183,sizeof(argv_storage_179[0]))<0        ) {
            trapframe_172->a0=-1;
            return -1;
        }
        kargv_180[argc_182]=argv_storage_179[argc_182];
    }
    kargv_180[argc_182]=((void*)0);
    fd_184=fs_open(path_178);
    if(    fd_184<0    ) {
        trapframe_172->a0=-1;
        return -1;
    }
    size_185=fs_size(fd_184);
    char elf_buf_186[2048];
    memset(&elf_buf_186, 0, sizeof(char)    *(2048)    );
    ret_187=fs_read(fd_184,elf_buf_186,size_185);
    fs_close(fd_184,0);
    if(    ret_187<=0    ) {
        trapframe_172->a0=-1;
        return -1;
    }
    child_proc_index_188=0;
    alloc_prog(elf_buf_186,0,1,&child_proc_index_188);
    new_p_189=gProc[gActiveProc];
    sp_190=new_p_189->context.sp;
    unsigned long  long str_addrs_191[32];
    memset(&str_addrs_191, 0, sizeof(unsigned long  long)    *(32)    );
    for(    i_192=argc_182-1    ;    i_192>=0    ;    i_192--    ){
        len_193=strlen(kargv_180[i_192])+1;
        sp_190-=len_193;
        if(        copyout(new_p_189->pagetable,sp_190,kargv_180[i_192],len_193)<0        ) {
            panic("execv: copyout string failed");
        }
        str_addrs_191[i_192]=sp_190;
    }
    sp_190-=(argc_182+1)*sizeof(unsigned long  long);
    sp_190&=~7;
    argv_base_194=sp_190;
    for(    i_195=0    ;    i_195<argc_182    ;    i_195++    ){
        ptr_196=str_addrs_191[i_195];
        if(        copyout(new_p_189->pagetable,argv_base_194+i_195*sizeof(unsigned long  long),&ptr_196,sizeof(unsigned long  long))<0        ) {
            panic("execv: copyout ptr failed");
        }
    }
    nullp_197=0;
    if(    copyout(new_p_189->pagetable,argv_base_194+argc_182*sizeof(unsigned long  long),&nullp_197,sizeof(unsigned long  long))<0    ) {
        panic("execv: copyout nullp failed");
    }
    trapframe_172->a0=argc_182;
    trapframe_172->a1=argv_base_194;
    trapframe_172->sp=sp_190;
    trapframe_172->mepc=new_p_189->context.mepc-4;
    user_sp=sp_190;
    return argc_182;
}

void uvmunmap(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long npages, int do_free){
unsigned long  long a_198;
unsigned long  long* pte_199;
unsigned long  long pa_200;
    if(    (va%4096)!=0    ) {
        panic("uvmunmap: not aligned");
    }
    for(    a_198=va    ;    a_198<va+npages*4096    ;    a_198+=4096    ){
        pte_199=walk(pagetable,a_198,0);
        if(        pte_199==0||(*pte_199&(1L<<0))==0        ) {
            continue;
        }
        if(        do_free        ) {
            pa_200=(((*pte_199)>>10)<<12);
            kfree((void*)pa_200);
        }
        *pte_199=0;
    }
}

void uvm_dealloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
    if(    new_sz>=old_sz    ) {
        return;
    }
    uvmunmap(pagetable,(((new_sz)+4096-1)&~(4096-1)),((((old_sz)+4096-1)&~(4096-1))-(((new_sz)+4096-1)&~(4096-1)))/4096,1);
}

int uvm_alloc(struct proc* p, unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
unsigned long  long a_201;
char* mem_202;
    if(    new_sz<=old_sz    ) {
        return 0;
    }
    a_201=(((old_sz)+4096-1)&~(4096-1));
    for(    ;    a_201<new_sz    ;    a_201+=4096    ){
        mem_202=kalloc();
        p->process_kalloc_address[p->num_process_kalloc_address++]=mem_202;
        if(        p->num_process_kalloc_address>=64        ) {
            puts("ELF MAX ERROR");
            while(            1            ) {
                ;
            }
        }
        if(        mem_202==0        ) {
            uvm_dealloc(pagetable,a_201,old_sz);
            return -1;
        }
        memset(mem_202,0,4096);
        if(        mappages(pagetable,a_201,4096,(unsigned long  long)mem_202,(1L<<2)|(1L<<1)|(1L<<4)|(1L<<0))<0        ) {
            kfree(mem_202);
            uvm_dealloc(pagetable,a_201,old_sz);
            return -1;
        }
    }
    __asm volatile("sfence.vma zero, zero");
    return 0;
}

int Sys_brk(){
struct context_t* trapframe_203;
unsigned long  long addr_204;
struct proc* p_205;
unsigned long  long old_sz_206;
    trapframe_203=(struct context_t*)TRAPFRAME;
    addr_204=trapframe_203->a0;
    p_205=gProc[gActiveProc];
    old_sz_206=p_205->sz;
    if(    addr_204==0    ) {
        return old_sz_206;
    }
    if(    addr_204>old_sz_206    ) {
        if(        uvm_alloc(p_205,p_205->pagetable,old_sz_206,addr_204)<0        ) {
            printf("Sys_brk: uvm_alloc failed!\n");
            return -1;
        }
    }
    else if(    addr_204<old_sz_206    ) {
        uvm_dealloc(p_205->pagetable,old_sz_206,addr_204);
    }
    p_205->sz=addr_204;
    return p_205->sz;
}

int Sys_dup2(){
struct context_t* trapframe_207;
unsigned long  int arg0_208;
unsigned long  int arg1_209;
unsigned long  int arg2_210;
unsigned long  int arg3_211;
unsigned long  int arg4_212;
unsigned long  int arg5_213;
unsigned long  int arg6_214;
unsigned long  int arg_syscall_no_215;
int oldfd_216;
int newfd_217;
    trapframe_207=(struct context_t*)TRAPFRAME;
    arg0_208=trapframe_207->a0;
    arg1_209=trapframe_207->a1;
    arg2_210=trapframe_207->a2;
    arg3_211=trapframe_207->a3;
    arg4_212=trapframe_207->a4;
    arg5_213=trapframe_207->a5;
    arg6_214=trapframe_207->a6;
    arg_syscall_no_215=trapframe_207->a7;
    oldfd_216=arg0_208;
    newfd_217=arg1_209;
    fs_dup2(oldfd_216,newfd_217);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_218;
unsigned long  int arg0_219;
unsigned long  int arg1_220;
unsigned long  int arg2_221;
unsigned long  int arg3_222;
unsigned long  int arg4_223;
unsigned long  int arg5_224;
unsigned long  int arg6_225;
unsigned long  int arg_syscall_no_226;
char* kernel_buf_227;
unsigned long  long user_va_228;
int* fd_230;
struct proc* p_231;
kernel_buf_227 = (void*)0;
    trapframe_218=(struct context_t*)TRAPFRAME;
    arg0_219=trapframe_218->a0;
    arg1_220=trapframe_218->a1;
    arg2_221=trapframe_218->a2;
    arg3_222=trapframe_218->a3;
    arg4_223=trapframe_218->a4;
    arg5_224=trapframe_218->a5;
    arg6_225=trapframe_218->a6;
    arg_syscall_no_226=trapframe_218->a7;
    user_va_228=arg0_219;
    int pipe_fds_229[2];
    memset(&pipe_fds_229, 0, sizeof(int)    *(2)    );
    fd_230=(int*)pipe_fds_229;
    pipe_open(&fd_230[0],&fd_230[1]);
    p_231=gProc[gActiveProc];
    if(    copyout(p_231->pagetable,(unsigned long  long)user_va_228,(char*)fd_230,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context_t* trapframe_232;
unsigned long  int arg0_233;
unsigned long  int arg1_234;
unsigned long  int arg2_235;
unsigned long  int arg3_236;
unsigned long  int arg4_237;
unsigned long  int arg5_238;
unsigned long  int arg6_239;
unsigned long  int arg_syscall_no_240;
int fd_241;
unsigned long  long destva_242;
unsigned long  int n_243;
int ret_245;
struct proc* p_246;
memset(&ret_245, 0, sizeof(int));
    trapframe_232=(struct context_t*)TRAPFRAME;
    arg0_233=trapframe_232->a0;
    arg1_234=trapframe_232->a1;
    arg2_235=trapframe_232->a2;
    arg3_236=trapframe_232->a3;
    arg4_237=trapframe_232->a4;
    arg5_238=trapframe_232->a5;
    arg6_239=trapframe_232->a6;
    arg_syscall_no_240=trapframe_232->a7;
    fd_241=arg0_233;
    destva_242=arg1_234;
    n_243=arg2_235;
    char kernel_buf_244[256];
    memset(&kernel_buf_244, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_241)    ) {
        ret_245=uart_readn(kernel_buf_244,n_243);
    }
    else if(    is_pipe(fd_241)    ) {
        ret_245=piperead(fd_241,kernel_buf_244,n_243);
    }
    else {
        ret_245=fs_read(fd_241,kernel_buf_244,n_243);
        if(        ret_245<0        ) {
            trapframe_232->a0=ret_245;
            return 0;
        }
        kernel_buf_244[ret_245]=0;
    }
    p_246=gProc[gActiveProc];
    if(    copyout(p_246->pagetable,destva_242,kernel_buf_244,ret_245)<0    ) {
        panic("read: copyout failed");
    }
    return ret_245;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_247;
unsigned long  int arg0_248;
unsigned long  int arg1_249;
unsigned long  int arg2_250;
unsigned long  int arg3_251;
unsigned long  int arg4_252;
unsigned long  int arg5_253;
unsigned long  int arg6_254;
unsigned long  int arg_syscall_no_255;
unsigned long  long result_256;
long fd_257;
int ret_258;
    disable_timer_interrupts();
    trapframe_247=(struct context_t*)TRAPFRAME;
    arg0_248=trapframe_247->a0;
    arg1_249=trapframe_247->a1;
    arg2_250=trapframe_247->a2;
    arg3_251=trapframe_247->a3;
    arg4_252=trapframe_247->a4;
    arg5_253=trapframe_247->a5;
    arg6_254=trapframe_247->a6;
    arg_syscall_no_255=trapframe_247->a7;
    result_256=0;
    switch (    arg_syscall_no_255) {
        case 64:
        {
            result_256=Sys_write();
        }
        break;
        case 73:
        {
            result_256=Sys_pipe();
        }
        break;
        case 72:
        {
            result_256=Sys_dup2();
        }
        break;
        case 70:
        {
            result_256=Sys_exit();
        }
        break;
        case 71:
        {
            result_256=Sys_wait();
        }
        break;
        case 66:
        {
            result_256=Sys_open();
        }
        break;
        case 65:
        {
            result_256=Sys_read();
        }
        break;
        case 67:
        {
            fd_257=arg0_248;
            ret_258=fs_close(fd_257,0);
            result_256=ret_258;
        }
        break;
        case 68:
        {
            result_256=Sys_fork();
        }
        break;
        case 69:
        {
            result_256=Sys_execv();
        }
        break;
        case 74:
        {
            result_256=Sys_brk();
        }
        break;
        default:
        printf("NO. %d\n",arg_syscall_no_255);
        panic("invalid syscall");
        while(        1        ) {
            ;
        }
    }
    trapframe_247->a0=result_256;
    return result_256;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

struct proc* get_current_proc(){
struct proc* __result_obj__12;
    __result_obj__12 = gProc[gActiveProc];
    return __result_obj__12;
}

void global_init(){
    memset(gProc,0,sizeof(struct proc*)*1024);
    gNumProc=0;
    gKernelStateHead=0;
    gKernelStateTail=0;
    gNumKernelState=0;
    memset(gKernelState,0,sizeof(struct sKernelState)*16);
}

int main(){
int fork_flag_261;
int child_proc_index_262;
struct proc* p_263;
int gp_264;
unsigned long  int usersp_265;
unsigned long  long usersatp_266;
unsigned long  int entry_267;
memset(&fork_flag_261, 0, sizeof(int));
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
    child_proc_index_262=0;
    alloc_prog((char*)msh_elf,fork_flag_261=0,0,&child_proc_index_262);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_263=gProc[0];
    gp_264=p_263->context.gp;
    usersp_265=(unsigned long  long)(p_263->context.sp);
    usersatp_266=((8L<<60)|(((unsigned long  long)p_263->pagetable)>>12));
    entry_267=p_263->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_263;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_267,usersp_265,usersatp_266,10000UL,gp_264);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__13;
void* prev_268;
void* __result_obj__14;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__13 = (void*)-1;
        return __result_obj__13;
    }
    prev_268=heap_end;
    heap_end+=incr;
    __result_obj__14 = prev_268;
    return __result_obj__14;
}

void* malloc(unsigned long  int size){
void* __result_obj__15;
struct mem_block* current_269;
struct mem_block* prev_270;
void* __result_obj__16;
struct mem_block* new_mem_271;
void* __result_obj__17;
void* __result_obj__18;
    if(    size==0    ) {
        __result_obj__15 = ((void*)0);
        return __result_obj__15;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_269=free_list;
    prev_270=((void*)0);
    while(    current_269!=((void*)0)    ) {
        if(        current_269->size>=size        ) {
            if(            prev_270==((void*)0)            ) {
                free_list=current_269->next;
            }
            else {
                prev_270->next=current_269->next;
            }
            __result_obj__16 = (void*)(current_269+1);
            return __result_obj__16;
        }
        prev_270=current_269;
        current_269=current_269->next;
    }
    new_mem_271=(struct mem_block*)sbrk(size);
    if(    new_mem_271==(void*)-1    ) {
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    new_mem_271->size=size;
    new_mem_271->next=((void*)0);
    __result_obj__18 = (void*)(new_mem_271+1);
    return __result_obj__18;
}

void free(void* ptr){
struct mem_block* block_272;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_272=(struct mem_block*)ptr-1;
    block_272->next=free_list;
    free_list=block_272;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_273;
void* __result_obj__19;
void* ptr_274;
void* __result_obj__20;
    total_size_273=nmemb*size;
    if(    total_size_273==0    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
    }
    ptr_274=malloc(total_size_273);
    if(    ptr_274!=((void*)0)    ) {
        memset(ptr_274,0,total_size_273);
    }
    __result_obj__20 = ptr_274;
    return __result_obj__20;
}

char* strdup(const char* s){
char* s2_275;
unsigned long  int len_276;
char* p_277;
char* __result_obj__21;
    s2_275=s;
    len_276=strlen(s2_275)+1;
    p_277=malloc(len_276);
    if(    p_277    ) {
        memcpy(p_277,s2_275,len_276);
    }
    __result_obj__21 = p_277;
    return __result_obj__21;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__22;
char* __result_obj__23;
char* __result_obj__24;
    if(    !*needle    ) {
        __result_obj__22 = (char*)haystack;
        return __result_obj__22;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_278=haystack;
        const char* n_279=needle;
        while(        *h_278&&*n_279&&(*h_278==*n_279)        ) {
            h_278++;
            n_279++;
        }
        if(        !*n_279        ) {
            __result_obj__23 = (char*)haystack;
            return __result_obj__23;
        }
    }
    __result_obj__24 = ((void*)0);
    return __result_obj__24;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_280;
int i_281;
void* __result_obj__25;
    cdst_280=(char*)dst;
    for(    i_281=0    ;    i_281<n    ;    i_281++    ){
        cdst_280[i_281]=c;
    }
    __result_obj__25 = dst;
    return __result_obj__25;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_282;
const unsigned char* s2_283;
memset(&s1_282, 0, sizeof(const unsigned char*));
memset(&s2_283, 0, sizeof(const unsigned char*));
    s1_282=v1;
    s2_283=v2;
    while(    n-->0    ) {
        if(        *s1_282!=*s2_283        ) {
            return *s1_282-*s2_283;
        }
        s1_282++,s2_283++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_284;
char* d_285;
void* __result_obj__26;
void* __result_obj__27;
s_284 = (void*)0;
d_285 = (void*)0;
    if(    n==0    ) {
        __result_obj__26 = dst;
        return __result_obj__26;
    }
    s_284=src;
    d_285=dst;
    if(    s_284<d_285&&s_284+n>d_285    ) {
        s_284+=n;
        d_285+=n;
        while(        n-->0        ) {
            *--d_285=*--s_284;
        }
    }
    else {
        while(        n-->0        ) {
            *d_285++=*s_284++;
        }
    }
    __result_obj__27 = dst;
    return __result_obj__27;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__28;
    __result_obj__28 = memmove(dst,src,n);
    return __result_obj__28;
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
char* os_286;
char* __result_obj__29;
os_286 = (void*)0;
    os_286=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__29 = os_286;
    return __result_obj__29;
}

int strlen(const char* s){
int n_287;
memset(&n_287, 0, sizeof(int));
    for(    n_287=0    ;    s[n_287]    ;    n_287++    ){
        ;
    }
    return n_287;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_288;
char* __result_obj__30;
    d_288=dest;
    while(    *d_288    ) {
        d_288++;
    }
    while(    n--&&*src    ) {
        *d_288++=*src++;
    }
    *d_288=0;
    __result_obj__30 = dest;
    return __result_obj__30;
}

char* strtok(char* s, const char* delim){
static char* next_289;
char* start_290;
char* p_291;
char* __result_obj__31;
int is_delim_293;
char* __result_obj__32;
int is_delim_295;
char* __result_obj__33;
next_289 = (void*)0;
start_290 = (void*)0;
p_291 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_289=s;
    }
    if(    next_289==((void*)0)    ) {
        __result_obj__31 = ((void*)0);
        return __result_obj__31;
    }
    start_290=next_289;
    while(    *start_290!=0    ) {
        const char* d_292=delim;
        is_delim_293=0;
        while(        *d_292!=0        ) {
            if(            *start_290==*d_292            ) {
                is_delim_293=1;
                break;
            }
            d_292++;
        }
        if(        !is_delim_293        ) {
            break;
        }
        start_290++;
    }
    if(    *start_290==0    ) {
        next_289=((void*)0);
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    p_291=start_290;
    while(    *p_291!=0    ) {
        const char* d_294=delim;
        is_delim_295=0;
        while(        *d_294!=0        ) {
            if(            *p_291==*d_294            ) {
                is_delim_295=1;
                break;
            }
            d_294++;
        }
        if(        is_delim_295        ) {
            break;
        }
        p_291++;
    }
    if(    *p_291==0    ) {
        next_289=((void*)0);
    }
    else {
        *p_291=0;
        next_289=p_291+1;
    }
    __result_obj__33 = start_290;
    return __result_obj__33;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_296;
int i_298;
int negative_299;
char* __result_obj__34;
int digit_300;
char* __result_obj__35;
    p_296=buf;
    char tmp_297[32];
    memset(&tmp_297, 0, sizeof(char)    *(32)    );
    i_298=0;
    negative_299=0;
    if(    base<2||base>16    ) {
        *p_296=0;
        __result_obj__34 = p_296;
        return __result_obj__34;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_299=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_300=val_%base;
        tmp_297[i_298++]=(((digit_300<10))?(48+digit_300):(97+digit_300-10));
        val_/=base;
    } while(    val_    );
    if(    negative_299    ) {
        *p_296++=45;
    }
    while(    i_298--    ) {
        *p_296++=tmp_297[i_298];
    }
    *p_296=0;
    __result_obj__35 = buf;
    return __result_obj__35;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_302;
const char* s_303;
unsigned long  int remaining_305;
s_303 = (void*)0;
    char out2_301[512];
    memset(&out2_301, 0, sizeof(char)    *(512)    );
    p_302=out2_301;
    char buf_304[32];
    memset(&buf_304, 0, sizeof(char)    *(32)    );
    remaining_305=sizeof(out2_301);
    for(    ;    *fmt&&remaining_305>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_302++=*fmt;
            remaining_305--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_304,__builtin_va_arg(ap,int),10,1);
            s_303=buf_304;
            break;
            case 117:
            itoa(buf_304,__builtin_va_arg(ap,unsigned int),10,0);
            s_303=buf_304;
            break;
            case 120:
            itoa(buf_304,__builtin_va_arg(ap,unsigned int),16,0);
            s_303=buf_304;
            break;
            case 115:
            s_303=__builtin_va_arg(ap,const char*);
            if(            !s_303            ) {
                s_303="(null)";
            }
            break;
            case 99:
            buf_304[0]=(char)__builtin_va_arg(ap,int);
            buf_304[1]=0;
            s_303=buf_304;
            break;
            case 112:
            strncpy(buf_304,"0x",32);
            itoa(buf_304+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_303=buf_304;
            break;
            case 37:
            buf_304[0]=37;
            buf_304[1]=0;
            s_303=buf_304;
            break;
            default:
            buf_304[0]=37;
            buf_304[1]=*fmt;
            buf_304[2]=0;
            s_303=buf_304;
            break;
        }
        while(        *s_303&&remaining_305>1        ) {
            *p_302++=*s_303++;
            remaining_305--;
        }
    }
    *p_302=0;
    *out=strdup(out2_301);
    return p_302-out2_301;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_306;
char* p_307;
const char* s_308;
unsigned long  int remaining_310;
memset(&ap_306, 0, sizeof(va_list));
s_308 = (void*)0;
    __builtin_va_start(ap_306,fmt);
    p_307=out;
    char buf_309[32];
    memset(&buf_309, 0, sizeof(char)    *(32)    );
    remaining_310=out_size;
    if(    remaining_310==0    ) {
        __builtin_va_end(ap_306);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_310>1            ) {
                *p_307++=*fmt;
                remaining_310--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_308=__builtin_va_arg(ap_306,const char*);
            while(            *s_308&&remaining_310>1            ) {
                *p_307++=*s_308++;
                remaining_310--;
            }
            break;
            case 100:
            itoa(buf_309,__builtin_va_arg(ap_306,int),10,0);
            s_308=buf_309;
            while(            *s_308&&remaining_310>1            ) {
                *p_307++=*s_308++;
                remaining_310--;
            }
            break;
            case 120:
            itoa(buf_309,(unsigned int)__builtin_va_arg(ap_306,int),16,1);
            s_308=buf_309;
            while(            *s_308&&remaining_310>1            ) {
                *p_307++=*s_308++;
                remaining_310--;
            }
            break;
            case 99:
            if(            remaining_310>1            ) {
                *p_307++=(char)__builtin_va_arg(ap_306,int);
                remaining_310--;
            }
            break;
            case 112:
            s_308="0x";
            while(            *s_308&&remaining_310>1            ) {
                *p_307++=*s_308++;
                remaining_310--;
            }
            itoa(buf_309,(long)__builtin_va_arg(ap_306,void*),16,1);
            s_308=buf_309;
            while(            *s_308&&remaining_310>1            ) {
                *p_307++=*s_308++;
                remaining_310--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_309,__builtin_va_arg(ap_306,long),10,1);
                s_308=buf_309;
                while(                *s_308&&remaining_310>1                ) {
                    *p_307++=*s_308++;
                    remaining_310--;
                }
            }
            break;
            default:
            if(            remaining_310>1            ) {
                *p_307++=37;
                remaining_310--;
                if(                remaining_310>1                ) {
                    *p_307++=*fmt;
                    remaining_310--;
                }
            }
            break;
        }
    }
    *p_307=0;
    __builtin_va_end(ap_306);
    return p_307-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_311;
char* p_312;
const char* s_313;
unsigned long  int remaining_315;
memset(&ap_311, 0, sizeof(va_list));
s_313 = (void*)0;
    __builtin_va_start(ap_311,fmt);
    p_312=out;
    char buf_314[32];
    memset(&buf_314, 0, sizeof(char)    *(32)    );
    remaining_315=out_size;
    if(    remaining_315==0    ) {
        __builtin_va_end(ap_311);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_315>1            ) {
                *p_312++=*fmt;
                remaining_315--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_313=__builtin_va_arg(ap_311,const char*);
            while(            *s_313&&remaining_315>1            ) {
                *p_312++=*s_313++;
                remaining_315--;
            }
            break;
            case 100:
            itoa(buf_314,__builtin_va_arg(ap_311,int),10,0);
            s_313=buf_314;
            while(            *s_313&&remaining_315>1            ) {
                *p_312++=*s_313++;
                remaining_315--;
            }
            break;
            case 120:
            itoa(buf_314,(unsigned int)__builtin_va_arg(ap_311,int),16,1);
            s_313=buf_314;
            while(            *s_313&&remaining_315>1            ) {
                *p_312++=*s_313++;
                remaining_315--;
            }
            break;
            case 99:
            if(            remaining_315>1            ) {
                *p_312++=(char)__builtin_va_arg(ap_311,int);
                remaining_315--;
            }
            break;
            case 112:
            s_313="0x";
            while(            *s_313&&remaining_315>1            ) {
                *p_312++=*s_313++;
                remaining_315--;
            }
            itoa(buf_314,(long)__builtin_va_arg(ap_311,void*),16,1);
            s_313=buf_314;
            while(            *s_313&&remaining_315>1            ) {
                *p_312++=*s_313++;
                remaining_315--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_314,__builtin_va_arg(ap_311,long),10,1);
                s_313=buf_314;
                while(                *s_313&&remaining_315>1                ) {
                    *p_312++=*s_313++;
                    remaining_315--;
                }
            }
            break;
            default:
            if(            remaining_315>1            ) {
                *p_312++=37;
                remaining_315--;
                if(                remaining_315>1                ) {
                    *p_312++=*fmt;
                    remaining_315--;
                }
            }
            break;
        }
    }
    *p_312=0;
    __builtin_va_end(ap_311);
    return p_312-out;
}

void printint(int val_, int base, int sign){
int i_317;
int negative_318;
unsigned int uval_319;
int digit_320;
memset(&uval_319, 0, sizeof(unsigned int));
    char buf_316[33];
    memset(&buf_316, 0, sizeof(char)    *(33)    );
    i_317=0;
    negative_318=0;
    if(    sign&&val_<0    ) {
        negative_318=1;
        uval_319=-val_;
    }
    else {
        uval_319=(unsigned int)val_;
    }
    if(    uval_319==0    ) {
        putchar(48);
        return;
    }
    while(    uval_319>0    ) {
        digit_320=uval_319%base;
        buf_316[i_317++]=((digit_320<10)?(48+digit_320):(97+(digit_320-10)));
        uval_319/=base;
    }
    if(    negative_318    ) {
        putchar(45);
    }
    while(    --i_317>=0    ) {
        putchar(buf_316[i_317]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_322;
int negative_323;
int digit_324;
    char buf_321[65];
    memset(&buf_321, 0, sizeof(char)    *(65)    );
    i_322=0;
    negative_323=0;
    if(    sign&&(long)val_<0    ) {
        negative_323=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_324=val_%base;
        buf_321[i_322++]=((digit_324<10)?(48+digit_324):(97+(digit_324-10)));
        val_/=base;
    }
    if(    negative_323    ) {
        putchar(45);
    }
    while(    --i_322>=0    ) {
        putchar(buf_321[i_322]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_326;
int negative_327;
int digit_328;
    char buf_325[65];
    memset(&buf_325, 0, sizeof(char)    *(65)    );
    i_326=0;
    negative_327=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_327=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_328=val_%base;
        buf_325[i_326++]=((digit_328<10)?(48+digit_328):(97+(digit_328-10)));
        val_/=base;
    }
    if(    negative_327    ) {
        putchar(45);
    }
    while(    --i_326>=0    ) {
        putchar(buf_325[i_326]);
    }
}

int printf(const char* fmt, ...){
va_list ap_329;
const char* p_330;
int lcount_331;
unsigned long  int val__332;
unsigned long  long val__333;
long val__334;
long long val__335;
int i_336;
int val__337;
unsigned int val__338;
unsigned long  int val__339;
char c_341;
memset(&ap_329, 0, sizeof(va_list));
p_330 = (void*)0;
    __builtin_va_start(ap_329,fmt);
    for(    p_330=fmt    ;    *p_330    ;    p_330++    ){
        if(        *p_330!=37        ) {
            putchar(*p_330);
            continue;
        }
        p_330++;
        if(        *p_330==108        ) {
            lcount_331=1;
            if(            *(p_330+1)==108            ) {
                lcount_331=2;
                p_330++;
            }
            p_330++;
            switch (            *p_330) {
                case 120:
                {
                    if(                    lcount_331==1                    ) {
                        val__332=__builtin_va_arg(ap_329,unsigned long  int);
                        printlong(val__332,16,0);
                    }
                    else {
                        val__333=__builtin_va_arg(ap_329,unsigned long  long);
                        printlonglong(val__333,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_331==1                    ) {
                        val__334=__builtin_va_arg(ap_329,long);
                        printlong(val__334,10,1);
                    }
                    else {
                        val__335=__builtin_va_arg(ap_329,long  long);
                        printlonglong(val__335,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_336=0                    ;                    i_336<lcount_331                    ;                    i_336++                    ){
                        putchar(108);
                    }
                    putchar(*p_330);
                    break;
                }
            }
        }
        else {
            switch (            *p_330) {
                case 100:
                {
                    val__337=__builtin_va_arg(ap_329,int);
                    printint(val__337,10,1);
                    break;
                }
                case 120:
                {
                    val__338=__builtin_va_arg(ap_329,unsigned int);
                    printint(val__338,16,0);
                    break;
                }
                case 112:
                {
                    val__339=(unsigned long  int)__builtin_va_arg(ap_329,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__339,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_340=__builtin_va_arg(ap_329,const char*);
                    if(                    !s_340                    ) {
                        s_340="(null)";
                    }
                    while(                    *s_340                    ) {
                        putchar(*s_340++);
                    }
                    break;
                }
                case 99:
                {
                    c_341=(char)__builtin_va_arg(ap_329,int);
                    putchar(c_341);
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
                    putchar(*p_330);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_329);
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
void* __right_value0 = (void*)0;
char* __result_obj__36;
    __result_obj__36 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__36 = come_decrement_ref_count(__result_obj__36, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__36;
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
void* result_342;
void* __result_obj__37;
    result_342=((void*)0);
    size=(size+7&~7);
    result_342=calloc(1,size);
    __result_obj__37 = result_342;
    return __result_obj__37;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_343;
struct sMemHeaderTiny* prev_it_344;
struct sMemHeaderTiny* next_it_345;
unsigned long  int size_346;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_343=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_343->allocated!=177783            ) {
                return;
            }
            it_343->allocated=0;
            prev_it_344=it_343->prev;
            next_it_345=it_343->next;
            if(            gAllocMem==it_343            ) {
                gAllocMem=(struct sMemHeader*)next_it_345;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_344                ) {
                    prev_it_344->next=next_it_345;
                }
                if(                next_it_345                ) {
                    next_it_345->prev=prev_it_344;
                }
            }
            size_346=it_343->size;
            free(it_343);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_347;
struct sMemHeaderTiny* it_348;
void* __result_obj__38;
    if(    gComeDebugLib    ) {
    }
    else {
        result_347=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_348=result_347;
        it_348->allocated=177783;
        it_348->class_name=class_name;
        it_348->sname=sname;
        it_348->sline=sline;
        it_348->size=size+sizeof(struct sMemHeaderTiny);
        it_348->free_next=((void*)0);
        it_348->next=(struct sMemHeaderTiny*)gAllocMem;
        it_348->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_348;
        }
        gAllocMem=(struct sMemHeader*)it_348;
        gNumAlloc++;
        __result_obj__38 = (char*)result_347+sizeof(struct sMemHeaderTiny);
        return __result_obj__38;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_349;
char* __result_obj__39;
struct sMemHeaderTiny* it_350;
char* __result_obj__40;
    if(    gComeDebugLib    ) {
        it_349=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_349->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_349);
            exit(2);
        }
        __result_obj__39 = it_349->class_name;
        return __result_obj__39;
    }
    else {
        it_350=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_350->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_350);
            exit(2);
        }
        __result_obj__40 = it_350->class_name;
        return __result_obj__40;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_351;
unsigned long  int* ref_count_352;
unsigned long  int* size2_353;
void* __result_obj__41;
    mem_351=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_352=(unsigned long  int*)mem_351;
    *ref_count_352=0;
    size2_353=(unsigned long  int*)(mem_351+sizeof(unsigned long  int));
    *size2_353=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__41 = mem_351+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__41;
}

void come_free(void* mem){
unsigned long  int* ref_count_354;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_354=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_354);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__42;
char* mem_355;
unsigned long  int* size_p_356;
unsigned long  int size_357;
void* result_358;
void* __result_obj__43;
    if(    !block    ) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    mem_355=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_356=(unsigned long  int*)(mem_355+sizeof(unsigned long  int));
    size_357=*size_p_356-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_358=come_calloc_v2(1,size_357,sname,sline,class_name);
    memcpy(result_358,block,size_357);
    __result_obj__43 = result_358;
    return __result_obj__43;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__44;
unsigned long  int* ref_count_359;
void* __result_obj__45;
    if(    mem==((void*)0)    ) {
        __result_obj__44 = mem;
        return __result_obj__44;
    }
    ref_count_359=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_359)++;
    __result_obj__45 = mem;
    return __result_obj__45;
}

void* come_print_ref_count(void* mem){
void* __result_obj__46;
unsigned long  int* ref_count_360;
void* __result_obj__47;
    if(    mem==((void*)0)    ) {
        __result_obj__46 = mem;
        return __result_obj__46;
    }
    ref_count_360=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_360);
    __result_obj__47 = mem;
    return __result_obj__47;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_361;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_361=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_361;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__48;
void* __result_obj__49;
unsigned long  int* ref_count_362;
unsigned long  int count_363;
void (*finalizer_364)(void*);
void* __result_obj__50;
void* __result_obj__51;
memset(&finalizer_364, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__48 = mem;
            return __result_obj__48;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    ref_count_362=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_362)--;
    }
    count_363=*ref_count_362;
    if(    !no_free&&count_363<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_364=protocol_fun;
            finalizer_364(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    __result_obj__51 = mem;
    return __result_obj__51;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_365)(void*);
void (*finalizer_366)(void*);
void (*finalizer_367)(void*);
unsigned long  int* ref_count_368;
unsigned long  int count_369;
void (*finalizer_370)(void*);
void (*finalizer_371)(void*);
void (*finalizer_372)(void*);
memset(&finalizer_365, 0, sizeof(void (*)(void*)));
memset(&finalizer_366, 0, sizeof(void (*)(void*)));
memset(&finalizer_367, 0, sizeof(void (*)(void*)));
memset(&finalizer_370, 0, sizeof(void (*)(void*)));
memset(&finalizer_371, 0, sizeof(void (*)(void*)));
memset(&finalizer_372, 0, sizeof(void (*)(void*)));
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
                finalizer_365=protocol_fun;
                finalizer_365(protocol_obj);
            }
            finalizer_366=fun;
            finalizer_366(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_367=protocol_fun;
                finalizer_367(protocol_obj);
            }
        }
    }
    else {
        ref_count_368=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_368)--;
        }
        count_369=*ref_count_368;
        if(        !no_free&&count_369<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_370=protocol_fun;
                        finalizer_370(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_371=fun;
                        finalizer_371(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_372=protocol_fun;
                        finalizer_372(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__52;
int len_373;
void* __right_value1 = (void*)0;
char* result_374;
char* __result_obj__53;
    if(    str==((void*)0)    ) {
        __result_obj__52 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__52;
    }
    len_373=strlen(str)+1;
    result_374=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_373)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_374,str,len_373);
    __result_obj__53 = (char*)come_increment_ref_count(result_374);
    (result_374 = come_decrement_ref_count(result_374, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__53;
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
void* __right_value2 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value2=come_get_stackframe())));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__55;
    __result_obj__55 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__55;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value3 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__56;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2915, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__56 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__56, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__56;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value4 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__57;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2925, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__57 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__58;
void* __right_value5 = (void*)0;
struct buffer* result_375;
void* __right_value6 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__59;
    if(    self==((void*)0)    ) {
        __result_obj__58 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__58;
    }
    result_375=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_375->size=self->size;
    __dec_obj3=result_375->buf,
    result_375->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_375->len=self->len;
    memcpy(result_375->buf,self->buf,self->len);
    __result_obj__59 = (struct buffer*)come_increment_ref_count(result_375);
    come_call_finalizer(buffer_finalize, result_375, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
_Bool __result_obj__60;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__60 = string_equals(((char*)(__right_value7=buffer_to_string(left))),((char*)(__right_value8=buffer_to_string(right))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__60;
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
struct buffer* __result_obj__61;
void* __right_value9 = (void*)0;
char* old_buf_376;
int old_len_377;
int new_size_378;
void* __right_value10 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__62;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_376=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_376,self->buf,self->size);
        old_len_377=self->len;
        new_size_378=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_378)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_376,old_len_377);
        self->buf[old_len_377]=0;
        self->size=new_size_378;
        (old_buf_376 = come_decrement_ref_count(old_buf_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__63;
void* __right_value11 = (void*)0;
char* old_buf_379;
int old_len_380;
int new_size_381;
void* __right_value12 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_379=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_380=self->len;
        new_size_381=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_381)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_379,old_len_380);
        self->buf[old_len_380]=0;
        self->size=new_size_381;
        (old_buf_379 = come_decrement_ref_count(old_buf_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__65;
int size_382;
void* __right_value13 = (void*)0;
char* old_buf_383;
int old_len_384;
int new_size_385;
void* __right_value14 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__66;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__65 = self;
        return __result_obj__65;
    }
    size_382=strlen(mem);
    if(    self->len+size_382+1+1>=self->size    ) {
        old_buf_383=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_383,self->buf,self->size);
        old_len_384=self->len;
        new_size_385=(self->size+size_382+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_385)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_383,old_len_384);
        self->buf[old_len_384]=0;
        self->size=new_size_385;
        (old_buf_383 = come_decrement_ref_count(old_buf_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_382);
    self->len+=size_382;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__67;
va_list args_386;
char* result_387;
int len_388;
struct buffer* __result_obj__68;
void* __right_value15 = (void*)0;
char* mem_389;
int size_390;
void* __right_value16 = (void*)0;
char* old_buf_391;
int old_len_392;
int new_size_393;
void* __right_value17 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__69;
result_387 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__67 = self;
        return __result_obj__67;
    }
    __builtin_va_start(args_386,msg);
    len_388=vasprintf(&result_387,msg,args_386);
    __builtin_va_end(args_386);
    if(    len_388<0    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    mem_389=(char*)come_increment_ref_count(__builtin_string(result_387));
    size_390=strlen(mem_389);
    if(    self->len+size_390+1+1>=self->size    ) {
        old_buf_391=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_391,self->buf,self->size);
        old_len_392=self->len;
        new_size_393=(self->size+size_390+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_393)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_391,old_len_392);
        self->buf[old_len_392]=0;
        self->size=new_size_393;
        (old_buf_391 = come_decrement_ref_count(old_buf_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_389,size_390);
    self->len+=size_390;
    self->buf[self->len]=0;
    free(result_387);
    __result_obj__69 = self;
    (mem_389 = come_decrement_ref_count(mem_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__69;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__70;
int size_394;
void* __right_value18 = (void*)0;
char* old_buf_395;
int old_len_396;
int new_size_397;
void* __right_value19 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__71;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    size_394=strlen(mem)+1;
    if(    self->len+size_394+1+1+1>=self->size    ) {
        old_buf_395=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_395,self->buf,self->size);
        old_len_396=self->len;
        new_size_397=(self->size+size_394+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_397)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_395,old_len_396);
        self->buf[old_len_396]=0;
        self->size=new_size_397;
        (old_buf_395 = come_decrement_ref_count(old_buf_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_394);
    self->len+=size_394;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__72;
int* mem_398;
int size_399;
void* __right_value20 = (void*)0;
char* old_buf_400;
int old_len_401;
int new_size_402;
void* __right_value21 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__73;
    if(    self==((void*)0)    ) {
        __result_obj__72 = ((void*)0);
        return __result_obj__72;
    }
    mem_398=&value;
    size_399=sizeof(int);
    if(    self->len+size_399+1+1>=self->size    ) {
        old_buf_400=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_400,self->buf,self->size);
        old_len_401=self->len;
        new_size_402=(self->size+size_399+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_402)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_400,old_len_401);
        self->buf[old_len_401]=0;
        self->size=new_size_402;
        (old_buf_400 = come_decrement_ref_count(old_buf_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_398,size_399);
    self->len+=size_399;
    self->buf[self->len]=0;
    __result_obj__73 = self;
    return __result_obj__73;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_403;
int size_404;
void* __right_value22 = (void*)0;
char* old_buf_405;
int old_len_406;
int new_size_407;
void* __right_value23 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__74;
    mem_403=&value;
    size_404=sizeof(long);
    if(    self->len+size_404+1+1>=self->size    ) {
        old_buf_405=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_405,self->buf,self->size);
        old_len_406=self->len;
        new_size_407=(self->size+size_404+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_407)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_405,old_len_406);
        self->buf[old_len_406]=0;
        self->size=new_size_407;
        (old_buf_405 = come_decrement_ref_count(old_buf_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_403,size_404);
    self->len+=size_404;
    self->buf[self->len]=0;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__75;
short* mem_408;
int size_409;
void* __right_value24 = (void*)0;
char* old_buf_410;
int old_len_411;
int new_size_412;
void* __right_value25 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    mem_408=&value;
    size_409=sizeof(short);
    if(    self->len+size_409+1+1>=self->size    ) {
        old_buf_410=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_410,self->buf,self->size);
        old_len_411=self->len;
        new_size_412=(self->size+size_409+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_412)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_410,old_len_411);
        self->buf[old_len_411]=0;
        self->size=new_size_412;
        (old_buf_410 = come_decrement_ref_count(old_buf_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_408,size_409);
    self->len+=size_409;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__77;
int len_413;
int new_size_414;
void* __right_value26 = (void*)0;
char* __dec_obj12;
int i_415;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = ((void*)0);
        return __result_obj__77;
    }
    len_413=self->len;
    len_413=(len_413+3)&~3;
    if(    len_413>=self->size    ) {
        new_size_414=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_414)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_414;
    }
    for(    i_415=self->len    ;    i_415<len_413    ;    i_415++    ){
        self->buf[i_415]=0;
    }
    self->len=len_413;
    __result_obj__78 = self;
    return __result_obj__78;
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
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* result_416;
struct buffer* __result_obj__79;
struct buffer* __result_obj__80;
    result_416=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__79 = (struct buffer*)come_increment_ref_count(result_416);
        come_call_finalizer(buffer_finalize, result_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__79;
    }
    buffer_append_str(result_416,self);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_416);
    come_call_finalizer(buffer_finalize, result_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* buffer_to_string(struct buffer* self){
void* __right_value29 = (void*)0;
char* __result_obj__81;
void* __right_value30 = (void*)0;
char* __result_obj__82;
    if(    self==((void*)0)    ) {
        __result_obj__81 = (char*)come_increment_ref_count(((char*)(__right_value29=__builtin_string(""))));
        (__right_value29 = come_decrement_ref_count(__right_value29, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__81;
    }
    __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value30=__builtin_string(self->buf))));
    (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__83;
    __result_obj__83 = self->buf;
    return __result_obj__83;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_417;
struct buffer* __result_obj__84;
    result_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_417,self,sizeof(char)*len);
    __result_obj__84 = (struct buffer*)come_increment_ref_count(result_417);
    come_call_finalizer(buffer_finalize, result_417, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_418;
int i_419;
struct buffer* __result_obj__85;
    result_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_419=0    ;    i_419<len    ;    i_419++    ){
        buffer_append(result_418,self[i_419],strlen(self[i_419]));
    }
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_418);
    come_call_finalizer(buffer_finalize, result_418, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_420;
struct buffer* __result_obj__86;
    result_420=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_420,(char*)self,sizeof(short)*len);
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_420);
    come_call_finalizer(buffer_finalize, result_420, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_421;
struct buffer* __result_obj__87;
    result_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_421,(char*)self,sizeof(int)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_421);
    come_call_finalizer(buffer_finalize, result_421, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_422;
struct buffer* __result_obj__88;
    result_422=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_422,(char*)self,sizeof(long)*len);
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_422);
    come_call_finalizer(buffer_finalize, result_422, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_423;
struct buffer* __result_obj__89;
    result_423=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_423,(char*)self,sizeof(float)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_423);
    come_call_finalizer(buffer_finalize, result_423, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_424;
struct buffer* __result_obj__90;
    result_424=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_424,(char*)self,sizeof(double)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_424);
    come_call_finalizer(buffer_finalize, result_424, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

char* buffer_printable(struct buffer* self){
int len_425;
void* __right_value45 = (void*)0;
char* result_426;
int n_427;
int i_428;
unsigned char c_429;
char* __result_obj__91;
    len_425=self->len;
    result_426=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_425*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_427=0;
    for(    i_428=0    ;    i_428<len_425    ;    i_428++    ){
        c_429=self->buf[i_428];
        if(        (c_429>=0&&c_429<32)||c_429==127        ) {
            result_426[n_427++]=94;
            result_426[n_427++]=c_429+65-1;
        }
        else if(        c_429>127        ) {
            result_426[n_427++]=63;
        }
        else {
            result_426[n_427++]=c_429;
        }
    }
    result_426[n_427]=0;
    __result_obj__91 = (char*)come_increment_ref_count(result_426);
    (result_426 = come_decrement_ref_count(result_426, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__91 = come_decrement_ref_count(__result_obj__91, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__91;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_430;
struct list$1char$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_430=0    ;    i_430<num_value    ;    i_430++    ){
        list$1char$_push_back(self,values[i_430]);
    }
    __result_obj__93 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value47 = (void*)0;
struct list_item$1char$* litem_431;
void* __right_value48 = (void*)0;
struct list_item$1char$* litem_432;
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_433;
struct list$1char$* __result_obj__92;
    if(    self->len==0    ) {
        litem_431=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value47=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_431->prev=((void*)0);
        litem_431->next=((void*)0);
        litem_431->item=item;
        self->tail=litem_431;
        self->head=litem_431;
    }
    else if(    self->len==1    ) {
        litem_432=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value48=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_432->prev=self->head;
        litem_432->next=((void*)0);
        litem_432->item=item;
        self->tail=litem_432;
        self->head->next=litem_432;
    }
    else {
        litem_433=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_433->prev=self->tail;
        litem_433->next=((void*)0);
        litem_433->item=item;
        self->tail->next=litem_433;
        self->tail=litem_433;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_434;
struct list_item$1char$* prev_it_435;
    it_434=self->head;
    while(    it_434!=((void*)0)    ) {
        prev_it_435=it_434;
        it_434=it_434->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_435, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char$* __result_obj__94;
    __result_obj__94 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value50=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_436;
struct list$1char$p* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_436=0    ;    i_436<num_value    ;    i_436++    ){
        list$1char$p_push_back(self,values[i_436]);
    }
    __result_obj__96 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value52 = (void*)0;
struct list_item$1char$p* litem_437;
void* __right_value53 = (void*)0;
struct list_item$1char$p* litem_438;
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_439;
struct list$1char$p* __result_obj__95;
    if(    self->len==0    ) {
        litem_437=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value52=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_437->prev=((void*)0);
        litem_437->next=((void*)0);
        litem_437->item=item;
        self->tail=litem_437;
        self->head=litem_437;
    }
    else if(    self->len==1    ) {
        litem_438=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value53=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_438->prev=self->head;
        litem_438->next=((void*)0);
        litem_438->item=item;
        self->tail=litem_438;
        self->head->next=litem_438;
    }
    else {
        litem_439=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_439->prev=self->tail;
        litem_439->next=((void*)0);
        litem_439->item=item;
        self->tail->next=litem_439;
        self->tail=litem_439;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_440;
struct list_item$1char$p* prev_it_441;
    it_440=self->head;
    while(    it_440!=((void*)0)    ) {
        prev_it_441=it_440;
        it_440=it_440->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_441, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1char$p* __result_obj__97;
    __result_obj__97 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value55=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_442;
struct list$1short$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_442=0    ;    i_442<num_value    ;    i_442++    ){
        list$1short$_push_back(self,values[i_442]);
    }
    __result_obj__99 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value57 = (void*)0;
struct list_item$1short$* litem_443;
void* __right_value58 = (void*)0;
struct list_item$1short$* litem_444;
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_445;
struct list$1short$* __result_obj__98;
    if(    self->len==0    ) {
        litem_443=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value57=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_443->prev=((void*)0);
        litem_443->next=((void*)0);
        litem_443->item=item;
        self->tail=litem_443;
        self->head=litem_443;
    }
    else if(    self->len==1    ) {
        litem_444=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value58=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_444->prev=self->head;
        litem_444->next=((void*)0);
        litem_444->item=item;
        self->tail=litem_444;
        self->head->next=litem_444;
    }
    else {
        litem_445=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_445->prev=self->tail;
        litem_445->next=((void*)0);
        litem_445->item=item;
        self->tail->next=litem_445;
        self->tail=litem_445;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_446;
struct list_item$1short$* prev_it_447;
    it_446=self->head;
    while(    it_446!=((void*)0)    ) {
        prev_it_447=it_446;
        it_446=it_446->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_447, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1short$* __result_obj__100;
    __result_obj__100 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value60=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_448;
struct list$1int$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_448=0    ;    i_448<num_value    ;    i_448++    ){
        list$1int$_push_back(self,values[i_448]);
    }
    __result_obj__102 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value62 = (void*)0;
struct list_item$1int$* litem_449;
void* __right_value63 = (void*)0;
struct list_item$1int$* litem_450;
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_451;
struct list$1int$* __result_obj__101;
    if(    self->len==0    ) {
        litem_449=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value62=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_449->prev=((void*)0);
        litem_449->next=((void*)0);
        litem_449->item=item;
        self->tail=litem_449;
        self->head=litem_449;
    }
    else if(    self->len==1    ) {
        litem_450=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value63=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_450->prev=self->head;
        litem_450->next=((void*)0);
        litem_450->item=item;
        self->tail=litem_450;
        self->head->next=litem_450;
    }
    else {
        litem_451=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_451->prev=self->tail;
        litem_451->next=((void*)0);
        litem_451->item=item;
        self->tail->next=litem_451;
        self->tail=litem_451;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_452;
struct list_item$1int$* prev_it_453;
    it_452=self->head;
    while(    it_452!=((void*)0)    ) {
        prev_it_453=it_452;
        it_452=it_452->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1int$* __result_obj__103;
    __result_obj__103 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value65=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_454;
struct list$1long$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_454=0    ;    i_454<num_value    ;    i_454++    ){
        list$1long$_push_back(self,values[i_454]);
    }
    __result_obj__105 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value67 = (void*)0;
struct list_item$1long$* litem_455;
void* __right_value68 = (void*)0;
struct list_item$1long$* litem_456;
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_457;
struct list$1long$* __result_obj__104;
    if(    self->len==0    ) {
        litem_455=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value67=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_455->prev=((void*)0);
        litem_455->next=((void*)0);
        litem_455->item=item;
        self->tail=litem_455;
        self->head=litem_455;
    }
    else if(    self->len==1    ) {
        litem_456=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value68=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_456->prev=self->head;
        litem_456->next=((void*)0);
        litem_456->item=item;
        self->tail=litem_456;
        self->head->next=litem_456;
    }
    else {
        litem_457=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_457->prev=self->tail;
        litem_457->next=((void*)0);
        litem_457->item=item;
        self->tail->next=litem_457;
        self->tail=litem_457;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_458;
struct list_item$1long$* prev_it_459;
    it_458=self->head;
    while(    it_458!=((void*)0)    ) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1long$* __result_obj__106;
    __result_obj__106 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value70=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_460;
struct list$1float$* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_460=0    ;    i_460<num_value    ;    i_460++    ){
        list$1float$_push_back(self,values[i_460]);
    }
    __result_obj__108 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value72 = (void*)0;
struct list_item$1float$* litem_461;
void* __right_value73 = (void*)0;
struct list_item$1float$* litem_462;
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_463;
struct list$1float$* __result_obj__107;
    if(    self->len==0    ) {
        litem_461=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value72=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_461->prev=((void*)0);
        litem_461->next=((void*)0);
        litem_461->item=item;
        self->tail=litem_461;
        self->head=litem_461;
    }
    else if(    self->len==1    ) {
        litem_462=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value73=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_462->prev=self->head;
        litem_462->next=((void*)0);
        litem_462->item=item;
        self->tail=litem_462;
        self->head->next=litem_462;
    }
    else {
        litem_463=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_463->prev=self->tail;
        litem_463->next=((void*)0);
        litem_463->item=item;
        self->tail->next=litem_463;
        self->tail=litem_463;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_464;
struct list_item$1float$* prev_it_465;
    it_464=self->head;
    while(    it_464!=((void*)0)    ) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_465, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1float$* __result_obj__109;
    __result_obj__109 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value75=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_466;
struct list$1double$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_466=0    ;    i_466<num_value    ;    i_466++    ){
        list$1double$_push_back(self,values[i_466]);
    }
    __result_obj__111 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value77 = (void*)0;
struct list_item$1double$* litem_467;
void* __right_value78 = (void*)0;
struct list_item$1double$* litem_468;
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_469;
struct list$1double$* __result_obj__110;
    if(    self->len==0    ) {
        litem_467=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value77=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_467->prev=((void*)0);
        litem_467->next=((void*)0);
        litem_467->item=item;
        self->tail=litem_467;
        self->head=litem_467;
    }
    else if(    self->len==1    ) {
        litem_468=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value78=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_468->prev=self->head;
        litem_468->next=((void*)0);
        litem_468->item=item;
        self->tail=litem_468;
        self->head->next=litem_468;
    }
    else {
        litem_469=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_469->prev=self->tail;
        litem_469->next=((void*)0);
        litem_469->item=item;
        self->tail->next=litem_469;
        self->tail=litem_469;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_470;
struct list_item$1double$* prev_it_471;
    it_470=self->head;
    while(    it_470!=((void*)0)    ) {
        prev_it_471=it_470;
        it_470=it_470->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_471, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value76 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1double$* __result_obj__112;
    __result_obj__112 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value80=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
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
void* __right_value81 = (void*)0;
char* __result_obj__113;
int len_472;
void* __right_value82 = (void*)0;
char* result_473;
char* __result_obj__114;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    len_472=strlen(self)+strlen(right);
    result_473=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_472+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_473,self,len_472+1);
    strncat(result_473,right,len_472+1);
    __result_obj__114 = (char*)come_increment_ref_count(result_473);
    (result_473 = come_decrement_ref_count(result_473, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* string_operator_add(char* self, char* right){
void* __right_value83 = (void*)0;
char* __result_obj__115;
int len_474;
void* __right_value84 = (void*)0;
char* result_475;
char* __result_obj__116;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_474=strlen(self)+strlen(right);
    result_475=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_474+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_475,self,len_474+1);
    strncat(result_475,right,len_474+1);
    __result_obj__116 = (char*)come_increment_ref_count(result_475);
    (result_475 = come_decrement_ref_count(result_475, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* charp_operator_mult(char* self, int right){
void* __right_value85 = (void*)0;
char* __result_obj__117;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct buffer* buf_476;
int i_477;
void* __right_value88 = (void*)0;
char* __result_obj__118;
    if(    self==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    buf_476=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_477=0    ;    i_477<right    ;    i_477++    ){
        buffer_append_str(buf_476,self);
    }
    __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value88=buffer_to_string(buf_476))));
    come_call_finalizer(buffer_finalize, buf_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* string_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__119;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_478;
int i_479;
void* __right_value92 = (void*)0;
char* __result_obj__120;
    if(    self==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    buf_478=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_479=0    ;    i_479<right    ;    i_479++    ){
        buffer_append_str(buf_478,self);
    }
    __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_478))));
    come_call_finalizer(buffer_finalize, buf_478, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__120;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_480;
int i_481;
    result_480=(_Bool)0;
    for(    i_481=0    ;    i_481<len    ;    i_481++    ){
        if(        strncmp(self[i_481],str,strlen(self[i_481]))==0        ) {
            result_480=(_Bool)1;
            break;
        }
    }
    return result_480;
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
int result_482;
char* p_483;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_482=0;
    p_483=value;
    while(    *p_483    ) {
        result_482+=(*p_483);
        p_483++;
    }
    return result_482;
}

unsigned int string_get_hash_key(char* value){
int result_484;
char* p_485;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_484=0;
    p_485=value;
    while(    *p_485    ) {
        result_484+=(*p_485);
        p_485++;
    }
    return result_484;
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
_Bool result_486;
    result_486=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_486;
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
_Bool result_487;
    result_487=(c>=32&&c<=126);
    return result_487;
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
void* __right_value93 = (void*)0;
char* __result_obj__121;
int len_488;
void* __right_value94 = (void*)0;
char* result_489;
int i_490;
char* __result_obj__122;
    if(    str==((void*)0)    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    len_488=strlen(str);
    result_489=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_488+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_490=0    ;    i_490<len_488    ;    i_490++    ){
        result_489[i_490]=str[len_488-i_490-1];
    }
    result_489[len_488]=0;
    __result_obj__122 = (char*)come_increment_ref_count(result_489);
    (result_489 = come_decrement_ref_count(result_489, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value95 = (void*)0;
char* __result_obj__123;
int len_491;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
char* __result_obj__124;
void* __right_value98 = (void*)0;
char* __result_obj__125;
void* __right_value99 = (void*)0;
char* __result_obj__126;
void* __right_value100 = (void*)0;
char* result_492;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_491=strlen(str);
    if(    head<0    ) {
        head+=len_491;
    }
    if(    tail<0    ) {
        tail+=len_491+1;
    }
    if(    head>tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value97=charp_reverse(((char*)(__right_value96=charp_substring(str,tail,head)))))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_491    ) {
        tail=len_491;
    }
    if(    head==tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    tail-head+1<1    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result_492=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_492,str+head,tail-head);
    result_492[tail-head]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_492);
    (result_492 = come_decrement_ref_count(result_492, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__128;
int len_493;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__129;
void* __right_value104 = (void*)0;
char* __result_obj__130;
void* __right_value105 = (void*)0;
char* __result_obj__131;
void* __right_value106 = (void*)0;
char* result_494;
char* __result_obj__132;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_493=strlen(str);
    if(    head<0    ) {
        head+=len_493;
    }
    if(    tail<0    ) {
        tail+=len_493+1;
    }
    if(    head>tail    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_493    ) {
        tail=len_493;
    }
    if(    head==tail    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    tail-head+1<1    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    result_494=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_494,str+head,tail-head);
    result_494[tail-head]=0;
    __result_obj__132 = (char*)come_increment_ref_count(result_494);
    (result_494 = come_decrement_ref_count(result_494, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__132;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__133;
int len_495;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__134;
void* __right_value110 = (void*)0;
char* __result_obj__135;
void* __right_value111 = (void*)0;
char* __result_obj__136;
void* __right_value112 = (void*)0;
char* result_496;
char* __result_obj__137;
    if(    str==((void*)0)    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    len_495=strlen(str);
    if(    head<0    ) {
        head+=len_495;
    }
    if(    tail<0    ) {
        tail+=len_495+1;
    }
    if(    head>tail    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_495    ) {
        tail=len_495;
    }
    if(    head==tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    tail-head+1<1    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    result_496=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_496,str+head,tail-head);
    result_496[tail-head]=0;
    __result_obj__137 = (char*)come_increment_ref_count(result_496);
    (result_496 = come_decrement_ref_count(result_496, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* xsprintf(char* msg, ...){
void* __right_value113 = (void*)0;
char* __result_obj__138;
va_list args_497;
char* result_498;
int len_499;
void* __right_value114 = (void*)0;
char* __result_obj__139;
void* __right_value115 = (void*)0;
char* result2_500;
char* __result_obj__140;
result_498 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    __builtin_va_start(args_497,msg);
    len_499=vasprintf(&result_498,msg,args_497);
    __builtin_va_end(args_497);
    if(    len_499<0    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result2_500=(char*)come_increment_ref_count(__builtin_string(result_498));
    free(result_498);
    __result_obj__140 = (char*)come_increment_ref_count(result2_500);
    (result2_500 = come_decrement_ref_count(result2_500, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value116 = (void*)0;
char* __result_obj__141;
int len_501;
void* __right_value117 = (void*)0;
char* __result_obj__142;
void* __right_value118 = (void*)0;
char* __result_obj__143;
void* __right_value119 = (void*)0;
char* result_502;
char* __result_obj__144;
    if(    str==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    len_501=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(str))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    if(    head<0    ) {
        head+=len_501;
    }
    if(    tail<0    ) {
        tail+=len_501+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(str))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    tail>=len_501    ) {
        tail=len_501;
    }
    result_502=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_501-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_502,str,head);
    memcpy(result_502+head,str+tail,len_501-tail);
    result_502[len_501-(tail-head)]=0;
    __result_obj__144 = (char*)come_increment_ref_count(result_502);
    (result_502 = come_decrement_ref_count(result_502, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__145;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__145 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__145;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_503;
struct list_item$1char$ph* prev_it_504;
    it_503=self->head;
    while(    it_503!=((void*)0)    ) {
        prev_it_504=it_503;
        it_503=it_503->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_504, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value126 = (void*)0;
struct list_item$1char$ph* litem_508;
char* __dec_obj13;
void* __right_value127 = (void*)0;
struct list_item$1char$ph* litem_509;
char* __dec_obj14;
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_510;
char* __dec_obj15;
struct list$1char$ph* __result_obj__147;
    if(    self->len==0    ) {
        litem_508=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value126=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_508->prev=((void*)0);
        litem_508->next=((void*)0);
        __dec_obj13=litem_508->item,
        litem_508->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_508;
        self->head=litem_508;
    }
    else if(    self->len==1    ) {
        litem_509=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value127=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_509->prev=self->head;
        litem_509->next=((void*)0);
        __dec_obj14=litem_509->item,
        litem_509->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_509;
        self->head->next=litem_509;
    }
    else {
        litem_510=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_510->prev=self->tail;
        litem_510->next=((void*)0);
        __dec_obj15=litem_510->item,
        litem_510->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_510;
        self->tail=litem_510;
    }
    self->len++;
    __result_obj__147 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__147;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1char$ph* __result_obj__146;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1char$ph* result_505;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct buffer* str_506;
int i_507;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1char$ph* __result_obj__148;
    if(    self==((void*)0)    ) {
        __result_obj__146 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value121=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value121, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__146;
    }
    result_505=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_507=0    ;    i_507<charp_length(self)    ;    i_507++    ){
        if(        self[i_507]==c        ) {
            list$1char$ph_push_back(result_505,(char*)come_increment_ref_count(__builtin_string(str_506->buf)));
            buffer_reset(str_506);
        }
        else {
            buffer_append_char(str_506,self[i_507]);
        }
    }
    if(    buffer_length(str_506)!=0    ) {
        list$1char$ph_push_back(result_505,(char*)come_increment_ref_count(__builtin_string(str_506->buf)));
    }
    __result_obj__148 = (struct list$1char$ph*)come_increment_ref_count(result_505);
    come_call_finalizer(list$1char$ph$p_finalize, result_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value131 = (void*)0;
char* __result_obj__149;
    __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value131=xsprintf(msg,self))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__149;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value132 = (void*)0;
char* __result_obj__150;
    __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value132=xsprintf(msg,self))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* charp_printable(char* str){
int len_511;
void* __right_value133 = (void*)0;
char* result_512;
int n_513;
int i_514;
char c_515;
char* __result_obj__151;
    len_511=charp_length(str);
    result_512=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_511*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_513=0;
    for(    i_514=0    ;    i_514<len_511    ;    i_514++    ){
        c_515=str[i_514];
        if(        (c_515>=0&&c_515<32)||c_515==127        ) {
            result_512[n_513++]=94;
            result_512[n_513++]=c_515+65-1;
        }
        else {
            result_512[n_513++]=c_515;
        }
    }
    result_512[n_513]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_512);
    (result_512 = come_decrement_ref_count(result_512, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value134 = (void*)0;
char* __result_obj__152;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct buffer* result_516;
char* p_517;
char* p2_518;
void* __right_value137 = (void*)0;
char* __result_obj__153;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(self))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    result_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_517=self;
    while(    (_Bool)1    ) {
        p2_518=strstr(p_517,str);
        if(        p2_518==((void*)0)        ) {
            p2_518=p_517;
            while(            *p2_518            ) {
                p2_518++;
            }
            buffer_append(result_516,p_517,p2_518-p_517);
            break;
        }
        buffer_append(result_516,p_517,p2_518-p_517);
        buffer_append_str(result_516,replace);
        p_517=p2_518+strlen(str);
    }
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value137=buffer_to_string(result_516))));
    come_call_finalizer(buffer_finalize, result_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* xbasename(char* path){
void* __right_value138 = (void*)0;
char* __result_obj__154;
char* p_519;
void* __right_value139 = (void*)0;
char* __result_obj__155;
void* __right_value140 = (void*)0;
char* __result_obj__156;
void* __right_value141 = (void*)0;
char* __result_obj__157;
    if(    path==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    p_519=path+strlen(path);
    while(    p_519>=path    ) {
        if(        *p_519==47        ) {
            break;
        }
        else {
            p_519--;
        }
    }
    if(    p_519<path    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(path))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(p_519+1))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* xnoextname(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__158;
void* __right_value143 = (void*)0;
char* path2_520;
char* p_521;
void* __right_value144 = (void*)0;
char* __result_obj__159;
void* __right_value145 = (void*)0;
char* __result_obj__160;
void* __right_value146 = (void*)0;
char* __result_obj__161;
    if(    path==((void*)0)    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    path2_520=(char*)come_increment_ref_count(xbasename(path));
    p_521=path2_520+strlen(path2_520);
    while(    p_521>=path2_520    ) {
        if(        *p_521==46        ) {
            break;
        }
        else {
            p_521--;
        }
    }
    if(    p_521<path2_520    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(path2_520))));
        (path2_520 = come_decrement_ref_count(path2_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    else {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value145=charp_substring(path2_520,0,p_521-path2_520))));
        (path2_520 = come_decrement_ref_count(path2_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
    (path2_520 = come_decrement_ref_count(path2_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* xextname(char* path){
void* __right_value147 = (void*)0;
char* __result_obj__162;
char* p_522;
void* __right_value148 = (void*)0;
char* __result_obj__163;
void* __right_value149 = (void*)0;
char* __result_obj__164;
void* __right_value150 = (void*)0;
char* __result_obj__165;
    if(    path==((void*)0)    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    p_522=path+strlen(path);
    while(    p_522>=path    ) {
        if(        *p_522==46        ) {
            break;
        }
        else {
            p_522--;
        }
    }
    if(    p_522<path    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    else {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(p_522+1))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* bool_to_string(_Bool self){
void* __right_value151 = (void*)0;
char* __result_obj__166;
void* __right_value152 = (void*)0;
char* __result_obj__167;
    if(    self    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string("true"))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string("false"))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value153 = (void*)0;
char* __result_obj__168;
void* __right_value154 = (void*)0;
char* __result_obj__169;
    if(    self    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("true"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    else {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("false"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
}

char* char_to_string(char self){
void* __right_value155 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value155=xsprintf("%c",self))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* short_to_string(short self){
void* __right_value156 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf("%d",self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* int_to_string(int self){
void* __right_value157 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%d",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* long_to_string(long self){
void* __right_value158 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%ld",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value159 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%ld",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* float_to_string(float self){
void* __right_value160 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%f",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* double_to_string(double self){
void* __right_value161 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%lf",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* string_to_string(char* self){
void* __right_value162 = (void*)0;
char* __result_obj__177;
void* __right_value163 = (void*)0;
char* __result_obj__178;
    if(    self==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* charp_to_string(char* self){
void* __right_value164 = (void*)0;
char* __result_obj__179;
void* __right_value165 = (void*)0;
char* __result_obj__180;
    if(    self==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
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
void* __right_value166 = (void*)0;
char* __result_obj__181;
void* __right_value167 = (void*)0;
char* __result_obj__182;
    if(    self==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    puts(self);
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

char* charp_print(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__183;
void* __right_value169 = (void*)0;
char* __result_obj__184;
    if(    self==((void*)0)    ) {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    printf("%s",self);
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* charp_printf(char* self, ...){
void* __right_value170 = (void*)0;
char* __result_obj__185;
char* msg2_523;
va_list args_524;
void* __right_value171 = (void*)0;
char* __result_obj__186;
msg2_523 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    __builtin_va_start(args_524,self);
    vasprintf(&msg2_523,self,args_524);
    __builtin_va_end(args_524);
    printf("%s",msg2_523);
    free(msg2_523);
    __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__186;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_525;
    for(    i_525=0    ;    i_525<self    ;    i_525++    ){
        block(parent,i_525);
    }
}

