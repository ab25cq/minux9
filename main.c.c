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
  0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x0d, 0x00, 0x0c, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x75, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x27, 0x2a, 0xba, 0x97,
  0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0x27, 0x29, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
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
  0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x27, 0x1f, 0x23, 0x3c,
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
  0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x93, 0x07,
  0x04, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x90, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0x95, 0xe7, 0x83, 0x27,
  0x44, 0xfe, 0x3e, 0x85, 0x85, 0x45, 0x93, 0x08, 0x80, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x14, 0x3e, 0x85,
  0x81, 0x45, 0x93, 0x08, 0x50, 0x04, 0x73, 0x00, 0x00, 0x00, 0x19, 0x45,
  0xef, 0xf0, 0x5f, 0x8e, 0x23, 0x2a, 0x04, 0xfc, 0x93, 0x07, 0x44, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x95, 0xe7, 0x83, 0x27, 0x04, 0xfe,
  0x3e, 0x85, 0x81, 0x45, 0x93, 0x08, 0x80, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x10, 0x3e, 0x85, 0x81, 0x45,
  0x93, 0x08, 0x50, 0x04, 0x73, 0x00, 0x00, 0x00, 0x19, 0x45, 0xef, 0xf0,
  0x3f, 0x89, 0x23, 0x2a, 0x04, 0xfc, 0x93, 0x07, 0x44, 0xfd, 0x3e, 0x85,
  0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0xc5, 0x0e, 0xef, 0xf0, 0x5f, 0xf0, 0x01, 0xa0, 0x00, 0x00,
  0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00, 0x13, 0x05, 0x04, 0x00,
  0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0x5f, 0x9c,
  0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0xdf, 0x86, 0x83, 0x30, 0x81, 0x00,
  0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00, 0x13, 0x01, 0x01, 0xff,
  0x23, 0x34, 0x11, 0x00, 0x83, 0x32, 0x84, 0xfd, 0x13, 0x85, 0x02, 0x00,
  0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00, 0xef, 0xf0, 0x5f, 0x99,
  0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0xdf, 0x83, 0x83, 0x30, 0x81, 0x00,
  0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c,
  0x6c, 0x29, 0x00, 0x00, 0x36, 0xfe, 0xff, 0xff, 0x7a, 0xfd, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0xbe, 0xfd, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0xee, 0xfd, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x9c, 0xfd, 0xff, 0xff, 0x2f, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x2e, 0x65, 0x6c, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2f, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e, 0x65, 0x6c, 0x66, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x45, 0x4e, 0x44, 0x00, 0x47, 0x43, 0x43, 0x3a,
  0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39,
  0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x65, 0x00,
  0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x5b, 0x00, 0x00,
  0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31,
  0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66,
  0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d,
  0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31,
  0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7c, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x7c, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x1d, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x11, 0x00, 0x10, 0x06, 0x11,
  0x01, 0x12, 0x01, 0x03, 0x0e, 0x1b, 0x0e, 0x25, 0x0e, 0x13, 0x05, 0x00,
  0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x01, 0x01, 0xfb, 0x0e, 0x0a, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x7c, 0x08, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x0c, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x07, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x09, 0x04, 0x00, 0x00, 0x01, 0x01, 0x6d,
  0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x2f, 0x55, 0x73, 0x65, 0x72,
  0x73, 0x2f, 0x61, 0x62, 0x32, 0x35, 0x63, 0x71, 0x2f, 0x6d, 0x69, 0x6e,
  0x75, 0x78, 0x39, 0x00, 0x47, 0x4e, 0x55, 0x20, 0x41, 0x53, 0x20, 0x32,
  0x2e, 0x34, 0x33, 0x2e, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0xd8, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x57, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x7c, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xaf, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x04, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb7, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x50, 0x04, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbe, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x5c, 0x21, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0x7c, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd8, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x5c, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x78, 0x07, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xed, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x52, 0x03, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfb, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x60, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x01, 0x00, 0x00, 0x10, 0x00, 0x01, 0x00, 0xa8, 0x08, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x17, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x5c, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x23, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xb2, 0x07, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x3e, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x31, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x5c, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x5c, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x47, 0x01, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x60, 0x19, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x4c, 0x01, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x54, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x63, 0x68, 0x69, 0x6c, 0x64, 0x2e, 0x63, 0x00, 0x65, 0x78, 0x69,
  0x74, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31,
  0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66,
  0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d,
  0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31,
  0x70, 0x30, 0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x6f, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c,
  0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x70, 0x75, 0x74, 0x63, 0x68,
  0x61, 0x72, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f,
  0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74,
  0x65, 0x72, 0x24, 0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x00,
  0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49,
  0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x72, 0x69,
  0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f,
  0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x64,
  0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x5f, 0x6d, 0x69, 0x6e, 0x75, 0x73,
  0x34, 0x30, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61,
  0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x70, 0x72, 0x69, 0x6e,
  0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f,
  0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61,
  0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x70, 0x72, 0x69, 0x6e,
  0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e,
  0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65,
  0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e,
  0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73,
  0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65,
  0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x72, 0x61,
  0x6e, 0x67, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f,
  0x69, 0x6e, 0x66, 0x6f, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f,
  0x61, 0x62, 0x62, 0x72, 0x65, 0x76, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75,
  0x67, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75,
  0x67, 0x5f, 0x73, 0x74, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd8, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x75, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3e, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x79, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x40, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x56, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7e, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int child_elf_len=4936;
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
void enter_user(unsigned long  int anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355, unsigned long  int anonymous_var_nameX356, unsigned long  long anonymous_var_nameX357);
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
unsigned long  long x_349;
memset(&x_349, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_349));
    return x_349;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_350;
