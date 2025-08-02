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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
    char* sname[16];
    int sline[16];
    int id[16];
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
  0xf2, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x0d, 0x00, 0x0c, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x45, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x39, 0x71, 0x06, 0xfc,
  0x22, 0xf8, 0x80, 0x00, 0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc,
  0xb2, 0x87, 0x23, 0x26, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x23, 0x34,
  0xf4, 0xfe, 0x01, 0x00, 0x83, 0x27, 0xc4, 0xfc, 0x1b, 0x87, 0xf7, 0xff,
  0x23, 0x26, 0xe4, 0xfc, 0x63, 0x5e, 0xf0, 0x02, 0x03, 0x37, 0x04, 0xfd,
  0x93, 0x07, 0x17, 0x00, 0x23, 0x38, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x93, 0x86, 0x17, 0x00, 0x23, 0x3c, 0xd4, 0xfc, 0x03, 0x47, 0x07, 0x00,
  0x23, 0x80, 0xe7, 0x00, 0x83, 0xc7, 0x07, 0x00, 0xf1, 0xf7, 0x09, 0xa8,
  0x83, 0x37, 0x84, 0xfd, 0x13, 0x87, 0x17, 0x00, 0x23, 0x3c, 0xe4, 0xfc,
  0x23, 0x80, 0x07, 0x00, 0x83, 0x27, 0xc4, 0xfc, 0x1b, 0x87, 0xf7, 0xff,
  0x23, 0x26, 0xe4, 0xfc, 0xe3, 0x42, 0xf0, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x79, 0x71,
  0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc,
  0x83, 0x47, 0xf4, 0xfd, 0x23, 0x00, 0xf4, 0xfe, 0xa3, 0x00, 0x04, 0xfe,
  0x05, 0x45, 0x93, 0x07, 0x04, 0xfe, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08,
  0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x01, 0x00,
  0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x1d, 0x71, 0x86, 0xec,
  0xa2, 0xe8, 0x80, 0x10, 0xaa, 0x87, 0xae, 0x86, 0x32, 0x87, 0x23, 0x26,
  0xf4, 0xfa, 0xb6, 0x87, 0x23, 0x24, 0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22,
  0xf4, 0xfa, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27,
  0x44, 0xfa, 0x81, 0x27, 0x8d, 0xc3, 0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27,
  0x63, 0xdd, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27,
  0xc4, 0xfa, 0xbb, 0x07, 0xf0, 0x40, 0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe,
  0x29, 0xa0, 0x83, 0x27, 0xc4, 0xfa, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x81, 0x27, 0xad, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0,
  0x5f, 0xf6, 0x65, 0xa0, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe,
  0xbb, 0x77, 0xf7, 0x02, 0x81, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27,
  0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00,
  0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03,
  0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27,
  0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17,
  0x22, 0x97, 0x23, 0x04, 0xf7, 0xfc, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27,
  0x44, 0xfe, 0xbb, 0x57, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x81, 0x27, 0xd1, 0xfb, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27,
  0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x5f, 0xee, 0x11, 0xa8,
  0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc,
  0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xed, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf,
  0x07, 0xfc, 0xe6, 0x60, 0x46, 0x64, 0x25, 0x61, 0x82, 0x80, 0x59, 0x71,
  0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87,
  0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8,
  0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9,
  0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00,
  0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07,
  0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x3f, 0xe6, 0x55, 0xa0, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22,
  0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47,
  0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27,
  0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7,
  0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26,
  0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x7f, 0xde,
  0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7,
  0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0x3f, 0xdd, 0x83, 0x27, 0xc4, 0xfe,
  0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80,
  0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8,
  0xae, 0x87, 0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28,
  0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27,
  0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb,
  0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9,
  0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9,
  0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x5f, 0xd6, 0x55, 0xa0,
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
  0x9f, 0xce, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97,
  0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcd, 0x83, 0x27,
  0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe,
  0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61,
  0x82, 0x80, 0x31, 0x71, 0x86, 0xfc, 0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34,
  0xa4, 0xf8, 0x0c, 0xe4, 0x10, 0xe8, 0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4,
  0x23, 0x38, 0x04, 0x03, 0x23, 0x3c, 0x14, 0x03, 0x93, 0x07, 0x04, 0x04,
  0x23, 0x30, 0xf4, 0xf8, 0x83, 0x37, 0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc,
  0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe,
  0xd9, 0xac, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0x93, 0x07, 0x50, 0x02, 0x63, 0x0a, 0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0xdf, 0xc5, 0x6d, 0xa4,
  0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06,
  0x63, 0x1a, 0xf7, 0x12, 0x85, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x00, 0x89, 0x47, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x40, 0x06, 0x63, 0x8d,
  0xe7, 0x04, 0x13, 0x07, 0x80, 0x07, 0x63, 0x92, 0xe7, 0x0a, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47, 0x63, 0x12, 0xf7, 0x02,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x63, 0x23, 0x38, 0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35,
  0x04, 0xfb, 0xef, 0xf0, 0x5f, 0xd1, 0x09, 0xac, 0x83, 0x37, 0x84, 0xf9,
  0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c,
  0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfb, 0xef, 0xf0,
  0x3f, 0xdf, 0xcd, 0xaa, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0x85, 0x47, 0x63, 0x13, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x30, 0xf4, 0xfa,
  0x83, 0x37, 0x04, 0xfa, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0x5f, 0xcc, 0xc9, 0xa2, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfa, 0x83, 0x37,
  0x84, 0xfa, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xda,
  0x45, 0xa2, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x9f, 0xb4, 0x23, 0x20,
  0x04, 0xfe, 0x11, 0xa8, 0x13, 0x05, 0xc0, 0x06, 0xef, 0xf0, 0xbf, 0xb3,
  0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27,
  0x04, 0xfe, 0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27,
  0xe3, 0x40, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xb1, 0xb9, 0xaa, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x50, 0x02, 0x63, 0x86,
  0xe7, 0x12, 0x13, 0x07, 0x50, 0x02, 0x63, 0xc7, 0xe7, 0x12, 0x13, 0x07,
  0x80, 0x07, 0x63, 0x43, 0xf7, 0x12, 0x13, 0x07, 0x30, 0x06, 0x63, 0xcf,
  0xe7, 0x10, 0x9b, 0x87, 0xd7, 0xf9, 0xbe, 0x86, 0x1b, 0x87, 0x06, 0x00,
  0xd5, 0x47, 0x63, 0xe7, 0xe7, 0x10, 0x93, 0x97, 0x06, 0x02, 0x81, 0x93,
  0x13, 0x97, 0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x47, 0x6d,
  0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00,
  0x93, 0x87, 0x47, 0x6c, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9,
  0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x22,
  0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfc, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85,
  0xef, 0xf0, 0x9f, 0xac, 0xf1, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x2a, 0xf4, 0xfc,
  0x83, 0x27, 0x44, 0xfd, 0x01, 0x46, 0xc1, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0x7f, 0xaa, 0x6d, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfc, 0x13, 0x05,
  0x00, 0x03, 0xef, 0xf0, 0x1f, 0xa5, 0x13, 0x05, 0x80, 0x07, 0xef, 0xf0,
  0x9f, 0xa4, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0,
  0xdf, 0xb8, 0x69, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37,
  0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x47, 0x62,
  0x23, 0x3c, 0xf4, 0xfc, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x13, 0x87,
  0x17, 0x00, 0x23, 0x3c, 0xe4, 0xfc, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0xff, 0x9f, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0xed, 0xf3, 0x89, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0xa3, 0x01, 0xf4, 0xfc, 0x83, 0x47,
  0x34, 0xfc, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0x9d, 0x15, 0xa0, 0x13, 0x05,
  0x50, 0x02, 0xef, 0xf0, 0xdf, 0x9c, 0x29, 0xa8, 0x13, 0x05, 0x50, 0x02,
  0xef, 0xf0, 0x3f, 0x9c, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0x5f, 0x9b, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0xe3, 0x92, 0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70,
  0x46, 0x74, 0x29, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8,
  0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfe,
  0x13, 0x87, 0x17, 0x00, 0x23, 0x34, 0xe4, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0xdf, 0x96, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0xed, 0xf3, 0x01, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64,
  0x05, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18,
  0xaa, 0x87, 0x23, 0x38, 0xb4, 0xf8, 0x32, 0x87, 0x23, 0x2e, 0xf4, 0xf8,
  0xba, 0x87, 0x23, 0x2c, 0xf4, 0xf8, 0x23, 0x28, 0x04, 0xfc, 0x23, 0x2a,
  0x04, 0xfc, 0x03, 0x27, 0xc4, 0xf9, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07,
  0xf7, 0x02, 0x03, 0x37, 0x04, 0xf9, 0xba, 0x97, 0x23, 0x30, 0xf4, 0xfe,
  0x83, 0x27, 0x84, 0xf9, 0xfd, 0x37, 0x81, 0x27, 0x03, 0x27, 0xc4, 0xf9,
  0x01, 0x27, 0x63, 0x16, 0xf7, 0x06, 0x23, 0x26, 0x04, 0xfe, 0x1d, 0xa0,
  0x83, 0x27, 0xc4, 0xfe, 0x92, 0x07, 0x03, 0x37, 0x04, 0xfe, 0x3e, 0x97,
  0x83, 0x26, 0xc4, 0xfe, 0x93, 0x07, 0x84, 0xfb, 0x8e, 0x06, 0xb6, 0x97,
  0x98, 0xe3, 0x83, 0x27, 0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x37, 0x04, 0xfe, 0x9c, 0x5b, 0x03, 0x27, 0xc4, 0xfe, 0x01, 0x27,
  0xe3, 0x48, 0xf7, 0xfc, 0x03, 0x27, 0xc4, 0xfe, 0x93, 0x07, 0x84, 0xfb,
  0x0e, 0x07, 0xba, 0x97, 0x23, 0xb0, 0x07, 0x00, 0x83, 0x37, 0x84, 0xfb,
  0x3e, 0x85, 0x93, 0x07, 0x84, 0xfb, 0xbe, 0x85, 0x93, 0x08, 0x50, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x13, 0x05, 0xf0, 0x07, 0xef, 0xf0, 0x5f, 0x80,
  0xfd, 0xa8, 0x93, 0x07, 0x04, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x90, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x2e, 0xf4, 0xfc, 0x83, 0x27, 0xc4, 0xfd, 0x81, 0x27,
  0xa1, 0xe7, 0x83, 0x27, 0x44, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x30, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x83, 0x27, 0x04, 0xfd, 0x3e, 0x85, 0x81, 0x45,
  0x93, 0x08, 0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27, 0x04, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27,
  0xc4, 0xf9, 0x85, 0x27, 0x81, 0x27, 0x03, 0x27, 0x84, 0xf9, 0x3a, 0x86,
  0x83, 0x35, 0x04, 0xf9, 0x3e, 0x85, 0xef, 0xf0, 0xbf, 0xee, 0x51, 0xa8,
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
  0x50, 0x04, 0x73, 0x00, 0x00, 0x00, 0x13, 0x05, 0xf0, 0x07, 0xef, 0xf0,
  0x6f, 0xf0, 0x85, 0x47, 0x3e, 0x85, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61,
  0x82, 0x80, 0x29, 0x71, 0x06, 0xfe, 0x22, 0xfa, 0x80, 0x02, 0x05, 0x45,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x47, 0x3f, 0xbe, 0x85, 0x09, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfc,
  0x23, 0x34, 0x04, 0xfe, 0x01, 0x45, 0x93, 0x07, 0x04, 0xf6, 0xbe, 0x85,
  0x05, 0x46, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x30,
  0xa4, 0xfc, 0x05, 0x45, 0x93, 0x07, 0x04, 0xf6, 0xbe, 0x85, 0x05, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x3c, 0xa4, 0xfa,
  0x03, 0x47, 0x04, 0xf6, 0x83, 0x37, 0x84, 0xfe, 0xc1, 0x17, 0xa2, 0x97,
  0x23, 0x8c, 0xe7, 0xf6, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34,
  0xf4, 0xfe, 0x83, 0x47, 0x04, 0xf6, 0x3e, 0x87, 0xb5, 0x47, 0x63, 0x09,
  0xf7, 0x00, 0x83, 0x47, 0x04, 0xf6, 0x3e, 0x87, 0xa9, 0x47, 0x63, 0x05,
  0xf7, 0x00, 0x4d, 0xb7, 0x01, 0x00, 0x11, 0xa0, 0x01, 0x00, 0x83, 0x37,
  0x84, 0xfe, 0xfd, 0x17, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x8c, 0x07, 0xf6,
  0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x36, 0xbe, 0x85,
  0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x38,
  0xa4, 0xfa, 0x83, 0x47, 0x84, 0xf6, 0x63, 0x82, 0x07, 0x28, 0x23, 0x22,
  0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xf6, 0x23, 0x3c,
  0xf4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x07, 0x63, 0x14, 0xf7, 0x0a,
  0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x31, 0xa0,
  0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37,
  0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x00, 0x02,
  0xe3, 0x04, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0xa5, 0x47, 0xe3, 0x0c, 0xf7, 0xfc, 0x83, 0x27, 0x04, 0xfe,
  0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03,
  0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87, 0x87, 0x00,
  0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x88, 0x07, 0xec, 0x03, 0x27,
  0x44, 0xfe, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf7, 0x02, 0xc1, 0x17,
  0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe, 0x23, 0xa0, 0xe7, 0xf0, 0x83, 0x27,
  0x44, 0xfe, 0x85, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x23, 0x34, 0x04, 0xfe,
  0x23, 0x20, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0x89, 0x47, 0xe3, 0xde, 0xe7, 0xf4, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0x65, 0x29, 0xef, 0xf0, 0xdf, 0xc8, 0xb1, 0xaa, 0x83, 0x37, 0x84, 0xfd,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x00, 0x02, 0x63, 0x00,
  0xf7, 0x02, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0xa5, 0x47, 0x63, 0x11, 0xf7, 0x08, 0x31, 0xa0, 0x83, 0x37, 0x84, 0xfd,
  0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x00, 0x02, 0xe3, 0x04, 0xf7, 0xfe,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47,
  0xe3, 0x0c, 0xf7, 0xfc, 0x83, 0x27, 0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe,
  0x13, 0x97, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02,
  0xba, 0x97, 0xc1, 0x17, 0x33, 0x87, 0x87, 0x00, 0x83, 0x37, 0x84, 0xfe,
  0xba, 0x97, 0x23, 0x88, 0x07, 0xec, 0x83, 0x27, 0x04, 0xfe, 0x85, 0x27,
  0x23, 0x20, 0xf4, 0xfe, 0x23, 0x34, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xfe,
  0x1b, 0x87, 0x07, 0x00, 0x89, 0x47, 0x63, 0xd5, 0xe7, 0x0c, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x65, 0x20, 0xef, 0xf0, 0xdf, 0xbe, 0x75, 0xa8,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0xb9, 0xeb, 0x83, 0x27,
  0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07,
  0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87,
  0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x88, 0x07, 0xec,
  0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x03, 0x27,
  0x44, 0xfe, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf7, 0x02, 0xc1, 0x17,
  0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe, 0x23, 0xa0, 0xe7, 0xf0, 0x83, 0x27,
  0x44, 0xfe, 0x85, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0xb9, 0xa8, 0x83, 0x37,
  0x84, 0xfd, 0x03, 0xc7, 0x07, 0x00, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x26,
  0x44, 0xfe, 0x93, 0x96, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07,
  0xf6, 0x02, 0xb6, 0x97, 0xc1, 0x17, 0xb3, 0x86, 0x87, 0x00, 0x83, 0x37,
  0x84, 0xfe, 0xb6, 0x97, 0x23, 0x88, 0xe7, 0xec, 0x83, 0x37, 0x84, 0xfd,
  0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x03, 0x37, 0x84, 0xfe, 0xbd, 0x47, 0xe3, 0xd2,
  0xe7, 0xe0, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xe5, 0x15, 0xef, 0xf0,
  0x5f, 0xb3, 0x11, 0xa0, 0xcd, 0xbb, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfa, 0x83, 0x27, 0xc4, 0xfa,
  0x81, 0x27, 0x99, 0xeb, 0x03, 0x27, 0x44, 0xfe, 0x93, 0x07, 0x04, 0xec,
  0x3a, 0x86, 0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0, 0x3f, 0xb4, 0x01, 0xb3,
  0x23, 0x2a, 0x04, 0xfc, 0x29, 0xa8, 0x93, 0x07, 0xc4, 0xf5, 0x3e, 0x85,
  0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27, 0x44, 0xfd,
  0x85, 0x27, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfd, 0x3e, 0x87,
  0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x4d, 0xf7, 0xfc,
  0xf9, 0xb1, 0x01, 0x00, 0xe9, 0xb1, 0x00, 0x00, 0x13, 0x01, 0x01, 0xff,
  0x23, 0x34, 0x11, 0x00, 0x13, 0x05, 0x04, 0x00, 0x93, 0x05, 0x00, 0x01,
  0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0x2f, 0xd9, 0x13, 0x05, 0xa0, 0x00,
  0xef, 0xf0, 0xaf, 0xc3, 0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01,
  0x67, 0x80, 0x00, 0x00, 0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00,
  0x83, 0x32, 0x84, 0xfd, 0x13, 0x85, 0x02, 0x00, 0x93, 0x05, 0x00, 0x01,
  0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0x2f, 0xd6, 0x13, 0x05, 0xa0, 0x00,
  0xef, 0xf0, 0xaf, 0xc0, 0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01,
  0x67, 0x80, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00,
  0x04, 0xfa, 0xff, 0xff, 0x48, 0xf9, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x2c, 0xfa, 0xff, 0xff, 0x8c, 0xf9, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x2c, 0xfa, 0xff, 0xff, 0xbc, 0xf9, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff, 0x2c, 0xfa, 0xff, 0xff,
  0x6a, 0xf9, 0xff, 0xff, 0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x52, 0x52, 0x20,
  0x4d, 0x41, 0x58, 0x20, 0x43, 0x4f, 0x4d, 0x4d, 0x41, 0x4e, 0x44, 0x00,
  0x41, 0x52, 0x47, 0x20, 0x4e, 0x55, 0x4d, 0x20, 0x45, 0x52, 0x52, 0x4f,
  0x52, 0x00, 0x00, 0x00, 0x45, 0x52, 0x52, 0x20, 0x41, 0x52, 0x47, 0x20,
  0x4e, 0x55, 0x4d, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30,
  0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34,
  0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x65, 0x00, 0x00, 0x00, 0x72, 0x69,
  0x73, 0x63, 0x76, 0x00, 0x01, 0x5b, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05,
  0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70,
  0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f,
  0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69,
  0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e,
  0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x0d, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x34, 0x0d, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x01, 0x80, 0x01, 0x11, 0x00, 0x10, 0x06, 0x11, 0x01, 0x12, 0x01, 0x03,
  0x0e, 0x1b, 0x0e, 0x25, 0x0e, 0x13, 0x05, 0x00, 0x00, 0x00, 0xb9, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x01, 0xfb, 0x0e,
  0x0a, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6d,
  0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x02, 0x34, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x07, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00,
  0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00,
  0x01, 0x09, 0x04, 0x00, 0x00, 0x01, 0x01, 0x6d, 0x69, 0x6e, 0x75, 0x78,
  0x2e, 0x53, 0x00, 0x2f, 0x55, 0x73, 0x65, 0x72, 0x73, 0x2f, 0x61, 0x62,
  0x32, 0x35, 0x63, 0x71, 0x2f, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x39, 0x00,
  0x47, 0x4e, 0x55, 0x20, 0x41, 0x53, 0x20, 0x32, 0x2e, 0x34, 0x33, 0x2e,
  0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x90, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x34, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x8a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xd6, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x2c, 0x26, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x01, 0x00, 0x34, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd6, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x38, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xba, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe2, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x2c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xfe, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xd8, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x30, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x01, 0x00, 0x60, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x2c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xf2, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xc4, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x2c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x2c, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x30, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xda, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x73, 0x68,
  0x2e, 0x63, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x24, 0x78, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x6d, 0x69, 0x6e,
  0x75, 0x78, 0x2e, 0x6f, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66,
  0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d,
  0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30,
  0x00, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72, 0x00, 0x70, 0x72, 0x69,
  0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c,
  0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x64, 0x75,
  0x6d, 0x70, 0x5f, 0x73, 0x30, 0x00, 0x72, 0x75, 0x6e, 0x5f, 0x63, 0x6f,
  0x6d, 0x6d, 0x61, 0x6e, 0x64, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54,
  0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75,
  0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67,
  0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x73, 0x74, 0x72, 0x6e, 0x63, 0x70, 0x79,
  0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f,
  0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x5f, 0x6d, 0x69, 0x6e,
  0x75, 0x73, 0x34, 0x30, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73,
  0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x70, 0x72,
  0x69, 0x6e, 0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54,
  0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65,
  0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x70, 0x72,
  0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e, 0x73, 0x79,
  0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61,
  0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72,
  0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75,
  0x74, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x61,
  0x72, 0x61, 0x6e, 0x67, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75,
  0x67, 0x5f, 0x69, 0x6e, 0x66, 0x6f, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75,
  0x67, 0x5f, 0x61, 0x62, 0x62, 0x72, 0x65, 0x76, 0x00, 0x2e, 0x64, 0x65,
  0x62, 0x75, 0x67, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x00, 0x2e, 0x64, 0x65,
  0x62, 0x75, 0x67, 0x5f, 0x73, 0x74, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa8, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x90, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x0d, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2c, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x45, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x79, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xdf, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x13, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x90, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int msh_elf_len=6232;
