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
  0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x03, 0x27, 0x44, 0xfe,
  0x93, 0x07, 0x40, 0x03, 0xb3, 0x07, 0xf7, 0x02, 0xc1, 0x17, 0xa2, 0x97,
  0x03, 0x27, 0x04, 0xfe, 0x23, 0xa0, 0xe7, 0xf0, 0x83, 0x27, 0x04, 0xfe,
  0x83, 0x26, 0x44, 0xfe, 0x13, 0x97, 0x47, 0x00, 0x93, 0x07, 0x40, 0x03,
  0xb3, 0x87, 0xf6, 0x02, 0xba, 0x97, 0xc1, 0x17, 0x33, 0x87, 0x87, 0x00,
  0x83, 0x37, 0x84, 0xfe, 0xba, 0x97, 0x23, 0x88, 0x07, 0xec, 0x83, 0x27,
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
void enter_user(unsigned long  int anonymous_var_nameX358, unsigned long  int anonymous_var_nameX359, unsigned long  int anonymous_var_nameX360, unsigned long  long anonymous_var_nameX361);
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

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

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
unsigned long  long x_354;
memset(&x_354, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_354));
    return x_354;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_355;
memset(&sp_val_355, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_355): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_355;
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
    result_54=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 803, "struct proc*"));
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
        result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 813, "struct map$2void$ptuple2$2void$plong$$ph*"))));
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
        litem_155=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value32=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1proc$ph*"))));
        litem_155->prev=((void*)0);
        litem_155->next=((void*)0);
        __dec_obj5=litem_155->item,
        litem_155->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_155;
        self->head=litem_155;
    }
    else if(    self->len==1    ) {
        litem_156=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value33=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1proc$ph*"))));
        litem_156->prev=self->head;
        litem_156->next=((void*)0);
        __dec_obj6=litem_156->item,
        litem_156->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_156;
        self->head->next=litem_156;
    }
    else {
        litem_157=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value34=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1proc$ph*"))));
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
        litem_160=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value35=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1015, "struct list_item$1proc$ph*"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        __dec_obj9=litem_160->item,
        litem_160->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1    ) {
        litem_161=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value36=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1025, "struct list_item$1proc$ph*"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        __dec_obj10=litem_161->item,
        litem_161->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value37=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1035, "struct list_item$1proc$ph*"))));
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
        panic("copyinstr1abc");
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
        panic("write(X)");
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
unsigned long  long user_va_279;
void* __right_value48 = (void*)0;
struct proc* p_280;
char* path_281;
unsigned long  long user_argv_284;
int argc_285;
unsigned long  int uargp_286;
int fd_288;
int ret_289;
void* __right_value49 = (void*)0;
struct proc* new_p_290;
unsigned long  long sp_291;
int i_293;
unsigned long  int len_294;
unsigned long  long argv_base_295;
int i_296;
unsigned long  long ptr_297;
unsigned long  long nullp_298;
memset(&uargp_286, 0, sizeof(unsigned long  int));
    trapframe_275=(struct context_t*)TRAPFRAME;
    arg0_276=trapframe_275->a0;
    arg1_277=trapframe_275->a1;
    char kernel_buf_278[256];
    memset(&kernel_buf_278, 0, sizeof(char)    *(256)    );
    user_va_279=arg0_276;
    p_280=((struct proc*)(__right_value48=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyinstr(p_280->pagetable,kernel_buf_278,user_va_279,256)<0    ) {
        trapframe_275->a0=-1;
        return -1;
    }
    path_281=kernel_buf_278;
    char argv_storage_282[32][32];
    memset(&argv_storage_282, 0, sizeof(char)    *(32)    *(32)    );
    char* kargv_283[32];
    memset(&kargv_283, 0, sizeof(char*)    *(32)    );
    user_argv_284=arg1_277;
    argc_285=0;
    for(    argc_285=0    ;    argc_285<32    ;    argc_285++    ){
        if(        copyin(p_280->pagetable,(char*)&uargp_286,user_argv_284+argc_285*sizeof(unsigned long  int),sizeof(unsigned long  int))<0        ) {
            trapframe_275->a0=-1;
            return -1;
        }
        if(        uargp_286==0        ) {
            break;
        }
        if(        copyinstr(p_280->pagetable,argv_storage_282[argc_285],uargp_286,sizeof(argv_storage_282[0]))<0        ) {
            trapframe_275->a0=-1;
            return -1;
        }
        kargv_283[argc_285]=argv_storage_282[argc_285];
    }
    kargv_283[argc_285]=((void*)0);
    char elf_buf_287[4096*4];
    memset(&elf_buf_287, 0, sizeof(char)    *(4096*4)    );
    fd_288=fs_open(path_281);
    if(    fd_288<0    ) {
        trapframe_275->a0=-1;
        return -1;
    }
    ret_289=fs_read(fd_288,elf_buf_287,4096*4);
    fs_close(fd_288);
    if(    ret_289<=0    ) {
        trapframe_275->a0=-1;
        return -1;
    }
    alloc_prog(elf_buf_287,0,1);
    new_p_290=((struct proc*)(__right_value49=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_291=new_p_290->context.sp;
    unsigned long  long str_addrs_292[32];
    memset(&str_addrs_292, 0, sizeof(unsigned long  long)    *(32)    );
    for(    i_293=argc_285-1    ;    i_293>=0    ;    i_293--    ){
        len_294=strlen(kargv_283[i_293])+1;
        sp_291-=len_294;
        if(        copyout(new_p_290->pagetable,sp_291,kargv_283[i_293],len_294)<0        ) {
            panic("execv: copyout string failed");
        }
        str_addrs_292[i_293]=sp_291;
    }
    sp_291-=(argc_285+1)*sizeof(unsigned long  long);
    sp_291&=~7;
    argv_base_295=sp_291;
    for(    i_296=0    ;    i_296<argc_285    ;    i_296++    ){
        ptr_297=str_addrs_292[i_296];
        if(        copyout(new_p_290->pagetable,argv_base_295+i_296*sizeof(unsigned long  long),&ptr_297,sizeof(unsigned long  long))<0        ) {
            panic("execv: copyout ptr failed");
        }
    }
    nullp_298=0;
    if(    copyout(new_p_290->pagetable,argv_base_295+argc_285*sizeof(unsigned long  long),&nullp_298,sizeof(unsigned long  long))<0    ) {
        panic("execv: copyout nullp failed");
    }
    trapframe_275->a0=argc_285;
    trapframe_275->a1=argv_base_295;
    trapframe_275->sp=sp_291;
    trapframe_275->mepc=new_p_290->context.mepc-4;
    user_sp=sp_291;
    return argc_285;
}

int Sys_dup2(){
struct context_t* trapframe_299;
unsigned long  int arg0_300;
unsigned long  int arg1_301;
unsigned long  int arg2_302;
unsigned long  int arg3_303;
unsigned long  int arg4_304;
unsigned long  int arg5_305;
unsigned long  int arg6_306;
unsigned long  int arg_syscall_no_307;
int oldfd_308;
int newfd_309;
    trapframe_299=(struct context_t*)TRAPFRAME;
    arg0_300=trapframe_299->a0;
    arg1_301=trapframe_299->a1;
    arg2_302=trapframe_299->a2;
    arg3_303=trapframe_299->a3;
    arg4_304=trapframe_299->a4;
    arg5_305=trapframe_299->a5;
    arg6_306=trapframe_299->a6;
    arg_syscall_no_307=trapframe_299->a7;
    oldfd_308=arg0_300;
    newfd_309=arg1_301;
    fs_dup2(oldfd_308,newfd_309);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_310;
unsigned long  int arg0_311;
unsigned long  int arg1_312;
unsigned long  int arg2_313;
unsigned long  int arg3_314;
unsigned long  int arg4_315;
unsigned long  int arg5_316;
unsigned long  int arg6_317;
unsigned long  int arg_syscall_no_318;
char* kernel_buf_319;
unsigned long  long user_va_320;
int* fd_321;
void* __right_value50 = (void*)0;
struct proc* p_322;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
kernel_buf_319 = (void*)0;
    trapframe_310=(struct context_t*)TRAPFRAME;
    arg0_311=trapframe_310->a0;
    arg1_312=trapframe_310->a1;
    arg2_313=trapframe_310->a2;
    arg3_314=trapframe_310->a3;
    arg4_315=trapframe_310->a4;
    arg5_316=trapframe_310->a5;
    arg6_317=trapframe_310->a6;
    arg_syscall_no_318=trapframe_310->a7;
    user_va_320=arg0_311;
    fd_321=common_kalloc(sizeof(int)*2);
    pipe_open(&fd_321[0],&fd_321[1]);
    p_322=((struct proc*)(__right_value50=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_322->pagetable,(unsigned long  long)user_va_320,(char*)fd_321,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    map$2void$ptuple2$2void$plong$$ph_insert(p_322->mapping_values,(void*)user_va_320,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1543, "struct tuple2$2void$plong$")),(void*)fd_321,sizeof(int)*2)));
    return 0;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_323;
unsigned int it_324;
_Bool same_key_exist_325;
void* it2_326;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__71;
    if(    self->len*10>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_323=voidp_get_hash_key(((void*)key))%self->size;
    it_324=hash_323;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_324]        ) {
            if(            voidp_equals(self->keys[it_324],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_324]);
                    (self->keys[it_324] = come_decrement_ref_count(self->keys[it_324], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_324]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_324]);
                    self->keys[it_324]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_324], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_324]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_324]=item;
                }
                break;
            }
            it_324++;
            if(            it_324>=self->size            ) {
                it_324=0;
            }
            else if(            it_324==hash_323            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_324]=(_Bool)1;
            if(            0            ) {
                self->keys[it_324]=key;
            }
            else {
                self->keys[it_324]=key;
            }
            if(            1            ) {
                self->items[it_324]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_324]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_325=(_Bool)0;
    for(    it2_326=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_326=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_326,key)        ) {
            same_key_exist_325=(_Bool)1;
        }
    }
    if(    !same_key_exist_325    ) {
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
struct context_t* trapframe_327;
unsigned long  int arg0_328;
unsigned long  int arg1_329;
unsigned long  int arg2_330;
unsigned long  int arg3_331;
unsigned long  int arg4_332;
unsigned long  int arg5_333;
unsigned long  int arg6_334;
unsigned long  int arg_syscall_no_335;
int fd_336;
unsigned long  long destva_337;
unsigned long  int n_338;
int ret_340;
void* __right_value53 = (void*)0;
struct proc* p_341;
memset(&ret_340, 0, sizeof(int));
    trapframe_327=(struct context_t*)TRAPFRAME;
    arg0_328=trapframe_327->a0;
    arg1_329=trapframe_327->a1;
    arg2_330=trapframe_327->a2;
    arg3_331=trapframe_327->a3;
    arg4_332=trapframe_327->a4;
    arg5_333=trapframe_327->a5;
    arg6_334=trapframe_327->a6;
    arg_syscall_no_335=trapframe_327->a7;
    fd_336=arg0_328;
    destva_337=arg1_329;
    n_338=arg2_330;
    char kernel_buf_339[256];
    memset(&kernel_buf_339, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_336)    ) {
        ret_340=uart_readn(kernel_buf_339,n_338);
    }
    else if(    is_pipe(fd_336)    ) {
        ret_340=piperead(fd_336,kernel_buf_339,n_338);
    }
    else {
        ret_340=fs_read(fd_336,kernel_buf_339,n_338);
        if(        ret_340<0        ) {
            trapframe_327->a0=ret_340;
            return 0;
        }
        kernel_buf_339[ret_340]=0;
    }
    p_341=((struct proc*)(__right_value53=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_341->pagetable,destva_337,kernel_buf_339,ret_340)<0    ) {
        panic("read: copyout failed");
    }
    return ret_340;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_342;
