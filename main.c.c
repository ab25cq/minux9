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

struct anonymous_typeX1
{
    unsigned char e_ident[16];
    unsigned short int e_type;
    unsigned short int e_machine;
    unsigned int e_version;
    unsigned long  long e_entry;
    unsigned long  long e_phoff;
    unsigned long  long e_shoff;
    unsigned int e_flags;
    unsigned short int e_ehsize;
    unsigned short int e_phentsize;
    unsigned short int e_phnum;
    unsigned short int e_shentsize;
    unsigned short int e_shnum;
    unsigned short int e_shstrndx;
};

typedef struct anonymous_typeX1 Elf64_Ehdr;

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

enum anonymous_typeY3 { FK_STDIN
,FK_STDOUT
,FK_STDERR
,FK_FILE
,FK_PIPE
};

struct file
{
    enum anonymous_typeY3 kind;
    unsigned int inum;
    struct dinode din;
    unsigned int off;
    int used;
    struct spipe* pipe;
};

unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x68, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x57, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4,
  0x22, 0xe0, 0x00, 0x08, 0x8d, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64,
  0x41, 0x01, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xe7, 0x02, 0xbe, 0x85,
  0x19, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34,
  0xa4, 0xfe, 0x05, 0x45, 0xef, 0xf0, 0xdf, 0xfa, 0x81, 0x47, 0x3e, 0x85,
  0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x48, 0x45, 0x41, 0x56, 0x45, 0x4e, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20,
  0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29,
  0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00,
  0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00,
  0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f,
  0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32,
  0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d,
  0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x50, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x57, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x57, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x58, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x57, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x18, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x57, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x57, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x58, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x2e, 0x63, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x24, 0x78,
  0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70,
  0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f,
  0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69,
  0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x5f,
  0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e,
  0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41,
  0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e,
  0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f,
  0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74,
  0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41,
  0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64,
  0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73,
  0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61,
  0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00,
  0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74,
  0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e,
  0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62,
  0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x50, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x57, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x68, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1d, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=1640;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x88, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x93, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x39, 0x71, 0x06, 0xfc,
  0x22, 0xf8, 0x80, 0x00, 0x01, 0x45, 0x93, 0x07, 0x84, 0xfc, 0xbe, 0x85,
  0x19, 0x46, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34,
  0xa4, 0xfe, 0x05, 0x45, 0x93, 0x07, 0x84, 0xfc, 0xbe, 0x85, 0x19, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfe,
  0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xe7, 0x03, 0xbe, 0x85,
  0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x3c,
  0xa4, 0xfc, 0x09, 0x45, 0xef, 0xf0, 0x5f, 0xf9, 0x81, 0x47, 0x3e, 0x85,
  0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4,
  0x22, 0xe0, 0x00, 0x08, 0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64,
  0x41, 0x01, 0x82, 0x80, 0x21, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28,
  0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20,
  0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00,
  0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04,
  0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d,
  0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70,
  0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d,
  0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x78, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x7a, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x7a, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x64, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x80, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x7a, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x7a, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x7a, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x80, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e,
  0x63, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x5f, 0x5f, 0x67, 0x6c,
  0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72,
  0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f,
  0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f,
  0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61,
  0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61,
  0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65,
  0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e,
  0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73,
  0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65,
  0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x93, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1672;
unsigned char msh_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xf2, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x38, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x0d, 0x00, 0x0c, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x5d, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x13, 0x97, 0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xc7, 0x6e,
  0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00,
  0x93, 0x87, 0xc7, 0x6d, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9,
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
  0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xc7, 0x63,
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
  0x82, 0x80, 0x4d, 0x71, 0x86, 0xe6, 0xa2, 0xe2, 0x80, 0x0a, 0x05, 0x45,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xc7, 0x40, 0xbe, 0x85, 0x09, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfc,
  0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x3f, 0xbe, 0x85,
  0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x30,
  0xa4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x01, 0x45, 0x93, 0x07, 0x84, 0xf5,
  0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x3c, 0xa4, 0xfa, 0x05, 0x45, 0x93, 0x07, 0x84, 0xf5, 0xbe, 0x85,
  0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x38,
  0xa4, 0xfa, 0x03, 0x47, 0x84, 0xf5, 0x83, 0x37, 0x84, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x88, 0xe7, 0xf6, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87, 0xb5, 0x47,
  0x63, 0x09, 0xf7, 0x00, 0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87, 0xa9, 0x47,
  0x63, 0x05, 0xf7, 0x00, 0x4d, 0xb7, 0x01, 0x00, 0x11, 0xa0, 0x01, 0x00,
  0x83, 0x37, 0x84, 0xfe, 0xfd, 0x17, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x88,
  0x07, 0xf6, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x36,
  0xbe, 0x85, 0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x34, 0xa4, 0xfa, 0x83, 0x47, 0x04, 0xf6, 0x63, 0x82, 0x07, 0x28,
  0x23, 0x22, 0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe, 0x93, 0x07, 0x04, 0xf6,
  0x23, 0x3c, 0xf4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x83, 0x37, 0x84, 0xfd,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x07, 0x63, 0x14,
  0xf7, 0x0a, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc,
  0x31, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0x00, 0x02, 0xe3, 0x04, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0xa5, 0x47, 0xe3, 0x0c, 0xf7, 0xfc, 0x83, 0x27,
  0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07,
  0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87,
  0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x84, 0x07, 0xec,
  0x03, 0x27, 0x44, 0xfe, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf7, 0x02,
  0xc1, 0x17, 0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe, 0x23, 0xac, 0xe7, 0xee,
  0x83, 0x27, 0x44, 0xfe, 0x85, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x23, 0x34,
  0x04, 0xfe, 0x23, 0x20, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87,
  0x07, 0x00, 0x89, 0x47, 0xe3, 0xde, 0xe7, 0xf4, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x45, 0x29, 0xef, 0xf0, 0x3f, 0xc7, 0xb1, 0xaa, 0x83, 0x37,
  0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x00, 0x02,
  0x63, 0x00, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0xa5, 0x47, 0x63, 0x11, 0xf7, 0x08, 0x31, 0xa0, 0x83, 0x37,
  0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x00, 0x02, 0xe3, 0x04,
  0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0xa5, 0x47, 0xe3, 0x0c, 0xf7, 0xfc, 0x83, 0x27, 0x04, 0xfe, 0x83, 0x26,
  0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x87,
  0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87, 0x87, 0x00, 0x83, 0x37,
  0x84, 0xfe, 0xba, 0x97, 0x23, 0x84, 0x07, 0xec, 0x83, 0x27, 0x04, 0xfe,
  0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x23, 0x34, 0x04, 0xfe, 0x83, 0x27,
  0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x89, 0x47, 0x63, 0xd5, 0xe7, 0x0c,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x20, 0xef, 0xf0, 0x3f, 0xbd,
  0x75, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0xb9, 0xeb,
  0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x03, 0x27,
  0x44, 0xfe, 0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf7, 0x02, 0xc1, 0x17,
  0xa2, 0x97, 0x03, 0x27, 0x04, 0xfe, 0x23, 0xac, 0xe7, 0xee, 0x83, 0x27,
  0x04, 0xfe, 0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07,
  0x40, 0x03, 0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87,
  0x87, 0x00, 0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x84, 0x07, 0xec,
  0x83, 0x27, 0x44, 0xfe, 0x85, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0xb9, 0xa8,
  0x83, 0x37, 0x84, 0xfd, 0x03, 0xc7, 0x07, 0x00, 0x83, 0x27, 0x04, 0xfe,
  0x03, 0x26, 0x44, 0xfe, 0x93, 0x96, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03,
  0xb3, 0x07, 0xf6, 0x02, 0xb6, 0x97, 0xc1, 0x17, 0xb3, 0x86, 0x87, 0x00,
  0x83, 0x37, 0x84, 0xfe, 0xb6, 0x97, 0x23, 0x84, 0xe7, 0xec, 0x83, 0x37,
  0x84, 0xfd, 0x85, 0x07, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x03, 0x37, 0x84, 0xfe, 0xbd, 0x47,
  0xe3, 0xd2, 0xe7, 0xe0, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xc5, 0x15,
  0xef, 0xf0, 0xbf, 0xb1, 0x11, 0xa0, 0xcd, 0xbb, 0x93, 0x08, 0x40, 0x04,
  0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x22, 0xf4, 0xfa, 0x83, 0x27,
  0x44, 0xfa, 0x81, 0x27, 0x99, 0xeb, 0x03, 0x27, 0x44, 0xfe, 0x93, 0x07,
  0x84, 0xeb, 0x3a, 0x86, 0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0, 0x9f, 0xb2,
  0xdd, 0xb1, 0x23, 0x2a, 0x04, 0xfc, 0x29, 0xa8, 0x93, 0x07, 0x44, 0xf5,
  0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0x83, 0x27,
  0x44, 0xfd, 0x85, 0x27, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfd,
  0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x4d,
  0xf7, 0xfc, 0x55, 0xb9, 0x01, 0x00, 0x45, 0xb9, 0x13, 0x01, 0x01, 0xff,
  0x23, 0x34, 0x11, 0x00, 0x13, 0x05, 0x04, 0x00, 0x93, 0x05, 0x00, 0x01,
  0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0xaf, 0xd7, 0x13, 0x05, 0xa0, 0x00,
  0xef, 0xf0, 0x2f, 0xc2, 0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01,
  0x67, 0x80, 0x00, 0x00, 0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00,
  0x83, 0x32, 0x84, 0xfd, 0x13, 0x85, 0x02, 0x00, 0x93, 0x05, 0x00, 0x01,
  0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0xaf, 0xd4, 0x13, 0x05, 0xa0, 0x00,
  0xef, 0xf0, 0x2f, 0xbf, 0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01,
  0x67, 0x80, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00,
  0xec, 0xf9, 0xff, 0xff, 0x30, 0xf9, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x14, 0xfa, 0xff, 0xff, 0x74, 0xf9, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x14, 0xfa, 0xff, 0xff, 0xa4, 0xf9, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff,
  0x52, 0xf9, 0xff, 0xff, 0x0d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x52, 0x52, 0x20,
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
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4c, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x4c, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa8, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x11,
  0x00, 0x10, 0x06, 0x11, 0x01, 0x12, 0x01, 0x03, 0x0e, 0x1b, 0x0e, 0x25,
  0x0e, 0x13, 0x05, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x02, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x01, 0xfb, 0x0e, 0x0a, 0x00, 0x01, 0x01,
  0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78,
  0x2e, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x4c, 0x0d,
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
  0xa8, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0x4c, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x8a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xd6, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x44, 0x26, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x4c, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd6, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x38, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xba, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe2, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x44, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xfe, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xd8, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0d, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x48, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x01, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x78, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x44, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x35, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xf2, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xc4, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x43, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x44, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x44, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x48, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xda, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x73, 0x68, 0x2e, 0x63, 0x00, 0x65,
  0x78, 0x69, 0x74, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32,
  0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31,
  0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73,
  0x63, 0x31, 0x70, 0x30, 0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x6f,
  0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f,
  0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32,
  0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65,
  0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x70, 0x75, 0x74,
  0x63, 0x68, 0x61, 0x72, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00,
  0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69,
  0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73,
  0x30, 0x00, 0x72, 0x75, 0x6e, 0x5f, 0x63, 0x6f, 0x6d, 0x6d, 0x61, 0x6e,
  0x64, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75, 0x74, 0x73, 0x00, 0x70,
  0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67,
  0x00, 0x73, 0x74, 0x72, 0x6e, 0x63, 0x70, 0x79, 0x00, 0x5f, 0x5f, 0x42,
  0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x64, 0x75, 0x6d,
  0x70, 0x5f, 0x73, 0x30, 0x5f, 0x6d, 0x69, 0x6e, 0x75, 0x73, 0x34, 0x30,
  0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74,
  0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x69,
  0x6e, 0x74, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61,
  0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c,
  0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68,
  0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74,
  0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f,
  0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76,
  0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00,
  0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x72, 0x61, 0x6e, 0x67,
  0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x69, 0x6e,
  0x66, 0x6f, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x62,
  0x62, 0x72, 0x65, 0x76, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f,
  0x6c, 0x69, 0x6e, 0x65, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f,
  0x73, 0x74, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x0d, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa8, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5d, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd0, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x42, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x48, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x68, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x14, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int msh_elf_len=6264;
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

struct anonymous_typeX8
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX8 kmem;
extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
extern char COMMON2[];
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
void alloc_prog(char* hello_elf, int fork_flag, int exec_flag);
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
void puts(const char* s);
int Sys_write();
int Sys_exit();
int Sys_wait();
static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self);
static _Bool list$1proc$ph_end(struct list$1proc$ph* self);
static struct proc* list$1proc$ph_next(struct list$1proc$ph* self);
static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail);
static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self);
static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self);
static void list$1proc$ph$p_finalize(struct list$1proc$ph* self);
int Sys_open();
int Sys_fork();
int Sys_execv();
int Sys_dup2();
int Sys_pipe();
static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item);
static struct tuple2$2void$plong$* tuple2$2void$plong$_initialize(struct tuple2$2void$plong$* self, void* v1, unsigned long v2);
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX357, unsigned long  int anonymous_var_nameX358, unsigned long  int anonymous_var_nameX359, unsigned long  long anonymous_var_nameX360);
void timerinit();
struct proc* get_current_proc();
void append_mapping_values(void* user_va, void* pa, unsigned long  int size);
void global_init();
static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self);
static void list$1proc$ph_finalize(struct list$1proc$ph* self);
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
unsigned long  long x_174;
memset(&x_174, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_174));
    return x_174;
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
unsigned long  long x_353;
memset(&x_353, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_353));
    return x_353;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_354;
memset(&sp_val_354, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_354): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_354;
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

