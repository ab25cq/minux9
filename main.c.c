/// previous struct definition ///
/// struct definition ///
typedef void* any;

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

typedef char int_fast8_t;

typedef short int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned short int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1 __darwin_mbstate_t;

typedef long  int __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int __darwin_rune_t;

typedef int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int __darwin_socklen_t;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long __darwin_blkcnt_t;

typedef int __darwin_blksize_t;

typedef int __darwin_dev_t;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int __darwin_gid_t;

typedef unsigned int __darwin_id_t;

typedef unsigned long  long __darwin_ino64_t;

typedef unsigned long  long __darwin_ino_t;

typedef unsigned int __darwin_mach_port_name_t;

typedef unsigned int __darwin_mach_port_t;

typedef unsigned short int __darwin_mode_t;

typedef long long __darwin_off_t;

typedef int __darwin_pid_t;

typedef unsigned int __darwin_sigset_t;

typedef int __darwin_suseconds_t;

typedef unsigned int __darwin_uid_t;

typedef unsigned int __darwin_useconds_t;

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec* __next;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec* __cleanup_stack;
    char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;

typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;

typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;

typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;

typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;

typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;

typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;

typedef struct _opaque_pthread_t* __darwin_pthread_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

typedef struct mem_block mem_block_t;

struct mem_block* free_list=((void*)0);
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

typedef unsigned long  int rsize_t;

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

struct anonymous_typeX2
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

typedef struct anonymous_typeX2 Elf64_Ehdr;

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

enum anonymous_typeY4 { FK_STDIN
,FK_STDOUT
,FK_STDERR
,FK_FILE
,FK_PIPE
};

struct file
{
    enum anonymous_typeY4 kind;
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
  0x72, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x21, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34,
  0xa4, 0xfe, 0x05, 0x45, 0xef, 0xf0, 0xdf, 0xfa, 0x81, 0x47, 0x3e, 0x85,
  0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x48, 0x45, 0x4c, 0x4c, 0x4f, 0x31, 0x0d, 0x0a, 0x00, 0x47, 0x43, 0x43,
  0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30,
  0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x59,
  0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f, 0x00,
  0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70,
  0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f,
  0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61,
  0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63,
  0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x10, 0x00, 0xf1, 0xff, 0x59, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x59, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x60, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x59, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x18, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x59, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x59, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x60, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x59, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x72, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x07, 0x00, 0x06, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x77, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x79, 0x71, 0x06, 0xf4,
  0x22, 0xf0, 0x00, 0x18, 0x01, 0x45, 0x93, 0x07, 0x04, 0xfd, 0xbe, 0x85,
  0x0d, 0x46, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34,
  0xa4, 0xfe, 0x05, 0x45, 0x93, 0x07, 0x04, 0xfd, 0xbe, 0x85, 0x0d, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfe,
  0x09, 0x45, 0xef, 0xf0, 0xff, 0xfa, 0x81, 0x47, 0x3e, 0x85, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0,
  0x00, 0x08, 0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01,
  0x82, 0x80, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36,
  0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32,
  0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63,
  0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x5e, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x5e, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x4a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x60, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x5e, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x5e, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x5e, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00,
  0x60, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x78, 0x74, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00,
  0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69,
  0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x77, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1552;
unsigned char child_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xb2, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb8, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x0d, 0x00, 0x0c, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x1c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x79, 0x71, 0x06, 0xf4,
  0x22, 0xf0, 0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47,
  0xf4, 0xfd, 0x23, 0x00, 0xf4, 0xfe, 0xa3, 0x00, 0x04, 0xfe, 0x05, 0x45,
  0x93, 0x07, 0x04, 0xfe, 0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x00, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x01, 0x00, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x1d, 0x71, 0x86, 0xec, 0xa2, 0xe8,
  0x80, 0x10, 0xaa, 0x87, 0xae, 0x86, 0x32, 0x87, 0x23, 0x26, 0xf4, 0xfa,
  0xb6, 0x87, 0x23, 0x24, 0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22, 0xf4, 0xfa,
  0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfa,
  0x81, 0x27, 0x8d, 0xc3, 0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27, 0x63, 0xdd,
  0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfa,
  0xbb, 0x07, 0xf0, 0x40, 0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x29, 0xa0,
  0x83, 0x27, 0xc4, 0xfa, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe,
  0x81, 0x27, 0xad, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x5f, 0xf6,
  0x65, 0xa0, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x77,
  0xf7, 0x02, 0x81, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe,
  0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27,
  0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7,
  0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe,
  0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97,
  0x23, 0x04, 0xf7, 0xfc, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe,
  0xbb, 0x57, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe,
  0x81, 0x27, 0xd1, 0xfb, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf,
  0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x5f, 0xee, 0x11, 0xa8, 0x83, 0x27,
  0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc, 0x3e, 0x85,
  0xef, 0xf0, 0x1f, 0xed, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc,
  0xe6, 0x60, 0x46, 0x64, 0x25, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4,
  0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87,
  0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26,
  0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27,
  0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40,
  0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05,
  0x00, 0x03, 0xef, 0xf0, 0x3f, 0xe6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9,
  0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb,
  0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87,
  0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe,
  0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f,
  0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe,
  0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9,
  0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8,
  0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27,
  0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x7f, 0xde, 0x11, 0xa8,
  0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb,
  0x3e, 0x85, 0xef, 0xf0, 0x3f, 0xdd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf,
  0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x59, 0x71,
  0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87,
  0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8,
  0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9,
  0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00,
  0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07,
  0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x5f, 0xd6, 0x55, 0xa0, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22,
  0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47,
  0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27,
  0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7,
  0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26,
  0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x9f, 0xce,
  0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7,
  0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcd, 0x83, 0x27, 0xc4, 0xfe,
  0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80,
  0x31, 0x71, 0x86, 0xfc, 0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34, 0xa4, 0xf8,
  0x0c, 0xe4, 0x10, 0xe8, 0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4, 0x23, 0x38,
  0x04, 0x03, 0x23, 0x3c, 0x14, 0x03, 0x93, 0x07, 0x04, 0x04, 0x23, 0x30,
  0xf4, 0xf8, 0x83, 0x37, 0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe, 0xd9, 0xac,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0x50, 0x02, 0x63, 0x0a, 0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0xdf, 0xc5, 0x6d, 0xa4, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a,
  0xf7, 0x12, 0x85, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06,
  0x63, 0x1a, 0xf7, 0x00, 0x89, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x40, 0x06, 0x63, 0x8d, 0xe7, 0x04,
  0x13, 0x07, 0x80, 0x07, 0x63, 0x92, 0xe7, 0x0a, 0x83, 0x27, 0x44, 0xfe,
  0x1b, 0x87, 0x07, 0x00, 0x85, 0x47, 0x63, 0x12, 0xf7, 0x02, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63,
  0x23, 0x38, 0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x04, 0xfb,
  0xef, 0xf0, 0x5f, 0xd1, 0x09, 0xac, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfa,
  0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfb, 0xef, 0xf0, 0x3f, 0xdf,
  0xcd, 0xaa, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47,
  0x63, 0x13, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x30, 0xf4, 0xfa, 0x83, 0x37,
  0x04, 0xfa, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcc,
  0xc9, 0xa2, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfa, 0x83, 0x37, 0x84, 0xfa,
  0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xda, 0x45, 0xa2,
  0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x9f, 0xb4, 0x23, 0x20, 0x04, 0xfe,
  0x11, 0xa8, 0x13, 0x05, 0xc0, 0x06, 0xef, 0xf0, 0xbf, 0xb3, 0x83, 0x27,
  0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe,
  0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x40,
  0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0x1f, 0xb1, 0xb9, 0xaa, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x50, 0x02, 0x63, 0x86, 0xe7, 0x12,
  0x13, 0x07, 0x50, 0x02, 0x63, 0xc7, 0xe7, 0x12, 0x13, 0x07, 0x80, 0x07,
  0x63, 0x43, 0xf7, 0x12, 0x13, 0x07, 0x30, 0x06, 0x63, 0xcf, 0xe7, 0x10,
  0x9b, 0x87, 0xd7, 0xf9, 0xbe, 0x86, 0x1b, 0x87, 0x06, 0x00, 0xd5, 0x47,
  0x63, 0xe7, 0xe7, 0x10, 0x93, 0x97, 0x06, 0x02, 0x81, 0x93, 0x13, 0x97,
  0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x33, 0xba, 0x97,
  0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0xa7, 0x32, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x22, 0xf4, 0xfc,
  0x83, 0x27, 0x44, 0xfc, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0x9f, 0xac, 0xf1, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27,
  0x44, 0xfd, 0x01, 0x46, 0xc1, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xaa,
  0x6d, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfc, 0x13, 0x05, 0x00, 0x03,
  0xef, 0xf0, 0x1f, 0xa5, 0x13, 0x05, 0x80, 0x07, 0xef, 0xf0, 0x9f, 0xa4,
  0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0, 0xdf, 0xb8,
  0x69, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x28, 0x23, 0x3c,
  0xf4, 0xfc, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x13, 0x87, 0x17, 0x00,
  0x23, 0x3c, 0xe4, 0xfc, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0,
  0xff, 0x9f, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3,
  0x89, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x43, 0xa3, 0x01, 0xf4, 0xfc, 0x83, 0x47, 0x34, 0xfc,
  0x3e, 0x85, 0xef, 0xf0, 0x7f, 0x9d, 0x15, 0xa0, 0x13, 0x05, 0x50, 0x02,
  0xef, 0xf0, 0xdf, 0x9c, 0x29, 0xa8, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0,
  0x3f, 0x9c, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0x9b, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0xe3, 0x92, 0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70, 0x46, 0x74,
  0x29, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfe, 0x13, 0x87,
  0x17, 0x00, 0x23, 0x34, 0xe4, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0xdf, 0x96, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0xed, 0xf3, 0x01, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64, 0x05, 0x61,
  0x82, 0x80, 0x2d, 0x71, 0x06, 0xee, 0x22, 0xea, 0x00, 0x12, 0x05, 0x45,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x47, 0x21, 0xbe, 0x85, 0x09, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfe,
  0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x27, 0x20, 0xbe, 0x85,
  0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x3c,
  0xa4, 0xfc, 0x23, 0x34, 0x04, 0xfe, 0x01, 0x45, 0x93, 0x07, 0x84, 0xf6,
  0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x38, 0xa4, 0xfc, 0x05, 0x45, 0x93, 0x07, 0x84, 0xf6, 0xbe, 0x85,
  0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34,
  0xa4, 0xfc, 0x03, 0x47, 0x84, 0xf6, 0x83, 0x37, 0x84, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x80, 0xe7, 0xf8, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x47, 0x84, 0xf6, 0x3e, 0x87, 0xb5, 0x47,
  0x63, 0x09, 0xf7, 0x00, 0x83, 0x47, 0x84, 0xf6, 0x3e, 0x87, 0xa9, 0x47,
  0x63, 0x05, 0xf7, 0x00, 0x4d, 0xb7, 0x01, 0x00, 0x11, 0xa0, 0x01, 0x00,
  0x83, 0x37, 0x84, 0xfe, 0xfd, 0x17, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x80,
  0x07, 0xf8, 0x05, 0x45, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x16,
  0xbe, 0x85, 0x09, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x30, 0xa4, 0xfc, 0x83, 0x47, 0x04, 0xf7, 0xc1, 0xc7, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x2e, 0xf4, 0xfa,
  0x83, 0x27, 0xc4, 0xfb, 0x81, 0x27, 0x63, 0xd0, 0x07, 0x02, 0x09, 0x45,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x14, 0xbe, 0x85, 0x31, 0x46,
  0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x38, 0xa4, 0xfa,
  0x99, 0xa8, 0x83, 0x27, 0xc4, 0xfb, 0x81, 0x27, 0x99, 0xef, 0x93, 0x07,
  0x04, 0xf7, 0x3e, 0x85, 0x83, 0x27, 0x84, 0xfb, 0xbe, 0x85, 0x93, 0x08,
  0x50, 0x04, 0x73, 0x00, 0x00, 0x00, 0x19, 0x45, 0xef, 0xf0, 0x1f, 0x81,
  0xf9, 0xbd, 0x23, 0x22, 0x04, 0xee, 0x93, 0x07, 0x44, 0xee, 0x3e, 0x85,
  0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x81, 0x27,
  0x23, 0x2e, 0xf4, 0xfa, 0x83, 0x27, 0x44, 0xee, 0xbe, 0x85, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x25, 0x0f, 0xef, 0xf0, 0xbf, 0xb4, 0x45, 0xbd,
  0x01, 0x00, 0x75, 0xb5, 0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00,
  0x13, 0x05, 0x04, 0x00, 0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00,
  0xef, 0xf0, 0x1f, 0x93, 0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0x8f, 0xfd,
  0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00,
  0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00, 0x83, 0x32, 0x84, 0xfd,
  0x13, 0x85, 0x02, 0x00, 0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00,
  0xef, 0xf0, 0x1f, 0x90, 0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0x8f, 0xfa,
  0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00,
  0x9e, 0xfd, 0xff, 0xff, 0xe2, 0xfc, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0xc6, 0xfd, 0xff, 0xff, 0x26, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0xc6, 0xfd, 0xff, 0xff, 0x56, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0x04, 0xfd, 0xff, 0xff, 0x0d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x6f, 0x72, 0x6b,
  0x20, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00,
  0x0d, 0x0a, 0x77, 0x61, 0x69, 0x74, 0x20, 0x73, 0x74, 0x61, 0x74, 0x75,
  0x73, 0x20, 0x25, 0x64, 0x0d, 0x0a, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20,
  0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29,
  0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x65, 0x00, 0x00,
  0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x5b, 0x00, 0x00, 0x00,
  0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f,
  0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32,
  0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69,
  0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d,
  0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6c, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x80, 0x01, 0x11, 0x00, 0x10, 0x06, 0x11, 0x01, 0x12, 0x01, 0x03,
  0x0e, 0x1b, 0x0e, 0x25, 0x0e, 0x13, 0x05, 0x00, 0x00, 0x00, 0xb9, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x01, 0xfb, 0x0e,
  0x0a, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6d,
  0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x02, 0x10, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c,
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
  0x32, 0x35, 0x63, 0x71, 0x2f, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x39, 0x2d,
  0x64, 0x65, 0x76, 0x00, 0x47, 0x4e, 0x55, 0x20, 0x41, 0x53, 0x20, 0x32,
  0x2e, 0x34, 0x33, 0x2e, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x70, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x10, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x50, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x03, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x01, 0x00, 0x10, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x03, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x78, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x52, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x08, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x01, 0x00, 0x3c, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x03, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xb2, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x3e, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x03, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x03, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x08, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x54, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x68, 0x69,
  0x6c, 0x64, 0x2e, 0x63, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x24, 0x78,
  0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70,
  0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f,
  0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69,
  0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x6d,
  0x69, 0x6e, 0x75, 0x78, 0x2e, 0x6f, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d,
  0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31,
  0x70, 0x30, 0x00, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72, 0x00, 0x70,
  0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62,
  0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00,
  0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x00, 0x5f, 0x5f, 0x53, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f,
  0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53,
  0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f,
  0x73, 0x30, 0x5f, 0x6d, 0x69, 0x6e, 0x75, 0x73, 0x34, 0x30, 0x00, 0x5f,
  0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d,
  0x61, 0x69, 0x6e, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x69, 0x6e, 0x74,
  0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49,
  0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f,
  0x65, 0x6e, 0x64, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e,
  0x67, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74,
  0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e,
  0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d,
  0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61,
  0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x2e, 0x64,
  0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x73,
  0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x69, 0x6e, 0x66, 0x6f,
  0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x62, 0x62, 0x72,
  0x65, 0x76, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x6c, 0x69,
  0x6e, 0x65, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x73, 0x74,
  0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xee, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x0b, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf0, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x56, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int child_elf_len=5112;
typedef unsigned long  int anonymous_var_nameX33;

typedef long  int anonymous_var_nameX34;

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
typedef unsigned long  int anonymous_var_nameX37;

typedef long  int anonymous_var_nameX38;

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

struct context_t gYieldContext;
struct context_t gYieldReturnContext;
char gYieldStack[409600];
extern char stack_top[];
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

struct anonymous_typeX9
{
    struct spinlock lock;
    struct run* freelist;
};

struct anonymous_typeX9 kmem;
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
unsigned long  long gYieldSPValue;
int gFlgYieldKernel=0;
unsigned long  long gYieldUserSatp;
unsigned long  long gYieldUserSP;
unsigned long  long gYieldUserActiveProc;
static struct spinlock console_lock;
// source head




// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void* sbrk(long incr);
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
void enter_user(unsigned long  int anonymous_var_nameX361, unsigned long  int anonymous_var_nameX362, unsigned long  int anonymous_var_nameX363, unsigned long  long anonymous_var_nameX364);
void timerinit();
struct proc* get_current_proc();
void append_mapping_values(void* user_va, void* pa, unsigned long  int size);
void global_init();
static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self);
static void list$1proc$ph_finalize(struct list$1proc$ph* self);
int main();
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
unsigned long  long x_1;
memset(&x_1, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_1));
    return x_1;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_7;
memset(&x_7, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_7));
    return x_7;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_8;