typedef int pid_t;

typedef unsigned long  int anonymous_var_nameX29;

typedef long  int anonymous_var_nameX30;

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
typedef unsigned long  int anonymous_var_nameX33;

typedef long  int anonymous_var_nameX34;

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
static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail);
static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self);
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
void enter_user(unsigned long  int anonymous_var_nameX373, unsigned long  int anonymous_var_nameX374, unsigned long  int anonymous_var_nameX375, unsigned long  long anonymous_var_nameX376, unsigned long  long anonymous_var_nameX377);
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
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
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

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

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
unsigned long  long x_373;
memset(&x_373, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_373));
    return x_373;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_374;
memset(&sp_val_374, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出オペランド %0 に
        : "=r"(sp_val_374): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_374;
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
    result_54=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 804, "struct proc*"));
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
        result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 814, "struct map$2void$ptuple2$2void$plong$$ph*"))));
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
    result_69=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "/usr/local/include/comelang.h", 1983, "struct map$2void$ptuple2$2void$plong$$ph*"))));
    __dec_obj2=result_69->key_list,
    result_69->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1985, "struct list$1void$p*"))));
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
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value3=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1912, "void**"))));
    self->items=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value4=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(128)), "/usr/local/include/comelang.h", 1913, "struct tuple2$2void$plong$**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value5=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1914, "_Bool*"))));
    for(    i_66=0    ;    i_66<128    ;    i_66++    ){
        self->item_existance[i_66]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj1=self->key_list,
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1924, "struct list$1void$p*"))));
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
    keys_80=(void**)come_increment_ref_count(((void**)(__right_value12=(void**)come_calloc_v2(1, sizeof(void*)*(1*(size_79)), "/usr/local/include/comelang.h", 2151, "void**"))));
    items_81=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value13=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(size_79)), "/usr/local/include/comelang.h", 2152, "struct tuple2$2void$plong$**"))));
    item_existance_82=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value14=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_79)), "/usr/local/include/comelang.h", 2153, "_Bool*"))));
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
        litem_114=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value17=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1void$p*"))));
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        litem_114->item=item;
        self->tail=litem_114;
        self->head=litem_114;
    }
    else if(    self->len==1    ) {
        litem_115=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value18=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1void$p*"))));
        litem_115->prev=self->head;
        litem_115->next=((void*)0);
        litem_115->item=item;
        self->tail=litem_115;
        self->head->next=litem_115;
    }
    else {
        litem_116=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value19=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1void$p*"))));
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
        litem_163=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value32=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1proc$ph*"))));
        litem_163->prev=((void*)0);
        litem_163->next=((void*)0);
        __dec_obj5=litem_163->item,
        litem_163->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_163;
        self->head=litem_163;
    }
    else if(    self->len==1    ) {
        litem_164=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value33=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1proc$ph*"))));
        litem_164->prev=self->head;
        litem_164->next=((void*)0);
        __dec_obj6=litem_164->item,
        litem_164->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_164;
        self->head->next=litem_164;
    }
    else {
        litem_165=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value34=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1proc$ph*"))));
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
        litem_168=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value35=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1proc$ph*"))));
        litem_168->prev=((void*)0);
        litem_168->next=((void*)0);
        __dec_obj9=litem_168->item,
        litem_168->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_168;
        self->head=litem_168;
    }
    else if(    self->len==1    ) {
        litem_169=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value36=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1proc$ph*"))));
        litem_169->prev=self->head;
        litem_169->next=((void*)0);
        __dec_obj10=litem_169->item,
        litem_169->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_169;
        self->head->next=litem_169;
    }
    else {
        litem_170=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value37=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1proc$ph*"))));
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
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    if(    gActiveProc==gKernelState[gKernelStateHead].gYieldUserActiveProc&&gNumKernelState>0    ) {
        kernel_yield_return();
    }
    new__190=((struct proc*)(__right_value41=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value41, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value42 = (void*)0;
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
    p_205=((struct proc*)(__right_value42=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value42, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value43 = (void*)0;
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
    p_217=((struct proc*)(__right_value43=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value43, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value44 = (void*)0;
struct proc* p_256;
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
            if(            it_235->zombie            ) {
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
            list$1proc$ph_remove_by_pointer(gProc,zombie_proc_231);
            break;
        }
        else {
            yield();
        }
    }
    p_256=((struct proc*)(__right_value44=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value44, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_256->pagetable,(unsigned long  long)status_va_227,(void*)&exit_status_228,sizeof(int))<0    ) {
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

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_240;
struct list_item$1proc$ph* it_241;
struct list$1proc$ph* __result_obj__70;
    it2_240=0;
    it_241=self->head;
    while(    it_241!=((void*)0)    ) {
        if(        it_241->item==item        ) {
            list$1proc$ph_delete(self,it2_240,it2_240+1);
            break;
        }
        it2_240++;
        it_241=it_241->next;
    }
    __result_obj__70 = self;
    return __result_obj__70;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_242;
struct list$1proc$ph* __result_obj__67;
struct list_item$1proc$ph* it_245;
int i_246;
struct list_item$1proc$ph* prev_it_247;
struct list_item$1proc$ph* it_248;
int i_249;
struct list_item$1proc$ph* prev_it_250;
struct list_item$1proc$ph* it_251;
struct list_item$1proc$ph* head_prev_it_252;
struct list_item$1proc$ph* tail_it_253;
int i_254;
struct list_item$1proc$ph* prev_it_255;
struct list$1proc$ph* __result_obj__69;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_242=tail;
        tail=head;
        head=tmp_242;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__67 = self;
        return __result_obj__67;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_245=self->head;
        i_246=0;
        while(        it_245!=((void*)0)        ) {
            if(            i_246<tail            ) {
                prev_it_247=it_245;
                it_245=it_245->next;
                i_246++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_246==tail            ) {
                self->head=it_245;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_245=it_245->next;
                i_246++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_248=self->head;
        i_249=0;
        while(        it_248!=((void*)0)        ) {
            if(            i_249==head            ) {
                self->tail=it_248->prev;
                self->tail->next=((void*)0);
            }
            if(            i_249>=head            ) {
                prev_it_250=it_248;
                it_248=it_248->next;
                i_249++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_248=it_248->next;
                i_249++;
            }
        }
    }
    else {
        it_251=self->head;
        head_prev_it_252=((void*)0);
        tail_it_253=((void*)0);
        i_254=0;
        while(        it_251!=((void*)0)        ) {
            if(            i_254==head            ) {
                head_prev_it_252=it_251->prev;
            }
            if(            i_254==tail            ) {
                tail_it_253=it_251;
            }
            if(            i_254>=head&&i_254<tail            ) {
                prev_it_255=it_251;
                it_251=it_251->next;
                i_254++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_251=it_251->next;
                i_254++;
            }
        }
        if(        head_prev_it_252!=((void*)0)        ) {
            head_prev_it_252->next=tail_it_253;
        }
        if(        tail_it_253!=((void*)0)        ) {
            tail_it_253->prev=head_prev_it_252;
        }
    }
    __result_obj__69 = self;
    return __result_obj__69;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_243;
struct list_item$1proc$ph* prev_it_244;
struct list$1proc$ph* __result_obj__68;
    it_243=self->head;
    while(    it_243!=((void*)0)    ) {
        prev_it_244=it_243;
        it_243=it_243->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__68 = self;
    return __result_obj__68;
}

int Sys_open(){
struct context_t* trapframe_257;
unsigned long  int arg0_258;
unsigned long  int arg1_259;
unsigned long  int arg2_260;
unsigned long  int arg3_261;
unsigned long  int arg4_262;
unsigned long  int arg5_263;
unsigned long  int arg6_264;
unsigned long  int arg_syscall_no_265;
unsigned long  long user_va_267;
void* __right_value45 = (void*)0;
struct proc* p_268;
int result_269;
    trapframe_257=(struct context_t*)TRAPFRAME;
    arg0_258=trapframe_257->a0;
    arg1_259=trapframe_257->a1;
    arg2_260=trapframe_257->a2;
    arg3_261=trapframe_257->a3;
    arg4_262=trapframe_257->a4;
    arg5_263=trapframe_257->a5;
    arg6_264=trapframe_257->a6;
    arg_syscall_no_265=trapframe_257->a7;
    char kernel_buf_266[256];
    memset(&kernel_buf_266, 0, sizeof(char)    *(256)    );
    user_va_267=arg0_258;
    p_268=((struct proc*)(__right_value45=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_268->pagetable,kernel_buf_266,user_va_267,256);
    result_269=fs_open(kernel_buf_266);
    return result_269;
}

int Sys_fork(){
struct context_t* trapframe_270;
unsigned long  int arg0_271;
unsigned long  int arg1_272;
unsigned long  int arg2_273;
unsigned long  int arg3_274;
unsigned long  int arg4_275;
unsigned long  int arg5_276;
unsigned long  int arg6_277;
unsigned long  int arg_syscall_no_278;
void* __right_value46 = (void*)0;
struct proc* p_279;
int fork_flag_280;
void* __right_value47 = (void*)0;
struct proc* child_281;
unsigned long  long sp_282;
int result_283;
memset(&fork_flag_280, 0, sizeof(int));
    trapframe_270=(struct context_t*)TRAPFRAME;
    arg0_271=trapframe_270->a0;
    arg1_272=trapframe_270->a1;
    arg2_273=trapframe_270->a2;
    arg3_274=trapframe_270->a3;
    arg4_275=trapframe_270->a4;
    arg5_276=trapframe_270->a5;
    arg6_277=trapframe_270->a6;
    arg_syscall_no_278=trapframe_270->a7;
    p_279=((struct proc*)(__right_value46=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_279->program,fork_flag_280=1,0);
    child_281=((struct proc*)(__right_value47=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_282=child_281->context.sp;
    child_281->context=*trapframe_270;
    child_281->context.mepc=child_281->context.mepc+4;
    child_281->context.sp=sp_282;
    child_281->context.a0=0;
    result_283=list$1proc$ph_length(gProc)-1;
    return result_283;
}

int Sys_execv(){
struct context_t* trapframe_284;
unsigned long  int arg0_285;
unsigned long  int arg1_286;
unsigned long  long user_va_288;
void* __right_value48 = (void*)0;
struct proc* p_289;
char* path_290;
unsigned long  long user_argv_293;
int argc_294;
unsigned long  int uargp_295;
int fd_296;
int size_297;
char* elf_buf_298;
int ret_299;
void* __right_value49 = (void*)0;
struct proc* new_p_300;
unsigned long  long sp_301;
int i_303;
unsigned long  int len_304;
unsigned long  long argv_base_305;
int i_306;
unsigned long  long ptr_307;
unsigned long  long nullp_308;
memset(&uargp_295, 0, sizeof(unsigned long  int));
    trapframe_284=(struct context_t*)TRAPFRAME;
    arg0_285=trapframe_284->a0;
    arg1_286=trapframe_284->a1;
    char kernel_buf_287[256];
    memset(&kernel_buf_287, 0, sizeof(char)    *(256)    );
    user_va_288=arg0_285;
    p_289=((struct proc*)(__right_value48=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyinstr(p_289->pagetable,kernel_buf_287,user_va_288,256)<0    ) {
        trapframe_284->a0=-1;
        return -1;
    }
    path_290=kernel_buf_287;
    char argv_storage_291[32][32];
    memset(&argv_storage_291, 0, sizeof(char)    *(32)    *(32)    );
    char* kargv_292[32];
    memset(&kargv_292, 0, sizeof(char*)    *(32)    );
    user_argv_293=arg1_286;
    argc_294=0;
    for(    argc_294=0    ;    argc_294<32    ;    argc_294++    ){
        if(        copyin(p_289->pagetable,(char*)&uargp_295,user_argv_293+argc_294*sizeof(unsigned long  int),sizeof(unsigned long  int))<0        ) {
            trapframe_284->a0=-1;
            return -1;
        }
        if(        uargp_295==0        ) {
            break;
        }
        if(        copyinstr(p_289->pagetable,argv_storage_291[argc_294],uargp_295,sizeof(argv_storage_291[0]))<0        ) {
            trapframe_284->a0=-1;
            return -1;
        }
        kargv_292[argc_294]=argv_storage_291[argc_294];
    }
    kargv_292[argc_294]=((void*)0);
    fd_296=fs_open(path_290);
    if(    fd_296<0    ) {
        trapframe_284->a0=-1;
        return -1;
    }
    size_297=fs_size(fd_296);
    elf_buf_298=calloc(1,size_297);
    ret_299=fs_read(fd_296,elf_buf_298,size_297);
    fs_close(fd_296);
    if(    ret_299<=0    ) {
        trapframe_284->a0=-1;
        return -1;
    }
    alloc_prog(elf_buf_298,0,1);
    free(elf_buf_298);
    new_p_300=((struct proc*)(__right_value49=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_301=new_p_300->context.sp;
    unsigned long  long str_addrs_302[32];
    memset(&str_addrs_302, 0, sizeof(unsigned long  long)    *(32)    );
    for(    i_303=argc_294-1    ;    i_303>=0    ;    i_303--    ){
        len_304=strlen(kargv_292[i_303])+1;
        sp_301-=len_304;
        if(        copyout(new_p_300->pagetable,sp_301,kargv_292[i_303],len_304)<0        ) {
            panic("execv: copyout string failed");
        }
        str_addrs_302[i_303]=sp_301;
    }
    sp_301-=(argc_294+1)*sizeof(unsigned long  long);
    sp_301&=~7;
    argv_base_305=sp_301;
    for(    i_306=0    ;    i_306<argc_294    ;    i_306++    ){
        ptr_307=str_addrs_302[i_306];
        if(        copyout(new_p_300->pagetable,argv_base_305+i_306*sizeof(unsigned long  long),&ptr_307,sizeof(unsigned long  long))<0        ) {
            panic("execv: copyout ptr failed");
        }
    }
    nullp_308=0;
    if(    copyout(new_p_300->pagetable,argv_base_305+argc_294*sizeof(unsigned long  long),&nullp_308,sizeof(unsigned long  long))<0    ) {
        panic("execv: copyout nullp failed");
    }
    trapframe_284->a0=argc_294;
    trapframe_284->a1=argv_base_305;
    trapframe_284->sp=sp_301;
    trapframe_284->mepc=new_p_300->context.mepc-4;
    user_sp=sp_301;
    return argc_294;
}

void uvmunmap(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long npages, int do_free){
unsigned long  long a_309;
unsigned long  long* pte_310;
unsigned long  long pa_311;
    if(    (va%4096)!=0    ) {
        panic("uvmunmap: not aligned");
    }
    for(    a_309=va    ;    a_309<va+npages*4096    ;    a_309+=4096    ){
        pte_310=walk(pagetable,a_309,0);
        if(        pte_310==0||(*pte_310&(1L<<0))==0        ) {
            continue;
        }
        if(        do_free        ) {
            pa_311=(((*pte_310)>>10)<<12);
            kfree((void*)pa_311);
        }
        *pte_310=0;
    }
}

void uvm_dealloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
    if(    new_sz>=old_sz    ) {
        return;
    }
    uvmunmap(pagetable,(((new_sz)+4096-1)&~(4096-1)),((((old_sz)+4096-1)&~(4096-1))-(((new_sz)+4096-1)&~(4096-1)))/4096,1);
}

int uvm_alloc(unsigned long  long* pagetable, unsigned long  long old_sz, unsigned long  long new_sz){
unsigned long  long a_312;
char* mem_313;
    if(    new_sz<=old_sz    ) {
        return 0;
    }
    a_312=(((old_sz)+4096-1)&~(4096-1));
    for(    ;    a_312<new_sz    ;    a_312+=4096    ){
        mem_313=kalloc();
        if(        mem_313==0        ) {
            uvm_dealloc(pagetable,a_312,old_sz);
            return -1;
        }
        memset(mem_313,0,4096);
        if(        mappages(pagetable,a_312,4096,(unsigned long  long)mem_313,(1L<<2)|(1L<<1)|(1L<<4)|(1L<<0))<0        ) {
            kfree(mem_313);
            uvm_dealloc(pagetable,a_312,old_sz);
            return -1;
        }
    }
    __asm volatile("sfence.vma zero, zero");
    return 0;
}

int Sys_brk(){
struct context_t* trapframe_314;
unsigned long  long addr_315;
void* __right_value50 = (void*)0;
struct proc* p_316;
unsigned long  long old_sz_317;
    trapframe_314=(struct context_t*)TRAPFRAME;
    addr_315=trapframe_314->a0;
    p_316=((struct proc*)(__right_value50=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    old_sz_317=p_316->sz;
    if(    addr_315==0    ) {
        return old_sz_317;
    }
    if(    addr_315>old_sz_317    ) {
        if(        uvm_alloc(p_316->pagetable,old_sz_317,addr_315)<0        ) {
            printf("Sys_brk: uvm_alloc failed!\n");
            return -1;
        }
    }
    else if(    addr_315<old_sz_317    ) {
        uvm_dealloc(p_316->pagetable,old_sz_317,addr_315);
    }
    p_316->sz=addr_315;
    return p_316->sz;
}

int Sys_dup2(){
struct context_t* trapframe_318;
unsigned long  int arg0_319;
unsigned long  int arg1_320;
unsigned long  int arg2_321;
unsigned long  int arg3_322;
unsigned long  int arg4_323;
unsigned long  int arg5_324;
unsigned long  int arg6_325;
unsigned long  int arg_syscall_no_326;
int oldfd_327;
int newfd_328;
    trapframe_318=(struct context_t*)TRAPFRAME;
    arg0_319=trapframe_318->a0;
    arg1_320=trapframe_318->a1;
    arg2_321=trapframe_318->a2;
    arg3_322=trapframe_318->a3;
    arg4_323=trapframe_318->a4;
    arg5_324=trapframe_318->a5;
    arg6_325=trapframe_318->a6;
    arg_syscall_no_326=trapframe_318->a7;
    oldfd_327=arg0_319;
    newfd_328=arg1_320;
    fs_dup2(oldfd_327,newfd_328);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_329;
unsigned long  int arg0_330;
unsigned long  int arg1_331;
unsigned long  int arg2_332;
unsigned long  int arg3_333;
unsigned long  int arg4_334;
unsigned long  int arg5_335;
unsigned long  int arg6_336;
unsigned long  int arg_syscall_no_337;
char* kernel_buf_338;
unsigned long  long user_va_339;
int* fd_340;
void* __right_value51 = (void*)0;
struct proc* p_341;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
kernel_buf_338 = (void*)0;
    trapframe_329=(struct context_t*)TRAPFRAME;
    arg0_330=trapframe_329->a0;
    arg1_331=trapframe_329->a1;
    arg2_332=trapframe_329->a2;
    arg3_333=trapframe_329->a3;
    arg4_334=trapframe_329->a4;
    arg5_335=trapframe_329->a5;
    arg6_336=trapframe_329->a6;
    arg_syscall_no_337=trapframe_329->a7;
    user_va_339=arg0_330;
    fd_340=common_kalloc(sizeof(int)*2);
    pipe_open(&fd_340[0],&fd_340[1]);
    p_341=((struct proc*)(__right_value51=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_341->pagetable,(unsigned long  long)user_va_339,(char*)fd_340,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    map$2void$ptuple2$2void$plong$$ph_insert(p_341->mapping_values,(void*)user_va_339,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1724, "struct tuple2$2void$plong$")),(void*)fd_340,sizeof(int)*2)));
    return 0;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_342;
unsigned int it_343;
_Bool same_key_exist_344;
void* it2_345;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__71;
    if(    self->len*10>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_342=voidp_get_hash_key(((void*)key))%self->size;
    it_343=hash_342;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_343]        ) {
            if(            voidp_equals(self->keys[it_343],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_343]);
                    (self->keys[it_343] = come_decrement_ref_count(self->keys[it_343], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_343]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_343]);
                    self->keys[it_343]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_343], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_343]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_343]=item;
                }
                break;
            }
            it_343++;
            if(            it_343>=self->size            ) {
                it_343=0;
            }
            else if(            it_343==hash_342            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_343]=(_Bool)1;
            if(            0            ) {
                self->keys[it_343]=key;
            }
            else {
                self->keys[it_343]=key;
            }
            if(            1            ) {
                self->items[it_343]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_343]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_344=(_Bool)0;
    for(    it2_345=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_345=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_345,key)        ) {
            same_key_exist_344=(_Bool)1;
        }
    }
    if(    !same_key_exist_344    ) {
        list$1void$p_push_back(self->key_list,key);
    }
    __result_obj__71 = self;
    come_call_finalizer(tuple2$2void$plong$$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__71;
}

static struct tuple2$2void$plong$* tuple2$2void$plong$_initialize(struct tuple2$2void$plong$* self, void* v1, unsigned long v2){
struct tuple2$2void$plong$* __result_obj__72;
    self->v1=v1;
    self->v2=v2;
    __result_obj__72 = (struct tuple2$2void$plong$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

int Sys_read(){
struct context_t* trapframe_346;
unsigned long  int arg0_347;
unsigned long  int arg1_348;
unsigned long  int arg2_349;
unsigned long  int arg3_350;
unsigned long  int arg4_351;
unsigned long  int arg5_352;
unsigned long  int arg6_353;
unsigned long  int arg_syscall_no_354;
int fd_355;
unsigned long  long destva_356;
unsigned long  int n_357;
int ret_359;
void* __right_value54 = (void*)0;
struct proc* p_360;
memset(&ret_359, 0, sizeof(int));
    trapframe_346=(struct context_t*)TRAPFRAME;
    arg0_347=trapframe_346->a0;
    arg1_348=trapframe_346->a1;
    arg2_349=trapframe_346->a2;
    arg3_350=trapframe_346->a3;
    arg4_351=trapframe_346->a4;
    arg5_352=trapframe_346->a5;
    arg6_353=trapframe_346->a6;
    arg_syscall_no_354=trapframe_346->a7;
    fd_355=arg0_347;
    destva_356=arg1_348;
    n_357=arg2_349;
    char kernel_buf_358[256];
    memset(&kernel_buf_358, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_355)    ) {
        ret_359=uart_readn(kernel_buf_358,n_357);
    }
    else if(    is_pipe(fd_355)    ) {
        ret_359=piperead(fd_355,kernel_buf_358,n_357);
    }
    else {
        ret_359=fs_read(fd_355,kernel_buf_358,n_357);
        if(        ret_359<0        ) {
            trapframe_346->a0=ret_359;
            return 0;
        }
        kernel_buf_358[ret_359]=0;
    }
    p_360=((struct proc*)(__right_value54=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_360->pagetable,destva_356,kernel_buf_358,ret_359)<0    ) {
        panic("read: copyout failed");
    }
    return ret_359;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_361;
unsigned long  int arg0_362;
unsigned long  int arg1_363;
unsigned long  int arg2_364;
unsigned long  int arg3_365;
unsigned long  int arg4_366;
unsigned long  int arg5_367;
unsigned long  int arg6_368;
unsigned long  int arg_syscall_no_369;
unsigned long  long result_370;
long fd_371;
int ret_372;
    disable_timer_interrupts();
    trapframe_361=(struct context_t*)TRAPFRAME;
    arg0_362=trapframe_361->a0;
    arg1_363=trapframe_361->a1;
    arg2_364=trapframe_361->a2;
    arg3_365=trapframe_361->a3;
    arg4_366=trapframe_361->a4;
    arg5_367=trapframe_361->a5;
    arg6_368=trapframe_361->a6;
    arg_syscall_no_369=trapframe_361->a7;
    result_370=0;
    switch (    arg_syscall_no_369) {
        case 64:
        {
            result_370=Sys_write();
        }
        break;
        case 73:
        {
            result_370=Sys_pipe();
        }
        break;
        case 72:
        {
            result_370=Sys_dup2();
        }
        break;
        case 70:
        {
            result_370=Sys_exit();
        }
        break;
        case 71:
        {
            result_370=Sys_wait();
        }
        break;
        case 66:
        {
            result_370=Sys_open();
        }
        break;
        case 65:
        {
            result_370=Sys_read();
        }
        break;
        case 67:
        {
            fd_371=arg0_362;
            ret_372=fs_close(fd_371);
            result_370=ret_372;
        }
        break;
        case 68:
        {
            result_370=Sys_fork();
        }
        break;
        case 69:
        {
            result_370=Sys_execv();
        }
        break;
        case 74:
        {
            result_370=Sys_brk();
        }
        break;
        default:
        printf("NO. %d\n",arg_syscall_no_369);
        panic("invalid syscall");
        while(        1        ) {
            ;
        }
    }
    trapframe_361->a0=result_370;
    return result_370;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

struct proc* get_current_proc(){
void* __right_value55 = (void*)0;
struct proc* __result_obj__73;
    __result_obj__73 = ((struct proc*)(__right_value55=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__73;
}

void append_mapping_values(void* user_va, void* pa, unsigned long  int size){
struct proc* c_375;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
    c_375=get_current_proc();
    map$2void$ptuple2$2void$plong$$ph_insert(c_375->mapping_values,user_va,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1926, "struct tuple2$2void$plong$")),pa,(long)size)));
}

void global_init(){
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1proc$ph* __dec_obj12;
    __dec_obj12=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 1931, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    gKernelStateHead=0;
    gKernelStateTail=0;
    gNumKernelState=0;
    memset(gKernelState,0,sizeof(struct sKernelState)*16);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__74 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_376;
struct list_item$1proc$ph* prev_it_377;
    it_376=self->head;
    while(    it_376!=((void*)0)    ) {
        prev_it_377=it_376;
        it_376=it_376->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_377, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_378;
void* __right_value60 = (void*)0;
struct proc* p_379;
int gp_380;
unsigned long  int usersp_381;
unsigned long  long usersatp_382;
unsigned long  int entry_383;
memset(&fork_flag_378, 0, sizeof(int));
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
    alloc_prog((char*)msh_elf,fork_flag_378=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_379=((struct proc*)(__right_value60=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gp_380=p_379->context.gp;
    usersp_381=(unsigned long  long)(p_379->context.sp);
    usersatp_382=((8L<<60)|(((unsigned long  long)p_379->pagetable)>>12));
    entry_383=p_379->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_379;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_383,usersp_381,usersatp_382,10000UL,gp_380);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__75;
void* prev_384;
void* __result_obj__76;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__75 = (void*)-1;
        return __result_obj__75;
    }
    prev_384=heap_end;
    heap_end+=incr;
    __result_obj__76 = prev_384;
    return __result_obj__76;
}

void* malloc(unsigned long  int size){
void* __result_obj__77;
struct mem_block* current_385;
struct mem_block* prev_386;
void* __result_obj__78;
struct mem_block* new_mem_387;
void* __result_obj__79;
void* __result_obj__80;
    if(    size==0    ) {
        __result_obj__77 = ((void*)0);
        return __result_obj__77;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_385=free_list;
    prev_386=((void*)0);
    while(    current_385!=((void*)0)    ) {
        if(        current_385->size>=size        ) {
            if(            prev_386==((void*)0)            ) {
                free_list=current_385->next;
            }
            else {
                prev_386->next=current_385->next;
            }
            __result_obj__78 = (void*)(current_385+1);
            return __result_obj__78;
        }
        prev_386=current_385;
        current_385=current_385->next;
    }
    new_mem_387=(struct mem_block*)sbrk(size);
    if(    new_mem_387==(void*)-1    ) {
        __result_obj__79 = ((void*)0);
        return __result_obj__79;
    }
    new_mem_387->size=size;
    new_mem_387->next=((void*)0);
    __result_obj__80 = (void*)(new_mem_387+1);
    return __result_obj__80;
}

void free(void* ptr){
struct mem_block* block_388;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_388=(struct mem_block*)ptr-1;
    block_388->next=free_list;
    free_list=block_388;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_389;
void* __result_obj__81;
void* ptr_390;
void* __result_obj__82;
    total_size_389=nmemb*size;
    if(    total_size_389==0    ) {
        __result_obj__81 = ((void*)0);
        return __result_obj__81;
    }
    ptr_390=malloc(total_size_389);
    if(    ptr_390!=((void*)0)    ) {
        memset(ptr_390,0,total_size_389);
    }
    __result_obj__82 = ptr_390;
    return __result_obj__82;
}

char* strdup(const char* s){
char* s2_391;
unsigned long  int len_392;
char* p_393;
char* __result_obj__83;
    s2_391=s;
    len_392=strlen(s2_391)+1;
    p_393=malloc(len_392);
    if(    p_393    ) {
        memcpy(p_393,s2_391,len_392);
    }
    __result_obj__83 = p_393;
    return __result_obj__83;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__84;
char* __result_obj__85;
char* __result_obj__86;
    if(    !*needle    ) {
        __result_obj__84 = (char*)haystack;
        return __result_obj__84;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_394=haystack;
        const char* n_395=needle;
        while(        *h_394&&*n_395&&(*h_394==*n_395)        ) {
            h_394++;
            n_395++;
        }
        if(        !*n_395        ) {
            __result_obj__85 = (char*)haystack;
            return __result_obj__85;
        }
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_396;
int i_397;
void* __result_obj__87;
    cdst_396=(char*)dst;
    for(    i_397=0    ;    i_397<n    ;    i_397++    ){
        cdst_396[i_397]=c;
    }
    __result_obj__87 = dst;
    return __result_obj__87;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_398;
const unsigned char* s2_399;
memset(&s1_398, 0, sizeof(const unsigned char*));
memset(&s2_399, 0, sizeof(const unsigned char*));
    s1_398=v1;
    s2_399=v2;
    while(    n-->0    ) {
        if(        *s1_398!=*s2_399        ) {
            return *s1_398-*s2_399;
        }
        s1_398++,s2_399++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_400;
char* d_401;
void* __result_obj__88;
void* __result_obj__89;
s_400 = (void*)0;
d_401 = (void*)0;
    if(    n==0    ) {
        __result_obj__88 = dst;
        return __result_obj__88;
    }
    s_400=src;
    d_401=dst;
    if(    s_400<d_401&&s_400+n>d_401    ) {
        s_400+=n;
        d_401+=n;
        while(        n-->0        ) {
            *--d_401=*--s_400;
        }
    }
    else {
        while(        n-->0        ) {
            *d_401++=*s_400++;
        }
    }
    __result_obj__89 = dst;
    return __result_obj__89;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__90;
    __result_obj__90 = memmove(dst,src,n);
    return __result_obj__90;
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
char* os_402;
char* __result_obj__91;
os_402 = (void*)0;
    os_402=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__91 = os_402;
    return __result_obj__91;
}

int strlen(const char* s){
int n_403;
memset(&n_403, 0, sizeof(int));
    for(    n_403=0    ;    s[n_403]    ;    n_403++    ){
        ;
    }
    return n_403;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_404;
char* __result_obj__92;
    d_404=dest;
    while(    *d_404    ) {
        d_404++;
    }
    while(    n--&&*src    ) {
        *d_404++=*src++;
    }
    *d_404=0;
    __result_obj__92 = dest;
    return __result_obj__92;
}

char* strtok(char* s, const char* delim){
static char* next_405;
char* start_406;
char* p_407;
char* __result_obj__93;
int is_delim_409;
char* __result_obj__94;
int is_delim_411;
char* __result_obj__95;
next_405 = (void*)0;
start_406 = (void*)0;
p_407 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_405=s;
    }
    if(    next_405==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    start_406=next_405;
    while(    *start_406!=0    ) {
        const char* d_408=delim;
        is_delim_409=0;
        while(        *d_408!=0        ) {
            if(            *start_406==*d_408            ) {
                is_delim_409=1;
                break;
            }
            d_408++;
        }
        if(        !is_delim_409        ) {
            break;
        }
        start_406++;
    }
    if(    *start_406==0    ) {
        next_405=((void*)0);
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    p_407=start_406;
    while(    *p_407!=0    ) {
        const char* d_410=delim;
        is_delim_411=0;
        while(        *d_410!=0        ) {
            if(            *p_407==*d_410            ) {
                is_delim_411=1;
                break;
            }
            d_410++;
        }
        if(        is_delim_411        ) {
            break;
        }
        p_407++;
    }
    if(    *p_407==0    ) {
        next_405=((void*)0);
    }
    else {
        *p_407=0;
        next_405=p_407+1;
    }
    __result_obj__95 = start_406;
    return __result_obj__95;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_412;
int i_414;
int negative_415;
char* __result_obj__96;
int digit_416;
char* __result_obj__97;
    p_412=buf;
    char tmp_413[32];
    memset(&tmp_413, 0, sizeof(char)    *(32)    );
    i_414=0;
    negative_415=0;
    if(    base<2||base>16    ) {
        *p_412=0;
        __result_obj__96 = p_412;
        return __result_obj__96;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_415=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_416=val_%base;
        tmp_413[i_414++]=(((digit_416<10))?(48+digit_416):(97+digit_416-10));
        val_/=base;
    } while(    val_    );
    if(    negative_415    ) {
        *p_412++=45;
    }
    while(    i_414--    ) {
        *p_412++=tmp_413[i_414];
    }
    *p_412=0;
    __result_obj__97 = buf;
    return __result_obj__97;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_418;
const char* s_419;
unsigned long  int remaining_421;
s_419 = (void*)0;
    char out2_417[512];
    memset(&out2_417, 0, sizeof(char)    *(512)    );
    p_418=out2_417;
    char buf_420[32];
    memset(&buf_420, 0, sizeof(char)    *(32)    );
    remaining_421=sizeof(out2_417);
    for(    ;    *fmt&&remaining_421>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_418++=*fmt;
            remaining_421--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_420,__builtin_va_arg(ap,int),10,1);
            s_419=buf_420;
            break;
            case 117:
            itoa(buf_420,__builtin_va_arg(ap,unsigned int),10,0);
            s_419=buf_420;
            break;
            case 120:
            itoa(buf_420,__builtin_va_arg(ap,unsigned int),16,0);
            s_419=buf_420;
            break;
            case 115:
            s_419=__builtin_va_arg(ap,const char*);
            if(            !s_419            ) {
                s_419="(null)";
            }
            break;
            case 99:
            buf_420[0]=(char)__builtin_va_arg(ap,int);
            buf_420[1]=0;
            s_419=buf_420;
            break;
            case 112:
            strncpy(buf_420,"0x",32);
            itoa(buf_420+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_419=buf_420;
            break;
            case 37:
            buf_420[0]=37;
            buf_420[1]=0;
            s_419=buf_420;
            break;
            default:
            buf_420[0]=37;
            buf_420[1]=*fmt;
            buf_420[2]=0;
            s_419=buf_420;
            break;
        }
        while(        *s_419&&remaining_421>1        ) {
            *p_418++=*s_419++;
            remaining_421--;
        }
    }
    *p_418=0;
    *out=strdup(out2_417);
    return p_418-out2_417;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_422;
char* p_423;
const char* s_424;
unsigned long  int remaining_426;
memset(&ap_422, 0, sizeof(va_list));
s_424 = (void*)0;
    __builtin_va_start(ap_422,fmt);
    p_423=out;
    char buf_425[32];
    memset(&buf_425, 0, sizeof(char)    *(32)    );
    remaining_426=out_size;
    if(    remaining_426==0    ) {
        __builtin_va_end(ap_422);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_426>1            ) {
                *p_423++=*fmt;
                remaining_426--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_424=__builtin_va_arg(ap_422,const char*);
            while(            *s_424&&remaining_426>1            ) {
                *p_423++=*s_424++;
                remaining_426--;
            }
            break;
            case 100:
            itoa(buf_425,__builtin_va_arg(ap_422,int),10,0);
            s_424=buf_425;
            while(            *s_424&&remaining_426>1            ) {
                *p_423++=*s_424++;
                remaining_426--;
            }
            break;
            case 120:
            itoa(buf_425,(unsigned int)__builtin_va_arg(ap_422,int),16,1);
            s_424=buf_425;
            while(            *s_424&&remaining_426>1            ) {
                *p_423++=*s_424++;
                remaining_426--;
            }
            break;
            case 99:
            if(            remaining_426>1            ) {
                *p_423++=(char)__builtin_va_arg(ap_422,int);
                remaining_426--;
            }
            break;
            case 112:
            s_424="0x";
            while(            *s_424&&remaining_426>1            ) {
                *p_423++=*s_424++;
                remaining_426--;
            }
            itoa(buf_425,(long)__builtin_va_arg(ap_422,void*),16,1);
            s_424=buf_425;
            while(            *s_424&&remaining_426>1            ) {
                *p_423++=*s_424++;
                remaining_426--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_425,__builtin_va_arg(ap_422,long),10,1);
                s_424=buf_425;
                while(                *s_424&&remaining_426>1                ) {
                    *p_423++=*s_424++;
                    remaining_426--;
                }
            }
            break;
            default:
            if(            remaining_426>1            ) {
                *p_423++=37;
                remaining_426--;
                if(                remaining_426>1                ) {
                    *p_423++=*fmt;
                    remaining_426--;
                }
            }
            break;
        }
    }
    *p_423=0;
    __builtin_va_end(ap_422);
    return p_423-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_427;
char* p_428;
const char* s_429;
unsigned long  int remaining_431;
memset(&ap_427, 0, sizeof(va_list));
s_429 = (void*)0;
    __builtin_va_start(ap_427,fmt);
    p_428=out;
    char buf_430[32];
    memset(&buf_430, 0, sizeof(char)    *(32)    );
    remaining_431=out_size;
    if(    remaining_431==0    ) {
        __builtin_va_end(ap_427);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_431>1            ) {
                *p_428++=*fmt;
                remaining_431--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_429=__builtin_va_arg(ap_427,const char*);
            while(            *s_429&&remaining_431>1            ) {
                *p_428++=*s_429++;
                remaining_431--;
            }
            break;
            case 100:
            itoa(buf_430,__builtin_va_arg(ap_427,int),10,0);
            s_429=buf_430;
            while(            *s_429&&remaining_431>1            ) {
                *p_428++=*s_429++;
                remaining_431--;
            }
            break;
            case 120:
            itoa(buf_430,(unsigned int)__builtin_va_arg(ap_427,int),16,1);
            s_429=buf_430;
            while(            *s_429&&remaining_431>1            ) {
                *p_428++=*s_429++;
                remaining_431--;
            }
            break;
            case 99:
            if(            remaining_431>1            ) {
                *p_428++=(char)__builtin_va_arg(ap_427,int);
                remaining_431--;
            }
            break;
            case 112:
            s_429="0x";
            while(            *s_429&&remaining_431>1            ) {
                *p_428++=*s_429++;
                remaining_431--;
            }
            itoa(buf_430,(long)__builtin_va_arg(ap_427,void*),16,1);
            s_429=buf_430;
            while(            *s_429&&remaining_431>1            ) {
                *p_428++=*s_429++;
                remaining_431--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_430,__builtin_va_arg(ap_427,long),10,1);
                s_429=buf_430;
                while(                *s_429&&remaining_431>1                ) {
                    *p_428++=*s_429++;
                    remaining_431--;
                }
            }
            break;
            default:
            if(            remaining_431>1            ) {
                *p_428++=37;
                remaining_431--;
                if(                remaining_431>1                ) {
                    *p_428++=*fmt;
                    remaining_431--;
                }
            }
            break;
        }
    }
    *p_428=0;
    __builtin_va_end(ap_427);
    return p_428-out;
}

void printint(int val_, int base, int sign){
int i_433;
int negative_434;
unsigned int uval_435;
int digit_436;
memset(&uval_435, 0, sizeof(unsigned int));
    char buf_432[33];
    memset(&buf_432, 0, sizeof(char)    *(33)    );
    i_433=0;
    negative_434=0;
    if(    sign&&val_<0    ) {
        negative_434=1;
        uval_435=-val_;
    }
    else {
        uval_435=(unsigned int)val_;
    }
    if(    uval_435==0    ) {
        putchar(48);
        return;
    }
    while(    uval_435>0    ) {
        digit_436=uval_435%base;
        buf_432[i_433++]=((digit_436<10)?(48+digit_436):(97+(digit_436-10)));
        uval_435/=base;
    }
    if(    negative_434    ) {
        putchar(45);
    }
    while(    --i_433>=0    ) {
        putchar(buf_432[i_433]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_438;
int negative_439;
int digit_440;
    char buf_437[65];
    memset(&buf_437, 0, sizeof(char)    *(65)    );
    i_438=0;
    negative_439=0;
    if(    sign&&(long)val_<0    ) {
        negative_439=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_440=val_%base;
        buf_437[i_438++]=((digit_440<10)?(48+digit_440):(97+(digit_440-10)));
        val_/=base;
    }
    if(    negative_439    ) {
        putchar(45);
    }
    while(    --i_438>=0    ) {
        putchar(buf_437[i_438]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_442;
int negative_443;
int digit_444;
    char buf_441[65];
    memset(&buf_441, 0, sizeof(char)    *(65)    );
    i_442=0;
    negative_443=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_443=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_444=val_%base;
        buf_441[i_442++]=((digit_444<10)?(48+digit_444):(97+(digit_444-10)));
        val_/=base;
    }
    if(    negative_443    ) {
        putchar(45);
    }
    while(    --i_442>=0    ) {
        putchar(buf_441[i_442]);
    }
}

int printf(const char* fmt, ...){
va_list ap_445;
const char* p_446;
int lcount_447;
unsigned long  int val__448;
unsigned long  long val__449;
long val__450;
long long val__451;
int i_452;
int val__453;
unsigned int val__454;
unsigned long  int val__455;
char c_457;
memset(&ap_445, 0, sizeof(va_list));
p_446 = (void*)0;
    __builtin_va_start(ap_445,fmt);
    for(    p_446=fmt    ;    *p_446    ;    p_446++    ){
        if(        *p_446!=37        ) {
            putchar(*p_446);
            continue;
        }
        p_446++;
        if(        *p_446==108        ) {
            lcount_447=1;
            if(            *(p_446+1)==108            ) {
                lcount_447=2;
                p_446++;
            }
            p_446++;
            switch (            *p_446) {
                case 120:
                {
                    if(                    lcount_447==1                    ) {
                        val__448=__builtin_va_arg(ap_445,unsigned long  int);
                        printlong(val__448,16,0);
                    }
                    else {
                        val__449=__builtin_va_arg(ap_445,unsigned long  long);
                        printlonglong(val__449,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_447==1                    ) {
                        val__450=__builtin_va_arg(ap_445,long);
                        printlong(val__450,10,1);
                    }
                    else {
                        val__451=__builtin_va_arg(ap_445,long  long);
                        printlonglong(val__451,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_452=0                    ;                    i_452<lcount_447                    ;                    i_452++                    ){
                        putchar(108);
                    }
                    putchar(*p_446);
                    break;
                }
            }
        }
        else {
            switch (            *p_446) {
                case 100:
                {
                    val__453=__builtin_va_arg(ap_445,int);
                    printint(val__453,10,1);
                    break;
                }
                case 120:
                {
                    val__454=__builtin_va_arg(ap_445,unsigned int);
                    printint(val__454,16,0);
                    break;
                }
                case 112:
                {
                    val__455=(unsigned long  int)__builtin_va_arg(ap_445,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__455,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_456=__builtin_va_arg(ap_445,const char*);
                    if(                    !s_456                    ) {
                        s_456="(null)";
                    }
                    while(                    *s_456                    ) {
                        putchar(*s_456++);
                    }
                    break;
                }
                case 99:
                {
                    c_457=(char)__builtin_va_arg(ap_445,int);
                    putchar(c_457);
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
                    putchar(*p_446);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_445);
    return 0;
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128    ) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0    ) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_458;
int i_459;
void* __right_value63 = (void*)0;
    buf_458=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_458,"%s %d\n",sname,sline);
    for(    i_459=gNumComeStackFrame-2    ;    i_459>=0    ;    i_459--    ){
        buffer_append_format(buf_458,"%s %d #%d\n",gComeStackFrameSName[i_459],gComeStackFrameSLine[i_459],gComeStackFrameID[i_459]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value63=buffer_to_string(buf_458))));
    (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_458, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_460;
    for(    i_460=gNumComeStackFrame-1    ;    i_460>=0    ;    i_460--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_460],gComeStackFrameSLine[i_460],gComeStackFrameID[i_460]);
    }
}

char* come_get_stackframe(){
void* __right_value64 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value64=__builtin_string(gComeStackFrameBuffer))));
    (__right_value64 = come_decrement_ref_count(__right_value64, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__98 = come_decrement_ref_count(__result_obj__98, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__98;
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
void* result_461;
void* __result_obj__99;
    result_461=((void*)0);
    size=(size+7&~7);
    result_461=calloc(1,size);
    __result_obj__99 = result_461;
    return __result_obj__99;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_462;
struct sMemHeader* prev_it_463;
struct sMemHeader* next_it_464;
unsigned long  int size_465;
struct sMemHeaderTiny* it_466;
struct sMemHeaderTiny* prev_it_467;
struct sMemHeaderTiny* next_it_468;
unsigned long  int size_469;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_462=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_462->allocated!=177783            ) {
                return;
            }
            it_462->allocated=0;
            prev_it_463=it_462->prev;
            next_it_464=it_462->next;
            if(            gAllocMem==it_462            ) {
                gAllocMem=next_it_464;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_463                ) {
                    prev_it_463->next=next_it_464;
                }
                if(                next_it_464                ) {
                    next_it_464->prev=prev_it_463;
                }
            }
            size_465=it_462->size;
            free(it_462);
            gNumFree++;
        }
        else {
            it_466=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_466->allocated!=177783            ) {
                return;
            }
            it_466->allocated=0;
            prev_it_467=it_466->prev;
            next_it_468=it_466->next;
            if(            gAllocMem==it_466            ) {
                gAllocMem=(struct sMemHeader*)next_it_468;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_467                ) {
                    prev_it_467->next=next_it_468;
                }
                if(                next_it_468                ) {
                    next_it_468->prev=prev_it_467;
                }
            }
            size_469=it_466->size;
            free(it_466);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_470;
struct sMemHeader* it_471;
int i_472;
int i_473;
void* __result_obj__100;
void* result_474;
struct sMemHeaderTiny* it_475;
void* __result_obj__101;
memset(&i_472, 0, sizeof(int));
memset(&i_473, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_470=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_471=result_470;
        it_471->allocated=177783;
        it_471->size=size+sizeof(struct sMemHeader);
        it_471->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_472=0            ;            i_472<gNumComeStackFrame            ;            i_472++            ){
                it_471->sname[i_472]=gComeStackFrameSName[i_472];
                it_471->sline[i_472]=gComeStackFrameSLine[i_472];
                it_471->id[i_472]=gComeStackFrameID[i_472];
            }
        }
        else {
            for(            i_473=0            ;            i_473<16            ;            i_473++            ){
                it_471->sname[i_473]=gComeStackFrameSName[gNumComeStackFrame-1-i_473];
                it_471->sline[i_473]=gComeStackFrameSLine[gNumComeStackFrame-1-i_473];
                it_471->id[i_473]=gComeStackFrameID[gNumComeStackFrame-1-i_473];
            }
        }
        come_pop_stackframe_v2();
        it_471->next=gAllocMem;
        it_471->prev=((void*)0);
        it_471->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_471;
        }
        gAllocMem=it_471;
        gNumAlloc++;
        __result_obj__100 = (char*)result_470+sizeof(struct sMemHeader);
        return __result_obj__100;
    }
    else {
        result_474=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_475=result_474;
        it_475->allocated=177783;
        it_475->class_name=class_name;
        it_475->sname=sname;
        it_475->sline=sline;
        it_475->size=size+sizeof(struct sMemHeaderTiny);
        it_475->free_next=((void*)0);
        it_475->next=(struct sMemHeaderTiny*)gAllocMem;
        it_475->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_475;
        }
        gAllocMem=(struct sMemHeader*)it_475;
        gNumAlloc++;
        __result_obj__101 = (char*)result_474+sizeof(struct sMemHeaderTiny);
        return __result_obj__101;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_476;
char* __result_obj__102;
struct sMemHeaderTiny* it_477;
char* __result_obj__103;
    if(    gComeDebugLib    ) {
        it_476=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_476->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_476);
            exit(2);
        }
        __result_obj__102 = it_476->class_name;
        return __result_obj__102;
    }
    else {
        it_477=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_477->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_477);
            exit(2);
        }
        __result_obj__103 = it_477->class_name;
        return __result_obj__103;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_478;
int i_479;
struct sMemHeaderTiny* it_480;
    if(    gComeDebugLib    ) {
        it_478=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_478->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_478->class_name        ) {
            printf("(%s): ",it_478->class_name);
        }
        for(        i_479=0        ;        i_479<16        ;        i_479++        ){
            if(            it_478->sname[i_479]            ) {
                printf("%s %d #%d, ",it_478->sname[i_479],it_478->sline[i_479],it_478->id[i_479]);
            }
        }
        puts("");
    }
    else {
        it_480=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_480->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_480->class_name,it_480->sname,it_480->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_481;
unsigned long  int* ref_count_482;
unsigned long  int* size2_483;
void* __result_obj__104;
    mem_481=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_482=(unsigned long  int*)mem_481;
    *ref_count_482=0;
    size2_483=(unsigned long  int*)(mem_481+sizeof(unsigned long  int));
    *size2_483=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__104 = mem_481+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__104;
}

void come_free(void* mem){
unsigned long  int* ref_count_484;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_484=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_484);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__105;
char* mem_485;
unsigned long  int* size_p_486;
unsigned long  int size_487;
void* result_488;
void* __result_obj__106;
    if(    !block    ) {
        __result_obj__105 = ((void*)0);
        return __result_obj__105;
    }
    mem_485=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_486=(unsigned long  int*)(mem_485+sizeof(unsigned long  int));
    size_487=*size_p_486-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_488=come_calloc_v2(1,size_487,sname,sline,class_name);
    memcpy(result_488,block,size_487);
    __result_obj__106 = result_488;
    return __result_obj__106;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__107;
unsigned long  int* ref_count_489;
void* __result_obj__108;
    if(    mem==((void*)0)    ) {
        __result_obj__107 = mem;
        return __result_obj__107;
    }
    ref_count_489=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_489)++;
    __result_obj__108 = mem;
    return __result_obj__108;
}

