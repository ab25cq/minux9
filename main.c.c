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

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

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
unsigned long  long __attribute__((section(".common"))) kernel_sp __attribute__((section(".common")));
unsigned long  long __attribute__((section(".common"))) user_sp __attribute__((section(".common")));
unsigned long  long __attribute__((section(".common"))) kernel_satp __attribute__((section(".common")));
unsigned long  long __attribute__((section(".common"))) user_satp __attribute__((section(".common")));
char last_key=0;
extern char stack_top[];
char __attribute__((section(".common"))) yield_stack[(4096*16)] __attribute__((section(".common")));
struct sKernelState
{
    struct context_t gYieldContext;
    struct context_t gYieldReturnContext;
    char gYieldStack[(4096*16)];
    unsigned long  long gYieldUserSatp;
    unsigned long  long gYieldUserSP;
    unsigned long  long gYieldUserActiveProc;
};

struct sKernelState __attribute__((section(".common"))) gKernelState[16] __attribute__((section(".common")));
int __attribute__((section(".common"))) gNumKernelState __attribute__((section(".common")));
int __attribute__((section(".common"))) gKernelStateHead __attribute__((section(".common")));
int __attribute__((section(".common"))) gKernelStateTail __attribute__((section(".common")));
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
void puts(const char* s);
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
void enter_user(unsigned long  int anonymous_var_nameX317, unsigned long  int anonymous_var_nameX318, unsigned long  int anonymous_var_nameX319, unsigned long  long anonymous_var_nameX320, unsigned long  long anonymous_var_nameX321);
void timerinit();
struct proc* get_current_proc();
void global_init();
int main();
void* sbrk(long incr);
void* malloc(unsigned long  int size);
void* calloc(unsigned long  int nmemb, unsigned long  int size);
void free(void* ptr);
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
_Bool die(char* msg);
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

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

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

void puts(const char* s){
    acquire(&console_lock);
    while(    *s    ) {
        putchar(*s++);
    }
    release(&console_lock);
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

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_272;
void* __result_obj__19;
void* ptr_273;
void* __result_obj__20;
    total_size_272=nmemb*size;
    if(    total_size_272==0    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
    }
    ptr_273=malloc(total_size_272);
    if(    ptr_273!=((void*)0)    ) {
        memset(ptr_273,0,total_size_272);
    }
    __result_obj__20 = ptr_273;
    return __result_obj__20;
}

void free(void* ptr){
struct mem_block* block_274;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_274=(struct mem_block*)ptr-1;
    block_274->next=free_list;
    free_list=block_274;
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_342;
int i_343;
void* __right_value2 = (void*)0;
    buf_342=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_342,"%s %d\n",sname,sline);
    for(    i_343=gNumComeStackFrame-2    ;    i_343>=0    ;    i_343--    ){
        buffer_append_format(buf_342,"%s %d #%d\n",gComeStackFrameSName[i_343],gComeStackFrameSLine[i_343],gComeStackFrameID[i_343]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_342))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_342, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_344;
    for(    i_344=gNumComeStackFrame-1    ;    i_344>=0    ;    i_344--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_344],gComeStackFrameSLine[i_344],gComeStackFrameID[i_344]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__36;
    __result_obj__36 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_345;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_345=0    ;    i_345<gHeapPages.mSizePages    ;    i_345++    ){
        gHeapPages.mPages[i_345]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_346;
int n_347;
_Bool flag_348;
int i_349;
struct sMemHeaderTiny* it_350;
int n_351;
int i_352;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_346=gAllocMem;
        n_347=0;
        while(        it_346        ) {
            n_347++;
            flag_348=(_Bool)0;
            printf("#%d ",n_347);
            if(            it_346->class_name            ) {
                printf("%p (%s): ",(char*)it_346+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_346->class_name);
            }
            for(            i_349=0            ;            i_349<16            ;            i_349++            ){
                if(                it_346->sname[i_349]                ) {
                    printf("%s %d #%d, ",it_346->sname[i_349],it_346->sline[i_349],it_346->id[i_349]);
                    flag_348=(_Bool)1;
                }
            }
            if(            flag_348            ) {
                puts("");
            }
            it_346=it_346->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_347,gNumAlloc,gNumFree);
    }
    else {
        it_350=(struct sMemHeaderTiny*)gAllocMem;
        n_351=0;
        while(        it_350        ) {
            n_351++;
            if(            it_350->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_351,(char*)it_350+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_350->class_name,it_350->sname,it_350->sline);
            }
            it_350=it_350->next;
        }
        if(        n_351>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_351,gNumAlloc,gNumFree);
        }
    }
    for(    i_352=0    ;    i_352<gHeapPages.mSizePages    ;    i_352++    ){
        free(gHeapPages.mPages[i_352]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_353;
void* __result_obj__37;
    result_353=((void*)0);
    size=(size+7&~7);
    result_353=calloc(1,size);
    __result_obj__37 = result_353;
    return __result_obj__37;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_354;
struct sMemHeader* prev_it_355;
struct sMemHeader* next_it_356;
unsigned long  int size_357;
struct sMemHeaderTiny* it_358;
struct sMemHeaderTiny* prev_it_359;
struct sMemHeaderTiny* next_it_360;
unsigned long  int size_361;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_354=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_354->allocated!=177783            ) {
                return;
            }
            it_354->allocated=0;
            prev_it_355=it_354->prev;
            next_it_356=it_354->next;
            if(            gAllocMem==it_354            ) {
                gAllocMem=next_it_356;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_355                ) {
                    prev_it_355->next=next_it_356;
                }
                if(                next_it_356                ) {
                    next_it_356->prev=prev_it_355;
                }
            }
            size_357=it_354->size;
            free(it_354);
            gNumFree++;
        }
        else {
            it_358=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_358->allocated!=177783            ) {
                return;
            }
            it_358->allocated=0;
            prev_it_359=it_358->prev;
            next_it_360=it_358->next;
            if(            gAllocMem==it_358            ) {
                gAllocMem=(struct sMemHeader*)next_it_360;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_359                ) {
                    prev_it_359->next=next_it_360;
                }
                if(                next_it_360                ) {
                    next_it_360->prev=prev_it_359;
                }
            }
            size_361=it_358->size;
            free(it_358);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_362;