memset(&sp_val_350, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_350): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_350;
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
    result_55=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 802, "struct proc*"));
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
        result_55->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 812, "struct map$2void$ptuple2$2void$plong$$ph*"))));
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
struct file* f_200;
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
    f_200=get_current_file_table();
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_201;
unsigned long  int arg0_202;
unsigned long  int arg1_203;
unsigned long  int arg2_204;
unsigned long  int arg3_205;
unsigned long  int arg4_206;
unsigned long  int arg5_207;
unsigned long  int arg6_208;
unsigned long  int arg_syscall_no_209;
void* __right_value43 = (void*)0;
struct proc* p_210;
    trapframe_201=(struct context_t*)TRAPFRAME;
    arg0_202=trapframe_201->a0;
    arg1_203=trapframe_201->a1;
    arg2_204=trapframe_201->a2;
    arg3_205=trapframe_201->a3;
    arg4_206=trapframe_201->a4;
    arg5_207=trapframe_201->a5;
    arg6_208=trapframe_201->a6;
    arg_syscall_no_209=trapframe_201->a7;
    p_210=((struct proc*)(__right_value43=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value43, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_210->xstatus=arg0_202;
    p_210->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_211;
unsigned long  int arg0_212;
unsigned long  int arg1_213;
unsigned long  int arg2_214;
unsigned long  int arg3_215;
unsigned long  int arg4_216;
unsigned long  int arg5_217;
unsigned long  int arg6_218;
unsigned long  int arg_syscall_no_219;
int* status_va_220;
void* __right_value44 = (void*)0;
struct proc* p_221;
int exit_status_222;
int child_pid_223;
int n_224;
struct list$1proc$ph* o2_saved_225;
struct proc* it_228;
    trapframe_211=(struct context_t*)TRAPFRAME;
    arg0_212=trapframe_211->a0;
    arg1_213=trapframe_211->a1;
    arg2_214=trapframe_211->a2;
    arg3_215=trapframe_211->a3;
    arg4_216=trapframe_211->a4;
    arg5_217=trapframe_211->a5;
    arg6_218=trapframe_211->a6;
    arg_syscall_no_219=trapframe_211->a7;
    status_va_220=(int*)arg0_212;
    p_221=((struct proc*)(__right_value44=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value44, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_222=0;
    child_pid_223=-1;
    while(    child_pid_223==-1    ) {
        timer_handler();
        n_224=0;
        for(        o2_saved_225=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_228=list$1proc$ph_begin((o2_saved_225))        ;        !list$1proc$ph_end((o2_saved_225))        ;        it_228=list$1proc$ph_next((o2_saved_225))        ){
            if(            it_228->zombie            ) {
                free(it_228->file_table);
                free_proc(it_228);
                exit_status_222=it_228->xstatus;
                child_pid_223=n_224;
                list$1proc$ph_remove_by_pointer(gProc,it_228);
                break;
            }
            n_224++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_221->pagetable,(unsigned long  long)status_va_220,(void*)&exit_status_222,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_223;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_226;
struct proc* __result_obj__63;
struct proc* __result_obj__64;
struct proc* result_227;
struct proc* __result_obj__65;
result_226 = (void*)0;
result_227 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_226,0,sizeof(struct proc*));
        __result_obj__63 = result_226;
        return __result_obj__63;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__64 = self->it->item;
        return __result_obj__64;
    }
    memset(&result_227,0,sizeof(struct proc*));
    __result_obj__65 = result_227;
    return __result_obj__65;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_229;
struct proc* __result_obj__66;
struct proc* __result_obj__67;
struct proc* result_230;
struct proc* __result_obj__68;
result_229 = (void*)0;
result_230 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_229,0,sizeof(struct proc*));
        __result_obj__66 = result_229;
        return __result_obj__66;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__67 = self->it->item;
        return __result_obj__67;
    }
    memset(&result_230,0,sizeof(struct proc*));
    __result_obj__68 = result_230;
    return __result_obj__68;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_231;
struct list_item$1proc$ph* it_232;
struct list$1proc$ph* __result_obj__72;
    it2_231=0;
    it_232=self->head;
    while(    it_232!=((void*)0)    ) {
        if(        it_232->item==item        ) {
            list$1proc$ph_delete(self,it2_231,it2_231+1);
            break;
        }
        it2_231++;
        it_232=it_232->next;
    }
    __result_obj__72 = self;
    return __result_obj__72;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_233;
struct list$1proc$ph* __result_obj__69;
struct list_item$1proc$ph* it_236;
int i_237;
struct list_item$1proc$ph* prev_it_238;
struct list_item$1proc$ph* it_239;
int i_240;
struct list_item$1proc$ph* prev_it_241;
struct list_item$1proc$ph* it_242;
struct list_item$1proc$ph* head_prev_it_243;
struct list_item$1proc$ph* tail_it_244;
int i_245;
struct list_item$1proc$ph* prev_it_246;
struct list$1proc$ph* __result_obj__71;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_233=tail;
        tail=head;
        head=tmp_233;
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
        it_236=self->head;
        i_237=0;
        while(        it_236!=((void*)0)        ) {
            if(            i_237<tail            ) {
                prev_it_238=it_236;
                it_236=it_236->next;
                i_237++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_238, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_237==tail            ) {
                self->head=it_236;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_236=it_236->next;
                i_237++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_239=self->head;
        i_240=0;
        while(        it_239!=((void*)0)        ) {
            if(            i_240==head            ) {
                self->tail=it_239->prev;
                self->tail->next=((void*)0);
            }
            if(            i_240>=head            ) {
                prev_it_241=it_239;
                it_239=it_239->next;
                i_240++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_239=it_239->next;
                i_240++;
            }
        }
    }
    else {
        it_242=self->head;
        head_prev_it_243=((void*)0);
        tail_it_244=((void*)0);
        i_245=0;
        while(        it_242!=((void*)0)        ) {
            if(            i_245==head            ) {
                head_prev_it_243=it_242->prev;
            }
            if(            i_245==tail            ) {
                tail_it_244=it_242;
            }
            if(            i_245>=head&&i_245<tail            ) {
                prev_it_246=it_242;
                it_242=it_242->next;
                i_245++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_242=it_242->next;
                i_245++;
            }
        }
        if(        head_prev_it_243!=((void*)0)        ) {
            head_prev_it_243->next=tail_it_244;
        }
        if(        tail_it_244!=((void*)0)        ) {
            tail_it_244->prev=head_prev_it_243;
        }
    }
    __result_obj__71 = self;
    return __result_obj__71;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_234;
struct list_item$1proc$ph* prev_it_235;
struct list$1proc$ph* __result_obj__70;
    it_234=self->head;
    while(    it_234!=((void*)0)    ) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1proc$ph* it_247;
struct list_item$1proc$ph* prev_it_248;
    it_247=self->head;
    while(    it_247!=((void*)0)    ) {
        prev_it_248=it_247;
        it_247=it_247->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_249;
unsigned long  int arg0_250;
unsigned long  int arg1_251;
unsigned long  int arg2_252;
unsigned long  int arg3_253;
unsigned long  int arg4_254;
unsigned long  int arg5_255;
unsigned long  int arg6_256;
unsigned long  int arg_syscall_no_257;
unsigned long  long user_va_259;
void* __right_value45 = (void*)0;
struct proc* p_260;
int result_261;
    trapframe_249=(struct context_t*)TRAPFRAME;
    arg0_250=trapframe_249->a0;
    arg1_251=trapframe_249->a1;
    arg2_252=trapframe_249->a2;
    arg3_253=trapframe_249->a3;
    arg4_254=trapframe_249->a4;
    arg5_255=trapframe_249->a5;
    arg6_256=trapframe_249->a6;
    arg_syscall_no_257=trapframe_249->a7;
    char kernel_buf_258[256];
    memset(&kernel_buf_258, 0, sizeof(char)    *(256)    );
    user_va_259=arg0_250;
    p_260=((struct proc*)(__right_value45=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value45, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_260->pagetable,kernel_buf_258,user_va_259,256);
    result_261=fs_open(kernel_buf_258);
    return result_261;
}

int Sys_fork(){
struct context_t* trapframe_262;
unsigned long  int arg0_263;
unsigned long  int arg1_264;
unsigned long  int arg2_265;
unsigned long  int arg3_266;
unsigned long  int arg4_267;
unsigned long  int arg5_268;
unsigned long  int arg6_269;
unsigned long  int arg_syscall_no_270;
void* __right_value46 = (void*)0;
struct proc* p_271;
int fork_flag_272;
void* __right_value47 = (void*)0;
struct proc* child_273;
unsigned long  long sp_274;
int result_275;
memset(&fork_flag_272, 0, sizeof(int));
    trapframe_262=(struct context_t*)TRAPFRAME;
    arg0_263=trapframe_262->a0;
    arg1_264=trapframe_262->a1;
    arg2_265=trapframe_262->a2;
    arg3_266=trapframe_262->a3;
    arg4_267=trapframe_262->a4;
    arg5_268=trapframe_262->a5;
    arg6_269=trapframe_262->a6;
    arg_syscall_no_270=trapframe_262->a7;
    p_271=((struct proc*)(__right_value46=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value46, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_271->program,fork_flag_272=1,0);
    child_273=((struct proc*)(__right_value47=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value47, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_274=child_273->context.sp;
    child_273->context=*trapframe_262;
    child_273->context.mepc=child_273->context.mepc+4;
    child_273->context.sp=sp_274;
    child_273->context.a0=0;
    result_275=list$1proc$ph_length(gProc)-1;
    return result_275;
}

int Sys_execv(){
struct context_t* trapframe_276;
unsigned long  int arg0_277;
unsigned long  int arg1_278;
unsigned long  int arg2_279;
unsigned long  int arg3_280;
unsigned long  int arg4_281;
unsigned long  int arg5_282;
unsigned long  int arg6_283;
unsigned long  int arg_syscall_no_284;
int argc_285;
unsigned long  long user_va_287;
void* __right_value48 = (void*)0;
struct proc* p_288;
char* path_289;
int fd_291;
int ret_292;
void* __right_value49 = (void*)0;
struct proc* result_293;
    trapframe_276=(struct context_t*)TRAPFRAME;
    arg0_277=trapframe_276->a0;
    arg1_278=trapframe_276->a1;
    arg2_279=trapframe_276->a2;
    arg3_280=trapframe_276->a3;
    arg4_281=trapframe_276->a4;
    arg5_282=trapframe_276->a5;
    arg6_283=trapframe_276->a6;
    arg_syscall_no_284=trapframe_276->a7;
    argc_285=arg2_279;
    char kernel_buf_286[256];
    memset(&kernel_buf_286, 0, sizeof(char)    *(256)    );
    user_va_287=arg0_277;
    p_288=((struct proc*)(__right_value48=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_288->pagetable,kernel_buf_286,user_va_287,256);
    path_289=kernel_buf_286;
    char hello_elf_290[4096];
    memset(&hello_elf_290, 0, sizeof(char)    *(4096)    );
    fd_291=fs_open(path_289);
    ret_292=fs_read(fd_291,hello_elf_290,4096);
    if(    ret_292<0    ) {
        trapframe_276->a0=-1;
        return 0;
    }
    alloc_prog(hello_elf_290,0,1);
    result_293=((struct proc*)(__right_value49=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value49, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_276->mepc=result_293->context.mepc+4;
    trapframe_276->sp=result_293->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_294;
unsigned long  int arg0_295;
unsigned long  int arg1_296;
unsigned long  int arg2_297;
unsigned long  int arg3_298;
unsigned long  int arg4_299;
unsigned long  int arg5_300;
unsigned long  int arg6_301;
unsigned long  int arg_syscall_no_302;
int oldfd_303;
int newfd_304;
    trapframe_294=(struct context_t*)TRAPFRAME;
    arg0_295=trapframe_294->a0;
    arg1_296=trapframe_294->a1;
    arg2_297=trapframe_294->a2;
    arg3_298=trapframe_294->a3;
    arg4_299=trapframe_294->a4;
    arg5_300=trapframe_294->a5;
    arg6_301=trapframe_294->a6;
    arg_syscall_no_302=trapframe_294->a7;
    oldfd_303=arg0_295;
    newfd_304=arg1_296;
    fs_dup2(oldfd_303,newfd_304);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_305;
unsigned long  int arg0_306;
unsigned long  int arg1_307;
unsigned long  int arg2_308;
unsigned long  int arg3_309;
unsigned long  int arg4_310;
unsigned long  int arg5_311;
unsigned long  int arg6_312;
unsigned long  int arg_syscall_no_313;
char* kernel_buf_314;
unsigned long  long user_va_315;
int* fd_316;
void* __right_value50 = (void*)0;
struct proc* p_317;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
kernel_buf_314 = (void*)0;
    trapframe_305=(struct context_t*)TRAPFRAME;
    arg0_306=trapframe_305->a0;
    arg1_307=trapframe_305->a1;
    arg2_308=trapframe_305->a2;
    arg3_309=trapframe_305->a3;
    arg4_310=trapframe_305->a4;
    arg5_311=trapframe_305->a5;
    arg6_312=trapframe_305->a6;
    arg_syscall_no_313=trapframe_305->a7;
    user_va_315=arg0_306;
    fd_316=common_kalloc(sizeof(int)*2);
    pipe_open(&fd_316[0],&fd_316[1]);
    p_317=((struct proc*)(__right_value50=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_317->pagetable,(unsigned long  long)user_va_315,(char*)fd_316,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    map$2void$ptuple2$2void$plong$$ph_insert(p_317->mapping_values,(void*)user_va_315,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 1424, "struct tuple2$2void$plong$")),(void*)fd_316,sizeof(int)*2)));
    return 0;
}

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_insert(struct map$2void$ptuple2$2void$plong$$ph* self, void* key, struct tuple2$2void$plong$* item){
unsigned int hash_318;
unsigned int it_319;
_Bool same_key_exist_320;
void* it2_321;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__73;
    if(    self->len*10>=self->size    ) {
        map$2void$ptuple2$2void$plong$$ph_rehash(self);
    }
    hash_318=voidp_get_hash_key(((void*)key))%self->size;
    it_319=hash_318;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_319]        ) {
            if(            voidp_equals(self->keys[it_319],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_319]);
                    (self->keys[it_319] = come_decrement_ref_count(self->keys[it_319], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_319]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_319]);
                    self->keys[it_319]=key;
                }
                if(                1                ) {
                    come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[it_319], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                    self->items[it_319]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_319]=item;
                }
                break;
            }
            it_319++;
            if(            it_319>=self->size            ) {
                it_319=0;
            }
            else if(            it_319==hash_318            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_319]=(_Bool)1;
            if(            0            ) {
                self->keys[it_319]=key;
            }
            else {
                self->keys[it_319]=key;
            }
            if(            1            ) {
                self->items[it_319]=(struct tuple2$2void$plong$*)come_increment_ref_count(item);
            }
            else {
                self->items[it_319]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_320=(_Bool)0;
    for(    it2_321=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_321=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_321,key)        ) {
            same_key_exist_320=(_Bool)1;
        }
    }
    if(    !same_key_exist_320    ) {
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
struct context_t* trapframe_322;
unsigned long  int arg0_323;
unsigned long  int arg1_324;
unsigned long  int arg2_325;
unsigned long  int arg3_326;
unsigned long  int arg4_327;
unsigned long  int arg5_328;
unsigned long  int arg6_329;
unsigned long  int arg_syscall_no_330;
int fd_331;
unsigned long  long destva_332;
unsigned long  int n_333;
int ret_335;
void* __right_value53 = (void*)0;
struct proc* p_336;
memset(&ret_335, 0, sizeof(int));
    trapframe_322=(struct context_t*)TRAPFRAME;
    arg0_323=trapframe_322->a0;
    arg1_324=trapframe_322->a1;
    arg2_325=trapframe_322->a2;
    arg3_326=trapframe_322->a3;
    arg4_327=trapframe_322->a4;
    arg5_328=trapframe_322->a5;
    arg6_329=trapframe_322->a6;
    arg_syscall_no_330=trapframe_322->a7;
    fd_331=arg0_323;
    destva_332=arg1_324;
    n_333=arg2_325;
    char kernel_buf_334[256];
    memset(&kernel_buf_334, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_331)    ) {
        ret_335=uart_readn(kernel_buf_334,n_333);
    }
    else if(    is_pipe(fd_331)    ) {
        ret_335=piperead(fd_331,kernel_buf_334,n_333);
    }
    else {
        ret_335=fs_read(fd_331,kernel_buf_334,n_333);
        if(        ret_335<0        ) {
            trapframe_322->a0=ret_335;
            return 0;
        }
        kernel_buf_334[ret_335]=0;
    }
    p_336=((struct proc*)(__right_value53=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_336->pagetable,destva_332,kernel_buf_334,ret_335)<0    ) {
        panic("read: copyout failed");
    }
    return ret_335;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_337;
unsigned long  int arg0_338;
unsigned long  int arg1_339;
unsigned long  int arg2_340;
unsigned long  int arg3_341;
unsigned long  int arg4_342;
unsigned long  int arg5_343;
unsigned long  int arg6_344;
unsigned long  int arg_syscall_no_345;
unsigned long  long result_346;
long fd_347;
int ret_348;
    disable_timer_interrupts();
    trapframe_337=(struct context_t*)TRAPFRAME;
    arg0_338=trapframe_337->a0;
    arg1_339=trapframe_337->a1;
    arg2_340=trapframe_337->a2;
    arg3_341=trapframe_337->a3;
    arg4_342=trapframe_337->a4;
    arg5_343=trapframe_337->a5;
    arg6_344=trapframe_337->a6;
    arg_syscall_no_345=trapframe_337->a7;
    result_346=0;
    switch (    arg_syscall_no_345) {
        case 64:
        {
            result_346=Sys_write();
        }
        break;
        case 73:
        {
            result_346=Sys_pipe();
        }
        break;
        case 72:
        {
            result_346=Sys_dup2();
        }
        break;
        case 70:
        {
            result_346=Sys_exit();
        }
        break;
        case 71:
        {
            result_346=Sys_wait();
        }
        break;
        case 66:
        {
            result_346=Sys_open();
        }
        break;
        case 65:
        {
            result_346=Sys_read();
        }
        break;
        case 67:
        {
            fd_347=arg0_338;
            ret_348=fs_close(fd_347);
            result_346=ret_348;
        }
        break;
        case 68:
        {
            result_346=Sys_fork();
        }
        break;
        case 69:
        {
            result_346=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_337->a0=result_346;
    return result_346;
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
struct proc* c_351;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
    c_351=get_current_proc();
    map$2void$ptuple2$2void$plong$$ph_insert(c_351->mapping_values,user_va,(struct tuple2$2void$plong$*)come_increment_ref_count(tuple2$2void$plong$_initialize((struct tuple2$2void$plong$*)come_increment_ref_count((struct tuple2$2void$plong$*)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$)*(1), "main.c", 2385, "struct tuple2$2void$plong$")),pa,(long)size)));
}

void global_init(){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1proc$ph* __dec_obj12;
    __dec_obj12=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2390, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_352;
struct list_item$1proc$ph* prev_it_353;
    it_352=self->head;
    while(    it_352!=((void*)0)    ) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_354;
void* __right_value59 = (void*)0;
struct proc* p_355;
unsigned long  int usersp_356;
unsigned long  long usersatp_357;
unsigned long  int entry_358;
memset(&fork_flag_354, 0, sizeof(int));
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
    alloc_prog((char*)child_elf,fork_flag_354=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_355=((struct proc*)(__right_value59=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_356=(unsigned long  long)(p_355->context.sp);
    usersatp_357=((8L<<60)|(((unsigned long  long)p_355->pagetable)>>12));
    entry_358=p_355->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_355;
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry_358,usersp_356,usersatp_357,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__77;
struct mem_block* current_359;
struct mem_block* prev_360;
void* __result_obj__78;
struct mem_block* new_mem_361;
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
    current_359=free_list;
    prev_360=((void*)0);
    while(    current_359!=((void*)0)    ) {
        if(        current_359->size>=size        ) {
            if(            prev_360==((void*)0)            ) {
                free_list=current_359->next;
            }
            else {
                prev_360->next=current_359->next;
            }
            __result_obj__78 = (void*)(current_359+1);
            return __result_obj__78;
        }
        prev_360=current_359;
        current_359=current_359->next;
    }
    new_mem_361=(struct mem_block*)sbrk(size);
    if(    new_mem_361==(void*)-1    ) {
        __result_obj__79 = ((void*)0);
        return __result_obj__79;
    }
    new_mem_361->size=size;
    new_mem_361->next=((void*)0);
    __result_obj__80 = (void*)(new_mem_361+1);
    return __result_obj__80;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_362;
void* __result_obj__81;
void* ptr_363;
void* __result_obj__82;
    total_size_362=nmemb*size;
    if(    total_size_362==0    ) {
        __result_obj__81 = ((void*)0);
        return __result_obj__81;
    }
    ptr_363=malloc(total_size_362);
    if(    ptr_363!=((void*)0)    ) {
        memset(ptr_363,0,total_size_362);
    }
    __result_obj__82 = ptr_363;
    return __result_obj__82;
}

void free(void* ptr){
struct mem_block* block_364;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_364=(struct mem_block*)ptr-1;
    block_364->next=free_list;
    free_list=block_364;
}

char* strdup(const char* s){
char* s2_365;
unsigned long  int len_366;
char* p_367;
char* __result_obj__83;
    s2_365=s;
    len_366=strlen(s2_365)+1;
    p_367=malloc(len_366);
    if(    p_367    ) {
        memcpy(p_367,s2_365,len_366);
    }
    __result_obj__83 = p_367;
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
        const char* h_368=haystack;
        const char* n_369=needle;
        while(        *h_368&&*n_369&&(*h_368==*n_369)        ) {
            h_368++;
            n_369++;
        }
        if(        !*n_369        ) {
            __result_obj__85 = (char*)haystack;
            return __result_obj__85;
        }
    }
    __result_obj__86 = ((void*)0);
    return __result_obj__86;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_370;
int i_371;
void* __result_obj__87;
    cdst_370=(char*)dst;
    for(    i_371=0    ;    i_371<n    ;    i_371++    ){
        cdst_370[i_371]=c;
    }
    __result_obj__87 = dst;
    return __result_obj__87;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_372;
const unsigned char* s2_373;
memset(&s1_372, 0, sizeof(const unsigned char*));
memset(&s2_373, 0, sizeof(const unsigned char*));
    s1_372=v1;
    s2_373=v2;
    while(    n-->0    ) {
        if(        *s1_372!=*s2_373        ) {
            return *s1_372-*s2_373;
        }
        s1_372++,s2_373++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_374;
char* d_375;
void* __result_obj__88;
void* __result_obj__89;
s_374 = (void*)0;
d_375 = (void*)0;
    if(    n==0    ) {
        __result_obj__88 = dst;
        return __result_obj__88;
    }
    s_374=src;
    d_375=dst;
    if(    s_374<d_375&&s_374+n>d_375    ) {
        s_374+=n;
        d_375+=n;
        while(        n-->0        ) {
            *--d_375=*--s_374;
        }
    }
    else {
        while(        n-->0        ) {
            *d_375++=*s_374++;
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
char* os_376;
char* __result_obj__91;
os_376 = (void*)0;
    os_376=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__91 = os_376;
    return __result_obj__91;
}

int strlen(const char* s){
int n_377;
memset(&n_377, 0, sizeof(int));
    for(    n_377=0    ;    s[n_377]    ;    n_377++    ){
        ;
    }
    return n_377;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_378;
char* __result_obj__92;
    d_378=dest;
    while(    *d_378    ) {
        d_378++;
    }
    while(    n--&&*src    ) {
        *d_378++=*src++;
    }
    *d_378=0;
    __result_obj__92 = dest;
    return __result_obj__92;
}

char* strtok(char* s, const char* delim){
static char* next_379;
char* start_380;
char* p_381;
char* __result_obj__93;
int is_delim_383;
char* __result_obj__94;
int is_delim_385;
char* __result_obj__95;
next_379 = (void*)0;
start_380 = (void*)0;
p_381 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_379=s;
    }
    if(    next_379==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    start_380=next_379;
    while(    *start_380!=0    ) {
        const char* d_382=delim;
        is_delim_383=0;
        while(        *d_382!=0        ) {
            if(            *start_380==*d_382            ) {
                is_delim_383=1;
                break;
            }
            d_382++;
        }
        if(        !is_delim_383        ) {
            break;
        }
        start_380++;
    }
    if(    *start_380==0    ) {
        next_379=((void*)0);
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    p_381=start_380;
    while(    *p_381!=0    ) {
        const char* d_384=delim;
        is_delim_385=0;
        while(        *d_384!=0        ) {
            if(            *p_381==*d_384            ) {
                is_delim_385=1;
                break;
            }
            d_384++;
        }
        if(        is_delim_385        ) {
            break;
        }
        p_381++;
    }
    if(    *p_381==0    ) {
        next_379=((void*)0);
    }
    else {
        *p_381=0;
        next_379=p_381+1;
    }
    __result_obj__95 = start_380;
    return __result_obj__95;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_386;
int i_388;
int negative_389;
char* __result_obj__96;
int digit_390;
char* __result_obj__97;
    p_386=buf;
    char tmp_387[32];
    memset(&tmp_387, 0, sizeof(char)    *(32)    );
    i_388=0;
    negative_389=0;
    if(    base<2||base>16    ) {
        *p_386=0;
        __result_obj__96 = p_386;
        return __result_obj__96;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_389=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_390=val_%base;
        tmp_387[i_388++]=(((digit_390<10))?(48+digit_390):(97+digit_390-10));
        val_/=base;
    } while(    val_    );
    if(    negative_389    ) {
        *p_386++=45;
    }
    while(    i_388--    ) {
        *p_386++=tmp_387[i_388];
    }
    *p_386=0;
    __result_obj__97 = buf;
    return __result_obj__97;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_392;
const char* s_393;
unsigned long  int remaining_395;
s_393 = (void*)0;
    char out2_391[512];
    memset(&out2_391, 0, sizeof(char)    *(512)    );
    p_392=out2_391;
    char buf_394[32];
    memset(&buf_394, 0, sizeof(char)    *(32)    );
    remaining_395=sizeof(out2_391);
    for(    ;    *fmt&&remaining_395>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_392++=*fmt;
            remaining_395--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_394,__builtin_va_arg(ap,int),10,1);
            s_393=buf_394;
            break;
            case 117:
            itoa(buf_394,__builtin_va_arg(ap,unsigned int),10,0);
            s_393=buf_394;
            break;
            case 120:
            itoa(buf_394,__builtin_va_arg(ap,unsigned int),16,0);
            s_393=buf_394;
            break;
            case 115:
            s_393=__builtin_va_arg(ap,const char*);
            if(            !s_393            ) {
                s_393="(null)";
            }
            break;
            case 99:
            buf_394[0]=(char)__builtin_va_arg(ap,int);
            buf_394[1]=0;
            s_393=buf_394;
            break;
            case 112:
            strncpy(buf_394,"0x",32);
            itoa(buf_394+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_393=buf_394;
            break;
            case 37:
            buf_394[0]=37;
            buf_394[1]=0;
            s_393=buf_394;
            break;
            default:
            buf_394[0]=37;
            buf_394[1]=*fmt;
            buf_394[2]=0;
            s_393=buf_394;
            break;
        }
        while(        *s_393&&remaining_395>1        ) {
            *p_392++=*s_393++;
            remaining_395--;
        }
    }
    *p_392=0;
    *out=strdup(out2_391);
    return p_392-out2_391;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_396;
char* p_397;
const char* s_398;
unsigned long  int remaining_400;
memset(&ap_396, 0, sizeof(va_list));
s_398 = (void*)0;
    __builtin_va_start(ap_396,fmt);
    p_397=out;
    char buf_399[32];
    memset(&buf_399, 0, sizeof(char)    *(32)    );
    remaining_400=out_size;
    if(    remaining_400==0    ) {
        __builtin_va_end(ap_396);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_400>1            ) {
                *p_397++=*fmt;
                remaining_400--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_398=__builtin_va_arg(ap_396,const char*);
            while(            *s_398&&remaining_400>1            ) {
                *p_397++=*s_398++;
                remaining_400--;
            }
            break;
            case 100:
            itoa(buf_399,__builtin_va_arg(ap_396,int),10,0);
            s_398=buf_399;
            while(            *s_398&&remaining_400>1            ) {
                *p_397++=*s_398++;
                remaining_400--;
            }
            break;
            case 120:
            itoa(buf_399,(unsigned int)__builtin_va_arg(ap_396,int),16,1);
            s_398=buf_399;
            while(            *s_398&&remaining_400>1            ) {
                *p_397++=*s_398++;
                remaining_400--;
            }
            break;
            case 99:
            if(            remaining_400>1            ) {
                *p_397++=(char)__builtin_va_arg(ap_396,int);
                remaining_400--;
            }
            break;
            case 112:
            s_398="0x";
            while(            *s_398&&remaining_400>1            ) {
                *p_397++=*s_398++;
                remaining_400--;
            }
            itoa(buf_399,(long)__builtin_va_arg(ap_396,void*),16,1);
            s_398=buf_399;
            while(            *s_398&&remaining_400>1            ) {
                *p_397++=*s_398++;
                remaining_400--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_399,__builtin_va_arg(ap_396,long),10,1);
                s_398=buf_399;
                while(                *s_398&&remaining_400>1                ) {
                    *p_397++=*s_398++;
                    remaining_400--;
                }
            }
            break;
            default:
            if(            remaining_400>1            ) {
                *p_397++=37;
                remaining_400--;
                if(                remaining_400>1                ) {
                    *p_397++=*fmt;
                    remaining_400--;
                }
            }
            break;
        }
    }
    *p_397=0;
    __builtin_va_end(ap_396);
    return p_397-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
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

void printint(int val_, int base, int sign){
int i_407;
int negative_408;
unsigned int uval_409;
int digit_410;
memset(&uval_409, 0, sizeof(unsigned int));
    char buf_406[33];
    memset(&buf_406, 0, sizeof(char)    *(33)    );
    i_407=0;
    negative_408=0;
    if(    sign&&val_<0    ) {
        negative_408=1;
        uval_409=-val_;
    }
    else {
        uval_409=(unsigned int)val_;
    }
    if(    uval_409==0    ) {
        putchar(48);
        return;
    }
    while(    uval_409>0    ) {
        digit_410=uval_409%base;
        buf_406[i_407++]=((digit_410<10)?(48+digit_410):(97+(digit_410-10)));
        uval_409/=base;
    }
    if(    negative_408    ) {
        putchar(45);
    }
    while(    --i_407>=0    ) {
        putchar(buf_406[i_407]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_412;
int negative_413;
int digit_414;
    char buf_411[65];
    memset(&buf_411, 0, sizeof(char)    *(65)    );
    i_412=0;
    negative_413=0;
    if(    sign&&(long)val_<0    ) {
        negative_413=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_414=val_%base;
        buf_411[i_412++]=((digit_414<10)?(48+digit_414):(97+(digit_414-10)));
        val_/=base;
    }
    if(    negative_413    ) {
        putchar(45);
    }
    while(    --i_412>=0    ) {
        putchar(buf_411[i_412]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_416;
int negative_417;
int digit_418;
    char buf_415[65];
    memset(&buf_415, 0, sizeof(char)    *(65)    );
    i_416=0;
    negative_417=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_417=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_418=val_%base;
        buf_415[i_416++]=((digit_418<10)?(48+digit_418):(97+(digit_418-10)));
        val_/=base;
    }
    if(    negative_417    ) {
        putchar(45);
    }
    while(    --i_416>=0    ) {
        putchar(buf_415[i_416]);
    }
}

int printf(const char* fmt, ...){
va_list ap_419;
const char* p_420;
int lcount_421;
unsigned long  int val__422;
unsigned long  long val__423;
long val__424;
long long val__425;
int i_426;
int val__427;
unsigned int val__428;
unsigned long  int val__429;
char c_431;
memset(&ap_419, 0, sizeof(va_list));
p_420 = (void*)0;
    __builtin_va_start(ap_419,fmt);
    for(    p_420=fmt    ;    *p_420    ;    p_420++    ){
        if(        *p_420!=37        ) {
            putchar(*p_420);
            continue;
        }
        p_420++;
        if(        *p_420==108        ) {
            lcount_421=1;
            if(            *(p_420+1)==108            ) {
                lcount_421=2;
                p_420++;
            }
            p_420++;
            switch (            *p_420) {
                case 120:
                {
                    if(                    lcount_421==1                    ) {
                        val__422=__builtin_va_arg(ap_419,unsigned long  int);
                        printlong(val__422,16,0);
                    }
                    else {
                        val__423=__builtin_va_arg(ap_419,unsigned long  long);
                        printlonglong(val__423,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_421==1                    ) {
                        val__424=__builtin_va_arg(ap_419,long);
                        printlong(val__424,10,1);
                    }
                    else {
                        val__425=__builtin_va_arg(ap_419,long  long);
                        printlonglong(val__425,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_426=0                    ;                    i_426<lcount_421                    ;                    i_426++                    ){
                        putchar(108);
                    }
                    putchar(*p_420);
                    break;
                }
            }
        }
        else {
            switch (            *p_420) {
                case 100:
                {
                    val__427=__builtin_va_arg(ap_419,int);
                    printint(val__427,10,1);
                    break;
                }
                case 120:
                {
                    val__428=__builtin_va_arg(ap_419,unsigned int);
                    printint(val__428,16,0);
                    break;
                }
                case 112:
                {
                    val__429=(unsigned long  int)__builtin_va_arg(ap_419,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__429,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_430=__builtin_va_arg(ap_419,const char*);
                    if(                    !s_430                    ) {
                        s_430="(null)";
                    }
                    while(                    *s_430                    ) {
                        putchar(*s_430++);
                    }
                    break;
                }
                case 99:
                {
                    c_431=(char)__builtin_va_arg(ap_419,int);
                    putchar(c_431);
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
                    putchar(*p_420);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_419);
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
struct buffer* buf_432;
int i_433;
void* __right_value62 = (void*)0;
    buf_432=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_432,"%s %d\n",sname,sline);
    for(    i_433=gNumComeStackFrame-2    ;    i_433>=0    ;    i_433--    ){
        buffer_append_format(buf_432,"%s %d #%d\n",gComeStackFrameSName[i_433],gComeStackFrameSLine[i_433],gComeStackFrameID[i_433]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value62=buffer_to_string(buf_432))));
    (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_432, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_434;
    for(    i_434=gNumComeStackFrame-1    ;    i_434>=0    ;    i_434--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_434],gComeStackFrameSLine[i_434],gComeStackFrameID[i_434]);
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
int i_435;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_435=0    ;    i_435<gHeapPages.mSizePages    ;    i_435++    ){
        gHeapPages.mPages[i_435]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_436;
int n_437;
_Bool flag_438;
int i_439;
struct sMemHeaderTiny* it_440;
int n_441;
int i_442;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_436=gAllocMem;
        n_437=0;
        while(        it_436        ) {
            n_437++;
            flag_438=(_Bool)0;
            printf("#%d ",n_437);
            if(            it_436->class_name            ) {
                printf("%p (%s): ",(char*)it_436+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_436->class_name);
            }
            for(            i_439=0            ;            i_439<16            ;            i_439++            ){
                if(                it_436->sname[i_439]                ) {
                    printf("%s %d #%d, ",it_436->sname[i_439],it_436->sline[i_439],it_436->id[i_439]);
                    flag_438=(_Bool)1;
                }
            }
            if(            flag_438            ) {
                puts("");
            }
            it_436=it_436->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_437,gNumAlloc,gNumFree);
    }
    else {
        it_440=(struct sMemHeaderTiny*)gAllocMem;
        n_441=0;
        while(        it_440        ) {
            n_441++;
            if(            it_440->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_441,(char*)it_440+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_440->class_name,it_440->sname,it_440->sline);
            }
            it_440=it_440->next;
        }
        if(        n_441>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_441,gNumAlloc,gNumFree);
        }
    }
    for(    i_442=0    ;    i_442<gHeapPages.mSizePages    ;    i_442++    ){
        free(gHeapPages.mPages[i_442]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_443;
void* __result_obj__99;
    result_443=((void*)0);
    size=(size+7&~7);
    result_443=calloc(1,size);
    __result_obj__99 = result_443;
    return __result_obj__99;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_444;
struct sMemHeader* prev_it_445;
struct sMemHeader* next_it_446;
unsigned long  int size_447;
struct sMemHeaderTiny* it_448;
struct sMemHeaderTiny* prev_it_449;
struct sMemHeaderTiny* next_it_450;
unsigned long  int size_451;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_444=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_444->allocated!=177783            ) {
                return;
            }
            it_444->allocated=0;
            prev_it_445=it_444->prev;
            next_it_446=it_444->next;
            if(            gAllocMem==it_444            ) {
                gAllocMem=next_it_446;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_445                ) {
                    prev_it_445->next=next_it_446;
                }
                if(                next_it_446                ) {
                    next_it_446->prev=prev_it_445;
                }
            }
            size_447=it_444->size;
            free(it_444);
            gNumFree++;
        }
        else {
            it_448=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_448->allocated!=177783            ) {
                return;
            }
            it_448->allocated=0;
            prev_it_449=it_448->prev;
            next_it_450=it_448->next;
            if(            gAllocMem==it_448            ) {
                gAllocMem=(struct sMemHeader*)next_it_450;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_449                ) {
                    prev_it_449->next=next_it_450;
                }
                if(                next_it_450                ) {
                    next_it_450->prev=prev_it_449;
                }
            }
            size_451=it_448->size;
            free(it_448);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_452;
struct sMemHeader* it_453;
int i_454;
int i_455;
void* __result_obj__100;
void* result_456;
struct sMemHeaderTiny* it_457;
void* __result_obj__101;
memset(&i_454, 0, sizeof(int));
memset(&i_455, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_452=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_453=result_452;
        it_453->allocated=177783;
        it_453->size=size+sizeof(struct sMemHeader);
        it_453->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_454=0            ;            i_454<gNumComeStackFrame            ;            i_454++            ){
                it_453->sname[i_454]=gComeStackFrameSName[i_454];
                it_453->sline[i_454]=gComeStackFrameSLine[i_454];
                it_453->id[i_454]=gComeStackFrameID[i_454];
            }
        }
        else {
            for(            i_455=0            ;            i_455<16            ;            i_455++            ){
                it_453->sname[i_455]=gComeStackFrameSName[gNumComeStackFrame-1-i_455];
                it_453->sline[i_455]=gComeStackFrameSLine[gNumComeStackFrame-1-i_455];
                it_453->id[i_455]=gComeStackFrameID[gNumComeStackFrame-1-i_455];
            }
        }
        come_pop_stackframe_v2();
        it_453->next=gAllocMem;
        it_453->prev=((void*)0);
        it_453->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_453;
        }
        gAllocMem=it_453;
        gNumAlloc++;
        __result_obj__100 = (char*)result_452+sizeof(struct sMemHeader);
        return __result_obj__100;
    }
    else {
        result_456=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_457=result_456;
        it_457->allocated=177783;
        it_457->class_name=class_name;
        it_457->sname=sname;
        it_457->sline=sline;
        it_457->size=size+sizeof(struct sMemHeaderTiny);
        it_457->free_next=((void*)0);
        it_457->next=(struct sMemHeaderTiny*)gAllocMem;
        it_457->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_457;
        }
        gAllocMem=(struct sMemHeader*)it_457;
        gNumAlloc++;
        __result_obj__101 = (char*)result_456+sizeof(struct sMemHeaderTiny);
        return __result_obj__101;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_458;
char* __result_obj__102;
struct sMemHeaderTiny* it_459;
char* __result_obj__103;
    if(    gComeDebugLib    ) {
        it_458=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_458->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_458);
            exit(2);
        }
        __result_obj__102 = it_458->class_name;
        return __result_obj__102;
    }
    else {
        it_459=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_459->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_459);
            exit(2);
        }
        __result_obj__103 = it_459->class_name;
        return __result_obj__103;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_460;
int i_461;
struct sMemHeaderTiny* it_462;
    if(    gComeDebugLib    ) {
        it_460=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_460->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_460->class_name        ) {
            printf("(%s): ",it_460->class_name);
        }
        for(        i_461=0        ;        i_461<16        ;        i_461++        ){
            if(            it_460->sname[i_461]            ) {
                printf("%s %d #%d, ",it_460->sname[i_461],it_460->sline[i_461],it_460->id[i_461]);
            }
        }
        puts("");
    }
    else {
        it_462=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_462->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_462->class_name,it_462->sname,it_462->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_463;
unsigned long  int* ref_count_464;
unsigned long  int* size2_465;
void* __result_obj__104;
    mem_463=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_464=(unsigned long  int*)mem_463;
    *ref_count_464=0;
    size2_465=(unsigned long  int*)(mem_463+sizeof(unsigned long  int));
    *size2_465=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__104 = mem_463+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__104;
}

void come_free(void* mem){
unsigned long  int* ref_count_466;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_466=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_466);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__105;
char* mem_467;
unsigned long  int* size_p_468;
unsigned long  int size_469;
void* result_470;
void* __result_obj__106;
    if(    !block    ) {
        __result_obj__105 = ((void*)0);
        return __result_obj__105;
    }
    mem_467=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_468=(unsigned long  int*)(mem_467+sizeof(unsigned long  int));
    size_469=*size_p_468-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_470=come_calloc_v2(1,size_469,sname,sline,class_name);
    memcpy(result_470,block,size_469);
    __result_obj__106 = result_470;
    return __result_obj__106;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__107;
unsigned long  int* ref_count_471;
void* __result_obj__108;
    if(    mem==((void*)0)    ) {
        __result_obj__107 = mem;
        return __result_obj__107;
    }
    ref_count_471=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_471)++;
    __result_obj__108 = mem;
    return __result_obj__108;
}