unsigned long  int arg0_343;
unsigned long  int arg1_344;
unsigned long  int arg2_345;
unsigned long  int arg3_346;
unsigned long  int arg4_347;
unsigned long  int arg5_348;
unsigned long  int arg6_349;
unsigned long  int arg_syscall_no_350;
unsigned long  long result_351;
long fd_352;
int ret_353;
    disable_timer_interrupts();
    trapframe_342=(struct context_t*)TRAPFRAME;
    arg0_343=trapframe_342->a0;
    arg1_344=trapframe_342->a1;
    arg2_345=trapframe_342->a2;
    arg3_346=trapframe_342->a3;
    arg4_347=trapframe_342->a4;
    arg5_348=trapframe_342->a5;
    arg6_349=trapframe_342->a6;
    arg_syscall_no_350=trapframe_342->a7;
    result_351=0;
    switch (    arg_syscall_no_350) {
        case 64:
        {
            result_351=Sys_write();
        }
        break;
        case 73:
        {
            result_351=Sys_pipe();
        }
        break;
        case 72:
        {
            result_351=Sys_dup2();
        }
        break;
        case 70:
        {
            result_351=Sys_exit();
        }
        break;
        case 71:
        {
            result_351=Sys_wait();
        }
        break;
        case 66:
        {
            result_351=Sys_open();
        }
        break;
        case 65:
        {
            result_351=Sys_read();
        }
        break;
        case 67:
        {
            fd_352=arg0_343;
            ret_353=fs_close(fd_352);
            result_351=ret_353;
        }
        break;
        case 68:
        {
            result_351=Sys_fork();
        }
        break;
        case 69:
        {
            result_351=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_342->a0=result_351;
    return result_351;
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
struct proc* c_356;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
    c_356=get_current_proc();
    map$2void$ptuple2$2void$plong$$ph_insert(c_356->mapping_values,user_va,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 2504, "struct tuple2$2void$plong$")),pa,(long)size)));
}