void alloc_prog(char* hello_elf, int fork_flag, int exec_flag){
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
unsigned long  long size_123;
unsigned long  long va_124;
int i_125;
void* pa_126;
void* __right_value28 = (void*)0;
struct proc* parent_127;
unsigned long  long parent_current_128;
unsigned long  long parent_stack_top_129;
unsigned long  long stack_base_130;
int i_131;
char* pa_132;
char* src_133;
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_134;
void* it_135;
void* __right_value29 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var1 = (void*)0;
void* pa_142=0;
long size_143=0;
void* __right_value30 = (void*)0;
struct proc* parent_144;
unsigned long  long stack_base_145;
int i_146;
char* pa_147;
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_148;
void* it_149;
void* __right_value31 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var2 = (void*)0;
void* pa_150=0;
long size_151=0;
    result_54=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 809, "struct proc*"));
    result_54->program=hello_elf;
    if(    fork_flag||exec_flag    ) {
        parent_55=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj3=result_54->mapping_values,
        result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph$p_clone(parent_55->mapping_values));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj4=result_54->mapping_values,
        result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 819, "struct map$2void$ptuple2$2void$plong$$ph*"))));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    pagetable_120=(unsigned long  long*)kalloc();
    memset(pagetable_120,0,4096);
    setting_user_pagetable(result_54,pagetable_120);
    result_54->pagetable=pagetable_120;
    eh_121=(struct elfhdr*)hello_elf;
    if(    eh_121->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_122=(struct proghdr*)(hello_elf+eh_121->phoff);
    size_123=ph_122->filesz;
    result_54->vaddr=(((ph_122->vaddr))&~(4096-1));
    va_124=0;
    for(    i_125=0    ;    i_125<eh_121->phnum    ;    i_125++,ph_122++    ){
        if(        ph_122->type!=1        ) {
            continue;
        }
        for(        va_124=(((ph_122->vaddr))&~(4096-1))        ;        va_124<ph_122->vaddr+ph_122->memsz        ;        va_124+=4096        ){
            pa_126=kalloc();
            if(            !pa_126            ) {
                panic("kalloc");
            }
            memset(pa_126,0,4096);
            mappages(result_54->pagetable,va_124,4096,(unsigned long  long)pa_126,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_54->pagetable,ph_122->vaddr,hello_elf+ph_122->off,ph_122->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_127=((struct proc*)(__right_value28=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_128=parent_127->context.sp;
        parent_stack_top_129=(unsigned long  long)parent_127->stack_top;
        stack_base_130=1073741824UL-16*4096;
        for(        i_131=0        ;        i_131<16        ;        i_131++        ){
            pa_132=kalloc();
            src_133=walkaddr(parent_127->pagetable,parent_stack_top_129+i_131*4096);
            if(            src_133            ) {
                memmove(pa_132,(void*)src_133,4096);
            }
            mappages(result_54->pagetable,stack_base_130+i_131*4096,4096,(unsigned long  long)pa_132,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_130;
        result_54->context.sp=stack_base_130+16*4096;
        for(        o2_saved_134=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_127->mapping_values)),it_135=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_134))        ;        !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_134))        ;        it_135=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_134))        ){
            multiple_assign_var1=((struct tuple2$2void$plong$*)(__right_value29=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_127->mapping_values,it_135)));
            pa_142=multiple_assign_var1->v1;
            size_143=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            copyout(result_54->pagetable,(unsigned long  long)it_135,pa_142,size_143)<0            ) {
                panic("copyout");
            }
        }
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        result_54->file_table=fs_dup_table(parent_127->file_table);
    }
    else {
        parent_144=((struct proc*)(__right_value30=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value30, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        stack_base_145=1073741824UL-16*4096;
        for(        i_146=0        ;        i_146<16        ;        i_146++        ){
            pa_147=kalloc();
            mappages(result_54->pagetable,stack_base_145+i_146*4096,4096,(unsigned long  long)pa_147,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_145;
        result_54->context.sp=stack_base_145+16*4096;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            for(            o2_saved_148=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_144->mapping_values)),it_149=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_148))            ;            !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_148))            ;            it_149=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_148))            ){
                multiple_assign_var2=((struct tuple2$2void$plong$*)(__right_value31=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_144->mapping_values,it_149)));
                pa_150=multiple_assign_var2->v1;
                size_151=multiple_assign_var2->v2;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value31, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                copyout(result_54->pagetable,(unsigned long  long)it_149,pa_150,size_151)<0                ) {
                    panic("copyout");
                }
            }
            come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            result_54->file_table=fs_dup_table(parent_144->file_table);
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
    result_69=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "/usr/local/include/comelang.h", 1981, "struct map$2void$ptuple2$2void$plong$$ph*"))));
    __dec_obj2=result_69->key_list,
    result_69->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1983, "struct list$1void$p*"))));
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
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value3=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1910, "void**"))));
    self->items=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value4=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(128)), "/usr/local/include/comelang.h", 1911, "struct tuple2$2void$plong$**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value5=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1912, "_Bool*"))));
    for(    i_66=0    ;    i_66<128    ;    i_66++    ){
        self->item_existance[i_66]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj1=self->key_list,
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1922, "struct list$1void$p*"))));
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
    keys_80=(void**)come_increment_ref_count(((void**)(__right_value12=(void**)come_calloc_v2(1, sizeof(void*)*(1*(size_79)), "/usr/local/include/comelang.h", 2149, "void**"))));
    items_81=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value13=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(size_79)), "/usr/local/include/comelang.h", 2150, "struct tuple2$2void$plong$**"))));
    item_existance_82=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value14=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_79)), "/usr/local/include/comelang.h", 2151, "_Bool*"))));
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
        litem_114=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value17=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1void$p*"))));
        litem_114->prev=((void*)0);
        litem_114->next=((void*)0);
        litem_114->item=item;
        self->tail=litem_114;
        self->head=litem_114;
    }
    else if(    self->len==1    ) {
        litem_115=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value18=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1void$p*"))));
        litem_115->prev=self->head;
        litem_115->next=((void*)0);
        litem_115->item=item;
        self->tail=litem_115;
        self->head->next=litem_115;
    }
    else {
        litem_116=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value19=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1void$p*"))));
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
struct tuple2$2void$plong$* default_value_136;
unsigned int hash_137;
unsigned int it_138;
struct tuple2$2void$plong$* __result_obj__44;
struct tuple2$2void$plong$* __result_obj__45;
struct tuple2$2void$plong$* __result_obj__46;
struct tuple2$2void$plong$* __result_obj__47;
default_value_136 = (void*)0;
    memset(&default_value_136,0,sizeof(struct tuple2$2void$plong$*));
    hash_137=voidp_get_hash_key(((void*)key))%self->size;
    it_138=hash_137;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_138]        ) {
            if(            voidp_equals(self->keys[it_138],key)            ) {
                __result_obj__44 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_138]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__44;
            }
            it_138++;
            if(            it_138>=self->size            ) {
                it_138=0;
            }
            else if(            it_138==hash_137            ) {
                __result_obj__45 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_136);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__45;
            }
        }
        else {
            __result_obj__46 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_136);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__46;
        }
    }
    __result_obj__47 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_136);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_139;
