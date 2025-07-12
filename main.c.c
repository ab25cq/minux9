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
  0x5a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb8, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xaa, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x91, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x39, 0x71, 0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00,
  0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc, 0x23, 0x34, 0xc4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x03, 0x37, 0x04, 0xfd, 0x83, 0x36, 0x84, 0xfc,
  0x3e, 0x85, 0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x01, 0x11,
  0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x8d, 0x47,
  0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11,
  0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x21, 0x46, 0x97, 0x05, 0x00, 0x00,
  0x93, 0x85, 0x45, 0x02, 0x05, 0x45, 0xef, 0xf0, 0xbf, 0xf7, 0x05, 0x45,
  0xef, 0xf0, 0x7f, 0xfb, 0x81, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64,
  0x41, 0x01, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x48, 0x45, 0x4c, 0x4c,
  0x4f, 0x31, 0x0d, 0x0a, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67,
  0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31,
  0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72,
  0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10,
  0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x88, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x91, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x46, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x98, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x5a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x98, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63,
  0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x65, 0x78, 0x69, 0x74,
  0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f,
  0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41,
  0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x66,
  0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44,
  0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61,
  0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41,
  0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f,
  0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00,
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
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xaa, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x73, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=1720;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x46, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xa5, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x39, 0x71, 0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00,
  0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc, 0x23, 0x34, 0xc4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x03, 0x37, 0x04, 0xfd, 0x83, 0x36, 0x84, 0xfc,
  0x3e, 0x85, 0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x01, 0x11,
  0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x01, 0xa0, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x0d, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x85, 0x03, 0x05, 0x45, 0xef, 0xf0,
  0xff, 0xf8, 0x09, 0x45, 0xef, 0xf0, 0xbf, 0xfc, 0x81, 0x47, 0x3e, 0x85,
  0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4,
  0x22, 0xe0, 0x00, 0x08, 0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64,
  0x41, 0x01, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x41, 0x42, 0x43, 0x00,
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
  0x03, 0x00, 0x02, 0x00, 0x88, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x8c, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x8c, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x70, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x90, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x8c, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x46, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x8c, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x8c, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x90, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x32, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00,
  0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d,
  0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70,
  0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d,
  0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30,
  0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62,
  0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00,
  0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49,
  0x4e, 0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53,
  0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73,
  0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49,
  0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f,
  0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68,
  0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74,
  0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f,
  0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76,
  0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x88, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa5, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1712;
unsigned char shell_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x80, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x98, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x8d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x39, 0x71, 0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00,
  0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc, 0x23, 0x34, 0xc4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x03, 0x37, 0x04, 0xfd, 0x83, 0x36, 0x84, 0xfc,
  0x3e, 0x85, 0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x79, 0x71,
  0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37,
  0x84, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x30, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85,
  0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec,
  0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0,
  0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc,
  0x23, 0x38, 0xb4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x03, 0x37, 0x04, 0xfd,
  0x3e, 0x85, 0xba, 0x85, 0x93, 0x08, 0x80, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85,
  0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4,
  0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x90, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd,
  0x23, 0x04, 0xf4, 0xfe, 0xa3, 0x04, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe,
  0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0xbf, 0xee, 0x01, 0x00,
  0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x1d, 0x71, 0x86, 0xec,
  0xa2, 0xe8, 0x80, 0x10, 0xaa, 0x87, 0xae, 0x86, 0x32, 0x87, 0x23, 0x26,
  0xf4, 0xfa, 0xb6, 0x87, 0x23, 0x24, 0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22,
  0xf4, 0xfa, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27,
  0x44, 0xfa, 0x81, 0x27, 0x8d, 0xc3, 0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27,
  0x63, 0xdd, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27,
  0xc4, 0xfa, 0xbb, 0x07, 0xf0, 0x40, 0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe,
  0x29, 0xa0, 0x83, 0x27, 0xc4, 0xfa, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x81, 0x27, 0xad, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0,
  0xdf, 0xf6, 0x65, 0xa0, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe,
  0xbb, 0x77, 0xf7, 0x02, 0x81, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27,
  0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00,
  0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03,
  0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27,
  0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17,
  0x22, 0x97, 0x23, 0x04, 0xf7, 0xfc, 0x83, 0x27, 0x84, 0xfa, 0x03, 0x27,
  0x44, 0xfe, 0xbb, 0x57, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x81, 0x27, 0xd1, 0xfb, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27,
  0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0xdf, 0xee, 0x11, 0xa8,
  0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc,
  0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xed, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf,
  0x07, 0xfc, 0xe6, 0x60, 0x46, 0x64, 0x25, 0x61, 0x82, 0x80, 0x59, 0x71,
  0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87,
  0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8,
  0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9,
  0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00,
  0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07,
  0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0xbf, 0xe6, 0x55, 0xa0, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22,
  0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47,
  0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27,
  0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7,
  0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26,
  0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0xff, 0xde,
  0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7,
  0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0xbf, 0xdd, 0x83, 0x27, 0xc4, 0xfe,
  0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80,
  0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8,
  0xae, 0x87, 0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28,
  0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27,
  0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb,
  0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9,
  0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9,
  0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0xdf, 0xd6, 0x55, 0xa0,
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
  0x1f, 0xcf, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97,
  0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0xdf, 0xcd, 0x83, 0x27,
  0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe,
  0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61,
  0x82, 0x80, 0x31, 0x71, 0x86, 0xfc, 0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34,
  0xa4, 0xf8, 0x0c, 0xe4, 0x10, 0xe8, 0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4,
  0x23, 0x38, 0x04, 0x03, 0x23, 0x3c, 0x14, 0x03, 0x93, 0x07, 0x04, 0x04,
  0x23, 0x30, 0xf4, 0xf8, 0x83, 0x37, 0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc,
  0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe,
  0xd9, 0xac, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87,
  0x93, 0x07, 0x50, 0x02, 0x63, 0x0a, 0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xc6, 0x6d, 0xa4,
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
  0x45, 0xa2, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x1f, 0xb5, 0x23, 0x20,
  0x04, 0xfe, 0x11, 0xa8, 0x13, 0x05, 0xc0, 0x06, 0xef, 0xf0, 0x3f, 0xb4,
  0x83, 0x27, 0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27,
  0x04, 0xfe, 0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27,
  0xe3, 0x40, 0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xb1, 0xb9, 0xaa, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x81, 0x27, 0x13, 0x07, 0x50, 0x02, 0x63, 0x86,
  0xe7, 0x12, 0x13, 0x07, 0x50, 0x02, 0x63, 0xc7, 0xe7, 0x12, 0x13, 0x07,
  0x80, 0x07, 0x63, 0x43, 0xf7, 0x12, 0x13, 0x07, 0x30, 0x06, 0x63, 0xcf,
  0xe7, 0x10, 0x9b, 0x87, 0xd7, 0xf9, 0xbe, 0x86, 0x1b, 0x87, 0x06, 0x00,
  0xd5, 0x47, 0x63, 0xe7, 0xe7, 0x10, 0x93, 0x97, 0x06, 0x02, 0x81, 0x93,
  0x13, 0x97, 0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xc7, 0x28,
  0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00,
  0x93, 0x87, 0xc7, 0x27, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9,
  0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x22,
  0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfc, 0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85,
  0xef, 0xf0, 0x9f, 0xac, 0xf1, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x2a, 0xf4, 0xfc,
  0x83, 0x27, 0x44, 0xfd, 0x01, 0x46, 0xc1, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0x7f, 0xaa, 0x6d, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfc, 0x13, 0x05,
  0x00, 0x03, 0xef, 0xf0, 0x9f, 0xa5, 0x13, 0x05, 0x80, 0x07, 0xef, 0xf0,
  0x1f, 0xa5, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0,
  0xdf, 0xb8, 0x69, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37,
  0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xc7, 0x1d,
  0x23, 0x3c, 0xf4, 0xfc, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfd, 0x13, 0x87,
  0x17, 0x00, 0x23, 0x3c, 0xe4, 0xfc, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0x7f, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00,
  0xed, 0xf3, 0x89, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00,
  0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0xa3, 0x01, 0xf4, 0xfc, 0x83, 0x47,
  0x34, 0xfc, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x9d, 0x15, 0xa0, 0x13, 0x05,
  0x50, 0x02, 0xef, 0xf0, 0x5f, 0x9d, 0x29, 0xa8, 0x13, 0x05, 0x50, 0x02,
  0xef, 0xf0, 0xbf, 0x9c, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0xdf, 0x9b, 0x01, 0x00, 0x83, 0x37, 0x84, 0xfe,
  0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0xe3, 0x92, 0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70,
  0x46, 0x74, 0x29, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8,
  0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfe,
  0x13, 0x87, 0x17, 0x00, 0x23, 0x34, 0xe4, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0x5f, 0x97, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0xed, 0xf3, 0x01, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64,
  0x05, 0x61, 0x82, 0x80, 0x71, 0x71, 0x06, 0xf5, 0x22, 0xf1, 0x00, 0x19,
  0x93, 0x07, 0x84, 0xfd, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x91, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xb5, 0xe3, 0x83, 0x37, 0x84, 0xfd,
  0x03, 0x37, 0x04, 0xfe, 0x3a, 0x86, 0xbe, 0x85, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0xc5, 0x13, 0xef, 0xf0, 0x3f, 0xc6, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x05, 0x15, 0xef, 0xf0, 0xff, 0xf7, 0x83, 0x37, 0x84, 0xfd,
  0x3e, 0x85, 0xef, 0xf0, 0x9f, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0xa5, 0x14, 0xef, 0xf0, 0x9f, 0xf6, 0x83, 0x37, 0x04, 0xfe, 0x85, 0x45,
  0x3e, 0x85, 0xef, 0xf0, 0xbf, 0x88, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0x25, 0x14, 0xef, 0xf0, 0x1f, 0xf5, 0x83, 0x37, 0x04, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0xbf, 0x82, 0x19, 0x45, 0xef, 0xf0, 0x3f, 0x85, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0xb5, 0xe3, 0x83, 0x37, 0x84, 0xfd,
  0x03, 0x37, 0x04, 0xfe, 0x3a, 0x86, 0xbe, 0x85, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x45, 0x11, 0xef, 0xf0, 0xbf, 0xbe, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x85, 0x0f, 0xef, 0xf0, 0x7f, 0xf0, 0x83, 0x37, 0x04, 0xfe,
  0x3e, 0x85, 0xef, 0xf0, 0x0f, 0xfe, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0x25, 0x11, 0xef, 0xf0, 0x1f, 0xef, 0x83, 0x37, 0x84, 0xfd, 0x81, 0x45,
  0x3e, 0x85, 0xef, 0xf0, 0x3f, 0x81, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0xa5, 0x0a, 0xef, 0xf0, 0x9f, 0xed, 0x83, 0x37, 0x84, 0xfd, 0x3e, 0x85,
  0xef, 0xf0, 0x2f, 0xfb, 0x19, 0x45, 0xef, 0xf0, 0xaf, 0xfd, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0xe5, 0x0e, 0xef, 0xf0, 0xdf, 0xeb, 0x01, 0xa0,
  0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00, 0x4c, 0xfe, 0xff, 0xff,
  0x90, 0xfd, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff,
  0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff,
  0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff,
  0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff,
  0xd4, 0xfd, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff,
  0x04, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff,
  0x74, 0xfe, 0xff, 0xff, 0x74, 0xfe, 0xff, 0xff, 0xb2, 0xfd, 0xff, 0xff,
  0x43, 0x48, 0x49, 0x4c, 0x44, 0x31, 0x20, 0x66, 0x64, 0x5b, 0x30, 0x5d,
  0x20, 0x25, 0x6c, 0x64, 0x20, 0x66, 0x64, 0x5b, 0x31, 0x5d, 0x20, 0x25,
  0x6c, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x6c, 0x6f, 0x73,
  0x65, 0x28, 0x66, 0x64, 0x5b, 0x30, 0x5d, 0x29, 0x00, 0x00, 0x00, 0x00,
  0x64, 0x75, 0x70, 0x32, 0x28, 0x66, 0x64, 0x5b, 0x31, 0x5d, 0x2c, 0x20,
  0x31, 0x29, 0x00, 0x00, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x28, 0x66, 0x64,
  0x5b, 0x31, 0x5d, 0x29, 0x00, 0x00, 0x00, 0x00, 0x43, 0x48, 0x49, 0x4c,
  0x44, 0x32, 0x20, 0x66, 0x64, 0x5b, 0x30, 0x5d, 0x20, 0x25, 0x64, 0x20,
  0x66, 0x64, 0x5b, 0x31, 0x5d, 0x20, 0x25, 0x64, 0x0a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x64, 0x75, 0x70, 0x32, 0x28, 0x66, 0x64, 0x5b,
  0x30, 0x5d, 0x2c, 0x20, 0x30, 0x29, 0x00, 0x00, 0x45, 0x4e, 0x44, 0x00,
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
  0x03, 0x00, 0x02, 0x00, 0x90, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x74, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xac, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xda, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x1e, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x74, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x74, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x46, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x20, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x78, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x74, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x80, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x0c, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x74, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x74, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x78, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x22, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x68, 0x65,
  0x6c, 0x6c, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x63, 0x6c, 0x6f, 0x73, 0x65, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x64,
  0x75, 0x70, 0x32, 0x00, 0x70, 0x69, 0x70, 0x65, 0x00, 0x70, 0x75, 0x74,
  0x63, 0x68, 0x61, 0x72, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00,
  0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69,
  0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54,
  0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75,
  0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67,
  0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45,
  0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73,
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
  0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x90, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8d, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int shell_elf_len=4248;
typedef int pid_t;

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

struct map$2void$pvoid$p
{
    void** keys;
    _Bool* item_existance;
    void** items;
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
    char* stack;
    char* stack_top;
    unsigned long  long vaddr;
    int zombie;
    unsigned long  long* pagetable;
    char* program;
    int xstatus;
    struct map$2void$pvoid$p* mapping_values;
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
void pipe_open(long* fd1, long* fd2);
int piperead(int fd, char* addr, int n);
int pipewrite(int fd, char* addr, int n);
void fs_dup2(long oldfd, long newfd);
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
void alloc_prog(char* hello_elf, int fork_flag);
static struct map$2void$pvoid$p* map$2void$pvoid$p_initialize(struct map$2void$pvoid$p* self);
static struct list$1void$p* list$1void$p_initialize(struct list$1void$p* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static void list$1void$p_finalize(struct list$1void$p* self);
static void map$2void$pvoid$p$p_finalize(struct map$2void$pvoid$p* self);
static void map$2void$pvoid$p_finalize(struct map$2void$pvoid$p* self);
static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position);
static void proc_finalize(struct proc* self);
static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position);
static void* map$2void$pvoid$p_begin(struct map$2void$pvoid$p* self);
static _Bool map$2void$pvoid$p_end(struct map$2void$pvoid$p* self);
static void* map$2void$pvoid$p_next(struct map$2void$pvoid$p* self);
static void* map$2void$pvoid$p$p_operator_load_element(struct map$2void$pvoid$p* self, void* key);
static void* map$2void$pvoid$p_operator_load_element(struct map$2void$pvoid$p* self, void* key);
static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item);
unsigned long  long* uvmcreate();
unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz);
static void free_pagetable(unsigned long  long* pagetable, int level);
struct file* get_current_file_table();
void exec_prog(char* hello_elf);
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
static struct map$2void$pvoid$p* map$2void$pvoid$p_insert(struct map$2void$pvoid$p* self, void* key, void* item);
static void map$2void$pvoid$p_rehash(struct map$2void$pvoid$p* self);
static void* map$2void$pvoid$p_at(struct map$2void$pvoid$p* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p_reset(struct list$1void$p* self);
static void* list$1void$p_begin(struct list$1void$p* self);
static _Bool list$1void$p_end(struct list$1void$p* self);
static void* list$1void$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p_push_back(struct list$1void$p* self, void* item);
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX336, unsigned long  int anonymous_var_nameX337, unsigned long  int anonymous_var_nameX338, unsigned long  long anonymous_var_nameX339);
void timerinit();
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
static inline long write(long fd, const void* buf, long size){
long ret_1;
memset(&ret_1, 0, sizeof(long));
    __asm volatile("mv   a0, %1    \n" // fd → a0
        "mv   a1, %2    \n" // buf → a1
        "mv   a2, %3    \n" // size → a2
        "li   a7, %4    \n" // SYS_write → a7
        "ecall          \n" // システムコール発行
        "mv   %0, a0    \n" // 戻り値 a0 → ret
        : "=r"(ret_1): "r"(fd), // %1
          "r"(buf), // %2
          "r"(size), // %3
          "i"(64): "a0","a1","a2","a7","memory"
    );
    return ret_1;
}
static inline long read(long fd, void* buf, long size){
long ret_2;
memset(&ret_2, 0, sizeof(long));
    __asm volatile("mv   a0, %2    \n" // fd → a0
        "mv   a1, %3    \n" // buf → a1
        "mv   a2, %4    \n" // size → a2
        "li   a7, %5    \n" // SYS_read → a7
        "ecall          \n" // システムコール発行
        "mv   %0, a0    \n" // 戻り値 a0 → ret
        : "=r"(ret_2): "0"(ret_2), // %1 = 同じレジスタ（ダミー）
          "r"(fd), // %2 = fd
          "r"(buf), // %3 = buf
          "r"(size), // %4 = size
          "i"(65): "a0", "a1", "a2", "a7", "memory"
    );
    return ret_2;
}
static inline int open(const char* path, int oflag){
int ret_3;
memset(&ret_3, 0, sizeof(int));
    __asm volatile("mv  a0, %2      \n" // path → a0
        "mv  a1, %3      \n" // oflag → a1
        "li  a7, %4      \n" // SYS_open → a7
        "ecall           \n" // syscall
        "mv  %0, a0      \n" // 戻り値 a0 → ret
        : "=r"(ret_3): "0"(ret_3), // %1 = 同じレジスタに一時退避（不要ですが慣例的に入れます）
          "r"(path), // %2 = path
          "r"(oflag), // %3 = oflag
          "i"(66): "a0", "a1", "a7", "memory"
    );
    return ret_3;
}
static inline int close(long fd){
int ret_4;
memset(&ret_4, 0, sizeof(int));
    __asm volatile("mv   a0, %1    \n" // fd → a0
        "li   a7, %2    \n" // SYS_close → a7
        "ecall          \n" // システムコール発行
        "mv   %0, a0    \n" // 戻り値 a0 → ret
        : "=r"(ret_4): "r"(fd), // %1
          "i"(67): "a0","a7","memory"
    );
    return ret_4;
}
static inline int execv(char* path, char** argv, int argc){
int ret_5;
memset(&ret_5, 0, sizeof(int));
    __asm volatile("mv   a0, %1    \n" // path → a0
        "mv   a1, %2    \n" // argv → a1
        "mv   a2, %3    \n" // argc → a2
        "li   a7, %4    \n" // SYS_execv → a7
        "ecall          \n" // システムコール発行
        "mv   %0, a0    \n" // 戻り値 a0 → ret
        : "=r"(ret_5): "r"(path), // %1
          "r"(argv), // %2
          "r"(argc), // %3
          "i"(69): "a0","a1","a2","a7","memory"
    );
    return ret_5;
}
static inline int wait(int* status){
int ret_6;
memset(&ret_6, 0, sizeof(int));
    __asm volatile("mv   a0, %1    \n"
        "li   a7, %2    \n"
        "ecall          \n"
        "mv   %0, a0    \n"
        : "=r"(ret_6): "r"(status), // %1
          "i"(71): "a0","a7","memory"
    );
    return ret_6;
}
static inline long dup2(long oldfd, long newfd){
long ret_7;
memset(&ret_7, 0, sizeof(long));
    __asm volatile("mv   a0, %1    \n" // fd → a0
        "mv   a1, %2    \n" // buf → a1
        "li   a7, %3    \n" // SYS_write → a7
        "ecall          \n" // システムコール発行
        "mv   %0, a0    \n" // 戻り値 a0 → ret
        : "=r"(ret_7): "r"(oldfd), // %1
          "r"(newfd), // %2
          "i"(72): "a0","a1","a7","memory"
    );
    return ret_7;
}
static inline long pipe(long* pip){
long ret_8;
memset(&ret_8, 0, sizeof(long));
    __asm volatile("mv   a0, %1    \n" // fd → a0
        "li   a7, %2    \n" // SYS_write → a7
        "ecall          \n" // システムコール発行
        "mv   %0, a0    \n" // 戻り値 a0 → ret
        : "=r"(ret_8): "r"(pip), // %1
          "i"(73): "a0","a7","memory"
    );
    return ret_8;
}
static inline unsigned long  long r_time(){
unsigned long  long x_9;
memset(&x_9, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_9));
    return x_9;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_15;