void global_init(){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1proc$ph* __dec_obj12;
    __dec_obj12=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2509, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_357;
struct list_item$1proc$ph* prev_it_358;
    it_357=self->head;
    while(    it_357!=((void*)0)    ) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_358, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_359;
void* __right_value59 = (void*)0;
struct proc* p_360;
unsigned long  int usersp_361;
unsigned long  long usersatp_362;
unsigned long  int entry_363;
memset(&fork_flag_359, 0, sizeof(int));
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
    alloc_prog((char*)msh_elf,fork_flag_359=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_360=((struct proc*)(__right_value59=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_361=(unsigned long  long)(p_360->context.sp);
    usersatp_362=((8L<<60)|(((unsigned long  long)p_360->pagetable)>>12));
    entry_363=p_360->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_360;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_363,usersp_361,usersatp_362,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__75;
void* prev_364;
void* __result_obj__76;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__75 = (void*)-1;
        return __result_obj__75;
    }
    prev_364=heap_end;
    heap_end+=incr;
    __result_obj__76 = prev_364;
    return __result_obj__76;
}

void* malloc(unsigned long  int size){
void* __result_obj__77;
struct mem_block* current_365;
struct mem_block* prev_366;
void* __result_obj__78;
struct mem_block* new_mem_367;
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
    current_365=free_list;
    prev_366=((void*)0);
    while(    current_365!=((void*)0)    ) {
        if(        current_365->size>=size        ) {
            if(            prev_366==((void*)0)            ) {
                free_list=current_365->next;
            }
            else {
                prev_366->next=current_365->next;
            }
            __result_obj__78 = (void*)(current_365+1);
            return __result_obj__78;
        }
        prev_366=current_365;
        current_365=current_365->next;
    }
    new_mem_367=(struct mem_block*)sbrk(size);
    if(    new_mem_367==(void*)-1    ) {
        __result_obj__79 = ((void*)0);
        return __result_obj__79;
    }
    new_mem_367->size=size;
    new_mem_367->next=((void*)0);
    __result_obj__80 = (void*)(new_mem_367+1);
    return __result_obj__80;
}

void free(void* ptr){
struct mem_block* block_368;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_368=(struct mem_block*)ptr-1;
    block_368->next=free_list;
    free_list=block_368;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_369;
void* __result_obj__81;
void* ptr_370;
void* __result_obj__82;
    total_size_369=nmemb*size;
    if(    total_size_369==0    ) {
        __result_obj__81 = ((void*)0);
        return __result_obj__81;
    }
    ptr_370=malloc(total_size_369);
    if(    ptr_370!=((void*)0)    ) {
        memset(ptr_370,0,total_size_369);
    }
    __result_obj__82 = ptr_370;
    return __result_obj__82;
}

char* strdup(const char* s){
char* s2_371;
unsigned long  int len_372;
char* p_373;
char* __result_obj__83;
    s2_371=s;
    len_372=strlen(s2_371)+1;
    p_373=malloc(len_372);
    if(    p_373    ) {
        memcpy(p_373,s2_371,len_372);
    }
    __result_obj__83 = p_373;
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
        const char* h_374=haystack;
        const char* n_375=needle;
        while(        *h_374&&*n_375&&(*h_374==*n_375)        ) {
            h_374++;
            n_375++;
        }
        if(        !*n_375        ) {
            __result_obj__85 = (char*)haystack;
            return __result_obj__85;
        }
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_376;
int i_377;
void* __result_obj__87;
    cdst_376=(char*)dst;
    for(    i_377=0    ;    i_377<n    ;    i_377++    ){
        cdst_376[i_377]=c;
    }
    __result_obj__87 = dst;
    return __result_obj__87;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_378;
const unsigned char* s2_379;
memset(&s1_378, 0, sizeof(const unsigned char*));
memset(&s2_379, 0, sizeof(const unsigned char*));
    s1_378=v1;
    s2_379=v2;
    while(    n-->0    ) {
        if(        *s1_378!=*s2_379        ) {
            return *s1_378-*s2_379;
        }
        s1_378++,s2_379++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_380;
char* d_381;
void* __result_obj__88;
void* __result_obj__89;
s_380 = (void*)0;
d_381 = (void*)0;
    if(    n==0    ) {
        __result_obj__88 = dst;
        return __result_obj__88;
    }
    s_380=src;
    d_381=dst;
    if(    s_380<d_381&&s_380+n>d_381    ) {
        s_380+=n;
        d_381+=n;
        while(        n-->0        ) {
            *--d_381=*--s_380;
        }
    }
    else {
        while(        n-->0        ) {
            *d_381++=*s_380++;
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
char* os_382;
char* __result_obj__91;
os_382 = (void*)0;
    os_382=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__91 = os_382;
    return __result_obj__91;
}

int strlen(const char* s){
int n_383;
memset(&n_383, 0, sizeof(int));
    for(    n_383=0    ;    s[n_383]    ;    n_383++    ){
        ;
    }
    return n_383;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_384;
char* __result_obj__92;
    d_384=dest;
    while(    *d_384    ) {
        d_384++;
    }
    while(    n--&&*src    ) {
        *d_384++=*src++;
    }
    *d_384=0;
    __result_obj__92 = dest;
    return __result_obj__92;
}

char* strtok(char* s, const char* delim){
static char* next_385;
char* start_386;
char* p_387;
char* __result_obj__93;
int is_delim_389;
char* __result_obj__94;
int is_delim_391;
char* __result_obj__95;
next_385 = (void*)0;
start_386 = (void*)0;
p_387 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_385=s;
    }
    if(    next_385==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    start_386=next_385;
    while(    *start_386!=0    ) {
        const char* d_388=delim;
        is_delim_389=0;
        while(        *d_388!=0        ) {
            if(            *start_386==*d_388            ) {
                is_delim_389=1;
                break;
            }
            d_388++;
        }
        if(        !is_delim_389        ) {
            break;
        }
        start_386++;
    }
    if(    *start_386==0    ) {
        next_385=((void*)0);
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    p_387=start_386;
    while(    *p_387!=0    ) {
        const char* d_390=delim;
        is_delim_391=0;
        while(        *d_390!=0        ) {
            if(            *p_387==*d_390            ) {
                is_delim_391=1;
                break;
            }
            d_390++;
        }
        if(        is_delim_391        ) {
            break;
        }
        p_387++;
    }
    if(    *p_387==0    ) {
        next_385=((void*)0);
    }
    else {
        *p_387=0;
        next_385=p_387+1;
    }
    __result_obj__95 = start_386;
    return __result_obj__95;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_392;
int i_394;
int negative_395;
char* __result_obj__96;
int digit_396;
char* __result_obj__97;
    p_392=buf;
    char tmp_393[32];
    memset(&tmp_393, 0, sizeof(char)    *(32)    );
    i_394=0;
    negative_395=0;
    if(    base<2||base>16    ) {
        *p_392=0;
        __result_obj__96 = p_392;
        return __result_obj__96;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_395=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_396=val_%base;
        tmp_393[i_394++]=(((digit_396<10))?(48+digit_396):(97+digit_396-10));
        val_/=base;
    } while(    val_    );
    if(    negative_395    ) {
        *p_392++=45;
    }
    while(    i_394--    ) {
        *p_392++=tmp_393[i_394];
    }
    *p_392=0;
    __result_obj__97 = buf;
    return __result_obj__97;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_398;
const char* s_399;
unsigned long  int remaining_401;
s_399 = (void*)0;
    char out2_397[512];
    memset(&out2_397, 0, sizeof(char)    *(512)    );
    p_398=out2_397;
    char buf_400[32];
    memset(&buf_400, 0, sizeof(char)    *(32)    );
    remaining_401=sizeof(out2_397);
    for(    ;    *fmt&&remaining_401>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_398++=*fmt;
            remaining_401--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_400,__builtin_va_arg(ap,int),10,1);
            s_399=buf_400;
            break;
            case 117:
            itoa(buf_400,__builtin_va_arg(ap,unsigned int),10,0);
            s_399=buf_400;
            break;
            case 120:
            itoa(buf_400,__builtin_va_arg(ap,unsigned int),16,0);
            s_399=buf_400;
            break;
            case 115:
            s_399=__builtin_va_arg(ap,const char*);
            if(            !s_399            ) {
                s_399="(null)";
            }
            break;
            case 99:
            buf_400[0]=(char)__builtin_va_arg(ap,int);
            buf_400[1]=0;
            s_399=buf_400;
            break;
            case 112:
            strncpy(buf_400,"0x",32);
            itoa(buf_400+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_399=buf_400;
            break;
            case 37:
            buf_400[0]=37;
            buf_400[1]=0;
            s_399=buf_400;
            break;
            default:
            buf_400[0]=37;
            buf_400[1]=*fmt;
            buf_400[2]=0;
            s_399=buf_400;
            break;
        }
        while(        *s_399&&remaining_401>1        ) {
            *p_398++=*s_399++;
            remaining_401--;
        }
    }
    *p_398=0;
    *out=strdup(out2_397);
    return p_398-out2_397;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_402;
char* p_403;
const char* s_404;
unsigned long  int remaining_406;
memset(&ap_402, 0, sizeof(va_list));
s_404 = (void*)0;
    __builtin_va_start(ap_402,fmt);
    p_403=out;
    char buf_405[32];
    memset(&buf_405, 0, sizeof(char)    *(32)    );
    remaining_406=out_size;
    if(    remaining_406==0    ) {
        __builtin_va_end(ap_402);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_406>1            ) {
                *p_403++=*fmt;
                remaining_406--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_404=__builtin_va_arg(ap_402,const char*);
            while(            *s_404&&remaining_406>1            ) {
                *p_403++=*s_404++;
                remaining_406--;
            }
            break;
            case 100:
            itoa(buf_405,__builtin_va_arg(ap_402,int),10,0);
            s_404=buf_405;
            while(            *s_404&&remaining_406>1            ) {
                *p_403++=*s_404++;
                remaining_406--;
            }
            break;
            case 120:
            itoa(buf_405,(unsigned int)__builtin_va_arg(ap_402,int),16,1);
            s_404=buf_405;
            while(            *s_404&&remaining_406>1            ) {
                *p_403++=*s_404++;
                remaining_406--;
            }
            break;
            case 99:
            if(            remaining_406>1            ) {
                *p_403++=(char)__builtin_va_arg(ap_402,int);
                remaining_406--;
            }
            break;
            case 112:
            s_404="0x";
            while(            *s_404&&remaining_406>1            ) {
                *p_403++=*s_404++;
                remaining_406--;
            }
            itoa(buf_405,(long)__builtin_va_arg(ap_402,void*),16,1);
            s_404=buf_405;
            while(            *s_404&&remaining_406>1            ) {
                *p_403++=*s_404++;
                remaining_406--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_405,__builtin_va_arg(ap_402,long),10,1);
                s_404=buf_405;
                while(                *s_404&&remaining_406>1                ) {
                    *p_403++=*s_404++;
                    remaining_406--;
                }
            }
            break;
            default:
            if(            remaining_406>1            ) {
                *p_403++=37;
                remaining_406--;
                if(                remaining_406>1                ) {
                    *p_403++=*fmt;
                    remaining_406--;
                }
            }
            break;
        }
    }
    *p_403=0;
    __builtin_va_end(ap_402);
    return p_403-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_407;
char* p_408;
const char* s_409;
unsigned long  int remaining_411;
memset(&ap_407, 0, sizeof(va_list));
s_409 = (void*)0;
    __builtin_va_start(ap_407,fmt);
    p_408=out;
    char buf_410[32];
    memset(&buf_410, 0, sizeof(char)    *(32)    );
    remaining_411=out_size;
    if(    remaining_411==0    ) {
        __builtin_va_end(ap_407);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_411>1            ) {
                *p_408++=*fmt;
                remaining_411--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_409=__builtin_va_arg(ap_407,const char*);
            while(            *s_409&&remaining_411>1            ) {
                *p_408++=*s_409++;
                remaining_411--;
            }
            break;
            case 100:
            itoa(buf_410,__builtin_va_arg(ap_407,int),10,0);
            s_409=buf_410;
            while(            *s_409&&remaining_411>1            ) {
                *p_408++=*s_409++;
                remaining_411--;
            }
            break;
            case 120:
            itoa(buf_410,(unsigned int)__builtin_va_arg(ap_407,int),16,1);
            s_409=buf_410;
            while(            *s_409&&remaining_411>1            ) {
                *p_408++=*s_409++;
                remaining_411--;
            }
            break;
            case 99:
            if(            remaining_411>1            ) {
                *p_408++=(char)__builtin_va_arg(ap_407,int);
                remaining_411--;
            }
            break;
            case 112:
            s_409="0x";
            while(            *s_409&&remaining_411>1            ) {
                *p_408++=*s_409++;
                remaining_411--;
            }
            itoa(buf_410,(long)__builtin_va_arg(ap_407,void*),16,1);
            s_409=buf_410;
            while(            *s_409&&remaining_411>1            ) {
                *p_408++=*s_409++;
                remaining_411--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_410,__builtin_va_arg(ap_407,long),10,1);
                s_409=buf_410;
                while(                *s_409&&remaining_411>1                ) {
                    *p_408++=*s_409++;
                    remaining_411--;
                }
            }
            break;
            default:
            if(            remaining_411>1            ) {
                *p_408++=37;
                remaining_411--;
                if(                remaining_411>1                ) {
                    *p_408++=*fmt;
                    remaining_411--;
                }
            }
            break;
        }
    }
    *p_408=0;
    __builtin_va_end(ap_407);
    return p_408-out;
}

void printint(int val_, int base, int sign){
int i_413;
int negative_414;
unsigned int uval_415;
int digit_416;
memset(&uval_415, 0, sizeof(unsigned int));
    char buf_412[33];
    memset(&buf_412, 0, sizeof(char)    *(33)    );
    i_413=0;
    negative_414=0;
    if(    sign&&val_<0    ) {
        negative_414=1;
        uval_415=-val_;
    }
    else {
        uval_415=(unsigned int)val_;
    }
    if(    uval_415==0    ) {
        putchar(48);
        return;
    }
    while(    uval_415>0    ) {
        digit_416=uval_415%base;
        buf_412[i_413++]=((digit_416<10)?(48+digit_416):(97+(digit_416-10)));
        uval_415/=base;
    }
    if(    negative_414    ) {
        putchar(45);
    }
    while(    --i_413>=0    ) {
        putchar(buf_412[i_413]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_418;
int negative_419;
int digit_420;
    char buf_417[65];
    memset(&buf_417, 0, sizeof(char)    *(65)    );
    i_418=0;
    negative_419=0;
    if(    sign&&(long)val_<0    ) {
        negative_419=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_420=val_%base;
        buf_417[i_418++]=((digit_420<10)?(48+digit_420):(97+(digit_420-10)));
        val_/=base;
    }
    if(    negative_419    ) {
        putchar(45);
    }
    while(    --i_418>=0    ) {
        putchar(buf_417[i_418]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_422;
int negative_423;
int digit_424;
    char buf_421[65];
    memset(&buf_421, 0, sizeof(char)    *(65)    );
    i_422=0;
    negative_423=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_423=1;
        val_=-(long  long)val_;
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

int printf(const char* fmt, ...){
va_list ap_425;
const char* p_426;
int lcount_427;
unsigned long  int val__428;
unsigned long  long val__429;
long val__430;
long long val__431;
int i_432;
int val__433;
unsigned int val__434;
unsigned long  int val__435;
char c_437;
memset(&ap_425, 0, sizeof(va_list));
p_426 = (void*)0;
    __builtin_va_start(ap_425,fmt);
    for(    p_426=fmt    ;    *p_426    ;    p_426++    ){
        if(        *p_426!=37        ) {
            putchar(*p_426);
            continue;
        }
        p_426++;
        if(        *p_426==108        ) {
            lcount_427=1;
            if(            *(p_426+1)==108            ) {
                lcount_427=2;
                p_426++;
            }
            p_426++;
            switch (            *p_426) {
                case 120:
                {
                    if(                    lcount_427==1                    ) {
                        val__428=__builtin_va_arg(ap_425,unsigned long  int);
                        printlong(val__428,16,0);
                    }
                    else {
                        val__429=__builtin_va_arg(ap_425,unsigned long  long);
                        printlonglong(val__429,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_427==1                    ) {
                        val__430=__builtin_va_arg(ap_425,long);
                        printlong(val__430,10,1);
                    }
                    else {
                        val__431=__builtin_va_arg(ap_425,long  long);
                        printlonglong(val__431,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_432=0                    ;                    i_432<lcount_427                    ;                    i_432++                    ){
                        putchar(108);
                    }
                    putchar(*p_426);
                    break;
                }
            }
        }
        else {
            switch (            *p_426) {
                case 100:
                {
                    val__433=__builtin_va_arg(ap_425,int);
                    printint(val__433,10,1);
                    break;
                }
                case 120:
                {
                    val__434=__builtin_va_arg(ap_425,unsigned int);
                    printint(val__434,16,0);
                    break;
                }
                case 112:
                {
                    val__435=(unsigned long  int)__builtin_va_arg(ap_425,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__435,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_436=__builtin_va_arg(ap_425,const char*);
                    if(                    !s_436                    ) {
                        s_436="(null)";
                    }
                    while(                    *s_436                    ) {
                        putchar(*s_436++);
                    }
                    break;
                }
                case 99:
                {
                    c_437=(char)__builtin_va_arg(ap_425,int);
                    putchar(c_437);
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
                    putchar(*p_426);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_425);
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
struct buffer* buf_438;
int i_439;
void* __right_value62 = (void*)0;
    buf_438=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_438,"%s %d\n",sname,sline);
    for(    i_439=gNumComeStackFrame-2    ;    i_439>=0    ;    i_439--    ){
        buffer_append_format(buf_438,"%s %d #%d\n",gComeStackFrameSName[i_439],gComeStackFrameSLine[i_439],gComeStackFrameID[i_439]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value62=buffer_to_string(buf_438))));
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_440;
    for(    i_440=gNumComeStackFrame-1    ;    i_440>=0    ;    i_440--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_440],gComeStackFrameSLine[i_440],gComeStackFrameID[i_440]);
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

void come_heap_init(int come_malloc, int come_debug, int come_gc){
}

void come_heap_final(){
}

void* alloc_from_pages(unsigned long  int size){
void* result_441;
void* __result_obj__99;
    result_441=((void*)0);
    size=(size+7&~7);
    result_441=calloc(1,size);
    __result_obj__99 = result_441;
    return __result_obj__99;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_442;
struct sMemHeader* prev_it_443;
struct sMemHeader* next_it_444;
unsigned long  int size_445;
struct sMemHeaderTiny* it_446;
struct sMemHeaderTiny* prev_it_447;
struct sMemHeaderTiny* next_it_448;
unsigned long  int size_449;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_442=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_442->allocated!=177783            ) {
                return;
            }
            it_442->allocated=0;
            prev_it_443=it_442->prev;
            next_it_444=it_442->next;
            if(            gAllocMem==it_442            ) {
                gAllocMem=next_it_444;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_443                ) {
                    prev_it_443->next=next_it_444;
                }
                if(                next_it_444                ) {
                    next_it_444->prev=prev_it_443;
                }
            }
            size_445=it_442->size;
            free(it_442);
            gNumFree++;
        }
        else {
            it_446=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_446->allocated!=177783            ) {
                return;
            }
            it_446->allocated=0;
            prev_it_447=it_446->prev;
            next_it_448=it_446->next;
            if(            gAllocMem==it_446            ) {
                gAllocMem=(struct sMemHeader*)next_it_448;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_447                ) {
                    prev_it_447->next=next_it_448;
                }
                if(                next_it_448                ) {
                    next_it_448->prev=prev_it_447;
                }
            }
            size_449=it_446->size;
            free(it_446);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_450;
struct sMemHeader* it_451;
int i_452;
int i_453;
void* __result_obj__100;
void* result_454;
struct sMemHeaderTiny* it_455;
void* __result_obj__101;
memset(&i_452, 0, sizeof(int));
memset(&i_453, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_450=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_451=result_450;
        it_451->allocated=177783;
        it_451->size=size+sizeof(struct sMemHeader);
        it_451->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_452=0            ;            i_452<gNumComeStackFrame            ;            i_452++            ){
                it_451->sname[i_452]=gComeStackFrameSName[i_452];
                it_451->sline[i_452]=gComeStackFrameSLine[i_452];
                it_451->id[i_452]=gComeStackFrameID[i_452];
            }
        }
        else {
            for(            i_453=0            ;            i_453<16            ;            i_453++            ){
                it_451->sname[i_453]=gComeStackFrameSName[gNumComeStackFrame-1-i_453];
                it_451->sline[i_453]=gComeStackFrameSLine[gNumComeStackFrame-1-i_453];
                it_451->id[i_453]=gComeStackFrameID[gNumComeStackFrame-1-i_453];
            }
        }
        come_pop_stackframe_v2();
        it_451->next=gAllocMem;
        it_451->prev=((void*)0);
        it_451->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_451;
        }
        gAllocMem=it_451;
        gNumAlloc++;
        __result_obj__100 = (char*)result_450+sizeof(struct sMemHeader);
        return __result_obj__100;
    }
    else {
        result_454=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_455=result_454;
        it_455->allocated=177783;
        it_455->class_name=class_name;
        it_455->sname=sname;
        it_455->sline=sline;
        it_455->size=size+sizeof(struct sMemHeaderTiny);
        it_455->free_next=((void*)0);
        it_455->next=(struct sMemHeaderTiny*)gAllocMem;
        it_455->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_455;
        }
        gAllocMem=(struct sMemHeader*)it_455;
        gNumAlloc++;
        __result_obj__101 = (char*)result_454+sizeof(struct sMemHeaderTiny);
        return __result_obj__101;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_456;
char* __result_obj__102;
struct sMemHeaderTiny* it_457;
char* __result_obj__103;
    if(    gComeDebugLib    ) {
        it_456=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_456->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_456);
            exit(2);
        }
        __result_obj__102 = it_456->class_name;
        return __result_obj__102;
    }
    else {
        it_457=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_457->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_457);
            exit(2);
        }
        __result_obj__103 = it_457->class_name;
        return __result_obj__103;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_458;
int i_459;
struct sMemHeaderTiny* it_460;
    if(    gComeDebugLib    ) {
        it_458=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_458->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_458->class_name        ) {
            printf("(%s): ",it_458->class_name);
        }
        for(        i_459=0        ;        i_459<16        ;        i_459++        ){
            if(            it_458->sname[i_459]            ) {
                printf("%s %d #%d, ",it_458->sname[i_459],it_458->sline[i_459],it_458->id[i_459]);
            }
        }
        puts("");
    }
    else {
        it_460=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_460->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_460->class_name,it_460->sname,it_460->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_461;
unsigned long  int* ref_count_462;
unsigned long  int* size2_463;
void* __result_obj__104;
    mem_461=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_462=(unsigned long  int*)mem_461;
    *ref_count_462=0;
    size2_463=(unsigned long  int*)(mem_461+sizeof(unsigned long  int));
    *size2_463=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__104 = mem_461+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__104;
}