unsigned int hash_140;
unsigned int it_141;
struct tuple2$2void$plong$* __result_obj__48;
struct tuple2$2void$plong$* __result_obj__49;
struct tuple2$2void$plong$* __result_obj__50;
struct tuple2$2void$plong$* __result_obj__51;
default_value_139 = (void*)0;
    memset(&default_value_139,0,sizeof(struct tuple2$2void$plong$*));
    hash_140=voidp_get_hash_key(((void*)key))%self->size;
    it_141=hash_140;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_141]        ) {
            if(            voidp_equals(self->keys[it_141],key)            ) {
                __result_obj__48 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_141]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__48;
            }
            it_141++;
            if(            it_141>=self->size            ) {
                it_141=0;
            }
            else if(            it_141==hash_140            ) {
                __result_obj__49 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_139);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__49;
            }
        }
        else {
            __result_obj__50 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_139);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__50;
        }
    }
    __result_obj__51 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_139);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item){
int len_152;
int i_153;
struct proc* default_value_154;
struct list$1proc$ph* __result_obj__53;
struct list_item$1proc$ph* it_158;
int i_159;
struct proc* __dec_obj8;
struct list$1proc$ph* __result_obj__54;
default_value_154 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_152=self->len;
        for(        i_153=0        ;        i_153<position-len_152        ;        i_153++        ){
            memset(&default_value_154,0,sizeof(struct proc*));
            list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(default_value_154));
            come_call_finalizer(proc_finalize, default_value_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(item));
        __result_obj__53 = self;
        come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__53;
    }
    it_158=self->head;
    i_159=0;
    while(    it_158!=((void*)0)    ) {
        if(        position==i_159        ) {
            __dec_obj8=it_158->item,
            it_158->item=(struct proc*)come_increment_ref_count(item);
            come_call_finalizer(proc_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_158=it_158->next;
        i_159++;
    }
    __result_obj__54 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item){
void* __right_value32 = (void*)0;
struct list_item$1proc$ph* litem_155;
struct proc* __dec_obj5;
void* __right_value33 = (void*)0;
struct list_item$1proc$ph* litem_156;
struct proc* __dec_obj6;
void* __right_value34 = (void*)0;
struct list_item$1proc$ph* litem_157;
struct proc* __dec_obj7;
struct list$1proc$ph* __result_obj__52;
    if(    self->len==0    ) {
        litem_155=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value32=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1proc$ph*"))));
        litem_155->prev=((void*)0);
        litem_155->next=((void*)0);
        __dec_obj5=litem_155->item,
        litem_155->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_155;
        self->head=litem_155;
    }
    else if(    self->len==1    ) {
        litem_156=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value33=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1proc$ph*"))));
        litem_156->prev=self->head;
        litem_156->next=((void*)0);
        __dec_obj6=litem_156->item,
        litem_156->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_156;
        self->head->next=litem_156;
    }
    else {
        litem_157=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value34=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1proc$ph*"))));
        litem_157->prev=self->tail;
        litem_157->next=((void*)0);
        __dec_obj7=litem_157->item,
        litem_157->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_157;
        self->tail=litem_157;
    }
    self->len++;
    __result_obj__52 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__52;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value35 = (void*)0;
struct list_item$1proc$ph* litem_160;
struct proc* __dec_obj9;
void* __right_value36 = (void*)0;
struct list_item$1proc$ph* litem_161;
struct proc* __dec_obj10;
void* __right_value37 = (void*)0;
struct list_item$1proc$ph* litem_162;
struct proc* __dec_obj11;
struct list$1proc$ph* __result_obj__55;
    if(    self->len==0    ) {
        litem_160=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value35=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1013, "struct list_item$1proc$ph*"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        __dec_obj9=litem_160->item,
        litem_160->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1    ) {
        litem_161=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value36=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1023, "struct list_item$1proc$ph*"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        __dec_obj10=litem_161->item,
        litem_161->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value37=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1033, "struct list_item$1proc$ph*"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        __dec_obj11=litem_162->item,
        litem_162->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result_obj__55 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__55;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_163;
unsigned long  long* __result_obj__56;
unsigned long  long* __result_obj__57;
pagetable_163 = (void*)0;
    pagetable_163=(unsigned long  long*)kalloc();
    if(    pagetable_163==0    ) {
        __result_obj__56 = (unsigned long  long*)0;
        return __result_obj__56;
    }
    memset(pagetable_163,0,4096);
    __result_obj__57 = pagetable_163;
    return __result_obj__57;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__164;
unsigned long  long* __result_obj__58;
unsigned long  long addr_165;
unsigned long  long* pte_166;
unsigned long  long pa_167;
unsigned int flags_168;
char* mem_169;
unsigned long  long* __result_obj__59;
new__164 = (void*)0;
    new__164=uvmcreate();
    if(    new__164==0    ) {
        __result_obj__58 = (unsigned long  long*)0;
        return __result_obj__58;
    }
    for(    addr_165=0    ;    addr_165<sz    ;    addr_165+=4096    ){
        pte_166=walk(old,addr_165,0);
        if(        !pte_166||!(*pte_166&(1L<<0))        ) {
            continue;
        }
        pa_167=(((*pte_166)>>10)<<12);
        flags_168=((*pte_166)&1023);
        mem_169=kalloc();
        if(        mem_169==0        ) {
            panic("coypuvm");
        }
        memmove(mem_169,(char*)pa_167,4096);
        if(        mappages(new__164,addr_165,4096,((((unsigned long  long)mem_169)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_169);
            panic("copyuvm");
        }
    }
    __result_obj__59 = new__164;
    return __result_obj__59;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_170;
unsigned long  long pte_171;
unsigned long  long pa_172;
unsigned long  long* child_173;
    for(    i_170=0    ;    i_170<512    ;    i_170++    ){
        pte_171=pagetable[i_170];
        if(        !(pte_171&(1L<<0))        ) {
            continue;
        }
        pa_172=(((pte_171)>>10)<<12);
        if(        pte_171&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_172);
            }
        }
        else if(        level>0        ) {
            child_173=(unsigned long  long*)pa_172;
            free_pagetable(child_173,level-1);
            kfree(child_173);
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
unsigned long  int x_175;
memset(&x_175, 0, sizeof(unsigned long  int));
    x_175=r_sie();
    x_175|=(1UL<<5);
    w_sie(x_175);
    x_175=r_sstatus();
    x_175|=(1UL<<1);
    w_sstatus(x_175);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_176;
    next_176=r_time()+10000UL;
    w_stimecmp(next_176);
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
struct context_t* trapframe_177;
    gNumKernelState--;
    user_satp=gKernelState[gKernelStateHead].gYieldUserSatp;
    user_sp=gKernelState[gKernelStateHead].gYieldUserSP;
    gActiveProc=gKernelState[gKernelStateHead].gYieldUserActiveProc;
    trapframe_177=(struct context_t*)TRAPFRAME2;
    *trapframe_177=gKernelState[gKernelStateHead].gYieldContext;
    trapframe_177=(struct context_t*)TRAPFRAME;
    *trapframe_177=gKernelState[gKernelStateHead].gYieldReturnContext;
    memmove(yield_stack,gKernelState[gKernelStateHead].gYieldStack,(4096*16));
    gKernelStateHead=(gKernelStateHead+1)%16;
    yield_return();
}

void timer_handler(){
void* __right_value39 = (void*)0;
struct proc* p_178;
struct context_t* tf_179;
int old_active_proc_180;
void* __right_value40 = (void*)0;
struct proc* old_181;
void* __right_value41 = (void*)0;
struct proc* new__182;
unsigned long  long a0_183;
    disable_timer_interrupts();
    p_178=((struct proc*)(__right_value39=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value39, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_179=(struct context_t*)TRAPFRAME;
    p_178->context=*tf_179;
    timer_reset();
    old_active_proc_180=gActiveProc;
    old_181=((struct proc*)(__right_value40=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value40, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    if(    gActiveProc==gKernelState[gKernelStateHead].gYieldUserActiveProc&&gNumKernelState>0    ) {
        kernel_yield_return();
    }
    new__182=((struct proc*)(__right_value41=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value41, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__182!=old_181&&new__182->zombie==0    ) {
        user_sp=new__182->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__182->pagetable)>>12));
        old_181->context=*(struct context_t*)TRAPFRAME;
        a0_183=new__182->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_183));
        swtch(&new__182->context);
    }
    else {
        gActiveProc=old_active_proc_180;
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

void puts(const char* s){
    acquire(&console_lock);
    while(    *s    ) {
        putchar(*s++);
    }
    release(&console_lock);
}

int Sys_write(){
struct context_t* trapframe_184;
unsigned long  int arg0_185;
unsigned long  int arg1_186;
unsigned long  int arg2_187;
unsigned long  int arg3_188;
unsigned long  int arg4_189;
unsigned long  int arg5_190;
unsigned long  int arg6_191;
unsigned long  int arg_syscall_no_192;
int fd_193;
unsigned long  long user_va_195;
int len_196;
void* __right_value42 = (void*)0;
struct proc* p_197;
int ret_198;
int i_199;
    trapframe_184=(struct context_t*)TRAPFRAME;
    arg0_185=trapframe_184->a0;
    arg1_186=trapframe_184->a1;
    arg2_187=trapframe_184->a2;
    arg3_188=trapframe_184->a3;
    arg4_189=trapframe_184->a4;
    arg5_190=trapframe_184->a5;
    arg6_191=trapframe_184->a6;
    arg_syscall_no_192=trapframe_184->a7;
    fd_193=arg0_185;
    char kernel_buf_194[256];
    memset(&kernel_buf_194, 0, sizeof(char)    *(256)    );
    user_va_195=arg1_186;
    len_196=arg2_187;
    memset(kernel_buf_194,0,256);
    p_197=((struct proc*)(__right_value42=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value42, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_198=copyin(p_197->pagetable,kernel_buf_194,user_va_195,len_196);
    if(    ret_198<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_193)    ) {
        pipewrite(fd_193,kernel_buf_194,len_196);
    }
    else if(    is_stdout(fd_193)    ) {
        for(        i_199=0        ;        i_199<len_196        ;        i_199++        ){
            putchar(kernel_buf_194[i_199]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_200;
unsigned long  int arg0_201;
unsigned long  int arg1_202;
unsigned long  int arg2_203;
unsigned long  int arg3_204;
unsigned long  int arg4_205;
unsigned long  int arg5_206;
unsigned long  int arg6_207;
unsigned long  int arg_syscall_no_208;
void* __right_value43 = (void*)0;
struct proc* p_209;
    trapframe_200=(struct context_t*)TRAPFRAME;
    arg0_201=trapframe_200->a0;
    arg1_202=trapframe_200->a1;
    arg2_203=trapframe_200->a2;
    arg3_204=trapframe_200->a3;
    arg4_205=trapframe_200->a4;
    arg5_206=trapframe_200->a5;
    arg6_207=trapframe_200->a6;
    arg_syscall_no_208=trapframe_200->a7;
    p_209=((struct proc*)(__right_value43=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value43, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_209->xstatus=arg0_201;
    p_209->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_210;
unsigned long  int arg0_211;
unsigned long  int arg1_212;
unsigned long  int arg2_213;
unsigned long  int arg3_214;
unsigned long  int arg4_215;
unsigned long  int arg5_216;
unsigned long  int arg6_217;
unsigned long  int arg_syscall_no_218;
int* status_va_219;
int exit_status_220;
int child_pid_221;
int n_222;
struct list$1proc$ph* o2_saved_223;
struct proc* it_226;
void* __right_value44 = (void*)0;
struct proc* p_247;
    trapframe_210=(struct context_t*)TRAPFRAME;
    arg0_211=trapframe_210->a0;
    arg1_212=trapframe_210->a1;
    arg2_213=trapframe_210->a2;
    arg3_214=trapframe_210->a3;
    arg4_215=trapframe_210->a4;
    arg5_216=trapframe_210->a5;
    arg6_217=trapframe_210->a6;
    arg_syscall_no_218=trapframe_210->a7;
    status_va_219=(int*)arg0_211;
    exit_status_220=0;
    child_pid_221=-1;
    while(    child_pid_221==-1    ) {
        n_222=0;
        for(        o2_saved_223=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_226=list$1proc$ph_begin((o2_saved_223))        ;        !list$1proc$ph_end((o2_saved_223))        ;        it_226=list$1proc$ph_next((o2_saved_223))        ){
            if(            it_226->zombie            ) {
                free(it_226->file_table);
                free_proc(it_226);
                exit_status_220=it_226->xstatus;
                child_pid_221=n_222;
                list$1proc$ph_remove_by_pointer(gProc,it_226);
                break;
            }
            n_222++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        if(        child_pid_221==-1        ) {
            yield();
        }
    }
    p_247=((struct proc*)(__right_value44=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value44, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_247->pagetable,(unsigned long  long)status_va_219,(void*)&exit_status_220,sizeof(int))<0    ) {
        panic("wait: copyout failed");
    }
    return child_pid_221;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_224;
struct proc* __result_obj__61;
struct proc* __result_obj__62;
struct proc* result_225;
struct proc* __result_obj__63;
result_224 = (void*)0;
result_225 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_224,0,sizeof(struct proc*));
        __result_obj__61 = result_224;
        return __result_obj__61;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__62 = self->it->item;
        return __result_obj__62;
    }
    memset(&result_225,0,sizeof(struct proc*));
    __result_obj__63 = result_225;
    return __result_obj__63;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_227;
struct proc* __result_obj__64;
struct proc* __result_obj__65;
struct proc* result_228;
struct proc* __result_obj__66;
result_227 = (void*)0;
result_228 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_227,0,sizeof(struct proc*));
        __result_obj__64 = result_227;
        return __result_obj__64;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__65 = self->it->item;
        return __result_obj__65;
    }
    memset(&result_228,0,sizeof(struct proc*));
    __result_obj__66 = result_228;
    return __result_obj__66;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_229;
struct list_item$1proc$ph* it_230;
struct list$1proc$ph* __result_obj__70;
    it2_229=0;
    it_230=self->head;
    while(    it_230!=((void*)0)    ) {
        if(        it_230->item==item        ) {
            list$1proc$ph_delete(self,it2_229,it2_229+1);
            break;
        }
        it2_229++;
        it_230=it_230->next;
    }
    __result_obj__70 = self;
    return __result_obj__70;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_231;
struct list$1proc$ph* __result_obj__67;
struct list_item$1proc$ph* it_234;
int i_235;
struct list_item$1proc$ph* prev_it_236;
struct list_item$1proc$ph* it_237;
int i_238;
struct list_item$1proc$ph* prev_it_239;
struct list_item$1proc$ph* it_240;
struct list_item$1proc$ph* head_prev_it_241;
struct list_item$1proc$ph* tail_it_242;
int i_243;
struct list_item$1proc$ph* prev_it_244;
struct list$1proc$ph* __result_obj__69;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_231=tail;
        tail=head;
        head=tmp_231;
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
        it_234=self->head;
        i_235=0;
        while(        it_234!=((void*)0)        ) {
            if(            i_235<tail            ) {
                prev_it_236=it_234;
                it_234=it_234->next;
                i_235++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_235==tail            ) {
                self->head=it_234;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_234=it_234->next;
                i_235++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_237=self->head;
        i_238=0;
        while(        it_237!=((void*)0)        ) {
            if(            i_238==head            ) {
                self->tail=it_237->prev;
                self->tail->next=((void*)0);
            }
            if(            i_238>=head            ) {
                prev_it_239=it_237;
                it_237=it_237->next;
                i_238++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_237=it_237->next;
                i_238++;
            }
        }
    }
    else {
        it_240=self->head;
        head_prev_it_241=((void*)0);
        tail_it_242=((void*)0);
        i_243=0;
        while(        it_240!=((void*)0)        ) {
            if(            i_243==head            ) {
                head_prev_it_241=it_240->prev;
            }
            if(            i_243==tail            ) {
                tail_it_242=it_240;
            }
            if(            i_243>=head&&i_243<tail            ) {
                prev_it_244=it_240;
                it_240=it_240->next;
                i_243++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_240=it_240->next;
                i_243++;
            }
        }
        if(        head_prev_it_241!=((void*)0)        ) {
            head_prev_it_241->next=tail_it_242;
        }
        if(        tail_it_242!=((void*)0)        ) {
            tail_it_242->prev=head_prev_it_241;
        }
    }
    __result_obj__69 = self;
    return __result_obj__69;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_232;
struct list_item$1proc$ph* prev_it_233;
struct list$1proc$ph* __result_obj__68;
    it_232=self->head;
    while(    it_232!=((void*)0)    ) {
        prev_it_233=it_232;
        it_232=it_232->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_233, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_245;
struct list_item$1proc$ph* prev_it_246;
    it_245=self->head;
    while(    it_245!=((void*)0)    ) {
        prev_it_246=it_245;
        it_245=it_245->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_248;
unsigned long  int arg0_249;
unsigned long  int arg1_250;
unsigned long  int arg2_251;
unsigned long  int arg3_252;
unsigned long  int arg4_253;
unsigned long  int arg5_254;
unsigned long  int arg6_255;
unsigned long  int arg_syscall_no_256;
unsigned long  long user_va_258;
void* __right_value45 = (void*)0;
struct proc* p_259;
int result_260;
    trapframe_248=(struct context_t*)TRAPFRAME;
    arg0_249=trapframe_248->a0;
    arg1_250=trapframe_248->a1;
    arg2_251=trapframe_248->a2;
    arg3_252=trapframe_248->a3;
    arg4_253=trapframe_248->a4;
    arg5_254=trapframe_248->a5;
    arg6_255=trapframe_248->a6;
    arg_syscall_no_256=trapframe_248->a7;
    char kernel_buf_257[256];
    memset(&kernel_buf_257, 0, sizeof(char)    *(256)    );
    user_va_258=arg0_249;
    p_259=((struct proc*)(__right_value45=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_259->pagetable,kernel_buf_257,user_va_258,256);
    result_260=fs_open(kernel_buf_257);
    return result_260;
}

int Sys_fork(){
struct context_t* trapframe_261;
unsigned long  int arg0_262;
unsigned long  int arg1_263;
unsigned long  int arg2_264;
unsigned long  int arg3_265;
unsigned long  int arg4_266;
unsigned long  int arg5_267;
unsigned long  int arg6_268;
unsigned long  int arg_syscall_no_269;
void* __right_value46 = (void*)0;
struct proc* p_270;
int fork_flag_271;
void* __right_value47 = (void*)0;
struct proc* child_272;
unsigned long  long sp_273;
int result_274;
memset(&fork_flag_271, 0, sizeof(int));
    trapframe_261=(struct context_t*)TRAPFRAME;
    arg0_262=trapframe_261->a0;
    arg1_263=trapframe_261->a1;
    arg2_264=trapframe_261->a2;
    arg3_265=trapframe_261->a3;
    arg4_266=trapframe_261->a4;
    arg5_267=trapframe_261->a5;
    arg6_268=trapframe_261->a6;
    arg_syscall_no_269=trapframe_261->a7;
    p_270=((struct proc*)(__right_value46=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_270->program,fork_flag_271=1,0);
    child_272=((struct proc*)(__right_value47=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_273=child_272->context.sp;
    child_272->context=*trapframe_261;
    child_272->context.mepc=child_272->context.mepc+4;
    child_272->context.sp=sp_273;
    child_272->context.a0=0;
    result_274=list$1proc$ph_length(gProc)-1;
    return result_274;
}

int Sys_execv(){
struct context_t* trapframe_275;
unsigned long  int arg0_276;
unsigned long  int arg1_277;
unsigned long  int arg2_278;
unsigned long  int arg3_279;
unsigned long  int arg4_280;
unsigned long  int arg5_281;
unsigned long  int arg6_282;
unsigned long  int arg_syscall_no_283;
int argc_284;
unsigned long  long user_va_286;
void* __right_value48 = (void*)0;
struct proc* p_287;
char* path_288;
unsigned long  long user_argv_290;
int i_291;
unsigned long  int uargp_292;
int fd_295;
int ret_296;
void* __right_value49 = (void*)0;
struct proc* result_297;
memset(&uargp_292, 0, sizeof(unsigned long  int));
    trapframe_275=(struct context_t*)TRAPFRAME;
    arg0_276=trapframe_275->a0;
    arg1_277=trapframe_275->a1;
    arg2_278=trapframe_275->a2;
    arg3_279=trapframe_275->a3;
    arg4_280=trapframe_275->a4;
    arg5_281=trapframe_275->a5;
    arg6_282=trapframe_275->a6;
    arg_syscall_no_283=trapframe_275->a7;
    argc_284=arg2_278;
    char kernel_buf_285[256];
    memset(&kernel_buf_285, 0, sizeof(char)    *(256)    );
    user_va_286=arg0_276;
    p_287=((struct proc*)(__right_value48=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_287->pagetable,kernel_buf_285,user_va_286,256);
    path_288=kernel_buf_285;
    char argv_289[32][32];
    memset(&argv_289, 0, sizeof(char)    *(32)    *(32)    );
    user_argv_290=arg1_277;
    for(    i_291=0    ;    ;    i_291++    ){
        if(        copyin(p_287->pagetable,(char*)&uargp_292,user_argv_290+i_291*sizeof(unsigned long  int),sizeof(unsigned long  int))<0        ) {
            return -1;
        }
        if(        uargp_292==0        ) {
            break;
        }
        char argbuf_293[256];
        memset(&argbuf_293, 0, sizeof(char)        *(256)        );
        if(        copyinstr(p_287->pagetable,argbuf_293,uargp_292,sizeof(argbuf_293))<0        ) {
            return -1;
        }
        strncpy((char*)argv_289[i_291],argbuf_293,32);
    }
    char hello_elf_294[4096];
    memset(&hello_elf_294, 0, sizeof(char)    *(4096)    );
    fd_295=fs_open(path_288);
    ret_296=fs_read(fd_295,hello_elf_294,4096);
    if(    ret_296<0    ) {
        trapframe_275->a0=-1;
        return 0;
    }
    alloc_prog(hello_elf_294,0,1);
    result_297=((struct proc*)(__right_value49=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_275->mepc=result_297->context.mepc+4;
    trapframe_275->sp=result_297->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_298;
unsigned long  int arg0_299;
unsigned long  int arg1_300;
unsigned long  int arg2_301;
unsigned long  int arg3_302;
unsigned long  int arg4_303;
unsigned long  int arg5_304;
unsigned long  int arg6_305;
unsigned long  int arg_syscall_no_306;
int oldfd_307;
int newfd_308;
    trapframe_298=(struct context_t*)TRAPFRAME;
    arg0_299=trapframe_298->a0;
    arg1_300=trapframe_298->a1;
    arg2_301=trapframe_298->a2;
    arg3_302=trapframe_298->a3;
    arg4_303=trapframe_298->a4;
    arg5_304=trapframe_298->a5;
    arg6_305=trapframe_298->a6;
    arg_syscall_no_306=trapframe_298->a7;
    oldfd_307=arg0_299;
    newfd_308=arg1_300;
    fs_dup2(oldfd_307,newfd_308);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_309;
unsigned long  int arg0_310;
unsigned long  int arg1_311;
unsigned long  int arg2_312;
unsigned long  int arg3_313;
unsigned long  int arg4_314;
unsigned long  int arg5_315;
unsigned long  int arg6_316;
unsigned long  int arg_syscall_no_317;
char* kernel_buf_318;
unsigned long  long user_va_319;
int* fd_320;
void* __right_value50 = (void*)0;
struct proc* p_321;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
kernel_buf_318 = (void*)0;
    trapframe_309=(struct context_t*)TRAPFRAME;
    arg0_310=trapframe_309->a0;
    arg1_311=trapframe_309->a1;
    arg2_312=trapframe_309->a2;
    arg3_313=trapframe_309->a3;
    arg4_314=trapframe_309->a4;
    arg5_315=trapframe_309->a5;
    arg6_316=trapframe_309->a6;
    arg_syscall_no_317=trapframe_309->a7;
    user_va_319=arg0_310;
    fd_320=common_kalloc(sizeof(int)*2);
    pipe_open(&fd_320[0],&fd_320[1]);
    p_321=((struct proc*)(__right_value50=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_321->pagetable,(unsigned long  long)user_va_319,(char*)fd_320,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    map$2void$ptuple2$2void$plong$$ph_insert(p_321->mapping_values,(void*)user_va_319,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1513, "struct tuple2$2void$plong$")),(void*)fd_320,sizeof(int)*2)));
    return 0;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_322;
unsigned int it_323;
_Bool same_key_exist_324;
void* it2_325;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__71;
    if(    self->len*10>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_322=voidp_get_hash_key(((void*)key))%self->size;
    it_323=hash_322;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_323]        ) {
            if(            voidp_equals(self->keys[it_323],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_323]);
                    (self->keys[it_323] = come_decrement_ref_count(self->keys[it_323], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_323]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_323]);
                    self->keys[it_323]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_323], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_323]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_323]=item;
                }
                break;
            }
            it_323++;
            if(            it_323>=self->size            ) {
                it_323=0;
            }
            else if(            it_323==hash_322            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_323]=(_Bool)1;
            if(            0            ) {
                self->keys[it_323]=key;
            }
            else {
                self->keys[it_323]=key;
            }
            if(            1            ) {
                self->items[it_323]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_323]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_324=(_Bool)0;
    for(    it2_325=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_325=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_325,key)        ) {
            same_key_exist_324=(_Bool)1;
        }
    }
    if(    !same_key_exist_324    ) {
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
struct context_t* trapframe_326;
unsigned long  int arg0_327;
unsigned long  int arg1_328;
unsigned long  int arg2_329;
unsigned long  int arg3_330;
unsigned long  int arg4_331;
unsigned long  int arg5_332;
unsigned long  int arg6_333;
unsigned long  int arg_syscall_no_334;
int fd_335;
unsigned long  long destva_336;
unsigned long  int n_337;
int ret_339;
void* __right_value53 = (void*)0;
struct proc* p_340;
memset(&ret_339, 0, sizeof(int));
    trapframe_326=(struct context_t*)TRAPFRAME;
    arg0_327=trapframe_326->a0;
    arg1_328=trapframe_326->a1;
    arg2_329=trapframe_326->a2;
    arg3_330=trapframe_326->a3;
    arg4_331=trapframe_326->a4;
    arg5_332=trapframe_326->a5;
    arg6_333=trapframe_326->a6;
    arg_syscall_no_334=trapframe_326->a7;
    fd_335=arg0_327;
    destva_336=arg1_328;
    n_337=arg2_329;
    char kernel_buf_338[256];
    memset(&kernel_buf_338, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_335)    ) {
        ret_339=uart_readn(kernel_buf_338,n_337);
    }
    else if(    is_pipe(fd_335)    ) {
        ret_339=piperead(fd_335,kernel_buf_338,n_337);
    }
    else {
        ret_339=fs_read(fd_335,kernel_buf_338,n_337);
        if(        ret_339<0        ) {
            trapframe_326->a0=ret_339;
            return 0;
        }
        kernel_buf_338[ret_339]=0;
    }
    p_340=((struct proc*)(__right_value53=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_340->pagetable,destva_336,kernel_buf_338,ret_339)<0    ) {
        panic("read: copyout failed");
    }
    return ret_339;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_341;
unsigned long  int arg0_342;
unsigned long  int arg1_343;
unsigned long  int arg2_344;
unsigned long  int arg3_345;
unsigned long  int arg4_346;
unsigned long  int arg5_347;
unsigned long  int arg6_348;
unsigned long  int arg_syscall_no_349;
unsigned long  long result_350;
long fd_351;
int ret_352;
    disable_timer_interrupts();
    trapframe_341=(struct context_t*)TRAPFRAME;
    arg0_342=trapframe_341->a0;
    arg1_343=trapframe_341->a1;
    arg2_344=trapframe_341->a2;
    arg3_345=trapframe_341->a3;
    arg4_346=trapframe_341->a4;
    arg5_347=trapframe_341->a5;
    arg6_348=trapframe_341->a6;
    arg_syscall_no_349=trapframe_341->a7;
    result_350=0;
    switch (    arg_syscall_no_349) {
        case 64:
        {
            result_350=Sys_write();
        }
        break;
        case 73:
        {
            result_350=Sys_pipe();
        }
        break;
        case 72:
        {
            result_350=Sys_dup2();
        }
        break;
        case 70:
        {
            result_350=Sys_exit();
        }
        break;
        case 71:
        {
            result_350=Sys_wait();
        }
        break;
        case 66:
        {
            result_350=Sys_open();
        }
        break;
        case 65:
        {
            result_350=Sys_read();
        }
        break;
        case 67:
        {
            fd_351=arg0_342;
            ret_352=fs_close(fd_351);
            result_350=ret_352;
        }
        break;
        case 68:
        {
            result_350=Sys_fork();
        }
        break;
        case 69:
        {
            result_350=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_341->a0=result_350;
    return result_350;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

struct proc* get_current_proc(){
void* __right_value54 = (void*)0;
struct proc* __result_obj__73;
    __result_obj__73 = ((struct proc*)(__right_value54=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__73;
}

void append_mapping_values(void* user_va, void* pa, unsigned long  int size){
struct proc* c_355;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
    c_355=get_current_proc();
    map$2void$ptuple2$2void$plong$$ph_insert(c_355->mapping_values,user_va,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 2474, "struct tuple2$2void$plong$")),pa,(long)size)));
}

void global_init(){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1proc$ph* __dec_obj12;
    __dec_obj12=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2479, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_356;
struct list_item$1proc$ph* prev_it_357;
    it_356=self->head;
    while(    it_356!=((void*)0)    ) {
        prev_it_357=it_356;
        it_356=it_356->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_357, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_358;
void* __right_value59 = (void*)0;
struct proc* p_359;
unsigned long  int usersp_360;
unsigned long  long usersatp_361;
unsigned long  int entry_362;
memset(&fork_flag_358, 0, sizeof(int));
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
    alloc_prog((char*)msh_elf,fork_flag_358=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_359=((struct proc*)(__right_value59=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_360=(unsigned long  long)(p_359->context.sp);
    usersatp_361=((8L<<60)|(((unsigned long  long)p_359->pagetable)>>12));
    entry_362=p_359->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_359;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_362,usersp_360,usersatp_361,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__75;
void* prev_363;
void* __result_obj__76;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__75 = (void*)-1;
        return __result_obj__75;
    }
    prev_363=heap_end;
    heap_end+=incr;
    __result_obj__76 = prev_363;
    return __result_obj__76;
}

void* malloc(unsigned long  int size){
void* __result_obj__77;
struct mem_block* current_364;
struct mem_block* prev_365;
void* __result_obj__78;
struct mem_block* new_mem_366;
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
    current_364=free_list;
    prev_365=((void*)0);
    while(    current_364!=((void*)0)    ) {
        if(        current_364->size>=size        ) {
            if(            prev_365==((void*)0)            ) {
                free_list=current_364->next;
            }
            else {
                prev_365->next=current_364->next;
            }
            __result_obj__78 = (void*)(current_364+1);
            return __result_obj__78;
        }
        prev_365=current_364;
        current_364=current_364->next;
    }
    new_mem_366=(struct mem_block*)sbrk(size);
    if(    new_mem_366==(void*)-1    ) {
        __result_obj__79 = ((void*)0);
        return __result_obj__79;
    }
    new_mem_366->size=size;
    new_mem_366->next=((void*)0);
    __result_obj__80 = (void*)(new_mem_366+1);
    return __result_obj__80;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_367;
void* __result_obj__81;
void* ptr_368;
void* __result_obj__82;
    total_size_367=nmemb*size;
    if(    total_size_367==0    ) {
        __result_obj__81 = ((void*)0);
        return __result_obj__81;
    }
    ptr_368=malloc(total_size_367);
    if(    ptr_368!=((void*)0)    ) {
        memset(ptr_368,0,total_size_367);
    }
    __result_obj__82 = ptr_368;
    return __result_obj__82;
}

void free(void* ptr){
struct mem_block* block_369;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_369=(struct mem_block*)ptr-1;
    block_369->next=free_list;
    free_list=block_369;
}

char* strdup(const char* s){
char* s2_370;
unsigned long  int len_371;
char* p_372;
char* __result_obj__83;
    s2_370=s;
    len_371=strlen(s2_370)+1;
    p_372=malloc(len_371);
    if(    p_372    ) {
        memcpy(p_372,s2_370,len_371);
    }
    __result_obj__83 = p_372;
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
        const char* h_373=haystack;
        const char* n_374=needle;
        while(        *h_373&&*n_374&&(*h_373==*n_374)        ) {
            h_373++;
            n_374++;
        }
        if(        !*n_374        ) {
            __result_obj__85 = (char*)haystack;
            return __result_obj__85;
        }
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_375;
int i_376;
void* __result_obj__87;
    cdst_375=(char*)dst;
    for(    i_376=0    ;    i_376<n    ;    i_376++    ){
        cdst_375[i_376]=c;
    }
    __result_obj__87 = dst;
    return __result_obj__87;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_377;
const unsigned char* s2_378;
memset(&s1_377, 0, sizeof(const unsigned char*));
memset(&s2_378, 0, sizeof(const unsigned char*));
    s1_377=v1;
    s2_378=v2;
    while(    n-->0    ) {
        if(        *s1_377!=*s2_378        ) {
            return *s1_377-*s2_378;
        }
        s1_377++,s2_378++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_379;
char* d_380;
void* __result_obj__88;
void* __result_obj__89;
s_379 = (void*)0;
d_380 = (void*)0;
    if(    n==0    ) {
        __result_obj__88 = dst;
        return __result_obj__88;
    }
    s_379=src;
    d_380=dst;
    if(    s_379<d_380&&s_379+n>d_380    ) {
        s_379+=n;
        d_380+=n;
        while(        n-->0        ) {
            *--d_380=*--s_379;
        }
    }
    else {
        while(        n-->0        ) {
            *d_380++=*s_379++;
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
char* os_381;
char* __result_obj__91;
os_381 = (void*)0;
    os_381=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__91 = os_381;
    return __result_obj__91;
}

int strlen(const char* s){
int n_382;
memset(&n_382, 0, sizeof(int));
    for(    n_382=0    ;    s[n_382]    ;    n_382++    ){
        ;
    }
    return n_382;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_383;
char* __result_obj__92;
    d_383=dest;
    while(    *d_383    ) {
        d_383++;
    }
    while(    n--&&*src    ) {
        *d_383++=*src++;
    }
    *d_383=0;
    __result_obj__92 = dest;
    return __result_obj__92;
}

char* strtok(char* s, const char* delim){
static char* next_384;
char* start_385;
char* p_386;
char* __result_obj__93;
int is_delim_388;
char* __result_obj__94;
int is_delim_390;
char* __result_obj__95;
next_384 = (void*)0;
start_385 = (void*)0;
p_386 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_384=s;
    }
    if(    next_384==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    start_385=next_384;
    while(    *start_385!=0    ) {
        const char* d_387=delim;
        is_delim_388=0;
        while(        *d_387!=0        ) {
            if(            *start_385==*d_387            ) {
                is_delim_388=1;
                break;
            }
            d_387++;
        }
        if(        !is_delim_388        ) {
            break;
        }
        start_385++;
    }
    if(    *start_385==0    ) {
        next_384=((void*)0);
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    p_386=start_385;
    while(    *p_386!=0    ) {
        const char* d_389=delim;
        is_delim_390=0;
        while(        *d_389!=0        ) {
            if(            *p_386==*d_389            ) {
                is_delim_390=1;
                break;
            }
            d_389++;
        }
        if(        is_delim_390        ) {
            break;
        }
        p_386++;
    }
    if(    *p_386==0    ) {
        next_384=((void*)0);
    }
    else {
        *p_386=0;
        next_384=p_386+1;
    }
    __result_obj__95 = start_385;
    return __result_obj__95;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_391;
int i_393;
int negative_394;
char* __result_obj__96;
int digit_395;
char* __result_obj__97;
    p_391=buf;
    char tmp_392[32];
    memset(&tmp_392, 0, sizeof(char)    *(32)    );
    i_393=0;
    negative_394=0;
    if(    base<2||base>16    ) {
        *p_391=0;
        __result_obj__96 = p_391;
        return __result_obj__96;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_394=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_395=val_%base;
        tmp_392[i_393++]=(((digit_395<10))?(48+digit_395):(97+digit_395-10));
        val_/=base;
    } while(    val_    );
    if(    negative_394    ) {
        *p_391++=45;
    }
    while(    i_393--    ) {
        *p_391++=tmp_392[i_393];
    }
    *p_391=0;
    __result_obj__97 = buf;
    return __result_obj__97;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_397;
const char* s_398;
unsigned long  int remaining_400;
s_398 = (void*)0;
    char out2_396[512];
    memset(&out2_396, 0, sizeof(char)    *(512)    );
    p_397=out2_396;
    char buf_399[32];
    memset(&buf_399, 0, sizeof(char)    *(32)    );
    remaining_400=sizeof(out2_396);
    for(    ;    *fmt&&remaining_400>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_397++=*fmt;
            remaining_400--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_399,__builtin_va_arg(ap,int),10,1);
            s_398=buf_399;
            break;
            case 117:
            itoa(buf_399,__builtin_va_arg(ap,unsigned int),10,0);
            s_398=buf_399;
            break;
            case 120:
            itoa(buf_399,__builtin_va_arg(ap,unsigned int),16,0);
            s_398=buf_399;
            break;
            case 115:
            s_398=__builtin_va_arg(ap,const char*);
            if(            !s_398            ) {
                s_398="(null)";
            }
            break;
            case 99:
            buf_399[0]=(char)__builtin_va_arg(ap,int);
            buf_399[1]=0;
            s_398=buf_399;
            break;
            case 112:
            strncpy(buf_399,"0x",32);
            itoa(buf_399+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_398=buf_399;
            break;
            case 37:
            buf_399[0]=37;
            buf_399[1]=0;
            s_398=buf_399;
            break;
            default:
            buf_399[0]=37;
            buf_399[1]=*fmt;
            buf_399[2]=0;
            s_398=buf_399;
            break;
        }
        while(        *s_398&&remaining_400>1        ) {
            *p_397++=*s_398++;
            remaining_400--;
        }
    }
    *p_397=0;
    *out=strdup(out2_396);
    return p_397-out2_396;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_401;
char* p_402;
const char* s_403;
unsigned long  int remaining_405;
memset(&ap_401, 0, sizeof(va_list));
s_403 = (void*)0;
    __builtin_va_start(ap_401,fmt);
    p_402=out;
    char buf_404[32];
    memset(&buf_404, 0, sizeof(char)    *(32)    );
    remaining_405=out_size;
    if(    remaining_405==0    ) {
        __builtin_va_end(ap_401);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_405>1            ) {
                *p_402++=*fmt;
                remaining_405--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_403=__builtin_va_arg(ap_401,const char*);
            while(            *s_403&&remaining_405>1            ) {
                *p_402++=*s_403++;
                remaining_405--;
            }
            break;
            case 100:
            itoa(buf_404,__builtin_va_arg(ap_401,int),10,0);
            s_403=buf_404;
            while(            *s_403&&remaining_405>1            ) {
                *p_402++=*s_403++;
                remaining_405--;
            }
            break;
            case 120:
            itoa(buf_404,(unsigned int)__builtin_va_arg(ap_401,int),16,1);
            s_403=buf_404;
            while(            *s_403&&remaining_405>1            ) {
                *p_402++=*s_403++;
                remaining_405--;
            }
            break;
            case 99:
            if(            remaining_405>1            ) {
                *p_402++=(char)__builtin_va_arg(ap_401,int);
                remaining_405--;
            }
            break;
            case 112:
            s_403="0x";
            while(            *s_403&&remaining_405>1            ) {
                *p_402++=*s_403++;
                remaining_405--;
            }
            itoa(buf_404,(long)__builtin_va_arg(ap_401,void*),16,1);
            s_403=buf_404;
            while(            *s_403&&remaining_405>1            ) {
                *p_402++=*s_403++;
                remaining_405--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_404,__builtin_va_arg(ap_401,long),10,1);
                s_403=buf_404;
                while(                *s_403&&remaining_405>1                ) {
                    *p_402++=*s_403++;
                    remaining_405--;
                }
            }
            break;
            default:
            if(            remaining_405>1            ) {
                *p_402++=37;
                remaining_405--;
                if(                remaining_405>1                ) {
                    *p_402++=*fmt;
                    remaining_405--;
                }
            }
            break;
        }
    }
    *p_402=0;
    __builtin_va_end(ap_401);
    return p_402-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
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

void printint(int val_, int base, int sign){
int i_412;
int negative_413;
unsigned int uval_414;
int digit_415;
memset(&uval_414, 0, sizeof(unsigned int));
    char buf_411[33];
    memset(&buf_411, 0, sizeof(char)    *(33)    );
    i_412=0;
    negative_413=0;
    if(    sign&&val_<0    ) {
        negative_413=1;
        uval_414=-val_;
    }
    else {
        uval_414=(unsigned int)val_;
    }
    if(    uval_414==0    ) {
        putchar(48);
        return;
    }
    while(    uval_414>0    ) {
        digit_415=uval_414%base;
        buf_411[i_412++]=((digit_415<10)?(48+digit_415):(97+(digit_415-10)));
        uval_414/=base;
    }
    if(    negative_413    ) {
        putchar(45);
    }
    while(    --i_412>=0    ) {
        putchar(buf_411[i_412]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_417;
int negative_418;
int digit_419;
    char buf_416[65];
    memset(&buf_416, 0, sizeof(char)    *(65)    );
    i_417=0;
    negative_418=0;
    if(    sign&&(long)val_<0    ) {
        negative_418=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_419=val_%base;
        buf_416[i_417++]=((digit_419<10)?(48+digit_419):(97+(digit_419-10)));
        val_/=base;
    }
    if(    negative_418    ) {
        putchar(45);
    }
    while(    --i_417>=0    ) {
        putchar(buf_416[i_417]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_421;
int negative_422;
int digit_423;
    char buf_420[65];
    memset(&buf_420, 0, sizeof(char)    *(65)    );
    i_421=0;
    negative_422=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_422=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_423=val_%base;
        buf_420[i_421++]=((digit_423<10)?(48+digit_423):(97+(digit_423-10)));
        val_/=base;
    }
    if(    negative_422    ) {
        putchar(45);
    }
    while(    --i_421>=0    ) {
        putchar(buf_420[i_421]);
    }
}

int printf(const char* fmt, ...){
va_list ap_424;
const char* p_425;
int lcount_426;
unsigned long  int val__427;
unsigned long  long val__428;
long val__429;
long long val__430;
int i_431;
int val__432;
unsigned int val__433;
unsigned long  int val__434;
char c_436;
memset(&ap_424, 0, sizeof(va_list));
p_425 = (void*)0;
    __builtin_va_start(ap_424,fmt);
    for(    p_425=fmt    ;    *p_425    ;    p_425++    ){
        if(        *p_425!=37        ) {
            putchar(*p_425);
            continue;
        }
        p_425++;
        if(        *p_425==108        ) {
            lcount_426=1;
            if(            *(p_425+1)==108            ) {
                lcount_426=2;
                p_425++;
            }
            p_425++;
            switch (            *p_425) {
                case 120:
                {
                    if(                    lcount_426==1                    ) {
                        val__427=__builtin_va_arg(ap_424,unsigned long  int);
                        printlong(val__427,16,0);
                    }
                    else {
                        val__428=__builtin_va_arg(ap_424,unsigned long  long);
                        printlonglong(val__428,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_426==1                    ) {
                        val__429=__builtin_va_arg(ap_424,long);
                        printlong(val__429,10,1);
                    }
                    else {
                        val__430=__builtin_va_arg(ap_424,long  long);
                        printlonglong(val__430,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_431=0                    ;                    i_431<lcount_426                    ;                    i_431++                    ){
                        putchar(108);
                    }
                    putchar(*p_425);
                    break;
                }
            }
        }
        else {
            switch (            *p_425) {
                case 100:
                {
                    val__432=__builtin_va_arg(ap_424,int);
                    printint(val__432,10,1);
                    break;
                }
                case 120:
                {
                    val__433=__builtin_va_arg(ap_424,unsigned int);
                    printint(val__433,16,0);
                    break;
                }
                case 112:
                {
                    val__434=(unsigned long  int)__builtin_va_arg(ap_424,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__434,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_435=__builtin_va_arg(ap_424,const char*);
                    if(                    !s_435                    ) {
                        s_435="(null)";
                    }
                    while(                    *s_435                    ) {
                        putchar(*s_435++);
                    }
                    break;
                }
                case 99:
                {
                    c_436=(char)__builtin_va_arg(ap_424,int);
                    putchar(c_436);
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
                    putchar(*p_425);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_424);
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
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct buffer* buf_437;
int i_438;
void* __right_value62 = (void*)0;
    buf_437=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_437,"%s %d\n",sname,sline);
    for(    i_438=gNumComeStackFrame-2    ;    i_438>=0    ;    i_438--    ){
        buffer_append_format(buf_437,"%s %d #%d\n",gComeStackFrameSName[i_438],gComeStackFrameSLine[i_438],gComeStackFrameID[i_438]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value62=buffer_to_string(buf_437))));
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_437, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_439;
    for(    i_439=gNumComeStackFrame-1    ;    i_439>=0    ;    i_439--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_439],gComeStackFrameSLine[i_439],gComeStackFrameID[i_439]);
    }
}

char* come_get_stackframe(){
void* __right_value63 = (void*)0;
char* __result_obj__98;
    __result_obj__98 = (char*)come_increment_ref_count(((char*)(__right_value63=__builtin_string(gComeStackFrameBuffer))));
    (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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

_Bool die(char* msg){
    perror(msg);
    stackframe_v2();
    exit(4);
    return (_Bool)0;
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_440;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_440=0    ;    i_440<gHeapPages.mSizePages    ;    i_440++    ){
        gHeapPages.mPages[i_440]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_441;
int n_442;
_Bool flag_443;
int i_444;
struct sMemHeaderTiny* it_445;
int n_446;
int i_447;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_441=gAllocMem;
        n_442=0;
        while(        it_441        ) {
            n_442++;
            flag_443=(_Bool)0;
            printf("#%d ",n_442);
            if(            it_441->class_name            ) {
                printf("%p (%s): ",(char*)it_441+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_441->class_name);
            }
            for(            i_444=0            ;            i_444<16            ;            i_444++            ){
                if(                it_441->sname[i_444]                ) {
                    printf("%s %d #%d, ",it_441->sname[i_444],it_441->sline[i_444],it_441->id[i_444]);
                    flag_443=(_Bool)1;
                }
            }
            if(            flag_443            ) {
                puts("");
            }
            it_441=it_441->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_442,gNumAlloc,gNumFree);
    }
    else {
        it_445=(struct sMemHeaderTiny*)gAllocMem;
        n_446=0;
        while(        it_445        ) {
            n_446++;
            if(            it_445->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_446,(char*)it_445+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_445->class_name,it_445->sname,it_445->sline);
            }
            it_445=it_445->next;
        }
        if(        n_446>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_446,gNumAlloc,gNumFree);
        }
    }
    for(    i_447=0    ;    i_447<gHeapPages.mSizePages    ;    i_447++    ){
        free(gHeapPages.mPages[i_447]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_448;
void* __result_obj__99;
    result_448=((void*)0);
    size=(size+7&~7);
    result_448=calloc(1,size);
    __result_obj__99 = result_448;
    return __result_obj__99;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_449;
struct sMemHeader* prev_it_450;
struct sMemHeader* next_it_451;
unsigned long  int size_452;
struct sMemHeaderTiny* it_453;
struct sMemHeaderTiny* prev_it_454;
struct sMemHeaderTiny* next_it_455;
unsigned long  int size_456;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_449=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_449->allocated!=177783            ) {
                return;
            }
            it_449->allocated=0;
            prev_it_450=it_449->prev;
            next_it_451=it_449->next;
            if(            gAllocMem==it_449            ) {
                gAllocMem=next_it_451;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_450                ) {
                    prev_it_450->next=next_it_451;
                }
                if(                next_it_451                ) {
                    next_it_451->prev=prev_it_450;
                }
            }
            size_452=it_449->size;
            free(it_449);
            gNumFree++;
        }
        else {
            it_453=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_453->allocated!=177783            ) {
                return;
            }
            it_453->allocated=0;
            prev_it_454=it_453->prev;
            next_it_455=it_453->next;
            if(            gAllocMem==it_453            ) {
                gAllocMem=(struct sMemHeader*)next_it_455;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_454                ) {
                    prev_it_454->next=next_it_455;
                }
                if(                next_it_455                ) {
                    next_it_455->prev=prev_it_454;
                }
            }
            size_456=it_453->size;
            free(it_453);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_457;
struct sMemHeader* it_458;
int i_459;
int i_460;
void* __result_obj__100;
void* result_461;
struct sMemHeaderTiny* it_462;
void* __result_obj__101;
memset(&i_459, 0, sizeof(int));
memset(&i_460, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_457=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_458=result_457;
        it_458->allocated=177783;
        it_458->size=size+sizeof(struct sMemHeader);
        it_458->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_459=0            ;            i_459<gNumComeStackFrame            ;            i_459++            ){
                it_458->sname[i_459]=gComeStackFrameSName[i_459];
                it_458->sline[i_459]=gComeStackFrameSLine[i_459];
                it_458->id[i_459]=gComeStackFrameID[i_459];
            }
        }
        else {
            for(            i_460=0            ;            i_460<16            ;            i_460++            ){
                it_458->sname[i_460]=gComeStackFrameSName[gNumComeStackFrame-1-i_460];
                it_458->sline[i_460]=gComeStackFrameSLine[gNumComeStackFrame-1-i_460];
                it_458->id[i_460]=gComeStackFrameID[gNumComeStackFrame-1-i_460];
            }
        }
        come_pop_stackframe_v2();
        it_458->next=gAllocMem;
        it_458->prev=((void*)0);
        it_458->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_458;
        }
        gAllocMem=it_458;
        gNumAlloc++;
        __result_obj__100 = (char*)result_457+sizeof(struct sMemHeader);
        return __result_obj__100;
    }
    else {
        result_461=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_462=result_461;
        it_462->allocated=177783;
        it_462->class_name=class_name;
        it_462->sname=sname;
        it_462->sline=sline;
        it_462->size=size+sizeof(struct sMemHeaderTiny);
        it_462->free_next=((void*)0);
        it_462->next=(struct sMemHeaderTiny*)gAllocMem;
        it_462->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_462;
        }
        gAllocMem=(struct sMemHeader*)it_462;
        gNumAlloc++;
        __result_obj__101 = (char*)result_461+sizeof(struct sMemHeaderTiny);
        return __result_obj__101;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_463;
char* __result_obj__102;
struct sMemHeaderTiny* it_464;
char* __result_obj__103;
    if(    gComeDebugLib    ) {
        it_463=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_463->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_463);
            exit(2);
        }
        __result_obj__102 = it_463->class_name;
        return __result_obj__102;
    }
    else {
        it_464=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_464->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_464);
            exit(2);
        }
        __result_obj__103 = it_464->class_name;
        return __result_obj__103;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_465;
int i_466;
struct sMemHeaderTiny* it_467;
    if(    gComeDebugLib    ) {
        it_465=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_465->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_465->class_name        ) {
            printf("(%s): ",it_465->class_name);
        }
        for(        i_466=0        ;        i_466<16        ;        i_466++        ){
            if(            it_465->sname[i_466]            ) {
                printf("%s %d #%d, ",it_465->sname[i_466],it_465->sline[i_466],it_465->id[i_466]);
            }
        }
        puts("");
    }
    else {
        it_467=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_467->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_467->class_name,it_467->sname,it_467->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_468;
unsigned long  int* ref_count_469;
unsigned long  int* size2_470;
void* __result_obj__104;
    mem_468=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_469=(unsigned long  int*)mem_468;
    *ref_count_469=0;
    size2_470=(unsigned long  int*)(mem_468+sizeof(unsigned long  int));
    *size2_470=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__104 = mem_468+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__104;
}

void come_free(void* mem){
unsigned long  int* ref_count_471;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_471=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_471);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__105;
char* mem_472;
unsigned long  int* size_p_473;
unsigned long  int size_474;
void* result_475;
void* __result_obj__106;
    if(    !block    ) {
        __result_obj__105 = ((void*)0);
        return __result_obj__105;
    }
    mem_472=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_473=(unsigned long  int*)(mem_472+sizeof(unsigned long  int));
    size_474=*size_p_473-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_475=come_calloc_v2(1,size_474,sname,sline,class_name);
    memcpy(result_475,block,size_474);
    __result_obj__106 = result_475;
    return __result_obj__106;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__107;
unsigned long  int* ref_count_476;
void* __result_obj__108;
    if(    mem==((void*)0)    ) {
        __result_obj__107 = mem;
        return __result_obj__107;
    }
    ref_count_476=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_476)++;
    __result_obj__108 = mem;
    return __result_obj__108;
}

void* come_print_ref_count(void* mem){
void* __result_obj__109;
unsigned long  int* ref_count_477;
void* __result_obj__110;
    if(    mem==((void*)0)    ) {
        __result_obj__109 = mem;
        return __result_obj__109;
    }
    ref_count_477=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_477);
    __result_obj__110 = mem;
    return __result_obj__110;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_478;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_478=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_478;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__111;
void* __result_obj__112;
unsigned long  int* ref_count_479;
unsigned long  int count_480;
void (*finalizer_481)(void*);
void* __result_obj__113;
void* __result_obj__114;
memset(&finalizer_481, 0, sizeof(void (*)(void*)));
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
    ref_count_479=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_479)--;
    }
    count_480=*ref_count_479;
    if(    !no_free&&count_480<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_481=protocol_fun;
            finalizer_481(protocol_obj);
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
void (*finalizer_482)(void*);
void (*finalizer_483)(void*);
void (*finalizer_484)(void*);
unsigned long  int* ref_count_485;
unsigned long  int count_486;
void (*finalizer_487)(void*);
void (*finalizer_488)(void*);
void (*finalizer_489)(void*);
memset(&finalizer_482, 0, sizeof(void (*)(void*)));
memset(&finalizer_483, 0, sizeof(void (*)(void*)));
memset(&finalizer_484, 0, sizeof(void (*)(void*)));
memset(&finalizer_487, 0, sizeof(void (*)(void*)));
memset(&finalizer_488, 0, sizeof(void (*)(void*)));
memset(&finalizer_489, 0, sizeof(void (*)(void*)));
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
                finalizer_482=protocol_fun;
                finalizer_482(protocol_obj);
            }
            finalizer_483=fun;
            finalizer_483(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_484=protocol_fun;
                finalizer_484(protocol_obj);
            }
        }
    }
    else {
        ref_count_485=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_485)--;
        }
        count_486=*ref_count_485;
        if(        !no_free&&count_486<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_487=protocol_fun;
                        finalizer_487(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_488=fun;
                        finalizer_488(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_489=protocol_fun;
                        finalizer_489(protocol_obj);
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
int len_490;
void* __right_value64 = (void*)0;
char* result_491;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_490=strlen(str)+1;
    result_491=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_490)), "/usr/local/include/comelang.h", 897, "char*"));
    strncpy(result_491,str,len_490);
    __result_obj__116 = (char*)come_increment_ref_count(result_491);
    (result_491 = come_decrement_ref_count(result_491, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value65 = (void*)0;
char* __result_obj__117;
    __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value65=come_get_stackframe())));
    (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value66 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__119;
    self->size=128;
    __dec_obj13=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2883, "char*"));
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__119 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value67 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__120;
    self->size=128;
    __dec_obj14=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2893, "char*"));
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
void* __right_value68 = (void*)0;
struct buffer* result_492;
void* __right_value69 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__121;
    }
    result_492=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2913, "struct buffer*"));
    result_492->size=self->size;
    __dec_obj15=result_492->buf,
    result_492->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2916, "char*"));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_492->len=self->len;
    memcpy(result_492->buf,self->buf,self->len);
    __result_obj__122 = (struct buffer*)come_increment_ref_count(result_492);
    come_call_finalizer(buffer_finalize, result_492, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
_Bool __result_obj__123;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__123 = string_equals(((char*)(__right_value70=buffer_to_string(left))),((char*)(__right_value71=buffer_to_string(right))));
    (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value72 = (void*)0;
char* old_buf_493;
int old_len_494;
int new_size_495;
void* __right_value73 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__125;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__124 = self;
        return __result_obj__124;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_493=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2964, "char*"));
        memcpy(old_buf_493,self->buf,self->size);
        old_len_494=self->len;
        new_size_495=(self->size+size+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_495)), "/usr/local/include/comelang.h", 2968, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_493,old_len_494);
        self->buf[old_len_494]=0;
        self->size=new_size_495;
        (old_buf_493 = come_decrement_ref_count(old_buf_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__125 = self;
    return __result_obj__125;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__126;
void* __right_value74 = (void*)0;
char* old_buf_496;
int old_len_497;
int new_size_498;
void* __right_value75 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__127;
    if(    self==((void*)0)    ) {
        __result_obj__126 = ((void*)0);
        return __result_obj__126;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_496=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2987, "char*"));
        old_len_497=self->len;
        new_size_498=(self->size+10+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_498)), "/usr/local/include/comelang.h", 2991, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_496,old_len_497);
        self->buf[old_len_497]=0;
        self->size=new_size_498;
        (old_buf_496 = come_decrement_ref_count(old_buf_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__127 = self;
    return __result_obj__127;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__128;
int size_499;
void* __right_value76 = (void*)0;
char* old_buf_500;
int old_len_501;
int new_size_502;
void* __right_value77 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__129;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__128 = self;
        return __result_obj__128;
    }
    size_499=strlen(mem);
    if(    self->len+size_499+1+1>=self->size    ) {
        old_buf_500=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3013, "char*"));
        memcpy(old_buf_500,self->buf,self->size);
        old_len_501=self->len;
        new_size_502=(self->size+size_499+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_502)), "/usr/local/include/comelang.h", 3017, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_500,old_len_501);
        self->buf[old_len_501]=0;
        self->size=new_size_502;
        (old_buf_500 = come_decrement_ref_count(old_buf_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_499);
    self->len+=size_499;
    self->buf[self->len]=0;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__130;
va_list args_503;
char* result_504;
int len_505;
struct buffer* __result_obj__131;
void* __right_value78 = (void*)0;
char* mem_506;
int size_507;
void* __right_value79 = (void*)0;
char* old_buf_508;
int old_len_509;
int new_size_510;
void* __right_value80 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__132;
result_504 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__130 = self;
        return __result_obj__130;
    }
    __builtin_va_start(args_503,msg);
    len_505=vasprintf(&result_504,msg,args_503);
    __builtin_va_end(args_503);
    if(    len_505<0    ) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    mem_506=(char*)come_increment_ref_count(__builtin_string(result_504));
    size_507=strlen(mem_506);
    if(    self->len+size_507+1+1>=self->size    ) {
        old_buf_508=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3061, "char*"));
        memcpy(old_buf_508,self->buf,self->size);
        old_len_509=self->len;
        new_size_510=(self->size+size_507+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_510)), "/usr/local/include/comelang.h", 3065, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_508,old_len_509);
        self->buf[old_len_509]=0;
        self->size=new_size_510;
        (old_buf_508 = come_decrement_ref_count(old_buf_508, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_506,size_507);
    self->len+=size_507;
    self->buf[self->len]=0;
    free(result_504);
    __result_obj__132 = self;
    (mem_506 = come_decrement_ref_count(mem_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__132;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__133;
int size_511;
void* __right_value81 = (void*)0;
char* old_buf_512;
int old_len_513;
int new_size_514;
void* __right_value82 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__134;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    size_511=strlen(mem)+1;
    if(    self->len+size_511+1+1+1>=self->size    ) {
        old_buf_512=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3087, "char*"));
        memcpy(old_buf_512,self->buf,self->size);
        old_len_513=self->len;
        new_size_514=(self->size+size_511+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_514)), "/usr/local/include/comelang.h", 3091, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_512,old_len_513);
        self->buf[old_len_513]=0;
        self->size=new_size_514;
        (old_buf_512 = come_decrement_ref_count(old_buf_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_511);
    self->len+=size_511;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__135;
int* mem_515;
int size_516;
void* __right_value83 = (void*)0;
char* old_buf_517;
int old_len_518;
int new_size_519;
void* __right_value84 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__135 = ((void*)0);
        return __result_obj__135;
    }
    mem_515=&value;
    size_516=sizeof(int);
    if(    self->len+size_516+1+1>=self->size    ) {
        old_buf_517=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_517,self->buf,self->size);
        old_len_518=self->len;
        new_size_519=(self->size+size_516+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_519)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_517,old_len_518);
        self->buf[old_len_518]=0;
        self->size=new_size_519;
        (old_buf_517 = come_decrement_ref_count(old_buf_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_515,size_516);
    self->len+=size_516;
    self->buf[self->len]=0;
    __result_obj__136 = self;
    return __result_obj__136;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_520;
int size_521;
void* __right_value85 = (void*)0;
char* old_buf_522;
int old_len_523;
int new_size_524;
void* __right_value86 = (void*)0;
char* __dec_obj22;
struct buffer* __result_obj__137;
    mem_520=&value;
    size_521=sizeof(long);
    if(    self->len+size_521+1+1>=self->size    ) {
        old_buf_522=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3137, "char*"));
        memcpy(old_buf_522,self->buf,self->size);
        old_len_523=self->len;
        new_size_524=(self->size+size_521+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_524)), "/usr/local/include/comelang.h", 3141, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_522,old_len_523);
        self->buf[old_len_523]=0;
        self->size=new_size_524;
        (old_buf_522 = come_decrement_ref_count(old_buf_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_520,size_521);
    self->len+=size_521;
    self->buf[self->len]=0;
    __result_obj__137 = self;
    return __result_obj__137;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__138;
short* mem_525;
int size_526;
void* __right_value87 = (void*)0;
char* old_buf_527;
int old_len_528;
int new_size_529;
void* __right_value88 = (void*)0;
char* __dec_obj23;
struct buffer* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = ((void*)0);
        return __result_obj__138;
    }
    mem_525=&value;
    size_526=sizeof(short);
    if(    self->len+size_526+1+1>=self->size    ) {
        old_buf_527=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3164, "char*"));
        memcpy(old_buf_527,self->buf,self->size);
        old_len_528=self->len;
        new_size_529=(self->size+size_526+1)*2;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_529)), "/usr/local/include/comelang.h", 3168, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_527,old_len_528);
        self->buf[old_len_528]=0;
        self->size=new_size_529;
        (old_buf_527 = come_decrement_ref_count(old_buf_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_525,size_526);
    self->len+=size_526;
    self->buf[self->len]=0;
    __result_obj__139 = self;
    return __result_obj__139;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__140;
int len_530;
int new_size_531;
void* __right_value89 = (void*)0;
char* __dec_obj24;
int i_532;
struct buffer* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = ((void*)0);
        return __result_obj__140;
    }
    len_530=self->len;
    len_530=(len_530+3)&~3;
    if(    len_530>=self->size    ) {
        new_size_531=(self->size+1+1)*2;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_531)), "/usr/local/include/comelang.h", 3192, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_531;
    }
    for(    i_532=self->len    ;    i_532<len_530    ;    i_532++    ){
        self->buf[i_532]=0;
    }
    self->len=len_530;
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
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* result_533;
struct buffer* __result_obj__142;
struct buffer* __result_obj__143;
    result_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3222, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__142 = (struct buffer*)come_increment_ref_count(result_533);
        come_call_finalizer(buffer_finalize, result_533, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__142;
    }
    buffer_append_str(result_533,self);
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_533);
    come_call_finalizer(buffer_finalize, result_533, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

char* buffer_to_string(struct buffer* self){
void* __right_value92 = (void*)0;
char* __result_obj__144;
void* __right_value93 = (void*)0;
char* __result_obj__145;
    if(    self==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(self->buf))));
    (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__146;
    __result_obj__146 = self->buf;
    return __result_obj__146;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* result_534;
struct buffer* __result_obj__147;
    result_534=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_534,self,sizeof(char)*len);
    __result_obj__147 = (struct buffer*)come_increment_ref_count(result_534);
    come_call_finalizer(buffer_finalize, result_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* result_535;
int i_536;
struct buffer* __result_obj__148;
    result_535=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    for(    i_536=0    ;    i_536<len    ;    i_536++    ){
        buffer_append(result_535,self[i_536],strlen(self[i_536]));
    }
    __result_obj__148 = (struct buffer*)come_increment_ref_count(result_535);
    come_call_finalizer(buffer_finalize, result_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct buffer* result_537;
struct buffer* __result_obj__149;
    result_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3265, "struct buffer*"))));
    buffer_append(result_537,(char*)self,sizeof(short)*len);
    __result_obj__149 = (struct buffer*)come_increment_ref_count(result_537);
    come_call_finalizer(buffer_finalize, result_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct buffer* result_538;
struct buffer* __result_obj__150;
    result_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3272, "struct buffer*"))));
    buffer_append(result_538,(char*)self,sizeof(int)*len);
    __result_obj__150 = (struct buffer*)come_increment_ref_count(result_538);
    come_call_finalizer(buffer_finalize, result_538, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct buffer* result_539;
struct buffer* __result_obj__151;
    result_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_539,(char*)self,sizeof(long)*len);
    __result_obj__151 = (struct buffer*)come_increment_ref_count(result_539);
    come_call_finalizer(buffer_finalize, result_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct buffer* result_540;
struct buffer* __result_obj__152;
    result_540=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_540,(char*)self,sizeof(float)*len);
    __result_obj__152 = (struct buffer*)come_increment_ref_count(result_540);
    come_call_finalizer(buffer_finalize, result_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct buffer* result_541;
struct buffer* __result_obj__153;
    result_541=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_541,(char*)self,sizeof(double)*len);
    __result_obj__153 = (struct buffer*)come_increment_ref_count(result_541);
    come_call_finalizer(buffer_finalize, result_541, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

char* buffer_printable(struct buffer* self){
int len_542;
void* __right_value108 = (void*)0;
char* result_543;
int n_544;
int i_545;
unsigned char c_546;
char* __result_obj__154;
    len_542=self->len;
    result_543=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_542*2+1)), "/usr/local/include/comelang.h", 3301, "char*"));
    n_544=0;
    for(    i_545=0    ;    i_545<len_542    ;    i_545++    ){
        c_546=self->buf[i_545];
        if(        (c_546>=0&&c_546<32)||c_546==127        ) {
            result_543[n_544++]=94;
            result_543[n_544++]=c_546+65-1;
        }
        else if(        c_546>127        ) {
            result_543[n_544++]=63;
        }
        else {
            result_543[n_544++]=c_546;
        }
    }
    result_543[n_544]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_543);
    (result_543 = come_decrement_ref_count(result_543, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_547;
struct list$1char$* __result_obj__156;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_547=0    ;    i_547<num_value    ;    i_547++    ){
        list$1char$_push_back(self,values[i_547]);
    }
    __result_obj__156 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value110 = (void*)0;
struct list_item$1char$* litem_548;
void* __right_value111 = (void*)0;
struct list_item$1char$* litem_549;
void* __right_value112 = (void*)0;
struct list_item$1char$* litem_550;
struct list$1char$* __result_obj__155;
    if(    self->len==0    ) {
        litem_548=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value110=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1char$*"))));
        litem_548->prev=((void*)0);
        litem_548->next=((void*)0);
        litem_548->item=item;
        self->tail=litem_548;
        self->head=litem_548;
    }
    else if(    self->len==1    ) {
        litem_549=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value111=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1char$*"))));
        litem_549->prev=self->head;
        litem_549->next=((void*)0);
        litem_549->item=item;
        self->tail=litem_549;
        self->head->next=litem_549;
    }
    else {
        litem_550=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value112=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1char$*"))));
        litem_550->prev=self->tail;
        litem_550->next=((void*)0);
        litem_550->item=item;
        self->tail->next=litem_550;
        self->tail=litem_550;
    }
    self->len++;
    __result_obj__155 = self;
    return __result_obj__155;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_551;
struct list_item$1char$* prev_it_552;
    it_551=self->head;
    while(    it_551!=((void*)0)    ) {
        prev_it_552=it_551;
        it_551=it_551->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_552, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1char$* __result_obj__157;
    __result_obj__157 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value113=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_553;
struct list$1char$p* __result_obj__159;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_553=0    ;    i_553<num_value    ;    i_553++    ){
        list$1char$p_push_back(self,values[i_553]);
    }
    __result_obj__159 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value115 = (void*)0;
struct list_item$1char$p* litem_554;
void* __right_value116 = (void*)0;
struct list_item$1char$p* litem_555;
void* __right_value117 = (void*)0;
struct list_item$1char$p* litem_556;
struct list$1char$p* __result_obj__158;
    if(    self->len==0    ) {
        litem_554=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value115=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1char$p*"))));
        litem_554->prev=((void*)0);
        litem_554->next=((void*)0);
        litem_554->item=item;
        self->tail=litem_554;
        self->head=litem_554;
    }
    else if(    self->len==1    ) {
        litem_555=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value116=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1char$p*"))));
        litem_555->prev=self->head;
        litem_555->next=((void*)0);
        litem_555->item=item;
        self->tail=litem_555;
        self->head->next=litem_555;
    }
    else {
        litem_556=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value117=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1char$p*"))));
        litem_556->prev=self->tail;
        litem_556->next=((void*)0);
        litem_556->item=item;
        self->tail->next=litem_556;
        self->tail=litem_556;
    }
    self->len++;
    __result_obj__158 = self;
    return __result_obj__158;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_557;
struct list_item$1char$p* prev_it_558;
    it_557=self->head;
    while(    it_557!=((void*)0)    ) {
        prev_it_558=it_557;
        it_557=it_557->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_558, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1char$p* __result_obj__160;
    __result_obj__160 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value118=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_559;
struct list$1short$* __result_obj__162;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_559=0    ;    i_559<num_value    ;    i_559++    ){
        list$1short$_push_back(self,values[i_559]);
    }
    __result_obj__162 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value120 = (void*)0;
struct list_item$1short$* litem_560;
void* __right_value121 = (void*)0;
struct list_item$1short$* litem_561;
void* __right_value122 = (void*)0;
struct list_item$1short$* litem_562;
struct list$1short$* __result_obj__161;
    if(    self->len==0    ) {
        litem_560=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value120=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1short$*"))));
        litem_560->prev=((void*)0);
        litem_560->next=((void*)0);
        litem_560->item=item;
        self->tail=litem_560;
        self->head=litem_560;
    }
    else if(    self->len==1    ) {
        litem_561=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value121=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1short$*"))));
        litem_561->prev=self->head;
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail=litem_561;
        self->head->next=litem_561;
    }
    else {
        litem_562=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value122=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1short$*"))));
        litem_562->prev=self->tail;
        litem_562->next=((void*)0);
        litem_562->item=item;
        self->tail->next=litem_562;
        self->tail=litem_562;
    }
    self->len++;
    __result_obj__161 = self;
    return __result_obj__161;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_563;
struct list_item$1short$* prev_it_564;
    it_563=self->head;
    while(    it_563!=((void*)0)    ) {
        prev_it_564=it_563;
        it_563=it_563->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_564, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1short$* __result_obj__163;
    __result_obj__163 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value123=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_565;
struct list$1int$* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_565=0    ;    i_565<num_value    ;    i_565++    ){
        list$1int$_push_back(self,values[i_565]);
    }
    __result_obj__165 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value125 = (void*)0;
struct list_item$1int$* litem_566;
void* __right_value126 = (void*)0;
struct list_item$1int$* litem_567;
void* __right_value127 = (void*)0;
struct list_item$1int$* litem_568;
struct list$1int$* __result_obj__164;
    if(    self->len==0    ) {
        litem_566=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value125=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1int$*"))));
        litem_566->prev=((void*)0);
        litem_566->next=((void*)0);
        litem_566->item=item;
        self->tail=litem_566;
        self->head=litem_566;
    }
    else if(    self->len==1    ) {
        litem_567=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value126=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1int$*"))));
        litem_567->prev=self->head;
        litem_567->next=((void*)0);
        litem_567->item=item;
        self->tail=litem_567;
        self->head->next=litem_567;
    }
    else {
        litem_568=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value127=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1int$*"))));
        litem_568->prev=self->tail;
        litem_568->next=((void*)0);
        litem_568->item=item;
        self->tail->next=litem_568;
        self->tail=litem_568;
    }
    self->len++;
    __result_obj__164 = self;
    return __result_obj__164;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_569;
struct list_item$1int$* prev_it_570;
    it_569=self->head;
    while(    it_569!=((void*)0)    ) {
        prev_it_570=it_569;
        it_569=it_569->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_570, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value124 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1int$* __result_obj__166;
    __result_obj__166 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value128=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_571;
struct list$1long$* __result_obj__168;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_571=0    ;    i_571<num_value    ;    i_571++    ){
        list$1long$_push_back(self,values[i_571]);
    }
    __result_obj__168 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__168;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value130 = (void*)0;
struct list_item$1long$* litem_572;
void* __right_value131 = (void*)0;
struct list_item$1long$* litem_573;
void* __right_value132 = (void*)0;
struct list_item$1long$* litem_574;
struct list$1long$* __result_obj__167;
    if(    self->len==0    ) {
        litem_572=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value130=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1long$*"))));
        litem_572->prev=((void*)0);
        litem_572->next=((void*)0);
        litem_572->item=item;
        self->tail=litem_572;
        self->head=litem_572;
    }
    else if(    self->len==1    ) {
        litem_573=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value131=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1long$*"))));
        litem_573->prev=self->head;
        litem_573->next=((void*)0);
        litem_573->item=item;
        self->tail=litem_573;
        self->head->next=litem_573;
    }
    else {
        litem_574=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value132=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1long$*"))));
        litem_574->prev=self->tail;
        litem_574->next=((void*)0);
        litem_574->item=item;
        self->tail->next=litem_574;
        self->tail=litem_574;
    }
    self->len++;
    __result_obj__167 = self;
    return __result_obj__167;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_575;
struct list_item$1long$* prev_it_576;
    it_575=self->head;
    while(    it_575!=((void*)0)    ) {
        prev_it_576=it_575;
        it_575=it_575->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_576, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value129 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1long$* __result_obj__169;
    __result_obj__169 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value133=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3362, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value133, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_577;
struct list$1float$* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_577=0    ;    i_577<num_value    ;    i_577++    ){
        list$1float$_push_back(self,values[i_577]);
    }
    __result_obj__171 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value135 = (void*)0;
struct list_item$1float$* litem_578;
void* __right_value136 = (void*)0;
struct list_item$1float$* litem_579;
void* __right_value137 = (void*)0;
struct list_item$1float$* litem_580;
struct list$1float$* __result_obj__170;
    if(    self->len==0    ) {
        litem_578=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value135=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1float$*"))));
        litem_578->prev=((void*)0);
        litem_578->next=((void*)0);
        litem_578->item=item;
        self->tail=litem_578;
        self->head=litem_578;
    }
    else if(    self->len==1    ) {
        litem_579=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value136=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1float$*"))));
        litem_579->prev=self->head;
        litem_579->next=((void*)0);
        litem_579->item=item;
        self->tail=litem_579;
        self->head->next=litem_579;
    }
    else {
        litem_580=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value137=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1float$*"))));
        litem_580->prev=self->tail;
        litem_580->next=((void*)0);
        litem_580->item=item;
        self->tail->next=litem_580;
        self->tail=litem_580;
    }
    self->len++;
    __result_obj__170 = self;
    return __result_obj__170;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_581;
struct list_item$1float$* prev_it_582;
    it_581=self->head;
    while(    it_581!=((void*)0)    ) {
        prev_it_582=it_581;
        it_581=it_581->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_582, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value134 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1float$* __result_obj__172;
    __result_obj__172 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value138=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3367, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_583;
struct list$1double$* __result_obj__174;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_583=0    ;    i_583<num_value    ;    i_583++    ){
        list$1double$_push_back(self,values[i_583]);
    }
    __result_obj__174 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value140 = (void*)0;
struct list_item$1double$* litem_584;
void* __right_value141 = (void*)0;
struct list_item$1double$* litem_585;
void* __right_value142 = (void*)0;
struct list_item$1double$* litem_586;
struct list$1double$* __result_obj__173;
    if(    self->len==0    ) {
        litem_584=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value140=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1double$*"))));
        litem_584->prev=((void*)0);
        litem_584->next=((void*)0);
        litem_584->item=item;
        self->tail=litem_584;
        self->head=litem_584;
    }
    else if(    self->len==1    ) {
        litem_585=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value141=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1double$*"))));
        litem_585->prev=self->head;
        litem_585->next=((void*)0);
        litem_585->item=item;
        self->tail=litem_585;
        self->head->next=litem_585;
    }
    else {
        litem_586=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value142=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1double$*"))));
        litem_586->prev=self->tail;
        litem_586->next=((void*)0);
        litem_586->item=item;
        self->tail->next=litem_586;
        self->tail=litem_586;
    }
    self->len++;
    __result_obj__173 = self;
    return __result_obj__173;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_587;
struct list_item$1double$* prev_it_588;
    it_587=self->head;
    while(    it_587!=((void*)0)    ) {
        prev_it_588=it_587;
        it_587=it_587->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_588, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value139 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1double$* __result_obj__175;
    __result_obj__175 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value143=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3372, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value143, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value144 = (void*)0;
char* __result_obj__176;
int len_589;
void* __right_value145 = (void*)0;
char* result_590;
char* __result_obj__177;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    len_589=strlen(self)+strlen(right);
    result_590=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_589+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_590,self,len_589+1);
    strncat(result_590,right,len_589+1);
    __result_obj__177 = (char*)come_increment_ref_count(result_590);
    (result_590 = come_decrement_ref_count(result_590, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_operator_add(char* self, char* right){
void* __right_value146 = (void*)0;
char* __result_obj__178;
int len_591;
void* __right_value147 = (void*)0;
char* result_592;
char* __result_obj__179;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    len_591=strlen(self)+strlen(right);
    result_592=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_591+1)), "/usr/local/include/comelang.h", 3616, "char*"));
    strncpy(result_592,self,len_591+1);
    strncat(result_592,right,len_591+1);
    __result_obj__179 = (char*)come_increment_ref_count(result_592);
    (result_592 = come_decrement_ref_count(result_592, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_operator_mult(char* self, int right){
void* __right_value148 = (void*)0;
char* __result_obj__180;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct buffer* buf_593;
int i_594;
void* __right_value151 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    buf_593=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3629, "struct buffer*"))));
    for(    i_594=0    ;    i_594<right    ;    i_594++    ){
        buffer_append_str(buf_593,self);
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value151=buffer_to_string(buf_593))));
    come_call_finalizer(buffer_finalize, buf_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* string_operator_mult(char* self, int right){
void* __right_value152 = (void*)0;
char* __result_obj__182;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* buf_595;
int i_596;
void* __right_value155 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    buf_595=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_596=0    ;    i_596<right    ;    i_596++    ){
        buffer_append_str(buf_595,self);
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value155=buffer_to_string(buf_595))));
    come_call_finalizer(buffer_finalize, buf_595, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_597;
int i_598;
    result_597=(_Bool)0;
    for(    i_598=0    ;    i_598<len    ;    i_598++    ){
        if(        strncmp(self[i_598],str,strlen(self[i_598]))==0        ) {
            result_597=(_Bool)1;
            break;
        }
    }
    return result_597;
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
int result_599;
char* p_600;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_599=0;
    p_600=value;
    while(    *p_600    ) {
        result_599+=(*p_600);
        p_600++;
    }
    return result_599;
}