void* come_print_ref_count(void* mem){
void* __result_obj__109;
unsigned long  int* ref_count_490;
void* __result_obj__110;
    if(    mem==((void*)0)    ) {
        __result_obj__109 = mem;
        return __result_obj__109;
    }
    ref_count_490=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_490);
    __result_obj__110 = mem;
    return __result_obj__110;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_491;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_491=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_491;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__111;
void* __result_obj__112;
unsigned long  int* ref_count_492;
unsigned long  int count_493;
void (*finalizer_494)(void*);
void* __result_obj__113;
void* __result_obj__114;
memset(&finalizer_494, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__111 = mem;
            return __result_obj__111;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__112 = ((void*)0);
        return __result_obj__112;
    }
    ref_count_492=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_492)--;
    }
    count_493=*ref_count_492;
    if(    !no_free&&count_493<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_494=protocol_fun;
            finalizer_494(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__113 = ((void*)0);
        return __result_obj__113;
    }
    __result_obj__114 = mem;
    return __result_obj__114;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_495)(void*);
void (*finalizer_496)(void*);
void (*finalizer_497)(void*);
unsigned long  int* ref_count_498;
unsigned long  int count_499;
void (*finalizer_500)(void*);
void (*finalizer_501)(void*);
void (*finalizer_502)(void*);
memset(&finalizer_495, 0, sizeof(void (*)(void*)));
memset(&finalizer_496, 0, sizeof(void (*)(void*)));
memset(&finalizer_497, 0, sizeof(void (*)(void*)));
memset(&finalizer_500, 0, sizeof(void (*)(void*)));
memset(&finalizer_501, 0, sizeof(void (*)(void*)));
memset(&finalizer_502, 0, sizeof(void (*)(void*)));
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
                finalizer_495=protocol_fun;
                finalizer_495(protocol_obj);
            }
            finalizer_496=fun;
            finalizer_496(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_497=protocol_fun;
                finalizer_497(protocol_obj);
            }
        }
    }
    else {
        ref_count_498=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_498)--;
        }
        count_499=*ref_count_498;
        if(        !no_free&&count_499<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_500=protocol_fun;
                        finalizer_500(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_501=fun;
                        finalizer_501(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_502=protocol_fun;
                        finalizer_502(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__115;
int len_503;
void* __right_value65 = (void*)0;
char* result_504;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_503=strlen(str)+1;
    result_504=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_503)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_504,str,len_503);
    __result_obj__116 = (char*)come_increment_ref_count(result_504);
    (result_504 = come_decrement_ref_count(result_504, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
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
void* __right_value66 = (void*)0;
char* __result_obj__117;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value66=come_get_stackframe())));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__118;
    __result_obj__118 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__118;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value67 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__119;
    self->size=128;
    __dec_obj13=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2885, "char*"));
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__119 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value68 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__120;
    self->size=128;
    __dec_obj14=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2895, "char*"));
    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__120 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__121;