struct sMemHeader* it_363;
int i_364;
int i_365;
void* __result_obj__38;
void* result_366;
struct sMemHeaderTiny* it_367;
void* __result_obj__39;
memset(&i_364, 0, sizeof(int));
memset(&i_365, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_362=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_363=result_362;
        it_363->allocated=177783;
        it_363->size=size+sizeof(struct sMemHeader);
        it_363->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_364=0            ;            i_364<gNumComeStackFrame            ;            i_364++            ){
                it_363->sname[i_364]=gComeStackFrameSName[i_364];
                it_363->sline[i_364]=gComeStackFrameSLine[i_364];
                it_363->id[i_364]=gComeStackFrameID[i_364];
            }
        }
        else {
            for(            i_365=0            ;            i_365<16            ;            i_365++            ){
                it_363->sname[i_365]=gComeStackFrameSName[gNumComeStackFrame-1-i_365];
                it_363->sline[i_365]=gComeStackFrameSLine[gNumComeStackFrame-1-i_365];
                it_363->id[i_365]=gComeStackFrameID[gNumComeStackFrame-1-i_365];
            }
        }
        come_pop_stackframe_v2();
        it_363->next=gAllocMem;
        it_363->prev=((void*)0);
        it_363->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_363;
        }
        gAllocMem=it_363;
        gNumAlloc++;
        __result_obj__38 = (char*)result_362+sizeof(struct sMemHeader);
        return __result_obj__38;
    }
    else {
        result_366=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_367=result_366;
        it_367->allocated=177783;
        it_367->class_name=class_name;
        it_367->sname=sname;
        it_367->sline=sline;
        it_367->size=size+sizeof(struct sMemHeaderTiny);
        it_367->free_next=((void*)0);
        it_367->next=(struct sMemHeaderTiny*)gAllocMem;
        it_367->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_367;
        }
        gAllocMem=(struct sMemHeader*)it_367;
        gNumAlloc++;
        __result_obj__39 = (char*)result_366+sizeof(struct sMemHeaderTiny);
        return __result_obj__39;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_368;
char* __result_obj__40;
struct sMemHeaderTiny* it_369;
char* __result_obj__41;
    if(    gComeDebugLib    ) {
        it_368=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_368->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_368);
            exit(2);
        }
        __result_obj__40 = it_368->class_name;
        return __result_obj__40;
    }
    else {
        it_369=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_369->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_369);
            exit(2);
        }
        __result_obj__41 = it_369->class_name;
        return __result_obj__41;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_370;
int i_371;
struct sMemHeaderTiny* it_372;
    if(    gComeDebugLib    ) {
        it_370=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_370->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_370->class_name        ) {
            printf("(%s): ",it_370->class_name);
        }
        for(        i_371=0        ;        i_371<16        ;        i_371++        ){
            if(            it_370->sname[i_371]            ) {
                printf("%s %d #%d, ",it_370->sname[i_371],it_370->sline[i_371],it_370->id[i_371]);
            }
        }
        puts("");
    }
    else {
        it_372=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_372->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_372->class_name,it_372->sname,it_372->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_373;
unsigned long  int* ref_count_374;
unsigned long  int* size2_375;
void* __result_obj__42;
    mem_373=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_374=(unsigned long  int*)mem_373;
    *ref_count_374=0;
    size2_375=(unsigned long  int*)(mem_373+sizeof(unsigned long  int));
    *size2_375=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__42 = mem_373+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__42;
}

void come_free(void* mem){
unsigned long  int* ref_count_376;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_376=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_376);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__43;
char* mem_377;
unsigned long  int* size_p_378;
unsigned long  int size_379;
void* result_380;
void* __result_obj__44;
    if(    !block    ) {
        __result_obj__43 = ((void*)0);
        return __result_obj__43;
    }
    mem_377=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_378=(unsigned long  int*)(mem_377+sizeof(unsigned long  int));
    size_379=*size_p_378-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_380=come_calloc_v2(1,size_379,sname,sline,class_name);
    memcpy(result_380,block,size_379);
    __result_obj__44 = result_380;
    return __result_obj__44;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__45;
unsigned long  int* ref_count_381;
void* __result_obj__46;
    if(    mem==((void*)0)    ) {
        __result_obj__45 = mem;
        return __result_obj__45;
    }
    ref_count_381=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_381)++;
    __result_obj__46 = mem;
    return __result_obj__46;
}

void* come_print_ref_count(void* mem){
void* __result_obj__47;
unsigned long  int* ref_count_382;
void* __result_obj__48;
    if(    mem==((void*)0)    ) {
        __result_obj__47 = mem;
        return __result_obj__47;
    }
    ref_count_382=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_382);
    __result_obj__48 = mem;
    return __result_obj__48;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_383;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_383=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_383;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__49;