unsigned int string_get_hash_key(char* value){
int result_601;
char* p_602;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_601=0;
    p_602=value;
    while(    *p_602    ) {
        result_601+=(*p_602);
        p_602++;
    }
    return result_601;
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
_Bool result_603;
    result_603=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_603;
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
_Bool result_604;
    result_604=(c>=32&&c<=126);
    return result_604;
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
void* __right_value156 = (void*)0;
char* __result_obj__184;
int len_605;
void* __right_value157 = (void*)0;
char* result_606;
int i_607;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    len_605=strlen(str);
    result_606=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_605+1)), "/usr/local/include/comelang.h", 3911, "char*"));
    for(    i_607=0    ;    i_607<len_605    ;    i_607++    ){
        result_606[i_607]=str[len_605-i_607-1];
    }
    result_606[len_605]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_606);
    (result_606 = come_decrement_ref_count(result_606, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value158 = (void*)0;
char* __result_obj__186;
int len_608;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
char* __result_obj__187;
void* __right_value161 = (void*)0;
char* __result_obj__188;
void* __right_value162 = (void*)0;
char* __result_obj__189;
void* __right_value163 = (void*)0;
char* result_609;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_608=strlen(str);
    if(    head<0    ) {
        head+=len_608;
    }
    if(    tail<0    ) {
        tail+=len_608+1;
    }
    if(    head>tail    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value160=charp_reverse(((char*)(__right_value159=charp_substring(str,tail,head)))))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_608    ) {
        tail=len_608;
    }
    if(    head==tail    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string(""))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    if(    tail-head+1<1    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    result_609=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3957, "char*"));
    memcpy(result_609,str+head,tail-head);
    result_609[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_609);
    (result_609 = come_decrement_ref_count(result_609, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value164 = (void*)0;
char* __result_obj__191;
int len_610;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __result_obj__192;
void* __right_value167 = (void*)0;
char* __result_obj__193;
void* __right_value168 = (void*)0;
char* __result_obj__194;
void* __right_value169 = (void*)0;
char* result_611;
char* __result_obj__195;
    if(    str==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    len_610=strlen(str);
    if(    head<0    ) {
        head+=len_610;
    }
    if(    tail<0    ) {
        tail+=len_610+1;
    }
    if(    head>tail    ) {
        __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value166=charp_reverse(((char*)(__right_value165=charp_substring(str,tail,head)))))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__192;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_610    ) {
        tail=len_610;
    }
    if(    head==tail    ) {
        __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__193;
    }
    if(    tail-head+1<1    ) {
        __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__194;
    }
    result_611=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4000, "char*"));
    memcpy(result_611,str+head,tail-head);
    result_611[tail-head]=0;
    __result_obj__195 = (char*)come_increment_ref_count(result_611);
    (result_611 = come_decrement_ref_count(result_611, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value170 = (void*)0;
char* __result_obj__196;
int len_612;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __result_obj__197;
void* __right_value173 = (void*)0;
char* __result_obj__198;
void* __right_value174 = (void*)0;
char* __result_obj__199;
void* __right_value175 = (void*)0;
char* result_613;
char* __result_obj__200;
    if(    str==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    len_612=strlen(str);
    if(    head<0    ) {
        head+=len_612;
    }
    if(    tail<0    ) {
        tail+=len_612+1;
    }
    if(    head>tail    ) {
        __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value172=charp_reverse(((char*)(__right_value171=charp_substring(str,tail,head)))))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__197;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_612    ) {
        tail=len_612;
    }
    if(    head==tail    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    if(    tail-head+1<1    ) {
        __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__199;
    }
    result_613=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4043, "char*"));
    memcpy(result_613,str+head,tail-head);
    result_613[tail-head]=0;
    __result_obj__200 = (char*)come_increment_ref_count(result_613);
    (result_613 = come_decrement_ref_count(result_613, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__200;
}

char* xsprintf(char* msg, ...){
void* __right_value176 = (void*)0;
char* __result_obj__201;
va_list args_614;
char* result_615;
int len_616;
void* __right_value177 = (void*)0;
char* __result_obj__202;
void* __right_value178 = (void*)0;
char* result2_617;
char* __result_obj__203;
result_615 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__201;
    }
    __builtin_va_start(args_614,msg);
    len_616=vasprintf(&result_615,msg,args_614);
    __builtin_va_end(args_614);
    if(    len_616<0    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    result2_617=(char*)come_increment_ref_count(__builtin_string(result_615));
    free(result_615);
    __result_obj__203 = (char*)come_increment_ref_count(result2_617);
    (result2_617 = come_decrement_ref_count(result2_617, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value179 = (void*)0;
char* __result_obj__204;
int len_618;
void* __right_value180 = (void*)0;
char* __result_obj__205;
void* __right_value181 = (void*)0;
char* __result_obj__206;
void* __right_value182 = (void*)0;
char* result_619;
char* __result_obj__207;
    if(    str==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(""))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    len_618=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(str))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    if(    head<0    ) {
        head+=len_618;
    }
    if(    tail<0    ) {
        tail+=len_618+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value181=__builtin_string(str))));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__206;
    }
    if(    tail>=len_618    ) {
        tail=len_618;
    }
    result_619=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_618-(tail-head)+1)), "/usr/local/include/comelang.h", 4105, "char*"));
    memcpy(result_619,str,head);
    memcpy(result_619+head,str+tail,len_618-tail);
    result_619[len_618-(tail-head)]=0;
    __result_obj__207 = (char*)come_increment_ref_count(result_619);
    (result_619 = come_decrement_ref_count(result_619, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_620;
struct list_item$1char$ph* prev_it_621;
    it_620=self->head;
    while(    it_620!=((void*)0)    ) {
        prev_it_621=it_620;
        it_620=it_620->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_625;
char* __dec_obj25;
void* __right_value190 = (void*)0;
struct list_item$1char$ph* litem_626;
char* __dec_obj26;
void* __right_value191 = (void*)0;
struct list_item$1char$ph* litem_627;
char* __dec_obj27;
struct list$1char$ph* __result_obj__210;
    if(    self->len==0    ) {
        litem_625=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1083, "struct list_item$1char$ph*"))));
        litem_625->prev=((void*)0);
        litem_625->next=((void*)0);
        __dec_obj25=litem_625->item,
        litem_625->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_625;
        self->head=litem_625;
    }
    else if(    self->len==1    ) {
        litem_626=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value190=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1093, "struct list_item$1char$ph*"))));
        litem_626->prev=self->head;
        litem_626->next=((void*)0);
        __dec_obj26=litem_626->item,
        litem_626->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_626;
        self->head->next=litem_626;
    }
    else {
        litem_627=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value191=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1103, "struct list_item$1char$ph*"))));
        litem_627->prev=self->tail;
        litem_627->next=((void*)0);
        __dec_obj27=litem_627->item,
        litem_627->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_627;
        self->tail=litem_627;
    }
    self->len++;
    __result_obj__210 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__210;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct list$1char$ph* __result_obj__209;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct list$1char$ph* result_622;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct buffer* str_623;