void* __right_value69 = (void*)0;
struct buffer* result_505;
void* __right_value70 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__121;
    }
    result_505=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2915, "struct buffer*"));
    result_505->size=self->size;
    __dec_obj15=result_505->buf,
    result_505->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2918, "char*"));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_505->len=self->len;
    memcpy(result_505->buf,self->buf,self->len);
    __result_obj__122 = (struct buffer*)come_increment_ref_count(result_505);
    come_call_finalizer(buffer_finalize, result_505, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
_Bool __result_obj__123;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__123 = string_equals(((char*)(__right_value71=buffer_to_string(left))),((char*)(__right_value72=buffer_to_string(right))));
    (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__123;
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
struct buffer* __result_obj__124;
void* __right_value73 = (void*)0;
char* old_buf_506;
int old_len_507;
int new_size_508;
void* __right_value74 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__125;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__124 = self;
        return __result_obj__124;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_506=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2966, "char*"));
        memcpy(old_buf_506,self->buf,self->size);
        old_len_507=self->len;
        new_size_508=(self->size+size+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_508)), "/usr/local/include/comelang.h", 2970, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_506,old_len_507);
        self->buf[old_len_507]=0;
        self->size=new_size_508;
        (old_buf_506 = come_decrement_ref_count(old_buf_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__125 = self;
    return __result_obj__125;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__126;
void* __right_value75 = (void*)0;
char* old_buf_509;
int old_len_510;
int new_size_511;
void* __right_value76 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__127;
    if(    self==((void*)0)    ) {
        __result_obj__126 = ((void*)0);
        return __result_obj__126;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_509=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2989, "char*"));
        old_len_510=self->len;
        new_size_511=(self->size+10+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_511)), "/usr/local/include/comelang.h", 2993, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_509,old_len_510);
        self->buf[old_len_510]=0;
        self->size=new_size_511;
        (old_buf_509 = come_decrement_ref_count(old_buf_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__127 = self;
    return __result_obj__127;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__128;
int size_512;
void* __right_value77 = (void*)0;
char* old_buf_513;
int old_len_514;
int new_size_515;
void* __right_value78 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__129;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__128 = self;
        return __result_obj__128;
    }
    size_512=strlen(mem);
    if(    self->len+size_512+1+1>=self->size    ) {
        old_buf_513=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3015, "char*"));
        memcpy(old_buf_513,self->buf,self->size);
        old_len_514=self->len;
        new_size_515=(self->size+size_512+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_515)), "/usr/local/include/comelang.h", 3019, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_513,old_len_514);
        self->buf[old_len_514]=0;
        self->size=new_size_515;
        (old_buf_513 = come_decrement_ref_count(old_buf_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_512);
    self->len+=size_512;
    self->buf[self->len]=0;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__130;
va_list args_516;
char* result_517;
int len_518;
struct buffer* __result_obj__131;
void* __right_value79 = (void*)0;
char* mem_519;
int size_520;
void* __right_value80 = (void*)0;
char* old_buf_521;
int old_len_522;
int new_size_523;
void* __right_value81 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__132;
result_517 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__130 = self;
        return __result_obj__130;
    }
    __builtin_va_start(args_516,msg);
    len_518=vasprintf(&result_517,msg,args_516);
    __builtin_va_end(args_516);
    if(    len_518<0    ) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    mem_519=(char*)come_increment_ref_count(__builtin_string(result_517));
    size_520=strlen(mem_519);
    if(    self->len+size_520+1+1>=self->size    ) {
        old_buf_521=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3063, "char*"));
        memcpy(old_buf_521,self->buf,self->size);
        old_len_522=self->len;
        new_size_523=(self->size+size_520+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_523)), "/usr/local/include/comelang.h", 3067, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_521,old_len_522);
        self->buf[old_len_522]=0;
        self->size=new_size_523;
        (old_buf_521 = come_decrement_ref_count(old_buf_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_519,size_520);
    self->len+=size_520;
    self->buf[self->len]=0;
    free(result_517);
    __result_obj__132 = self;
    (mem_519 = come_decrement_ref_count(mem_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__132;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__133;
int size_524;
void* __right_value82 = (void*)0;
char* old_buf_525;
int old_len_526;
int new_size_527;
void* __right_value83 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__134;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    size_524=strlen(mem)+1;
    if(    self->len+size_524+1+1+1>=self->size    ) {
        old_buf_525=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3089, "char*"));
        memcpy(old_buf_525,self->buf,self->size);
        old_len_526=self->len;
        new_size_527=(self->size+size_524+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_527)), "/usr/local/include/comelang.h", 3093, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_525,old_len_526);
        self->buf[old_len_526]=0;
        self->size=new_size_527;
        (old_buf_525 = come_decrement_ref_count(old_buf_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_524);
    self->len+=size_524;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__135;
int* mem_528;
int size_529;
void* __right_value84 = (void*)0;
char* old_buf_530;
int old_len_531;
int new_size_532;
void* __right_value85 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__135 = ((void*)0);
        return __result_obj__135;
    }
    mem_528=&value;
    size_529=sizeof(int);
    if(    self->len+size_529+1+1>=self->size    ) {
        old_buf_530=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3116, "char*"));
        memcpy(old_buf_530,self->buf,self->size);
        old_len_531=self->len;
        new_size_532=(self->size+size_529+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_532)), "/usr/local/include/comelang.h", 3120, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_530,old_len_531);
        self->buf[old_len_531]=0;
        self->size=new_size_532;
        (old_buf_530 = come_decrement_ref_count(old_buf_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_528,size_529);
    self->len+=size_529;
    self->buf[self->len]=0;
    __result_obj__136 = self;
    return __result_obj__136;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_533;
int size_534;
void* __right_value86 = (void*)0;
char* old_buf_535;
int old_len_536;
int new_size_537;
void* __right_value87 = (void*)0;
char* __dec_obj22;
struct buffer* __result_obj__137;
    mem_533=&value;
    size_534=sizeof(long);
    if(    self->len+size_534+1+1>=self->size    ) {
        old_buf_535=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3139, "char*"));
        memcpy(old_buf_535,self->buf,self->size);
        old_len_536=self->len;
        new_size_537=(self->size+size_534+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_537)), "/usr/local/include/comelang.h", 3143, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_535,old_len_536);
        self->buf[old_len_536]=0;
        self->size=new_size_537;
        (old_buf_535 = come_decrement_ref_count(old_buf_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_533,size_534);
    self->len+=size_534;
    self->buf[self->len]=0;
    __result_obj__137 = self;
    return __result_obj__137;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__138;
short* mem_538;
int size_539;
void* __right_value88 = (void*)0;
char* old_buf_540;
int old_len_541;
int new_size_542;
void* __right_value89 = (void*)0;
char* __dec_obj23;
struct buffer* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = ((void*)0);
        return __result_obj__138;
    }
    mem_538=&value;
    size_539=sizeof(short);
    if(    self->len+size_539+1+1>=self->size    ) {
        old_buf_540=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3166, "char*"));
        memcpy(old_buf_540,self->buf,self->size);
        old_len_541=self->len;
        new_size_542=(self->size+size_539+1)*2;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_542)), "/usr/local/include/comelang.h", 3170, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_540,old_len_541);
        self->buf[old_len_541]=0;
        self->size=new_size_542;
        (old_buf_540 = come_decrement_ref_count(old_buf_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_538,size_539);
    self->len+=size_539;
    self->buf[self->len]=0;
    __result_obj__139 = self;
    return __result_obj__139;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__140;
int len_543;
int new_size_544;
void* __right_value90 = (void*)0;
char* __dec_obj24;
int i_545;
struct buffer* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = ((void*)0);
        return __result_obj__140;
    }
    len_543=self->len;
    len_543=(len_543+3)&~3;
    if(    len_543>=self->size    ) {
        new_size_544=(self->size+1+1)*2;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_544)), "/usr/local/include/comelang.h", 3194, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_544;
    }
    for(    i_545=self->len    ;    i_545<len_543    ;    i_545++    ){
        self->buf[i_545]=0;
    }
    self->len=len_543;
    __result_obj__141 = self;
    return __result_obj__141;
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
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct buffer* result_546;
struct buffer* __result_obj__142;
struct buffer* __result_obj__143;
    result_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3224, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__142 = (struct buffer*)come_increment_ref_count(result_546);
        come_call_finalizer(buffer_finalize, result_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__142;
    }
    buffer_append_str(result_546,self);
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_546);
    come_call_finalizer(buffer_finalize, result_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

char* buffer_to_string(struct buffer* self){
void* __right_value93 = (void*)0;
char* __result_obj__144;
void* __right_value94 = (void*)0;
char* __result_obj__145;
    if(    self==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value94=__builtin_string(self->buf))));
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__146;
    __result_obj__146 = self->buf;
    return __result_obj__146;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct buffer* result_547;