void come_free(void* mem){
unsigned long  int* ref_count_464;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_464=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_464);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__105;
char* mem_465;
unsigned long  int* size_p_466;
unsigned long  int size_467;
void* result_468;
void* __result_obj__106;
    if(    !block    ) {
        __result_obj__105 = ((void*)0);
        return __result_obj__105;
    }
    mem_465=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_466=(unsigned long  int*)(mem_465+sizeof(unsigned long  int));
    size_467=*size_p_466-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_468=come_calloc_v2(1,size_467,sname,sline,class_name);
    memcpy(result_468,block,size_467);
    __result_obj__106 = result_468;
    return __result_obj__106;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__107;
unsigned long  int* ref_count_469;
void* __result_obj__108;
    if(    mem==((void*)0)    ) {
        __result_obj__107 = mem;
        return __result_obj__107;
    }
    ref_count_469=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_469)++;
    __result_obj__108 = mem;
    return __result_obj__108;
}

void* come_print_ref_count(void* mem){
void* __result_obj__109;
unsigned long  int* ref_count_470;
void* __result_obj__110;
    if(    mem==((void*)0)    ) {
        __result_obj__109 = mem;
        return __result_obj__109;
    }
    ref_count_470=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_470);
    __result_obj__110 = mem;
    return __result_obj__110;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_471;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_471=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_471;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__111;