int i_624;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1char$ph* __result_obj__211;
    if(    self==((void*)0)    ) {
        __result_obj__209 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value184=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4118, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__209;
    }
    result_622=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4121, "struct list$1char$ph*"))));
    str_623=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4123, "struct buffer*"))));
    for(    i_624=0    ;    i_624<charp_length(self)    ;    i_624++    ){
        if(        self[i_624]==c        ) {
            list$1char$ph_push_back(result_622,(char*)come_increment_ref_count(__builtin_string(str_623->buf)));
            buffer_reset(str_623);
        }
        else {
            buffer_append_char(str_623,self[i_624]);
        }
    }
    if(    buffer_length(str_623)!=0    ) {
        list$1char$ph_push_back(result_622,(char*)come_increment_ref_count(__builtin_string(str_623->buf)));
    }
    __result_obj__211 = (struct list$1char$ph*)come_increment_ref_count(result_622);
    come_call_finalizer(list$1char$ph$p_finalize, result_622, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_623, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__211;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value194 = (void*)0;
char* __result_obj__212;
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value194=xsprintf(msg,self))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__212;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value195 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value195=xsprintf(msg,self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__213;
}

char* charp_printable(char* str){
int len_628;
void* __right_value196 = (void*)0;
char* result_629;
int n_630;
int i_631;
char c_632;
char* __result_obj__214;
    len_628=charp_length(str);
    result_629=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_628*2+1)), "/usr/local/include/comelang.h", 4155, "char*"));
    n_630=0;
    for(    i_631=0    ;    i_631<len_628    ;    i_631++    ){
        c_632=str[i_631];
        if(        (c_632>=0&&c_632<32)||c_632==127        ) {
            result_629[n_630++]=94;
            result_629[n_630++]=c_632+65-1;
        }
        else {
            result_629[n_630++]=c_632;
        }
    }
    result_629[n_630]=0;
    __result_obj__214 = (char*)come_increment_ref_count(result_629);
    (result_629 = come_decrement_ref_count(result_629, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value197 = (void*)0;
char* __result_obj__215;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* result_633;
char* p_634;
char* p2_635;
void* __right_value200 = (void*)0;
char* __result_obj__216;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__215;
    }
    result_633=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4183, "struct buffer*"))));
    p_634=self;
    while(    (_Bool)1    ) {
        p2_635=strstr(p_634,str);
        if(        p2_635==((void*)0)        ) {
            p2_635=p_634;
            while(            *p2_635            ) {
                p2_635++;
            }
            buffer_append(result_633,p_634,p2_635-p_634);
            break;
        }
        buffer_append(result_633,p_634,p2_635-p_634);
        buffer_append_str(result_633,replace);
        p_634=p2_635+strlen(str);
    }
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value200=buffer_to_string(result_633))));
    come_call_finalizer(buffer_finalize, result_633, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__216;
}