memset(&x_8, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_8));
    return x_8;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_9;
    x_9=r_sstatus();
    x_9|=(1L<<1);
    w_sstatus(x_9);
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
unsigned long  long x_10;
    x_10=r_sstatus();
    return (x_10&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_175;
memset(&x_175, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_175));
    return x_175;
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
unsigned long  long x_352;
memset(&x_352, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_352));
    return x_352;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_353;
memset(&sp_val_353, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_353): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_353;
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
void* sbrk(long incr){
void* __result_obj__1;
void* prev_0;
void* __result_obj__2;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    prev_0=heap_end;
    heap_end+=incr;
    __result_obj__2 = prev_0;
    return __result_obj__2;
}

static void* kalloc_page(unsigned long  long bump){
void* p_2;
void* __result_obj__3;
    p_2=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__3 = p_2;
    return __result_obj__3;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_3;
void* base_4;
unsigned long  int i_5;
void* pg_6;
void* __result_obj__4;
    bump_3=(unsigned long  long)_end2;
    base_4=((void*)0);
    for(    i_5=0    ;    i_5<npages    ;    i_5++    ){
        pg_6=kalloc_page(bump_3);
        if(        i_5==0        ) {
            base_4=pg_6;
        }
    }
    __result_obj__4 = base_4;
    return __result_obj__4;
}

void perror(char* str){
    puts(str);
}

void panic(char* str){
    puts(str);
    puts("panic!");
}

struct cpu* mycpu(){
struct cpu* __result_obj__5;
    __result_obj__5 = &gCPU;
    return __result_obj__5;
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
int r_11;
memset(&r_11, 0, sizeof(int));
    r_11=(lk->locked&&lk->cpu==mycpu());
    return r_11;
}

void push_off(){
int old_12;
    old_12=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_12;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_13;
    c_13=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_13->noff<1    ) {
        panic("pop_off");
    }
    c_13->noff-=1;
    if(    c_13->noff==0&&c_13->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_14;
p_14 = (void*)0;
    p_14=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_14+4096<=(char*)pa_end    ;    p_14+=4096    ){
        kfree(p_14);
    }
}

void kfree(void* pa){
struct run* r_15;
r_15 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_15=(struct run*)pa;
    acquire(&kmem.lock);
    r_15->next=kmem.freelist;
    kmem.freelist=r_15;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_16;
void* __result_obj__6;
r_16 = (void*)0;
    acquire(&kmem.lock);
    r_16=kmem.freelist;
    if(    r_16    ) {
        kmem.freelist=r_16->next;
    }
    release(&kmem.lock);
    if(    r_16    ) {
        memset((char*)r_16,5,4096);
    }
    __result_obj__6 = (void*)r_16;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_17;
unsigned long  long* pte_18;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    for(    level_17=2    ;    level_17>0    ;    level_17--    ){
        pte_18=(unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_17))))&511)];
        if(        *pte_18&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_18)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_18=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = (unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_19;
unsigned long  long last_20;
unsigned long  long* pte_21;
memset(&a_19, 0, sizeof(unsigned long  long));
memset(&last_20, 0, sizeof(unsigned long  long));
pte_21 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_19=va;
    last_20=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_21=walk(pagetable,a_19,1))==0        ) {
            return -1;
        }
        if(        *pte_21&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_21&1023,perm);
        }
        *pte_21=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_19==last_20        ) {
            break;
        }
        a_19+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_22;