void* __result_obj__112;
unsigned long  int* ref_count_472;
unsigned long  int count_473;
void (*finalizer_474)(void*);
void* __result_obj__113;
void* __result_obj__114;
memset(&finalizer_474, 0, sizeof(void (*)(void*)));
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
    ref_count_472=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_472)--;
    }
    count_473=*ref_count_472;
    if(    !no_free&&count_473<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_474=protocol_fun;
            finalizer_474(protocol_obj);
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
void (*finalizer_475)(void*);
void (*finalizer_476)(void*);
void (*finalizer_477)(void*);
unsigned long  int* ref_count_478;
unsigned long  int count_479;
void (*finalizer_480)(void*);
void (*finalizer_481)(void*);
void (*finalizer_482)(void*);
memset(&finalizer_475, 0, sizeof(void (*)(void*)));
memset(&finalizer_476, 0, sizeof(void (*)(void*)));
memset(&finalizer_477, 0, sizeof(void (*)(void*)));
memset(&finalizer_480, 0, sizeof(void (*)(void*)));
memset(&finalizer_481, 0, sizeof(void (*)(void*)));
memset(&finalizer_482, 0, sizeof(void (*)(void*)));
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
                finalizer_475=protocol_fun;
                finalizer_475(protocol_obj);
            }
            finalizer_476=fun;
            finalizer_476(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_477=protocol_fun;
                finalizer_477(protocol_obj);
            }
        }
    }
    else {
        ref_count_478=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_478)--;
        }
        count_479=*ref_count_478;
        if(        !no_free&&count_479<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_480=protocol_fun;
                        finalizer_480(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_481=fun;
                        finalizer_481(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_482=protocol_fun;
                        finalizer_482(protocol_obj);
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
int len_483;
void* __right_value64 = (void*)0;
char* result_484;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_483=strlen(str)+1;
    result_484=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_483)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_484,str,len_483);
    __result_obj__116 = (char*)come_increment_ref_count(result_484);
    (result_484 = come_decrement_ref_count(result_484, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value67 = (void*)0;
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
void* __right_value68 = (void*)0;
struct buffer* result_485;
void* __right_value69 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__121;
    }
    result_485=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2915, "struct buffer*"));
    result_485->size=self->size;
    __dec_obj15=result_485->buf,
    result_485->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2918, "char*"));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_485->len=self->len;
    memcpy(result_485->buf,self->buf,self->len);
    __result_obj__122 = (struct buffer*)come_increment_ref_count(result_485);
    come_call_finalizer(buffer_finalize, result_485, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_486;
int old_len_487;
int new_size_488;
void* __right_value73 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__125;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__124 = self;
        return __result_obj__124;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_486=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2966, "char*"));
        memcpy(old_buf_486,self->buf,self->size);
        old_len_487=self->len;
        new_size_488=(self->size+size+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_488)), "/usr/local/include/comelang.h", 2970, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_486,old_len_487);
        self->buf[old_len_487]=0;
        self->size=new_size_488;
        (old_buf_486 = come_decrement_ref_count(old_buf_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_489;
int old_len_490;
int new_size_491;
void* __right_value75 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__127;
    if(    self==((void*)0)    ) {
        __result_obj__126 = ((void*)0);
        return __result_obj__126;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_489=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2989, "char*"));
        old_len_490=self->len;
        new_size_491=(self->size+10+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_491)), "/usr/local/include/comelang.h", 2993, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_489,old_len_490);
        self->buf[old_len_490]=0;
        self->size=new_size_491;
        (old_buf_489 = come_decrement_ref_count(old_buf_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__127 = self;
    return __result_obj__127;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__128;
int size_492;
void* __right_value76 = (void*)0;
char* old_buf_493;
int old_len_494;
int new_size_495;
void* __right_value77 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__129;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__128 = self;
        return __result_obj__128;
    }
    size_492=strlen(mem);
    if(    self->len+size_492+1+1>=self->size    ) {
        old_buf_493=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3015, "char*"));
        memcpy(old_buf_493,self->buf,self->size);
        old_len_494=self->len;
        new_size_495=(self->size+size_492+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_495)), "/usr/local/include/comelang.h", 3019, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_493,old_len_494);
        self->buf[old_len_494]=0;
        self->size=new_size_495;
        (old_buf_493 = come_decrement_ref_count(old_buf_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_492);
    self->len+=size_492;
    self->buf[self->len]=0;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__130;
va_list args_496;
char* result_497;
int len_498;
struct buffer* __result_obj__131;
void* __right_value78 = (void*)0;
char* mem_499;
int size_500;
void* __right_value79 = (void*)0;
char* old_buf_501;
int old_len_502;
int new_size_503;
void* __right_value80 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__132;
result_497 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__130 = self;
        return __result_obj__130;
    }
    __builtin_va_start(args_496,msg);
    len_498=vasprintf(&result_497,msg,args_496);
    __builtin_va_end(args_496);
    if(    len_498<0    ) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    mem_499=(char*)come_increment_ref_count(__builtin_string(result_497));
    size_500=strlen(mem_499);
    if(    self->len+size_500+1+1>=self->size    ) {
        old_buf_501=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3063, "char*"));
        memcpy(old_buf_501,self->buf,self->size);
        old_len_502=self->len;
        new_size_503=(self->size+size_500+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_503)), "/usr/local/include/comelang.h", 3067, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_501,old_len_502);
        self->buf[old_len_502]=0;
        self->size=new_size_503;
        (old_buf_501 = come_decrement_ref_count(old_buf_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_499,size_500);
    self->len+=size_500;
    self->buf[self->len]=0;
    free(result_497);
    __result_obj__132 = self;
    (mem_499 = come_decrement_ref_count(mem_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__132;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__133;
int size_504;
void* __right_value81 = (void*)0;
char* old_buf_505;
int old_len_506;
int new_size_507;
void* __right_value82 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__134;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    size_504=strlen(mem)+1;
    if(    self->len+size_504+1+1+1>=self->size    ) {
        old_buf_505=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3089, "char*"));
        memcpy(old_buf_505,self->buf,self->size);
        old_len_506=self->len;
        new_size_507=(self->size+size_504+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_507)), "/usr/local/include/comelang.h", 3093, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_505,old_len_506);
        self->buf[old_len_506]=0;
        self->size=new_size_507;
        (old_buf_505 = come_decrement_ref_count(old_buf_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_504);
    self->len+=size_504;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__135;
int* mem_508;
int size_509;
void* __right_value83 = (void*)0;
char* old_buf_510;
int old_len_511;
int new_size_512;
void* __right_value84 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__135 = ((void*)0);
        return __result_obj__135;
    }
    mem_508=&value;
    size_509=sizeof(int);
    if(    self->len+size_509+1+1>=self->size    ) {
        old_buf_510=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3116, "char*"));
        memcpy(old_buf_510,self->buf,self->size);
        old_len_511=self->len;
        new_size_512=(self->size+size_509+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_512)), "/usr/local/include/comelang.h", 3120, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_510,old_len_511);
        self->buf[old_len_511]=0;
        self->size=new_size_512;
        (old_buf_510 = come_decrement_ref_count(old_buf_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_508,size_509);
    self->len+=size_509;
    self->buf[self->len]=0;
    __result_obj__136 = self;
    return __result_obj__136;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_513;
int size_514;
void* __right_value85 = (void*)0;
char* old_buf_515;
int old_len_516;
int new_size_517;
void* __right_value86 = (void*)0;
char* __dec_obj22;
struct buffer* __result_obj__137;
    mem_513=&value;
    size_514=sizeof(long);
    if(    self->len+size_514+1+1>=self->size    ) {
        old_buf_515=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3139, "char*"));
        memcpy(old_buf_515,self->buf,self->size);
        old_len_516=self->len;
        new_size_517=(self->size+size_514+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_517)), "/usr/local/include/comelang.h", 3143, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_515,old_len_516);
        self->buf[old_len_516]=0;
        self->size=new_size_517;
        (old_buf_515 = come_decrement_ref_count(old_buf_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_513,size_514);
    self->len+=size_514;
    self->buf[self->len]=0;
    __result_obj__137 = self;
    return __result_obj__137;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__138;
short* mem_518;
int size_519;
void* __right_value87 = (void*)0;
char* old_buf_520;
int old_len_521;
int new_size_522;
void* __right_value88 = (void*)0;
char* __dec_obj23;
struct buffer* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = ((void*)0);
        return __result_obj__138;
    }
    mem_518=&value;
    size_519=sizeof(short);
    if(    self->len+size_519+1+1>=self->size    ) {
        old_buf_520=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3166, "char*"));
        memcpy(old_buf_520,self->buf,self->size);
        old_len_521=self->len;
        new_size_522=(self->size+size_519+1)*2;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_522)), "/usr/local/include/comelang.h", 3170, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_520,old_len_521);
        self->buf[old_len_521]=0;
        self->size=new_size_522;
        (old_buf_520 = come_decrement_ref_count(old_buf_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_518,size_519);
    self->len+=size_519;
    self->buf[self->len]=0;
    __result_obj__139 = self;
    return __result_obj__139;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__140;
int len_523;
int new_size_524;
void* __right_value89 = (void*)0;
char* __dec_obj24;
int i_525;
struct buffer* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = ((void*)0);
        return __result_obj__140;
    }
    len_523=self->len;
    len_523=(len_523+3)&~3;
    if(    len_523>=self->size    ) {
        new_size_524=(self->size+1+1)*2;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_524)), "/usr/local/include/comelang.h", 3194, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_524;
    }
    for(    i_525=self->len    ;    i_525<len_523    ;    i_525++    ){
        self->buf[i_525]=0;
    }
    self->len=len_523;
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
struct buffer* result_526;
struct buffer* __result_obj__142;
struct buffer* __result_obj__143;
    result_526=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3224, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__142 = (struct buffer*)come_increment_ref_count(result_526);
        come_call_finalizer(buffer_finalize, result_526, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__142;
    }
    buffer_append_str(result_526,self);
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_526);
    come_call_finalizer(buffer_finalize, result_526, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_527;
struct buffer* __result_obj__147;
    result_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3251, "struct buffer*"))));
    buffer_append(result_527,self,sizeof(char)*len);
    __result_obj__147 = (struct buffer*)come_increment_ref_count(result_527);
    come_call_finalizer(buffer_finalize, result_527, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* result_528;
int i_529;
struct buffer* __result_obj__148;
    result_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3258, "struct buffer*"))));
    for(    i_529=0    ;    i_529<len    ;    i_529++    ){
        buffer_append(result_528,self[i_529],strlen(self[i_529]));
    }
    __result_obj__148 = (struct buffer*)come_increment_ref_count(result_528);
    come_call_finalizer(buffer_finalize, result_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct buffer* result_530;
struct buffer* __result_obj__149;
    result_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_530,(char*)self,sizeof(short)*len);
    __result_obj__149 = (struct buffer*)come_increment_ref_count(result_530);
    come_call_finalizer(buffer_finalize, result_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct buffer* result_531;
struct buffer* __result_obj__150;
    result_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_531,(char*)self,sizeof(int)*len);
    __result_obj__150 = (struct buffer*)come_increment_ref_count(result_531);
    come_call_finalizer(buffer_finalize, result_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct buffer* result_532;
struct buffer* __result_obj__151;
    result_532=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_532,(char*)self,sizeof(long)*len);
    __result_obj__151 = (struct buffer*)come_increment_ref_count(result_532);
    come_call_finalizer(buffer_finalize, result_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct buffer* result_533;
struct buffer* __result_obj__152;
    result_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    buffer_append(result_533,(char*)self,sizeof(float)*len);
    __result_obj__152 = (struct buffer*)come_increment_ref_count(result_533);
    come_call_finalizer(buffer_finalize, result_533, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct buffer* result_534;
struct buffer* __result_obj__153;
    result_534=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3295, "struct buffer*"))));
    buffer_append(result_534,(char*)self,sizeof(double)*len);
    __result_obj__153 = (struct buffer*)come_increment_ref_count(result_534);
    come_call_finalizer(buffer_finalize, result_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

char* buffer_printable(struct buffer* self){
int len_535;
void* __right_value108 = (void*)0;
char* result_536;
int n_537;
int i_538;
unsigned char c_539;
char* __result_obj__154;
    len_535=self->len;
    result_536=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_535*2+1)), "/usr/local/include/comelang.h", 3303, "char*"));
    n_537=0;
    for(    i_538=0    ;    i_538<len_535    ;    i_538++    ){
        c_539=self->buf[i_538];
        if(        (c_539>=0&&c_539<32)||c_539==127        ) {
            result_536[n_537++]=94;
            result_536[n_537++]=c_539+65-1;
        }
        else if(        c_539>127        ) {
            result_536[n_537++]=63;
        }
        else {
            result_536[n_537++]=c_539;
        }
    }
    result_536[n_537]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_536);
    (result_536 = come_decrement_ref_count(result_536, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_540;
struct list$1char$* __result_obj__156;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_540=0    ;    i_540<num_value    ;    i_540++    ){
        list$1char$_push_back(self,values[i_540]);
    }
    __result_obj__156 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value110 = (void*)0;
struct list_item$1char$* litem_541;
void* __right_value111 = (void*)0;
struct list_item$1char$* litem_542;
void* __right_value112 = (void*)0;
struct list_item$1char$* litem_543;
struct list$1char$* __result_obj__155;
    if(    self->len==0    ) {
        litem_541=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value110=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$*"))));
        litem_541->prev=((void*)0);
        litem_541->next=((void*)0);
        litem_541->item=item;
        self->tail=litem_541;
        self->head=litem_541;
    }
    else if(    self->len==1    ) {
        litem_542=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value111=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$*"))));
        litem_542->prev=self->head;
        litem_542->next=((void*)0);
        litem_542->item=item;
        self->tail=litem_542;
        self->head->next=litem_542;
    }
    else {
        litem_543=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value112=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$*"))));
        litem_543->prev=self->tail;
        litem_543->next=((void*)0);
        litem_543->item=item;
        self->tail->next=litem_543;
        self->tail=litem_543;
    }
    self->len++;
    __result_obj__155 = self;
    return __result_obj__155;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_544;
struct list_item$1char$* prev_it_545;
    it_544=self->head;
    while(    it_544!=((void*)0)    ) {
        prev_it_545=it_544;
        it_544=it_544->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1char$* __result_obj__157;
    __result_obj__157 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value113=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_546;
struct list$1char$p* __result_obj__159;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_546=0    ;    i_546<num_value    ;    i_546++    ){
        list$1char$p_push_back(self,values[i_546]);
    }
    __result_obj__159 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value115 = (void*)0;
struct list_item$1char$p* litem_547;
void* __right_value116 = (void*)0;
struct list_item$1char$p* litem_548;
void* __right_value117 = (void*)0;
struct list_item$1char$p* litem_549;
struct list$1char$p* __result_obj__158;
    if(    self->len==0    ) {
        litem_547=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value115=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$p*"))));
        litem_547->prev=((void*)0);
        litem_547->next=((void*)0);
        litem_547->item=item;
        self->tail=litem_547;
        self->head=litem_547;
    }
    else if(    self->len==1    ) {
        litem_548=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value116=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$p*"))));
        litem_548->prev=self->head;
        litem_548->next=((void*)0);
        litem_548->item=item;
        self->tail=litem_548;
        self->head->next=litem_548;
    }
    else {
        litem_549=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value117=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_549->prev=self->tail;
        litem_549->next=((void*)0);
        litem_549->item=item;
        self->tail->next=litem_549;
        self->tail=litem_549;
    }
    self->len++;
    __result_obj__158 = self;
    return __result_obj__158;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_550;
struct list_item$1char$p* prev_it_551;
    it_550=self->head;
    while(    it_550!=((void*)0)    ) {
        prev_it_551=it_550;
        it_550=it_550->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_551, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1char$p* __result_obj__160;
    __result_obj__160 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value118=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_552;
struct list$1short$* __result_obj__162;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_552=0    ;    i_552<num_value    ;    i_552++    ){
        list$1short$_push_back(self,values[i_552]);
    }
    __result_obj__162 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value120 = (void*)0;
struct list_item$1short$* litem_553;
void* __right_value121 = (void*)0;
struct list_item$1short$* litem_554;
void* __right_value122 = (void*)0;
struct list_item$1short$* litem_555;
struct list$1short$* __result_obj__161;
    if(    self->len==0    ) {
        litem_553=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value120=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1short$*"))));
        litem_553->prev=((void*)0);
        litem_553->next=((void*)0);
        litem_553->item=item;
        self->tail=litem_553;
        self->head=litem_553;
    }
    else if(    self->len==1    ) {
        litem_554=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value121=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1short$*"))));
        litem_554->prev=self->head;
        litem_554->next=((void*)0);
        litem_554->item=item;
        self->tail=litem_554;
        self->head->next=litem_554;
    }
    else {
        litem_555=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value122=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1short$*"))));
        litem_555->prev=self->tail;
        litem_555->next=((void*)0);
        litem_555->item=item;
        self->tail->next=litem_555;
        self->tail=litem_555;
    }
    self->len++;
    __result_obj__161 = self;
    return __result_obj__161;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_556;
struct list_item$1short$* prev_it_557;
    it_556=self->head;
    while(    it_556!=((void*)0)    ) {
        prev_it_557=it_556;
        it_556=it_556->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_557, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1short$* __result_obj__163;
    __result_obj__163 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value123=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3354, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_558;
struct list$1int$* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_558=0    ;    i_558<num_value    ;    i_558++    ){
        list$1int$_push_back(self,values[i_558]);
    }
    __result_obj__165 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value125 = (void*)0;
struct list_item$1int$* litem_559;
void* __right_value126 = (void*)0;
struct list_item$1int$* litem_560;
void* __right_value127 = (void*)0;
struct list_item$1int$* litem_561;
struct list$1int$* __result_obj__164;
    if(    self->len==0    ) {
        litem_559=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value125=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1int$*"))));
        litem_559->prev=((void*)0);
        litem_559->next=((void*)0);
        litem_559->item=item;
        self->tail=litem_559;
        self->head=litem_559;
    }
    else if(    self->len==1    ) {
        litem_560=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value126=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1int$*"))));
        litem_560->prev=self->head;
        litem_560->next=((void*)0);
        litem_560->item=item;
        self->tail=litem_560;
        self->head->next=litem_560;
    }
    else {
        litem_561=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value127=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1int$*"))));
        litem_561->prev=self->tail;
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail->next=litem_561;
        self->tail=litem_561;
    }
    self->len++;
    __result_obj__164 = self;
    return __result_obj__164;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_562;
struct list_item$1int$* prev_it_563;
    it_562=self->head;
    while(    it_562!=((void*)0)    ) {
        prev_it_563=it_562;
        it_562=it_562->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_563, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value124 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1int$* __result_obj__166;
    __result_obj__166 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value128=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3359, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_564;
struct list$1long$* __result_obj__168;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_564=0    ;    i_564<num_value    ;    i_564++    ){
        list$1long$_push_back(self,values[i_564]);
    }
    __result_obj__168 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__168;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value130 = (void*)0;
struct list_item$1long$* litem_565;
void* __right_value131 = (void*)0;
struct list_item$1long$* litem_566;
void* __right_value132 = (void*)0;
struct list_item$1long$* litem_567;
struct list$1long$* __result_obj__167;
    if(    self->len==0    ) {
        litem_565=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value130=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1long$*"))));
        litem_565->prev=((void*)0);
        litem_565->next=((void*)0);
        litem_565->item=item;
        self->tail=litem_565;
        self->head=litem_565;
    }
    else if(    self->len==1    ) {
        litem_566=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value131=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1long$*"))));
        litem_566->prev=self->head;
        litem_566->next=((void*)0);
        litem_566->item=item;
        self->tail=litem_566;
        self->head->next=litem_566;
    }
    else {
        litem_567=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value132=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1long$*"))));
        litem_567->prev=self->tail;
        litem_567->next=((void*)0);
        litem_567->item=item;
        self->tail->next=litem_567;
        self->tail=litem_567;
    }
    self->len++;
    __result_obj__167 = self;
    return __result_obj__167;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_568;
struct list_item$1long$* prev_it_569;
    it_568=self->head;
    while(    it_568!=((void*)0)    ) {
        prev_it_569=it_568;
        it_568=it_568->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_569, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value129 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1long$* __result_obj__169;
    __result_obj__169 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value133=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3364, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value133, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_570;
struct list$1float$* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_570=0    ;    i_570<num_value    ;    i_570++    ){
        list$1float$_push_back(self,values[i_570]);
    }
    __result_obj__171 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value135 = (void*)0;
struct list_item$1float$* litem_571;
void* __right_value136 = (void*)0;
struct list_item$1float$* litem_572;
void* __right_value137 = (void*)0;
struct list_item$1float$* litem_573;
struct list$1float$* __result_obj__170;
    if(    self->len==0    ) {
        litem_571=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value135=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1float$*"))));
        litem_571->prev=((void*)0);
        litem_571->next=((void*)0);
        litem_571->item=item;
        self->tail=litem_571;
        self->head=litem_571;
    }
    else if(    self->len==1    ) {
        litem_572=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value136=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1float$*"))));
        litem_572->prev=self->head;
        litem_572->next=((void*)0);
        litem_572->item=item;
        self->tail=litem_572;
        self->head->next=litem_572;
    }
    else {
        litem_573=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value137=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1float$*"))));
        litem_573->prev=self->tail;
        litem_573->next=((void*)0);
        litem_573->item=item;
        self->tail->next=litem_573;
        self->tail=litem_573;
    }
    self->len++;
    __result_obj__170 = self;
    return __result_obj__170;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_574;
struct list_item$1float$* prev_it_575;
    it_574=self->head;
    while(    it_574!=((void*)0)    ) {
        prev_it_575=it_574;
        it_574=it_574->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_575, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value134 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1float$* __result_obj__172;
    __result_obj__172 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value138=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3369, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_576;
struct list$1double$* __result_obj__174;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_576=0    ;    i_576<num_value    ;    i_576++    ){
        list$1double$_push_back(self,values[i_576]);
    }
    __result_obj__174 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value140 = (void*)0;
struct list_item$1double$* litem_577;
void* __right_value141 = (void*)0;
struct list_item$1double$* litem_578;
void* __right_value142 = (void*)0;
struct list_item$1double$* litem_579;
struct list$1double$* __result_obj__173;
    if(    self->len==0    ) {
        litem_577=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value140=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1double$*"))));
        litem_577->prev=((void*)0);
        litem_577->next=((void*)0);
        litem_577->item=item;
        self->tail=litem_577;
        self->head=litem_577;
    }
    else if(    self->len==1    ) {
        litem_578=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value141=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1double$*"))));
        litem_578->prev=self->head;
        litem_578->next=((void*)0);
        litem_578->item=item;
        self->tail=litem_578;
        self->head->next=litem_578;
    }
    else {
        litem_579=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value142=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1double$*"))));
        litem_579->prev=self->tail;
        litem_579->next=((void*)0);
        litem_579->item=item;
        self->tail->next=litem_579;
        self->tail=litem_579;
    }
    self->len++;
    __result_obj__173 = self;
    return __result_obj__173;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_580;
struct list_item$1double$* prev_it_581;
    it_580=self->head;
    while(    it_580!=((void*)0)    ) {
        prev_it_581=it_580;
        it_580=it_580->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_581, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value139 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1double$* __result_obj__175;
    __result_obj__175 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value143=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1double$*")),len,self))));
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
int len_582;
void* __right_value145 = (void*)0;
char* result_583;
char* __result_obj__177;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    len_582=strlen(self)+strlen(right);
    result_583=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_582+1)), "/usr/local/include/comelang.h", 3603, "char*"));
    strncpy(result_583,self,len_582+1);
    strncat(result_583,right,len_582+1);
    __result_obj__177 = (char*)come_increment_ref_count(result_583);
    (result_583 = come_decrement_ref_count(result_583, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_operator_add(char* self, char* right){
void* __right_value146 = (void*)0;
char* __result_obj__178;
int len_584;
void* __right_value147 = (void*)0;
char* result_585;
char* __result_obj__179;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    len_584=strlen(self)+strlen(right);
    result_585=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_584+1)), "/usr/local/include/comelang.h", 3618, "char*"));
    strncpy(result_585,self,len_584+1);
    strncat(result_585,right,len_584+1);
    __result_obj__179 = (char*)come_increment_ref_count(result_585);
    (result_585 = come_decrement_ref_count(result_585, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_operator_mult(char* self, int right){
void* __right_value148 = (void*)0;
char* __result_obj__180;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct buffer* buf_586;
int i_587;
void* __right_value151 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    buf_586=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_587=0    ;    i_587<right    ;    i_587++    ){
        buffer_append_str(buf_586,self);
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value151=buffer_to_string(buf_586))));
    come_call_finalizer(buffer_finalize, buf_586, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* string_operator_mult(char* self, int right){
void* __right_value152 = (void*)0;
char* __result_obj__182;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* buf_588;
int i_589;
void* __right_value155 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    buf_588=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3645, "struct buffer*"))));
    for(    i_589=0    ;    i_589<right    ;    i_589++    ){
        buffer_append_str(buf_588,self);
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value155=buffer_to_string(buf_588))));
    come_call_finalizer(buffer_finalize, buf_588, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_590;
int i_591;
    result_590=(_Bool)0;
    for(    i_591=0    ;    i_591<len    ;    i_591++    ){
        if(        strncmp(self[i_591],str,strlen(self[i_591]))==0        ) {
            result_590=(_Bool)1;
            break;
        }
    }
    return result_590;
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
int result_592;
char* p_593;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_592=0;
    p_593=value;
    while(    *p_593    ) {
        result_592+=(*p_593);
        p_593++;
    }
    return result_592;
}