char* xbasename(char* path){
void* __right_value201 = (void*)0;
char* __result_obj__217;
char* p_636;
void* __right_value202 = (void*)0;
char* __result_obj__218;
void* __right_value203 = (void*)0;
char* __result_obj__219;
void* __right_value204 = (void*)0;
char* __result_obj__220;
    if(    path==((void*)0)    ) {
        __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string(""))));
        (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__217;
    }
    p_636=path+strlen(path);
    while(    p_636>=path    ) {
        if(        *p_636==47        ) {
            break;
        }
        else {
            p_636--;
        }
    }
    if(    p_636<path    ) {
        __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(path))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__218;
    }
    else {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(p_636+1))));
        (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__219;
    }
    __result_obj__220 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string(""))));
    (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__220;
}

char* xnoextname(char* path){
void* __right_value205 = (void*)0;
char* __result_obj__221;
void* __right_value206 = (void*)0;
char* path2_637;
char* p_638;
void* __right_value207 = (void*)0;
char* __result_obj__222;
void* __right_value208 = (void*)0;
char* __result_obj__223;
void* __right_value209 = (void*)0;
char* __result_obj__224;
    if(    path==((void*)0)    ) {
        __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value205=__builtin_string(""))));
        (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__221;
    }
    path2_637=(char*)come_increment_ref_count(xbasename(path));
    p_638=path2_637+strlen(path2_637);
    while(    p_638>=path2_637    ) {
        if(        *p_638==46        ) {
            break;
        }
        else {
            p_638--;
        }
    }
    if(    p_638<path2_637    ) {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(path2_637))));
        (path2_637 = come_decrement_ref_count(path2_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
    else {
        __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value208=charp_substring(path2_637,0,p_638-path2_637))));
        (path2_637 = come_decrement_ref_count(path2_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__223;
    }
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(""))));
    (path2_637 = come_decrement_ref_count(path2_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* xextname(char* path){
void* __right_value210 = (void*)0;
char* __result_obj__225;
char* p_639;
void* __right_value211 = (void*)0;
char* __result_obj__226;
void* __right_value212 = (void*)0;
char* __result_obj__227;
void* __right_value213 = (void*)0;
char* __result_obj__228;
    if(    path==((void*)0)    ) {
        __result_obj__225 = (char*)come_increment_ref_count(((char*)(__right_value210=__builtin_string(""))));
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__225;
    }
    p_639=path+strlen(path);
    while(    p_639>=path    ) {
        if(        *p_639==46        ) {
            break;
        }
        else {
            p_639--;
        }
    }
    if(    p_639<path    ) {
        __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(path))));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__226;
    }
    else {
        __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(p_639+1))));
        (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__227;
    }
    __result_obj__228 = (char*)come_increment_ref_count(((char*)(__right_value213=__builtin_string(""))));
    (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__228;
}