struct buffer* __result_obj__147;
    result_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3251, "struct buffer*"))));
    buffer_append(result_547,self,sizeof(char)*len);
    __result_obj__147 = (struct buffer*)come_increment_ref_count(result_547);
    come_call_finalizer(buffer_finalize, result_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct buffer* result_548;
int i_549;
struct buffer* __result_obj__148;
    result_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3258, "struct buffer*"))));
    for(    i_549=0    ;    i_549<len    ;    i_549++    ){
        buffer_append(result_548,self[i_549],strlen(self[i_549]));
    }
    __result_obj__148 = (struct buffer*)come_increment_ref_count(result_548);
    come_call_finalizer(buffer_finalize, result_548, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct buffer* result_550;
struct buffer* __result_obj__149;
    result_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_550,(char*)self,sizeof(short)*len);
    __result_obj__149 = (struct buffer*)come_increment_ref_count(result_550);
    come_call_finalizer(buffer_finalize, result_550, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct buffer* result_551;
struct buffer* __result_obj__150;
    result_551=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_551,(char*)self,sizeof(int)*len);
    __result_obj__150 = (struct buffer*)come_increment_ref_count(result_551);
    come_call_finalizer(buffer_finalize, result_551, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct buffer* result_552;
struct buffer* __result_obj__151;
    result_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_552,(char*)self,sizeof(long)*len);
    __result_obj__151 = (struct buffer*)come_increment_ref_count(result_552);
    come_call_finalizer(buffer_finalize, result_552, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct buffer* result_553;
struct buffer* __result_obj__152;
    result_553=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    buffer_append(result_553,(char*)self,sizeof(float)*len);
    __result_obj__152 = (struct buffer*)come_increment_ref_count(result_553);
    come_call_finalizer(buffer_finalize, result_553, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
struct buffer* result_554;
struct buffer* __result_obj__153;
    result_554=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3295, "struct buffer*"))));
    buffer_append(result_554,(char*)self,sizeof(double)*len);
    __result_obj__153 = (struct buffer*)come_increment_ref_count(result_554);
    come_call_finalizer(buffer_finalize, result_554, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

char* buffer_printable(struct buffer* self){
int len_555;
void* __right_value109 = (void*)0;
char* result_556;
int n_557;
int i_558;
unsigned char c_559;
char* __result_obj__154;
    len_555=self->len;
    result_556=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_555*2+1)), "/usr/local/include/comelang.h", 3303, "char*"));
    n_557=0;
    for(    i_558=0    ;    i_558<len_555    ;    i_558++    ){
        c_559=self->buf[i_558];
        if(        (c_559>=0&&c_559<32)||c_559==127        ) {
            result_556[n_557++]=94;
            result_556[n_557++]=c_559+65-1;
        }
        else if(        c_559>127        ) {
            result_556[n_557++]=63;
        }
        else {
            result_556[n_557++]=c_559;
        }
    }
    result_556[n_557]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_556);
    (result_556 = come_decrement_ref_count(result_556, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_560;
struct list$1char$* __result_obj__156;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_560=0    ;    i_560<num_value    ;    i_560++    ){
        list$1char$_push_back(self,values[i_560]);
    }
    __result_obj__156 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value111 = (void*)0;
struct list_item$1char$* litem_561;
void* __right_value112 = (void*)0;
struct list_item$1char$* litem_562;
void* __right_value113 = (void*)0;
struct list_item$1char$* litem_563;
struct list$1char$* __result_obj__155;
    if(    self->len==0    ) {
        litem_561=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value111=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$*"))));
        litem_561->prev=((void*)0);
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail=litem_561;
        self->head=litem_561;
    }
    else if(    self->len==1    ) {
        litem_562=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value112=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$*"))));
        litem_562->prev=self->head;
        litem_562->next=((void*)0);
        litem_562->item=item;
        self->tail=litem_562;
        self->head->next=litem_562;
    }
    else {
        litem_563=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value113=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$*"))));
        litem_563->prev=self->tail;
        litem_563->next=((void*)0);
        litem_563->item=item;
        self->tail->next=litem_563;
        self->tail=litem_563;
    }
    self->len++;
    __result_obj__155 = self;
    return __result_obj__155;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_564;
struct list_item$1char$* prev_it_565;
    it_564=self->head;
    while(    it_564!=((void*)0)    ) {
        prev_it_565=it_564;
        it_564=it_564->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_565, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value110 = (void*)0;
void* __right_value114 = (void*)0;
struct list$1char$* __result_obj__157;
    __result_obj__157 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value114=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value114, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_566;
struct list$1char$p* __result_obj__159;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_566=0    ;    i_566<num_value    ;    i_566++    ){
        list$1char$p_push_back(self,values[i_566]);
    }
    __result_obj__159 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value116 = (void*)0;
struct list_item$1char$p* litem_567;
void* __right_value117 = (void*)0;
struct list_item$1char$p* litem_568;
void* __right_value118 = (void*)0;
struct list_item$1char$p* litem_569;
struct list$1char$p* __result_obj__158;
    if(    self->len==0    ) {
        litem_567=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value116=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$p*"))));
        litem_567->prev=((void*)0);
        litem_567->next=((void*)0);
        litem_567->item=item;
        self->tail=litem_567;
        self->head=litem_567;
    }
    else if(    self->len==1    ) {
        litem_568=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value117=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$p*"))));
        litem_568->prev=self->head;
        litem_568->next=((void*)0);
        litem_568->item=item;
        self->tail=litem_568;
        self->head->next=litem_568;
    }
    else {
        litem_569=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value118=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_569->prev=self->tail;
        litem_569->next=((void*)0);
        litem_569->item=item;
        self->tail->next=litem_569;
        self->tail=litem_569;
    }
    self->len++;
    __result_obj__158 = self;
    return __result_obj__158;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_570;
struct list_item$1char$p* prev_it_571;
    it_570=self->head;
    while(    it_570!=((void*)0)    ) {
        prev_it_571=it_570;
        it_570=it_570->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_571, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value115 = (void*)0;
void* __right_value119 = (void*)0;
struct list$1char$p* __result_obj__160;
    __result_obj__160 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value119=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_572;
struct list$1short$* __result_obj__162;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_572=0    ;    i_572<num_value    ;    i_572++    ){
        list$1short$_push_back(self,values[i_572]);
    }
    __result_obj__162 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value121 = (void*)0;
struct list_item$1short$* litem_573;
void* __right_value122 = (void*)0;
struct list_item$1short$* litem_574;
void* __right_value123 = (void*)0;
struct list_item$1short$* litem_575;
struct list$1short$* __result_obj__161;
    if(    self->len==0    ) {
        litem_573=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value121=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1short$*"))));
        litem_573->prev=((void*)0);
        litem_573->next=((void*)0);
        litem_573->item=item;
        self->tail=litem_573;
        self->head=litem_573;
    }
    else if(    self->len==1    ) {
        litem_574=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value122=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1short$*"))));
        litem_574->prev=self->head;
        litem_574->next=((void*)0);
        litem_574->item=item;
        self->tail=litem_574;
        self->head->next=litem_574;
    }
    else {
        litem_575=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value123=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1short$*"))));
        litem_575->prev=self->tail;
        litem_575->next=((void*)0);
        litem_575->item=item;
        self->tail->next=litem_575;
        self->tail=litem_575;
    }
    self->len++;
    __result_obj__161 = self;
    return __result_obj__161;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_576;
struct list_item$1short$* prev_it_577;
    it_576=self->head;
    while(    it_576!=((void*)0)    ) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_577, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value120 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1short$* __result_obj__163;
    __result_obj__163 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value124=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3354, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_578;
struct list$1int$* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_578=0    ;    i_578<num_value    ;    i_578++    ){
        list$1int$_push_back(self,values[i_578]);
    }
    __result_obj__165 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value126 = (void*)0;