memset(&x_15, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_15));
    return x_15;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_16;
memset(&x_16, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_16));
    return x_16;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_17;
    x_17=r_sstatus();
    x_17|=(1L<<1);
    w_sstatus(x_17);
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
unsigned long  long x_18;
    x_18=r_sstatus();
    return (x_18&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_121;
memset(&x_121, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_121));
    return x_121;
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
unsigned long  long x_331;
memset(&x_331, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_331));
    return x_331;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_332;
memset(&sp_val_332, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_332): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_332;
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
void* p_10;
void* __result_obj__3;
    p_10=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__3 = p_10;
    return __result_obj__3;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_11;
void* base_12;
unsigned long  int i_13;
void* pg_14;
void* __result_obj__4;
    bump_11=(unsigned long  long)_end2;
    base_12=((void*)0);
    for(    i_13=0    ;    i_13<npages    ;    i_13++    ){
        pg_14=kalloc_page(bump_11);
        if(        i_13==0        ) {
            base_12=pg_14;
        }
    }
    __result_obj__4 = base_12;
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
int r_19;
memset(&r_19, 0, sizeof(int));
    r_19=(lk->locked&&lk->cpu==mycpu());
    return r_19;
}

void push_off(){
int old_20;
    old_20=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_20;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_21;
    c_21=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_21->noff<1    ) {
        panic("pop_off");
    }
    c_21->noff-=1;
    if(    c_21->noff==0&&c_21->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_22;
p_22 = (void*)0;
    p_22=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_22+4096<=(char*)pa_end    ;    p_22+=4096    ){
        kfree(p_22);
    }
}

void kfree(void* pa){
struct run* r_23;
r_23 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_23=(struct run*)pa;
    acquire(&kmem.lock);
    r_23->next=kmem.freelist;
    kmem.freelist=r_23;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_24;
void* __result_obj__6;
r_24 = (void*)0;
    acquire(&kmem.lock);
    r_24=kmem.freelist;
    if(    r_24    ) {
        kmem.freelist=r_24->next;
    }
    release(&kmem.lock);
    if(    r_24    ) {
        memset((char*)r_24,5,4096);
    }
    __result_obj__6 = (void*)r_24;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_25;
unsigned long  long* pte_26;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    for(    level_25=2    ;    level_25>0    ;    level_25--    ){
        pte_26=(unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_25))))&511)];
        if(        *pte_26&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_26)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_26=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = (unsigned long  long*)&pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_27;
unsigned long  long last_28;
unsigned long  long* pte_29;
memset(&a_27, 0, sizeof(unsigned long  long));
memset(&last_28, 0, sizeof(unsigned long  long));
pte_29 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_27=va;
    last_28=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_29=walk(pagetable,a_27,1))==0        ) {
            return -1;
        }
        if(        *pte_29&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_29&1023,perm);
        }
        *pte_29=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_27==last_28        ) {
            break;
        }
        a_27+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_30;