void* come_print_ref_count(void* mem){
void* __result_obj__109;
unsigned long  int* ref_count_472;
void* __result_obj__110;
    if(    mem==((void*)0)    ) {
        __result_obj__109 = mem;
        return __result_obj__109;
    }
    ref_count_472=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_472);
    __result_obj__110 = mem;
    return __result_obj__110;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_473;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_473=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_473;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__111;
void* __result_obj__112;
unsigned long  int* ref_count_474;
unsigned long  int count_475;
void (*finalizer_476)(void*);
void* __result_obj__113;
void* __result_obj__114;
memset(&finalizer_476, 0, sizeof(void (*)(void*)));
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
    ref_count_474=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_474)--;
    }
    count_475=*ref_count_474;
    if(    !no_free&&count_475<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_476=protocol_fun;
            finalizer_476(protocol_obj);
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
void (*finalizer_477)(void*);
void (*finalizer_478)(void*);
void (*finalizer_479)(void*);
unsigned long  int* ref_count_480;
unsigned long  int count_481;
void (*finalizer_482)(void*);
void (*finalizer_483)(void*);
void (*finalizer_484)(void*);
memset(&finalizer_477, 0, sizeof(void (*)(void*)));
memset(&finalizer_478, 0, sizeof(void (*)(void*)));
memset(&finalizer_479, 0, sizeof(void (*)(void*)));
memset(&finalizer_482, 0, sizeof(void (*)(void*)));
memset(&finalizer_483, 0, sizeof(void (*)(void*)));
memset(&finalizer_484, 0, sizeof(void (*)(void*)));
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
                finalizer_477=protocol_fun;
                finalizer_477(protocol_obj);
            }
            finalizer_478=fun;
            finalizer_478(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_479=protocol_fun;
                finalizer_479(protocol_obj);
            }
        }
    }
    else {
        ref_count_480=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_480)--;
        }
        count_481=*ref_count_480;
        if(        !no_free&&count_481<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_482=protocol_fun;
                        finalizer_482(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_483=fun;
                        finalizer_483(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_484=protocol_fun;
                        finalizer_484(protocol_obj);
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
int len_485;
void* __right_value64 = (void*)0;
char* result_486;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_485=strlen(str)+1;
    result_486=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_485)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_486,str,len_485);
    __result_obj__116 = (char*)come_increment_ref_count(result_486);
    (result_486 = come_decrement_ref_count(result_486, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct buffer* result_487;
void* __right_value69 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__121;
    }
    result_487=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_487->size=self->size;
    __dec_obj15=result_487->buf,
    result_487->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_487->len=self->len;
    memcpy(result_487->buf,self->buf,self->len);
    __result_obj__122 = (struct buffer*)come_increment_ref_count(result_487);
    come_call_finalizer(buffer_finalize, result_487, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_488;
int old_len_489;
int new_size_490;
void* __right_value73 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__125;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__124 = self;
        return __result_obj__124;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_488=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_488,self->buf,self->size);
        old_len_489=self->len;
        new_size_490=(self->size+size+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_490)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_488,old_len_489);
        self->buf[old_len_489]=0;
        self->size=new_size_490;
        (old_buf_488 = come_decrement_ref_count(old_buf_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_491;
int old_len_492;
int new_size_493;
void* __right_value75 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__127;
    if(    self==((void*)0)    ) {
        __result_obj__126 = ((void*)0);
        return __result_obj__126;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_491=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_492=self->len;
        new_size_493=(self->size+10+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_493)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_491,old_len_492);
        self->buf[old_len_492]=0;
        self->size=new_size_493;
        (old_buf_491 = come_decrement_ref_count(old_buf_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__127 = self;
    return __result_obj__127;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__128;
int size_494;
void* __right_value76 = (void*)0;
char* old_buf_495;
int old_len_496;
int new_size_497;
void* __right_value77 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__129;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__128 = self;
        return __result_obj__128;
    }
    size_494=strlen(mem);
    if(    self->len+size_494+1+1>=self->size    ) {
        old_buf_495=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_495,self->buf,self->size);
        old_len_496=self->len;
        new_size_497=(self->size+size_494+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_497)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_495,old_len_496);
        self->buf[old_len_496]=0;
        self->size=new_size_497;
        (old_buf_495 = come_decrement_ref_count(old_buf_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_494);
    self->len+=size_494;
    self->buf[self->len]=0;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__130;
va_list args_498;
char* result_499;
int len_500;
struct buffer* __result_obj__131;
void* __right_value78 = (void*)0;
char* mem_501;
int size_502;
void* __right_value79 = (void*)0;
char* old_buf_503;
int old_len_504;
int new_size_505;
void* __right_value80 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__132;
result_499 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__130 = self;
        return __result_obj__130;
    }
    __builtin_va_start(args_498,msg);
    len_500=vasprintf(&result_499,msg,args_498);
    __builtin_va_end(args_498);
    if(    len_500<0    ) {
        __result_obj__131 = self;
        return __result_obj__131;
    }
    mem_501=(char*)come_increment_ref_count(__builtin_string(result_499));
    size_502=strlen(mem_501);
    if(    self->len+size_502+1+1>=self->size    ) {
        old_buf_503=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_503,self->buf,self->size);
        old_len_504=self->len;
        new_size_505=(self->size+size_502+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_505)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_503,old_len_504);
        self->buf[old_len_504]=0;
        self->size=new_size_505;
        (old_buf_503 = come_decrement_ref_count(old_buf_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_501,size_502);
    self->len+=size_502;
    self->buf[self->len]=0;
    free(result_499);
    __result_obj__132 = self;
    (mem_501 = come_decrement_ref_count(mem_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__132;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__133;
int size_506;
void* __right_value81 = (void*)0;
char* old_buf_507;
int old_len_508;
int new_size_509;
void* __right_value82 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__134;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__133 = self;
        return __result_obj__133;
    }
    size_506=strlen(mem)+1;
    if(    self->len+size_506+1+1+1>=self->size    ) {
        old_buf_507=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_507,self->buf,self->size);
        old_len_508=self->len;
        new_size_509=(self->size+size_506+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_509)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_507,old_len_508);
        self->buf[old_len_508]=0;
        self->size=new_size_509;
        (old_buf_507 = come_decrement_ref_count(old_buf_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_506);
    self->len+=size_506;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__134 = self;
    return __result_obj__134;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__135;
int* mem_510;
int size_511;
void* __right_value83 = (void*)0;
char* old_buf_512;
int old_len_513;
int new_size_514;
void* __right_value84 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__136;
    if(    self==((void*)0)    ) {
        __result_obj__135 = ((void*)0);
        return __result_obj__135;
    }
    mem_510=&value;
    size_511=sizeof(int);
    if(    self->len+size_511+1+1>=self->size    ) {
        old_buf_512=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_512,self->buf,self->size);
        old_len_513=self->len;
        new_size_514=(self->size+size_511+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_514)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_512,old_len_513);
        self->buf[old_len_513]=0;
        self->size=new_size_514;
        (old_buf_512 = come_decrement_ref_count(old_buf_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_510,size_511);
    self->len+=size_511;
    self->buf[self->len]=0;
    __result_obj__136 = self;
    return __result_obj__136;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_515;
int size_516;
void* __right_value85 = (void*)0;
char* old_buf_517;
int old_len_518;
int new_size_519;
void* __right_value86 = (void*)0;
char* __dec_obj22;
struct buffer* __result_obj__137;
    mem_515=&value;
    size_516=sizeof(long);
    if(    self->len+size_516+1+1>=self->size    ) {
        old_buf_517=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_517,self->buf,self->size);
        old_len_518=self->len;
        new_size_519=(self->size+size_516+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_519)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_517,old_len_518);
        self->buf[old_len_518]=0;
        self->size=new_size_519;
        (old_buf_517 = come_decrement_ref_count(old_buf_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_515,size_516);
    self->len+=size_516;
    self->buf[self->len]=0;
    __result_obj__137 = self;
    return __result_obj__137;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__138;
short* mem_520;
int size_521;
void* __right_value87 = (void*)0;
char* old_buf_522;
int old_len_523;
int new_size_524;
void* __right_value88 = (void*)0;
char* __dec_obj23;
struct buffer* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = ((void*)0);
        return __result_obj__138;
    }
    mem_520=&value;
    size_521=sizeof(short);
    if(    self->len+size_521+1+1>=self->size    ) {
        old_buf_522=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_522,self->buf,self->size);
        old_len_523=self->len;
        new_size_524=(self->size+size_521+1)*2;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_524)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_522,old_len_523);
        self->buf[old_len_523]=0;
        self->size=new_size_524;
        (old_buf_522 = come_decrement_ref_count(old_buf_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_520,size_521);
    self->len+=size_521;
    self->buf[self->len]=0;
    __result_obj__139 = self;
    return __result_obj__139;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__140;
int len_525;
int new_size_526;
void* __right_value89 = (void*)0;
char* __dec_obj24;
int i_527;
struct buffer* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = ((void*)0);
        return __result_obj__140;
    }
    len_525=self->len;
    len_525=(len_525+3)&~3;
    if(    len_525>=self->size    ) {
        new_size_526=(self->size+1+1)*2;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_526)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_526;
    }
    for(    i_527=self->len    ;    i_527<len_525    ;    i_527++    ){
        self->buf[i_527]=0;
    }
    self->len=len_525;
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
struct buffer* result_528;
struct buffer* __result_obj__142;
struct buffer* __result_obj__143;
    result_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__142 = (struct buffer*)come_increment_ref_count(result_528);
        come_call_finalizer(buffer_finalize, result_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__142;
    }
    buffer_append_str(result_528,self);
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_528);
    come_call_finalizer(buffer_finalize, result_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_529;
struct buffer* __result_obj__147;
    result_529=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_529,self,sizeof(char)*len);
    __result_obj__147 = (struct buffer*)come_increment_ref_count(result_529);
    come_call_finalizer(buffer_finalize, result_529, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* result_530;
int i_531;
struct buffer* __result_obj__148;
    result_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_531=0    ;    i_531<len    ;    i_531++    ){
        buffer_append(result_530,self[i_531],strlen(self[i_531]));
    }
    __result_obj__148 = (struct buffer*)come_increment_ref_count(result_530);
    come_call_finalizer(buffer_finalize, result_530, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct buffer* result_532;
struct buffer* __result_obj__149;
    result_532=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_532,(char*)self,sizeof(short)*len);
    __result_obj__149 = (struct buffer*)come_increment_ref_count(result_532);
    come_call_finalizer(buffer_finalize, result_532, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct buffer* result_533;
struct buffer* __result_obj__150;
    result_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_533,(char*)self,sizeof(int)*len);
    __result_obj__150 = (struct buffer*)come_increment_ref_count(result_533);
    come_call_finalizer(buffer_finalize, result_533, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct buffer* result_534;
struct buffer* __result_obj__151;
    result_534=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_534,(char*)self,sizeof(long)*len);
    __result_obj__151 = (struct buffer*)come_increment_ref_count(result_534);
    come_call_finalizer(buffer_finalize, result_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct buffer* result_535;
struct buffer* __result_obj__152;
    result_535=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_535,(char*)self,sizeof(float)*len);
    __result_obj__152 = (struct buffer*)come_increment_ref_count(result_535);
    come_call_finalizer(buffer_finalize, result_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct buffer* result_536;
struct buffer* __result_obj__153;
    result_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_536,(char*)self,sizeof(double)*len);
    __result_obj__153 = (struct buffer*)come_increment_ref_count(result_536);
    come_call_finalizer(buffer_finalize, result_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

char* buffer_printable(struct buffer* self){
int len_537;
void* __right_value108 = (void*)0;
char* result_538;
int n_539;
int i_540;
unsigned char c_541;
char* __result_obj__154;
    len_537=self->len;
    result_538=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_537*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_539=0;
    for(    i_540=0    ;    i_540<len_537    ;    i_540++    ){
        c_541=self->buf[i_540];
        if(        (c_541>=0&&c_541<32)||c_541==127        ) {
            result_538[n_539++]=94;
            result_538[n_539++]=c_541+65-1;
        }
        else if(        c_541>127        ) {
            result_538[n_539++]=63;
        }
        else {
            result_538[n_539++]=c_541;
        }
    }
    result_538[n_539]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_538);
    (result_538 = come_decrement_ref_count(result_538, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_542;
struct list$1char$* __result_obj__156;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_542=0    ;    i_542<num_value    ;    i_542++    ){
        list$1char$_push_back(self,values[i_542]);
    }
    __result_obj__156 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value110 = (void*)0;
struct list_item$1char$* litem_543;
void* __right_value111 = (void*)0;
struct list_item$1char$* litem_544;
void* __right_value112 = (void*)0;
struct list_item$1char$* litem_545;
struct list$1char$* __result_obj__155;
    if(    self->len==0    ) {
        litem_543=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value110=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_543->prev=((void*)0);
        litem_543->next=((void*)0);
        litem_543->item=item;
        self->tail=litem_543;
        self->head=litem_543;
    }
    else if(    self->len==1    ) {
        litem_544=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value111=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_544->prev=self->head;
        litem_544->next=((void*)0);
        litem_544->item=item;
        self->tail=litem_544;
        self->head->next=litem_544;
    }
    else {
        litem_545=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value112=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_545->prev=self->tail;
        litem_545->next=((void*)0);
        litem_545->item=item;
        self->tail->next=litem_545;
        self->tail=litem_545;
    }
    self->len++;
    __result_obj__155 = self;
    return __result_obj__155;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_546;
struct list_item$1char$* prev_it_547;
    it_546=self->head;
    while(    it_546!=((void*)0)    ) {
        prev_it_547=it_546;
        it_546=it_546->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_548;
struct list$1char$p* __result_obj__159;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_548=0    ;    i_548<num_value    ;    i_548++    ){
        list$1char$p_push_back(self,values[i_548]);
    }
    __result_obj__159 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value115 = (void*)0;
struct list_item$1char$p* litem_549;
void* __right_value116 = (void*)0;
struct list_item$1char$p* litem_550;
void* __right_value117 = (void*)0;
struct list_item$1char$p* litem_551;
struct list$1char$p* __result_obj__158;
    if(    self->len==0    ) {
        litem_549=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value115=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_549->prev=((void*)0);
        litem_549->next=((void*)0);
        litem_549->item=item;
        self->tail=litem_549;
        self->head=litem_549;
    }
    else if(    self->len==1    ) {
        litem_550=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value116=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_550->prev=self->head;
        litem_550->next=((void*)0);
        litem_550->item=item;
        self->tail=litem_550;
        self->head->next=litem_550;
    }
    else {
        litem_551=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value117=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_551->prev=self->tail;
        litem_551->next=((void*)0);
        litem_551->item=item;
        self->tail->next=litem_551;
        self->tail=litem_551;
    }
    self->len++;
    __result_obj__158 = self;
    return __result_obj__158;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_552;
struct list_item$1char$p* prev_it_553;
    it_552=self->head;
    while(    it_552!=((void*)0)    ) {
        prev_it_553=it_552;
        it_552=it_552->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_553, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_554;
struct list$1short$* __result_obj__162;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_554=0    ;    i_554<num_value    ;    i_554++    ){
        list$1short$_push_back(self,values[i_554]);
    }
    __result_obj__162 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value120 = (void*)0;
struct list_item$1short$* litem_555;
void* __right_value121 = (void*)0;
struct list_item$1short$* litem_556;
void* __right_value122 = (void*)0;
struct list_item$1short$* litem_557;
struct list$1short$* __result_obj__161;
    if(    self->len==0    ) {
        litem_555=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value120=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_555->prev=((void*)0);
        litem_555->next=((void*)0);
        litem_555->item=item;
        self->tail=litem_555;
        self->head=litem_555;
    }
    else if(    self->len==1    ) {
        litem_556=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value121=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_556->prev=self->head;
        litem_556->next=((void*)0);
        litem_556->item=item;
        self->tail=litem_556;
        self->head->next=litem_556;
    }
    else {
        litem_557=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value122=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_557->prev=self->tail;
        litem_557->next=((void*)0);
        litem_557->item=item;
        self->tail->next=litem_557;
        self->tail=litem_557;
    }
    self->len++;
    __result_obj__161 = self;
    return __result_obj__161;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_558;
struct list_item$1short$* prev_it_559;
    it_558=self->head;
    while(    it_558!=((void*)0)    ) {
        prev_it_559=it_558;
        it_558=it_558->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_559, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_560;
struct list$1int$* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_560=0    ;    i_560<num_value    ;    i_560++    ){
        list$1int$_push_back(self,values[i_560]);
    }
    __result_obj__165 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value125 = (void*)0;
struct list_item$1int$* litem_561;
void* __right_value126 = (void*)0;
struct list_item$1int$* litem_562;
void* __right_value127 = (void*)0;
struct list_item$1int$* litem_563;
struct list$1int$* __result_obj__164;
    if(    self->len==0    ) {
        litem_561=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value125=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_561->prev=((void*)0);
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail=litem_561;
        self->head=litem_561;
    }
    else if(    self->len==1    ) {
        litem_562=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value126=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_562->prev=self->head;
        litem_562->next=((void*)0);
        litem_562->item=item;
        self->tail=litem_562;
        self->head->next=litem_562;
    }
    else {
        litem_563=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value127=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_563->prev=self->tail;
        litem_563->next=((void*)0);
        litem_563->item=item;
        self->tail->next=litem_563;
        self->tail=litem_563;
    }
    self->len++;
    __result_obj__164 = self;
    return __result_obj__164;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_564;
struct list_item$1int$* prev_it_565;
    it_564=self->head;
    while(    it_564!=((void*)0)    ) {
        prev_it_565=it_564;
        it_564=it_564->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_565, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_566;
struct list$1long$* __result_obj__168;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_566=0    ;    i_566<num_value    ;    i_566++    ){
        list$1long$_push_back(self,values[i_566]);
    }
    __result_obj__168 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__168;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value130 = (void*)0;
struct list_item$1long$* litem_567;
void* __right_value131 = (void*)0;
struct list_item$1long$* litem_568;
void* __right_value132 = (void*)0;
struct list_item$1long$* litem_569;
struct list$1long$* __result_obj__167;
    if(    self->len==0    ) {
        litem_567=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value130=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_567->prev=((void*)0);
        litem_567->next=((void*)0);
        litem_567->item=item;
        self->tail=litem_567;
        self->head=litem_567;
    }
    else if(    self->len==1    ) {
        litem_568=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value131=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_568->prev=self->head;
        litem_568->next=((void*)0);
        litem_568->item=item;
        self->tail=litem_568;
        self->head->next=litem_568;
    }
    else {
        litem_569=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value132=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_569->prev=self->tail;
        litem_569->next=((void*)0);
        litem_569->item=item;
        self->tail->next=litem_569;
        self->tail=litem_569;
    }
    self->len++;
    __result_obj__167 = self;
    return __result_obj__167;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_570;
struct list_item$1long$* prev_it_571;
    it_570=self->head;
    while(    it_570!=((void*)0)    ) {
        prev_it_571=it_570;
        it_570=it_570->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_571, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_572;
struct list$1float$* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_572=0    ;    i_572<num_value    ;    i_572++    ){
        list$1float$_push_back(self,values[i_572]);
    }
    __result_obj__171 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value135 = (void*)0;
struct list_item$1float$* litem_573;
void* __right_value136 = (void*)0;
struct list_item$1float$* litem_574;
void* __right_value137 = (void*)0;
struct list_item$1float$* litem_575;
struct list$1float$* __result_obj__170;
    if(    self->len==0    ) {
        litem_573=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value135=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_573->prev=((void*)0);
        litem_573->next=((void*)0);
        litem_573->item=item;
        self->tail=litem_573;
        self->head=litem_573;
    }
    else if(    self->len==1    ) {
        litem_574=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value136=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_574->prev=self->head;
        litem_574->next=((void*)0);
        litem_574->item=item;
        self->tail=litem_574;
        self->head->next=litem_574;
    }
    else {
        litem_575=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value137=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_575->prev=self->tail;
        litem_575->next=((void*)0);
        litem_575->item=item;
        self->tail->next=litem_575;
        self->tail=litem_575;
    }
    self->len++;
    __result_obj__170 = self;
    return __result_obj__170;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_576;
struct list_item$1float$* prev_it_577;
    it_576=self->head;
    while(    it_576!=((void*)0)    ) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_577, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_578;
struct list$1double$* __result_obj__174;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_578=0    ;    i_578<num_value    ;    i_578++    ){
        list$1double$_push_back(self,values[i_578]);
    }
    __result_obj__174 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value140 = (void*)0;
struct list_item$1double$* litem_579;
void* __right_value141 = (void*)0;
struct list_item$1double$* litem_580;
void* __right_value142 = (void*)0;
struct list_item$1double$* litem_581;
struct list$1double$* __result_obj__173;
    if(    self->len==0    ) {
        litem_579=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value140=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_579->prev=((void*)0);
        litem_579->next=((void*)0);
        litem_579->item=item;
        self->tail=litem_579;
        self->head=litem_579;
    }
    else if(    self->len==1    ) {
        litem_580=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value141=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_580->prev=self->head;
        litem_580->next=((void*)0);
        litem_580->item=item;
        self->tail=litem_580;
        self->head->next=litem_580;
    }
    else {
        litem_581=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value142=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_581->prev=self->tail;
        litem_581->next=((void*)0);
        litem_581->item=item;
        self->tail->next=litem_581;
        self->tail=litem_581;
    }
    self->len++;
    __result_obj__173 = self;
    return __result_obj__173;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_582;
struct list_item$1double$* prev_it_583;
    it_582=self->head;
    while(    it_582!=((void*)0)    ) {
        prev_it_583=it_582;
        it_582=it_582->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_583, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_584;
void* __right_value145 = (void*)0;
char* result_585;
char* __result_obj__177;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    len_584=strlen(self)+strlen(right);
    result_585=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_584+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_585,self,len_584+1);
    strncat(result_585,right,len_584+1);
    __result_obj__177 = (char*)come_increment_ref_count(result_585);
    (result_585 = come_decrement_ref_count(result_585, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* string_operator_add(char* self, char* right){
void* __right_value146 = (void*)0;
char* __result_obj__178;
int len_586;
void* __right_value147 = (void*)0;
char* result_587;
char* __result_obj__179;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    len_586=strlen(self)+strlen(right);
    result_587=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_586+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_587,self,len_586+1);
    strncat(result_587,right,len_586+1);
    __result_obj__179 = (char*)come_increment_ref_count(result_587);
    (result_587 = come_decrement_ref_count(result_587, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* charp_operator_mult(char* self, int right){
void* __right_value148 = (void*)0;
char* __result_obj__180;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct buffer* buf_588;
int i_589;
void* __right_value151 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    buf_588=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_589=0    ;    i_589<right    ;    i_589++    ){
        buffer_append_str(buf_588,self);
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value151=buffer_to_string(buf_588))));
    come_call_finalizer(buffer_finalize, buf_588, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* string_operator_mult(char* self, int right){
void* __right_value152 = (void*)0;
char* __result_obj__182;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct buffer* buf_590;
int i_591;
void* __right_value155 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    buf_590=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_591=0    ;    i_591<right    ;    i_591++    ){
        buffer_append_str(buf_590,self);
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value155=buffer_to_string(buf_590))));
    come_call_finalizer(buffer_finalize, buf_590, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_592;
int i_593;
    result_592=(_Bool)0;
    for(    i_593=0    ;    i_593<len    ;    i_593++    ){
        if(        strncmp(self[i_593],str,strlen(self[i_593]))==0        ) {
            result_592=(_Bool)1;
            break;
        }
    }
    return result_592;
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

unsigned int string_get_hash_key(char* value){
int result_596;
char* p_597;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_596=0;
    p_597=value;
    while(    *p_597    ) {
        result_596+=(*p_597);
        p_597++;
    }
    return result_596;
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
_Bool result_598;
    result_598=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_598;
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
_Bool result_599;
    result_599=(c>=32&&c<=126);
    return result_599;
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
int len_600;
void* __right_value157 = (void*)0;
char* result_601;
int i_602;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    len_600=strlen(str);
    result_601=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_600+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_602=0    ;    i_602<len_600    ;    i_602++    ){
        result_601[i_602]=str[len_600-i_602-1];
    }
    result_601[len_600]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_601);
    (result_601 = come_decrement_ref_count(result_601, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value158 = (void*)0;
char* __result_obj__186;
int len_603;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
char* __result_obj__187;
void* __right_value161 = (void*)0;
char* __result_obj__188;
void* __right_value162 = (void*)0;
char* __result_obj__189;
void* __right_value163 = (void*)0;
char* result_604;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_603=strlen(str);
    if(    head<0    ) {
        head+=len_603;
    }
    if(    tail<0    ) {
        tail+=len_603+1;
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
    if(    tail>=len_603    ) {
        tail=len_603;
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
    result_604=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_604,str+head,tail-head);
    result_604[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_604);
    (result_604 = come_decrement_ref_count(result_604, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value164 = (void*)0;
char* __result_obj__191;
int len_605;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __result_obj__192;
void* __right_value167 = (void*)0;
char* __result_obj__193;
void* __right_value168 = (void*)0;
char* __result_obj__194;
void* __right_value169 = (void*)0;
char* result_606;
char* __result_obj__195;
    if(    str==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    len_605=strlen(str);
    if(    head<0    ) {
        head+=len_605;
    }
    if(    tail<0    ) {
        tail+=len_605+1;
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
    if(    tail>=len_605    ) {
        tail=len_605;
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
    result_606=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_606,str+head,tail-head);
    result_606[tail-head]=0;
    __result_obj__195 = (char*)come_increment_ref_count(result_606);
    (result_606 = come_decrement_ref_count(result_606, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value170 = (void*)0;
char* __result_obj__196;
int len_607;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __result_obj__197;
void* __right_value173 = (void*)0;
char* __result_obj__198;
void* __right_value174 = (void*)0;
char* __result_obj__199;
void* __right_value175 = (void*)0;
char* result_608;
char* __result_obj__200;
    if(    str==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    len_607=strlen(str);
    if(    head<0    ) {
        head+=len_607;
    }
    if(    tail<0    ) {
        tail+=len_607+1;
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
    if(    tail>=len_607    ) {
        tail=len_607;
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
    result_608=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_608,str+head,tail-head);
    result_608[tail-head]=0;
    __result_obj__200 = (char*)come_increment_ref_count(result_608);
    (result_608 = come_decrement_ref_count(result_608, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__200;
}

char* xsprintf(char* msg, ...){
void* __right_value176 = (void*)0;
char* __result_obj__201;
va_list args_609;
char* result_610;
int len_611;
void* __right_value177 = (void*)0;
char* __result_obj__202;
void* __right_value178 = (void*)0;
char* result2_612;
char* __result_obj__203;
result_610 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__201;
    }
    __builtin_va_start(args_609,msg);
    len_611=vasprintf(&result_610,msg,args_609);
    __builtin_va_end(args_609);
    if(    len_611<0    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    result2_612=(char*)come_increment_ref_count(__builtin_string(result_610));
    free(result_610);
    __result_obj__203 = (char*)come_increment_ref_count(result2_612);
    (result2_612 = come_decrement_ref_count(result2_612, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value179 = (void*)0;
char* __result_obj__204;
int len_613;
void* __right_value180 = (void*)0;
char* __result_obj__205;
void* __right_value181 = (void*)0;
char* __result_obj__206;
void* __right_value182 = (void*)0;
char* result_614;
char* __result_obj__207;
    if(    str==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(""))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    len_613=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(str))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    if(    head<0    ) {
        head+=len_613;
    }
    if(    tail<0    ) {
        tail+=len_613+1;
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
    if(    tail>=len_613    ) {
        tail=len_613;
    }
    result_614=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_613-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_614,str,head);
    memcpy(result_614+head,str+tail,len_613-tail);
    result_614[len_613-(tail-head)]=0;
    __result_obj__207 = (char*)come_increment_ref_count(result_614);
    (result_614 = come_decrement_ref_count(result_614, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_615;
struct list_item$1char$ph* prev_it_616;
    it_615=self->head;
    while(    it_615!=((void*)0)    ) {
        prev_it_616=it_615;
        it_615=it_615->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_616, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value189 = (void*)0;
struct list_item$1char$ph* litem_620;
char* __dec_obj25;
void* __right_value190 = (void*)0;
struct list_item$1char$ph* litem_621;
char* __dec_obj26;
void* __right_value191 = (void*)0;
struct list_item$1char$ph* litem_622;
char* __dec_obj27;
struct list$1char$ph* __result_obj__210;
    if(    self->len==0    ) {
        litem_620=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value189=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_620->prev=((void*)0);
        litem_620->next=((void*)0);
        __dec_obj25=litem_620->item,
        litem_620->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_620;
        self->head=litem_620;
    }
    else if(    self->len==1    ) {
        litem_621=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value190=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_621->prev=self->head;
        litem_621->next=((void*)0);
        __dec_obj26=litem_621->item,
        litem_621->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_621;
        self->head->next=litem_621;
    }
    else {
        litem_622=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value191=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_622->prev=self->tail;
        litem_622->next=((void*)0);
        __dec_obj27=litem_622->item,
        litem_622->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_622;
        self->tail=litem_622;
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
struct list$1char$ph* result_617;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct buffer* str_618;
int i_619;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1char$ph* __result_obj__211;
    if(    self==((void*)0)    ) {
        __result_obj__209 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value184=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value184, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__209;
    }
    result_617=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_618=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_619=0    ;    i_619<charp_length(self)    ;    i_619++    ){
        if(        self[i_619]==c        ) {
            list$1char$ph_push_back(result_617,(char*)come_increment_ref_count(__builtin_string(str_618->buf)));
            buffer_reset(str_618);
        }
        else {
            buffer_append_char(str_618,self[i_619]);
        }
    }
    if(    buffer_length(str_618)!=0    ) {
        list$1char$ph_push_back(result_617,(char*)come_increment_ref_count(__builtin_string(str_618->buf)));
    }
    __result_obj__211 = (struct list$1char$ph*)come_increment_ref_count(result_617);
    come_call_finalizer(list$1char$ph$p_finalize, result_617, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_618, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_623;
void* __right_value196 = (void*)0;
char* result_624;
int n_625;
int i_626;
char c_627;
char* __result_obj__214;
    len_623=charp_length(str);
    result_624=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_623*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_625=0;
    for(    i_626=0    ;    i_626<len_623    ;    i_626++    ){
        c_627=str[i_626];
        if(        (c_627>=0&&c_627<32)||c_627==127        ) {
            result_624[n_625++]=94;
            result_624[n_625++]=c_627+65-1;
        }
        else {
            result_624[n_625++]=c_627;
        }
    }
    result_624[n_625]=0;
    __result_obj__214 = (char*)come_increment_ref_count(result_624);
    (result_624 = come_decrement_ref_count(result_624, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value197 = (void*)0;
char* __result_obj__215;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* result_628;
char* p_629;
char* p2_630;
void* __right_value200 = (void*)0;
char* __result_obj__216;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__215;
    }
    result_628=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_629=self;
    while(    (_Bool)1    ) {
        p2_630=strstr(p_629,str);
        if(        p2_630==((void*)0)        ) {
            p2_630=p_629;
            while(            *p2_630            ) {
                p2_630++;
            }
            buffer_append(result_628,p_629,p2_630-p_629);
            break;
        }
        buffer_append(result_628,p_629,p2_630-p_629);
        buffer_append_str(result_628,replace);
        p_629=p2_630+strlen(str);
    }
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value200=buffer_to_string(result_628))));
    come_call_finalizer(buffer_finalize, result_628, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__216;
}

char* xbasename(char* path){
void* __right_value201 = (void*)0;
char* __result_obj__217;
char* p_631;
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
    p_631=path+strlen(path);
    while(    p_631>=path    ) {
        if(        *p_631==47        ) {
            break;
        }
        else {
            p_631--;
        }
    }
    if(    p_631<path    ) {
        __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(path))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__218;
    }
    else {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(p_631+1))));
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
char* path2_632;
char* p_633;
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
    path2_632=(char*)come_increment_ref_count(xbasename(path));
    p_633=path2_632+strlen(path2_632);
    while(    p_633>=path2_632    ) {
        if(        *p_633==46        ) {
            break;
        }
        else {
            p_633--;
        }
    }
    if(    p_633<path2_632    ) {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(path2_632))));
        (path2_632 = come_decrement_ref_count(path2_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
    else {
        __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value208=charp_substring(path2_632,0,p_633-path2_632))));
        (path2_632 = come_decrement_ref_count(path2_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__223;
    }
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(""))));
    (path2_632 = come_decrement_ref_count(path2_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* xextname(char* path){
void* __right_value210 = (void*)0;
char* __result_obj__225;
char* p_634;
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
    p_634=path+strlen(path);
    while(    p_634>=path    ) {
        if(        *p_634==46        ) {
            break;
        }
        else {
            p_634--;
        }
    }
    if(    p_634<path    ) {
        __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(path))));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__226;
    }
    else {
        __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(p_634+1))));
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
char* msg2_635;
va_list args_636;
void* __right_value234 = (void*)0;
char* __result_obj__249;
msg2_635 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(""))));
        (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__248;
    }
    __builtin_va_start(args_636,self);
    vasprintf(&msg2_635,self,args_636);
    __builtin_va_end(args_636);
    printf("%s",msg2_635);
    free(msg2_635);
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
int i_637;
    for(    i_637=0    ;    i_637<self    ;    i_637++    ){
        block(parent,i_637);
    }
}