struct list_item$1int$* litem_579;
void* __right_value127 = (void*)0;
struct list_item$1int$* litem_580;
void* __right_value128 = (void*)0;
struct list_item$1int$* litem_581;
struct list$1int$* __result_obj__164;
    if(    self->len==0    ) {
        litem_579=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value126=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1int$*"))));
        litem_579->prev=((void*)0);
        litem_579->next=((void*)0);
        litem_579->item=item;
        self->tail=litem_579;
        self->head=litem_579;
    }
    else if(    self->len==1    ) {
        litem_580=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value127=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1int$*"))));
        litem_580->prev=self->head;
        litem_580->next=((void*)0);
        litem_580->item=item;
        self->tail=litem_580;
        self->head->next=litem_580;
    }
    else {
        litem_581=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value128=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1int$*"))));
        litem_581->prev=self->tail;
        litem_581->next=((void*)0);
        litem_581->item=item;
        self->tail->next=litem_581;
        self->tail=litem_581;
    }
    self->len++;
    __result_obj__164 = self;
    return __result_obj__164;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_582;
struct list_item$1int$* prev_it_583;
    it_582=self->head;
    while(    it_582!=((void*)0)    ) {
        prev_it_583=it_582;
        it_582=it_582->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_583, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value125 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1int$* __result_obj__166;
    __result_obj__166 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value129=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3359, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value129, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_584;
struct list$1long$* __result_obj__168;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_584=0    ;    i_584<num_value    ;    i_584++    ){
        list$1long$_push_back(self,values[i_584]);
    }
    __result_obj__168 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__168;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value131 = (void*)0;