int i_31;
    ptr_30=(unsigned int*)pa;
    for(    i_31=0    ;    i_31<count    ;    i_31++    ){
        if(        i_31%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_30+i_31));
        }
        printf("%p ",ptr_30[i_31]);
        if(        i_31%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_32;
unsigned long  long pte_33;
unsigned long  long pa_34;
unsigned long  long child_va_35;
int j_36;
    for(    i_32=0    ;    i_32<512    ;    i_32++    ){
        pte_33=pagetable[i_32];
        if(        pte_33&(1L<<0)        ) {
            pa_34=(((pte_33)>>10)<<12);
            child_va_35=va|((unsigned long  long)i_32<<(12+9*(2-level)));
            for(            j_36=0            ;            j_36<level            ;            j_36++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_35,pa_34,i_32,level);
            if(            (pte_33&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_33&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_33&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_33&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_33&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_33&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_33&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_34,child_va_35,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_37;
    satp_37=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_37));
    __asm volatile("sfence.vma zero, zero");
}

void* common_kalloc(unsigned long  int size){
void* r_41;
void* __result_obj__9;
    static unsigned long  int offset_38=0;
    const unsigned long  int base_39=(unsigned long  int)COMMON;
    const unsigned long  int align_40=8;
    offset_38=(offset_38+(align_40-1))&~(align_40-1);
    r_41=(void*)(base_39+offset_38);
    offset_38+=size;
    __result_obj__9 = r_41;
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
unsigned long  long addr_42;
int i_43;
unsigned long  long va_44;
unsigned long  long pa_45;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_42=2147483648UL    ;    addr_42<2164260864UL    ;    addr_42+=4096    ){
        mappages(kernel_pagetable,addr_42,4096,addr_42,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_43=0    ;    i_43<8    ;    i_43++    ){
        va_44=268439552UL+i_43*4096UL;
        pa_45=va_44;
        mappages(kernel_pagetable,va_44,4096UL,pa_45,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_46;
void* __result_obj__10;
void* __result_obj__11;
void* __result_obj__12;
unsigned long  long pa_47;
void* __result_obj__13;
    pte_46=walk(pagetable,va,0);
    if(    pte_46==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_46&(1L<<0))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    if(    (*pte_46&(1L<<4))==0    ) {
        __result_obj__12 = (void*)0;
        return __result_obj__12;
    }
    pa_47=(((*pte_46)>>10)<<12);
    __result_obj__13 = (void*)(pa_47+(va&(4096-1)));
    return __result_obj__13;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_48;
unsigned long  long off_49;
char* pa_50;
unsigned long  long n_51;
pa_50 = (void*)0;
    va0_48=(((dstva))&~(4096-1));
    off_49=dstva-va0_48;
    while(    len>0    ) {
        if(        (pa_50=walkaddr(pagetable,va0_48))==0        ) {
            return -1;
        }
        n_51=4096-off_49;
        if(        n_51>len        ) {
            n_51=len;
        }
        memcpy(pa_50+off_49,src,n_51);
        len-=n_51;
        src+=n_51;
        va0_48+=4096;
        off_49=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_52;
unsigned long  long va0_53;
unsigned long  long pa0_54;
memset(&n_52, 0, sizeof(unsigned long  long));
memset(&va0_53, 0, sizeof(unsigned long  long));
memset(&pa0_54, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_53=(((srcva))&~(4096-1));
        pa0_54=(unsigned long  long)walkaddr(pagetable,va0_53);
        if(        pa0_54==0        ) {
            return -1;
        }
        n_52=4096-(srcva-va0_53);
        if(        n_52>len        ) {
            n_52=len;
        }
        memmove(dst,(void*)(pa0_54+(srcva-va0_53)),n_52);
        len-=n_52;
        dst+=n_52;
        srcva=va0_53+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_55;
unsigned long  long va0_56;
unsigned long  long pa0_57;
int got_null_58;
char* dst2_59;
char* p_60;
memset(&n_55, 0, sizeof(unsigned long  long));
memset(&va0_56, 0, sizeof(unsigned long  long));
memset(&pa0_57, 0, sizeof(unsigned long  long));
    got_null_58=0;
    dst2_59=dst;
    while(    got_null_58==0&&max>0    ) {
        va0_56=(((srcva))&~(4096-1));
        pa0_57=(unsigned long  long)walkaddr(pagetable,va0_56);
        if(        pa0_57==0        ) {
            return -1;
        }
        n_55=4096-(srcva-va0_56);
        if(        n_55>max        ) {
            n_55=max;
        }
        p_60=(char*)(pa0_57+(srcva-va0_56));
        while(        n_55>0        ) {
            if(            *p_60==0            ) {
                *dst2_59=0;
                got_null_58=dst2_59-dst;
                break;
            }
            else {
                *dst2_59=*p_60;
            }
            --n_55;
            --max;
            p_60++;
            dst2_59++;
        }
        srcva=va0_56+4096;
    }
    if(    got_null_58    ) {
        dst2_59[got_null_58]=0;
        return got_null_58;
    }
    else {
        return -1;
    }
}

void setting_user_pagetable(struct proc* proc, unsigned long  long* pagetable){
int i_61;
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    for(    i_61=0    ;    i_61<8    ;    i_61++    ){
        mappages(pagetable,(unsigned long  long)COMMON+i_61*4096,4096,(unsigned long  long)COMMON+i_61*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* hello_elf, int fork_flag){
void* __right_value0 = (void*)0;
struct proc* result_62;
void* __right_value1 = (void*)0;
void* __right_value7 = (void*)0;
struct map$2void$pvoid$p* __dec_obj2;
unsigned long  long* pagetable_72;
struct elfhdr* eh_73;
struct proghdr* ph_74;
unsigned long  long size_75;
unsigned long  long va_76;
int i_77;
void* pa_78;
void* __right_value8 = (void*)0;
struct proc* parent_79;
unsigned long  long parent_current_86;
unsigned long  long parent_stack_top_87;
char* src_88;
char* pa_89;
struct map$2void$pvoid$p* o2_saved_90;
void* it_93;
void* pa_96;
void* __right_value9 = (void*)0;
struct proc* parent_103;
char* pa_104;
    result_62=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 793, "struct proc*"));
    result_62->program=hello_elf;
    __dec_obj2=result_62->mapping_values,
    result_62->mapping_values=(struct map$2void$pvoid$p*)come_increment_ref_count(map$2void$pvoid$p_initialize((struct map$2void$pvoid$p*)come_increment_ref_count((struct map$2void$pvoid$p*)come_calloc_v2(1, sizeof(struct map$2void$pvoid$p)*(1), "main.c", 797, "struct map$2void$pvoid$p*"))));
    come_call_finalizer(map$2void$pvoid$p_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    pagetable_72=(unsigned long  long*)kalloc();
    memset(pagetable_72,0,4096);
    setting_user_pagetable(result_62,pagetable_72);
    result_62->pagetable=pagetable_72;
    eh_73=(struct elfhdr*)hello_elf;
    if(    eh_73->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_74=(struct proghdr*)(hello_elf+eh_73->phoff);
    size_75=ph_74->filesz;
    result_62->vaddr=(((ph_74->vaddr))&~(4096-1));
    va_76=0;
    for(    i_77=0    ;    i_77<eh_73->phnum    ;    i_77++,ph_74++    ){
        if(        ph_74->type!=1        ) {
            continue;
        }
        for(        va_76=(((ph_74->vaddr))&~(4096-1))        ;        va_76<ph_74->vaddr+ph_74->memsz        ;        va_76+=4096        ){
            pa_78=kalloc();
            if(            !pa_78            ) {
                panic("kalloc");
            }
            memset(pa_78,0,4096);
            mappages(result_62->pagetable,va_76,4096,(unsigned long  long)pa_78,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_62->pagetable,ph_74->vaddr,hello_elf+ph_74->off,ph_74->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_79=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_86=parent_79->context.sp;
        parent_stack_top_87=(unsigned long  long)parent_79->stack_top;
        src_88=walkaddr(parent_79->pagetable,parent_stack_top_87);
        pa_89=kalloc();
        if(        !pa_89        ) {
            panic("fork sp");
        }
        memmove(pa_89,(void*)src_88,4096);
        mappages(result_62->pagetable,va_76,4096,(unsigned long  long)pa_89,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_62->stack=(char*)va_76+4096;
        result_62->stack_top=(char*)va_76;
        result_62->context.sp=parent_79->context.sp;
        result_62->file_table=fs_init();
        *result_62->file_table=*get_current_file_table();
        for(        o2_saved_90=(struct map$2void$pvoid$p*)come_increment_ref_count((parent_79->mapping_values)),it_93=map$2void$pvoid$p_begin((o2_saved_90))        ;        !map$2void$pvoid$p_end((o2_saved_90))        ;        it_93=map$2void$pvoid$p_next((o2_saved_90))        ){
            pa_96=map$2void$pvoid$p_operator_load_element(parent_79->mapping_values,it_93);
            if(            copyout(result_62->pagetable,(unsigned long  long)it_93,(char*)pa_96,sizeof(long))<0            ) {
                panic("copyout");
            }
        }
        come_call_finalizer(map$2void$pvoid$p$p_finalize, o2_saved_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        parent_103=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        pa_104=kalloc();
        if(        !pa_104        ) {
            panic("kalloc");
        }
        memset(pa_104,0,4096);
        mappages(result_62->pagetable,va_76,4096,(unsigned long  long)pa_104,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_62->stack=(char*)va_76+4096;
        result_62->stack_top=(char*)va_76;
        result_62->context.sp=va_76+4096;
        result_62->file_table=fs_init();
    }
    result_62->context.mepc=eh_73->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_62));
    come_call_finalizer(proc_finalize, result_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct map$2void$pvoid$p* map$2void$pvoid$p_initialize(struct map$2void$pvoid$p* self){
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
int i_63;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1void$p* __dec_obj1;
struct map$2void$pvoid$p* __result_obj__15;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value2=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1924, "void**"))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value3=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1925, "void**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value4=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1926, "_Bool*"))));
    for(    i_63=0    ;    i_63<128    ;    i_63++    ){
        self->item_existance[i_63]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj1=self->key_list,
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1936, "struct list$1void$p*"))));
    come_call_finalizer(list$1void$p_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__15 = (struct map$2void$pvoid$p*)come_increment_ref_count(self);
    come_call_finalizer(map$2void$pvoid$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2void$pvoid$p$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static struct list$1void$p* list$1void$p_initialize(struct list$1void$p* self){
struct list$1void$p* __result_obj__14;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__14 = (struct list$1void$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1void$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1void$p$p_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_64;
struct list_item$1void$p* prev_it_65;
    it_64=self->head;
    while(    it_64!=((void*)0)    ) {
        prev_it_65=it_64;
        it_64=it_64->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_65, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_66;
struct list_item$1void$p* prev_it_67;
    it_66=self->head;
    while(    it_66!=((void*)0)    ) {
        prev_it_67=it_66;
        it_66=it_66->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2void$pvoid$p$p_finalize(struct map$2void$pvoid$p* self){
int i_68;
int i_69;
    for(    i_68=0    ;    i_68<self->size    ;    i_68++    ){
        if(        self->item_existance[i_68]        ) {
            if(            0            ) {
                (self->items[i_68] = come_decrement_ref_count(self->items[i_68], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_69=0    ;    i_69<self->size    ;    i_69++    ){
        if(        self->item_existance[i_69]        ) {
            if(            0            ) {
                (self->keys[i_69] = come_decrement_ref_count(self->keys[i_69], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void map$2void$pvoid$p_finalize(struct map$2void$pvoid$p* self){
int i_70;
int i_71;
    for(    i_70=0    ;    i_70<self->size    ;    i_70++    ){
        if(        self->item_existance[i_70]        ) {
            if(            0            ) {
                (self->items[i_70] = come_decrement_ref_count(self->items[i_70], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_71=0    ;    i_71<self->size    ;    i_71++    ){
        if(        self->item_existance[i_71]        ) {
            if(            0            ) {
                (self->keys[i_71] = come_decrement_ref_count(self->keys[i_71], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_80;
int i_81;
struct proc* __result_obj__16;
struct proc* default_value_82;
struct proc* __result_obj__17;
default_value_82 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_80=self->head;
    i_81=0;
    while(    it_80!=((void*)0)    ) {
        if(        position==i_81        ) {
            __result_obj__16 = (struct proc*)come_increment_ref_count(it_80->item);
            come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__16;
        }
        it_80=it_80->next;
        i_81++;
    }
    memset(&default_value_82,0,sizeof(struct proc*));
    __result_obj__17 = (struct proc*)come_increment_ref_count(default_value_82);
    come_call_finalizer(proc_finalize, default_value_82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void proc_finalize(struct proc* self){
    if(    self!=((void*)0)&&self->mapping_values!=((void*)0)    ) {
        come_call_finalizer(map$2void$pvoid$p$p_finalize, self->mapping_values, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_83;
int i_84;
struct proc* __result_obj__18;
struct proc* default_value_85;
struct proc* __result_obj__19;
default_value_85 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_83=self->head;
    i_84=0;
    while(    it_83!=((void*)0)    ) {
        if(        position==i_84        ) {
            __result_obj__18 = (struct proc*)come_increment_ref_count(it_83->item);
            come_call_finalizer(proc_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__18;
        }
        it_83=it_83->next;
        i_84++;
    }
    memset(&default_value_85,0,sizeof(struct proc*));
    __result_obj__19 = (struct proc*)come_increment_ref_count(default_value_85);
    come_call_finalizer(proc_finalize, default_value_85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static void* map$2void$pvoid$p_begin(struct map$2void$pvoid$p* self){
void* result_91;
void* __result_obj__20;
void* __result_obj__21;
void* result_92;
void* __result_obj__22;
result_91 = (void*)0;
result_92 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_91,0,sizeof(void*));
        __result_obj__20 = result_91;
        return __result_obj__20;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__21 = self->key_list->it->item;
        return __result_obj__21;
    }
    memset(&result_92,0,sizeof(void*));
    __result_obj__22 = result_92;
    return __result_obj__22;
}

static _Bool map$2void$pvoid$p_end(struct map$2void$pvoid$p* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$pvoid$p_next(struct map$2void$pvoid$p* self){
void* result_94;
void* __result_obj__23;
void* __result_obj__24;
void* result_95;
void* __result_obj__25;
result_94 = (void*)0;
result_95 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_94,0,sizeof(void*));
        __result_obj__23 = result_94;
        return __result_obj__23;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__24 = self->key_list->it->item;
        return __result_obj__24;
    }
    memset(&result_95,0,sizeof(void*));
    __result_obj__25 = result_95;
    return __result_obj__25;
}

static void* map$2void$pvoid$p$p_operator_load_element(struct map$2void$pvoid$p* self, void* key){
void* default_value_97;
unsigned int hash_98;
unsigned int it_99;
void* __result_obj__26;
void* __result_obj__27;
void* __result_obj__28;
void* __result_obj__29;
default_value_97 = (void*)0;
    memset(&default_value_97,0,sizeof(void*));
    hash_98=voidp_get_hash_key(((void*)key))%self->size;
    it_99=hash_98;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_99]        ) {
            if(            voidp_equals(self->keys[it_99],key)            ) {
                __result_obj__26 = self->items[it_99];
                return __result_obj__26;
            }
            it_99++;
            if(            it_99>=self->size            ) {
                it_99=0;
            }
            else if(            it_99==hash_98            ) {
                __result_obj__27 = default_value_97;
                return __result_obj__27;
            }
        }
        else {
            __result_obj__28 = default_value_97;
            return __result_obj__28;
        }
    }
    __result_obj__29 = default_value_97;
    return __result_obj__29;
}

static void* map$2void$pvoid$p_operator_load_element(struct map$2void$pvoid$p* self, void* key){
void* default_value_100;
unsigned int hash_101;
unsigned int it_102;
void* __result_obj__30;
void* __result_obj__31;
void* __result_obj__32;
void* __result_obj__33;
default_value_100 = (void*)0;
    memset(&default_value_100,0,sizeof(void*));
    hash_101=voidp_get_hash_key(((void*)key))%self->size;
    it_102=hash_101;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_102]        ) {
            if(            voidp_equals(self->keys[it_102],key)            ) {
                __result_obj__30 = self->items[it_102];
                return __result_obj__30;
            }
            it_102++;
            if(            it_102>=self->size            ) {
                it_102=0;
            }
            else if(            it_102==hash_101            ) {
                __result_obj__31 = default_value_100;
                return __result_obj__31;
            }
        }
        else {
            __result_obj__32 = default_value_100;
            return __result_obj__32;
        }
    }
    __result_obj__33 = default_value_100;
    return __result_obj__33;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value10 = (void*)0;
struct list_item$1proc$ph* litem_105;
struct proc* __dec_obj3;
void* __right_value11 = (void*)0;
struct list_item$1proc$ph* litem_106;
struct proc* __dec_obj4;
void* __right_value12 = (void*)0;
struct list_item$1proc$ph* litem_107;
struct proc* __dec_obj5;
struct list$1proc$ph* __result_obj__34;
    if(    self->len==0    ) {
        litem_105=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value10=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_105->prev=((void*)0);
        litem_105->next=((void*)0);
        __dec_obj3=litem_105->item,
        litem_105->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_105;
        self->head=litem_105;
    }
    else if(    self->len==1    ) {
        litem_106=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value11=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_106->prev=self->head;
        litem_106->next=((void*)0);
        __dec_obj4=litem_106->item,
        litem_106->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_106;
        self->head->next=litem_106;
    }
    else {
        litem_107=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value12=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_107->prev=self->tail;
        litem_107->next=((void*)0);
        __dec_obj5=litem_107->item,
        litem_107->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_107;
        self->tail=litem_107;
    }
    self->len++;
    __result_obj__34 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__34;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_108;
unsigned long  long* __result_obj__35;
unsigned long  long* __result_obj__36;
pagetable_108 = (void*)0;
    pagetable_108=(unsigned long  long*)kalloc();
    if(    pagetable_108==0    ) {
        __result_obj__35 = (unsigned long  long*)0;
        return __result_obj__35;
    }
    memset(pagetable_108,0,4096);
    __result_obj__36 = pagetable_108;
    return __result_obj__36;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__109;
unsigned long  long* __result_obj__37;
unsigned long  long addr_110;
unsigned long  long* pte_111;
unsigned long  long pa_112;
unsigned int flags_113;
char* mem_114;
unsigned long  long* __result_obj__38;
new__109 = (void*)0;
    new__109=uvmcreate();
    if(    new__109==0    ) {
        __result_obj__37 = (unsigned long  long*)0;
        return __result_obj__37;
    }
    for(    addr_110=0    ;    addr_110<sz    ;    addr_110+=4096    ){
        pte_111=walk(old,addr_110,0);
        if(        !pte_111||!(*pte_111&(1L<<0))        ) {
            continue;
        }
        pa_112=(((*pte_111)>>10)<<12);
        flags_113=((*pte_111)&1023);
        mem_114=kalloc();
        if(        mem_114==0        ) {
            panic("coypuvm");
        }
        memmove(mem_114,(char*)pa_112,4096);
        if(        mappages(new__109,addr_110,4096,((((unsigned long  long)mem_114)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_114);
            panic("copyuvm");
        }
    }
    __result_obj__38 = new__109;
    return __result_obj__38;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_115;
unsigned long  long pte_116;
unsigned long  long pa_117;
unsigned long  long* child_118;
    for(    i_115=0    ;    i_115<512    ;    i_115++    ){
        pte_116=pagetable[i_115];
        if(        !(pte_116&(1L<<0))        ) {
            continue;
        }
        pa_117=(((pte_116)>>10)<<12);
        if(        pte_116&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_117);
            }
        }
        else if(        level>0        ) {
            child_118=(unsigned long  long*)pa_117;
            free_pagetable(child_118,level-1);
            kfree(child_118);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value13 = (void*)0;
struct file* __result_obj__39;
    __result_obj__39 = ((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__39;
}

void exec_prog(char* hello_elf){
void* __right_value14 = (void*)0;
struct proc* parent_proc_119;
struct file* old_file_table_120;
    parent_proc_119=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    parent_proc_119->zombie=1;
    old_file_table_120=parent_proc_119->file_table;
    alloc_prog(hello_elf,0);
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
unsigned long  int x_122;
memset(&x_122, 0, sizeof(unsigned long  int));
    x_122=r_sie();
    x_122|=(1UL<<5);
    w_sie(x_122);
    x_122=r_sstatus();
    x_122|=(1UL<<1);
    w_sstatus(x_122);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_123;
    next_123=r_time()+10000UL;
    w_stimecmp(next_123);
}

void timer_handler(){
void* __right_value15 = (void*)0;
struct proc* p_124;
struct context_t* tf_125;
int old_active_proc_126;
void* __right_value16 = (void*)0;
struct proc* old_127;
void* __right_value17 = (void*)0;
struct proc* new__128;
unsigned long  long a0_129;
    disable_timer_interrupts();
    p_124=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_125=(struct context_t*)TRAPFRAME;
    p_124->context=*tf_125;
    timer_reset();
    old_active_proc_126=gActiveProc;
    old_127=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__128=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__128!=old_127&&new__128->zombie==0    ) {
        user_sp=new__128->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__128->pagetable)>>12));
        old_127->context=*(struct context_t*)TRAPFRAME;
        a0_129=new__128->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_129));
        swtch(&new__128->context);
    }
    else {
        gActiveProc=old_active_proc_126;
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
struct context_t* trapframe_130;
unsigned long  int arg0_131;
unsigned long  int arg1_132;
unsigned long  int arg2_133;
unsigned long  int arg3_134;
unsigned long  int arg4_135;
unsigned long  int arg5_136;
unsigned long  int arg6_137;
unsigned long  int arg_syscall_no_138;
int fd_139;
unsigned long  long user_va_141;
int len_142;
void* __right_value18 = (void*)0;
struct proc* p_143;
int ret_144;
int i_145;
    trapframe_130=(struct context_t*)TRAPFRAME;
    arg0_131=trapframe_130->a0;
    arg1_132=trapframe_130->a1;
    arg2_133=trapframe_130->a2;
    arg3_134=trapframe_130->a3;
    arg4_135=trapframe_130->a4;
    arg5_136=trapframe_130->a5;
    arg6_137=trapframe_130->a6;
    arg_syscall_no_138=trapframe_130->a7;
    fd_139=arg0_131;
    char kernel_buf_140[256];
    memset(&kernel_buf_140, 0, sizeof(char)    *(256)    );
    user_va_141=arg1_132;
    len_142=arg2_133;
    memset(kernel_buf_140,0,256);
    p_143=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_144=copyin(p_143->pagetable,kernel_buf_140,user_va_141,len_142);
    if(    ret_144<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_139)    ) {
        pipewrite(fd_139,kernel_buf_140,len_142);
    }
    else if(    is_stdout(fd_139)    ) {
        for(        i_145=0        ;        i_145<len_142        ;        i_145++        ){
            putchar(kernel_buf_140[i_145]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_146;
unsigned long  int arg0_147;
unsigned long  int arg1_148;
unsigned long  int arg2_149;
unsigned long  int arg3_150;
unsigned long  int arg4_151;
unsigned long  int arg5_152;
unsigned long  int arg6_153;
unsigned long  int arg_syscall_no_154;
void* __right_value19 = (void*)0;
struct proc* p_155;
    trapframe_146=(struct context_t*)TRAPFRAME;
    arg0_147=trapframe_146->a0;
    arg1_148=trapframe_146->a1;
    arg2_149=trapframe_146->a2;
    arg3_150=trapframe_146->a3;
    arg4_151=trapframe_146->a4;
    arg5_152=trapframe_146->a5;
    arg6_153=trapframe_146->a6;
    arg_syscall_no_154=trapframe_146->a7;
    p_155=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_155->xstatus=arg0_147;
    p_155->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_156;
unsigned long  int arg0_157;
unsigned long  int arg1_158;
unsigned long  int arg2_159;
unsigned long  int arg3_160;
unsigned long  int arg4_161;
unsigned long  int arg5_162;
unsigned long  int arg6_163;
unsigned long  int arg_syscall_no_164;
int* status_va_165;
void* __right_value20 = (void*)0;
struct proc* p_166;
int exit_status_167;
int child_pid_168;
int n_169;
struct list$1proc$ph* o2_saved_170;
struct proc* it_173;
    trapframe_156=(struct context_t*)TRAPFRAME;
    arg0_157=trapframe_156->a0;
    arg1_158=trapframe_156->a1;
    arg2_159=trapframe_156->a2;
    arg3_160=trapframe_156->a3;
    arg4_161=trapframe_156->a4;
    arg5_162=trapframe_156->a5;
    arg6_163=trapframe_156->a6;
    arg_syscall_no_164=trapframe_156->a7;
    status_va_165=(int*)arg0_157;
    p_166=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_167=0;
    child_pid_168=-1;
    while(    child_pid_168==-1    ) {
        timer_handler();
        n_169=0;
        for(        o2_saved_170=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_173=list$1proc$ph_begin((o2_saved_170))        ;        !list$1proc$ph_end((o2_saved_170))        ;        it_173=list$1proc$ph_next((o2_saved_170))        ){
            if(            it_173->zombie            ) {
                exit_status_167=it_173->xstatus;
                child_pid_168=n_169;
                list$1proc$ph_remove_by_pointer(gProc,it_173);
                break;
            }
            n_169++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_166->pagetable,(unsigned long  long)status_va_165,(void*)&exit_status_167,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_168;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_171;
struct proc* __result_obj__40;
struct proc* __result_obj__41;
struct proc* result_172;
struct proc* __result_obj__42;
result_171 = (void*)0;
result_172 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_171,0,sizeof(struct proc*));
        __result_obj__40 = result_171;
        return __result_obj__40;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__41 = self->it->item;
        return __result_obj__41;
    }
    memset(&result_172,0,sizeof(struct proc*));
    __result_obj__42 = result_172;
    return __result_obj__42;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_174;
struct proc* __result_obj__43;
struct proc* __result_obj__44;
struct proc* result_175;
struct proc* __result_obj__45;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_174,0,sizeof(struct proc*));
        __result_obj__43 = result_174;
        return __result_obj__43;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__44 = self->it->item;
        return __result_obj__44;
    }
    memset(&result_175,0,sizeof(struct proc*));
    __result_obj__45 = result_175;
    return __result_obj__45;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_176;
struct list_item$1proc$ph* it_177;
struct list$1proc$ph* __result_obj__49;
    it2_176=0;
    it_177=self->head;
    while(    it_177!=((void*)0)    ) {
        if(        it_177->item==item        ) {
            list$1proc$ph_delete(self,it2_176,it2_176+1);
            break;
        }
        it2_176++;
        it_177=it_177->next;
    }
    __result_obj__49 = self;
    return __result_obj__49;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_178;
struct list$1proc$ph* __result_obj__46;
struct list_item$1proc$ph* it_181;
int i_182;
struct list_item$1proc$ph* prev_it_183;
struct list_item$1proc$ph* it_184;
int i_185;
struct list_item$1proc$ph* prev_it_186;
struct list_item$1proc$ph* it_187;
struct list_item$1proc$ph* head_prev_it_188;
struct list_item$1proc$ph* tail_it_189;
int i_190;
struct list_item$1proc$ph* prev_it_191;
struct list$1proc$ph* __result_obj__48;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_178=tail;
        tail=head;
        head=tmp_178;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__46 = self;
        return __result_obj__46;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_181=self->head;
        i_182=0;
        while(        it_181!=((void*)0)        ) {
            if(            i_182<tail            ) {
                prev_it_183=it_181;
                it_181=it_181->next;
                i_182++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_182==tail            ) {
                self->head=it_181;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_181=it_181->next;
                i_182++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_184=self->head;
        i_185=0;
        while(        it_184!=((void*)0)        ) {
            if(            i_185==head            ) {
                self->tail=it_184->prev;
                self->tail->next=((void*)0);
            }
            if(            i_185>=head            ) {
                prev_it_186=it_184;
                it_184=it_184->next;
                i_185++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_184=it_184->next;
                i_185++;
            }
        }
    }
    else {
        it_187=self->head;
        head_prev_it_188=((void*)0);
        tail_it_189=((void*)0);
        i_190=0;
        while(        it_187!=((void*)0)        ) {
            if(            i_190==head            ) {
                head_prev_it_188=it_187->prev;
            }
            if(            i_190==tail            ) {
                tail_it_189=it_187;
            }
            if(            i_190>=head&&i_190<tail            ) {
                prev_it_191=it_187;
                it_187=it_187->next;
                i_190++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_187=it_187->next;
                i_190++;
            }
        }
        if(        head_prev_it_188!=((void*)0)        ) {
            head_prev_it_188->next=tail_it_189;
        }
        if(        tail_it_189!=((void*)0)        ) {
            tail_it_189->prev=head_prev_it_188;
        }
    }
    __result_obj__48 = self;
    return __result_obj__48;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_179;
struct list_item$1proc$ph* prev_it_180;
struct list$1proc$ph* __result_obj__47;
    it_179=self->head;
    while(    it_179!=((void*)0)    ) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__47 = self;
    return __result_obj__47;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_192;
struct list_item$1proc$ph* prev_it_193;
    it_192=self->head;
    while(    it_192!=((void*)0)    ) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_194;
unsigned long  int arg0_195;
unsigned long  int arg1_196;
unsigned long  int arg2_197;
unsigned long  int arg3_198;
unsigned long  int arg4_199;
unsigned long  int arg5_200;
unsigned long  int arg6_201;
unsigned long  int arg_syscall_no_202;
unsigned long  long user_va_204;
void* __right_value21 = (void*)0;
struct proc* p_205;
int result_206;
    trapframe_194=(struct context_t*)TRAPFRAME;
    arg0_195=trapframe_194->a0;
    arg1_196=trapframe_194->a1;
    arg2_197=trapframe_194->a2;
    arg3_198=trapframe_194->a3;
    arg4_199=trapframe_194->a4;
    arg5_200=trapframe_194->a5;
    arg6_201=trapframe_194->a6;
    arg_syscall_no_202=trapframe_194->a7;
    char kernel_buf_203[256];
    memset(&kernel_buf_203, 0, sizeof(char)    *(256)    );
    user_va_204=arg0_195;
    p_205=((struct proc*)(__right_value21=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value21, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_205->pagetable,kernel_buf_203,user_va_204,256);
    result_206=fs_open(kernel_buf_203);
    return result_206;
}

int Sys_fork(){
struct context_t* trapframe_207;
unsigned long  int arg0_208;
unsigned long  int arg1_209;
unsigned long  int arg2_210;
unsigned long  int arg3_211;
unsigned long  int arg4_212;
unsigned long  int arg5_213;
unsigned long  int arg6_214;
unsigned long  int arg_syscall_no_215;
void* __right_value22 = (void*)0;
struct proc* p_216;
int fork_flag_217;
void* __right_value23 = (void*)0;
struct proc* child_218;
unsigned long  long sp_219;
int result_220;
memset(&fork_flag_217, 0, sizeof(int));
    trapframe_207=(struct context_t*)TRAPFRAME;
    arg0_208=trapframe_207->a0;
    arg1_209=trapframe_207->a1;
    arg2_210=trapframe_207->a2;
    arg3_211=trapframe_207->a3;
    arg4_212=trapframe_207->a4;
    arg5_213=trapframe_207->a5;
    arg6_214=trapframe_207->a6;
    arg_syscall_no_215=trapframe_207->a7;
    p_216=((struct proc*)(__right_value22=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_216->program,fork_flag_217=1);
    child_218=((struct proc*)(__right_value23=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_219=child_218->context.sp;
    child_218->context=*trapframe_207;
    child_218->context.mepc=child_218->context.mepc+4;
    child_218->context.sp=sp_219;
    child_218->context.a0=0;
    result_220=list$1proc$ph_length(gProc)-1;
    return result_220;
}

int Sys_execv(){
struct context_t* trapframe_221;
unsigned long  int arg0_222;
unsigned long  int arg1_223;
unsigned long  int arg2_224;
unsigned long  int arg3_225;
unsigned long  int arg4_226;
unsigned long  int arg5_227;
unsigned long  int arg6_228;
unsigned long  int arg_syscall_no_229;
int argc_230;
unsigned long  long user_va_232;
void* __right_value24 = (void*)0;
struct proc* p_233;
char* path_234;
int fd_236;
int ret_237;
void* __right_value25 = (void*)0;
struct proc* result_238;
    trapframe_221=(struct context_t*)TRAPFRAME;
    arg0_222=trapframe_221->a0;
    arg1_223=trapframe_221->a1;
    arg2_224=trapframe_221->a2;
    arg3_225=trapframe_221->a3;
    arg4_226=trapframe_221->a4;
    arg5_227=trapframe_221->a5;
    arg6_228=trapframe_221->a6;
    arg_syscall_no_229=trapframe_221->a7;
    argc_230=arg2_224;
    char kernel_buf_231[256];
    memset(&kernel_buf_231, 0, sizeof(char)    *(256)    );
    user_va_232=arg0_222;
    p_233=((struct proc*)(__right_value24=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_233->pagetable,kernel_buf_231,user_va_232,256);
    path_234=kernel_buf_231;
    char hello_elf_235[4096];
    memset(&hello_elf_235, 0, sizeof(char)    *(4096)    );
    fd_236=fs_open(path_234);
    ret_237=fs_read(fd_236,hello_elf_235,4096);
    if(    ret_237<0    ) {
        trapframe_221->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_235);
    result_238=((struct proc*)(__right_value25=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value25, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_221->mepc=result_238->context.mepc+4;
    trapframe_221->sp=result_238->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_239;
unsigned long  int arg0_240;
unsigned long  int arg1_241;
unsigned long  int arg2_242;
unsigned long  int arg3_243;
unsigned long  int arg4_244;
unsigned long  int arg5_245;
unsigned long  int arg6_246;
unsigned long  int arg_syscall_no_247;
int oldfd_248;
int newfd_249;
    trapframe_239=(struct context_t*)TRAPFRAME;
    arg0_240=trapframe_239->a0;
    arg1_241=trapframe_239->a1;
    arg2_242=trapframe_239->a2;
    arg3_243=trapframe_239->a3;
    arg4_244=trapframe_239->a4;
    arg5_245=trapframe_239->a5;
    arg6_246=trapframe_239->a6;
    arg_syscall_no_247=trapframe_239->a7;
    oldfd_248=arg0_240;
    newfd_249=arg1_241;
    printf("gActiveProc %d\n",gActiveProc);
    fs_dup2(oldfd_248,newfd_249);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_250;
unsigned long  int arg0_251;
unsigned long  int arg1_252;
unsigned long  int arg2_253;
unsigned long  int arg3_254;
unsigned long  int arg4_255;
unsigned long  int arg5_256;
unsigned long  int arg6_257;
unsigned long  int arg_syscall_no_258;
char* kernel_buf_259;
unsigned long  long user_va_260;
long* fd0_261;
long* fd1_262;
void* __right_value26 = (void*)0;
struct proc* p_263;
kernel_buf_259 = (void*)0;
memset(&fd0_261, 0, sizeof(long*));
memset(&fd1_262, 0, sizeof(long*));
    trapframe_250=(struct context_t*)TRAPFRAME;
    arg0_251=trapframe_250->a0;
    arg1_252=trapframe_250->a1;
    arg2_253=trapframe_250->a2;
    arg3_254=trapframe_250->a3;
    arg4_255=trapframe_250->a4;
    arg5_256=trapframe_250->a5;
    arg6_257=trapframe_250->a6;
    arg_syscall_no_258=trapframe_250->a7;
    user_va_260=arg0_251;
    fd0_261=common_kalloc(sizeof(long));
    fd1_262=common_kalloc(sizeof(long));
    pipe_open(fd0_261,fd1_262);
    printf("PIPE OPEN %ld %ld\n",*fd0_261,*fd1_262);
    p_263=((struct proc*)(__right_value26=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value26, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    map$2void$pvoid$p_insert(p_263->mapping_values,user_va_260,(void*)fd0_261);
    if(    copyout(p_263->pagetable,(unsigned long  long)user_va_260,(char*)fd0_261,sizeof(long))<0    ) {
        panic("copyout");
    }
    map$2void$pvoid$p_insert(p_263->mapping_values,user_va_260+8,fd1_262);
    if(    copyout(p_263->pagetable,(unsigned long  long)user_va_260+8,(char*)fd1_262,sizeof(long))<0    ) {
        panic("copyout");
    }
    return 0;
}

static struct map$2void$pvoid$p* map$2void$pvoid$p_insert(struct map$2void$pvoid$p* self, void* key, void* item){
unsigned int hash_277;
unsigned int it_278;
_Bool same_key_exist_295;
void* it2_298;
struct map$2void$pvoid$p* __result_obj__65;
    if(    self->len*10>=self->size    ) {
        map$2void$pvoid$p_rehash(self);
    }
    hash_277=voidp_get_hash_key(((void*)key))%self->size;
    it_278=hash_277;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_278]        ) {
            if(            voidp_equals(self->keys[it_278],key)            ) {
                if(                0                ) {
                    list$1void$p_remove(self->key_list,self->keys[it_278]);
                    (self->keys[it_278] = come_decrement_ref_count(self->keys[it_278], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->keys[it_278]=key;
                }
                else {
                    list$1void$p_remove(self->key_list,self->keys[it_278]);
                    self->keys[it_278]=key;
                }
                if(                0                ) {
                    (self->items[it_278] = come_decrement_ref_count(self->items[it_278], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
                    self->items[it_278]=item;
                }
                else {
                    self->items[it_278]=item;
                }
                break;
            }
            it_278++;
            if(            it_278>=self->size            ) {
                it_278=0;
            }
            else if(            it_278==hash_277            ) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_278]=(_Bool)1;
            if(            0            ) {
                self->keys[it_278]=key;
            }
            else {
                self->keys[it_278]=key;
            }
            if(            0            ) {
                self->items[it_278]=item;
            }
            else {
                self->items[it_278]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_295=(_Bool)0;
    for(    it2_298=list$1void$p_begin(self->key_list)    ;    !list$1void$p_end(self->key_list)    ;    it2_298=list$1void$p_next(self->key_list)    ){
        if(        voidp_equals(it2_298,key)        ) {
            same_key_exist_295=(_Bool)1;
        }
    }
    if(    !same_key_exist_295    ) {
        list$1void$p_push_back(self->key_list,key);
    }
    __result_obj__65 = self;
    return __result_obj__65;
}

static void map$2void$pvoid$p_rehash(struct map$2void$pvoid$p* self){
int size_264;
void* __right_value27 = (void*)0;
void** keys_265;
void* __right_value28 = (void*)0;
void** items_266;
void* __right_value29 = (void*)0;
_Bool* item_existance_267;
int len_268;
void* it_269;
void* default_value_270;
void* it2_271;
unsigned int hash_274;
int n_275;
void* default_value_276;
default_value_270 = (void*)0;
default_value_276 = (void*)0;
    size_264=self->size*10;
    keys_265=(void**)come_increment_ref_count(((void**)(__right_value27=(void**)come_calloc_v2(1, sizeof(void*)*(1*(size_264)), "/usr/local/include/comelang.h", 2163, "void**"))));
    items_266=(void**)come_increment_ref_count(((void**)(__right_value28=(void**)come_calloc_v2(1, sizeof(void*)*(1*(size_264)), "/usr/local/include/comelang.h", 2164, "void**"))));
    item_existance_267=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value29=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_264)), "/usr/local/include/comelang.h", 2165, "_Bool*"))));
    len_268=0;
    for(    it_269=map$2void$pvoid$p_begin(self)    ;    !map$2void$pvoid$p_end(self)    ;    it_269=map$2void$pvoid$p_next(self)    ){
        memset(&default_value_270,0,sizeof(void*));
        it2_271=map$2void$pvoid$p_at(self,it_269,default_value_270);
        hash_274=voidp_get_hash_key(((void*)it_269))%size_264;
        n_275=hash_274;
        while(        (_Bool)1        ) {
            if(            item_existance_267[n_275]            ) {
                n_275++;
                if(                n_275>=size_264                ) {
                    n_275=0;
                }
                else if(                n_275==hash_274                ) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_267[n_275]=(_Bool)1;
                keys_265[n_275]=it_269;
                items_266[n_275]=map$2void$pvoid$p_at(self,it_269,default_value_276);
                len_268++;
                break;
            }
        }
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_265;
    self->items=items_266;
    self->item_existance=item_existance_267;
    self->size=size_264;
    self->len=len_268;
}

static void* map$2void$pvoid$p_at(struct map$2void$pvoid$p* self, void* key, void* default_value){
unsigned int hash_272;
unsigned int it_273;
void* __result_obj__50;
void* __result_obj__51;
void* __result_obj__52;
void* __result_obj__53;
    hash_272=voidp_get_hash_key(((void*)key))%self->size;
    it_273=hash_272;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_273]        ) {
            if(            voidp_equals(self->keys[it_273],key)            ) {
                __result_obj__50 = self->items[it_273];
                return __result_obj__50;
            }
            it_273++;
            if(            it_273>=self->size            ) {
                it_273=0;
            }
            else if(            it_273==hash_272            ) {
                __result_obj__51 = default_value;
                return __result_obj__51;
            }
        }
        else {
            __result_obj__52 = default_value;
            return __result_obj__52;
        }
    }
    __result_obj__53 = default_value;
    return __result_obj__53;
}

static struct list$1void$p* list$1void$p_remove(struct list$1void$p* self, void* item){
int it2_279;
struct list_item$1void$p* it_280;
struct list$1void$p* __result_obj__57;
    it2_279=0;
    it_280=self->head;
    while(    it_280!=((void*)0)    ) {
        if(        voidp_equals(it_280->item,item)        ) {
            list$1void$p_delete(self,it2_279,it2_279+1);
            break;
        }
        it2_279++;
        it_280=it_280->next;
    }
    __result_obj__57 = self;
    return __result_obj__57;
}

static struct list$1void$p* list$1void$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_281;
struct list$1void$p* __result_obj__54;
struct list_item$1void$p* it_284;
int i_285;
struct list_item$1void$p* prev_it_286;
struct list_item$1void$p* it_287;
int i_288;
struct list_item$1void$p* prev_it_289;
struct list_item$1void$p* it_290;
struct list_item$1void$p* head_prev_it_291;
struct list_item$1void$p* tail_it_292;
int i_293;
struct list_item$1void$p* prev_it_294;
struct list$1void$p* __result_obj__56;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_281=tail;
        tail=head;
        head=tmp_281;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__54 = self;
        return __result_obj__54;
    }
    if(    head==0&&tail==self->len    ) {
        list$1void$p_reset(self);
    }
    else if(    head==0    ) {
        it_284=self->head;
        i_285=0;
        while(        it_284!=((void*)0)        ) {
            if(            i_285<tail            ) {
                prev_it_286=it_284;
                it_284=it_284->next;
                i_285++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_286, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_285==tail            ) {
                self->head=it_284;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_284=it_284->next;
                i_285++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_287=self->head;
        i_288=0;
        while(        it_287!=((void*)0)        ) {
            if(            i_288==head            ) {
                self->tail=it_287->prev;
                self->tail->next=((void*)0);
            }
            if(            i_288>=head            ) {
                prev_it_289=it_287;
                it_287=it_287->next;
                i_288++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_289, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_287=it_287->next;
                i_288++;
            }
        }
    }
    else {
        it_290=self->head;
        head_prev_it_291=((void*)0);
        tail_it_292=((void*)0);
        i_293=0;
        while(        it_290!=((void*)0)        ) {
            if(            i_293==head            ) {
                head_prev_it_291=it_290->prev;
            }
            if(            i_293==tail            ) {
                tail_it_292=it_290;
            }
            if(            i_293>=head&&i_293<tail            ) {
                prev_it_294=it_290;
                it_290=it_290->next;
                i_293++;
                come_call_finalizer(list_item$1void$p$p_finalize, prev_it_294, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_290=it_290->next;
                i_293++;
            }
        }
        if(        head_prev_it_291!=((void*)0)        ) {
            head_prev_it_291->next=tail_it_292;
        }
        if(        tail_it_292!=((void*)0)        ) {
            tail_it_292->prev=head_prev_it_291;
        }
    }
    __result_obj__56 = self;
    return __result_obj__56;
}

static struct list$1void$p* list$1void$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_282;
struct list_item$1void$p* prev_it_283;
struct list$1void$p* __result_obj__55;
    it_282=self->head;
    while(    it_282!=((void*)0)    ) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_283, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

static void* list$1void$p_begin(struct list$1void$p* self){
void* result_296;
void* __result_obj__58;
void* __result_obj__59;
void* result_297;
void* __result_obj__60;
result_296 = (void*)0;
result_297 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_296,0,sizeof(void*));
        __result_obj__58 = result_296;
        return __result_obj__58;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__59 = self->it->item;
        return __result_obj__59;
    }
    memset(&result_297,0,sizeof(void*));
    __result_obj__60 = result_297;
    return __result_obj__60;
}

static _Bool list$1void$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p_next(struct list$1void$p* self){
void* result_299;
void* __result_obj__61;
void* __result_obj__62;
void* result_300;
void* __result_obj__63;
result_299 = (void*)0;
result_300 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_299,0,sizeof(void*));
        __result_obj__61 = result_299;
        return __result_obj__61;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__62 = self->it->item;
        return __result_obj__62;
    }
    memset(&result_300,0,sizeof(void*));
    __result_obj__63 = result_300;
    return __result_obj__63;
}

static struct list$1void$p* list$1void$p_push_back(struct list$1void$p* self, void* item){
void* __right_value30 = (void*)0;
struct list_item$1void$p* litem_301;
void* __right_value31 = (void*)0;
struct list_item$1void$p* litem_302;
void* __right_value32 = (void*)0;
struct list_item$1void$p* litem_303;
struct list$1void$p* __result_obj__64;
    if(    self->len==0    ) {
        litem_301=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value30=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1void$p*"))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        litem_301->item=item;
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1    ) {
        litem_302=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value31=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1void$p*"))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        litem_302->item=item;
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value32=(struct list_item$1void$p*)come_calloc_v2(1, sizeof(struct list_item$1void$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1void$p*"))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        litem_303->item=item;
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

int Sys_read(){
struct context_t* trapframe_304;
unsigned long  int arg0_305;
unsigned long  int arg1_306;
unsigned long  int arg2_307;
unsigned long  int arg3_308;
unsigned long  int arg4_309;
unsigned long  int arg5_310;
unsigned long  int arg6_311;
unsigned long  int arg_syscall_no_312;
int fd_313;
unsigned long  long destva_314;
unsigned long  int n_315;
int ret_317;
void* __right_value33 = (void*)0;
struct proc* p_318;
memset(&ret_317, 0, sizeof(int));
    trapframe_304=(struct context_t*)TRAPFRAME;
    arg0_305=trapframe_304->a0;
    arg1_306=trapframe_304->a1;
    arg2_307=trapframe_304->a2;
    arg3_308=trapframe_304->a3;
    arg4_309=trapframe_304->a4;
    arg5_310=trapframe_304->a5;
    arg6_311=trapframe_304->a6;
    arg_syscall_no_312=trapframe_304->a7;
    fd_313=arg0_305;
    destva_314=arg1_306;
    n_315=arg2_307;
    char kernel_buf_316[256];
    memset(&kernel_buf_316, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_313)    ) {
        ret_317=uart_readn(kernel_buf_316,n_315);
    }
    else if(    is_pipe(fd_313)    ) {
        ret_317=piperead(fd_313,kernel_buf_316,n_315);
    }
    else {
        ret_317=fs_read(fd_313,kernel_buf_316,n_315);
        if(        ret_317<0        ) {
            trapframe_304->a0=ret_317;
            return 0;
        }
        kernel_buf_316[ret_317]=0;
    }
    p_318=((struct proc*)(__right_value33=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value33, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_318->pagetable,destva_314,kernel_buf_316,ret_317)<0    ) {
        panic("read: copyout failed");
    }
    return ret_317;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_319;
unsigned long  int arg0_320;
unsigned long  int arg1_321;
unsigned long  int arg2_322;
unsigned long  int arg3_323;
unsigned long  int arg4_324;
unsigned long  int arg5_325;
unsigned long  int arg6_326;
unsigned long  int arg_syscall_no_327;
unsigned long  long result_328;
long fd_329;
int ret_330;
    disable_timer_interrupts();
    trapframe_319=(struct context_t*)TRAPFRAME;
    arg0_320=trapframe_319->a0;
    arg1_321=trapframe_319->a1;
    arg2_322=trapframe_319->a2;
    arg3_323=trapframe_319->a3;
    arg4_324=trapframe_319->a4;
    arg5_325=trapframe_319->a5;
    arg6_326=trapframe_319->a6;
    arg_syscall_no_327=trapframe_319->a7;
    result_328=0;
    switch (    arg_syscall_no_327) {
        case 64:
        {
            result_328=Sys_write();
        }
        break;
        case 73:
        {
            result_328=Sys_pipe();
        }
        break;
        case 72:
        {
            result_328=Sys_dup2();
        }
        break;
        case 70:
        {
            result_328=Sys_exit();
        }
        break;
        case 71:
        {
            result_328=Sys_wait();
        }
        break;
        case 66:
        {
            result_328=Sys_open();
        }
        break;
        case 65:
        {
            result_328=Sys_read();
        }
        break;
        case 67:
        {
            fd_329=arg0_320;
            ret_330=fs_close(fd_329);
            result_328=ret_330;
        }
        break;
        case 68:
        {
            result_328=Sys_fork();
        }
        break;
        case 69:
        {
            result_328=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_319->a0=result_328;
    return result_328;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct list$1proc$ph* __dec_obj6;
    __dec_obj6=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2449, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__66 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__66;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_333;
struct list_item$1proc$ph* prev_it_334;
    it_333=self->head;
    while(    it_333!=((void*)0)    ) {
        prev_it_334=it_333;
        it_333=it_333->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_334, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_335;
void* __right_value36 = (void*)0;
struct proc* p_336;
unsigned long  int usersp_337;
unsigned long  long usersatp_338;
unsigned long  int entry_339;
memset(&fork_flag_335, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_335=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_336=((struct proc*)(__right_value36=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value36, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_337=(unsigned long  long)(p_336->stack);
    usersatp_338=((8L<<60)|(((unsigned long  long)p_336->pagetable)>>12));
    entry_339=p_336->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_336;
    kernel_sp=read_s_sp();
    enter_user(entry_339,usersp_337,usersatp_338,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__67;
struct mem_block* current_340;
struct mem_block* prev_341;
void* __result_obj__68;
struct mem_block* new_mem_342;
void* __result_obj__69;
void* __result_obj__70;
    if(    size==0    ) {
        __result_obj__67 = ((void*)0);
        return __result_obj__67;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_340=free_list;
    prev_341=((void*)0);
    while(    current_340!=((void*)0)    ) {
        if(        current_340->size>=size        ) {
            if(            prev_341==((void*)0)            ) {
                free_list=current_340->next;
            }
            else {
                prev_341->next=current_340->next;
            }
            __result_obj__68 = (void*)(current_340+1);
            return __result_obj__68;
        }
        prev_341=current_340;
        current_340=current_340->next;
    }
    new_mem_342=(struct mem_block*)sbrk(size);
    if(    new_mem_342==(void*)-1    ) {
        __result_obj__69 = ((void*)0);
        return __result_obj__69;
    }
    new_mem_342->size=size;
    new_mem_342->next=((void*)0);
    __result_obj__70 = (void*)(new_mem_342+1);
    return __result_obj__70;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_343;
void* __result_obj__71;
void* ptr_344;
void* __result_obj__72;
    total_size_343=nmemb*size;
    if(    total_size_343==0    ) {
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    ptr_344=malloc(total_size_343);
    if(    ptr_344!=((void*)0)    ) {
        memset(ptr_344,0,total_size_343);
    }
    __result_obj__72 = ptr_344;
    return __result_obj__72;
}

void free(void* ptr){
struct mem_block* block_345;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_345=(struct mem_block*)ptr-1;
    block_345->next=free_list;
    free_list=block_345;
}

char* strdup(const char* s){
char* s2_346;
unsigned long  int len_347;
char* p_348;
char* __result_obj__73;
    s2_346=s;
    len_347=strlen(s2_346)+1;
    p_348=malloc(len_347);
    if(    p_348    ) {
        memcpy(p_348,s2_346,len_347);
    }
    __result_obj__73 = p_348;
    return __result_obj__73;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__74;
char* __result_obj__75;
char* __result_obj__76;
    if(    !*needle    ) {
        __result_obj__74 = (char*)haystack;
        return __result_obj__74;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_349=haystack;
        const char* n_350=needle;
        while(        *h_349&&*n_350&&(*h_349==*n_350)        ) {
            h_349++;
            n_350++;
        }
        if(        !*n_350        ) {
            __result_obj__75 = (char*)haystack;
            return __result_obj__75;
        }
    }
    __result_obj__76 = ((void*)0);
    return __result_obj__76;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_351;
int i_352;
void* __result_obj__77;
    cdst_351=(char*)dst;
    for(    i_352=0    ;    i_352<n    ;    i_352++    ){
        cdst_351[i_352]=c;
    }
    __result_obj__77 = dst;
    return __result_obj__77;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_353;
const unsigned char* s2_354;
memset(&s1_353, 0, sizeof(const unsigned char*));
memset(&s2_354, 0, sizeof(const unsigned char*));
    s1_353=v1;
    s2_354=v2;
    while(    n-->0    ) {
        if(        *s1_353!=*s2_354        ) {
            return *s1_353-*s2_354;
        }
        s1_353++,s2_354++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_355;
char* d_356;
void* __result_obj__78;
void* __result_obj__79;
s_355 = (void*)0;
d_356 = (void*)0;
    if(    n==0    ) {
        __result_obj__78 = dst;
        return __result_obj__78;
    }
    s_355=src;
    d_356=dst;
    if(    s_355<d_356&&s_355+n>d_356    ) {
        s_355+=n;
        d_356+=n;
        while(        n-->0        ) {
            *--d_356=*--s_355;
        }
    }
    else {
        while(        n-->0        ) {
            *d_356++=*s_355++;
        }
    }
    __result_obj__79 = dst;
    return __result_obj__79;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__80;
    __result_obj__80 = memmove(dst,src,n);
    return __result_obj__80;
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
char* os_357;
char* __result_obj__81;
os_357 = (void*)0;
    os_357=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__81 = os_357;
    return __result_obj__81;
}

int strlen(const char* s){
int n_358;
memset(&n_358, 0, sizeof(int));
    for(    n_358=0    ;    s[n_358]    ;    n_358++    ){
        ;
    }
    return n_358;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_359;
char* __result_obj__82;
    d_359=dest;
    while(    *d_359    ) {
        d_359++;
    }
    while(    n--&&*src    ) {
        *d_359++=*src++;
    }
    *d_359=0;
    __result_obj__82 = dest;
    return __result_obj__82;
}

char* strtok(char* s, const char* delim){
static char* next_360;
char* start_361;
char* p_362;
char* __result_obj__83;
int is_delim_364;
char* __result_obj__84;
int is_delim_366;
char* __result_obj__85;
next_360 = (void*)0;
start_361 = (void*)0;
p_362 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_360=s;
    }
    if(    next_360==((void*)0)    ) {
        __result_obj__83 = ((void*)0);
        return __result_obj__83;
    }
    start_361=next_360;
    while(    *start_361!=0    ) {
        const char* d_363=delim;
        is_delim_364=0;
        while(        *d_363!=0        ) {
            if(            *start_361==*d_363            ) {
                is_delim_364=1;
                break;
            }
            d_363++;
        }
        if(        !is_delim_364        ) {
            break;
        }
        start_361++;
    }
    if(    *start_361==0    ) {
        next_360=((void*)0);
        __result_obj__84 = ((void*)0);
        return __result_obj__84;
    }
    p_362=start_361;
    while(    *p_362!=0    ) {
        const char* d_365=delim;
        is_delim_366=0;
        while(        *d_365!=0        ) {
            if(            *p_362==*d_365            ) {
                is_delim_366=1;
                break;
            }
            d_365++;
        }
        if(        is_delim_366        ) {
            break;
        }
        p_362++;
    }
    if(    *p_362==0    ) {
        next_360=((void*)0);
    }
    else {
        *p_362=0;
        next_360=p_362+1;
    }
    __result_obj__85 = start_361;
    return __result_obj__85;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_367;
int i_369;
int negative_370;
char* __result_obj__86;
int digit_371;
char* __result_obj__87;
    p_367=buf;
    char tmp_368[32];
    memset(&tmp_368, 0, sizeof(char)    *(32)    );
    i_369=0;
    negative_370=0;
    if(    base<2||base>16    ) {
        *p_367=0;
        __result_obj__86 = p_367;
        return __result_obj__86;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_370=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_371=val_%base;
        tmp_368[i_369++]=(((digit_371<10))?(48+digit_371):(97+digit_371-10));
        val_/=base;
    } while(    val_    );
    if(    negative_370    ) {
        *p_367++=45;
    }
    while(    i_369--    ) {
        *p_367++=tmp_368[i_369];
    }
    *p_367=0;
    __result_obj__87 = buf;
    return __result_obj__87;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_373;
const char* s_374;
unsigned long  int remaining_376;
s_374 = (void*)0;
    char out2_372[512];
    memset(&out2_372, 0, sizeof(char)    *(512)    );
    p_373=out2_372;
    char buf_375[32];
    memset(&buf_375, 0, sizeof(char)    *(32)    );
    remaining_376=sizeof(out2_372);
    for(    ;    *fmt&&remaining_376>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_373++=*fmt;
            remaining_376--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_375,__builtin_va_arg(ap,int),10,1);
            s_374=buf_375;
            break;
            case 117:
            itoa(buf_375,__builtin_va_arg(ap,unsigned int),10,0);
            s_374=buf_375;
            break;
            case 120:
            itoa(buf_375,__builtin_va_arg(ap,unsigned int),16,0);
            s_374=buf_375;
            break;
            case 115:
            s_374=__builtin_va_arg(ap,const char*);
            if(            !s_374            ) {
                s_374="(null)";
            }
            break;
            case 99:
            buf_375[0]=(char)__builtin_va_arg(ap,int);
            buf_375[1]=0;
            s_374=buf_375;
            break;
            case 112:
            strncpy(buf_375,"0x",32);
            itoa(buf_375+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_374=buf_375;
            break;
            case 37:
            buf_375[0]=37;
            buf_375[1]=0;
            s_374=buf_375;
            break;
            default:
            buf_375[0]=37;
            buf_375[1]=*fmt;
            buf_375[2]=0;
            s_374=buf_375;
            break;
        }
        while(        *s_374&&remaining_376>1        ) {
            *p_373++=*s_374++;
            remaining_376--;
        }
    }
    *p_373=0;
    *out=strdup(out2_372);
    return p_373-out2_372;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_377;
char* p_378;
const char* s_379;
unsigned long  int remaining_381;
memset(&ap_377, 0, sizeof(va_list));
s_379 = (void*)0;
    __builtin_va_start(ap_377,fmt);
    p_378=out;
    char buf_380[32];
    memset(&buf_380, 0, sizeof(char)    *(32)    );
    remaining_381=out_size;
    if(    remaining_381==0    ) {
        __builtin_va_end(ap_377);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_381>1            ) {
                *p_378++=*fmt;
                remaining_381--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_379=__builtin_va_arg(ap_377,const char*);
            while(            *s_379&&remaining_381>1            ) {
                *p_378++=*s_379++;
                remaining_381--;
            }
            break;
            case 100:
            itoa(buf_380,__builtin_va_arg(ap_377,int),10,0);
            s_379=buf_380;
            while(            *s_379&&remaining_381>1            ) {
                *p_378++=*s_379++;
                remaining_381--;
            }
            break;
            case 120:
            itoa(buf_380,(unsigned int)__builtin_va_arg(ap_377,int),16,1);
            s_379=buf_380;
            while(            *s_379&&remaining_381>1            ) {
                *p_378++=*s_379++;
                remaining_381--;
            }
            break;
            case 99:
            if(            remaining_381>1            ) {
                *p_378++=(char)__builtin_va_arg(ap_377,int);
                remaining_381--;
            }
            break;
            case 112:
            s_379="0x";
            while(            *s_379&&remaining_381>1            ) {
                *p_378++=*s_379++;
                remaining_381--;
            }
            itoa(buf_380,(long)__builtin_va_arg(ap_377,void*),16,1);
            s_379=buf_380;
            while(            *s_379&&remaining_381>1            ) {
                *p_378++=*s_379++;
                remaining_381--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_380,__builtin_va_arg(ap_377,long),10,1);
                s_379=buf_380;
                while(                *s_379&&remaining_381>1                ) {
                    *p_378++=*s_379++;
                    remaining_381--;
                }
            }
            break;
            default:
            if(            remaining_381>1            ) {
                *p_378++=37;
                remaining_381--;
                if(                remaining_381>1                ) {
                    *p_378++=*fmt;
                    remaining_381--;
                }
            }
            break;
        }
    }
    *p_378=0;
    __builtin_va_end(ap_377);
    return p_378-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_382;
char* p_383;
const char* s_384;
unsigned long  int remaining_386;
memset(&ap_382, 0, sizeof(va_list));
s_384 = (void*)0;
    __builtin_va_start(ap_382,fmt);
    p_383=out;
    char buf_385[32];
    memset(&buf_385, 0, sizeof(char)    *(32)    );
    remaining_386=out_size;
    if(    remaining_386==0    ) {
        __builtin_va_end(ap_382);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_386>1            ) {
                *p_383++=*fmt;
                remaining_386--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_384=__builtin_va_arg(ap_382,const char*);
            while(            *s_384&&remaining_386>1            ) {
                *p_383++=*s_384++;
                remaining_386--;
            }
            break;
            case 100:
            itoa(buf_385,__builtin_va_arg(ap_382,int),10,0);
            s_384=buf_385;
            while(            *s_384&&remaining_386>1            ) {
                *p_383++=*s_384++;
                remaining_386--;
            }
            break;
            case 120:
            itoa(buf_385,(unsigned int)__builtin_va_arg(ap_382,int),16,1);
            s_384=buf_385;
            while(            *s_384&&remaining_386>1            ) {
                *p_383++=*s_384++;
                remaining_386--;
            }
            break;
            case 99:
            if(            remaining_386>1            ) {
                *p_383++=(char)__builtin_va_arg(ap_382,int);
                remaining_386--;
            }
            break;
            case 112:
            s_384="0x";
            while(            *s_384&&remaining_386>1            ) {
                *p_383++=*s_384++;
                remaining_386--;
            }
            itoa(buf_385,(long)__builtin_va_arg(ap_382,void*),16,1);
            s_384=buf_385;
            while(            *s_384&&remaining_386>1            ) {
                *p_383++=*s_384++;
                remaining_386--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_385,__builtin_va_arg(ap_382,long),10,1);
                s_384=buf_385;
                while(                *s_384&&remaining_386>1                ) {
                    *p_383++=*s_384++;
                    remaining_386--;
                }
            }
            break;
            default:
            if(            remaining_386>1            ) {
                *p_383++=37;
                remaining_386--;
                if(                remaining_386>1                ) {
                    *p_383++=*fmt;
                    remaining_386--;
                }
            }
            break;
        }
    }
    *p_383=0;
    __builtin_va_end(ap_382);
    return p_383-out;
}

void printint(int val_, int base, int sign){
int i_388;
int negative_389;
unsigned int uval_390;
int digit_391;
memset(&uval_390, 0, sizeof(unsigned int));
    char buf_387[33];
    memset(&buf_387, 0, sizeof(char)    *(33)    );
    i_388=0;
    negative_389=0;
    if(    sign&&val_<0    ) {
        negative_389=1;
        uval_390=-val_;
    }
    else {
        uval_390=(unsigned int)val_;
    }
    if(    uval_390==0    ) {
        putchar(48);
        return;
    }
    while(    uval_390>0    ) {
        digit_391=uval_390%base;
        buf_387[i_388++]=((digit_391<10)?(48+digit_391):(97+(digit_391-10)));
        uval_390/=base;
    }
    if(    negative_389    ) {
        putchar(45);
    }
    while(    --i_388>=0    ) {
        putchar(buf_387[i_388]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_393;
int negative_394;
int digit_395;
    char buf_392[65];
    memset(&buf_392, 0, sizeof(char)    *(65)    );
    i_393=0;
    negative_394=0;
    if(    sign&&(long)val_<0    ) {
        negative_394=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_395=val_%base;
        buf_392[i_393++]=((digit_395<10)?(48+digit_395):(97+(digit_395-10)));
        val_/=base;
    }
    if(    negative_394    ) {
        putchar(45);
    }
    while(    --i_393>=0    ) {
        putchar(buf_392[i_393]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_397;
int negative_398;
int digit_399;
    char buf_396[65];
    memset(&buf_396, 0, sizeof(char)    *(65)    );
    i_397=0;
    negative_398=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_398=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_399=val_%base;
        buf_396[i_397++]=((digit_399<10)?(48+digit_399):(97+(digit_399-10)));
        val_/=base;
    }
    if(    negative_398    ) {
        putchar(45);
    }
    while(    --i_397>=0    ) {
        putchar(buf_396[i_397]);
    }
}

int printf(const char* fmt, ...){
va_list ap_400;
const char* p_401;
int lcount_402;
unsigned long  int val__403;
unsigned long  long val__404;
long val__405;
long long val__406;
int i_407;
int val__408;
unsigned int val__409;
unsigned long  int val__410;
char c_412;
memset(&ap_400, 0, sizeof(va_list));
p_401 = (void*)0;
    __builtin_va_start(ap_400,fmt);
    for(    p_401=fmt    ;    *p_401    ;    p_401++    ){
        if(        *p_401!=37        ) {
            putchar(*p_401);
            continue;
        }
        p_401++;
        if(        *p_401==108        ) {
            lcount_402=1;
            if(            *(p_401+1)==108            ) {
                lcount_402=2;
                p_401++;
            }
            p_401++;
            switch (            *p_401) {
                case 120:
                {
                    if(                    lcount_402==1                    ) {
                        val__403=__builtin_va_arg(ap_400,unsigned long  int);
                        printlong(val__403,16,0);
                    }
                    else {
                        val__404=__builtin_va_arg(ap_400,unsigned long  long);
                        printlonglong(val__404,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_402==1                    ) {
                        val__405=__builtin_va_arg(ap_400,long);
                        printlong(val__405,10,1);
                    }
                    else {
                        val__406=__builtin_va_arg(ap_400,long  long);
                        printlonglong(val__406,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_407=0                    ;                    i_407<lcount_402                    ;                    i_407++                    ){
                        putchar(108);
                    }
                    putchar(*p_401);
                    break;
                }
            }
        }
        else {
            switch (            *p_401) {
                case 100:
                {
                    val__408=__builtin_va_arg(ap_400,int);
                    printint(val__408,10,1);
                    break;
                }
                case 120:
                {
                    val__409=__builtin_va_arg(ap_400,unsigned int);
                    printint(val__409,16,0);
                    break;
                }
                case 112:
                {
                    val__410=(unsigned long  int)__builtin_va_arg(ap_400,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__410,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_411=__builtin_va_arg(ap_400,const char*);
                    if(                    !s_411                    ) {
                        s_411="(null)";
                    }
                    while(                    *s_411                    ) {
                        putchar(*s_411++);
                    }
                    break;
                }
                case 99:
                {
                    c_412=(char)__builtin_va_arg(ap_400,int);
                    putchar(c_412);
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
                    putchar(*p_401);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_400);
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
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_413;
int i_414;
void* __right_value39 = (void*)0;
    buf_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_413,"%s %d\n",sname,sline);
    for(    i_414=gNumComeStackFrame-2    ;    i_414>=0    ;    i_414--    ){
        buffer_append_format(buf_413,"%s %d #%d\n",gComeStackFrameSName[i_414],gComeStackFrameSLine[i_414],gComeStackFrameID[i_414]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value39=buffer_to_string(buf_413))));
    (__right_value39 = come_decrement_ref_count(__right_value39, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_413, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_415;
    for(    i_415=gNumComeStackFrame-1    ;    i_415>=0    ;    i_415--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_415],gComeStackFrameSLine[i_415],gComeStackFrameID[i_415]);
    }
}

char* come_get_stackframe(){
void* __right_value40 = (void*)0;
char* __result_obj__88;
    __result_obj__88 = (char*)come_increment_ref_count(((char*)(__right_value40=__builtin_string(gComeStackFrameBuffer))));
    (__right_value40 = come_decrement_ref_count(__right_value40, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__88 = come_decrement_ref_count(__result_obj__88, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__88;
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
int i_416;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_416=0    ;    i_416<gHeapPages.mSizePages    ;    i_416++    ){
        gHeapPages.mPages[i_416]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_417;
int n_418;
_Bool flag_419;
int i_420;
struct sMemHeaderTiny* it_421;
int n_422;
int i_423;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_417=gAllocMem;
        n_418=0;
        while(        it_417        ) {
            n_418++;
            flag_419=(_Bool)0;
            printf("#%d ",n_418);
            if(            it_417->class_name            ) {
                printf("%p (%s): ",(char*)it_417+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_417->class_name);
            }
            for(            i_420=0            ;            i_420<16            ;            i_420++            ){
                if(                it_417->sname[i_420]                ) {
                    printf("%s %d #%d, ",it_417->sname[i_420],it_417->sline[i_420],it_417->id[i_420]);
                    flag_419=(_Bool)1;
                }
            }
            if(            flag_419            ) {
                puts("");
            }
            it_417=it_417->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_418,gNumAlloc,gNumFree);
    }
    else {
        it_421=(struct sMemHeaderTiny*)gAllocMem;
        n_422=0;
        while(        it_421        ) {
            n_422++;
            if(            it_421->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_422,(char*)it_421+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_421->class_name,it_421->sname,it_421->sline);
            }
            it_421=it_421->next;
        }
        if(        n_422>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_422,gNumAlloc,gNumFree);
        }
    }
    for(    i_423=0    ;    i_423<gHeapPages.mSizePages    ;    i_423++    ){
        free(gHeapPages.mPages[i_423]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_424;
void* __result_obj__89;
    result_424=((void*)0);
    size=(size+7&~7);
    result_424=calloc(1,size);
    __result_obj__89 = result_424;
    return __result_obj__89;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_425;
struct sMemHeader* prev_it_426;
struct sMemHeader* next_it_427;
unsigned long  int size_428;
struct sMemHeaderTiny* it_429;
struct sMemHeaderTiny* prev_it_430;
struct sMemHeaderTiny* next_it_431;
unsigned long  int size_432;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_425=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_425->allocated!=177783            ) {
                return;
            }
            it_425->allocated=0;
            prev_it_426=it_425->prev;
            next_it_427=it_425->next;
            if(            gAllocMem==it_425            ) {
                gAllocMem=next_it_427;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_426                ) {
                    prev_it_426->next=next_it_427;
                }
                if(                next_it_427                ) {
                    next_it_427->prev=prev_it_426;
                }
            }
            size_428=it_425->size;
            free(it_425);
            gNumFree++;
        }
        else {
            it_429=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_429->allocated!=177783            ) {
                return;
            }
            it_429->allocated=0;
            prev_it_430=it_429->prev;
            next_it_431=it_429->next;
            if(            gAllocMem==it_429            ) {
                gAllocMem=(struct sMemHeader*)next_it_431;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_430                ) {
                    prev_it_430->next=next_it_431;
                }
                if(                next_it_431                ) {
                    next_it_431->prev=prev_it_430;
                }
            }
            size_432=it_429->size;
            free(it_429);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_433;
struct sMemHeader* it_434;
int i_435;
int i_436;
void* __result_obj__90;
void* result_437;
struct sMemHeaderTiny* it_438;
void* __result_obj__91;
memset(&i_435, 0, sizeof(int));
memset(&i_436, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_433=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_434=result_433;
        it_434->allocated=177783;
        it_434->size=size+sizeof(struct sMemHeader);
        it_434->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_435=0            ;            i_435<gNumComeStackFrame            ;            i_435++            ){
                it_434->sname[i_435]=gComeStackFrameSName[i_435];
                it_434->sline[i_435]=gComeStackFrameSLine[i_435];
                it_434->id[i_435]=gComeStackFrameID[i_435];
            }
        }
        else {
            for(            i_436=0            ;            i_436<16            ;            i_436++            ){
                it_434->sname[i_436]=gComeStackFrameSName[gNumComeStackFrame-1-i_436];
                it_434->sline[i_436]=gComeStackFrameSLine[gNumComeStackFrame-1-i_436];
                it_434->id[i_436]=gComeStackFrameID[gNumComeStackFrame-1-i_436];
            }
        }
        come_pop_stackframe_v2();
        it_434->next=gAllocMem;
        it_434->prev=((void*)0);
        it_434->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_434;
        }
        gAllocMem=it_434;
        gNumAlloc++;
        __result_obj__90 = (char*)result_433+sizeof(struct sMemHeader);
        return __result_obj__90;
    }
    else {
        result_437=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_438=result_437;
        it_438->allocated=177783;
        it_438->class_name=class_name;
        it_438->sname=sname;
        it_438->sline=sline;
        it_438->size=size+sizeof(struct sMemHeaderTiny);
        it_438->free_next=((void*)0);
        it_438->next=(struct sMemHeaderTiny*)gAllocMem;
        it_438->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_438;
        }
        gAllocMem=(struct sMemHeader*)it_438;
        gNumAlloc++;
        __result_obj__91 = (char*)result_437+sizeof(struct sMemHeaderTiny);
        return __result_obj__91;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_439;
char* __result_obj__92;
struct sMemHeaderTiny* it_440;
char* __result_obj__93;
    if(    gComeDebugLib    ) {
        it_439=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_439->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_439);
            exit(2);
        }
        __result_obj__92 = it_439->class_name;
        return __result_obj__92;
    }
    else {
        it_440=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_440->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_440);
            exit(2);
        }
        __result_obj__93 = it_440->class_name;
        return __result_obj__93;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_441;
int i_442;
struct sMemHeaderTiny* it_443;
    if(    gComeDebugLib    ) {
        it_441=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_441->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_441->class_name        ) {
            printf("(%s): ",it_441->class_name);
        }
        for(        i_442=0        ;        i_442<16        ;        i_442++        ){
            if(            it_441->sname[i_442]            ) {
                printf("%s %d #%d, ",it_441->sname[i_442],it_441->sline[i_442],it_441->id[i_442]);
            }
        }
        puts("");
    }
    else {
        it_443=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_443->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_443->class_name,it_443->sname,it_443->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_444;
unsigned long  int* ref_count_445;
unsigned long  int* size2_446;
void* __result_obj__94;
    mem_444=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_445=(unsigned long  int*)mem_444;
    *ref_count_445=0;
    size2_446=(unsigned long  int*)(mem_444+sizeof(unsigned long  int));
    *size2_446=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__94 = mem_444+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__94;
}

void come_free(void* mem){
unsigned long  int* ref_count_447;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_447=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_447);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__95;
char* mem_448;
unsigned long  int* size_p_449;
unsigned long  int size_450;
void* result_451;
void* __result_obj__96;
    if(    !block    ) {
        __result_obj__95 = ((void*)0);
        return __result_obj__95;
    }
    mem_448=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_449=(unsigned long  int*)(mem_448+sizeof(unsigned long  int));
    size_450=*size_p_449-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_451=come_calloc_v2(1,size_450,sname,sline,class_name);
    memcpy(result_451,block,size_450);
    __result_obj__96 = result_451;
    return __result_obj__96;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__97;
unsigned long  int* ref_count_452;
void* __result_obj__98;
    if(    mem==((void*)0)    ) {
        __result_obj__97 = mem;
        return __result_obj__97;
    }
    ref_count_452=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_452)++;
    __result_obj__98 = mem;
    return __result_obj__98;
}

void* come_print_ref_count(void* mem){
void* __result_obj__99;
unsigned long  int* ref_count_453;
void* __result_obj__100;
    if(    mem==((void*)0)    ) {
        __result_obj__99 = mem;
        return __result_obj__99;
    }
    ref_count_453=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_453);
    __result_obj__100 = mem;
    return __result_obj__100;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_454;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_454=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_454;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__101;
void* __result_obj__102;
unsigned long  int* ref_count_455;
unsigned long  int count_456;
void (*finalizer_457)(void*);
void* __result_obj__103;
void* __result_obj__104;
memset(&finalizer_457, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__101 = mem;
            return __result_obj__101;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__102 = ((void*)0);
        return __result_obj__102;
    }
    ref_count_455=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_455)--;
    }
    count_456=*ref_count_455;
    if(    !no_free&&count_456<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_457=protocol_fun;
            finalizer_457(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__103 = ((void*)0);
        return __result_obj__103;
    }
    __result_obj__104 = mem;
    return __result_obj__104;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_458)(void*);
void (*finalizer_459)(void*);
void (*finalizer_460)(void*);
unsigned long  int* ref_count_461;
unsigned long  int count_462;
void (*finalizer_463)(void*);
void (*finalizer_464)(void*);
void (*finalizer_465)(void*);
memset(&finalizer_458, 0, sizeof(void (*)(void*)));
memset(&finalizer_459, 0, sizeof(void (*)(void*)));
memset(&finalizer_460, 0, sizeof(void (*)(void*)));
memset(&finalizer_463, 0, sizeof(void (*)(void*)));
memset(&finalizer_464, 0, sizeof(void (*)(void*)));
memset(&finalizer_465, 0, sizeof(void (*)(void*)));
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
                finalizer_458=protocol_fun;
                finalizer_458(protocol_obj);
            }
            finalizer_459=fun;
            finalizer_459(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_460=protocol_fun;
                finalizer_460(protocol_obj);
            }
        }
    }
    else {
        ref_count_461=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_461)--;
        }
        count_462=*ref_count_461;
        if(        !no_free&&count_462<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_463=protocol_fun;
                        finalizer_463(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_464=fun;
                        finalizer_464(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_465=protocol_fun;
                        finalizer_465(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__105;
int len_466;
void* __right_value41 = (void*)0;
char* result_467;
char* __result_obj__106;
    if(    str==((void*)0)    ) {
        __result_obj__105 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    len_466=strlen(str)+1;
    result_467=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_466)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_467,str,len_466);
    __result_obj__106 = (char*)come_increment_ref_count(result_467);
    (result_467 = come_decrement_ref_count(result_467, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
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
void* __right_value42 = (void*)0;
char* __result_obj__107;
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value42=come_get_stackframe())));
    (__right_value42 = come_decrement_ref_count(__right_value42, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__108;
    __result_obj__108 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__108;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value43 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__109;
    self->size=128;
    __dec_obj7=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2897, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__109 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value44 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__110;
    self->size=128;
    __dec_obj8=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2907, "char*"));
    __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__110 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__111;
void* __right_value45 = (void*)0;
struct buffer* result_468;
void* __right_value46 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__112;
    if(    self==((void*)0)    ) {
        __result_obj__111 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__111;
    }
    result_468=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_468->size=self->size;
    __dec_obj9=result_468->buf,
    result_468->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_468->len=self->len;
    memcpy(result_468->buf,self->buf,self->len);
    __result_obj__112 = (struct buffer*)come_increment_ref_count(result_468);
    come_call_finalizer(buffer_finalize, result_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
_Bool __result_obj__113;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__113 = string_equals(((char*)(__right_value47=buffer_to_string(left))),((char*)(__right_value48=buffer_to_string(right))));
    (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value48 = come_decrement_ref_count(__right_value48, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__113;
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
struct buffer* __result_obj__114;
void* __right_value49 = (void*)0;
char* old_buf_469;
int old_len_470;
int new_size_471;
void* __right_value50 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__115;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__114 = self;
        return __result_obj__114;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_469=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_469,self->buf,self->size);
        old_len_470=self->len;
        new_size_471=(self->size+size+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_471)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_469,old_len_470);
        self->buf[old_len_470]=0;
        self->size=new_size_471;
        (old_buf_469 = come_decrement_ref_count(old_buf_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__115 = self;
    return __result_obj__115;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__116;
void* __right_value51 = (void*)0;
char* old_buf_472;
int old_len_473;
int new_size_474;
void* __right_value52 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__117;
    if(    self==((void*)0)    ) {
        __result_obj__116 = ((void*)0);
        return __result_obj__116;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_472=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_473=self->len;
        new_size_474=(self->size+10+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_474)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_472,old_len_473);
        self->buf[old_len_473]=0;
        self->size=new_size_474;
        (old_buf_472 = come_decrement_ref_count(old_buf_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__117 = self;
    return __result_obj__117;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__118;
int size_475;
void* __right_value53 = (void*)0;
char* old_buf_476;
int old_len_477;
int new_size_478;
void* __right_value54 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__119;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__118 = self;
        return __result_obj__118;
    }
    size_475=strlen(mem);
    if(    self->len+size_475+1+1>=self->size    ) {
        old_buf_476=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_476,self->buf,self->size);
        old_len_477=self->len;
        new_size_478=(self->size+size_475+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_478)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_476,old_len_477);
        self->buf[old_len_477]=0;
        self->size=new_size_478;
        (old_buf_476 = come_decrement_ref_count(old_buf_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_475);
    self->len+=size_475;
    self->buf[self->len]=0;
    __result_obj__119 = self;
    return __result_obj__119;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__120;
va_list args_479;
char* result_480;
int len_481;
struct buffer* __result_obj__121;
void* __right_value55 = (void*)0;
char* mem_482;
int size_483;
void* __right_value56 = (void*)0;
char* old_buf_484;
int old_len_485;
int new_size_486;
void* __right_value57 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__122;
result_480 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__120 = self;
        return __result_obj__120;
    }
    __builtin_va_start(args_479,msg);
    len_481=vasprintf(&result_480,msg,args_479);
    __builtin_va_end(args_479);
    if(    len_481<0    ) {
        __result_obj__121 = self;
        return __result_obj__121;
    }
    mem_482=(char*)come_increment_ref_count(__builtin_string(result_480));
    size_483=strlen(mem_482);
    if(    self->len+size_483+1+1>=self->size    ) {
        old_buf_484=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_484,self->buf,self->size);
        old_len_485=self->len;
        new_size_486=(self->size+size_483+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_486)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_484,old_len_485);
        self->buf[old_len_485]=0;
        self->size=new_size_486;
        (old_buf_484 = come_decrement_ref_count(old_buf_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_482,size_483);
    self->len+=size_483;
    self->buf[self->len]=0;
    free(result_480);
    __result_obj__122 = self;
    (mem_482 = come_decrement_ref_count(mem_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__122;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__123;
int size_487;
void* __right_value58 = (void*)0;
char* old_buf_488;
int old_len_489;
int new_size_490;
void* __right_value59 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__124;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__123 = self;
        return __result_obj__123;
    }
    size_487=strlen(mem)+1;
    if(    self->len+size_487+1+1+1>=self->size    ) {
        old_buf_488=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_488,self->buf,self->size);
        old_len_489=self->len;
        new_size_490=(self->size+size_487+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_490)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_488,old_len_489);
        self->buf[old_len_489]=0;
        self->size=new_size_490;
        (old_buf_488 = come_decrement_ref_count(old_buf_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_487);
    self->len+=size_487;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__125;
int* mem_491;
int size_492;
void* __right_value60 = (void*)0;
char* old_buf_493;
int old_len_494;
int new_size_495;
void* __right_value61 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__126;
    if(    self==((void*)0)    ) {
        __result_obj__125 = ((void*)0);
        return __result_obj__125;
    }
    mem_491=&value;
    size_492=sizeof(int);
    if(    self->len+size_492+1+1>=self->size    ) {
        old_buf_493=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_493,self->buf,self->size);
        old_len_494=self->len;
        new_size_495=(self->size+size_492+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_495)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_493,old_len_494);
        self->buf[old_len_494]=0;
        self->size=new_size_495;
        (old_buf_493 = come_decrement_ref_count(old_buf_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_491,size_492);
    self->len+=size_492;
    self->buf[self->len]=0;
    __result_obj__126 = self;
    return __result_obj__126;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_496;
int size_497;
void* __right_value62 = (void*)0;
char* old_buf_498;
int old_len_499;
int new_size_500;
void* __right_value63 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__127;
    mem_496=&value;
    size_497=sizeof(long);
    if(    self->len+size_497+1+1>=self->size    ) {
        old_buf_498=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_498,self->buf,self->size);
        old_len_499=self->len;
        new_size_500=(self->size+size_497+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_500)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_498,old_len_499);
        self->buf[old_len_499]=0;
        self->size=new_size_500;
        (old_buf_498 = come_decrement_ref_count(old_buf_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_496,size_497);
    self->len+=size_497;
    self->buf[self->len]=0;
    __result_obj__127 = self;
    return __result_obj__127;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__128;
short* mem_501;
int size_502;
void* __right_value64 = (void*)0;
char* old_buf_503;
int old_len_504;
int new_size_505;
void* __right_value65 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__129;
    if(    self==((void*)0)    ) {
        __result_obj__128 = ((void*)0);
        return __result_obj__128;
    }
    mem_501=&value;
    size_502=sizeof(short);
    if(    self->len+size_502+1+1>=self->size    ) {
        old_buf_503=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_503,self->buf,self->size);
        old_len_504=self->len;
        new_size_505=(self->size+size_502+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_505)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_503,old_len_504);
        self->buf[old_len_504]=0;
        self->size=new_size_505;
        (old_buf_503 = come_decrement_ref_count(old_buf_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_501,size_502);
    self->len+=size_502;
    self->buf[self->len]=0;
    __result_obj__129 = self;
    return __result_obj__129;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__130;
int len_506;
int new_size_507;
void* __right_value66 = (void*)0;
char* __dec_obj18;
int i_508;
struct buffer* __result_obj__131;
    if(    self==((void*)0)    ) {
        __result_obj__130 = ((void*)0);
        return __result_obj__130;
    }
    len_506=self->len;
    len_506=(len_506+3)&~3;
    if(    len_506>=self->size    ) {
        new_size_507=(self->size+1+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_507)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_507;
    }
    for(    i_508=self->len    ;    i_508<len_506    ;    i_508++    ){
        self->buf[i_508]=0;
    }
    self->len=len_506;
    __result_obj__131 = self;
    return __result_obj__131;
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
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* result_509;
struct buffer* __result_obj__132;
struct buffer* __result_obj__133;
    result_509=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__132 = (struct buffer*)come_increment_ref_count(result_509);
        come_call_finalizer(buffer_finalize, result_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__132;
    }
    buffer_append_str(result_509,self);
    __result_obj__133 = (struct buffer*)come_increment_ref_count(result_509);
    come_call_finalizer(buffer_finalize, result_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
}

char* buffer_to_string(struct buffer* self){
void* __right_value69 = (void*)0;
char* __result_obj__134;
void* __right_value70 = (void*)0;
char* __result_obj__135;
    if(    self==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value69=__builtin_string(""))));
        (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value70=__builtin_string(self->buf))));
    (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__136;
    __result_obj__136 = self->buf;
    return __result_obj__136;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* result_510;
struct buffer* __result_obj__137;
    result_510=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_510,self,sizeof(char)*len);
    __result_obj__137 = (struct buffer*)come_increment_ref_count(result_510);
    come_call_finalizer(buffer_finalize, result_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* result_511;
int i_512;
struct buffer* __result_obj__138;
    result_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_512=0    ;    i_512<len    ;    i_512++    ){
        buffer_append(result_511,self[i_512],strlen(self[i_512]));
    }
    __result_obj__138 = (struct buffer*)come_increment_ref_count(result_511);
    come_call_finalizer(buffer_finalize, result_511, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* result_513;
struct buffer* __result_obj__139;
    result_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_513,(char*)self,sizeof(short)*len);
    __result_obj__139 = (struct buffer*)come_increment_ref_count(result_513);
    come_call_finalizer(buffer_finalize, result_513, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* result_514;
struct buffer* __result_obj__140;
    result_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_514,(char*)self,sizeof(int)*len);
    __result_obj__140 = (struct buffer*)come_increment_ref_count(result_514);
    come_call_finalizer(buffer_finalize, result_514, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* result_515;
struct buffer* __result_obj__141;
    result_515=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_515,(char*)self,sizeof(long)*len);
    __result_obj__141 = (struct buffer*)come_increment_ref_count(result_515);
    come_call_finalizer(buffer_finalize, result_515, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__141, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__141;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* result_516;
struct buffer* __result_obj__142;
    result_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_516,(char*)self,sizeof(float)*len);
    __result_obj__142 = (struct buffer*)come_increment_ref_count(result_516);
    come_call_finalizer(buffer_finalize, result_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* result_517;
struct buffer* __result_obj__143;
    result_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_517,(char*)self,sizeof(double)*len);
    __result_obj__143 = (struct buffer*)come_increment_ref_count(result_517);
    come_call_finalizer(buffer_finalize, result_517, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

char* buffer_printable(struct buffer* self){
int len_518;
void* __right_value85 = (void*)0;
char* result_519;
int n_520;
int i_521;
unsigned char c_522;
char* __result_obj__144;
    len_518=self->len;
    result_519=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_518*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_520=0;
    for(    i_521=0    ;    i_521<len_518    ;    i_521++    ){
        c_522=self->buf[i_521];
        if(        (c_522>=0&&c_522<32)||c_522==127        ) {
            result_519[n_520++]=94;
            result_519[n_520++]=c_522+65-1;
        }
        else if(        c_522>127        ) {
            result_519[n_520++]=63;
        }
        else {
            result_519[n_520++]=c_522;
        }
    }
    result_519[n_520]=0;
    __result_obj__144 = (char*)come_increment_ref_count(result_519);
    (result_519 = come_decrement_ref_count(result_519, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_523;
struct list$1char$* __result_obj__146;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_523=0    ;    i_523<num_value    ;    i_523++    ){
        list$1char$_push_back(self,values[i_523]);
    }
    __result_obj__146 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value87 = (void*)0;
struct list_item$1char$* litem_524;
void* __right_value88 = (void*)0;
struct list_item$1char$* litem_525;
void* __right_value89 = (void*)0;
struct list_item$1char$* litem_526;
struct list$1char$* __result_obj__145;
    if(    self->len==0    ) {
        litem_524=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value87=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_524->prev=((void*)0);
        litem_524->next=((void*)0);
        litem_524->item=item;
        self->tail=litem_524;
        self->head=litem_524;
    }
    else if(    self->len==1    ) {
        litem_525=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value88=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_525->prev=self->head;
        litem_525->next=((void*)0);
        litem_525->item=item;
        self->tail=litem_525;
        self->head->next=litem_525;
    }
    else {
        litem_526=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value89=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_526->prev=self->tail;
        litem_526->next=((void*)0);
        litem_526->item=item;
        self->tail->next=litem_526;
        self->tail=litem_526;
    }
    self->len++;
    __result_obj__145 = self;
    return __result_obj__145;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_527;
struct list_item$1char$* prev_it_528;
    it_527=self->head;
    while(    it_527!=((void*)0)    ) {
        prev_it_528=it_527;
        it_527=it_527->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value86 = (void*)0;
void* __right_value90 = (void*)0;
struct list$1char$* __result_obj__147;
    __result_obj__147 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value90=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3356, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__147;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_529;
struct list$1char$p* __result_obj__149;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_529=0    ;    i_529<num_value    ;    i_529++    ){
        list$1char$p_push_back(self,values[i_529]);
    }
    __result_obj__149 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value92 = (void*)0;
struct list_item$1char$p* litem_530;
void* __right_value93 = (void*)0;
struct list_item$1char$p* litem_531;
void* __right_value94 = (void*)0;
struct list_item$1char$p* litem_532;
struct list$1char$p* __result_obj__148;
    if(    self->len==0    ) {
        litem_530=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value92=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_530->prev=((void*)0);
        litem_530->next=((void*)0);
        litem_530->item=item;
        self->tail=litem_530;
        self->head=litem_530;
    }
    else if(    self->len==1    ) {
        litem_531=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value93=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_531->prev=self->head;
        litem_531->next=((void*)0);
        litem_531->item=item;
        self->tail=litem_531;
        self->head->next=litem_531;
    }
    else {
        litem_532=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value94=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_532->prev=self->tail;
        litem_532->next=((void*)0);
        litem_532->item=item;
        self->tail->next=litem_532;
        self->tail=litem_532;
    }
    self->len++;
    __result_obj__148 = self;
    return __result_obj__148;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_533;
struct list_item$1char$p* prev_it_534;
    it_533=self->head;
    while(    it_533!=((void*)0)    ) {
        prev_it_534=it_533;
        it_533=it_533->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char$p* __result_obj__150;
    __result_obj__150 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value95=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3361, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value95, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__150, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__150;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_535;
struct list$1short$* __result_obj__152;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_535=0    ;    i_535<num_value    ;    i_535++    ){
        list$1short$_push_back(self,values[i_535]);
    }
    __result_obj__152 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value97 = (void*)0;
struct list_item$1short$* litem_536;
void* __right_value98 = (void*)0;
struct list_item$1short$* litem_537;
void* __right_value99 = (void*)0;
struct list_item$1short$* litem_538;
struct list$1short$* __result_obj__151;
    if(    self->len==0    ) {
        litem_536=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value97=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_536->prev=((void*)0);
        litem_536->next=((void*)0);
        litem_536->item=item;
        self->tail=litem_536;
        self->head=litem_536;
    }
    else if(    self->len==1    ) {
        litem_537=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value98=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_537->prev=self->head;
        litem_537->next=((void*)0);
        litem_537->item=item;
        self->tail=litem_537;
        self->head->next=litem_537;
    }
    else {
        litem_538=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value99=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_538->prev=self->tail;
        litem_538->next=((void*)0);
        litem_538->item=item;
        self->tail->next=litem_538;
        self->tail=litem_538;
    }
    self->len++;
    __result_obj__151 = self;
    return __result_obj__151;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_539;
struct list_item$1short$* prev_it_540;
    it_539=self->head;
    while(    it_539!=((void*)0)    ) {
        prev_it_540=it_539;
        it_539=it_539->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1short$* __result_obj__153;
    __result_obj__153 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value100=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3366, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value100, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__153, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__153;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_541;
struct list$1int$* __result_obj__155;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_541=0    ;    i_541<num_value    ;    i_541++    ){
        list$1int$_push_back(self,values[i_541]);
    }
    __result_obj__155 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__155;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value102 = (void*)0;
struct list_item$1int$* litem_542;
void* __right_value103 = (void*)0;
struct list_item$1int$* litem_543;
void* __right_value104 = (void*)0;
struct list_item$1int$* litem_544;
struct list$1int$* __result_obj__154;
    if(    self->len==0    ) {
        litem_542=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value102=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_542->prev=((void*)0);
        litem_542->next=((void*)0);
        litem_542->item=item;
        self->tail=litem_542;
        self->head=litem_542;
    }
    else if(    self->len==1    ) {
        litem_543=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value103=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_543->prev=self->head;
        litem_543->next=((void*)0);
        litem_543->item=item;
        self->tail=litem_543;
        self->head->next=litem_543;
    }
    else {
        litem_544=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value104=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_544->prev=self->tail;
        litem_544->next=((void*)0);
        litem_544->item=item;
        self->tail->next=litem_544;
        self->tail=litem_544;
    }
    self->len++;
    __result_obj__154 = self;
    return __result_obj__154;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_545;
struct list_item$1int$* prev_it_546;
    it_545=self->head;
    while(    it_545!=((void*)0)    ) {
        prev_it_546=it_545;
        it_545=it_545->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1int$* __result_obj__156;
    __result_obj__156 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value105=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3371, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value105, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__156;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_547;
struct list$1long$* __result_obj__158;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_547=0    ;    i_547<num_value    ;    i_547++    ){
        list$1long$_push_back(self,values[i_547]);
    }
    __result_obj__158 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__158;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value107 = (void*)0;
struct list_item$1long$* litem_548;
void* __right_value108 = (void*)0;
struct list_item$1long$* litem_549;
void* __right_value109 = (void*)0;
struct list_item$1long$* litem_550;
struct list$1long$* __result_obj__157;
    if(    self->len==0    ) {
        litem_548=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value107=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_548->prev=((void*)0);
        litem_548->next=((void*)0);
        litem_548->item=item;
        self->tail=litem_548;
        self->head=litem_548;
    }
    else if(    self->len==1    ) {
        litem_549=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value108=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_549->prev=self->head;
        litem_549->next=((void*)0);
        litem_549->item=item;
        self->tail=litem_549;
        self->head->next=litem_549;
    }
    else {
        litem_550=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value109=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_550->prev=self->tail;
        litem_550->next=((void*)0);
        litem_550->item=item;
        self->tail->next=litem_550;
        self->tail=litem_550;
    }
    self->len++;
    __result_obj__157 = self;
    return __result_obj__157;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_551;
struct list_item$1long$* prev_it_552;
    it_551=self->head;
    while(    it_551!=((void*)0)    ) {
        prev_it_552=it_551;
        it_551=it_551->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_552, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1long$* __result_obj__159;
    __result_obj__159 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value110=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3376, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value110, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__159;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_553;
struct list$1float$* __result_obj__161;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_553=0    ;    i_553<num_value    ;    i_553++    ){
        list$1float$_push_back(self,values[i_553]);
    }
    __result_obj__161 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__161;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value112 = (void*)0;
struct list_item$1float$* litem_554;
void* __right_value113 = (void*)0;
struct list_item$1float$* litem_555;
void* __right_value114 = (void*)0;
struct list_item$1float$* litem_556;
struct list$1float$* __result_obj__160;
    if(    self->len==0    ) {
        litem_554=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value112=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_554->prev=((void*)0);
        litem_554->next=((void*)0);
        litem_554->item=item;
        self->tail=litem_554;
        self->head=litem_554;
    }
    else if(    self->len==1    ) {
        litem_555=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value113=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_555->prev=self->head;
        litem_555->next=((void*)0);
        litem_555->item=item;
        self->tail=litem_555;
        self->head->next=litem_555;
    }
    else {
        litem_556=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value114=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_556->prev=self->tail;
        litem_556->next=((void*)0);
        litem_556->item=item;
        self->tail->next=litem_556;
        self->tail=litem_556;
    }
    self->len++;
    __result_obj__160 = self;
    return __result_obj__160;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_557;
struct list_item$1float$* prev_it_558;
    it_557=self->head;
    while(    it_557!=((void*)0)    ) {
        prev_it_558=it_557;
        it_557=it_557->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_558, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1float$* __result_obj__162;
    __result_obj__162 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value115=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3381, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value115, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__162;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_559;
struct list$1double$* __result_obj__164;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_559=0    ;    i_559<num_value    ;    i_559++    ){
        list$1double$_push_back(self,values[i_559]);
    }
    __result_obj__164 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__164;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value117 = (void*)0;
struct list_item$1double$* litem_560;
void* __right_value118 = (void*)0;
struct list_item$1double$* litem_561;
void* __right_value119 = (void*)0;
struct list_item$1double$* litem_562;
struct list$1double$* __result_obj__163;
    if(    self->len==0    ) {
        litem_560=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value117=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_560->prev=((void*)0);
        litem_560->next=((void*)0);
        litem_560->item=item;
        self->tail=litem_560;
        self->head=litem_560;
    }
    else if(    self->len==1    ) {
        litem_561=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value118=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_561->prev=self->head;
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail=litem_561;
        self->head->next=litem_561;
    }
    else {
        litem_562=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value119=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_562->prev=self->tail;
        litem_562->next=((void*)0);
        litem_562->item=item;
        self->tail->next=litem_562;
        self->tail=litem_562;
    }
    self->len++;
    __result_obj__163 = self;
    return __result_obj__163;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_563;
struct list_item$1double$* prev_it_564;
    it_563=self->head;
    while(    it_563!=((void*)0)    ) {
        prev_it_564=it_563;
        it_563=it_563->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_564, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1double$* __result_obj__165;
    __result_obj__165 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value120=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3386, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value120, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__165;
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
void* __right_value121 = (void*)0;
char* __result_obj__166;
int len_565;
void* __right_value122 = (void*)0;
char* result_566;
char* __result_obj__167;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    len_565=strlen(self)+strlen(right);
    result_566=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_565+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_566,self,len_565+1);
    strncat(result_566,right,len_565+1);
    __result_obj__167 = (char*)come_increment_ref_count(result_566);
    (result_566 = come_decrement_ref_count(result_566, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* string_operator_add(char* self, char* right){
void* __right_value123 = (void*)0;
char* __result_obj__168;
int len_567;
void* __right_value124 = (void*)0;
char* result_568;
char* __result_obj__169;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    len_567=strlen(self)+strlen(right);
    result_568=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_567+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_568,self,len_567+1);
    strncat(result_568,right,len_567+1);
    __result_obj__169 = (char*)come_increment_ref_count(result_568);
    (result_568 = come_decrement_ref_count(result_568, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_operator_mult(char* self, int right){
void* __right_value125 = (void*)0;
char* __result_obj__170;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct buffer* buf_569;
int i_570;
void* __right_value128 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    buf_569=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_570=0    ;    i_570<right    ;    i_570++    ){
        buffer_append_str(buf_569,self);
    }
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value128=buffer_to_string(buf_569))));
    come_call_finalizer(buffer_finalize, buf_569, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* string_operator_mult(char* self, int right){
void* __right_value129 = (void*)0;
char* __result_obj__172;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct buffer* buf_571;
int i_572;
void* __right_value132 = (void*)0;
char* __result_obj__173;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    buf_571=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_572=0    ;    i_572<right    ;    i_572++    ){
        buffer_append_str(buf_571,self);
    }
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value132=buffer_to_string(buf_571))));
    come_call_finalizer(buffer_finalize, buf_571, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_573;
int i_574;
    result_573=(_Bool)0;
    for(    i_574=0    ;    i_574<len    ;    i_574++    ){
        if(        strncmp(self[i_574],str,strlen(self[i_574]))==0        ) {
            result_573=(_Bool)1;
            break;
        }
    }
    return result_573;
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
int result_575;
char* p_576;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_575=0;
    p_576=value;
    while(    *p_576    ) {
        result_575+=(*p_576);
        p_576++;
    }
    return result_575;
}

unsigned int string_get_hash_key(char* value){
int result_577;
char* p_578;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_577=0;
    p_578=value;
    while(    *p_578    ) {
        result_577+=(*p_578);
        p_578++;
    }
    return result_577;
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
_Bool result_579;
    result_579=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_579;
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
_Bool result_580;
    result_580=(c>=32&&c<=126);
    return result_580;
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
void* __right_value133 = (void*)0;
char* __result_obj__174;
int len_581;
void* __right_value134 = (void*)0;
char* result_582;
int i_583;
char* __result_obj__175;
    if(    str==((void*)0)    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string(""))));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    len_581=strlen(str);
    result_582=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_581+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_583=0    ;    i_583<len_581    ;    i_583++    ){
        result_582[i_583]=str[len_581-i_583-1];
    }
    result_582[len_581]=0;
    __result_obj__175 = (char*)come_increment_ref_count(result_582);
    (result_582 = come_decrement_ref_count(result_582, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value135 = (void*)0;
char* __result_obj__176;
int len_584;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
char* __result_obj__177;
void* __right_value138 = (void*)0;
char* __result_obj__178;
void* __right_value139 = (void*)0;
char* __result_obj__179;
void* __right_value140 = (void*)0;
char* result_585;
char* __result_obj__180;
    if(    str==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(""))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    len_584=strlen(str);
    if(    head<0    ) {
        head+=len_584;
    }
    if(    tail<0    ) {
        tail+=len_584+1;
    }
    if(    head>tail    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value137=charp_reverse(((char*)(__right_value136=charp_substring(str,tail,head)))))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_584    ) {
        tail=len_584;
    }
    if(    head==tail    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    if(    tail-head+1<1    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(""))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    result_585=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_585,str+head,tail-head);
    result_585[tail-head]=0;
    __result_obj__180 = (char*)come_increment_ref_count(result_585);
    (result_585 = come_decrement_ref_count(result_585, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value141 = (void*)0;
char* __result_obj__181;
int len_586;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
char* __result_obj__182;
void* __right_value144 = (void*)0;
char* __result_obj__183;
void* __right_value145 = (void*)0;
char* __result_obj__184;
void* __right_value146 = (void*)0;
char* result_587;
char* __result_obj__185;
    if(    str==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    len_586=strlen(str);
    if(    head<0    ) {
        head+=len_586;
    }
    if(    tail<0    ) {
        tail+=len_586+1;
    }
    if(    head>tail    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value143=charp_reverse(((char*)(__right_value142=charp_substring(str,tail,head)))))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_586    ) {
        tail=len_586;
    }
    if(    head==tail    ) {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    if(    tail-head+1<1    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    result_587=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_587,str+head,tail-head);
    result_587[tail-head]=0;
    __result_obj__185 = (char*)come_increment_ref_count(result_587);
    (result_587 = come_decrement_ref_count(result_587, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value147 = (void*)0;
char* __result_obj__186;
int len_588;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
char* __result_obj__187;
void* __right_value150 = (void*)0;
char* __result_obj__188;
void* __right_value151 = (void*)0;
char* __result_obj__189;
void* __right_value152 = (void*)0;
char* result_589;
char* __result_obj__190;
    if(    str==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    len_588=strlen(str);
    if(    head<0    ) {
        head+=len_588;
    }
    if(    tail<0    ) {
        tail+=len_588+1;
    }
    if(    head>tail    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_reverse(((char*)(__right_value148=charp_substring(str,tail,head)))))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_588    ) {
        tail=len_588;
    }
    if(    head==tail    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    if(    tail-head+1<1    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    result_589=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_589,str+head,tail-head);
    result_589[tail-head]=0;
    __result_obj__190 = (char*)come_increment_ref_count(result_589);
    (result_589 = come_decrement_ref_count(result_589, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* xsprintf(char* msg, ...){
void* __right_value153 = (void*)0;
char* __result_obj__191;
va_list args_590;
char* result_591;
int len_592;
void* __right_value154 = (void*)0;
char* __result_obj__192;
void* __right_value155 = (void*)0;
char* result2_593;
char* __result_obj__193;
result_591 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__191;
    }
    __builtin_va_start(args_590,msg);
    len_592=vasprintf(&result_591,msg,args_590);
    __builtin_va_end(args_590);
    if(    len_592<0    ) {
        __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__192;
    }
    result2_593=(char*)come_increment_ref_count(__builtin_string(result_591));
    free(result_591);
    __result_obj__193 = (char*)come_increment_ref_count(result2_593);
    (result2_593 = come_decrement_ref_count(result2_593, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value156 = (void*)0;
char* __result_obj__194;
int len_594;
void* __right_value157 = (void*)0;
char* __result_obj__195;
void* __right_value158 = (void*)0;
char* __result_obj__196;
void* __right_value159 = (void*)0;
char* result_595;
char* __result_obj__197;
    if(    str==((void*)0)    ) {
        __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__194;
    }
    len_594=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string(str))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__195;
    }
    if(    head<0    ) {
        head+=len_594;
    }
    if(    tail<0    ) {
        tail+=len_594+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(str))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    if(    tail>=len_594    ) {
        tail=len_594;
    }
    result_595=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_594-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_595,str,head);
    memcpy(result_595+head,str+tail,len_594-tail);
    result_595[len_594-(tail-head)]=0;
    __result_obj__197 = (char*)come_increment_ref_count(result_595);
    (result_595 = come_decrement_ref_count(result_595, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__198;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__198 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__198;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_596;
struct list_item$1char$ph* prev_it_597;
    it_596=self->head;
    while(    it_596!=((void*)0)    ) {
        prev_it_597=it_596;
        it_596=it_596->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_597, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value166 = (void*)0;
struct list_item$1char$ph* litem_601;
char* __dec_obj19;
void* __right_value167 = (void*)0;
struct list_item$1char$ph* litem_602;
char* __dec_obj20;
void* __right_value168 = (void*)0;
struct list_item$1char$ph* litem_603;
char* __dec_obj21;
struct list$1char$ph* __result_obj__200;
    if(    self->len==0    ) {
        litem_601=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value166=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_601->prev=((void*)0);
        litem_601->next=((void*)0);
        __dec_obj19=litem_601->item,
        litem_601->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_601;
        self->head=litem_601;
    }
    else if(    self->len==1    ) {
        litem_602=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value167=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_602->prev=self->head;
        litem_602->next=((void*)0);
        __dec_obj20=litem_602->item,
        litem_602->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_602;
        self->head->next=litem_602;
    }
    else {
        litem_603=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value168=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_603->prev=self->tail;
        litem_603->next=((void*)0);
        __dec_obj21=litem_603->item,
        litem_603->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_603;
        self->tail=litem_603;
    }
    self->len++;
    __result_obj__200 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__200;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct list$1char$ph* __result_obj__199;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct list$1char$ph* result_598;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct buffer* str_599;
int i_600;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct list$1char$ph* __result_obj__201;
    if(    self==((void*)0)    ) {
        __result_obj__199 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value161=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value161, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__199;
    }
    result_598=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_600=0    ;    i_600<charp_length(self)    ;    i_600++    ){
        if(        self[i_600]==c        ) {
            list$1char$ph_push_back(result_598,(char*)come_increment_ref_count(__builtin_string(str_599->buf)));
            buffer_reset(str_599);
        }
        else {
            buffer_append_char(str_599,self[i_600]);
        }
    }
    if(    buffer_length(str_599)!=0    ) {
        list$1char$ph_push_back(result_598,(char*)come_increment_ref_count(__builtin_string(str_599->buf)));
    }
    __result_obj__201 = (struct list$1char$ph*)come_increment_ref_count(result_598);
    come_call_finalizer(list$1char$ph$p_finalize, result_598, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_599, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__201, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__201;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value171 = (void*)0;
char* __result_obj__202;
    __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value171=xsprintf(msg,self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__202;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value172 = (void*)0;
char* __result_obj__203;
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value172=xsprintf(msg,self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_printable(char* str){
int len_604;
void* __right_value173 = (void*)0;
char* result_605;
int n_606;
int i_607;
char c_608;
char* __result_obj__204;
    len_604=charp_length(str);
    result_605=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_604*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_606=0;
    for(    i_607=0    ;    i_607<len_604    ;    i_607++    ){
        c_608=str[i_607];
        if(        (c_608>=0&&c_608<32)||c_608==127        ) {
            result_605[n_606++]=94;
            result_605[n_606++]=c_608+65-1;
        }
        else {
            result_605[n_606++]=c_608;
        }
    }
    result_605[n_606]=0;
    __result_obj__204 = (char*)come_increment_ref_count(result_605);
    (result_605 = come_decrement_ref_count(result_605, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__204;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value174 = (void*)0;
char* __result_obj__205;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct buffer* result_609;
char* p_610;
char* p2_611;
void* __right_value177 = (void*)0;
char* __result_obj__206;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    result_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_610=self;
    while(    (_Bool)1    ) {
        p2_611=strstr(p_610,str);
        if(        p2_611==((void*)0)        ) {
            p2_611=p_610;
            while(            *p2_611            ) {
                p2_611++;
            }
            buffer_append(result_609,p_610,p2_611-p_610);
            break;
        }
        buffer_append(result_609,p_610,p2_611-p_610);
        buffer_append_str(result_609,replace);
        p_610=p2_611+strlen(str);
    }
    __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value177=buffer_to_string(result_609))));
    come_call_finalizer(buffer_finalize, result_609, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__206;
}

char* xbasename(char* path){
void* __right_value178 = (void*)0;
char* __result_obj__207;
char* p_612;
void* __right_value179 = (void*)0;
char* __result_obj__208;
void* __right_value180 = (void*)0;
char* __result_obj__209;
void* __right_value181 = (void*)0;
char* __result_obj__210;
    if(    path==((void*)0)    ) {
        __result_obj__207 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__207;
    }
    p_612=path+strlen(path);
    while(    p_612>=path    ) {
        if(        *p_612==47        ) {
            break;
        }
        else {
            p_612--;
        }
    }
    if(    p_612<path    ) {
        __result_obj__208 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string(path))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__208;
    }
    else {
        __result_obj__209 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(p_612+1))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__209;
    }
    __result_obj__210 = (char*)come_increment_ref_count(((char*)(__right_value181=__builtin_string(""))));
    (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__210;
}

char* xnoextname(char* path){
void* __right_value182 = (void*)0;
char* __result_obj__211;
void* __right_value183 = (void*)0;
char* path2_613;
char* p_614;
void* __right_value184 = (void*)0;
char* __result_obj__212;
void* __right_value185 = (void*)0;
char* __result_obj__213;
void* __right_value186 = (void*)0;
char* __result_obj__214;
    if(    path==((void*)0)    ) {
        __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(""))));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__211;
    }
    path2_613=(char*)come_increment_ref_count(xbasename(path));
    p_614=path2_613+strlen(path2_613);
    while(    p_614>=path2_613    ) {
        if(        *p_614==46        ) {
            break;
        }
        else {
            p_614--;
        }
    }
    if(    p_614<path2_613    ) {
        __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string(path2_613))));
        (path2_613 = come_decrement_ref_count(path2_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__212;
    }
    else {
        __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value185=charp_substring(path2_613,0,p_614-path2_613))));
        (path2_613 = come_decrement_ref_count(path2_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__213;
    }
    __result_obj__214 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string(""))));
    (path2_613 = come_decrement_ref_count(path2_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* xextname(char* path){
void* __right_value187 = (void*)0;
char* __result_obj__215;
char* p_615;
void* __right_value188 = (void*)0;
char* __result_obj__216;
void* __right_value189 = (void*)0;
char* __result_obj__217;
void* __right_value190 = (void*)0;
char* __result_obj__218;
    if(    path==((void*)0)    ) {
        __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string(""))));
        (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__215;
    }
    p_615=path+strlen(path);
    while(    p_615>=path    ) {
        if(        *p_615==46        ) {
            break;
        }
        else {
            p_615--;
        }
    }
    if(    p_615<path    ) {
        __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string(path))));
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__216;
    }
    else {
        __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string(p_615+1))));
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__217;
    }
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string(""))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__218;
}

char* bool_to_string(_Bool self){
void* __right_value191 = (void*)0;
char* __result_obj__219;
void* __right_value192 = (void*)0;
char* __result_obj__220;
    if(    self    ) {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string("true"))));
        (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__219;
    }
    else {
        __result_obj__220 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string("false"))));
        (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__220;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value193 = (void*)0;
char* __result_obj__221;
void* __right_value194 = (void*)0;
char* __result_obj__222;
    if(    self    ) {
        __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value193=__builtin_string("true"))));
        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__221;
    }
    else {
        __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string("false"))));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__222;
    }
}

char* char_to_string(char self){
void* __right_value195 = (void*)0;
char* __result_obj__223;
    __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value195=xsprintf("%c",self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__223;
}

char* short_to_string(short self){
void* __right_value196 = (void*)0;
char* __result_obj__224;
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value196=xsprintf("%d",self))));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* int_to_string(int self){
void* __right_value197 = (void*)0;
char* __result_obj__225;
    __result_obj__225 = (char*)come_increment_ref_count(((char*)(__right_value197=xsprintf("%d",self))));
    (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__225;
}

char* long_to_string(long self){
void* __right_value198 = (void*)0;
char* __result_obj__226;
    __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value198=xsprintf("%ld",self))));
    (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__226;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value199 = (void*)0;
char* __result_obj__227;
    __result_obj__227 = (char*)come_increment_ref_count(((char*)(__right_value199=xsprintf("%ld",self))));
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__227;
}

char* float_to_string(float self){
void* __right_value200 = (void*)0;
char* __result_obj__228;
    __result_obj__228 = (char*)come_increment_ref_count(((char*)(__right_value200=xsprintf("%f",self))));
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__228;
}

char* double_to_string(double self){
void* __right_value201 = (void*)0;
char* __result_obj__229;
    __result_obj__229 = (char*)come_increment_ref_count(((char*)(__right_value201=xsprintf("%lf",self))));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__229;
}

char* string_to_string(char* self){
void* __right_value202 = (void*)0;
char* __result_obj__230;
void* __right_value203 = (void*)0;
char* __result_obj__231;
    if(    self==((void*)0)    ) {
        __result_obj__230 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(""))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__230;
    }
    __result_obj__231 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(self))));
    (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__231;
}

char* charp_to_string(char* self){
void* __right_value204 = (void*)0;
char* __result_obj__232;
void* __right_value205 = (void*)0;
char* __result_obj__233;
    if(    self==((void*)0)    ) {
        __result_obj__232 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string(""))));
        (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__232;
    }
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value205=__builtin_string(self))));
    (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__233;
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
void* __right_value206 = (void*)0;
char* __result_obj__234;
void* __right_value207 = (void*)0;
char* __result_obj__235;
    if(    self==((void*)0)    ) {
        __result_obj__234 = (char*)come_increment_ref_count(((char*)(__right_value206=__builtin_string(""))));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__234;
    }
    puts(self);
    __result_obj__235 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(self))));
    (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__235;
}

char* charp_print(char* self){
void* __right_value208 = (void*)0;
char* __result_obj__236;
void* __right_value209 = (void*)0;
char* __result_obj__237;
    if(    self==((void*)0)    ) {
        __result_obj__236 = (char*)come_increment_ref_count(((char*)(__right_value208=__builtin_string(""))));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__236 = come_decrement_ref_count(__result_obj__236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__236;
    }
    printf("%s",self);
    __result_obj__237 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(self))));
    (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__237;
}

char* charp_printf(char* self, ...){
void* __right_value210 = (void*)0;
char* __result_obj__238;
char* msg2_616;
va_list args_617;
void* __right_value211 = (void*)0;
char* __result_obj__239;
msg2_616 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value210=__builtin_string(""))));
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__238;
    }
    __builtin_va_start(args_617,self);
    vasprintf(&msg2_616,self,args_617);
    __builtin_va_end(args_617);
    printf("%s",msg2_616);
    free(msg2_616);
    __result_obj__239 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(self))));
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__239;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_618;
    for(    i_618=0    ;    i_618<self    ;    i_618++    ){
        block(parent,i_618);
    }
}