unsigned int string_get_hash_key(char* value){
int result_594;
char* p_595;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_594=0;
    p_595=value;
    while(    *p_595    ) {
        result_594+=(*p_595);
        p_595++;
    }
    return result_594;
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
_Bool result_596;
    result_596=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_596;
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
_Bool result_597;
    result_597=(c>=32&&c<=126);
    return result_597;
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
int len_598;
void* __right_value157 = (void*)0;
char* result_599;
int i_600;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    len_598=strlen(str);
    result_599=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_598+1)), "/usr/local/include/comelang.h", 3913, "char*"));
    for(    i_600=0    ;    i_600<len_598    ;    i_600++    ){
        result_599[i_600]=str[len_598-i_600-1];
    }
    result_599[len_598]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_599);
    (result_599 = come_decrement_ref_count(result_599, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value158 = (void*)0;
char* __result_obj__186;
int len_601;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
char* __result_obj__187;
void* __right_value161 = (void*)0;
char* __result_obj__188;
void* __right_value162 = (void*)0;
char* __result_obj__189;
void* __right_value163 = (void*)0;
char* result_602;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_601=strlen(str);
    if(    head<0    ) {
        head+=len_601;
    }
    if(    tail<0    ) {
        tail+=len_601+1;
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
    if(    tail>=len_601    ) {
        tail=len_601;
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
    result_602=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3959, "char*"));
    memcpy(result_602,str+head,tail-head);
    result_602[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_602);
    (result_602 = come_decrement_ref_count(result_602, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value164 = (void*)0;
char* __result_obj__191;
int len_603;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __result_obj__192;
void* __right_value167 = (void*)0;
char* __result_obj__193;
void* __right_value168 = (void*)0;
char* __result_obj__194;
void* __right_value169 = (void*)0;
char* result_604;
char* __result_obj__195;
    if(    str==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    len_603=strlen(str);
    if(    head<0    ) {
        head+=len_603;
    }
    if(    tail<0    ) {
        tail+=len_603+1;
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
    if(    tail>=len_603    ) {
        tail=len_603;
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
    result_604=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4002, "char*"));
    memcpy(result_604,str+head,tail-head);
    result_604[tail-head]=0;
    __result_obj__195 = (char*)come_increment_ref_count(result_604);
    (result_604 = come_decrement_ref_count(result_604, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value170 = (void*)0;
char* __result_obj__196;
int len_605;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __result_obj__197;
void* __right_value173 = (void*)0;
char* __result_obj__198;
void* __right_value174 = (void*)0;
char* __result_obj__199;
void* __right_value175 = (void*)0;
char* result_606;
char* __result_obj__200;
    if(    str==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    len_605=strlen(str);
    if(    head<0    ) {
        head+=len_605;
    }
    if(    tail<0    ) {
        tail+=len_605+1;
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
    if(    tail>=len_605    ) {
        tail=len_605;
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
    result_606=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4045, "char*"));
    memcpy(result_606,str+head,tail-head);
    result_606[tail-head]=0;
    __result_obj__200 = (char*)come_increment_ref_count(result_606);
    (result_606 = come_decrement_ref_count(result_606, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__200;
}

char* xsprintf(char* msg, ...){
void* __right_value176 = (void*)0;
char* __result_obj__201;
va_list args_607;
char* result_608;
int len_609;
void* __right_value177 = (void*)0;
char* __result_obj__202;
void* __right_value178 = (void*)0;
char* result2_610;
char* __result_obj__203;
result_608 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__201;
    }
    __builtin_va_start(args_607,msg);
    len_609=vasprintf(&result_608,msg,args_607);
    __builtin_va_end(args_607);
    if(    len_609<0    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    result2_610=(char*)come_increment_ref_count(__builtin_string(result_608));
    free(result_608);
    __result_obj__203 = (char*)come_increment_ref_count(result2_610);
    (result2_610 = come_decrement_ref_count(result2_610, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value179 = (void*)0;
char* __result_obj__204;
int len_611;
void* __right_value180 = (void*)0;
char* __result_obj__205;
void* __right_value181 = (void*)0;
char* __result_obj__206;
void* __right_value182 = (void*)0;
char* result_612;
char* __result_obj__207;
    if(    str==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(""))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    len_611=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(str))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    if(    head<0    ) {
        head+=len_611;
    }
    if(    tail<0    ) {
        tail+=len_611+1;
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
    if(    tail>=len_611    ) {
        tail=len_611;
    }
    result_612=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_611-(tail-head)+1)), "/usr/local/include/comelang.h", 4107, "char*"));
    memcpy(result_612,str,head);
    memcpy(result_612+head,str+tail,len_611-tail);
    result_612[len_611-(tail-head)]=0;
    __result_obj__207 = (char*)come_increment_ref_count(result_612);
    (result_612 = come_decrement_ref_count(result_612, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_613;
struct list_item$1char$ph* prev_it_614;
    it_613=self->head;
    while(    it_613!=((void*)0)    ) {
        prev_it_614=it_613;
        it_613=it_613->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_614, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_618;
char* __dec_obj25;
void* __right_value190 = (void*)0;
struct list_item$1char$ph* litem_619;
char* __dec_obj26;
void* __right_value191 = (void*)0;
struct list_item$1char$ph* litem_620;
char* __dec_obj27;
struct list$1char$ph* __result_obj__210;
    if(    self->len==0    ) {
        litem_618=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_618->prev=((void*)0);
        litem_618->next=((void*)0);
        __dec_obj25=litem_618->item,
        litem_618->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_618;
        self->head=litem_618;
    }
    else if(    self->len==1    ) {
        litem_619=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value190=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_619->prev=self->head;
        litem_619->next=((void*)0);
        __dec_obj26=litem_619->item,
        litem_619->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_619;
        self->head->next=litem_619;
    }
    else {
        litem_620=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value191=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_620->prev=self->tail;
        litem_620->next=((void*)0);
        __dec_obj27=litem_620->item,
        litem_620->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_620;
        self->tail=litem_620;
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
struct list$1char$ph* result_615;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct buffer* str_616;
int i_617;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1char$ph* __result_obj__211;
    if(    self==((void*)0)    ) {
        __result_obj__209 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value184=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4120, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__209;
    }
    result_615=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4123, "struct list$1char$ph*"))));
    str_616=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4125, "struct buffer*"))));
    for(    i_617=0    ;    i_617<charp_length(self)    ;    i_617++    ){
        if(        self[i_617]==c        ) {
            list$1char$ph_push_back(result_615,(char*)come_increment_ref_count(__builtin_string(str_616->buf)));
            buffer_reset(str_616);
        }
        else {
            buffer_append_char(str_616,self[i_617]);
        }
    }
    if(    buffer_length(str_616)!=0    ) {
        list$1char$ph_push_back(result_615,(char*)come_increment_ref_count(__builtin_string(str_616->buf)));
    }
    __result_obj__211 = (struct list$1char$ph*)come_increment_ref_count(result_615);
    come_call_finalizer(list$1char$ph$p_finalize, result_615, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_616, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_621;
void* __right_value196 = (void*)0;
char* result_622;
int n_623;
int i_624;
char c_625;
char* __result_obj__214;
    len_621=charp_length(str);
    result_622=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_621*2+1)), "/usr/local/include/comelang.h", 4157, "char*"));
    n_623=0;
    for(    i_624=0    ;    i_624<len_621    ;    i_624++    ){
        c_625=str[i_624];
        if(        (c_625>=0&&c_625<32)||c_625==127        ) {
            result_622[n_623++]=94;
            result_622[n_623++]=c_625+65-1;
        }
        else {
            result_622[n_623++]=c_625;
        }
    }
    result_622[n_623]=0;
    __result_obj__214 = (char*)come_increment_ref_count(result_622);
    (result_622 = come_decrement_ref_count(result_622, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value197 = (void*)0;
char* __result_obj__215;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* result_626;
char* p_627;
char* p2_628;
void* __right_value200 = (void*)0;
char* __result_obj__216;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__215;
    }
    result_626=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4185, "struct buffer*"))));
    p_627=self;
    while(    (_Bool)1    ) {
        p2_628=strstr(p_627,str);
        if(        p2_628==((void*)0)        ) {
            p2_628=p_627;
            while(            *p2_628            ) {
                p2_628++;
            }
            buffer_append(result_626,p_627,p2_628-p_627);
            break;
        }
        buffer_append(result_626,p_627,p2_628-p_627);
        buffer_append_str(result_626,replace);
        p_627=p2_628+strlen(str);
    }
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value200=buffer_to_string(result_626))));
    come_call_finalizer(buffer_finalize, result_626, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__216;
}