struct list_item$1long$* litem_585;
void* __right_value132 = (void*)0;
struct list_item$1long$* litem_586;
void* __right_value133 = (void*)0;
struct list_item$1long$* litem_587;
struct list$1long$* __result_obj__167;
    if(    self->len==0    ) {
        litem_585=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value131=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1long$*"))));
        litem_585->prev=((void*)0);
        litem_585->next=((void*)0);
        litem_585->item=item;
        self->tail=litem_585;
        self->head=litem_585;
    }
    else if(    self->len==1    ) {
        litem_586=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value132=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1long$*"))));
        litem_586->prev=self->head;
        litem_586->next=((void*)0);
        litem_586->item=item;
        self->tail=litem_586;
        self->head->next=litem_586;
    }
    else {
        litem_587=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value133=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1long$*"))));
        litem_587->prev=self->tail;
        litem_587->next=((void*)0);
        litem_587->item=item;
        self->tail->next=litem_587;
        self->tail=litem_587;
    }
    self->len++;
    __result_obj__167 = self;
    return __result_obj__167;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_588;
struct list_item$1long$* prev_it_589;
    it_588=self->head;
    while(    it_588!=((void*)0)    ) {
        prev_it_589=it_588;
        it_588=it_588->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_589, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value130 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1long$* __result_obj__169;
    __result_obj__169 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value134=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3364, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value134, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_590;
struct list$1float$* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_590=0    ;    i_590<num_value    ;    i_590++    ){
        list$1float$_push_back(self,values[i_590]);
    }
    __result_obj__171 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value136 = (void*)0;
struct list_item$1float$* litem_591;
void* __right_value137 = (void*)0;
struct list_item$1float$* litem_592;
void* __right_value138 = (void*)0;
struct list_item$1float$* litem_593;
struct list$1float$* __result_obj__170;
    if(    self->len==0    ) {
        litem_591=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value136=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1float$*"))));
        litem_591->prev=((void*)0);
        litem_591->next=((void*)0);
        litem_591->item=item;
        self->tail=litem_591;
        self->head=litem_591;
    }
    else if(    self->len==1    ) {
        litem_592=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value137=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1float$*"))));
        litem_592->prev=self->head;
        litem_592->next=((void*)0);
        litem_592->item=item;
        self->tail=litem_592;
        self->head->next=litem_592;
    }
    else {
        litem_593=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value138=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1float$*"))));
        litem_593->prev=self->tail;
        litem_593->next=((void*)0);
        litem_593->item=item;
        self->tail->next=litem_593;
        self->tail=litem_593;
    }
    self->len++;
    __result_obj__170 = self;
    return __result_obj__170;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_594;
struct list_item$1float$* prev_it_595;
    it_594=self->head;
    while(    it_594!=((void*)0)    ) {
        prev_it_595=it_594;
        it_594=it_594->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_595, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value135 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1float$* __result_obj__172;
    __result_obj__172 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value139=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3369, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value139, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_596;
struct list$1double$* __result_obj__174;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_596=0    ;    i_596<num_value    ;    i_596++    ){
        list$1double$_push_back(self,values[i_596]);
    }
    __result_obj__174 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value141 = (void*)0;
struct list_item$1double$* litem_597;
void* __right_value142 = (void*)0;
struct list_item$1double$* litem_598;
void* __right_value143 = (void*)0;
struct list_item$1double$* litem_599;
struct list$1double$* __result_obj__173;
    if(    self->len==0    ) {
        litem_597=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value141=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1double$*"))));
        litem_597->prev=((void*)0);
        litem_597->next=((void*)0);
        litem_597->item=item;
        self->tail=litem_597;
        self->head=litem_597;
    }
    else if(    self->len==1    ) {
        litem_598=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value142=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1double$*"))));
        litem_598->prev=self->head;
        litem_598->next=((void*)0);
        litem_598->item=item;
        self->tail=litem_598;
        self->head->next=litem_598;
    }
    else {
        litem_599=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value143=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1double$*"))));
        litem_599->prev=self->tail;
        litem_599->next=((void*)0);
        litem_599->item=item;
        self->tail->next=litem_599;
        self->tail=litem_599;
    }
    self->len++;
    __result_obj__173 = self;
    return __result_obj__173;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_600;
struct list_item$1double$* prev_it_601;
    it_600=self->head;
    while(    it_600!=((void*)0)    ) {
        prev_it_601=it_600;
        it_600=it_600->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_601, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value140 = (void*)0;
void* __right_value144 = (void*)0;
struct list$1double$* __result_obj__175;
    __result_obj__175 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value144=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value144, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__175;
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
void* __right_value145 = (void*)0;
char* __result_obj__176;
int len_602;
void* __right_value146 = (void*)0;
char* result_603;
char* __result_obj__177;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    len_602=strlen(self)+strlen(right);
    result_603=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_602+1)), "/usr/local/include/comelang.h", 3603, "char*"));
    strncpy(result_603,self,len_602+1);
    strncat(result_603,right,len_602+1);
    __result_obj__177 = (char*)come_increment_ref_count(result_603);
    (result_603 = come_decrement_ref_count(result_603, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_operator_add(char* self, char* right){
void* __right_value147 = (void*)0;
char* __result_obj__178;
int len_604;
void* __right_value148 = (void*)0;
char* result_605;
char* __result_obj__179;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    len_604=strlen(self)+strlen(right);
    result_605=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_604+1)), "/usr/local/include/comelang.h", 3618, "char*"));
    strncpy(result_605,self,len_604+1);
    strncat(result_605,right,len_604+1);
    __result_obj__179 = (char*)come_increment_ref_count(result_605);
    (result_605 = come_decrement_ref_count(result_605, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_operator_mult(char* self, int right){
void* __right_value149 = (void*)0;
char* __result_obj__180;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* buf_606;
int i_607;
void* __right_value152 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    buf_606=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_607=0    ;    i_607<right    ;    i_607++    ){
        buffer_append_str(buf_606,self);
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value152=buffer_to_string(buf_606))));
    come_call_finalizer(buffer_finalize, buf_606, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* string_operator_mult(char* self, int right){
void* __right_value153 = (void*)0;
char* __result_obj__182;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct buffer* buf_608;
int i_609;
void* __right_value156 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    buf_608=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3645, "struct buffer*"))));
    for(    i_609=0    ;    i_609<right    ;    i_609++    ){
        buffer_append_str(buf_608,self);
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value156=buffer_to_string(buf_608))));
    come_call_finalizer(buffer_finalize, buf_608, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_610;
int i_611;
    result_610=(_Bool)0;
    for(    i_611=0    ;    i_611<len    ;    i_611++    ){
        if(        strncmp(self[i_611],str,strlen(self[i_611]))==0        ) {
            result_610=(_Bool)1;
            break;
        }
    }
    return result_610;
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
int result_612;
char* p_613;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_612=0;
    p_613=value;
    while(    *p_613    ) {
        result_612+=(*p_613);
        p_613++;
    }
    return result_612;
}