int i_23;
    ptr_22=(unsigned int*)pa;
    for(    i_23=0    ;    i_23<count    ;    i_23++    ){
        if(        i_23%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_22+i_23));
        }
        printf("%p ",ptr_22[i_23]);
        if(        i_23%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_24;
unsigned long  long pte_25;
unsigned long  long pa_26;
unsigned long  long child_va_27;
int j_28;
    for(    i_24=0    ;    i_24<512    ;    i_24++    ){
        pte_25=pagetable[i_24];
        if(        pte_25&(1L<<0)        ) {
            pa_26=(((pte_25)>>10)<<12);
            child_va_27=va|((unsigned long  long)i_24<<(12+9*(2-level)));
            for(            j_28=0            ;            j_28<level            ;            j_28++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_27,pa_26,i_24,level);
            if(            (pte_25&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_25&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_25&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_25&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_25&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_25&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_25&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_26,child_va_27,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_29;
    satp_29=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_29));
    __asm volatile("sfence.vma zero, zero");
}

void* common_kalloc(unsigned long  int size){
void* r_33;
void* __result_obj__9;
    static unsigned long  int offset_30=0;
    const unsigned long  int base_31=(unsigned long  int)COMMON2;
    const unsigned long  int align_32=8;
    offset_30=(offset_30+(align_32-1))&~(align_32-1);
    r_33=(void*)(base_31+offset_30);
    offset_30+=size;
    __result_obj__9 = r_33;
    return __result_obj__9;
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
unsigned long  long addr_34;
int i_35;
unsigned long  long va_36;
unsigned long  long pa_37;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_34=2147483648UL    ;    addr_34<2164260864UL    ;    addr_34+=4096    ){
        mappages(kernel_pagetable,addr_34,4096,addr_34,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_35=0    ;    i_35<8    ;    i_35++    ){
        va_36=268439552UL+i_35*4096UL;
        pa_37=va_36;
        mappages(kernel_pagetable,va_36,4096UL,pa_37,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_38;
void* __result_obj__10;
void* __result_obj__11;
void* __result_obj__12;
unsigned long  long pa_39;
void* __result_obj__13;
    pte_38=walk(pagetable,va,0);
    if(    pte_38==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_38&(1L<<0))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    if(    (*pte_38&(1L<<4))==0    ) {
        __result_obj__12 = (void*)0;
        return __result_obj__12;
    }
    pa_39=(((*pte_38)>>10)<<12);
    __result_obj__13 = (void*)(pa_39+(va&(4096-1)));
    return __result_obj__13;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_40;
unsigned long  long off_41;
char* pa_42;
unsigned long  long n_43;
pa_42 = (void*)0;
    va0_40=(((dstva))&~(4096-1));
    off_41=dstva-va0_40;
    while(    len>0    ) {
        if(        (pa_42=walkaddr(pagetable,va0_40))==0        ) {
            return -1;
        }
        n_43=4096-off_41;
        if(        n_43>len        ) {
            n_43=len;
        }
        memcpy(pa_42+off_41,src,n_43);
        len-=n_43;
        src+=n_43;
        va0_40+=4096;
        off_41=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_44;
unsigned long  long va0_45;
unsigned long  long pa0_46;
memset(&n_44, 0, sizeof(unsigned long  long));
memset(&va0_45, 0, sizeof(unsigned long  long));
memset(&pa0_46, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_45=(((srcva))&~(4096-1));
        pa0_46=(unsigned long  long)walkaddr(pagetable,va0_45);
        if(        pa0_46==0        ) {
            return -1;
        }
        n_44=4096-(srcva-va0_45);
        if(        n_44>len        ) {
            n_44=len;
        }
        memmove(dst,(void*)(pa0_46+(srcva-va0_45)),n_44);
        len-=n_44;
        dst+=n_44;
        srcva=va0_45+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_47;
unsigned long  long va0_48;
unsigned long  long pa0_49;
int got_null_50;
char* dst2_51;
char* p_52;
memset(&n_47, 0, sizeof(unsigned long  long));
memset(&va0_48, 0, sizeof(unsigned long  long));
memset(&pa0_49, 0, sizeof(unsigned long  long));
    got_null_50=0;
    dst2_51=dst;
    while(    got_null_50==0&&max>0    ) {
        va0_48=(((srcva))&~(4096-1));
        pa0_49=(unsigned long  long)walkaddr(pagetable,va0_48);
        if(        pa0_49==0        ) {
            return -1;
        }
        n_47=4096-(srcva-va0_48);
        if(        n_47>max        ) {
            n_47=max;
        }
        p_52=(char*)(pa0_49+(srcva-va0_48));
        while(        n_47>0        ) {
            if(            *p_52==0            ) {
                *dst2_51=0;
                got_null_50=dst2_51-dst;
                break;
            }
            else {
                *dst2_51=*p_52;
            }
            --n_47;
            --max;
            p_52++;
            dst2_51++;
        }
        srcva=va0_48+4096;
    }
    if(    got_null_50    ) {
        dst2_51[got_null_50]=0;
        return got_null_50;
    }
    else {
        return -1;
    }
}

void setting_user_pagetable(struct proc* proc, unsigned long  long* pagetable){
int i_53;
int i_54;
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    for(    i_53=0    ;    i_53<8    ;    i_53++    ){
        mappages(pagetable,(unsigned long  long)COMMON+i_53*4096,4096,(unsigned long  long)COMMON+i_53*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    for(    i_54=0    ;    i_54<8    ;    i_54++    ){
        mappages(pagetable,(unsigned long  long)COMMON2+i_54*4096,4096,(unsigned long  long)COMMON2+i_54*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* hello_elf, int fork_flag, int exec_flag){
void* __right_value0 = (void*)0;
struct proc* result_55;
void* __right_value1 = (void*)0;
struct proc* parent_56;
void* __right_value25 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __dec_obj3;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __dec_obj4;
unsigned long  long* pagetable_121;
struct elfhdr* eh_122;
struct proghdr* ph_123;
unsigned long  long size_124;
unsigned long  long va_125;
int i_126;
void* pa_127;
void* __right_value28 = (void*)0;
struct proc* parent_128;
unsigned long  long parent_current_129;
unsigned long  long parent_stack_top_130;
unsigned long  long stack_base_131;
int i_132;
char* pa_133;
char* src_134;
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_135;
void* it_136;
void* __right_value29 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var1 = (void*)0;
void* pa_143=0;
long size_144=0;
void* __right_value30 = (void*)0;
struct proc* parent_145;
unsigned long  long stack_base_146;
int i_147;
char* pa_148;
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_149;
void* it_150;
void* __right_value31 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var2 = (void*)0;
void* pa_151=0;
long size_152=0;
    result_55=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 807, "struct proc*"));
    result_55->program=hello_elf;
    if(    fork_flag||exec_flag    ) {
        parent_56=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        __dec_obj3=result_55->mapping_values,
        result_55->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph$p_clone(parent_56->mapping_values));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    else {
        __dec_obj4=result_55->mapping_values,
        result_55->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 817, "struct map$2void$ptuple2$2void$plong$$ph*"))));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    }
    pagetable_121=(unsigned long  long*)kalloc();
    memset(pagetable_121,0,4096);
    setting_user_pagetable(result_55,pagetable_121);
    result_55->pagetable=pagetable_121;
    eh_122=(struct elfhdr*)hello_elf;
    if(    eh_122->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_123=(struct proghdr*)(hello_elf+eh_122->phoff);
    size_124=ph_123->filesz;
    result_55->vaddr=(((ph_123->vaddr))&~(4096-1));
    va_125=0;
    for(    i_126=0    ;    i_126<eh_122->phnum    ;    i_126++,ph_123++    ){
        if(        ph_123->type!=1        ) {
            continue;
        }
        for(        va_125=(((ph_123->vaddr))&~(4096-1))        ;        va_125<ph_123->vaddr+ph_123->memsz        ;        va_125+=4096        ){
            pa_127=kalloc();
            if(            !pa_127            ) {
                panic("kalloc");
            }
            memset(pa_127,0,4096);
            mappages(result_55->pagetable,va_125,4096,(unsigned long  long)pa_127,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_55->pagetable,ph_123->vaddr,hello_elf+ph_123->off,ph_123->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_128=((struct proc*)(__right_value28=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_129=parent_128->context.sp;
        parent_stack_top_130=(unsigned long  long)parent_128->stack_top;
        stack_base_131=1073741824UL-16*4096;
        for(        i_132=0        ;        i_132<16        ;        i_132++        ){
            pa_133=kalloc();
            src_134=walkaddr(parent_128->pagetable,parent_stack_top_130+i_132*4096);
            if(            src_134            ) {
                memmove(pa_133,(void*)src_134,4096);
            }
            mappages(result_55->pagetable,stack_base_131+i_132*4096,4096,(unsigned long  long)pa_133,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_55->stack_top=(char*)stack_base_131;
        result_55->context.sp=stack_base_131+16*4096;
        for(        o2_saved_135=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_128->mapping_values)),it_136=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_135))        ;        !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_135))        ;        it_136=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_135))        ){
            multiple_assign_var1=((struct tuple2$2void$plong$*)(__right_value29=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_128->mapping_values,it_136)));
            pa_143=multiple_assign_var1->v1;
            size_144=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            copyout(result_55->pagetable,(unsigned long  long)it_136,pa_143,size_144)<0            ) {
                panic("copyout");
            }
        }
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        result_55->file_table=fs_dup_table(parent_128->file_table);
    }
    else {
        parent_145=((struct proc*)(__right_value30=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value30, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        stack_base_146=1073741824UL-16*4096;
        for(        i_147=0        ;        i_147<16        ;        i_147++        ){
            pa_148=kalloc();
            mappages(result_55->pagetable,stack_base_146+i_147*4096,4096,(unsigned long  long)pa_148,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_55->stack_top=(char*)stack_base_146;
        result_55->context.sp=stack_base_146+16*4096;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            for(            o2_saved_149=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_145->mapping_values)),it_150=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_149))            ;            !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_149))            ;            it_150=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_149))            ){
                multiple_assign_var2=((struct tuple2$2void$plong$*)(__right_value31=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_145->mapping_values,it_150)));
                pa_151=multiple_assign_var2->v1;
                size_152=multiple_assign_var2->v2;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value31, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                if(                copyout(result_55->pagetable,(unsigned long  long)it_150,pa_151,size_152)<0                ) {
                    panic("copyout");
                }
            }
            come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            result_55->file_table=fs_dup_table(parent_145->file_table);
        }
        else {
            result_55->file_table=fs_init();
        }
    }
    result_55->context.mepc=eh_122->entry;
    if(    exec_flag    ) {
        list$1proc$ph_replace(gProc,gActiveProc,(struct proc*)come_increment_ref_count(result_55));
        user_satp=((8L<<60)|(((unsigned long  long)result_55->pagetable)>>12));
        user_sp=result_55->context.sp;
    }
    else {
        list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_55));
    }
    come_call_finalizer(proc_finalize, result_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_57;
int i_58;
struct proc* __result_obj__14;
struct proc* default_value_63;
struct proc* __result_obj__15;
default_value_63 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_57=self->head;
    i_58=0;
    while(    it_57!=((void*)0)    ) {
        if(        position==i_58        ) {
            __result_obj__14 = (struct proc*)come_increment_ref_count(it_57->item);
            come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__14;
        }
        it_57=it_57->next;
        i_58++;
    }
    memset(&default_value_63,0,sizeof(struct proc*));
    __result_obj__15 = (struct proc*)come_increment_ref_count(default_value_63);
    come_call_finalizer(proc_finalize, default_value_63, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static void proc_finalize(struct proc* self){
    if(    self!=((void*)0)&&self->mapping_values!=((void*)0)    ) {
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, self->mapping_values, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2void$ptuple2$2void$plong$$ph$p_finalize(struct map$2void$ptuple2$2void$plong$$ph* self){
int i_59;
int i_60;
    for(    i_59=0    ;    i_59<self->size    ;    i_59++    ){
        if(        self->item_existance[i_59]        ) {
            if(            1            ) {
                come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[i_59], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_60=0    ;    i_60<self->size    ;    i_60++    ){
        if(        self->item_existance[i_60]        ) {
            if(            0            ) {
                (self->keys[i_60] = come_decrement_ref_count(self->keys[i_60], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
struct list_item$1void$p* it_61;
struct list_item$1void$p* prev_it_62;
    it_61=self->head;
    while(    it_61!=((void*)0)    ) {
        prev_it_62=it_61;
        it_61=it_61->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_64;
int i_65;
struct proc* __result_obj__16;
struct proc* default_value_66;
struct proc* __result_obj__17;
default_value_66 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_64=self->head;
    i_65=0;
    while(    it_64!=((void*)0)    ) {
        if(        position==i_65        ) {
            __result_obj__16 = (struct proc*)come_increment_ref_count(it_64->item);
            come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__16;
        }
        it_64=it_64->next;
        i_65++;
    }
    memset(&default_value_66,0,sizeof(struct proc*));
    __result_obj__17 = (struct proc*)come_increment_ref_count(default_value_66);
    come_call_finalizer(proc_finalize, default_value_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph$p_clone(struct map$2void$ptuple2$2void$plong$$ph* self){
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__18;
void* __right_value2 = (void*)0;
void* __right_value8 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* result_70;
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
struct list$1void$p* __dec_obj2;
void* it_73;
struct tuple2$2void$plong$* default_value_76;
void* __right_value11 = (void*)0;
struct tuple2$2void$plong$* it2_79;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__45;
default_value_76 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__18 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__18;
    }
    result_70=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "/usr/local/include/comelang.h", 1995, "struct map$2void$ptuple2$2void$plong$$ph*"))));
    __dec_obj2=result_70->key_list,
    result_70->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1997, "struct list$1void$p*"))));
    come_call_finalizer(list$1void$p_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    for(    it_73=map$2void$ptuple2$2void$plong$$ph_begin(self)    ;    !map$2void$ptuple2$2void$plong$$ph_end(self)    ;    it_73=map$2void$ptuple2$2void$plong$$ph_next(self)    ){
        memset(&default_value_76,0,sizeof(struct tuple2$2void$plong$*));
        it2_79=(struct tuple2$2void$plong$*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_at(self,it_73,(struct tuple2$2void$plong$*)come_increment_ref_count(default_value_76)));
        if(        0&&1        ) {
            map$2void$ptuple2$2void$plong$$ph_put(result_70,it_73,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_79)));
        }
        else if(        0        ) {
            map$2void$ptuple2$2void$plong$$ph_put(result_70,it_73,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_79)));
        }
        else if(        1        ) {
            map$2void$ptuple2$2void$plong$$ph_put(result_70,it_73,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_79)));
        }
        else {
            map$2void$ptuple2$2void$plong$$ph_put(result_70,it_73,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_clone(it2_79)));
        }
        come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(tuple2$2void$plong$$p_finalize, it2_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    __result_obj__45 = (struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(result_70);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, result_70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_initialize(struct map$2void$ptuple2$2void$plong$$ph* self){
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
int i_67;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct list$1void$p* __dec_obj1;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__20;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value3=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1924, "void**"))));
    self->items=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value4=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(128)), "/usr/local/include/comelang.h", 1925, "struct tuple2$2void$plong$**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value5=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1926, "_Bool*"))));
    for(    i_67=0    ;    i_67<128    ;    i_67++    ){
        self->item_existance[i_67]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj1=self->key_list,
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1936, "struct list$1void$p*"))));
    come_call_finalizer(list$1void$p_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__20 = (struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__20, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__20;
}

static struct list$1void$p* list$1void$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__19;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__19 = (struct list$1void$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1void$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1void$p$p_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_68;
struct list_item$1void$p* prev_it_69;
    it_68=self->head;
    while(    it_68!=((void*)0)    ) {
        prev_it_69=it_68;
        it_68=it_68->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void* map$2void$ptuple2$2void$plong$$ph_begin(struct map$2void$ptuple2$2void$plong$$ph* self){
void* result_71;
void* __result_obj__21;
void* __result_obj__22;
void* result_72;
void* __result_obj__23;
result_71 = (void*)0;
result_72 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_71,0,sizeof(void*));
        __result_obj__21 = result_71;
        return __result_obj__21;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__22 = self->key_list->it->item;
        return __result_obj__22;
    }
    memset(&result_72,0,sizeof(void*));
    __result_obj__23 = result_72;
    return __result_obj__23;
}

static _Bool map$2void$ptuple2$2void$plong$$ph_end(struct map$2void$ptuple2$2void$plong$$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$ptuple2$2void$plong$$ph_next(struct map$2void$ptuple2$2void$plong$$ph* self){
void* result_74;
void* __result_obj__24;
void* __result_obj__25;
void* result_75;
void* __result_obj__26;
result_74 = (void*)0;
result_75 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_74,0,sizeof(void*));
        __result_obj__24 = result_74;
        return __result_obj__24;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__25 = self->key_list->it->item;
        return __result_obj__25;
    }
    memset(&result_75,0,sizeof(void*));
    __result_obj__26 = result_75;
    return __result_obj__26;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_at(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* default_value){
unsigned int hash_77;
unsigned int it_78;
struct tuple2$2void$plong$* __result_obj__27;
struct tuple2$2void$plong$* __result_obj__28;
struct tuple2$2void$plong$* __result_obj__29;
struct tuple2$2void$plong$* __result_obj__30;
    hash_77=voidp_get_hash_key(((void*)key))%self->size;
    it_78=hash_77;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_78]        ) {
            if(            voidp_equals(self->keys[it_78],key)            ) {
                __result_obj__27 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_78]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__27;
            }
            it_78++;
            if(            it_78>=self->size            ) {
                it_78=0;
            }
            else if(            it_78==hash_77            ) {
                __result_obj__28 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__28;
            }
        }
        else {
            __result_obj__29 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__29;
        }
    }
    __result_obj__30 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__30;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_put(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_91;
int it_92;
_Bool same_key_exist_109;
void* it2_112;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__42;
    if(    self->len*2>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_91=voidp_get_hash_key(((void*)key))%self->size;
    it_92=hash_91;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_92]        ) {
            if(            voidp_equals(self->keys[it_92],key)            ) {
                if(                0                ) {
                    (self->keys[it_92] = come_decrement_ref_count(self->keys[it_92], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    list$1void$p_remove(self->key_list,self->keys[it_92]);
                    self->keys[it_92]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_92]);
                    self->keys[it_92]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_92], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_92]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_92]=item;
                }
                break;
            }
            it_92++;
            if(            it_92>=self->size            ) {
                it_92=0;
            }
            else if(            it_92==hash_91            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_92]=(_Bool)1;
            if(            0            ) {
                self->keys[it_92]=key;
            }
            else {
                self->keys[it_92]=key;
            }
            if(            1            ) {
                self->items[it_92]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_92]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_109=(_Bool)0;
    for(    it2_112=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_112=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_112,key)        ) {
            same_key_exist_109=(_Bool)1;
        }
    }
    if(    !same_key_exist_109    ) {
        list$1void$p_push_back(self->key_list,key);
    }
    __result_obj__42 = self;
    come_call_finalizer(tuple2$2void$plong$$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

static void map$2void$ptuple2$2void$plong$$ph_rehash(struct map$2void$ptuple2$2void$plong$$ph* self){
int size_80;
void* __right_value12 = (void*)0;
void** keys_81;
void* __right_value13 = (void*)0;
struct tuple2$2void$plong$** items_82;
void* __right_value14 = (void*)0;
_Bool* item_existance_83;
int len_84;
void* it_85;
struct tuple2$2void$plong$* default_value_86;
void* __right_value15 = (void*)0;
struct tuple2$2void$plong$* it2_87;
unsigned int hash_88;
int n_89;
struct tuple2$2void$plong$* default_value_90;
void* __right_value16 = (void*)0;
default_value_86 = (void*)0;
default_value_90 = (void*)0;
    size_80=self->size*10;
    keys_81=(void**)come_increment_ref_count(((void**)(__right_value12=(void**)come_calloc_v2(1, sizeof(void*)*(1*(size_80)), "/usr/local/include/comelang.h", 2163, "void**"))));
    items_82=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value13=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(size_80)), "/usr/local/include/comelang.h", 2164, "struct tuple2$2void$plong$**"))));
    item_existance_83=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value14=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_80)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_84=0;
    for(    it_85=map$2void$ptuple2$2void$plong$$ph_begin(self)    ;    !map$2void$ptuple2$2void$plong$$ph_end(self)    ;    it_85=map$2void$ptuple2$2void$plong$$ph_next(self)    ){
        memset(&default_value_86,0,sizeof(struct tuple2$2void$plong$*));
        it2_87=((struct tuple2$2void$plong$*)(__right_value15=map$2void$ptuple2$2void$plong$$ph_at(self,it_85,(struct tuple2$2void$plong$*)come_increment_ref_count(default_value_86))));
        come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        hash_88=voidp_get_hash_key(((void*)it_85))%size_80;
        n_89=hash_88;
        while(        (_Bool)1        ) {
            if(            item_existance_83[n_89]            ) {
                n_89++;
                if(                n_89>=size_80                ) {
                    n_89=0;
                }
                else if(                n_89==hash_88                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_83[n_89]=(_Bool)1;
                keys_81[n_89]=it_85;
                items_82[n_89]=((struct tuple2$2void$plong$*)(__right_value16=map$2void$ptuple2$2void$plong$$ph_at(self,it_85,(struct tuple2$2void$plong$*)come_increment_ref_count(default_value_90))));
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
                len_84++;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                break;
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
        come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_81;
    self->items=items_82;
    self->item_existance=item_existance_83;
    self->size=size_80;
    self->len=len_84;
}

static struct list$1void$p* list$1void$p_remove(struct list$1void$p* self, void* item){
int it2_93;
struct list_item$1void$p* it_94;
struct list$1void$p* __result_obj__34;
    it2_93=0;
    it_94=self->head;
    while(    it_94!=((void*)0)    ) {
        if(        voidp_equals(it_94->item,item)        ) {
            list$1void$p_delete(self,it2_93,it2_93+1);
            break;
        }
        it2_93++;
        it_94=it_94->next;
    }
    __result_obj__34 = self;
    return __result_obj__34;
}

static struct list$1void$p* list$1void$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_95;
struct list$1void$p* __result_obj__31;
struct list_item$1void$p* it_98;
int i_99;
struct list_item$1void$p* prev_it_100;
struct list_item$1void$p* it_101;
int i_102;
struct list_item$1void$p* prev_it_103;
struct list_item$1void$p* it_104;
struct list_item$1void$p* head_prev_it_105;
struct list_item$1void$p* tail_it_106;
int i_107;
struct list_item$1void$p* prev_it_108;
struct list$1void$p* __result_obj__33;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_95=tail;
        tail=head;
        head=tmp_95;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__31 = self;
        return __result_obj__31;
    }
    if(    head==0&&tail==self->len    ) {
        list$1void$p_reset(self);
    }
    else if(    head==0    ) {
        it_98=self->head;
        i_99=0;
        while(        it_98!=((void*)0)        ) {
            if(            i_99<tail            ) {
                prev_it_100=it_98;
                it_98=it_98->next;
                i_99++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_99==tail            ) {
                self->head=it_98;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_98=it_98->next;
                i_99++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_101=self->head;
        i_102=0;
        while(        it_101!=((void*)0)        ) {
            if(            i_102==head            ) {
                self->tail=it_101->prev;
                self->tail->next=((void*)0);
            }
            if(            i_102>=head            ) {
                prev_it_103=it_101;
                it_101=it_101->next;
                i_102++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_101=it_101->next;
                i_102++;
            }
        }
    }
    else {
        it_104=self->head;
        head_prev_it_105=((void*)0);
        tail_it_106=((void*)0);
        i_107=0;
        while(        it_104!=((void*)0)        ) {
            if(            i_107==head            ) {
                head_prev_it_105=it_104->prev;
            }
            if(            i_107==tail            ) {
                tail_it_106=it_104;
            }
            if(            i_107>=head&&i_107<tail            ) {
                prev_it_108=it_104;
                it_104=it_104->next;
                i_107++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_104=it_104->next;
                i_107++;
            }
        }
        if(        head_prev_it_105!=((void*)0)        ) {
            head_prev_it_105->next=tail_it_106;
        }
        if(        tail_it_106!=((void*)0)        ) {
            tail_it_106->prev=head_prev_it_105;
        }
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1void$p* list$1void$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_96;
struct list_item$1void$p* prev_it_97;
struct list$1void$p* __result_obj__32;
    it_96=self->head;
    while(    it_96!=((void*)0)    ) {
        prev_it_97=it_96;
        it_96=it_96->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__32 = self;
    return __result_obj__32;
}

static void* list$1void$p_begin(struct list$1void$p* self){
void* result_110;
void* __result_obj__35;
void* __result_obj__36;
void* result_111;
void* __result_obj__37;
result_110 = (void*)0;
result_111 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_110,0,sizeof(void*));
        __result_obj__35 = result_110;
        return __result_obj__35;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__36 = self->it->item;
        return __result_obj__36;
    }
    memset(&result_111,0,sizeof(void*));
    __result_obj__37 = result_111;
    return __result_obj__37;
}

static _Bool list$1void$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p_next(struct list$1void$p* self){
void* result_113;
void* __result_obj__38;
void* __result_obj__39;
void* result_114;
void* __result_obj__40;
result_113 = (void*)0;
result_114 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_113,0,sizeof(void*));
        __result_obj__38 = result_113;
        return __result_obj__38;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__39 = self->it->item;
        return __result_obj__39;
    }
    memset(&result_114,0,sizeof(void*));
    __result_obj__40 = result_114;
    return __result_obj__40;
}

static struct list$1void$p* list$1void$p_push_back(struct list$1void$p* self, void* item){
void* __right_value17 = (void*)0;
struct list_item$1void$p* litem_115;
void* __right_value18 = (void*)0;
struct list_item$1void$p* litem_116;
void* __right_value19 = (void*)0;
struct list_item$1void$p* litem_117;
struct list$1void$p* __result_obj__41;
    if(    self->len==0    ) {
        litem_115=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value17=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1void$p*"))));
        litem_115->prev=((void*)0);
        litem_115->next=((void*)0);
        litem_115->item=item;
        self->tail=litem_115;
        self->head=litem_115;
    }
    else if(    self->len==1    ) {
        litem_116=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value18=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1void$p*"))));
        litem_116->prev=self->head;
        litem_116->next=((void*)0);
        litem_116->item=item;
        self->tail=litem_116;
        self->head->next=litem_116;
    }
    else {
        litem_117=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value19=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1void$p*"))));
        litem_117->prev=self->tail;
        litem_117->next=((void*)0);
        litem_117->item=item;
        self->tail->next=litem_117;
        self->tail=litem_117;
    }
    self->len++;
    __result_obj__41 = self;
    return __result_obj__41;
}

static struct tuple2$2void$plong$* tuple2$2void$plong$_clone(struct tuple2$2void$plong$* self){
struct tuple2$2void$plong$* __result_obj__43;
void* __right_value20 = (void*)0;
struct tuple2$2void$plong$* result_118;
struct tuple2$2void$plong$* __result_obj__44;
    if(    self==(void*)0    ) {
        __result_obj__43 = (void*)come_increment_ref_count((void*)0);
        come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__43, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__43;
    }
    result_118=(struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "tuple2$2void$plong$_clone", 3, "struct tuple2$2void$plong$*"));
    if(    self!=((void*)0)    ) {
        result_118->v1=self->v1;
    }
    if(    self!=((void*)0)    ) {
        result_118->v2=self->v2;
    }
    __result_obj__44 = (struct tuple2$2void$plong$*)come_increment_ref_count(result_118);
    come_call_finalizer(tuple2$2void$plong$_finalize, result_118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

static void tuple2$2void$plong$_finalize(struct tuple2$2void$plong$* self){
}

static void map$2void$ptuple2$2void$plong$$ph_finalize(struct map$2void$ptuple2$2void$plong$$ph* self){
int i_119;
int i_120;
    for(    i_119=0    ;    i_119<self->size    ;    i_119++    ){
        if(        self->item_existance[i_119]        ) {
            if(            1            ) {
                come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[i_119], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_120=0    ;    i_120<self->size    ;    i_120++    ){
        if(        self->item_existance[i_120]        ) {
            if(            0            ) {
                (self->keys[i_120] = come_decrement_ref_count(self->keys[i_120], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph$p_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_137;
unsigned int hash_138;
unsigned int it_139;
struct tuple2$2void$plong$* __result_obj__46;
struct tuple2$2void$plong$* __result_obj__47;
struct tuple2$2void$plong$* __result_obj__48;
struct tuple2$2void$plong$* __result_obj__49;
default_value_137 = (void*)0;
    memset(&default_value_137,0,sizeof(struct tuple2$2void$plong$*));
    hash_138=voidp_get_hash_key(((void*)key))%self->size;
    it_139=hash_138;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_139]        ) {
            if(            voidp_equals(self->keys[it_139],key)            ) {
                __result_obj__46 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_139]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__46;
            }
            it_139++;
            if(            it_139>=self->size            ) {
                it_139=0;
            }
            else if(            it_139==hash_138            ) {
                __result_obj__47 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_137);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__47;
            }
        }
        else {
            __result_obj__48 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_137);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__48;
        }
    }
    __result_obj__49 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_137);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_140;
unsigned int hash_141;
unsigned int it_142;
struct tuple2$2void$plong$* __result_obj__50;
struct tuple2$2void$plong$* __result_obj__51;
struct tuple2$2void$plong$* __result_obj__52;
struct tuple2$2void$plong$* __result_obj__53;
default_value_140 = (void*)0;
    memset(&default_value_140,0,sizeof(struct tuple2$2void$plong$*));
    hash_141=voidp_get_hash_key(((void*)key))%self->size;
    it_142=hash_141;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_142]        ) {
            if(            voidp_equals(self->keys[it_142],key)            ) {
                __result_obj__50 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_142]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__50;
            }
            it_142++;
            if(            it_142>=self->size            ) {
                it_142=0;
            }
            else if(            it_142==hash_141            ) {
                __result_obj__51 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_140);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__51;
            }
        }
        else {
            __result_obj__52 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_140);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__52;
        }
    }
    __result_obj__53 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_140);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item){
int len_153;
int i_154;
struct proc* default_value_155;
struct list$1proc$ph* __result_obj__55;
struct list_item$1proc$ph* it_159;
int i_160;
struct proc* __dec_obj8;
struct list$1proc$ph* __result_obj__56;
default_value_155 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_153=self->len;
        for(        i_154=0        ;        i_154<position-len_153        ;        i_154++        ){
            memset(&default_value_155,0,sizeof(struct proc*));
            list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(default_value_155));
            come_call_finalizer(proc_finalize, default_value_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(item));
        __result_obj__55 = self;
        come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__55;
    }
    it_159=self->head;
    i_160=0;
    while(    it_159!=((void*)0)    ) {
        if(        position==i_160        ) {
            __dec_obj8=it_159->item,
            it_159->item=(struct proc*)come_increment_ref_count(item);
            come_call_finalizer(proc_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_159=it_159->next;
        i_160++;
    }
    __result_obj__56 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__56;
}

static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item){
void* __right_value32 = (void*)0;
struct list_item$1proc$ph* litem_156;
struct proc* __dec_obj5;
void* __right_value33 = (void*)0;
struct list_item$1proc$ph* litem_157;
struct proc* __dec_obj6;
void* __right_value34 = (void*)0;
struct list_item$1proc$ph* litem_158;
struct proc* __dec_obj7;
struct list$1proc$ph* __result_obj__54;
    if(    self->len==0    ) {
        litem_156=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value32=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1proc$ph*"))));
        litem_156->prev=((void*)0);
        litem_156->next=((void*)0);
        __dec_obj5=litem_156->item,
        litem_156->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_156;
        self->head=litem_156;
    }
    else if(    self->len==1    ) {
        litem_157=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value33=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1proc$ph*"))));
        litem_157->prev=self->head;
        litem_157->next=((void*)0);
        __dec_obj6=litem_157->item,
        litem_157->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_157;
        self->head->next=litem_157;
    }
    else {
        litem_158=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value34=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1proc$ph*"))));
        litem_158->prev=self->tail;
        litem_158->next=((void*)0);
        __dec_obj7=litem_158->item,
        litem_158->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_158;
        self->tail=litem_158;
    }
    self->len++;
    __result_obj__54 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__54;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value35 = (void*)0;
struct list_item$1proc$ph* litem_161;
struct proc* __dec_obj9;
void* __right_value36 = (void*)0;
struct list_item$1proc$ph* litem_162;
struct proc* __dec_obj10;
void* __right_value37 = (void*)0;
struct list_item$1proc$ph* litem_163;
struct proc* __dec_obj11;
struct list$1proc$ph* __result_obj__57;
    if(    self->len==0    ) {
        litem_161=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value35=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_161->prev=((void*)0);
        litem_161->next=((void*)0);
        __dec_obj9=litem_161->item,
        litem_161->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_161;
        self->head=litem_161;
    }
    else if(    self->len==1    ) {
        litem_162=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value36=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_162->prev=self->head;
        litem_162->next=((void*)0);
        __dec_obj10=litem_162->item,
        litem_162->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_162;
        self->head->next=litem_162;
    }
    else {
        litem_163=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value37=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_163->prev=self->tail;
        litem_163->next=((void*)0);
        __dec_obj11=litem_163->item,
        litem_163->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj11,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_163;
        self->tail=litem_163;
    }
    self->len++;
    __result_obj__57 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__57;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_164;
unsigned long  long* __result_obj__58;
unsigned long  long* __result_obj__59;
pagetable_164 = (void*)0;
    pagetable_164=(unsigned long  long*)kalloc();
    if(    pagetable_164==0    ) {
        __result_obj__58 = (unsigned long  long*)0;
        return __result_obj__58;
    }
    memset(pagetable_164,0,4096);
    __result_obj__59 = pagetable_164;
    return __result_obj__59;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__165;
unsigned long  long* __result_obj__60;
unsigned long  long addr_166;
unsigned long  long* pte_167;
unsigned long  long pa_168;
unsigned int flags_169;
char* mem_170;
unsigned long  long* __result_obj__61;
new__165 = (void*)0;
    new__165=uvmcreate();
    if(    new__165==0    ) {
        __result_obj__60 = (unsigned long  long*)0;
        return __result_obj__60;
    }
    for(    addr_166=0    ;    addr_166<sz    ;    addr_166+=4096    ){
        pte_167=walk(old,addr_166,0);
        if(        !pte_167||!(*pte_167&(1L<<0))        ) {
            continue;
        }
        pa_168=(((*pte_167)>>10)<<12);
        flags_169=((*pte_167)&1023);
        mem_170=kalloc();
        if(        mem_170==0        ) {
            panic("coypuvm");
        }
        memmove(mem_170,(char*)pa_168,4096);
        if(        mappages(new__165,addr_166,4096,((((unsigned long  long)mem_170)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_170);
            panic("copyuvm");
        }
    }
    __result_obj__61 = new__165;
    return __result_obj__61;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_171;
unsigned long  long pte_172;
unsigned long  long pa_173;
unsigned long  long* child_174;
    for(    i_171=0    ;    i_171<512    ;    i_171++    ){
        pte_172=pagetable[i_171];
        if(        !(pte_172&(1L<<0))        ) {
            continue;
        }
        pa_173=(((pte_172)>>10)<<12);
        if(        pte_172&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_173);
            }
        }
        else if(        level>0        ) {
            child_174=(unsigned long  long*)pa_173;
            free_pagetable(child_174,level-1);
            kfree(child_174);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value38 = (void*)0;
struct file* __result_obj__62;
    __result_obj__62 = ((struct proc*)(__right_value38=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__62;
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
unsigned long  int x_176;
memset(&x_176, 0, sizeof(unsigned long  int));
    x_176=r_sie();
    x_176|=(1UL<<5);
    w_sie(x_176);
    x_176=r_sstatus();
    x_176|=(1UL<<1);
    w_sstatus(x_176);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_177;
    next_177=r_time()+10000UL;
    w_stimecmp(next_177);
}

void kernel_yield(){
char* top_178;
char* tail_179;
    gYieldReturnContext=*(struct context_t*)TRAPFRAME;
    gYieldUserSatp=user_satp;
    gYieldUserSP=user_sp;
    gYieldUserActiveProc=gActiveProc;
    gYieldContext=*(struct context_t*)TRAPFRAME2;
    top_178=stack_top;
    tail_179=(char*)gYieldSPValue;
    gFlgYieldKernel=1;
    timer_handler();
}

void kernel_yield_return(){
struct context_t* trapframe_180;
    gFlgYieldKernel=0;
    user_satp=gYieldUserSatp;
    user_sp=gYieldUserSP;
    gActiveProc=gYieldUserActiveProc;
    trapframe_180=(struct context_t*)TRAPFRAME2;
    *trapframe_180=gYieldContext;
    trapframe_180=(struct context_t*)TRAPFRAME;
    *trapframe_180=gYieldReturnContext;
    yield_return();
}

void timer_handler(){
void* __right_value39 = (void*)0;
struct proc* p_181;
struct context_t* tf_182;
int old_active_proc_183;
void* __right_value40 = (void*)0;
struct proc* old_184;
void* __right_value41 = (void*)0;
struct proc* new__185;
unsigned long  long a0_186;
    disable_timer_interrupts();
    p_181=((struct proc*)(__right_value39=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value39, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_182=(struct context_t*)TRAPFRAME;
    p_181->context=*tf_182;
    timer_reset();
    old_active_proc_183=gActiveProc;
    old_184=((struct proc*)(__right_value40=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value40, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        if(        gFlgYieldKernel        ) {
            gActiveProc=0;
            kernel_yield_return();
        }
        else {
            gActiveProc=0;
        }
    }
    new__185=((struct proc*)(__right_value41=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value41, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__185!=old_184&&new__185->zombie==0    ) {
        user_sp=new__185->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__185->pagetable)>>12));
        old_184->context=*(struct context_t*)TRAPFRAME;
        a0_186=new__185->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_186));
        swtch(&new__185->context);
    }
    else {
        gActiveProc=old_active_proc_183;
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
struct context_t* trapframe_187;
unsigned long  int arg0_188;
unsigned long  int arg1_189;
unsigned long  int arg2_190;
unsigned long  int arg3_191;
unsigned long  int arg4_192;
unsigned long  int arg5_193;
unsigned long  int arg6_194;
unsigned long  int arg_syscall_no_195;
int fd_196;
unsigned long  long user_va_198;
int len_199;
void* __right_value42 = (void*)0;
struct proc* p_200;
int ret_201;
int i_202;
struct file* f_203;
    trapframe_187=(struct context_t*)TRAPFRAME;
    arg0_188=trapframe_187->a0;
    arg1_189=trapframe_187->a1;
    arg2_190=trapframe_187->a2;
    arg3_191=trapframe_187->a3;
    arg4_192=trapframe_187->a4;
    arg5_193=trapframe_187->a5;
    arg6_194=trapframe_187->a6;
    arg_syscall_no_195=trapframe_187->a7;
    fd_196=arg0_188;
    char kernel_buf_197[256];
    memset(&kernel_buf_197, 0, sizeof(char)    *(256)    );
    user_va_198=arg1_189;
    len_199=arg2_190;
    memset(kernel_buf_197,0,256);
    p_200=((struct proc*)(__right_value42=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value42, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_201=copyin(p_200->pagetable,kernel_buf_197,user_va_198,len_199);
    if(    ret_201<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_196)    ) {
        pipewrite(fd_196,kernel_buf_197,len_199);
    }
    else if(    is_stdout(fd_196)    ) {
        for(        i_202=0        ;        i_202<len_199        ;        i_202++        ){
            putchar(kernel_buf_197[i_202]);
        }
    }
    else {
        panic("write");
    }
    f_203=get_current_file_table();
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_204;
unsigned long  int arg0_205;
unsigned long  int arg1_206;
unsigned long  int arg2_207;
unsigned long  int arg3_208;
unsigned long  int arg4_209;
unsigned long  int arg5_210;
unsigned long  int arg6_211;
unsigned long  int arg_syscall_no_212;
void* __right_value43 = (void*)0;
struct proc* p_213;
    trapframe_204=(struct context_t*)TRAPFRAME;
    arg0_205=trapframe_204->a0;
    arg1_206=trapframe_204->a1;
    arg2_207=trapframe_204->a2;
    arg3_208=trapframe_204->a3;
    arg4_209=trapframe_204->a4;
    arg5_210=trapframe_204->a5;
    arg6_211=trapframe_204->a6;
    arg_syscall_no_212=trapframe_204->a7;
    p_213=((struct proc*)(__right_value43=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value43, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_213->xstatus=arg0_205;
    p_213->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_214;
unsigned long  int arg0_215;
unsigned long  int arg1_216;
unsigned long  int arg2_217;
unsigned long  int arg3_218;
unsigned long  int arg4_219;
unsigned long  int arg5_220;
unsigned long  int arg6_221;
unsigned long  int arg_syscall_no_222;
int* status_va_223;
int exit_status_224;
int child_pid_225;
int n_226;
struct list$1proc$ph* o2_saved_227;
struct proc* it_230;
void* __right_value44 = (void*)0;
struct proc* p_251;
    trapframe_214=(struct context_t*)TRAPFRAME;
    arg0_215=trapframe_214->a0;
    arg1_216=trapframe_214->a1;
    arg2_217=trapframe_214->a2;
    arg3_218=trapframe_214->a3;
    arg4_219=trapframe_214->a4;
    arg5_220=trapframe_214->a5;
    arg6_221=trapframe_214->a6;
    arg_syscall_no_222=trapframe_214->a7;
    status_va_223=(int*)arg0_215;
    exit_status_224=0;
    child_pid_225=-1;
    while(    child_pid_225==-1    ) {
        yield();
        n_226=0;
        for(        o2_saved_227=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_230=list$1proc$ph_begin((o2_saved_227))        ;        !list$1proc$ph_end((o2_saved_227))        ;        it_230=list$1proc$ph_next((o2_saved_227))        ){
            if(            it_230->zombie            ) {
                free(it_230->file_table);
                free_proc(it_230);
                exit_status_224=it_230->xstatus;
                child_pid_225=n_226;
                list$1proc$ph_remove_by_pointer(gProc,it_230);
                break;
            }
            n_226++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    p_251=((struct proc*)(__right_value44=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value44, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_251->pagetable,(unsigned long  long)status_va_223,(void*)&exit_status_224,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_225;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_228;
struct proc* __result_obj__63;
struct proc* __result_obj__64;
struct proc* result_229;
struct proc* __result_obj__65;
result_228 = (void*)0;
result_229 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_228,0,sizeof(struct proc*));
        __result_obj__63 = result_228;
        return __result_obj__63;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__64 = self->it->item;
        return __result_obj__64;
    }
    memset(&result_229,0,sizeof(struct proc*));
    __result_obj__65 = result_229;
    return __result_obj__65;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_231;
struct proc* __result_obj__66;
struct proc* __result_obj__67;
struct proc* result_232;
struct proc* __result_obj__68;
result_231 = (void*)0;
result_232 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_231,0,sizeof(struct proc*));
        __result_obj__66 = result_231;
        return __result_obj__66;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__67 = self->it->item;
        return __result_obj__67;
    }
    memset(&result_232,0,sizeof(struct proc*));
    __result_obj__68 = result_232;
    return __result_obj__68;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_233;
struct list_item$1proc$ph* it_234;
struct list$1proc$ph* __result_obj__72;
    it2_233=0;
    it_234=self->head;
    while(    it_234!=((void*)0)    ) {
        if(        it_234->item==item        ) {
            list$1proc$ph_delete(self,it2_233,it2_233+1);
            break;
        }
        it2_233++;
        it_234=it_234->next;
    }
    __result_obj__72 = self;
    return __result_obj__72;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_235;
struct list$1proc$ph* __result_obj__69;
struct list_item$1proc$ph* it_238;
int i_239;
struct list_item$1proc$ph* prev_it_240;
struct list_item$1proc$ph* it_241;
int i_242;
struct list_item$1proc$ph* prev_it_243;
struct list_item$1proc$ph* it_244;
struct list_item$1proc$ph* head_prev_it_245;
struct list_item$1proc$ph* tail_it_246;
int i_247;
struct list_item$1proc$ph* prev_it_248;
struct list$1proc$ph* __result_obj__71;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_235=tail;
        tail=head;
        head=tmp_235;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__69 = self;
        return __result_obj__69;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_238=self->head;
        i_239=0;
        while(        it_238!=((void*)0)        ) {
            if(            i_239<tail            ) {
                prev_it_240=it_238;
                it_238=it_238->next;
                i_239++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_240, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_239==tail            ) {
                self->head=it_238;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_238=it_238->next;
                i_239++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_241=self->head;
        i_242=0;
        while(        it_241!=((void*)0)        ) {
            if(            i_242==head            ) {
                self->tail=it_241->prev;
                self->tail->next=((void*)0);
            }
            if(            i_242>=head            ) {
                prev_it_243=it_241;
                it_241=it_241->next;
                i_242++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_241=it_241->next;
                i_242++;
            }
        }
    }
    else {
        it_244=self->head;
        head_prev_it_245=((void*)0);
        tail_it_246=((void*)0);
        i_247=0;
        while(        it_244!=((void*)0)        ) {
            if(            i_247==head            ) {
                head_prev_it_245=it_244->prev;
            }
            if(            i_247==tail            ) {
                tail_it_246=it_244;
            }
            if(            i_247>=head&&i_247<tail            ) {
                prev_it_248=it_244;
                it_244=it_244->next;
                i_247++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_244=it_244->next;
                i_247++;
            }
        }
        if(        head_prev_it_245!=((void*)0)        ) {
            head_prev_it_245->next=tail_it_246;
        }
        if(        tail_it_246!=((void*)0)        ) {
            tail_it_246->prev=head_prev_it_245;
        }
    }
    __result_obj__71 = self;
    return __result_obj__71;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_236;
struct list_item$1proc$ph* prev_it_237;
struct list$1proc$ph* __result_obj__70;
    it_236=self->head;
    while(    it_236!=((void*)0)    ) {
        prev_it_237=it_236;
        it_236=it_236->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_249;
struct list_item$1proc$ph* prev_it_250;
    it_249=self->head;
    while(    it_249!=((void*)0)    ) {
        prev_it_250=it_249;
        it_249=it_249->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_252;
unsigned long  int arg0_253;
unsigned long  int arg1_254;
unsigned long  int arg2_255;
unsigned long  int arg3_256;
unsigned long  int arg4_257;
unsigned long  int arg5_258;
unsigned long  int arg6_259;
unsigned long  int arg_syscall_no_260;
unsigned long  long user_va_262;
void* __right_value45 = (void*)0;
struct proc* p_263;
int result_264;
    trapframe_252=(struct context_t*)TRAPFRAME;
    arg0_253=trapframe_252->a0;
    arg1_254=trapframe_252->a1;
    arg2_255=trapframe_252->a2;
    arg3_256=trapframe_252->a3;
    arg4_257=trapframe_252->a4;
    arg5_258=trapframe_252->a5;
    arg6_259=trapframe_252->a6;
    arg_syscall_no_260=trapframe_252->a7;
    char kernel_buf_261[256];
    memset(&kernel_buf_261, 0, sizeof(char)    *(256)    );
    user_va_262=arg0_253;
    p_263=((struct proc*)(__right_value45=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_263->pagetable,kernel_buf_261,user_va_262,256);
    result_264=fs_open(kernel_buf_261);
    return result_264;
}

int Sys_fork(){
struct context_t* trapframe_265;
unsigned long  int arg0_266;
unsigned long  int arg1_267;
unsigned long  int arg2_268;
unsigned long  int arg3_269;
unsigned long  int arg4_270;
unsigned long  int arg5_271;
unsigned long  int arg6_272;
unsigned long  int arg_syscall_no_273;
void* __right_value46 = (void*)0;
struct proc* p_274;
int fork_flag_275;
void* __right_value47 = (void*)0;
struct proc* child_276;
unsigned long  long sp_277;
int result_278;
memset(&fork_flag_275, 0, sizeof(int));
    trapframe_265=(struct context_t*)TRAPFRAME;
    arg0_266=trapframe_265->a0;
    arg1_267=trapframe_265->a1;
    arg2_268=trapframe_265->a2;
    arg3_269=trapframe_265->a3;
    arg4_270=trapframe_265->a4;
    arg5_271=trapframe_265->a5;
    arg6_272=trapframe_265->a6;
    arg_syscall_no_273=trapframe_265->a7;
    p_274=((struct proc*)(__right_value46=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_274->program,fork_flag_275=1,0);
    child_276=((struct proc*)(__right_value47=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_277=child_276->context.sp;
    child_276->context=*trapframe_265;
    child_276->context.mepc=child_276->context.mepc+4;
    child_276->context.sp=sp_277;
    child_276->context.a0=0;
    result_278=list$1proc$ph_length(gProc)-1;
    return result_278;
}

int Sys_execv(){
struct context_t* trapframe_279;
unsigned long  int arg0_280;
unsigned long  int arg1_281;
unsigned long  int arg2_282;
unsigned long  int arg3_283;
unsigned long  int arg4_284;
unsigned long  int arg5_285;
unsigned long  int arg6_286;
unsigned long  int arg_syscall_no_287;
int argc_288;
unsigned long  long user_va_290;
void* __right_value48 = (void*)0;
struct proc* p_291;
char* path_292;
int fd_294;
int ret_295;
void* __right_value49 = (void*)0;
struct proc* result_296;
    trapframe_279=(struct context_t*)TRAPFRAME;
    arg0_280=trapframe_279->a0;
    arg1_281=trapframe_279->a1;
    arg2_282=trapframe_279->a2;
    arg3_283=trapframe_279->a3;
    arg4_284=trapframe_279->a4;
    arg5_285=trapframe_279->a5;
    arg6_286=trapframe_279->a6;
    arg_syscall_no_287=trapframe_279->a7;
    argc_288=arg2_282;
    char kernel_buf_289[256];
    memset(&kernel_buf_289, 0, sizeof(char)    *(256)    );
    user_va_290=arg0_280;
    p_291=((struct proc*)(__right_value48=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_291->pagetable,kernel_buf_289,user_va_290,256);
    path_292=kernel_buf_289;
    char hello_elf_293[4096];
    memset(&hello_elf_293, 0, sizeof(char)    *(4096)    );
    fd_294=fs_open(path_292);
    ret_295=fs_read(fd_294,hello_elf_293,4096);
    if(    ret_295<0    ) {
        trapframe_279->a0=-1;
        return 0;
    }
    alloc_prog(hello_elf_293,0,1);
    result_296=((struct proc*)(__right_value49=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_279->mepc=result_296->context.mepc+4;
    trapframe_279->sp=result_296->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_297;
unsigned long  int arg0_298;
unsigned long  int arg1_299;
unsigned long  int arg2_300;
unsigned long  int arg3_301;
unsigned long  int arg4_302;
unsigned long  int arg5_303;
unsigned long  int arg6_304;
unsigned long  int arg_syscall_no_305;
int oldfd_306;
int newfd_307;
    trapframe_297=(struct context_t*)TRAPFRAME;
    arg0_298=trapframe_297->a0;
    arg1_299=trapframe_297->a1;
    arg2_300=trapframe_297->a2;
    arg3_301=trapframe_297->a3;
    arg4_302=trapframe_297->a4;
    arg5_303=trapframe_297->a5;
    arg6_304=trapframe_297->a6;
    arg_syscall_no_305=trapframe_297->a7;
    oldfd_306=arg0_298;
    newfd_307=arg1_299;
    fs_dup2(oldfd_306,newfd_307);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_308;
unsigned long  int arg0_309;
unsigned long  int arg1_310;
unsigned long  int arg2_311;
unsigned long  int arg3_312;
unsigned long  int arg4_313;
unsigned long  int arg5_314;
unsigned long  int arg6_315;
unsigned long  int arg_syscall_no_316;
char* kernel_buf_317;
unsigned long  long user_va_318;
int* fd_319;
void* __right_value50 = (void*)0;
struct proc* p_320;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
kernel_buf_317 = (void*)0;
    trapframe_308=(struct context_t*)TRAPFRAME;
    arg0_309=trapframe_308->a0;
    arg1_310=trapframe_308->a1;
    arg2_311=trapframe_308->a2;
    arg3_312=trapframe_308->a3;
    arg4_313=trapframe_308->a4;
    arg5_314=trapframe_308->a5;
    arg6_315=trapframe_308->a6;
    arg_syscall_no_316=trapframe_308->a7;
    user_va_318=arg0_309;
    fd_319=common_kalloc(sizeof(int)*2);
    pipe_open(&fd_319[0],&fd_319[1]);
    p_320=((struct proc*)(__right_value50=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_320->pagetable,(unsigned long  long)user_va_318,(char*)fd_319,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    map$2void$ptuple2$2void$plong$$ph_insert(p_320->mapping_values,(void*)user_va_318,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1578, "struct tuple2$2void$plong$")),(void*)fd_319,sizeof(int)*2)));
    return 0;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_321;
unsigned int it_322;
_Bool same_key_exist_323;
void* it2_324;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__73;
    if(    self->len*10>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_321=voidp_get_hash_key(((void*)key))%self->size;
    it_322=hash_321;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_322]        ) {
            if(            voidp_equals(self->keys[it_322],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_322]);
                    (self->keys[it_322] = come_decrement_ref_count(self->keys[it_322], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_322]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_322]);
                    self->keys[it_322]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_322], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_322]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_322]=item;
                }
                break;
            }
            it_322++;
            if(            it_322>=self->size            ) {
                it_322=0;
            }
            else if(            it_322==hash_321            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_322]=(_Bool)1;
            if(            0            ) {
                self->keys[it_322]=key;
            }
            else {
                self->keys[it_322]=key;
            }
            if(            1            ) {
                self->items[it_322]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_322]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_323=(_Bool)0;
    for(    it2_324=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_324=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_324,key)        ) {
            same_key_exist_323=(_Bool)1;
        }
    }
    if(    !same_key_exist_323    ) {
        list$1void$p_push_back(self->key_list,key);
    }
    __result_obj__73 = self;
    come_call_finalizer(tuple2$2void$plong$$p_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__73;
}

static struct tuple2$2void$plong$* tuple2$2void$plong$_initialize(struct tuple2$2void$plong$* self, void* v1, unsigned long v2){
struct tuple2$2void$plong$* __result_obj__74;
    self->v1=v1;
    self->v2=v2;
    __result_obj__74 = (struct tuple2$2void$plong$*)come_increment_ref_count(self);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

int Sys_read(){
struct context_t* trapframe_325;
unsigned long  int arg0_326;
unsigned long  int arg1_327;
unsigned long  int arg2_328;
unsigned long  int arg3_329;
unsigned long  int arg4_330;
unsigned long  int arg5_331;
unsigned long  int arg6_332;
unsigned long  int arg_syscall_no_333;
int fd_334;
unsigned long  long destva_335;
unsigned long  int n_336;
int ret_338;
void* __right_value53 = (void*)0;
struct proc* p_339;
memset(&ret_338, 0, sizeof(int));
    trapframe_325=(struct context_t*)TRAPFRAME;
    arg0_326=trapframe_325->a0;
    arg1_327=trapframe_325->a1;
    arg2_328=trapframe_325->a2;
    arg3_329=trapframe_325->a3;
    arg4_330=trapframe_325->a4;
    arg5_331=trapframe_325->a5;
    arg6_332=trapframe_325->a6;
    arg_syscall_no_333=trapframe_325->a7;
    fd_334=arg0_326;
    destva_335=arg1_327;
    n_336=arg2_328;
    char kernel_buf_337[256];
    memset(&kernel_buf_337, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_334)    ) {
        ret_338=uart_readn(kernel_buf_337,n_336);
    }
    else if(    is_pipe(fd_334)    ) {
        ret_338=piperead(fd_334,kernel_buf_337,n_336);
    }
    else {
        ret_338=fs_read(fd_334,kernel_buf_337,n_336);
        if(        ret_338<0        ) {
            trapframe_325->a0=ret_338;
            return 0;
        }
        kernel_buf_337[ret_338]=0;
    }
    p_339=((struct proc*)(__right_value53=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_339->pagetable,destva_335,kernel_buf_337,ret_338)<0    ) {
        panic("read: copyout failed");
    }
    return ret_338;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_340;
unsigned long  int arg0_341;
unsigned long  int arg1_342;
unsigned long  int arg2_343;
unsigned long  int arg3_344;
unsigned long  int arg4_345;
unsigned long  int arg5_346;
unsigned long  int arg6_347;
unsigned long  int arg_syscall_no_348;
unsigned long  long result_349;
long fd_350;
int ret_351;
    disable_timer_interrupts();
    trapframe_340=(struct context_t*)TRAPFRAME;
    arg0_341=trapframe_340->a0;
    arg1_342=trapframe_340->a1;
    arg2_343=trapframe_340->a2;
    arg3_344=trapframe_340->a3;
    arg4_345=trapframe_340->a4;
    arg5_346=trapframe_340->a5;
    arg6_347=trapframe_340->a6;
    arg_syscall_no_348=trapframe_340->a7;
    result_349=0;
    switch (    arg_syscall_no_348) {
        case 64:
        {
            result_349=Sys_write();
        }
        break;
        case 73:
        {
            result_349=Sys_pipe();
        }
        break;
        case 72:
        {
            result_349=Sys_dup2();
        }
        break;
        case 70:
        {
            result_349=Sys_exit();
        }
        break;
        case 71:
        {
            result_349=Sys_wait();
        }
        break;
        case 66:
        {
            result_349=Sys_open();
        }
        break;
        case 65:
        {
            result_349=Sys_read();
        }
        break;
        case 67:
        {
            fd_350=arg0_341;
            ret_351=fs_close(fd_350);
            result_349=ret_351;
        }
        break;
        case 68:
        {
            result_349=Sys_fork();
        }
        break;
        case 69:
        {
            result_349=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_340->a0=result_349;
    return result_349;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

struct proc* get_current_proc(){
void* __right_value54 = (void*)0;
struct proc* __result_obj__75;
    __result_obj__75 = ((struct proc*)(__right_value54=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__75;
}

void append_mapping_values(void* user_va, void* pa, unsigned long  int size){
struct proc* c_354;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
    c_354=get_current_proc();
    map$2void$ptuple2$2void$plong$$ph_insert(c_354->mapping_values,user_va,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 2539, "struct tuple2$2void$plong$")),pa,(long)size)));
}

void global_init(){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1proc$ph* __dec_obj12;
    __dec_obj12=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2544, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__76;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__76 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_355;
struct list_item$1proc$ph* prev_it_356;
    it_355=self->head;
    while(    it_355!=((void*)0)    ) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_356, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_357;
void* __right_value59 = (void*)0;
struct proc* p_358;
unsigned long  int usersp_359;
unsigned long  long usersatp_360;
unsigned long  int entry_361;
memset(&fork_flag_357, 0, sizeof(int));
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
    alloc_prog((char*)child_elf,fork_flag_357=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_358=((struct proc*)(__right_value59=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_359=(unsigned long  long)(p_358->context.sp);
    usersatp_360=((8L<<60)|(((unsigned long  long)p_358->pagetable)>>12));
    entry_361=p_358->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_358;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_361,usersp_359,usersatp_360,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__77;
struct mem_block* current_362;
struct mem_block* prev_363;
void* __result_obj__78;
struct mem_block* new_mem_364;
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
    current_362=free_list;
    prev_363=((void*)0);
    while(    current_362!=((void*)0)    ) {
        if(        current_362->size>=size        ) {
            if(            prev_363==((void*)0)            ) {
                free_list=current_362->next;
            }
            else {
                prev_363->next=current_362->next;
            }
            __result_obj__78 = (void*)(current_362+1);
            return __result_obj__78;
        }
        prev_363=current_362;
        current_362=current_362->next;
    }
    new_mem_364=(struct mem_block*)sbrk(size);
    if(    new_mem_364==(void*)-1    ) {
        __result_obj__79 = ((void*)0);
        return __result_obj__79;
    }
    new_mem_364->size=size;
    new_mem_364->next=((void*)0);
    __result_obj__80 = (void*)(new_mem_364+1);
    return __result_obj__80;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_365;
void* __result_obj__81;
void* ptr_366;
void* __result_obj__82;
    total_size_365=nmemb*size;
    if(    total_size_365==0    ) {
        __result_obj__81 = ((void*)0);
        return __result_obj__81;
    }
    ptr_366=malloc(total_size_365);
    if(    ptr_366!=((void*)0)    ) {
        memset(ptr_366,0,total_size_365);
    }
    __result_obj__82 = ptr_366;
    return __result_obj__82;
}

void free(void* ptr){
struct mem_block* block_367;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_367=(struct mem_block*)ptr-1;
    block_367->next=free_list;
    free_list=block_367;
}

char* strdup(const char* s){
char* s2_368;
unsigned long  int len_369;
char* p_370;
char* __result_obj__83;
    s2_368=s;
    len_369=strlen(s2_368)+1;
    p_370=malloc(len_369);
    if(    p_370    ) {
        memcpy(p_370,s2_368,len_369);
    }
    __result_obj__83 = p_370;
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
        const char* h_371=haystack;
        const char* n_372=needle;
        while(        *h_371&&*n_372&&(*h_371==*n_372)        ) {
            h_371++;
            n_372++;
        }
        if(        !*n_372        ) {
            __result_obj__85 = (char*)haystack;
            return __result_obj__85;
        }
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_373;
int i_374;
void* __result_obj__87;
    cdst_373=(char*)dst;
    for(    i_374=0    ;    i_374<n    ;    i_374++    ){
        cdst_373[i_374]=c;
    }
    __result_obj__87 = dst;
    return __result_obj__87;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_375;
const unsigned char* s2_376;
memset(&s1_375, 0, sizeof(const unsigned char*));
memset(&s2_376, 0, sizeof(const unsigned char*));
    s1_375=v1;
    s2_376=v2;
    while(    n-->0    ) {
        if(        *s1_375!=*s2_376        ) {
            return *s1_375-*s2_376;
        }
        s1_375++,s2_376++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_377;
char* d_378;
void* __result_obj__88;
void* __result_obj__89;
s_377 = (void*)0;
d_378 = (void*)0;
    if(    n==0    ) {
        __result_obj__88 = dst;
        return __result_obj__88;
    }
    s_377=src;
    d_378=dst;
    if(    s_377<d_378&&s_377+n>d_378    ) {
        s_377+=n;
        d_378+=n;
        while(        n-->0        ) {
            *--d_378=*--s_377;
        }
    }
    else {
        while(        n-->0        ) {
            *d_378++=*s_377++;
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
char* os_379;
char* __result_obj__91;
os_379 = (void*)0;
    os_379=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__91 = os_379;
    return __result_obj__91;
}

int strlen(const char* s){
int n_380;
memset(&n_380, 0, sizeof(int));
    for(    n_380=0    ;    s[n_380]    ;    n_380++    ){
        ;
    }
    return n_380;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_381;
char* __result_obj__92;
    d_381=dest;
    while(    *d_381    ) {
        d_381++;
    }
    while(    n--&&*src    ) {
        *d_381++=*src++;
    }
    *d_381=0;
    __result_obj__92 = dest;
    return __result_obj__92;
}

char* strtok(char* s, const char* delim){
static char* next_382;
char* start_383;
char* p_384;
char* __result_obj__93;
int is_delim_386;
char* __result_obj__94;
int is_delim_388;
char* __result_obj__95;
next_382 = (void*)0;
start_383 = (void*)0;
p_384 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_382=s;
    }
    if(    next_382==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    start_383=next_382;
    while(    *start_383!=0    ) {
        const char* d_385=delim;
        is_delim_386=0;
        while(        *d_385!=0        ) {
            if(            *start_383==*d_385            ) {
                is_delim_386=1;
                break;
            }
            d_385++;
        }
        if(        !is_delim_386        ) {
            break;
        }
        start_383++;
    }
    if(    *start_383==0    ) {
        next_382=((void*)0);
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    p_384=start_383;
    while(    *p_384!=0    ) {
        const char* d_387=delim;
        is_delim_388=0;
        while(        *d_387!=0        ) {
            if(            *p_384==*d_387            ) {
                is_delim_388=1;
                break;
            }
            d_387++;
        }
        if(        is_delim_388        ) {
            break;
        }
        p_384++;
    }
    if(    *p_384==0    ) {
        next_382=((void*)0);
    }
    else {
        *p_384=0;
        next_382=p_384+1;
    }
    __result_obj__95 = start_383;
    return __result_obj__95;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_389;
int i_391;
int negative_392;
char* __result_obj__96;
int digit_393;
char* __result_obj__97;
    p_389=buf;
    char tmp_390[32];
    memset(&tmp_390, 0, sizeof(char)    *(32)    );
    i_391=0;
    negative_392=0;
    if(    base<2||base>16    ) {
        *p_389=0;
        __result_obj__96 = p_389;
        return __result_obj__96;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_392=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_393=val_%base;
        tmp_390[i_391++]=(((digit_393<10))?(48+digit_393):(97+digit_393-10));
        val_/=base;
    } while(    val_    );
    if(    negative_392    ) {
        *p_389++=45;
    }
    while(    i_391--    ) {
        *p_389++=tmp_390[i_391];
    }
    *p_389=0;
    __result_obj__97 = buf;
    return __result_obj__97;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_395;
const char* s_396;
unsigned long  int remaining_398;
s_396 = (void*)0;
    char out2_394[512];
    memset(&out2_394, 0, sizeof(char)    *(512)    );
    p_395=out2_394;
    char buf_397[32];
    memset(&buf_397, 0, sizeof(char)    *(32)    );
    remaining_398=sizeof(out2_394);
    for(    ;    *fmt&&remaining_398>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_395++=*fmt;
            remaining_398--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_397,__builtin_va_arg(ap,int),10,1);
            s_396=buf_397;
            break;
            case 117:
            itoa(buf_397,__builtin_va_arg(ap,unsigned int),10,0);
            s_396=buf_397;
            break;
            case 120:
            itoa(buf_397,__builtin_va_arg(ap,unsigned int),16,0);
            s_396=buf_397;
            break;
            case 115:
            s_396=__builtin_va_arg(ap,const char*);
            if(            !s_396            ) {
                s_396="(null)";
            }
            break;
            case 99:
            buf_397[0]=(char)__builtin_va_arg(ap,int);
            buf_397[1]=0;
            s_396=buf_397;
            break;
            case 112:
            strncpy(buf_397,"0x",32);
            itoa(buf_397+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_396=buf_397;
            break;
            case 37:
            buf_397[0]=37;
            buf_397[1]=0;
            s_396=buf_397;
            break;
            default:
            buf_397[0]=37;
            buf_397[1]=*fmt;
            buf_397[2]=0;
            s_396=buf_397;
            break;
        }
        while(        *s_396&&remaining_398>1        ) {
            *p_395++=*s_396++;
            remaining_398--;
        }
    }
    *p_395=0;
    *out=strdup(out2_394);
    return p_395-out2_394;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_399;
char* p_400;
const char* s_401;
unsigned long  int remaining_403;
memset(&ap_399, 0, sizeof(va_list));
s_401 = (void*)0;
    __builtin_va_start(ap_399,fmt);
    p_400=out;
    char buf_402[32];
    memset(&buf_402, 0, sizeof(char)    *(32)    );
    remaining_403=out_size;
    if(    remaining_403==0    ) {
        __builtin_va_end(ap_399);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_403>1            ) {
                *p_400++=*fmt;
                remaining_403--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_401=__builtin_va_arg(ap_399,const char*);
            while(            *s_401&&remaining_403>1            ) {
                *p_400++=*s_401++;
                remaining_403--;
            }
            break;
            case 100:
            itoa(buf_402,__builtin_va_arg(ap_399,int),10,0);
            s_401=buf_402;
            while(            *s_401&&remaining_403>1            ) {
                *p_400++=*s_401++;
                remaining_403--;
            }
            break;
            case 120:
            itoa(buf_402,(unsigned int)__builtin_va_arg(ap_399,int),16,1);
            s_401=buf_402;
            while(            *s_401&&remaining_403>1            ) {
                *p_400++=*s_401++;
                remaining_403--;
            }
            break;
            case 99:
            if(            remaining_403>1            ) {
                *p_400++=(char)__builtin_va_arg(ap_399,int);
                remaining_403--;
            }
            break;
            case 112:
            s_401="0x";
            while(            *s_401&&remaining_403>1            ) {
                *p_400++=*s_401++;
                remaining_403--;
            }
            itoa(buf_402,(long)__builtin_va_arg(ap_399,void*),16,1);
            s_401=buf_402;
            while(            *s_401&&remaining_403>1            ) {
                *p_400++=*s_401++;
                remaining_403--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_402,__builtin_va_arg(ap_399,long),10,1);
                s_401=buf_402;
                while(                *s_401&&remaining_403>1                ) {
                    *p_400++=*s_401++;
                    remaining_403--;
                }
            }
            break;
            default:
            if(            remaining_403>1            ) {
                *p_400++=37;
                remaining_403--;
                if(                remaining_403>1                ) {
                    *p_400++=*fmt;
                    remaining_403--;
                }
            }
            break;
        }
    }
    *p_400=0;
    __builtin_va_end(ap_399);
    return p_400-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_404;
char* p_405;
const char* s_406;
unsigned long  int remaining_408;
memset(&ap_404, 0, sizeof(va_list));
s_406 = (void*)0;
    __builtin_va_start(ap_404,fmt);
    p_405=out;
    char buf_407[32];
    memset(&buf_407, 0, sizeof(char)    *(32)    );
    remaining_408=out_size;
    if(    remaining_408==0    ) {
        __builtin_va_end(ap_404);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_408>1            ) {
                *p_405++=*fmt;
                remaining_408--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_406=__builtin_va_arg(ap_404,const char*);
            while(            *s_406&&remaining_408>1            ) {
                *p_405++=*s_406++;
                remaining_408--;
            }
            break;
            case 100:
            itoa(buf_407,__builtin_va_arg(ap_404,int),10,0);
            s_406=buf_407;
            while(            *s_406&&remaining_408>1            ) {
                *p_405++=*s_406++;
                remaining_408--;
            }
            break;
            case 120:
            itoa(buf_407,(unsigned int)__builtin_va_arg(ap_404,int),16,1);
            s_406=buf_407;
            while(            *s_406&&remaining_408>1            ) {
                *p_405++=*s_406++;
                remaining_408--;
            }
            break;
            case 99:
            if(            remaining_408>1            ) {
                *p_405++=(char)__builtin_va_arg(ap_404,int);
                remaining_408--;
            }
            break;
            case 112:
            s_406="0x";
            while(            *s_406&&remaining_408>1            ) {
                *p_405++=*s_406++;
                remaining_408--;
            }
            itoa(buf_407,(long)__builtin_va_arg(ap_404,void*),16,1);
            s_406=buf_407;
            while(            *s_406&&remaining_408>1            ) {
                *p_405++=*s_406++;
                remaining_408--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_407,__builtin_va_arg(ap_404,long),10,1);
                s_406=buf_407;
                while(                *s_406&&remaining_408>1                ) {
                    *p_405++=*s_406++;
                    remaining_408--;
                }
            }
            break;
            default:
            if(            remaining_408>1            ) {
                *p_405++=37;
                remaining_408--;
                if(                remaining_408>1                ) {
                    *p_405++=*fmt;
                    remaining_408--;
                }
            }
            break;
        }
    }
    *p_405=0;
    __builtin_va_end(ap_404);
    return p_405-out;
}

void printint(int val_, int base, int sign){
int i_410;
int negative_411;
unsigned int uval_412;
int digit_413;
memset(&uval_412, 0, sizeof(unsigned int));
    char buf_409[33];
    memset(&buf_409, 0, sizeof(char)    *(33)    );
    i_410=0;
    negative_411=0;
    if(    sign&&val_<0    ) {
        negative_411=1;
        uval_412=-val_;
    }
    else {
        uval_412=(unsigned int)val_;
    }
    if(    uval_412==0    ) {
        putchar(48);
        return;
    }
    while(    uval_412>0    ) {
        digit_413=uval_412%base;
        buf_409[i_410++]=((digit_413<10)?(48+digit_413):(97+(digit_413-10)));
        uval_412/=base;
    }
    if(    negative_411    ) {
        putchar(45);
    }
    while(    --i_410>=0    ) {
        putchar(buf_409[i_410]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_415;
int negative_416;
int digit_417;
    char buf_414[65];
    memset(&buf_414, 0, sizeof(char)    *(65)    );
    i_415=0;
    negative_416=0;
    if(    sign&&(long)val_<0    ) {
        negative_416=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_417=val_%base;
        buf_414[i_415++]=((digit_417<10)?(48+digit_417):(97+(digit_417-10)));
        val_/=base;
    }
    if(    negative_416    ) {
        putchar(45);
    }
    while(    --i_415>=0    ) {
        putchar(buf_414[i_415]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_419;
int negative_420;
int digit_421;
    char buf_418[65];
    memset(&buf_418, 0, sizeof(char)    *(65)    );
    i_419=0;
    negative_420=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_420=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_421=val_%base;
        buf_418[i_419++]=((digit_421<10)?(48+digit_421):(97+(digit_421-10)));
        val_/=base;
    }
    if(    negative_420    ) {
        putchar(45);
    }
    while(    --i_419>=0    ) {
        putchar(buf_418[i_419]);
    }
}

int printf(const char* fmt, ...){
va_list ap_422;
const char* p_423;
int lcount_424;
unsigned long  int val__425;
unsigned long  long val__426;
long val__427;
long long val__428;
int i_429;
int val__430;
unsigned int val__431;
unsigned long  int val__432;
char c_434;
memset(&ap_422, 0, sizeof(va_list));
p_423 = (void*)0;
    __builtin_va_start(ap_422,fmt);
    for(    p_423=fmt    ;    *p_423    ;    p_423++    ){
        if(        *p_423!=37        ) {
            putchar(*p_423);
            continue;
        }
        p_423++;
        if(        *p_423==108        ) {
            lcount_424=1;
            if(            *(p_423+1)==108            ) {
                lcount_424=2;
                p_423++;
            }
            p_423++;
            switch (            *p_423) {
                case 120:
                {
                    if(                    lcount_424==1                    ) {
                        val__425=__builtin_va_arg(ap_422,unsigned long  int);
                        printlong(val__425,16,0);
                    }
                    else {
                        val__426=__builtin_va_arg(ap_422,unsigned long  long);
                        printlonglong(val__426,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_424==1                    ) {
                        val__427=__builtin_va_arg(ap_422,long);
                        printlong(val__427,10,1);
                    }
                    else {
                        val__428=__builtin_va_arg(ap_422,long  long);
                        printlonglong(val__428,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_429=0                    ;                    i_429<lcount_424                    ;                    i_429++                    ){
                        putchar(108);
                    }
                    putchar(*p_423);
                    break;
                }
            }
        }
        else {
            switch (            *p_423) {
                case 100:
                {
                    val__430=__builtin_va_arg(ap_422,int);
                    printint(val__430,10,1);
                    break;
                }
                case 120:
                {
                    val__431=__builtin_va_arg(ap_422,unsigned int);
                    printint(val__431,16,0);
                    break;
                }
                case 112:
                {
                    val__432=(unsigned long  int)__builtin_va_arg(ap_422,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__432,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_433=__builtin_va_arg(ap_422,const char*);
                    if(                    !s_433                    ) {
                        s_433="(null)";
                    }
                    while(                    *s_433                    ) {
                        putchar(*s_433++);
                    }
                    break;
                }
                case 99:
                {
                    c_434=(char)__builtin_va_arg(ap_422,int);
                    putchar(c_434);
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
                    putchar(*p_423);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_422);
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
struct buffer* buf_435;
int i_436;
void* __right_value62 = (void*)0;
    buf_435=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_435,"%s %d\n",sname,sline);
    for(    i_436=gNumComeStackFrame-2    ;    i_436>=0    ;    i_436--    ){
        buffer_append_format(buf_435,"%s %d #%d\n",gComeStackFrameSName[i_436],gComeStackFrameSLine[i_436],gComeStackFrameID[i_436]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value62=buffer_to_string(buf_435))));
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_435, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_437;
    for(    i_437=gNumComeStackFrame-1    ;    i_437>=0    ;    i_437--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_437],gComeStackFrameSLine[i_437],gComeStackFrameID[i_437]);
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
int i_438;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_438=0    ;    i_438<gHeapPages.mSizePages    ;    i_438++    ){
        gHeapPages.mPages[i_438]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_439;
int n_440;
_Bool flag_441;
int i_442;
struct sMemHeaderTiny* it_443;
int n_444;
int i_445;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_439=gAllocMem;
        n_440=0;
        while(        it_439        ) {
            n_440++;
            flag_441=(_Bool)0;
            printf("#%d ",n_440);
            if(            it_439->class_name            ) {
                printf("%p (%s): ",(char*)it_439+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_439->class_name);
            }
            for(            i_442=0            ;            i_442<16            ;            i_442++            ){
                if(                it_439->sname[i_442]                ) {
                    printf("%s %d #%d, ",it_439->sname[i_442],it_439->sline[i_442],it_439->id[i_442]);
                    flag_441=(_Bool)1;
                }
            }
            if(            flag_441            ) {
                puts("");
            }
            it_439=it_439->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_440,gNumAlloc,gNumFree);
    }
    else {
        it_443=(struct sMemHeaderTiny*)gAllocMem;
        n_444=0;
        while(        it_443        ) {
            n_444++;
            if(            it_443->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_444,(char*)it_443+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_443->class_name,it_443->sname,it_443->sline);
            }
            it_443=it_443->next;
        }
        if(        n_444>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_444,gNumAlloc,gNumFree);
        }
    }
    for(    i_445=0    ;    i_445<gHeapPages.mSizePages    ;    i_445++    ){
        free(gHeapPages.mPages[i_445]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_446;
void* __result_obj__99;
    result_446=((void*)0);
    size=(size+7&~7);
    result_446=calloc(1,size);
    __result_obj__99 = result_446;
    return __result_obj__99;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_447;
struct sMemHeader* prev_it_448;
struct sMemHeader* next_it_449;
unsigned long  int size_450;
struct sMemHeaderTiny* it_451;
struct sMemHeaderTiny* prev_it_452;
struct sMemHeaderTiny* next_it_453;
unsigned long  int size_454;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_447=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_447->allocated!=177783            ) {
                return;
            }
            it_447->allocated=0;
            prev_it_448=it_447->prev;
            next_it_449=it_447->next;
            if(            gAllocMem==it_447            ) {
                gAllocMem=next_it_449;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_448                ) {
                    prev_it_448->next=next_it_449;
                }
                if(                next_it_449                ) {
                    next_it_449->prev=prev_it_448;
                }
            }
            size_450=it_447->size;
            free(it_447);
            gNumFree++;
        }
        else {
            it_451=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_451->allocated!=177783            ) {
                return;
            }
            it_451->allocated=0;
            prev_it_452=it_451->prev;
            next_it_453=it_451->next;
            if(            gAllocMem==it_451            ) {
                gAllocMem=(struct sMemHeader*)next_it_453;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_452                ) {
                    prev_it_452->next=next_it_453;
                }
                if(                next_it_453                ) {
                    next_it_453->prev=prev_it_452;
                }
            }
            size_454=it_451->size;
            free(it_451);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_455;
struct sMemHeader* it_456;
int i_457;
int i_458;
void* __result_obj__100;
void* result_459;
struct sMemHeaderTiny* it_460;
void* __result_obj__101;
memset(&i_457, 0, sizeof(int));
memset(&i_458, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_455=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_456=result_455;
        it_456->allocated=177783;
        it_456->size=size+sizeof(struct sMemHeader);
        it_456->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_457=0            ;            i_457<gNumComeStackFrame            ;            i_457++            ){
                it_456->sname[i_457]=gComeStackFrameSName[i_457];
                it_456->sline[i_457]=gComeStackFrameSLine[i_457];
                it_456->id[i_457]=gComeStackFrameID[i_457];
            }
        }
        else {
            for(            i_458=0            ;            i_458<16            ;            i_458++            ){
                it_456->sname[i_458]=gComeStackFrameSName[gNumComeStackFrame-1-i_458];
                it_456->sline[i_458]=gComeStackFrameSLine[gNumComeStackFrame-1-i_458];
                it_456->id[i_458]=gComeStackFrameID[gNumComeStackFrame-1-i_458];
            }
        }
        come_pop_stackframe_v2();
        it_456->next=gAllocMem;
        it_456->prev=((void*)0);
        it_456->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_456;
        }
        gAllocMem=it_456;
        gNumAlloc++;
        __result_obj__100 = (char*)result_455+sizeof(struct sMemHeader);
        return __result_obj__100;
    }
    else {
        result_459=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_460=result_459;
        it_460->allocated=177783;
        it_460->class_name=class_name;
        it_460->sname=sname;
        it_460->sline=sline;
        it_460->size=size+sizeof(struct sMemHeaderTiny);
        it_460->free_next=((void*)0);
        it_460->next=(struct sMemHeaderTiny*)gAllocMem;
        it_460->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_460;
        }
        gAllocMem=(struct sMemHeader*)it_460;
        gNumAlloc++;
        __result_obj__101 = (char*)result_459+sizeof(struct sMemHeaderTiny);
        return __result_obj__101;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_461;
char* __result_obj__102;
struct sMemHeaderTiny* it_462;
char* __result_obj__103;
    if(    gComeDebugLib    ) {
        it_461=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_461->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_461);
            exit(2);
        }
        __result_obj__102 = it_461->class_name;
        return __result_obj__102;
    }
    else {
        it_462=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_462->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_462);
            exit(2);
        }
        __result_obj__103 = it_462->class_name;
        return __result_obj__103;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_463;
int i_464;
struct sMemHeaderTiny* it_465;
    if(    gComeDebugLib    ) {
        it_463=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_463->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_463->class_name        ) {
            printf("(%s): ",it_463->class_name);
        }
        for(        i_464=0        ;        i_464<16        ;        i_464++        ){
            if(            it_463->sname[i_464]            ) {
                printf("%s %d #%d, ",it_463->sname[i_464],it_463->sline[i_464],it_463->id[i_464]);
            }
        }
        puts("");
    }
    else {
        it_465=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_465->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_465->class_name,it_465->sname,it_465->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_466;
unsigned long  int* ref_count_467;
unsigned long  int* size2_468;
void* __result_obj__104;
    mem_466=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_467=(unsigned long  int*)mem_466;
    *ref_count_467=0;
    size2_468=(unsigned long  int*)(mem_466+sizeof(unsigned long  int));
    *size2_468=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__104 = mem_466+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__104;
}

void come_free(void* mem){
unsigned long  int* ref_count_469;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_469=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_469);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__105;
char* mem_470;
unsigned long  int* size_p_471;
unsigned long  int size_472;
void* result_473;
void* __result_obj__106;
    if(    !block    ) {
        __result_obj__105 = ((void*)0);
        return __result_obj__105;
    }
    mem_470=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_471=(unsigned long  int*)(mem_470+sizeof(unsigned long  int));
    size_472=*size_p_471-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_473=come_calloc_v2(1,size_472,sname,sline,class_name);
    memcpy(result_473,block,size_472);
    __result_obj__106 = result_473;
    return __result_obj__106;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__107;
unsigned long  int* ref_count_474;
void* __result_obj__108;
    if(    mem==((void*)0)    ) {
        __result_obj__107 = mem;
        return __result_obj__107;
    }
    ref_count_474=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_474)++;
    __result_obj__108 = mem;
    return __result_obj__108;
}

void* come_print_ref_count(void* mem){
void* __result_obj__109;
unsigned long  int* ref_count_475;
void* __result_obj__110;
    if(    mem==((void*)0)    ) {
        __result_obj__109 = mem;
        return __result_obj__109;
    }
    ref_count_475=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_475);
    __result_obj__110 = mem;
    return __result_obj__110;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_476;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_476=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_476;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__111;
void* __result_obj__112;
unsigned long  int* ref_count_477;
unsigned long  int count_478;
void (*finalizer_479)(void*);
void* __result_obj__113;
void* __result_obj__114;
memset(&finalizer_479, 0, sizeof(void (*)(void*)));
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
    ref_count_477=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_477)--;
    }
    count_478=*ref_count_477;
    if(    !no_free&&count_478<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_479=protocol_fun;
            finalizer_479(protocol_obj);
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
void (*finalizer_480)(void*);
void (*finalizer_481)(void*);
void (*finalizer_482)(void*);
unsigned long  int* ref_count_483;
unsigned long  int count_484;
void (*finalizer_485)(void*);
void (*finalizer_486)(void*);
void (*finalizer_487)(void*);
memset(&finalizer_480, 0, sizeof(void (*)(void*)));
memset(&finalizer_481, 0, sizeof(void (*)(void*)));
memset(&finalizer_482, 0, sizeof(void (*)(void*)));
memset(&finalizer_485, 0, sizeof(void (*)(void*)));
memset(&finalizer_486, 0, sizeof(void (*)(void*)));
memset(&finalizer_487, 0, sizeof(void (*)(void*)));
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
                finalizer_480=protocol_fun;
                finalizer_480(protocol_obj);
            }
            finalizer_481=fun;
            finalizer_481(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_482=protocol_fun;
                finalizer_482(protocol_obj);
            }
        }
    }
    else {
        ref_count_483=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_483)--;
        }
        count_484=*ref_count_483;
        if(        !no_free&&count_484<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_485=protocol_fun;
                        finalizer_485(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_486=fun;
                        finalizer_486(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_487=protocol_fun;
                        finalizer_487(protocol_obj);
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
int len_488;
void* __right_value64 = (void*)0;
char* result_489;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_488=strlen(str)+1;
    result_489=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_488)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_489,str,len_488);
    __result_obj__116 = (char*)come_increment_ref_count(result_489);
    (result_489 = come_decrement_ref_count(result_489, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2897, "char*"));
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
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2907, "char*"));
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
struct buffer* result_490;
void* __right_value69 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__121;
    }
    result_490=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_490->size=self->size;
    __dec_obj15=result_490->buf,
    result_490->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_490->len=self->len;
    memcpy(result_490->buf,self->buf,self->len);
    __result_obj__122 = (struct buffer*)come_increment_ref_count(result_490);
    come_call_finalizer(buffer_finalize, result_490, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_491;
int old_len_492;
int new_size_493;
void* __right_value73 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__125;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__124 = self;
        return __result_obj__124;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_491=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_491,self->buf,self->size);
        old_len_492=self->len;
        new_size_493=(self->size+size+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_493)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_491,old_len_492);
        self->buf[old_len_492]=0;
        self->size=new_size_493;
        (old_buf_491 = come_decrement_ref_count(old_buf_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_494;
int old_len_495;
int new_size_496;
void* __right_value75 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__127;
    if(    self==((void*)0)    ) {
        __result_obj__126 = ((void*)0);
        return __result_obj__126;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_494=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_495=self->len;
        new_size_496=(self->size+10+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_496)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_494,old_len_495);
        self->buf[old_len_495]=0;
        self->size=new_size_496;
        (old_buf_494 = come_decrement_ref_count(old_buf_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__127 = self;
    return __result_obj__127;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__128;
int size_497;
void* __right_value76 = (void*)0;
char* old_buf_498;
int old_len_499;
int new_size_500;
void* __right_value77 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__129;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__128 = self;
        return __result_obj__128;
    }
    size_497=strlen(mem);
    if(    self->len+size_497+1+1>=self->size    ) {
        old_buf_498=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_498,self->buf,self->size);
        old_len_499=self->len;
        new_size_500=(self->size+size_497+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_500)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_498,old_len_499);
        self->buf[old_len_499]=0;
        self->size=new_size_500;
        (old_buf_498 = come_decrement_ref_count(old_buf_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_497);
    self->len+=size_497;
    self->buf[self->len]=0;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__130;
va_list args_501;
char* result_502;
int len_503;
struct buffer* __result_obj__131;
void* __right_value78 = (void*)0;
char* mem_504;
int size_505;
void* __right_value79 = (void*)0;
char* old_buf_506;
int old_len_507;
int new_size_508;
void* __right_value80 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__132;
result_502 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__130 = self;
        return __result_obj__130;
    }
    __builtin_va_start(args_501,msg);
    len_503=vasprintf(&result_502,msg,args_501);
    __builtin_va_end(args_501);
    if(    len_503<0    ) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    mem_504=(char*)come_increment_ref_count(__builtin_string(result_502));
    size_505=strlen(mem_504);
    if(    self->len+size_505+1+1>=self->size    ) {
        old_buf_506=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_506,self->buf,self->size);
        old_len_507=self->len;
        new_size_508=(self->size+size_505+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_508)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_506,old_len_507);
        self->buf[old_len_507]=0;
        self->size=new_size_508;
        (old_buf_506 = come_decrement_ref_count(old_buf_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_504,size_505);
    self->len+=size_505;
    self->buf[self->len]=0;
    free(result_502);
    __result_obj__132 = self;
    (mem_504 = come_decrement_ref_count(mem_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__132;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__133;
int size_509;
void* __right_value81 = (void*)0;
char* old_buf_510;
int old_len_511;
int new_size_512;
void* __right_value82 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__134;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    size_509=strlen(mem)+1;
    if(    self->len+size_509+1+1+1>=self->size    ) {
        old_buf_510=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_510,self->buf,self->size);
        old_len_511=self->len;
        new_size_512=(self->size+size_509+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_512)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_510,old_len_511);
        self->buf[old_len_511]=0;
        self->size=new_size_512;
        (old_buf_510 = come_decrement_ref_count(old_buf_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_509);
    self->len+=size_509;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__135;
int* mem_513;
int size_514;
void* __right_value83 = (void*)0;
char* old_buf_515;
int old_len_516;
int new_size_517;
void* __right_value84 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__135 = ((void*)0);
        return __result_obj__135;
    }
    mem_513=&value;
    size_514=sizeof(int);
    if(    self->len+size_514+1+1>=self->size    ) {
        old_buf_515=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_515,self->buf,self->size);
        old_len_516=self->len;
        new_size_517=(self->size+size_514+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_517)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_515,old_len_516);
        self->buf[old_len_516]=0;
        self->size=new_size_517;
        (old_buf_515 = come_decrement_ref_count(old_buf_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_513,size_514);
    self->len+=size_514;
    self->buf[self->len]=0;
    __result_obj__136 = self;
    return __result_obj__136;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_518;
int size_519;
void* __right_value85 = (void*)0;
char* old_buf_520;
int old_len_521;
int new_size_522;
void* __right_value86 = (void*)0;
char* __dec_obj22;
struct buffer* __result_obj__137;
    mem_518=&value;
    size_519=sizeof(long);
    if(    self->len+size_519+1+1>=self->size    ) {
        old_buf_520=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_520,self->buf,self->size);
        old_len_521=self->len;
        new_size_522=(self->size+size_519+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_522)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_520,old_len_521);
        self->buf[old_len_521]=0;
        self->size=new_size_522;
        (old_buf_520 = come_decrement_ref_count(old_buf_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_518,size_519);
    self->len+=size_519;
    self->buf[self->len]=0;
    __result_obj__137 = self;
    return __result_obj__137;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__138;
short* mem_523;
int size_524;
void* __right_value87 = (void*)0;
char* old_buf_525;
int old_len_526;
int new_size_527;
void* __right_value88 = (void*)0;
char* __dec_obj23;
struct buffer* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = ((void*)0);
        return __result_obj__138;
    }
    mem_523=&value;
    size_524=sizeof(short);
    if(    self->len+size_524+1+1>=self->size    ) {
        old_buf_525=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_525,self->buf,self->size);
        old_len_526=self->len;
        new_size_527=(self->size+size_524+1)*2;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_527)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_525,old_len_526);
        self->buf[old_len_526]=0;
        self->size=new_size_527;
        (old_buf_525 = come_decrement_ref_count(old_buf_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_523,size_524);
    self->len+=size_524;
    self->buf[self->len]=0;
    __result_obj__139 = self;
    return __result_obj__139;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__140;
int len_528;
int new_size_529;
void* __right_value89 = (void*)0;
char* __dec_obj24;
int i_530;
struct buffer* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = ((void*)0);
        return __result_obj__140;
    }
    len_528=self->len;
    len_528=(len_528+3)&~3;
    if(    len_528>=self->size    ) {
        new_size_529=(self->size+1+1)*2;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_529)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_529;
    }
    for(    i_530=self->len    ;    i_530<len_528    ;    i_530++    ){
        self->buf[i_530]=0;
    }
    self->len=len_528;
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
struct buffer* result_531;
struct buffer* __result_obj__142;
struct buffer* __result_obj__143;
    result_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__142 = (struct buffer*)come_increment_ref_count(result_531);
        come_call_finalizer(buffer_finalize, result_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__142;
    }
    buffer_append_str(result_531,self);
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_531);
    come_call_finalizer(buffer_finalize, result_531, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_532;
struct buffer* __result_obj__147;
    result_532=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_532,self,sizeof(char)*len);
    __result_obj__147 = (struct buffer*)come_increment_ref_count(result_532);
    come_call_finalizer(buffer_finalize, result_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* result_533;
int i_534;
struct buffer* __result_obj__148;
    result_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_534=0    ;    i_534<len    ;    i_534++    ){
        buffer_append(result_533,self[i_534],strlen(self[i_534]));
    }
    __result_obj__148 = (struct buffer*)come_increment_ref_count(result_533);
    come_call_finalizer(buffer_finalize, result_533, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct buffer* result_535;
struct buffer* __result_obj__149;
    result_535=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_535,(char*)self,sizeof(short)*len);
    __result_obj__149 = (struct buffer*)come_increment_ref_count(result_535);
    come_call_finalizer(buffer_finalize, result_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct buffer* result_536;
struct buffer* __result_obj__150;
    result_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_536,(char*)self,sizeof(int)*len);
    __result_obj__150 = (struct buffer*)come_increment_ref_count(result_536);
    come_call_finalizer(buffer_finalize, result_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct buffer* result_537;
struct buffer* __result_obj__151;
    result_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_537,(char*)self,sizeof(long)*len);
    __result_obj__151 = (struct buffer*)come_increment_ref_count(result_537);
    come_call_finalizer(buffer_finalize, result_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct buffer* result_538;
struct buffer* __result_obj__152;
    result_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_538,(char*)self,sizeof(float)*len);
    __result_obj__152 = (struct buffer*)come_increment_ref_count(result_538);
    come_call_finalizer(buffer_finalize, result_538, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct buffer* result_539;
struct buffer* __result_obj__153;
    result_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_539,(char*)self,sizeof(double)*len);
    __result_obj__153 = (struct buffer*)come_increment_ref_count(result_539);
    come_call_finalizer(buffer_finalize, result_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

char* buffer_printable(struct buffer* self){
int len_540;
void* __right_value108 = (void*)0;
char* result_541;
int n_542;
int i_543;
unsigned char c_544;
char* __result_obj__154;
    len_540=self->len;
    result_541=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_540*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_542=0;
    for(    i_543=0    ;    i_543<len_540    ;    i_543++    ){
        c_544=self->buf[i_543];
        if(        (c_544>=0&&c_544<32)||c_544==127        ) {
            result_541[n_542++]=94;
            result_541[n_542++]=c_544+65-1;
        }
        else if(        c_544>127        ) {
            result_541[n_542++]=63;
        }
        else {
            result_541[n_542++]=c_544;
        }
    }
    result_541[n_542]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_541);
    (result_541 = come_decrement_ref_count(result_541, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_545;
struct list$1char$* __result_obj__156;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_545=0    ;    i_545<num_value    ;    i_545++    ){
        list$1char$_push_back(self,values[i_545]);
    }
    __result_obj__156 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value110 = (void*)0;
struct list_item$1char$* litem_546;
void* __right_value111 = (void*)0;
struct list_item$1char$* litem_547;
void* __right_value112 = (void*)0;
struct list_item$1char$* litem_548;
struct list$1char$* __result_obj__155;
    if(    self->len==0    ) {
        litem_546=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value110=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_546->prev=((void*)0);
        litem_546->next=((void*)0);
        litem_546->item=item;
        self->tail=litem_546;
        self->head=litem_546;
    }
    else if(    self->len==1    ) {
        litem_547=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value111=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_547->prev=self->head;
        litem_547->next=((void*)0);
        litem_547->item=item;
        self->tail=litem_547;
        self->head->next=litem_547;
    }
    else {
        litem_548=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value112=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_548->prev=self->tail;
        litem_548->next=((void*)0);
        litem_548->item=item;
        self->tail->next=litem_548;
        self->tail=litem_548;
    }
    self->len++;
    __result_obj__155 = self;
    return __result_obj__155;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_549;
struct list_item$1char$* prev_it_550;
    it_549=self->head;
    while(    it_549!=((void*)0)    ) {
        prev_it_550=it_549;
        it_549=it_549->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_550, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1char$* __result_obj__157;
    __result_obj__157 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value113=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3356, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value113, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__157;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_551;
struct list$1char$p* __result_obj__159;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_551=0    ;    i_551<num_value    ;    i_551++    ){
        list$1char$p_push_back(self,values[i_551]);
    }
    __result_obj__159 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value115 = (void*)0;
struct list_item$1char$p* litem_552;
void* __right_value116 = (void*)0;
struct list_item$1char$p* litem_553;
void* __right_value117 = (void*)0;
struct list_item$1char$p* litem_554;
struct list$1char$p* __result_obj__158;
    if(    self->len==0    ) {
        litem_552=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value115=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_552->prev=((void*)0);
        litem_552->next=((void*)0);
        litem_552->item=item;
        self->tail=litem_552;
        self->head=litem_552;
    }
    else if(    self->len==1    ) {
        litem_553=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value116=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_553->prev=self->head;
        litem_553->next=((void*)0);
        litem_553->item=item;
        self->tail=litem_553;
        self->head->next=litem_553;
    }
    else {
        litem_554=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value117=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_554->prev=self->tail;
        litem_554->next=((void*)0);
        litem_554->item=item;
        self->tail->next=litem_554;
        self->tail=litem_554;
    }
    self->len++;
    __result_obj__158 = self;
    return __result_obj__158;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_555;
struct list_item$1char$p* prev_it_556;
    it_555=self->head;
    while(    it_555!=((void*)0)    ) {
        prev_it_556=it_555;
        it_555=it_555->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_556, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1char$p* __result_obj__160;
    __result_obj__160 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value118=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3361, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value118, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__160;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_557;
struct list$1short$* __result_obj__162;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_557=0    ;    i_557<num_value    ;    i_557++    ){
        list$1short$_push_back(self,values[i_557]);
    }
    __result_obj__162 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value120 = (void*)0;
struct list_item$1short$* litem_558;
void* __right_value121 = (void*)0;
struct list_item$1short$* litem_559;
void* __right_value122 = (void*)0;
struct list_item$1short$* litem_560;
struct list$1short$* __result_obj__161;
    if(    self->len==0    ) {
        litem_558=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value120=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_558->prev=((void*)0);
        litem_558->next=((void*)0);
        litem_558->item=item;
        self->tail=litem_558;
        self->head=litem_558;
    }
    else if(    self->len==1    ) {
        litem_559=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value121=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_559->prev=self->head;
        litem_559->next=((void*)0);
        litem_559->item=item;
        self->tail=litem_559;
        self->head->next=litem_559;
    }
    else {
        litem_560=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value122=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_560->prev=self->tail;
        litem_560->next=((void*)0);
        litem_560->item=item;
        self->tail->next=litem_560;
        self->tail=litem_560;
    }
    self->len++;
    __result_obj__161 = self;
    return __result_obj__161;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_561;
struct list_item$1short$* prev_it_562;
    it_561=self->head;
    while(    it_561!=((void*)0)    ) {
        prev_it_562=it_561;
        it_561=it_561->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_562, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1short$* __result_obj__163;
    __result_obj__163 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value123=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3366, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__163;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_563;
struct list$1int$* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_563=0    ;    i_563<num_value    ;    i_563++    ){
        list$1int$_push_back(self,values[i_563]);
    }
    __result_obj__165 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value125 = (void*)0;
struct list_item$1int$* litem_564;
void* __right_value126 = (void*)0;
struct list_item$1int$* litem_565;
void* __right_value127 = (void*)0;
struct list_item$1int$* litem_566;
struct list$1int$* __result_obj__164;
    if(    self->len==0    ) {
        litem_564=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value125=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_564->prev=((void*)0);
        litem_564->next=((void*)0);
        litem_564->item=item;
        self->tail=litem_564;
        self->head=litem_564;
    }
    else if(    self->len==1    ) {
        litem_565=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value126=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_565->prev=self->head;
        litem_565->next=((void*)0);
        litem_565->item=item;
        self->tail=litem_565;
        self->head->next=litem_565;
    }
    else {
        litem_566=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value127=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_566->prev=self->tail;
        litem_566->next=((void*)0);
        litem_566->item=item;
        self->tail->next=litem_566;
        self->tail=litem_566;
    }
    self->len++;
    __result_obj__164 = self;
    return __result_obj__164;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_567;
struct list_item$1int$* prev_it_568;
    it_567=self->head;
    while(    it_567!=((void*)0)    ) {
        prev_it_568=it_567;
        it_567=it_567->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_568, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value124 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1int$* __result_obj__166;
    __result_obj__166 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value128=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3371, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value128, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_569;
struct list$1long$* __result_obj__168;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_569=0    ;    i_569<num_value    ;    i_569++    ){
        list$1long$_push_back(self,values[i_569]);
    }
    __result_obj__168 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__168;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value130 = (void*)0;
struct list_item$1long$* litem_570;
void* __right_value131 = (void*)0;
struct list_item$1long$* litem_571;
void* __right_value132 = (void*)0;
struct list_item$1long$* litem_572;
struct list$1long$* __result_obj__167;
    if(    self->len==0    ) {
        litem_570=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value130=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_570->prev=((void*)0);
        litem_570->next=((void*)0);
        litem_570->item=item;
        self->tail=litem_570;
        self->head=litem_570;
    }
    else if(    self->len==1    ) {
        litem_571=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value131=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_571->prev=self->head;
        litem_571->next=((void*)0);
        litem_571->item=item;
        self->tail=litem_571;
        self->head->next=litem_571;
    }
    else {
        litem_572=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value132=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_572->prev=self->tail;
        litem_572->next=((void*)0);
        litem_572->item=item;
        self->tail->next=litem_572;
        self->tail=litem_572;
    }
    self->len++;
    __result_obj__167 = self;
    return __result_obj__167;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_573;
struct list_item$1long$* prev_it_574;
    it_573=self->head;
    while(    it_573!=((void*)0)    ) {
        prev_it_574=it_573;
        it_573=it_573->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_574, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value129 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1long$* __result_obj__169;
    __result_obj__169 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value133=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3376, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value133, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_575;
struct list$1float$* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_575=0    ;    i_575<num_value    ;    i_575++    ){
        list$1float$_push_back(self,values[i_575]);
    }
    __result_obj__171 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value135 = (void*)0;
struct list_item$1float$* litem_576;
void* __right_value136 = (void*)0;
struct list_item$1float$* litem_577;
void* __right_value137 = (void*)0;
struct list_item$1float$* litem_578;
struct list$1float$* __result_obj__170;
    if(    self->len==0    ) {
        litem_576=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value135=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_576->prev=((void*)0);
        litem_576->next=((void*)0);
        litem_576->item=item;
        self->tail=litem_576;
        self->head=litem_576;
    }
    else if(    self->len==1    ) {
        litem_577=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value136=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_577->prev=self->head;
        litem_577->next=((void*)0);
        litem_577->item=item;
        self->tail=litem_577;
        self->head->next=litem_577;
    }
    else {
        litem_578=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value137=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_578->prev=self->tail;
        litem_578->next=((void*)0);
        litem_578->item=item;
        self->tail->next=litem_578;
        self->tail=litem_578;
    }
    self->len++;
    __result_obj__170 = self;
    return __result_obj__170;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_579;
struct list_item$1float$* prev_it_580;
    it_579=self->head;
    while(    it_579!=((void*)0)    ) {
        prev_it_580=it_579;
        it_579=it_579->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_580, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value134 = (void*)0;
void* __right_value138 = (void*)0;
struct list$1float$* __result_obj__172;
    __result_obj__172 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value138=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3381, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value138, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__172;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_581;
struct list$1double$* __result_obj__174;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_581=0    ;    i_581<num_value    ;    i_581++    ){
        list$1double$_push_back(self,values[i_581]);
    }
    __result_obj__174 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value140 = (void*)0;
struct list_item$1double$* litem_582;
void* __right_value141 = (void*)0;
struct list_item$1double$* litem_583;
void* __right_value142 = (void*)0;
struct list_item$1double$* litem_584;
struct list$1double$* __result_obj__173;
    if(    self->len==0    ) {
        litem_582=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value140=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_582->prev=((void*)0);
        litem_582->next=((void*)0);
        litem_582->item=item;
        self->tail=litem_582;
        self->head=litem_582;
    }
    else if(    self->len==1    ) {
        litem_583=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value141=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_583->prev=self->head;
        litem_583->next=((void*)0);
        litem_583->item=item;
        self->tail=litem_583;
        self->head->next=litem_583;
    }
    else {
        litem_584=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value142=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_584->prev=self->tail;
        litem_584->next=((void*)0);
        litem_584->item=item;
        self->tail->next=litem_584;
        self->tail=litem_584;
    }
    self->len++;
    __result_obj__173 = self;
    return __result_obj__173;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_585;
struct list_item$1double$* prev_it_586;
    it_585=self->head;
    while(    it_585!=((void*)0)    ) {
        prev_it_586=it_585;
        it_585=it_585->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_586, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value139 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1double$* __result_obj__175;
    __result_obj__175 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value143=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3386, "struct list$1double$*")),len,self))));
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
int len_587;
void* __right_value145 = (void*)0;
char* result_588;
char* __result_obj__177;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    len_587=strlen(self)+strlen(right);
    result_588=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_587+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_588,self,len_587+1);
    strncat(result_588,right,len_587+1);
    __result_obj__177 = (char*)come_increment_ref_count(result_588);
    (result_588 = come_decrement_ref_count(result_588, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_operator_add(char* self, char* right){
void* __right_value146 = (void*)0;
char* __result_obj__178;
int len_589;
void* __right_value147 = (void*)0;
char* result_590;
char* __result_obj__179;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    len_589=strlen(self)+strlen(right);
    result_590=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_589+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_590,self,len_589+1);
    strncat(result_590,right,len_589+1);
    __result_obj__179 = (char*)come_increment_ref_count(result_590);
    (result_590 = come_decrement_ref_count(result_590, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_operator_mult(char* self, int right){
void* __right_value148 = (void*)0;
char* __result_obj__180;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct buffer* buf_591;
int i_592;
void* __right_value151 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    buf_591=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_592=0    ;    i_592<right    ;    i_592++    ){
        buffer_append_str(buf_591,self);
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value151=buffer_to_string(buf_591))));
    come_call_finalizer(buffer_finalize, buf_591, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* string_operator_mult(char* self, int right){
void* __right_value152 = (void*)0;
char* __result_obj__182;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* buf_593;
int i_594;
void* __right_value155 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    buf_593=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_594=0    ;    i_594<right    ;    i_594++    ){
        buffer_append_str(buf_593,self);
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value155=buffer_to_string(buf_593))));
    come_call_finalizer(buffer_finalize, buf_593, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_595;
int i_596;
    result_595=(_Bool)0;
    for(    i_596=0    ;    i_596<len    ;    i_596++    ){
        if(        strncmp(self[i_596],str,strlen(self[i_596]))==0        ) {
            result_595=(_Bool)1;
            break;
        }
    }
    return result_595;
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
int result_597;
char* p_598;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_597=0;
    p_598=value;
    while(    *p_598    ) {
        result_597+=(*p_598);
        p_598++;
    }
    return result_597;
}

unsigned int string_get_hash_key(char* value){
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
_Bool result_601;
    result_601=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_601;
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
_Bool result_602;
    result_602=(c>=32&&c<=126);
    return result_602;
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
int len_603;
void* __right_value157 = (void*)0;
char* result_604;
int i_605;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    len_603=strlen(str);
    result_604=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_603+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_605=0    ;    i_605<len_603    ;    i_605++    ){
        result_604[i_605]=str[len_603-i_605-1];
    }
    result_604[len_603]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_604);
    (result_604 = come_decrement_ref_count(result_604, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value158 = (void*)0;
char* __result_obj__186;
int len_606;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
char* __result_obj__187;
void* __right_value161 = (void*)0;
char* __result_obj__188;
void* __right_value162 = (void*)0;
char* __result_obj__189;
void* __right_value163 = (void*)0;
char* result_607;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_606=strlen(str);
    if(    head<0    ) {
        head+=len_606;
    }
    if(    tail<0    ) {
        tail+=len_606+1;
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
    if(    tail>=len_606    ) {
        tail=len_606;
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
    result_607=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_607,str+head,tail-head);
    result_607[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_607);
    (result_607 = come_decrement_ref_count(result_607, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value164 = (void*)0;
char* __result_obj__191;
int len_608;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __result_obj__192;
void* __right_value167 = (void*)0;
char* __result_obj__193;
void* __right_value168 = (void*)0;
char* __result_obj__194;
void* __right_value169 = (void*)0;
char* result_609;
char* __result_obj__195;
    if(    str==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    len_608=strlen(str);
    if(    head<0    ) {
        head+=len_608;
    }
    if(    tail<0    ) {
        tail+=len_608+1;
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
    if(    tail>=len_608    ) {
        tail=len_608;
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
    result_609=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_609,str+head,tail-head);
    result_609[tail-head]=0;
    __result_obj__195 = (char*)come_increment_ref_count(result_609);
    (result_609 = come_decrement_ref_count(result_609, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value170 = (void*)0;
char* __result_obj__196;
int len_610;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __result_obj__197;
void* __right_value173 = (void*)0;
char* __result_obj__198;
void* __right_value174 = (void*)0;
char* __result_obj__199;
void* __right_value175 = (void*)0;
char* result_611;
char* __result_obj__200;
    if(    str==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    len_610=strlen(str);
    if(    head<0    ) {
        head+=len_610;
    }
    if(    tail<0    ) {
        tail+=len_610+1;
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
    if(    tail>=len_610    ) {
        tail=len_610;
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
    result_611=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_611,str+head,tail-head);
    result_611[tail-head]=0;
    __result_obj__200 = (char*)come_increment_ref_count(result_611);
    (result_611 = come_decrement_ref_count(result_611, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__200;
}

char* xsprintf(char* msg, ...){
void* __right_value176 = (void*)0;
char* __result_obj__201;
va_list args_612;
char* result_613;
int len_614;
void* __right_value177 = (void*)0;
char* __result_obj__202;
void* __right_value178 = (void*)0;
char* result2_615;
char* __result_obj__203;
result_613 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__201;
    }
    __builtin_va_start(args_612,msg);
    len_614=vasprintf(&result_613,msg,args_612);
    __builtin_va_end(args_612);
    if(    len_614<0    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    result2_615=(char*)come_increment_ref_count(__builtin_string(result_613));
    free(result_613);
    __result_obj__203 = (char*)come_increment_ref_count(result2_615);
    (result2_615 = come_decrement_ref_count(result2_615, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value179 = (void*)0;
char* __result_obj__204;
int len_616;
void* __right_value180 = (void*)0;
char* __result_obj__205;
void* __right_value181 = (void*)0;
char* __result_obj__206;
void* __right_value182 = (void*)0;
char* result_617;
char* __result_obj__207;
    if(    str==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(""))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    len_616=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(str))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    if(    head<0    ) {
        head+=len_616;
    }
    if(    tail<0    ) {
        tail+=len_616+1;
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
    if(    tail>=len_616    ) {
        tail=len_616;
    }
    result_617=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_616-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_617,str,head);
    memcpy(result_617+head,str+tail,len_616-tail);
    result_617[len_616-(tail-head)]=0;
    __result_obj__207 = (char*)come_increment_ref_count(result_617);
    (result_617 = come_decrement_ref_count(result_617, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_618;
struct list_item$1char$ph* prev_it_619;
    it_618=self->head;
    while(    it_618!=((void*)0)    ) {
        prev_it_619=it_618;
        it_618=it_618->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_619, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_623;
char* __dec_obj25;
void* __right_value190 = (void*)0;
struct list_item$1char$ph* litem_624;
char* __dec_obj26;
void* __right_value191 = (void*)0;
struct list_item$1char$ph* litem_625;
char* __dec_obj27;
struct list$1char$ph* __result_obj__210;
    if(    self->len==0    ) {
        litem_623=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_623->prev=((void*)0);
        litem_623->next=((void*)0);
        __dec_obj25=litem_623->item,
        litem_623->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_623;
        self->head=litem_623;
    }
    else if(    self->len==1    ) {
        litem_624=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value190=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_624->prev=self->head;
        litem_624->next=((void*)0);
        __dec_obj26=litem_624->item,
        litem_624->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_624;
        self->head->next=litem_624;
    }
    else {
        litem_625=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value191=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_625->prev=self->tail;
        litem_625->next=((void*)0);
        __dec_obj27=litem_625->item,
        litem_625->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_625;
        self->tail=litem_625;
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
struct list$1char$ph* result_620;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct buffer* str_621;
int i_622;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1char$ph* __result_obj__211;
    if(    self==((void*)0)    ) {
        __result_obj__209 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value184=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__209;
    }
    result_620=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_621=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_622=0    ;    i_622<charp_length(self)    ;    i_622++    ){
        if(        self[i_622]==c        ) {
            list$1char$ph_push_back(result_620,(char*)come_increment_ref_count(__builtin_string(str_621->buf)));
            buffer_reset(str_621);
        }
        else {
            buffer_append_char(str_621,self[i_622]);
        }
    }
    if(    buffer_length(str_621)!=0    ) {
        list$1char$ph_push_back(result_620,(char*)come_increment_ref_count(__builtin_string(str_621->buf)));
    }
    __result_obj__211 = (struct list$1char$ph*)come_increment_ref_count(result_620);
    come_call_finalizer(list$1char$ph$p_finalize, result_620, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_621, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_626;
void* __right_value196 = (void*)0;
char* result_627;
int n_628;
int i_629;
char c_630;
char* __result_obj__214;
    len_626=charp_length(str);
    result_627=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_626*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_628=0;
    for(    i_629=0    ;    i_629<len_626    ;    i_629++    ){
        c_630=str[i_629];
        if(        (c_630>=0&&c_630<32)||c_630==127        ) {
            result_627[n_628++]=94;
            result_627[n_628++]=c_630+65-1;
        }
        else {
            result_627[n_628++]=c_630;
        }
    }
    result_627[n_628]=0;
    __result_obj__214 = (char*)come_increment_ref_count(result_627);
    (result_627 = come_decrement_ref_count(result_627, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value197 = (void*)0;
char* __result_obj__215;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* result_631;
char* p_632;
char* p2_633;
void* __right_value200 = (void*)0;
char* __result_obj__216;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__215;
    }
    result_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_632=self;
    while(    (_Bool)1    ) {
        p2_633=strstr(p_632,str);
        if(        p2_633==((void*)0)        ) {
            p2_633=p_632;
            while(            *p2_633            ) {
                p2_633++;
            }
            buffer_append(result_631,p_632,p2_633-p_632);
            break;
        }
        buffer_append(result_631,p_632,p2_633-p_632);
        buffer_append_str(result_631,replace);
        p_632=p2_633+strlen(str);
    }
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value200=buffer_to_string(result_631))));
    come_call_finalizer(buffer_finalize, result_631, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__216;
}

char* xbasename(char* path){
void* __right_value201 = (void*)0;
char* __result_obj__217;
char* p_634;
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
    p_634=path+strlen(path);
    while(    p_634>=path    ) {
        if(        *p_634==47        ) {
            break;
        }
        else {
            p_634--;
        }
    }
    if(    p_634<path    ) {
        __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(path))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__218;
    }
    else {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(p_634+1))));
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
char* path2_635;
char* p_636;
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
    path2_635=(char*)come_increment_ref_count(xbasename(path));
    p_636=path2_635+strlen(path2_635);
    while(    p_636>=path2_635    ) {
        if(        *p_636==46        ) {
            break;
        }
        else {
            p_636--;
        }
    }
    if(    p_636<path2_635    ) {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(path2_635))));
        (path2_635 = come_decrement_ref_count(path2_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
    else {
        __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value208=charp_substring(path2_635,0,p_636-path2_635))));
        (path2_635 = come_decrement_ref_count(path2_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__223;
    }
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(""))));
    (path2_635 = come_decrement_ref_count(path2_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* xextname(char* path){
void* __right_value210 = (void*)0;
char* __result_obj__225;
char* p_637;
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
    p_637=path+strlen(path);
    while(    p_637>=path    ) {
        if(        *p_637==46        ) {
            break;
        }
        else {
            p_637--;
        }
    }
    if(    p_637<path    ) {
        __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(path))));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__226;
    }
    else {
        __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(p_637+1))));
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
char* msg2_638;
va_list args_639;
void* __right_value234 = (void*)0;
char* __result_obj__249;
msg2_638 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(""))));
        (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__248;
    }
    __builtin_va_start(args_639,self);
    vasprintf(&msg2_638,self,args_639);
    __builtin_va_end(args_639);
    printf("%s",msg2_638);
    free(msg2_638);
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
int i_640;
    for(    i_640=0    ;    i_640<self    ;    i_640++    ){
        block(parent,i_640);
    }
}