char* xbasename(char* path){
void* __right_value201 = (void*)0;
char* __result_obj__217;
char* p_629;
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
    p_629=path+strlen(path);
    while(    p_629>=path    ) {
        if(        *p_629==47        ) {
            break;
        }
        else {
            p_629--;
        }
    }
    if(    p_629<path    ) {
        __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(path))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__218;
    }
    else {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(p_629+1))));
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
char* path2_630;
char* p_631;
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
    path2_630=(char*)come_increment_ref_count(xbasename(path));
    p_631=path2_630+strlen(path2_630);
    while(    p_631>=path2_630    ) {
        if(        *p_631==46        ) {
            break;
        }
        else {
            p_631--;
        }
    }
    if(    p_631<path2_630    ) {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(path2_630))));
        (path2_630 = come_decrement_ref_count(path2_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
    else {
        __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value208=charp_substring(path2_630,0,p_631-path2_630))));
        (path2_630 = come_decrement_ref_count(path2_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__223;
    }
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(""))));
    (path2_630 = come_decrement_ref_count(path2_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* xextname(char* path){
void* __right_value210 = (void*)0;
char* __result_obj__225;
char* p_632;
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
    p_632=path+strlen(path);
    while(    p_632>=path    ) {
        if(        *p_632==46        ) {
            break;
        }
        else {
            p_632--;
        }
    }
    if(    p_632<path    ) {
        __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(path))));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__226;
    }
    else {
        __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(p_632+1))));
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
char* msg2_633;
va_list args_634;
void* __right_value234 = (void*)0;
char* __result_obj__249;
msg2_633 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(""))));
        (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__248;
    }
    __builtin_va_start(args_634,self);
    vasprintf(&msg2_633,self,args_634);
    __builtin_va_end(args_634);
    printf("%s",msg2_633);
    free(msg2_633);
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
int i_635;
    for(    i_635=0    ;    i_635<self    ;    i_635++    ){
        block(parent,i_635);
    }
}