char* bool_to_string(_Bool self){
void* __right_value214 = (void*)0;
char* __result_obj__229;
void* __right_value215 = (void*)0;
char* __result_obj__230;
    if(    self    ) {
        __result_obj__229 = (char*)come_increment_ref_count(((char*)(__right_value214=__builtin_string("true"))));
        (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__229;
    }
    else {
        __result_obj__230 = (char*)come_increment_ref_count(((char*)(__right_value215=__builtin_string("false"))));
        (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__230;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value216 = (void*)0;
char* __result_obj__231;
void* __right_value217 = (void*)0;
char* __result_obj__232;
    if(    self    ) {
        __result_obj__231 = (char*)come_increment_ref_count(((char*)(__right_value216=__builtin_string("true"))));
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__231;
    }
    else {
        __result_obj__232 = (char*)come_increment_ref_count(((char*)(__right_value217=__builtin_string("false"))));
        (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__232;
    }
}

char* char_to_string(char self){
void* __right_value218 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value218=xsprintf("%c",self))));
    (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__233;
}

char* short_to_string(short self){
void* __right_value219 = (void*)0;
char* __result_obj__234;
    __result_obj__234 = (char*)come_increment_ref_count(((char*)(__right_value219=xsprintf("%d",self))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__234;
}

char* int_to_string(int self){
void* __right_value220 = (void*)0;
char* __result_obj__235;
    __result_obj__235 = (char*)come_increment_ref_count(((char*)(__right_value220=xsprintf("%d",self))));
    (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__235;
}

char* long_to_string(long self){
void* __right_value221 = (void*)0;
char* __result_obj__236;
    __result_obj__236 = (char*)come_increment_ref_count(((char*)(__right_value221=xsprintf("%ld",self))));
    (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__236 = come_decrement_ref_count(__result_obj__236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__236;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value222 = (void*)0;
char* __result_obj__237;
    __result_obj__237 = (char*)come_increment_ref_count(((char*)(__right_value222=xsprintf("%ld",self))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__237;
}

char* float_to_string(float self){
void* __right_value223 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value223=xsprintf("%f",self))));
    (__right_value223 = come_decrement_ref_count(__right_value223, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__238;
}

char* double_to_string(double self){
void* __right_value224 = (void*)0;
char* __result_obj__239;
    __result_obj__239 = (char*)come_increment_ref_count(((char*)(__right_value224=xsprintf("%lf",self))));
    (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__239;
}

char* string_to_string(char* self){
void* __right_value225 = (void*)0;
char* __result_obj__240;
void* __right_value226 = (void*)0;
char* __result_obj__241;
    if(    self==((void*)0)    ) {
        __result_obj__240 = (char*)come_increment_ref_count(((char*)(__right_value225=__builtin_string(""))));
        (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__240 = come_decrement_ref_count(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__240;
    }
    __result_obj__241 = (char*)come_increment_ref_count(((char*)(__right_value226=__builtin_string(self))));
    (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__241;
}

char* charp_to_string(char* self){
void* __right_value227 = (void*)0;
char* __result_obj__242;
void* __right_value228 = (void*)0;
char* __result_obj__243;
    if(    self==((void*)0)    ) {
        __result_obj__242 = (char*)come_increment_ref_count(((char*)(__right_value227=__builtin_string(""))));
        (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__242;
    }
    __result_obj__243 = (char*)come_increment_ref_count(((char*)(__right_value228=__builtin_string(self))));
    (__right_value228 = come_decrement_ref_count(__right_value228, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value229 = (void*)0;
char* __result_obj__244;
void* __right_value230 = (void*)0;
char* __result_obj__245;
    if(    self==((void*)0)    ) {
        __result_obj__244 = (char*)come_increment_ref_count(((char*)(__right_value229=__builtin_string(""))));
        (__right_value229 = come_decrement_ref_count(__right_value229, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__244;
    }
    puts(self);
    __result_obj__245 = (char*)come_increment_ref_count(((char*)(__right_value230=__builtin_string(self))));
    (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__245;
}

char* charp_print(char* self){
void* __right_value231 = (void*)0;
char* __result_obj__246;
void* __right_value232 = (void*)0;
char* __result_obj__247;
    if(    self==((void*)0)    ) {
        __result_obj__246 = (char*)come_increment_ref_count(((char*)(__right_value231=__builtin_string(""))));
        (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__246 = come_decrement_ref_count(__result_obj__246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__246;
    }
    printf("%s",self);
    __result_obj__247 = (char*)come_increment_ref_count(((char*)(__right_value232=__builtin_string(self))));
    (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__247;
}

char* charp_printf(char* self, ...){
void* __right_value233 = (void*)0;
char* __result_obj__248;
char* msg2_640;
va_list args_641;
void* __right_value234 = (void*)0;
char* __result_obj__249;
msg2_640 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(""))));
        (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__248;
    }
    __builtin_va_start(args_641,self);
    vasprintf(&msg2_640,self,args_641);
    __builtin_va_end(args_641);
    printf("%s",msg2_640);
    free(msg2_640);
    __result_obj__249 = (char*)come_increment_ref_count(((char*)(__right_value234=__builtin_string(self))));
    (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__249 = come_decrement_ref_count(__result_obj__249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__249;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_642;
    for(    i_642=0    ;    i_642<self    ;    i_642++    ){
        block(parent,i_642);
    }
}