unsigned int string_get_hash_key(char* value){
int result_614;
char* p_615;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_614=0;
    p_615=value;
    while(    *p_615    ) {
        result_614+=(*p_615);
        p_615++;
    }
    return result_614;
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
_Bool result_616;
    result_616=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_616;
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
_Bool result_617;
    result_617=(c>=32&&c<=126);
    return result_617;
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
void* __right_value157 = (void*)0;
char* __result_obj__184;
int len_618;
void* __right_value158 = (void*)0;
char* result_619;
int i_620;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(""))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    len_618=strlen(str);
    result_619=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_618+1)), "/usr/local/include/comelang.h", 3913, "char*"));
    for(    i_620=0    ;    i_620<len_618    ;    i_620++    ){
        result_619[i_620]=str[len_618-i_620-1];
    }
    result_619[len_618]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_619);
    (result_619 = come_decrement_ref_count(result_619, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value159 = (void*)0;
char* __result_obj__186;
int len_621;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* __result_obj__187;
void* __right_value162 = (void*)0;
char* __result_obj__188;
void* __right_value163 = (void*)0;
char* __result_obj__189;
void* __right_value164 = (void*)0;
char* result_622;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string(""))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_621=strlen(str);
    if(    head<0    ) {
        head+=len_621;
    }
    if(    tail<0    ) {
        tail+=len_621+1;
    }
    if(    head>tail    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value161=charp_reverse(((char*)(__right_value160=charp_substring(str,tail,head)))))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_621    ) {
        tail=len_621;
    }
    if(    head==tail    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    if(    tail-head+1<1    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(""))));
        (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    result_622=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3959, "char*"));
    memcpy(result_622,str+head,tail-head);
    result_622[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_622);
    (result_622 = come_decrement_ref_count(result_622, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value165 = (void*)0;
char* __result_obj__191;
int len_623;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
char* __result_obj__192;
void* __right_value168 = (void*)0;
char* __result_obj__193;
void* __right_value169 = (void*)0;
char* __result_obj__194;
void* __right_value170 = (void*)0;
char* result_624;
char* __result_obj__195;
    if(    str==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    len_623=strlen(str);
    if(    head<0    ) {
        head+=len_623;
    }
    if(    tail<0    ) {
        tail+=len_623+1;
    }
    if(    head>tail    ) {
        __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value167=charp_reverse(((char*)(__right_value166=charp_substring(str,tail,head)))))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__192;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_623    ) {
        tail=len_623;
    }
    if(    head==tail    ) {
        __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__193;
    }
    if(    tail-head+1<1    ) {
        __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__194;
    }
    result_624=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4002, "char*"));
    memcpy(result_624,str+head,tail-head);
    result_624[tail-head]=0;
    __result_obj__195 = (char*)come_increment_ref_count(result_624);
    (result_624 = come_decrement_ref_count(result_624, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value171 = (void*)0;
char* __result_obj__196;
int len_625;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
char* __result_obj__197;
void* __right_value174 = (void*)0;
char* __result_obj__198;
void* __right_value175 = (void*)0;
char* __result_obj__199;
void* __right_value176 = (void*)0;
char* result_626;
char* __result_obj__200;
    if(    str==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    len_625=strlen(str);
    if(    head<0    ) {
        head+=len_625;
    }
    if(    tail<0    ) {
        tail+=len_625+1;
    }
    if(    head>tail    ) {
        __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value173=charp_reverse(((char*)(__right_value172=charp_substring(str,tail,head)))))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__197;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_625    ) {
        tail=len_625;
    }
    if(    head==tail    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    if(    tail-head+1<1    ) {
        __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(""))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__199;
    }
    result_626=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4045, "char*"));
    memcpy(result_626,str+head,tail-head);
    result_626[tail-head]=0;
    __result_obj__200 = (char*)come_increment_ref_count(result_626);
    (result_626 = come_decrement_ref_count(result_626, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__200;
}

char* xsprintf(char* msg, ...){
void* __right_value177 = (void*)0;
char* __result_obj__201;
va_list args_627;
char* result_628;
int len_629;
void* __right_value178 = (void*)0;
char* __result_obj__202;
void* __right_value179 = (void*)0;
char* result2_630;
char* __result_obj__203;
result_628 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__201;
    }
    __builtin_va_start(args_627,msg);
    len_629=vasprintf(&result_628,msg,args_627);
    __builtin_va_end(args_627);
    if(    len_629<0    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    result2_630=(char*)come_increment_ref_count(__builtin_string(result_628));
    free(result_628);
    __result_obj__203 = (char*)come_increment_ref_count(result2_630);
    (result2_630 = come_decrement_ref_count(result2_630, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value180 = (void*)0;
char* __result_obj__204;
int len_631;
void* __right_value181 = (void*)0;
char* __result_obj__205;
void* __right_value182 = (void*)0;
char* __result_obj__206;
void* __right_value183 = (void*)0;
char* result_632;
char* __result_obj__207;
    if(    str==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(""))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    len_631=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value181=__builtin_string(str))));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    if(    head<0    ) {
        head+=len_631;
    }
    if(    tail<0    ) {
        tail+=len_631+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(str))));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__206;
    }
    if(    tail>=len_631    ) {
        tail=len_631;
    }
    result_632=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_631-(tail-head)+1)), "/usr/local/include/comelang.h", 4107, "char*"));
    memcpy(result_632,str,head);
    memcpy(result_632+head,str+tail,len_631-tail);
    result_632[len_631-(tail-head)]=0;
    __result_obj__207 = (char*)come_increment_ref_count(result_632);
    (result_632 = come_decrement_ref_count(result_632, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__207;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__208;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__208 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__208;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_633;
struct list_item$1char$ph* prev_it_634;
    it_633=self->head;
    while(    it_633!=((void*)0)    ) {
        prev_it_634=it_633;
        it_633=it_633->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_634, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value190 = (void*)0;
struct list_item$1char$ph* litem_638;
char* __dec_obj25;
void* __right_value191 = (void*)0;
struct list_item$1char$ph* litem_639;
char* __dec_obj26;
void* __right_value192 = (void*)0;
struct list_item$1char$ph* litem_640;
char* __dec_obj27;
struct list$1char$ph* __result_obj__210;
    if(    self->len==0    ) {
        litem_638=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value190=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_638->prev=((void*)0);
        litem_638->next=((void*)0);
        __dec_obj25=litem_638->item,
        litem_638->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_638;
        self->head=litem_638;
    }
    else if(    self->len==1    ) {
        litem_639=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value191=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_639->prev=self->head;
        litem_639->next=((void*)0);
        __dec_obj26=litem_639->item,
        litem_639->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_639;
        self->head->next=litem_639;
    }
    else {
        litem_640=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value192=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_640->prev=self->tail;
        litem_640->next=((void*)0);
        __dec_obj27=litem_640->item,
        litem_640->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_640;
        self->tail=litem_640;
    }
    self->len++;
    __result_obj__210 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__210;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct list$1char$ph* __result_obj__209;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct list$1char$ph* result_635;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct buffer* str_636;
int i_637;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct list$1char$ph* __result_obj__211;
    if(    self==((void*)0)    ) {
        __result_obj__209 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value185=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4120, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value185, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__209;
    }
    result_635=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4123, "struct list$1char$ph*"))));
    str_636=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4125, "struct buffer*"))));
    for(    i_637=0    ;    i_637<charp_length(self)    ;    i_637++    ){
        if(        self[i_637]==c        ) {
            list$1char$ph_push_back(result_635,(char*)come_increment_ref_count(__builtin_string(str_636->buf)));
            buffer_reset(str_636);
        }
        else {
            buffer_append_char(str_636,self[i_637]);
        }
    }
    if(    buffer_length(str_636)!=0    ) {
        list$1char$ph_push_back(result_635,(char*)come_increment_ref_count(__builtin_string(str_636->buf)));
    }
    __result_obj__211 = (struct list$1char$ph*)come_increment_ref_count(result_635);
    come_call_finalizer(list$1char$ph$p_finalize, result_635, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_636, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value195 = (void*)0;
char* __result_obj__212;
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value195=xsprintf(msg,self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__212;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value196 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value196=xsprintf(msg,self))));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__213;
}

char* charp_printable(char* str){
int len_641;
void* __right_value197 = (void*)0;
char* result_642;
int n_643;
int i_644;
char c_645;
char* __result_obj__214;
    len_641=charp_length(str);
    result_642=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_641*2+1)), "/usr/local/include/comelang.h", 4157, "char*"));
    n_643=0;
    for(    i_644=0    ;    i_644<len_641    ;    i_644++    ){
        c_645=str[i_644];
        if(        (c_645>=0&&c_645<32)||c_645==127        ) {
            result_642[n_643++]=94;
            result_642[n_643++]=c_645+65-1;
        }
        else {
            result_642[n_643++]=c_645;
        }
    }
    result_642[n_643]=0;
    __result_obj__214 = (char*)come_increment_ref_count(result_642);
    (result_642 = come_decrement_ref_count(result_642, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value198 = (void*)0;
char* __result_obj__215;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct buffer* result_646;
char* p_647;
char* p2_648;
void* __right_value201 = (void*)0;
char* __result_obj__216;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value198=__builtin_string(self))));
        (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__215;
    }
    result_646=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4185, "struct buffer*"))));
    p_647=self;
    while(    (_Bool)1    ) {
        p2_648=strstr(p_647,str);
        if(        p2_648==((void*)0)        ) {
            p2_648=p_647;
            while(            *p2_648            ) {
                p2_648++;
            }
            buffer_append(result_646,p_647,p2_648-p_647);
            break;
        }
        buffer_append(result_646,p_647,p2_648-p_647);
        buffer_append_str(result_646,replace);
        p_647=p2_648+strlen(str);
    }
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value201=buffer_to_string(result_646))));
    come_call_finalizer(buffer_finalize, result_646, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__216;
}

char* xbasename(char* path){
void* __right_value202 = (void*)0;
char* __result_obj__217;
char* p_649;
void* __right_value203 = (void*)0;
char* __result_obj__218;
void* __right_value204 = (void*)0;
char* __result_obj__219;
void* __right_value205 = (void*)0;
char* __result_obj__220;
    if(    path==((void*)0)    ) {
        __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(""))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__217;
    }
    p_649=path+strlen(path);
    while(    p_649>=path    ) {
        if(        *p_649==47        ) {
            break;
        }
        else {
            p_649--;
        }
    }
    if(    p_649<path    ) {
        __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(path))));
        (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__218;
    }
    else {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string(p_649+1))));
        (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__219;
    }
    __result_obj__220 = (char*)come_increment_ref_count(((char*)(__right_value205=__builtin_string(""))));
    (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__220;
}

char* xnoextname(char* path){
void* __right_value206 = (void*)0;
char* __result_obj__221;
void* __right_value207 = (void*)0;
char* path2_650;
char* p_651;
void* __right_value208 = (void*)0;
char* __result_obj__222;
void* __right_value209 = (void*)0;
char* __result_obj__223;
void* __right_value210 = (void*)0;
char* __result_obj__224;
    if(    path==((void*)0)    ) {
        __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value206=__builtin_string(""))));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__221;
    }
    path2_650=(char*)come_increment_ref_count(xbasename(path));
    p_651=path2_650+strlen(path2_650);
    while(    p_651>=path2_650    ) {
        if(        *p_651==46        ) {
            break;
        }
        else {
            p_651--;
        }
    }
    if(    p_651<path2_650    ) {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value208=__builtin_string(path2_650))));
        (path2_650 = come_decrement_ref_count(path2_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
    else {
        __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value209=charp_substring(path2_650,0,p_651-path2_650))));
        (path2_650 = come_decrement_ref_count(path2_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__223;
    }
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value210=__builtin_string(""))));
    (path2_650 = come_decrement_ref_count(path2_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* xextname(char* path){
void* __right_value211 = (void*)0;
char* __result_obj__225;
char* p_652;
void* __right_value212 = (void*)0;
char* __result_obj__226;
void* __right_value213 = (void*)0;
char* __result_obj__227;
void* __right_value214 = (void*)0;
char* __result_obj__228;
    if(    path==((void*)0)    ) {
        __result_obj__225 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(""))));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__225;
    }
    p_652=path+strlen(path);
    while(    p_652>=path    ) {
        if(        *p_652==46        ) {
            break;
        }
        else {
            p_652--;
        }
    }
    if(    p_652<path    ) {
        __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(path))));
        (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__226;
    }
    else {
        __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value213=__builtin_string(p_652+1))));
        (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__227;
    }
    __result_obj__228 = (char*)come_increment_ref_count(((char*)(__right_value214=__builtin_string(""))));
    (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__228;
}

char* bool_to_string(_Bool self){
void* __right_value215 = (void*)0;
char* __result_obj__229;
void* __right_value216 = (void*)0;
char* __result_obj__230;
    if(    self    ) {
        __result_obj__229 = (char*)come_increment_ref_count(((char*)(__right_value215=__builtin_string("true"))));
        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__229;
    }
    else {
        __result_obj__230 = (char*)come_increment_ref_count(((char*)(__right_value216=__builtin_string("false"))));
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__230;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value217 = (void*)0;
char* __result_obj__231;
void* __right_value218 = (void*)0;
char* __result_obj__232;
    if(    self    ) {
        __result_obj__231 = (char*)come_increment_ref_count(((char*)(__right_value217=__builtin_string("true"))));
        (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__231;
    }
    else {
        __result_obj__232 = (char*)come_increment_ref_count(((char*)(__right_value218=__builtin_string("false"))));
        (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__232;
    }
}

char* char_to_string(char self){
void* __right_value219 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value219=xsprintf("%c",self))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__233;
}

char* short_to_string(short self){
void* __right_value220 = (void*)0;
char* __result_obj__234;
    __result_obj__234 = (char*)come_increment_ref_count(((char*)(__right_value220=xsprintf("%d",self))));
    (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__234;
}

char* int_to_string(int self){
void* __right_value221 = (void*)0;
char* __result_obj__235;
    __result_obj__235 = (char*)come_increment_ref_count(((char*)(__right_value221=xsprintf("%d",self))));
    (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__235;
}

char* long_to_string(long self){
void* __right_value222 = (void*)0;
char* __result_obj__236;
    __result_obj__236 = (char*)come_increment_ref_count(((char*)(__right_value222=xsprintf("%ld",self))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__236 = come_decrement_ref_count(__result_obj__236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__236;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value223 = (void*)0;
char* __result_obj__237;
    __result_obj__237 = (char*)come_increment_ref_count(((char*)(__right_value223=xsprintf("%ld",self))));
    (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__237;
}

char* float_to_string(float self){
void* __right_value224 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value224=xsprintf("%f",self))));
    (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__238;
}

char* double_to_string(double self){
void* __right_value225 = (void*)0;
char* __result_obj__239;
    __result_obj__239 = (char*)come_increment_ref_count(((char*)(__right_value225=xsprintf("%lf",self))));
    (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__239;
}

char* string_to_string(char* self){
void* __right_value226 = (void*)0;
char* __result_obj__240;
void* __right_value227 = (void*)0;
char* __result_obj__241;
    if(    self==((void*)0)    ) {
        __result_obj__240 = (char*)come_increment_ref_count(((char*)(__right_value226=__builtin_string(""))));
        (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__240 = come_decrement_ref_count(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__240;
    }
    __result_obj__241 = (char*)come_increment_ref_count(((char*)(__right_value227=__builtin_string(self))));
    (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__241;
}

char* charp_to_string(char* self){
void* __right_value228 = (void*)0;
char* __result_obj__242;
void* __right_value229 = (void*)0;
char* __result_obj__243;
    if(    self==((void*)0)    ) {
        __result_obj__242 = (char*)come_increment_ref_count(((char*)(__right_value228=__builtin_string(""))));
        (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__242;
    }
    __result_obj__243 = (char*)come_increment_ref_count(((char*)(__right_value229=__builtin_string(self))));
    (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__243;
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
void* __right_value230 = (void*)0;
char* __result_obj__244;
void* __right_value231 = (void*)0;
char* __result_obj__245;
    if(    self==((void*)0)    ) {
        __result_obj__244 = (char*)come_increment_ref_count(((char*)(__right_value230=__builtin_string(""))));
        (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__244;
    }
    puts(self);
    __result_obj__245 = (char*)come_increment_ref_count(((char*)(__right_value231=__builtin_string(self))));
    (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__245;
}

char* charp_print(char* self){
void* __right_value232 = (void*)0;
char* __result_obj__246;
void* __right_value233 = (void*)0;
char* __result_obj__247;
    if(    self==((void*)0)    ) {
        __result_obj__246 = (char*)come_increment_ref_count(((char*)(__right_value232=__builtin_string(""))));
        (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__246 = come_decrement_ref_count(__result_obj__246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__246;
    }
    printf("%s",self);
    __result_obj__247 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(self))));
    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__247;
}

char* charp_printf(char* self, ...){
void* __right_value234 = (void*)0;
char* __result_obj__248;
char* msg2_653;
va_list args_654;
void* __right_value235 = (void*)0;
char* __result_obj__249;
msg2_653 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value234=__builtin_string(""))));
        (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__248;
    }
    __builtin_va_start(args_654,self);
    vasprintf(&msg2_653,self,args_654);
    __builtin_va_end(args_654);
    printf("%s",msg2_653);
    free(msg2_653);
    __result_obj__249 = (char*)come_increment_ref_count(((char*)(__right_value235=__builtin_string(self))));
    (__right_value235 = come_decrement_ref_count(__right_value235, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__249 = come_decrement_ref_count(__result_obj__249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__249;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_655;
    for(    i_655=0    ;    i_655<self    ;    i_655++    ){
        block(parent,i_655);
    }
}