void* __result_obj__50;
unsigned long  int* ref_count_384;
unsigned long  int count_385;
void (*finalizer_386)(void*);
void* __result_obj__51;
void* __result_obj__52;
memset(&finalizer_386, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__49 = mem;
            return __result_obj__49;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    ref_count_384=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_384)--;
    }
    count_385=*ref_count_384;
    if(    !no_free&&count_385<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_386=protocol_fun;
            finalizer_386(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    __result_obj__52 = mem;
    return __result_obj__52;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_387)(void*);
void (*finalizer_388)(void*);
void (*finalizer_389)(void*);
unsigned long  int* ref_count_390;
unsigned long  int count_391;
void (*finalizer_392)(void*);
void (*finalizer_393)(void*);
void (*finalizer_394)(void*);
memset(&finalizer_387, 0, sizeof(void (*)(void*)));
memset(&finalizer_388, 0, sizeof(void (*)(void*)));
memset(&finalizer_389, 0, sizeof(void (*)(void*)));
memset(&finalizer_392, 0, sizeof(void (*)(void*)));
memset(&finalizer_393, 0, sizeof(void (*)(void*)));
memset(&finalizer_394, 0, sizeof(void (*)(void*)));
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
                finalizer_387=protocol_fun;
                finalizer_387(protocol_obj);
            }
            finalizer_388=fun;
            finalizer_388(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_389=protocol_fun;
                finalizer_389(protocol_obj);
            }
        }
    }
    else {
        ref_count_390=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_390)--;
        }
        count_391=*ref_count_390;
        if(        !no_free&&count_391<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_392=protocol_fun;
                        finalizer_392(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_393=fun;
                        finalizer_393(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_394=protocol_fun;
                        finalizer_394(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__53;
int len_395;
void* __right_value4 = (void*)0;
char* result_396;
char* __result_obj__54;
    if(    str==((void*)0)    ) {
        __result_obj__53 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__53 = come_decrement_ref_count(__result_obj__53, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__53;
    }
    len_395=strlen(str)+1;
    result_396=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_395)), "/usr/local/include/comelang.h", 897, "char*"));
    strncpy(result_396,str,len_395);
    __result_obj__54 = (char*)come_increment_ref_count(result_396);
    (result_396 = come_decrement_ref_count(result_396, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
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
void* __right_value5 = (void*)0;
char* __result_obj__55;
    __result_obj__55 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__55;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__56;
    __result_obj__56 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__56;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__57;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2883, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__57 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__57;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__58;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2893, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__58 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__58;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__59;
void* __right_value8 = (void*)0;
struct buffer* result_397;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__59;
    }
    result_397=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2913, "struct buffer*"));
    result_397->size=self->size;
    __dec_obj3=result_397->buf,
    result_397->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2916, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_397->len=self->len;
    memcpy(result_397->buf,self->buf,self->len);
    __result_obj__60 = (struct buffer*)come_increment_ref_count(result_397);
    come_call_finalizer(buffer_finalize, result_397, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__61;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__61 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__61;
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
struct buffer* __result_obj__62;
void* __right_value12 = (void*)0;
char* old_buf_398;
int old_len_399;
int new_size_400;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__63;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__62 = self;
        return __result_obj__62;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_398=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2964, "char*"));
        memcpy(old_buf_398,self->buf,self->size);
        old_len_399=self->len;
        new_size_400=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_400)), "/usr/local/include/comelang.h", 2968, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_398,old_len_399);
        self->buf[old_len_399]=0;
        self->size=new_size_400;
        (old_buf_398 = come_decrement_ref_count(old_buf_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__64;
void* __right_value14 = (void*)0;
char* old_buf_401;
int old_len_402;
int new_size_403;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_401=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2987, "char*"));
        old_len_402=self->len;
        new_size_403=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_403)), "/usr/local/include/comelang.h", 2991, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_401,old_len_402);
        self->buf[old_len_402]=0;
        self->size=new_size_403;
        (old_buf_401 = come_decrement_ref_count(old_buf_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__66;
int size_404;
void* __right_value16 = (void*)0;
char* old_buf_405;
int old_len_406;
int new_size_407;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__67;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__66 = self;
        return __result_obj__66;
    }
    size_404=strlen(mem);
    if(    self->len+size_404+1+1>=self->size    ) {
        old_buf_405=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3013, "char*"));
        memcpy(old_buf_405,self->buf,self->size);
        old_len_406=self->len;
        new_size_407=(self->size+size_404+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_407)), "/usr/local/include/comelang.h", 3017, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_405,old_len_406);
        self->buf[old_len_406]=0;
        self->size=new_size_407;
        (old_buf_405 = come_decrement_ref_count(old_buf_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_404);
    self->len+=size_404;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__68;
va_list args_408;
char* result_409;
int len_410;
struct buffer* __result_obj__69;
void* __right_value18 = (void*)0;
char* mem_411;
int size_412;
void* __right_value19 = (void*)0;
char* old_buf_413;
int old_len_414;
int new_size_415;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__70;
result_409 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    __builtin_va_start(args_408,msg);
    len_410=vasprintf(&result_409,msg,args_408);
    __builtin_va_end(args_408);
    if(    len_410<0    ) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    mem_411=(char*)come_increment_ref_count(__builtin_string(result_409));
    size_412=strlen(mem_411);
    if(    self->len+size_412+1+1>=self->size    ) {
        old_buf_413=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3061, "char*"));
        memcpy(old_buf_413,self->buf,self->size);
        old_len_414=self->len;
        new_size_415=(self->size+size_412+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_415)), "/usr/local/include/comelang.h", 3065, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_413,old_len_414);
        self->buf[old_len_414]=0;
        self->size=new_size_415;
        (old_buf_413 = come_decrement_ref_count(old_buf_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_411,size_412);
    self->len+=size_412;
    self->buf[self->len]=0;
    free(result_409);
    __result_obj__70 = self;
    (mem_411 = come_decrement_ref_count(mem_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__70;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__71;
int size_416;
void* __right_value21 = (void*)0;
char* old_buf_417;
int old_len_418;
int new_size_419;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__72;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    size_416=strlen(mem)+1;
    if(    self->len+size_416+1+1+1>=self->size    ) {
        old_buf_417=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3087, "char*"));
        memcpy(old_buf_417,self->buf,self->size);
        old_len_418=self->len;
        new_size_419=(self->size+size_416+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_419)), "/usr/local/include/comelang.h", 3091, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_417,old_len_418);
        self->buf[old_len_418]=0;
        self->size=new_size_419;
        (old_buf_417 = come_decrement_ref_count(old_buf_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_416);
    self->len+=size_416;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__72 = self;
    return __result_obj__72;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__73;
int* mem_420;
int size_421;
void* __right_value23 = (void*)0;
char* old_buf_422;
int old_len_423;
int new_size_424;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__74;
    if(    self==((void*)0)    ) {
        __result_obj__73 = ((void*)0);
        return __result_obj__73;
    }
    mem_420=&value;
    size_421=sizeof(int);
    if(    self->len+size_421+1+1>=self->size    ) {
        old_buf_422=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_422,self->buf,self->size);
        old_len_423=self->len;
        new_size_424=(self->size+size_421+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_424)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_422,old_len_423);
        self->buf[old_len_423]=0;
        self->size=new_size_424;
        (old_buf_422 = come_decrement_ref_count(old_buf_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_420,size_421);
    self->len+=size_421;
    self->buf[self->len]=0;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_425;
int size_426;
void* __right_value25 = (void*)0;
char* old_buf_427;
int old_len_428;
int new_size_429;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__75;
    mem_425=&value;
    size_426=sizeof(long);
    if(    self->len+size_426+1+1>=self->size    ) {
        old_buf_427=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3137, "char*"));
        memcpy(old_buf_427,self->buf,self->size);
        old_len_428=self->len;
        new_size_429=(self->size+size_426+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_429)), "/usr/local/include/comelang.h", 3141, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_427,old_len_428);
        self->buf[old_len_428]=0;
        self->size=new_size_429;
        (old_buf_427 = come_decrement_ref_count(old_buf_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_425,size_426);
    self->len+=size_426;
    self->buf[self->len]=0;
    __result_obj__75 = self;
    return __result_obj__75;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__76;
short* mem_430;
int size_431;
void* __right_value27 = (void*)0;
char* old_buf_432;
int old_len_433;
int new_size_434;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__77;
    if(    self==((void*)0)    ) {
        __result_obj__76 = ((void*)0);
        return __result_obj__76;
    }
    mem_430=&value;
    size_431=sizeof(short);
    if(    self->len+size_431+1+1>=self->size    ) {
        old_buf_432=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3164, "char*"));
        memcpy(old_buf_432,self->buf,self->size);
        old_len_433=self->len;
        new_size_434=(self->size+size_431+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_434)), "/usr/local/include/comelang.h", 3168, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_432,old_len_433);
        self->buf[old_len_433]=0;
        self->size=new_size_434;
        (old_buf_432 = come_decrement_ref_count(old_buf_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_430,size_431);
    self->len+=size_431;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__78;
int len_435;
int new_size_436;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_437;
struct buffer* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__78 = ((void*)0);
        return __result_obj__78;
    }
    len_435=self->len;
    len_435=(len_435+3)&~3;
    if(    len_435>=self->size    ) {
        new_size_436=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_436)), "/usr/local/include/comelang.h", 3192, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_436;
    }
    for(    i_437=self->len    ;    i_437<len_435    ;    i_437++    ){
        self->buf[i_437]=0;
    }
    self->len=len_435;
    __result_obj__79 = self;
    return __result_obj__79;
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
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result_438;
struct buffer* __result_obj__80;
struct buffer* __result_obj__81;
    result_438=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3222, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__80 = (struct buffer*)come_increment_ref_count(result_438);
        come_call_finalizer(buffer_finalize, result_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__80;
    }
    buffer_append_str(result_438,self);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_438);
    come_call_finalizer(buffer_finalize, result_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__82;
void* __right_value33 = (void*)0;
char* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__82;
    }
    __result_obj__83 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__83 = come_decrement_ref_count(__result_obj__83, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__83;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__84;
    __result_obj__84 = self->buf;
    return __result_obj__84;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_439;
struct buffer* __result_obj__85;
    result_439=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_439,self,sizeof(char)*len);
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_439);
    come_call_finalizer(buffer_finalize, result_439, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_440;
int i_441;
struct buffer* __result_obj__86;
    result_440=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    for(    i_441=0    ;    i_441<len    ;    i_441++    ){
        buffer_append(result_440,self[i_441],strlen(self[i_441]));
    }
    __result_obj__86 = (struct buffer*)come_increment_ref_count(result_440);
    come_call_finalizer(buffer_finalize, result_440, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_442;
struct buffer* __result_obj__87;
    result_442=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3265, "struct buffer*"))));
    buffer_append(result_442,(char*)self,sizeof(short)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_442);
    come_call_finalizer(buffer_finalize, result_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_443;
struct buffer* __result_obj__88;
    result_443=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3272, "struct buffer*"))));
    buffer_append(result_443,(char*)self,sizeof(int)*len);
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_443);
    come_call_finalizer(buffer_finalize, result_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_444;
struct buffer* __result_obj__89;
    result_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_444,(char*)self,sizeof(long)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_444);
    come_call_finalizer(buffer_finalize, result_444, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_445;
struct buffer* __result_obj__90;
    result_445=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_445,(char*)self,sizeof(float)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_445);
    come_call_finalizer(buffer_finalize, result_445, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_446;
struct buffer* __result_obj__91;
    result_446=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_446,(char*)self,sizeof(double)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_446);
    come_call_finalizer(buffer_finalize, result_446, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

char* buffer_printable(struct buffer* self){
int len_447;
void* __right_value48 = (void*)0;
char* result_448;
int n_449;
int i_450;
unsigned char c_451;
char* __result_obj__92;
    len_447=self->len;
    result_448=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_447*2+1)), "/usr/local/include/comelang.h", 3301, "char*"));
    n_449=0;
    for(    i_450=0    ;    i_450<len_447    ;    i_450++    ){
        c_451=self->buf[i_450];
        if(        (c_451>=0&&c_451<32)||c_451==127        ) {
            result_448[n_449++]=94;
            result_448[n_449++]=c_451+65-1;
        }
        else if(        c_451>127        ) {
            result_448[n_449++]=63;
        }
        else {
            result_448[n_449++]=c_451;
        }
    }
    result_448[n_449]=0;
    __result_obj__92 = (char*)come_increment_ref_count(result_448);
    (result_448 = come_decrement_ref_count(result_448, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__92;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_452;
struct list$1char$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_452=0    ;    i_452<num_value    ;    i_452++    ){
        list$1char$_push_back(self,values[i_452]);
    }
    __result_obj__94 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_453;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_454;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_455;
struct list$1char$* __result_obj__93;
    if(    self->len==0    ) {
        litem_453=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1char$*"))));
        litem_453->prev=((void*)0);
        litem_453->next=((void*)0);
        litem_453->item=item;
        self->tail=litem_453;
        self->head=litem_453;
    }
    else if(    self->len==1    ) {
        litem_454=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1char$*"))));
        litem_454->prev=self->head;
        litem_454->next=((void*)0);
        litem_454->item=item;
        self->tail=litem_454;
        self->head->next=litem_454;
    }
    else {
        litem_455=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1char$*"))));
        litem_455->prev=self->tail;
        litem_455->next=((void*)0);
        litem_455->item=item;
        self->tail->next=litem_455;
        self->tail=litem_455;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_456;
struct list_item$1char$* prev_it_457;
    it_456=self->head;
    while(    it_456!=((void*)0)    ) {
        prev_it_457=it_456;
        it_456=it_456->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_457, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__95;
    __result_obj__95 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_458;
struct list$1char$p* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_458=0    ;    i_458<num_value    ;    i_458++    ){
        list$1char$p_push_back(self,values[i_458]);
    }
    __result_obj__97 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_459;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_460;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_461;
struct list$1char$p* __result_obj__96;
    if(    self->len==0    ) {
        litem_459=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1char$p*"))));
        litem_459->prev=((void*)0);
        litem_459->next=((void*)0);
        litem_459->item=item;
        self->tail=litem_459;
        self->head=litem_459;
    }
    else if(    self->len==1    ) {
        litem_460=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1char$p*"))));
        litem_460->prev=self->head;
        litem_460->next=((void*)0);
        litem_460->item=item;
        self->tail=litem_460;
        self->head->next=litem_460;
    }
    else {
        litem_461=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1char$p*"))));
        litem_461->prev=self->tail;
        litem_461->next=((void*)0);
        litem_461->item=item;
        self->tail->next=litem_461;
        self->tail=litem_461;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_462;
struct list_item$1char$p* prev_it_463;
    it_462=self->head;
    while(    it_462!=((void*)0)    ) {
        prev_it_463=it_462;
        it_462=it_462->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_463, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__98;
    __result_obj__98 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_464;
struct list$1short$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_464=0    ;    i_464<num_value    ;    i_464++    ){
        list$1short$_push_back(self,values[i_464]);
    }
    __result_obj__100 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_465;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_466;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_467;
struct list$1short$* __result_obj__99;
    if(    self->len==0    ) {
        litem_465=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1short$*"))));
        litem_465->prev=((void*)0);
        litem_465->next=((void*)0);
        litem_465->item=item;
        self->tail=litem_465;
        self->head=litem_465;
    }
    else if(    self->len==1    ) {
        litem_466=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1short$*"))));
        litem_466->prev=self->head;
        litem_466->next=((void*)0);
        litem_466->item=item;
        self->tail=litem_466;
        self->head->next=litem_466;
    }
    else {
        litem_467=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1short$*"))));
        litem_467->prev=self->tail;
        litem_467->next=((void*)0);
        litem_467->item=item;
        self->tail->next=litem_467;
        self->tail=litem_467;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_468;
struct list_item$1short$* prev_it_469;
    it_468=self->head;
    while(    it_468!=((void*)0)    ) {
        prev_it_469=it_468;
        it_468=it_468->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_469, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__101;
    __result_obj__101 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_470;
struct list$1int$* __result_obj__103;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_470=0    ;    i_470<num_value    ;    i_470++    ){
        list$1int$_push_back(self,values[i_470]);
    }
    __result_obj__103 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_471;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_472;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_473;
struct list$1int$* __result_obj__102;
    if(    self->len==0    ) {
        litem_471=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1int$*"))));
        litem_471->prev=((void*)0);
        litem_471->next=((void*)0);
        litem_471->item=item;
        self->tail=litem_471;
        self->head=litem_471;
    }
    else if(    self->len==1    ) {
        litem_472=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1int$*"))));
        litem_472->prev=self->head;
        litem_472->next=((void*)0);
        litem_472->item=item;
        self->tail=litem_472;
        self->head->next=litem_472;
    }
    else {
        litem_473=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1int$*"))));
        litem_473->prev=self->tail;
        litem_473->next=((void*)0);
        litem_473->item=item;
        self->tail->next=litem_473;
        self->tail=litem_473;
    }
    self->len++;
    __result_obj__102 = self;
    return __result_obj__102;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_474;
struct list_item$1int$* prev_it_475;
    it_474=self->head;
    while(    it_474!=((void*)0)    ) {
        prev_it_475=it_474;
        it_474=it_474->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_475, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__104;
    __result_obj__104 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_476;
struct list$1long$* __result_obj__106;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_476=0    ;    i_476<num_value    ;    i_476++    ){
        list$1long$_push_back(self,values[i_476]);
    }
    __result_obj__106 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_477;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_478;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_479;
struct list$1long$* __result_obj__105;
    if(    self->len==0    ) {
        litem_477=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1long$*"))));
        litem_477->prev=((void*)0);
        litem_477->next=((void*)0);
        litem_477->item=item;
        self->tail=litem_477;
        self->head=litem_477;
    }
    else if(    self->len==1    ) {
        litem_478=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1long$*"))));
        litem_478->prev=self->head;
        litem_478->next=((void*)0);
        litem_478->item=item;
        self->tail=litem_478;
        self->head->next=litem_478;
    }
    else {
        litem_479=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1long$*"))));
        litem_479->prev=self->tail;
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail->next=litem_479;
        self->tail=litem_479;
    }
    self->len++;
    __result_obj__105 = self;
    return __result_obj__105;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_480;
struct list_item$1long$* prev_it_481;
    it_480=self->head;
    while(    it_480!=((void*)0)    ) {
        prev_it_481=it_480;
        it_480=it_480->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_481, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__107;
    __result_obj__107 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3362, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_482;
struct list$1float$* __result_obj__109;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_482=0    ;    i_482<num_value    ;    i_482++    ){
        list$1float$_push_back(self,values[i_482]);
    }
    __result_obj__109 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_483;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_484;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_485;
struct list$1float$* __result_obj__108;
    if(    self->len==0    ) {
        litem_483=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1float$*"))));
        litem_483->prev=((void*)0);
        litem_483->next=((void*)0);
        litem_483->item=item;
        self->tail=litem_483;
        self->head=litem_483;
    }
    else if(    self->len==1    ) {
        litem_484=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1float$*"))));
        litem_484->prev=self->head;
        litem_484->next=((void*)0);
        litem_484->item=item;
        self->tail=litem_484;
        self->head->next=litem_484;
    }
    else {
        litem_485=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1float$*"))));
        litem_485->prev=self->tail;
        litem_485->next=((void*)0);
        litem_485->item=item;
        self->tail->next=litem_485;
        self->tail=litem_485;
    }
    self->len++;
    __result_obj__108 = self;
    return __result_obj__108;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_486;
struct list_item$1float$* prev_it_487;
    it_486=self->head;
    while(    it_486!=((void*)0)    ) {
        prev_it_487=it_486;
        it_486=it_486->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_487, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__110;
    __result_obj__110 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3367, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_488;
struct list$1double$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_488=0    ;    i_488<num_value    ;    i_488++    ){
        list$1double$_push_back(self,values[i_488]);
    }
    __result_obj__112 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_489;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_490;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_491;
struct list$1double$* __result_obj__111;
    if(    self->len==0    ) {
        litem_489=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1double$*"))));
        litem_489->prev=((void*)0);
        litem_489->next=((void*)0);
        litem_489->item=item;
        self->tail=litem_489;
        self->head=litem_489;
    }
    else if(    self->len==1    ) {
        litem_490=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1double$*"))));
        litem_490->prev=self->head;
        litem_490->next=((void*)0);
        litem_490->item=item;
        self->tail=litem_490;
        self->head->next=litem_490;
    }
    else {
        litem_491=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1double$*"))));
        litem_491->prev=self->tail;
        litem_491->next=((void*)0);
        litem_491->item=item;
        self->tail->next=litem_491;
        self->tail=litem_491;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_492;
struct list_item$1double$* prev_it_493;
    it_492=self->head;
    while(    it_492!=((void*)0)    ) {
        prev_it_493=it_492;
        it_492=it_492->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_493, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__113;
    __result_obj__113 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3372, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
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
void* __right_value84 = (void*)0;
char* __result_obj__114;
int len_494;
void* __right_value85 = (void*)0;
char* result_495;
char* __result_obj__115;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_494=strlen(self)+strlen(right);
    result_495=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_494+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_495,self,len_494+1);
    strncat(result_495,right,len_494+1);
    __result_obj__115 = (char*)come_increment_ref_count(result_495);
    (result_495 = come_decrement_ref_count(result_495, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__115;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__116;
int len_496;
void* __right_value87 = (void*)0;
char* result_497;
char* __result_obj__117;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_496=strlen(self)+strlen(right);
    result_497=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_496+1)), "/usr/local/include/comelang.h", 3616, "char*"));
    strncpy(result_497,self,len_496+1);
    strncat(result_497,right,len_496+1);
    __result_obj__117 = (char*)come_increment_ref_count(result_497);
    (result_497 = come_decrement_ref_count(result_497, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__118;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_498;
int i_499;
void* __right_value91 = (void*)0;
char* __result_obj__119;
    if(    self==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    buf_498=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3629, "struct buffer*"))));
    for(    i_499=0    ;    i_499<right    ;    i_499++    ){
        buffer_append_str(buf_498,self);
    }
    __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_498))));
    come_call_finalizer(buffer_finalize, buf_498, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__120;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_500;
int i_501;
void* __right_value95 = (void*)0;
char* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    buf_500=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_501=0    ;    i_501<right    ;    i_501++    ){
        buffer_append_str(buf_500,self);
    }
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_500))));
    come_call_finalizer(buffer_finalize, buf_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_502;
int i_503;
    result_502=(_Bool)0;
    for(    i_503=0    ;    i_503<len    ;    i_503++    ){
        if(        strncmp(self[i_503],str,strlen(self[i_503]))==0        ) {
            result_502=(_Bool)1;
            break;
        }
    }
    return result_502;
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
int result_504;
char* p_505;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_504=0;
    p_505=value;
    while(    *p_505    ) {
        result_504+=(*p_505);
        p_505++;
    }
    return result_504;
}

unsigned int string_get_hash_key(char* value){
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
_Bool result_508;
    result_508=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_508;
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
_Bool result_509;
    result_509=(c>=32&&c<=126);
    return result_509;
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
void* __right_value96 = (void*)0;
char* __result_obj__122;
int len_510;
void* __right_value97 = (void*)0;
char* result_511;
int i_512;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_510=strlen(str);
    result_511=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_510+1)), "/usr/local/include/comelang.h", 3911, "char*"));
    for(    i_512=0    ;    i_512<len_510    ;    i_512++    ){
        result_511[i_512]=str[len_510-i_512-1];
    }
    result_511[len_510]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_511);
    (result_511 = come_decrement_ref_count(result_511, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__124;
int len_513;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__125;
void* __right_value101 = (void*)0;
char* __result_obj__126;
void* __right_value102 = (void*)0;
char* __result_obj__127;
void* __right_value103 = (void*)0;
char* result_514;
char* __result_obj__128;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_513=strlen(str);
    if(    head<0    ) {
        head+=len_513;
    }
    if(    tail<0    ) {
        tail+=len_513+1;
    }
    if(    head>tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_513    ) {
        tail=len_513;
    }
    if(    head==tail    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    if(    tail-head+1<1    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    result_514=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3957, "char*"));
    memcpy(result_514,str+head,tail-head);
    result_514[tail-head]=0;
    __result_obj__128 = (char*)come_increment_ref_count(result_514);
    (result_514 = come_decrement_ref_count(result_514, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__129;
int len_515;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__130;
void* __right_value107 = (void*)0;
char* __result_obj__131;
void* __right_value108 = (void*)0;
char* __result_obj__132;
void* __right_value109 = (void*)0;
char* result_516;
char* __result_obj__133;
    if(    str==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    len_515=strlen(str);
    if(    head<0    ) {
        head+=len_515;
    }
    if(    tail<0    ) {
        tail+=len_515+1;
    }
    if(    head>tail    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_515    ) {
        tail=len_515;
    }
    if(    head==tail    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    tail-head+1<1    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    result_516=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4000, "char*"));
    memcpy(result_516,str+head,tail-head);
    result_516[tail-head]=0;
    __result_obj__133 = (char*)come_increment_ref_count(result_516);
    (result_516 = come_decrement_ref_count(result_516, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__134;
int len_517;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__135;
void* __right_value113 = (void*)0;
char* __result_obj__136;
void* __right_value114 = (void*)0;
char* __result_obj__137;
void* __right_value115 = (void*)0;
char* result_518;
char* __result_obj__138;
    if(    str==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_517=strlen(str);
    if(    head<0    ) {
        head+=len_517;
    }
    if(    tail<0    ) {
        tail+=len_517+1;
    }
    if(    head>tail    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_517    ) {
        tail=len_517;
    }
    if(    head==tail    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    tail-head+1<1    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    result_518=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4043, "char*"));
    memcpy(result_518,str+head,tail-head);
    result_518[tail-head]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_518);
    (result_518 = come_decrement_ref_count(result_518, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__139;
va_list args_519;
char* result_520;
int len_521;
void* __right_value117 = (void*)0;
char* __result_obj__140;
void* __right_value118 = (void*)0;
char* result2_522;
char* __result_obj__141;
result_520 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    __builtin_va_start(args_519,msg);
    len_521=vasprintf(&result_520,msg,args_519);
    __builtin_va_end(args_519);
    if(    len_521<0    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    result2_522=(char*)come_increment_ref_count(__builtin_string(result_520));
    free(result_520);
    __result_obj__141 = (char*)come_increment_ref_count(result2_522);
    (result2_522 = come_decrement_ref_count(result2_522, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__142;
int len_523;
void* __right_value120 = (void*)0;
char* __result_obj__143;
void* __right_value121 = (void*)0;
char* __result_obj__144;
void* __right_value122 = (void*)0;
char* result_524;
char* __result_obj__145;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_523=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    head<0    ) {
        head+=len_523;
    }
    if(    tail<0    ) {
        tail+=len_523+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    tail>=len_523    ) {
        tail=len_523;
    }
    result_524=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_523-(tail-head)+1)), "/usr/local/include/comelang.h", 4105, "char*"));
    memcpy(result_524,str,head);
    memcpy(result_524+head,str+tail,len_523-tail);
    result_524[len_523-(tail-head)]=0;
    __result_obj__145 = (char*)come_increment_ref_count(result_524);
    (result_524 = come_decrement_ref_count(result_524, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__146;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__146 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_525;
struct list_item$1char$ph* prev_it_526;
    it_525=self->head;
    while(    it_525!=((void*)0)    ) {
        prev_it_526=it_525;
        it_525=it_525->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_526, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_530;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_531;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_532;
char* __dec_obj15;
struct list$1char$ph* __result_obj__148;
    if(    self->len==0    ) {
        litem_530=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1char$ph*"))));
        litem_530->prev=((void*)0);
        litem_530->next=((void*)0);
        __dec_obj13=litem_530->item,
        litem_530->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_530;
        self->head=litem_530;
    }
    else if(    self->len==1    ) {
        litem_531=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1char$ph*"))));
        litem_531->prev=self->head;
        litem_531->next=((void*)0);
        __dec_obj14=litem_531->item,
        litem_531->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_531;
        self->head->next=litem_531;
    }
    else {
        litem_532=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1char$ph*"))));
        litem_532->prev=self->tail;
        litem_532->next=((void*)0);
        __dec_obj15=litem_532->item,
        litem_532->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_532;
        self->tail=litem_532;
    }
    self->len++;
    __result_obj__148 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__148;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__147;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_527;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_528;
int i_529;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__149;
    if(    self==((void*)0)    ) {
        __result_obj__147 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4118, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__147;
    }
    result_527=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4121, "struct list$1char$ph*"))));
    str_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4123, "struct buffer*"))));
    for(    i_529=0    ;    i_529<charp_length(self)    ;    i_529++    ){
        if(        self[i_529]==c        ) {
            list$1char$ph_push_back(result_527,(char*)come_increment_ref_count(__builtin_string(str_528->buf)));
            buffer_reset(str_528);
        }
        else {
            buffer_append_char(str_528,self[i_529]);
        }
    }
    if(    buffer_length(str_528)!=0    ) {
        list$1char$ph_push_back(result_527,(char*)come_increment_ref_count(__builtin_string(str_528->buf)));
    }
    __result_obj__149 = (struct list$1char$ph*)come_increment_ref_count(result_527);
    come_call_finalizer(list$1char$ph$p_finalize, result_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__150;
    __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__151;
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_printable(char* str){
int len_533;
void* __right_value136 = (void*)0;
char* result_534;
int n_535;
int i_536;
char c_537;
char* __result_obj__152;
    len_533=charp_length(str);
    result_534=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_533*2+1)), "/usr/local/include/comelang.h", 4155, "char*"));
    n_535=0;
    for(    i_536=0    ;    i_536<len_533    ;    i_536++    ){
        c_537=str[i_536];
        if(        (c_537>=0&&c_537<32)||c_537==127        ) {
            result_534[n_535++]=94;
            result_534[n_535++]=c_537+65-1;
        }
        else {
            result_534[n_535++]=c_537;
        }
    }
    result_534[n_535]=0;
    __result_obj__152 = (char*)come_increment_ref_count(result_534);
    (result_534 = come_decrement_ref_count(result_534, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__153;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_538;
char* p_539;
char* p2_540;
void* __right_value140 = (void*)0;
char* __result_obj__154;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    result_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4183, "struct buffer*"))));
    p_539=self;
    while(    (_Bool)1    ) {
        p2_540=strstr(p_539,str);
        if(        p2_540==((void*)0)        ) {
            p2_540=p_539;
            while(            *p2_540            ) {
                p2_540++;
            }
            buffer_append(result_538,p_539,p2_540-p_539);
            break;
        }
        buffer_append(result_538,p_539,p2_540-p_539);
        buffer_append_str(result_538,replace);
        p_539=p2_540+strlen(str);
    }
    __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_538))));
    come_call_finalizer(buffer_finalize, result_538, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__155;
char* p_541;
void* __right_value142 = (void*)0;
char* __result_obj__156;
void* __right_value143 = (void*)0;
char* __result_obj__157;
void* __right_value144 = (void*)0;
char* __result_obj__158;
    if(    path==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    p_541=path+strlen(path);
    while(    p_541>=path    ) {
        if(        *p_541==47        ) {
            break;
        }
        else {
            p_541--;
        }
    }
    if(    p_541<path    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    else {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_541+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__159;
void* __right_value146 = (void*)0;
char* path2_542;
char* p_543;
void* __right_value147 = (void*)0;
char* __result_obj__160;
void* __right_value148 = (void*)0;
char* __result_obj__161;
void* __right_value149 = (void*)0;
char* __result_obj__162;
    if(    path==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    path2_542=(char*)come_increment_ref_count(xbasename(path));
    p_543=path2_542+strlen(path2_542);
    while(    p_543>=path2_542    ) {
        if(        *p_543==46        ) {
            break;
        }
        else {
            p_543--;
        }
    }
    if(    p_543<path2_542    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_542))));
        (path2_542 = come_decrement_ref_count(path2_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    else {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_542,0,p_543-path2_542))));
        (path2_542 = come_decrement_ref_count(path2_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_542 = come_decrement_ref_count(path2_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__163;
char* p_544;
void* __right_value151 = (void*)0;
char* __result_obj__164;
void* __right_value152 = (void*)0;
char* __result_obj__165;
void* __right_value153 = (void*)0;
char* __result_obj__166;
    if(    path==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    p_544=path+strlen(path);
    while(    p_544>=path    ) {
        if(        *p_544==46        ) {
            break;
        }
        else {
            p_544--;
        }
    }
    if(    p_544<path    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    else {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_544+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__167;
void* __right_value155 = (void*)0;
char* __result_obj__168;
    if(    self    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    else {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__169;
void* __right_value157 = (void*)0;
char* __result_obj__170;
    if(    self    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    else {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__172;
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__178;
void* __right_value166 = (void*)0;
char* __result_obj__179;
    if(    self==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__180;
void* __right_value168 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
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
void* __right_value169 = (void*)0;
char* __result_obj__182;
void* __right_value170 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    puts(self);
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* charp_print(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__184;
void* __right_value172 = (void*)0;
char* __result_obj__185;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    printf("%s",self);
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_printf(char* self, ...){
void* __right_value173 = (void*)0;
char* __result_obj__186;
char* msg2_545;
va_list args_546;
void* __right_value174 = (void*)0;
char* __result_obj__187;
msg2_545 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    __builtin_va_start(args_546,self);
    vasprintf(&msg2_545,self,args_546);
    __builtin_va_end(args_546);
    printf("%s",msg2_545);
    free(msg2_545);
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_547;
    for(    i_547=0    ;    i_547<self    ;    i_547++    ){
        block(parent,i_547);
    }
}

