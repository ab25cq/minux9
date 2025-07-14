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
  0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x21, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x85, 0x03, 0x05, 0x45, 0xef, 0xf0,
  0xff, 0xf8, 0x09, 0x45, 0xef, 0xf0, 0xbf, 0xfc, 0x81, 0x47, 0x3e, 0x85,
  0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4,
  0x22, 0xe0, 0x00, 0x08, 0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64,
  0x41, 0x01, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x48, 0x45, 0x4c, 0x4c,
  0x4f, 0x32, 0x0d, 0x0a, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67,
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
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x91, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x70, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x98, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x46, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x91, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x98, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e,
  0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76,
  0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f,
  0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32,
  0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73,
  0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x65, 0x78, 0x69,
  0x74, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70,
  0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e,
  0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74,
  0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00,
  0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74,
  0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f,
  0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e,
  0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74,
  0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1720;
unsigned char child_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x86, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x0d, 0x00, 0x0c, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xde, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc5, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc5, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0xaa, 0x87, 0x2e, 0x87,
  0x23, 0x2e, 0xf4, 0xfc, 0xba, 0x87, 0x23, 0x2c, 0xf4, 0xfc, 0x83, 0x27,
  0xc4, 0xfd, 0x03, 0x27, 0x84, 0xfd, 0x3e, 0x85, 0xba, 0x85, 0x93, 0x08,
  0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c,
  0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x90, 0x04,
  0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27,
  0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80,
  0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f,
  0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0x23, 0x04, 0xf4, 0xfe, 0xa3, 0x04,
  0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe, 0x05, 0x46, 0xbe, 0x85, 0x05, 0x45,
  0xef, 0xf0, 0x5f, 0xee, 0x01, 0x00, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x1d, 0x71, 0x86, 0xec, 0xa2, 0xe8, 0x80, 0x10, 0xaa, 0x87,
  0xae, 0x86, 0x32, 0x87, 0x23, 0x26, 0xf4, 0xfa, 0xb6, 0x87, 0x23, 0x24,
  0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22, 0xf4, 0xfa, 0x23, 0x26, 0x04, 0xfe,
  0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfa, 0x81, 0x27, 0x8d, 0xc3,
  0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27, 0x63, 0xdd, 0x07, 0x00, 0x85, 0x47,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfa, 0xbb, 0x07, 0xf0, 0x40,
  0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x29, 0xa0, 0x83, 0x27, 0xc4, 0xfa,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x81, 0x27, 0xad, 0xeb,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0xdf, 0xf6, 0x65, 0xa0, 0x83, 0x27,
  0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x77, 0xf7, 0x02, 0x81, 0x27,
  0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8,
  0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05,
  0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00,
  0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x04, 0xf7, 0xfc,
  0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x57, 0xf7, 0x02,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x81, 0x27, 0xd1, 0xfb,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02,
  0xef, 0xf0, 0xdf, 0xee, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xed,
  0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27,
  0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xe6, 0x60, 0x46, 0x64,
  0x25, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18,
  0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8,
  0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24,
  0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf, 0x83, 0x37,
  0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8,
  0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0,
  0xbf, 0xe6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9,
  0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe,
  0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27,
  0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7,
  0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe,
  0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97,
  0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9,
  0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9,
  0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05,
  0xd0, 0x02, 0xef, 0xf0, 0xff, 0xde, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe,
  0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0,
  0xbf, 0xdd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70,
  0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0,
  0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87, 0x23, 0x2a,
  0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe,
  0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf,
  0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03,
  0xef, 0xf0, 0xdf, 0xd6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37,
  0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00,
  0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03,
  0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27,
  0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17,
  0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37,
  0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37,
  0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf,
  0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x1f, 0xcf, 0x11, 0xa8, 0x83, 0x27,
  0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85,
  0xef, 0xf0, 0xdf, 0xcd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc,
  0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x31, 0x71, 0x86, 0xfc,
  0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34, 0xa4, 0xf8, 0x0c, 0xe4, 0x10, 0xe8,
  0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4, 0x23, 0x38, 0x04, 0x03, 0x23, 0x3c,
  0x14, 0x03, 0x93, 0x07, 0x04, 0x04, 0x23, 0x30, 0xf4, 0xf8, 0x83, 0x37,
  0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37,
  0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe, 0xd9, 0xac, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x50, 0x02, 0x63, 0x0a,
  0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0xc6, 0x6d, 0xa4, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x12, 0x85, 0x47,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x00,
  0x89, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x81, 0x27,
  0x13, 0x07, 0x40, 0x06, 0x63, 0x8d, 0xe7, 0x04, 0x13, 0x07, 0x80, 0x07,
  0x63, 0x92, 0xe7, 0x0a, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0x85, 0x47, 0x63, 0x12, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x38, 0xf4, 0xfa,
  0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x04, 0xfb, 0xef, 0xf0, 0x5f, 0xd1,
  0x09, 0xac, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45,
  0x03, 0x35, 0x84, 0xfb, 0xef, 0xf0, 0x3f, 0xdf, 0xcd, 0xaa, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47, 0x63, 0x13, 0xf7, 0x02,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x63, 0x23, 0x30, 0xf4, 0xfa, 0x83, 0x37, 0x04, 0xfa, 0x05, 0x46,
  0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcc, 0xc9, 0xa2, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63,
  0x23, 0x34, 0xf4, 0xfa, 0x83, 0x37, 0x84, 0xfa, 0x05, 0x46, 0xa9, 0x45,
  0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xda, 0x45, 0xa2, 0x13, 0x05, 0x50, 0x02,
  0xef, 0xf0, 0x1f, 0xb5, 0x23, 0x20, 0x04, 0xfe, 0x11, 0xa8, 0x13, 0x05,
  0xc0, 0x06, 0xef, 0xf0, 0x3f, 0xb4, 0x83, 0x27, 0x04, 0xfe, 0x85, 0x27,
  0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x3e, 0x87, 0x83, 0x27,
  0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x40, 0xf7, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xb1,
  0xb9, 0xaa, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x81, 0x27,
  0x13, 0x07, 0x50, 0x02, 0x63, 0x86, 0xe7, 0x12, 0x13, 0x07, 0x50, 0x02,
  0x63, 0xc7, 0xe7, 0x12, 0x13, 0x07, 0x80, 0x07, 0x63, 0x43, 0xf7, 0x12,
  0x13, 0x07, 0x30, 0x06, 0x63, 0xcf, 0xe7, 0x10, 0x9b, 0x87, 0xd7, 0xf9,
  0xbe, 0x86, 0x1b, 0x87, 0x06, 0x00, 0xd5, 0x47, 0x63, 0xe7, 0xe7, 0x10,
  0x93, 0x97, 0x06, 0x02, 0x81, 0x93, 0x13, 0x97, 0x27, 0x00, 0x97, 0x07,
  0x00, 0x00, 0x93, 0x87, 0xe7, 0x30, 0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87,
  0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xe7, 0x2f, 0xba, 0x97,
  0x82, 0x87, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x22, 0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfc,
  0x05, 0x46, 0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0xac, 0xf1, 0xa8,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x43, 0x23, 0x2a, 0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfd, 0x01, 0x46,
  0xc1, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xaa, 0x6d, 0xa8, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63,
  0x23, 0x34, 0xf4, 0xfc, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x9f, 0xa5,
  0x13, 0x05, 0x80, 0x07, 0xef, 0xf0, 0x1f, 0xa5, 0x01, 0x46, 0xc1, 0x45,
  0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0, 0xdf, 0xb8, 0x69, 0xa0, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63,
  0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07,
  0x00, 0x00, 0x93, 0x87, 0xe7, 0x25, 0x23, 0x3c, 0xf4, 0xfc, 0x21, 0xa8,
  0x83, 0x37, 0x84, 0xfd, 0x13, 0x87, 0x17, 0x00, 0x23, 0x3c, 0xe4, 0xfc,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xa0, 0x83, 0x37,
  0x84, 0xfd, 0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3, 0x89, 0xa0, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43,
  0xa3, 0x01, 0xf4, 0xfc, 0x83, 0x47, 0x34, 0xfc, 0x3e, 0x85, 0xef, 0xf0,
  0xff, 0x9d, 0x15, 0xa0, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x5f, 0x9d,
  0x29, 0xa8, 0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0xbf, 0x9c, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0xdf, 0x9b,
  0x01, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0xe3, 0x92, 0x07, 0xd2,
  0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70, 0x46, 0x74, 0x29, 0x61, 0x82, 0x80,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x21, 0xa8, 0x83, 0x37, 0x84, 0xfe, 0x13, 0x87, 0x17, 0x00, 0x23, 0x34,
  0xe4, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0x97,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3, 0x01, 0x00,
  0x01, 0x00, 0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x71, 0x71,
  0x06, 0xf5, 0x22, 0xf1, 0x00, 0x19, 0x93, 0x07, 0x04, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0xff, 0x91, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe,
  0x3a, 0x86, 0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x1d,
  0xef, 0xf0, 0x9f, 0xc7, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0xb9, 0xeb, 0x83, 0x27, 0x04, 0xfe, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x85,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x85, 0x1c, 0xef, 0xf0, 0x5f, 0xf7,
  0x83, 0x27, 0x04, 0xfe, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0x84, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x25, 0x1c, 0xef, 0xf0, 0xff, 0xf5, 0x83, 0x27,
  0x44, 0xfe, 0x85, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0xbf, 0x87, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0xa5, 0x1b, 0xef, 0xf0, 0x7f, 0xf4, 0x83, 0x27,
  0x44, 0xfe, 0x3e, 0x85, 0xef, 0xf0, 0xbf, 0x81, 0x19, 0x45, 0xef, 0xf0,
  0x3f, 0x84, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x25, 0x15, 0xef, 0xf0,
  0x7f, 0xbf, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xa5, 0x13, 0xef, 0xf0,
  0xff, 0xbd, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x25, 0x12, 0xef, 0xf0,
  0x7f, 0xbc, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xa5, 0x10, 0xef, 0xf0,
  0xff, 0xba, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x25, 0x0f, 0xef, 0xf0,
  0x7f, 0xb9, 0x83, 0x27, 0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86,
  0xbe, 0x85, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xa5, 0x0d, 0xef, 0xf0,
  0xff, 0xb7, 0x83, 0x27, 0x44, 0xfe, 0x85, 0x45, 0x3e, 0x85, 0xef, 0xf0,
  0x2f, 0xfc, 0x01, 0xa0, 0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00,
  0x13, 0x05, 0x04, 0x00, 0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00,
  0xef, 0xf0, 0xdf, 0x95, 0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0xdf, 0x80,
  0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00,
  0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00, 0x83, 0x32, 0x84, 0xfd,
  0x13, 0x85, 0x02, 0x00, 0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00,
  0xef, 0xf0, 0xdf, 0x92, 0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0xcf, 0xfd,
  0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00,
  0xca, 0xfd, 0xff, 0xff, 0x0e, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0xf2, 0xfd, 0xff, 0xff, 0x52, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0xf2, 0xfd, 0xff, 0xff, 0x82, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff, 0xf2, 0xfd, 0xff, 0xff,
  0x30, 0xfd, 0xff, 0xff, 0x43, 0x48, 0x49, 0x4c, 0x44, 0x31, 0x20, 0x66,
  0x64, 0x5b, 0x30, 0x5d, 0x20, 0x25, 0x6c, 0x64, 0x20, 0x66, 0x64, 0x5b,
  0x31, 0x5d, 0x20, 0x25, 0x6c, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x63, 0x6c, 0x6f, 0x73, 0x65, 0x28, 0x66, 0x64, 0x5b, 0x30, 0x5d, 0x29,
  0x00, 0x00, 0x00, 0x00, 0x64, 0x75, 0x70, 0x32, 0x28, 0x66, 0x64, 0x5b,
  0x31, 0x5d, 0x2c, 0x20, 0x31, 0x29, 0x00, 0x00, 0x63, 0x6c, 0x6f, 0x73,
  0x65, 0x28, 0x66, 0x64, 0x5b, 0x31, 0x5d, 0x29, 0x00, 0x47, 0x43, 0x43,
  0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30,
  0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x65,
  0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x5b, 0x00,
  0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70,
  0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f,
  0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f,
  0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61,
  0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63,
  0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x80, 0x01, 0x11, 0x00, 0x10, 0x06, 0x11, 0x01, 0x12, 0x01, 0x03,
  0x0e, 0x1b, 0x0e, 0x25, 0x0e, 0x13, 0x05, 0x00, 0x00, 0x00, 0xb9, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x01, 0xfb, 0x0e,
  0x0a, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x6d,
  0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x02, 0xb8, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c,
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
  0x03, 0x00, 0x02, 0x00, 0x18, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x74, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xb2, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0xb8, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xe0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x24, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0xc5, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x01, 0x00, 0xb8, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xc5, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x4c, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x26, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xc8, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x01, 0x00, 0xe4, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xc5, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x86, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x12, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xc5, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xc5, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xc8, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x28, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x68, 0x69,
  0x6c, 0x64, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x63, 0x6c, 0x6f, 0x73, 0x65, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x64,
  0x75, 0x70, 0x32, 0x00, 0x70, 0x69, 0x70, 0x65, 0x00, 0x6d, 0x69, 0x6e,
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
  0x6d, 0x70, 0x5f, 0x73, 0x30, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54,
  0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75,
  0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67,
  0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45,
  0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30,
  0x5f, 0x6d, 0x69, 0x6e, 0x75, 0x73, 0x34, 0x30, 0x00, 0x5f, 0x5f, 0x62,
  0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69,
  0x6e, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f,
  0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f,
  0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e,
  0x64, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00,
  0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74,
  0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f,
  0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e,
  0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74,
  0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62,
  0x75, 0x67, 0x5f, 0x61, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x73, 0x00, 0x2e,
  0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x69, 0x6e, 0x66, 0x6f, 0x00, 0x2e,
  0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x61, 0x62, 0x62, 0x72, 0x65, 0x76,
  0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x6c, 0x69, 0x6e, 0x65,
  0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f, 0x73, 0x74, 0x72, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc5, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xde, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x0b, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x53, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xae, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x0b, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x79, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x48, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x64, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int child_elf_len=5416;
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
void dump_s0();
void dump_s0_minus40();
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
static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_initialize(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct list$1void$p* list$1void$p_initialize(struct list$1void$p* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static void list$1void$p_finalize(struct list$1void$p* self);
static void map$2void$ptuple2$2void$plong$$ph$p_finalize(struct map$2void$ptuple2$2void$plong$$ph* self);
static void tuple2$2void$plong$$p_finalize(struct tuple2$2void$plong$* self);
static void map$2void$ptuple2$2void$plong$$ph_finalize(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position);
static void proc_finalize(struct proc* self);
static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position);
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
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX315, unsigned long  int anonymous_var_nameX316, unsigned long  int anonymous_var_nameX317, unsigned long  long anonymous_var_nameX318);
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
}
static inline long read(long fd, void* buf, long size){
}
static inline int open(const char* path, int oflag){
}
static inline int close(long fd){
}
static inline int execv(char* path, char** argv, int argc){
}
static inline int wait(int* status){
}
static inline int dup2(int oldfd, int newfd){
}
static inline int pipe(int* pip){
}
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
unsigned long  long x_110;
memset(&x_110, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_110));
    return x_110;
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
unsigned long  long x_279;
memset(&x_279, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_279));
    return x_279;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_280;
memset(&sp_val_280, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_280): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_280;
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
    const unsigned long  int base_31=(unsigned long  int)COMMON;
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
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    for(    i_53=0    ;    i_53<8    ;    i_53++    ){
        mappages(pagetable,(unsigned long  long)COMMON+i_53*4096,4096,(unsigned long  long)COMMON+i_53*4096,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    }
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* hello_elf, int fork_flag, int exec_flag){
void* __right_value0 = (void*)0;
struct proc* result_54;
void* __right_value1 = (void*)0;
void* __right_value7 = (void*)0;
struct map$2void$ptuple2$2void$plong$$ph* __dec_obj2;
unsigned long  long* pagetable_64;
struct elfhdr* eh_65;
struct proghdr* ph_66;
unsigned long  long size_67;
unsigned long  long va_68;
int i_69;
void* pa_70;
void* __right_value8 = (void*)0;
struct proc* parent_71;
unsigned long  long parent_current_78;
unsigned long  long parent_stack_top_79;
unsigned long  long stack_base_80;
int i_81;
char* pa_82;
char* src_83;
void* __right_value9 = (void*)0;
struct proc* parent_84;
unsigned long  long stack_base_85;
int i_86;
char* pa_87;
    result_54=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 798, "struct proc*"));
    result_54->program=hello_elf;
    __dec_obj2=result_54->mapping_values,
    result_54->mapping_values=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(map$2void$ptuple2$2void$plong$$ph_initialize((struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((struct map$2void$ptuple2$2void$plong$$ph*)come_calloc_v2(1, sizeof(struct map$2void$ptuple2$2void$plong$$ph)*(1), "main.c", 802, "struct map$2void$ptuple2$2void$plong$$ph*"))));
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    pagetable_64=(unsigned long  long*)kalloc();
    memset(pagetable_64,0,4096);
    setting_user_pagetable(result_54,pagetable_64);
    result_54->pagetable=pagetable_64;
    eh_65=(struct elfhdr*)hello_elf;
    if(    eh_65->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_66=(struct proghdr*)(hello_elf+eh_65->phoff);
    size_67=ph_66->filesz;
    result_54->vaddr=(((ph_66->vaddr))&~(4096-1));
    va_68=0;
    for(    i_69=0    ;    i_69<eh_65->phnum    ;    i_69++,ph_66++    ){
        if(        ph_66->type!=1        ) {
            continue;
        }
        for(        va_68=(((ph_66->vaddr))&~(4096-1))        ;        va_68<ph_66->vaddr+ph_66->memsz        ;        va_68+=4096        ){
            pa_70=kalloc();
            if(            !pa_70            ) {
                panic("kalloc");
            }
            memset(pa_70,0,4096);
            mappages(result_54->pagetable,va_68,4096,(unsigned long  long)pa_70,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_54->pagetable,ph_66->vaddr,hello_elf+ph_66->off,ph_66->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_71=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_78=parent_71->context.sp;
        parent_stack_top_79=(unsigned long  long)parent_71->stack_top;
        stack_base_80=1073741824UL-16*4096;
        for(        i_81=0        ;        i_81<16        ;        i_81++        ){
            pa_82=kalloc();
            src_83=walkaddr(parent_71->pagetable,parent_stack_top_79+i_81*4096);
            if(            src_83            ) {
                memmove(pa_82,(void*)src_83,4096);
            }
            mappages(result_54->pagetable,stack_base_80+i_81*4096,4096,(unsigned long  long)pa_82,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_80;
        result_54->context.sp=stack_base_80+16*4096;
        result_54->file_table=fs_dup_table(parent_71->file_table);
    }
    else {
        parent_84=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        stack_base_85=1073741824UL-16*4096;
        for(        i_86=0        ;        i_86<16        ;        i_86++        ){
            pa_87=kalloc();
            mappages(result_54->pagetable,stack_base_85+i_86*4096,4096,(unsigned long  long)pa_87,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_85;
        result_54->context.sp=stack_base_85+16*4096;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            result_54->file_table=fs_dup_table(parent_84->file_table);
        }
        else {
            result_54->file_table=fs_init();
        }
    }
    result_54->context.mepc=eh_65->entry;
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

static struct map$2void$ptuple2$2void$plong$$ph* map$2void$ptuple2$2void$plong$$ph_initialize(struct map$2void$ptuple2$2void$plong$$ph* self){
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
int i_55;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1void$p* __dec_obj1;
struct map$2void$ptuple2$2void$plong$$ph* __result_obj__15;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value2=(void**)come_calloc_v2(1, sizeof(void*)*(1*(128)), "/usr/local/include/comelang.h", 1924, "void**"))));
    self->items=(struct tuple2$2void$plong$**)come_increment_ref_count(((struct tuple2$2void$plong$**)(__right_value3=(struct tuple2$2void$plong$**)come_calloc_v2(1, sizeof(struct tuple2$2void$plong$*)*(1*(128)), "/usr/local/include/comelang.h", 1925, "struct tuple2$2void$plong$**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value4=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1926, "_Bool*"))));
    for(    i_55=0    ;    i_55<128    ;    i_55++    ){
        self->item_existance[i_55]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj1=self->key_list,
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc_v2(1, sizeof(struct list$1void$p)*(1), "/usr/local/include/comelang.h", 1936, "struct list$1void$p*"))));
    come_call_finalizer(list$1void$p_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
    self->it=0;
    __result_obj__15 = (struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count(self);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct list_item$1void$p* it_56;
struct list_item$1void$p* prev_it_57;
    it_56=self->head;
    while(    it_56!=((void*)0)    ) {
        prev_it_57=it_56;
        it_56=it_56->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_58;
struct list_item$1void$p* prev_it_59;
    it_58=self->head;
    while(    it_58!=((void*)0)    ) {
        prev_it_59=it_58;
        it_58=it_58->next;
        come_call_finalizer(list_item$1void$p$p_finalize, prev_it_59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void map$2void$ptuple2$2void$plong$$ph$p_finalize(struct map$2void$ptuple2$2void$plong$$ph* self){
int i_60;
int i_61;
    for(    i_60=0    ;    i_60<self->size    ;    i_60++    ){
        if(        self->item_existance[i_60]        ) {
            if(            1            ) {
                come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[i_60], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_61=0    ;    i_61<self->size    ;    i_61++    ){
        if(        self->item_existance[i_61]        ) {
            if(            0            ) {
                (self->keys[i_61] = come_decrement_ref_count(self->keys[i_61], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static void tuple2$2void$plong$$p_finalize(struct tuple2$2void$plong$* self){
}

static void map$2void$ptuple2$2void$plong$$ph_finalize(struct map$2void$ptuple2$2void$plong$$ph* self){
int i_62;
int i_63;
    for(    i_62=0    ;    i_62<self->size    ;    i_62++    ){
        if(        self->item_existance[i_62]        ) {
            if(            1            ) {
                come_call_finalizer(tuple2$2void$plong$$p_finalize, self->items[i_62], (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_63=0    ;    i_63<self->size    ;    i_63++    ){
        if(        self->item_existance[i_63]        ) {
            if(            0            ) {
                (self->keys[i_63] = come_decrement_ref_count(self->keys[i_63], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    come_call_finalizer(list$1void$p$p_finalize, self->key_list, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_72;
int i_73;
struct proc* __result_obj__16;
struct proc* default_value_74;
struct proc* __result_obj__17;
default_value_74 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_72=self->head;
    i_73=0;
    while(    it_72!=((void*)0)    ) {
        if(        position==i_73        ) {
            __result_obj__16 = (struct proc*)come_increment_ref_count(it_72->item);
            come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__16;
        }
        it_72=it_72->next;
        i_73++;
    }
    memset(&default_value_74,0,sizeof(struct proc*));
    __result_obj__17 = (struct proc*)come_increment_ref_count(default_value_74);
    come_call_finalizer(proc_finalize, default_value_74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static void proc_finalize(struct proc* self){
    if(    self!=((void*)0)&&self->mapping_values!=((void*)0)    ) {
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, self->mapping_values, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_75;
int i_76;
struct proc* __result_obj__18;
struct proc* default_value_77;
struct proc* __result_obj__19;
default_value_77 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_75=self->head;
    i_76=0;
    while(    it_75!=((void*)0)    ) {
        if(        position==i_76        ) {
            __result_obj__18 = (struct proc*)come_increment_ref_count(it_75->item);
            come_call_finalizer(proc_finalize, __result_obj__18, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__18;
        }
        it_75=it_75->next;
        i_76++;
    }
    memset(&default_value_77,0,sizeof(struct proc*));
    __result_obj__19 = (struct proc*)come_increment_ref_count(default_value_77);
    come_call_finalizer(proc_finalize, default_value_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__19, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__19;
}

static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item){
int len_88;
int i_89;
struct proc* default_value_90;
struct list$1proc$ph* __result_obj__21;
struct list_item$1proc$ph* it_94;
int i_95;
struct proc* __dec_obj6;
struct list$1proc$ph* __result_obj__22;
default_value_90 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_88=self->len;
        for(        i_89=0        ;        i_89<position-len_88        ;        i_89++        ){
            memset(&default_value_90,0,sizeof(struct proc*));
            list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(default_value_90));
            come_call_finalizer(proc_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(item));
        __result_obj__21 = self;
        come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__21;
    }
    it_94=self->head;
    i_95=0;
    while(    it_94!=((void*)0)    ) {
        if(        position==i_95        ) {
            __dec_obj6=it_94->item,
            it_94->item=(struct proc*)come_increment_ref_count(item);
            come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_94=it_94->next;
        i_95++;
    }
    __result_obj__22 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__22;
}

static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item){
void* __right_value10 = (void*)0;
struct list_item$1proc$ph* litem_91;
struct proc* __dec_obj3;
void* __right_value11 = (void*)0;
struct list_item$1proc$ph* litem_92;
struct proc* __dec_obj4;
void* __right_value12 = (void*)0;
struct list_item$1proc$ph* litem_93;
struct proc* __dec_obj5;
struct list$1proc$ph* __result_obj__20;
    if(    self->len==0    ) {
        litem_91=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value10=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1proc$ph*"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj3=litem_91->item,
        litem_91->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1    ) {
        litem_92=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value11=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1proc$ph*"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj4=litem_92->item,
        litem_92->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value12=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1proc$ph*"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj5=litem_93->item,
        litem_93->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj5,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_93;
        self->tail=litem_93;
    }
    self->len++;
    __result_obj__20 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__20;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value13 = (void*)0;
struct list_item$1proc$ph* litem_96;
struct proc* __dec_obj7;
void* __right_value14 = (void*)0;
struct list_item$1proc$ph* litem_97;
struct proc* __dec_obj8;
void* __right_value15 = (void*)0;
struct list_item$1proc$ph* litem_98;
struct proc* __dec_obj9;
struct list$1proc$ph* __result_obj__23;
    if(    self->len==0    ) {
        litem_96=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value13=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_96->prev=((void*)0);
        litem_96->next=((void*)0);
        __dec_obj7=litem_96->item,
        litem_96->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_96;
        self->head=litem_96;
    }
    else if(    self->len==1    ) {
        litem_97=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value14=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_97->prev=self->head;
        litem_97->next=((void*)0);
        __dec_obj8=litem_97->item,
        litem_97->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_97;
        self->head->next=litem_97;
    }
    else {
        litem_98=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value15=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_98->prev=self->tail;
        litem_98->next=((void*)0);
        __dec_obj9=litem_98->item,
        litem_98->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_98;
        self->tail=litem_98;
    }
    self->len++;
    __result_obj__23 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__23;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_99;
unsigned long  long* __result_obj__24;
unsigned long  long* __result_obj__25;
pagetable_99 = (void*)0;
    pagetable_99=(unsigned long  long*)kalloc();
    if(    pagetable_99==0    ) {
        __result_obj__24 = (unsigned long  long*)0;
        return __result_obj__24;
    }
    memset(pagetable_99,0,4096);
    __result_obj__25 = pagetable_99;
    return __result_obj__25;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__100;
unsigned long  long* __result_obj__26;
unsigned long  long addr_101;
unsigned long  long* pte_102;
unsigned long  long pa_103;
unsigned int flags_104;
char* mem_105;
unsigned long  long* __result_obj__27;
new__100 = (void*)0;
    new__100=uvmcreate();
    if(    new__100==0    ) {
        __result_obj__26 = (unsigned long  long*)0;
        return __result_obj__26;
    }
    for(    addr_101=0    ;    addr_101<sz    ;    addr_101+=4096    ){
        pte_102=walk(old,addr_101,0);
        if(        !pte_102||!(*pte_102&(1L<<0))        ) {
            continue;
        }
        pa_103=(((*pte_102)>>10)<<12);
        flags_104=((*pte_102)&1023);
        mem_105=kalloc();
        if(        mem_105==0        ) {
            panic("coypuvm");
        }
        memmove(mem_105,(char*)pa_103,4096);
        if(        mappages(new__100,addr_101,4096,((((unsigned long  long)mem_105)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_105);
            panic("copyuvm");
        }
    }
    __result_obj__27 = new__100;
    return __result_obj__27;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_106;
unsigned long  long pte_107;
unsigned long  long pa_108;
unsigned long  long* child_109;
    for(    i_106=0    ;    i_106<512    ;    i_106++    ){
        pte_107=pagetable[i_106];
        if(        !(pte_107&(1L<<0))        ) {
            continue;
        }
        pa_108=(((pte_107)>>10)<<12);
        if(        pte_107&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_108);
            }
        }
        else if(        level>0        ) {
            child_109=(unsigned long  long*)pa_108;
            free_pagetable(child_109,level-1);
            kfree(child_109);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value16 = (void*)0;
struct file* __result_obj__28;
    __result_obj__28 = ((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__28;
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
unsigned long  int x_111;
memset(&x_111, 0, sizeof(unsigned long  int));
    x_111=r_sie();
    x_111|=(1UL<<5);
    w_sie(x_111);
    x_111=r_sstatus();
    x_111|=(1UL<<1);
    w_sstatus(x_111);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_112;
    next_112=r_time()+10000UL;
    w_stimecmp(next_112);
}

void timer_handler(){
void* __right_value17 = (void*)0;
struct proc* p_113;
struct context_t* tf_114;
int old_active_proc_115;
void* __right_value18 = (void*)0;
struct proc* old_116;
void* __right_value19 = (void*)0;
struct proc* new__117;
unsigned long  long a0_118;
    disable_timer_interrupts();
    p_113=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_114=(struct context_t*)TRAPFRAME;
    p_113->context=*tf_114;
    timer_reset();
    old_active_proc_115=gActiveProc;
    old_116=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__117=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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

void puts(const char* s){
    acquire(&console_lock);
    while(    *s    ) {
        putchar(*s++);
    }
    release(&console_lock);
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
void* __right_value20 = (void*)0;
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
    p_132=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_133=copyin(p_132->pagetable,kernel_buf_129,user_va_130,len_131);
    if(    ret_133<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_128)    ) {
        pipewrite(fd_128,kernel_buf_129,len_131);
    }
    else if(    1    ) {
        for(        i_134=0        ;        i_134<len_131        ;        i_134++        ){
            putchar(kernel_buf_129[i_134]);
        }
    }
    else {
        panic("write");
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
void* __right_value21 = (void*)0;
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
    p_144=((struct proc*)(__right_value21=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value21, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value22 = (void*)0;
struct proc* p_155;
int exit_status_156;
int child_pid_157;
int n_158;
struct list$1proc$ph* o2_saved_159;
struct proc* it_162;
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
    p_155=((struct proc*)(__right_value22=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_156=0;
    child_pid_157=-1;
    while(    child_pid_157==-1    ) {
        timer_handler();
        n_158=0;
        for(        o2_saved_159=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_162=list$1proc$ph_begin((o2_saved_159))        ;        !list$1proc$ph_end((o2_saved_159))        ;        it_162=list$1proc$ph_next((o2_saved_159))        ){
            if(            it_162->zombie            ) {
                free(it_162->file_table);
                free_proc(it_162);
                exit_status_156=it_162->xstatus;
                child_pid_157=n_158;
                list$1proc$ph_remove_by_pointer(gProc,it_162);
                break;
            }
            n_158++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_155->pagetable,(unsigned long  long)status_va_154,(void*)&exit_status_156,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_157;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_160;
struct proc* __result_obj__29;
struct proc* __result_obj__30;
struct proc* result_161;
struct proc* __result_obj__31;
result_160 = (void*)0;
result_161 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_160,0,sizeof(struct proc*));
        __result_obj__29 = result_160;
        return __result_obj__29;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_161,0,sizeof(struct proc*));
    __result_obj__31 = result_161;
    return __result_obj__31;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_163;
struct proc* __result_obj__32;
struct proc* __result_obj__33;
struct proc* result_164;
struct proc* __result_obj__34;
result_163 = (void*)0;
result_164 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_163,0,sizeof(struct proc*));
        __result_obj__32 = result_163;
        return __result_obj__32;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__33 = self->it->item;
        return __result_obj__33;
    }
    memset(&result_164,0,sizeof(struct proc*));
    __result_obj__34 = result_164;
    return __result_obj__34;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_165;
struct list_item$1proc$ph* it_166;
struct list$1proc$ph* __result_obj__38;
    it2_165=0;
    it_166=self->head;
    while(    it_166!=((void*)0)    ) {
        if(        it_166->item==item        ) {
            list$1proc$ph_delete(self,it2_165,it2_165+1);
            break;
        }
        it2_165++;
        it_166=it_166->next;
    }
    __result_obj__38 = self;
    return __result_obj__38;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_167;
struct list$1proc$ph* __result_obj__35;
struct list_item$1proc$ph* it_170;
int i_171;
struct list_item$1proc$ph* prev_it_172;
struct list_item$1proc$ph* it_173;
int i_174;
struct list_item$1proc$ph* prev_it_175;
struct list_item$1proc$ph* it_176;
struct list_item$1proc$ph* head_prev_it_177;
struct list_item$1proc$ph* tail_it_178;
int i_179;
struct list_item$1proc$ph* prev_it_180;
struct list$1proc$ph* __result_obj__37;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_167=tail;
        tail=head;
        head=tmp_167;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__35 = self;
        return __result_obj__35;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_170=self->head;
        i_171=0;
        while(        it_170!=((void*)0)        ) {
            if(            i_171<tail            ) {
                prev_it_172=it_170;
                it_170=it_170->next;
                i_171++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_171==tail            ) {
                self->head=it_170;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_170=it_170->next;
                i_171++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_173=self->head;
        i_174=0;
        while(        it_173!=((void*)0)        ) {
            if(            i_174==head            ) {
                self->tail=it_173->prev;
                self->tail->next=((void*)0);
            }
            if(            i_174>=head            ) {
                prev_it_175=it_173;
                it_173=it_173->next;
                i_174++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_173=it_173->next;
                i_174++;
            }
        }
    }
    else {
        it_176=self->head;
        head_prev_it_177=((void*)0);
        tail_it_178=((void*)0);
        i_179=0;
        while(        it_176!=((void*)0)        ) {
            if(            i_179==head            ) {
                head_prev_it_177=it_176->prev;
            }
            if(            i_179==tail            ) {
                tail_it_178=it_176;
            }
            if(            i_179>=head&&i_179<tail            ) {
                prev_it_180=it_176;
                it_176=it_176->next;
                i_179++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_176=it_176->next;
                i_179++;
            }
        }
        if(        head_prev_it_177!=((void*)0)        ) {
            head_prev_it_177->next=tail_it_178;
        }
        if(        tail_it_178!=((void*)0)        ) {
            tail_it_178->prev=head_prev_it_177;
        }
    }
    __result_obj__37 = self;
    return __result_obj__37;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_168;
struct list_item$1proc$ph* prev_it_169;
struct list$1proc$ph* __result_obj__36;
    it_168=self->head;
    while(    it_168!=((void*)0)    ) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__36 = self;
    return __result_obj__36;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_181;
struct list_item$1proc$ph* prev_it_182;
    it_181=self->head;
    while(    it_181!=((void*)0)    ) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_183;
unsigned long  int arg0_184;
unsigned long  int arg1_185;
unsigned long  int arg2_186;
unsigned long  int arg3_187;
unsigned long  int arg4_188;
unsigned long  int arg5_189;
unsigned long  int arg6_190;
unsigned long  int arg_syscall_no_191;
unsigned long  long user_va_193;
void* __right_value23 = (void*)0;
struct proc* p_194;
int result_195;
    trapframe_183=(struct context_t*)TRAPFRAME;
    arg0_184=trapframe_183->a0;
    arg1_185=trapframe_183->a1;
    arg2_186=trapframe_183->a2;
    arg3_187=trapframe_183->a3;
    arg4_188=trapframe_183->a4;
    arg5_189=trapframe_183->a5;
    arg6_190=trapframe_183->a6;
    arg_syscall_no_191=trapframe_183->a7;
    char kernel_buf_192[256];
    memset(&kernel_buf_192, 0, sizeof(char)    *(256)    );
    user_va_193=arg0_184;
    p_194=((struct proc*)(__right_value23=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_194->pagetable,kernel_buf_192,user_va_193,256);
    result_195=fs_open(kernel_buf_192);
    return result_195;
}

int Sys_fork(){
struct context_t* trapframe_196;
unsigned long  int arg0_197;
unsigned long  int arg1_198;
unsigned long  int arg2_199;
unsigned long  int arg3_200;
unsigned long  int arg4_201;
unsigned long  int arg5_202;
unsigned long  int arg6_203;
unsigned long  int arg_syscall_no_204;
void* __right_value24 = (void*)0;
struct proc* p_205;
int fork_flag_206;
void* __right_value25 = (void*)0;
struct proc* child_207;
unsigned long  long sp_208;
int result_209;
memset(&fork_flag_206, 0, sizeof(int));
    trapframe_196=(struct context_t*)TRAPFRAME;
    arg0_197=trapframe_196->a0;
    arg1_198=trapframe_196->a1;
    arg2_199=trapframe_196->a2;
    arg3_200=trapframe_196->a3;
    arg4_201=trapframe_196->a4;
    arg5_202=trapframe_196->a5;
    arg6_203=trapframe_196->a6;
    arg_syscall_no_204=trapframe_196->a7;
    p_205=((struct proc*)(__right_value24=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_205->program,fork_flag_206=1,0);
    child_207=((struct proc*)(__right_value25=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value25, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_208=child_207->context.sp;
    child_207->context=*trapframe_196;
    child_207->context.mepc=child_207->context.mepc+4;
    child_207->context.sp=sp_208;
    child_207->context.a0=0;
    result_209=list$1proc$ph_length(gProc)-1;
    return result_209;
}

int Sys_execv(){
struct context_t* trapframe_210;
unsigned long  int arg0_211;
unsigned long  int arg1_212;
unsigned long  int arg2_213;
unsigned long  int arg3_214;
unsigned long  int arg4_215;
unsigned long  int arg5_216;
unsigned long  int arg6_217;
unsigned long  int arg_syscall_no_218;
int argc_219;
unsigned long  long user_va_221;
void* __right_value26 = (void*)0;
struct proc* p_222;
char* path_223;
int fd_225;
int ret_226;
void* __right_value27 = (void*)0;
struct proc* result_227;
    trapframe_210=(struct context_t*)TRAPFRAME;
    arg0_211=trapframe_210->a0;
    arg1_212=trapframe_210->a1;
    arg2_213=trapframe_210->a2;
    arg3_214=trapframe_210->a3;
    arg4_215=trapframe_210->a4;
    arg5_216=trapframe_210->a5;
    arg6_217=trapframe_210->a6;
    arg_syscall_no_218=trapframe_210->a7;
    argc_219=arg2_213;
    char kernel_buf_220[256];
    memset(&kernel_buf_220, 0, sizeof(char)    *(256)    );
    user_va_221=arg0_211;
    p_222=((struct proc*)(__right_value26=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value26, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_222->pagetable,kernel_buf_220,user_va_221,256);
    path_223=kernel_buf_220;
    char hello_elf_224[4096];
    memset(&hello_elf_224, 0, sizeof(char)    *(4096)    );
    fd_225=fs_open(path_223);
    ret_226=fs_read(fd_225,hello_elf_224,4096);
    if(    ret_226<0    ) {
        trapframe_210->a0=-1;
        return 0;
    }
    alloc_prog(hello_elf_224,0,1);
    result_227=((struct proc*)(__right_value27=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value27, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_210->mepc=result_227->context.mepc+4;
    trapframe_210->sp=result_227->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_228;
unsigned long  int arg0_229;
unsigned long  int arg1_230;
unsigned long  int arg2_231;
unsigned long  int arg3_232;
unsigned long  int arg4_233;
unsigned long  int arg5_234;
unsigned long  int arg6_235;
unsigned long  int arg_syscall_no_236;
int oldfd_237;
int newfd_238;
    trapframe_228=(struct context_t*)TRAPFRAME;
    arg0_229=trapframe_228->a0;
    arg1_230=trapframe_228->a1;
    arg2_231=trapframe_228->a2;
    arg3_232=trapframe_228->a3;
    arg4_233=trapframe_228->a4;
    arg5_234=trapframe_228->a5;
    arg6_235=trapframe_228->a6;
    arg_syscall_no_236=trapframe_228->a7;
    oldfd_237=arg0_229;
    newfd_238=arg1_230;
    printf("gActiveProc %d\n",gActiveProc);
    fs_dup2(oldfd_237,newfd_238);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_239;
unsigned long  int arg0_240;
unsigned long  int arg1_241;
unsigned long  int arg2_242;
unsigned long  int arg3_243;
unsigned long  int arg4_244;
unsigned long  int arg5_245;
unsigned long  int arg6_246;
unsigned long  int arg_syscall_no_247;
char* kernel_buf_248;
unsigned long  long user_va_249;
void* __right_value28 = (void*)0;
struct proc* p_251;
kernel_buf_248 = (void*)0;
    trapframe_239=(struct context_t*)TRAPFRAME;
    arg0_240=trapframe_239->a0;
    arg1_241=trapframe_239->a1;
    arg2_242=trapframe_239->a2;
    arg3_243=trapframe_239->a3;
    arg4_244=trapframe_239->a4;
    arg5_245=trapframe_239->a5;
    arg6_246=trapframe_239->a6;
    arg_syscall_no_247=trapframe_239->a7;
    user_va_249=arg0_240;
    int fd_250[2];
    memset(&fd_250, 0, sizeof(int)    *(2)    );
    pipe_open(&fd_250[0],&fd_250[1]);
    p_251=((struct proc*)(__right_value28=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_251->pagetable,(unsigned long  long)user_va_249,(char*)fd_250,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context_t* trapframe_252;
unsigned long  int arg0_253;
unsigned long  int arg1_254;
unsigned long  int arg2_255;
unsigned long  int arg3_256;
unsigned long  int arg4_257;
unsigned long  int arg5_258;
unsigned long  int arg6_259;
unsigned long  int arg_syscall_no_260;
int fd_261;
unsigned long  long destva_262;
unsigned long  int n_263;
int ret_265;
void* __right_value29 = (void*)0;
struct proc* p_266;
memset(&ret_265, 0, sizeof(int));
    trapframe_252=(struct context_t*)TRAPFRAME;
    arg0_253=trapframe_252->a0;
    arg1_254=trapframe_252->a1;
    arg2_255=trapframe_252->a2;
    arg3_256=trapframe_252->a3;
    arg4_257=trapframe_252->a4;
    arg5_258=trapframe_252->a5;
    arg6_259=trapframe_252->a6;
    arg_syscall_no_260=trapframe_252->a7;
    fd_261=arg0_253;
    destva_262=arg1_254;
    n_263=arg2_255;
    char kernel_buf_264[256];
    memset(&kernel_buf_264, 0, sizeof(char)    *(256)    );
    if(    fd_261==0    ) {
        ret_265=uart_readn(kernel_buf_264,n_263);
    }
    else if(    is_pipe(fd_261)    ) {
        ret_265=piperead(fd_261,kernel_buf_264,n_263);
    }
    else {
        ret_265=fs_read(fd_261,kernel_buf_264,n_263);
        if(        ret_265<0        ) {
            trapframe_252->a0=ret_265;
            return 0;
        }
        kernel_buf_264[ret_265]=0;
    }
    p_266=((struct proc*)(__right_value29=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_266->pagetable,destva_262,kernel_buf_264,ret_265)<0    ) {
        panic("read: copyout failed");
    }
    return ret_265;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_267;
unsigned long  int arg0_268;
unsigned long  int arg1_269;
unsigned long  int arg2_270;
unsigned long  int arg3_271;
unsigned long  int arg4_272;
unsigned long  int arg5_273;
unsigned long  int arg6_274;
unsigned long  int arg_syscall_no_275;
unsigned long  long result_276;
long fd_277;
int ret_278;
    disable_timer_interrupts();
    trapframe_267=(struct context_t*)TRAPFRAME;
    arg0_268=trapframe_267->a0;
    arg1_269=trapframe_267->a1;
    arg2_270=trapframe_267->a2;
    arg3_271=trapframe_267->a3;
    arg4_272=trapframe_267->a4;
    arg5_273=trapframe_267->a5;
    arg6_274=trapframe_267->a6;
    arg_syscall_no_275=trapframe_267->a7;
    result_276=0;
    switch (    arg_syscall_no_275) {
        case 64:
        {
            result_276=Sys_write();
        }
        break;
        case 73:
        {
            result_276=Sys_pipe();
        }
        break;
        case 72:
        {
            result_276=Sys_dup2();
        }
        break;
        case 70:
        {
            result_276=Sys_exit();
        }
        break;
        case 71:
        {
            result_276=Sys_wait();
        }
        break;
        case 66:
        {
            result_276=Sys_open();
        }
        break;
        case 65:
        {
            result_276=Sys_read();
        }
        break;
        case 67:
        {
            fd_277=arg0_268;
            ret_278=fs_close(fd_277);
            result_276=ret_278;
        }
        break;
        case 68:
        {
            result_276=Sys_fork();
        }
        break;
        case 69:
        {
            result_276=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_267->a0=result_276;
    return result_276;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct list$1proc$ph* __dec_obj10;
    __dec_obj10=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2364, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__39;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__39 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__39, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__39;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_281;
struct list_item$1proc$ph* prev_it_282;
    it_281=self->head;
    while(    it_281!=((void*)0)    ) {
        prev_it_282=it_281;
        it_281=it_281->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_283;
void* __right_value32 = (void*)0;
struct proc* p_284;
unsigned long  int usersp_285;
unsigned long  long usersatp_286;
unsigned long  int entry_287;
memset(&fork_flag_283, 0, sizeof(int));
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
    alloc_prog((char*)child_elf,fork_flag_283=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_284=((struct proc*)(__right_value32=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value32, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_285=(unsigned long  long)(p_284->context.sp);
    usersatp_286=((8L<<60)|(((unsigned long  long)p_284->pagetable)>>12));
    entry_287=p_284->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_284;
    kernel_sp=read_s_sp();
    enter_user(entry_287,usersp_285,usersatp_286,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__40;
struct mem_block* current_288;
struct mem_block* prev_289;
void* __result_obj__41;
struct mem_block* new_mem_290;
void* __result_obj__42;
void* __result_obj__43;
    if(    size==0    ) {
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_288=free_list;
    prev_289=((void*)0);
    while(    current_288!=((void*)0)    ) {
        if(        current_288->size>=size        ) {
            if(            prev_289==((void*)0)            ) {
                free_list=current_288->next;
            }
            else {
                prev_289->next=current_288->next;
            }
            __result_obj__41 = (void*)(current_288+1);
            return __result_obj__41;
        }
        prev_289=current_288;
        current_288=current_288->next;
    }
    new_mem_290=(struct mem_block*)sbrk(size);
    if(    new_mem_290==(void*)-1    ) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    new_mem_290->size=size;
    new_mem_290->next=((void*)0);
    __result_obj__43 = (void*)(new_mem_290+1);
    return __result_obj__43;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_291;
void* __result_obj__44;
void* ptr_292;
void* __result_obj__45;
    total_size_291=nmemb*size;
    if(    total_size_291==0    ) {
        __result_obj__44 = ((void*)0);
        return __result_obj__44;
    }
    ptr_292=malloc(total_size_291);
    if(    ptr_292!=((void*)0)    ) {
        memset(ptr_292,0,total_size_291);
    }
    __result_obj__45 = ptr_292;
    return __result_obj__45;
}

void free(void* ptr){
struct mem_block* block_293;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_293=(struct mem_block*)ptr-1;
    block_293->next=free_list;
    free_list=block_293;
}

char* strdup(const char* s){
char* s2_294;
unsigned long  int len_295;
char* p_296;
char* __result_obj__46;
    s2_294=s;
    len_295=strlen(s2_294)+1;
    p_296=malloc(len_295);
    if(    p_296    ) {
        memcpy(p_296,s2_294,len_295);
    }
    __result_obj__46 = p_296;
    return __result_obj__46;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__47;
char* __result_obj__48;
char* __result_obj__49;
    if(    !*needle    ) {
        __result_obj__47 = (char*)haystack;
        return __result_obj__47;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_297=haystack;
        const char* n_298=needle;
        while(        *h_297&&*n_298&&(*h_297==*n_298)        ) {
            h_297++;
            n_298++;
        }
        if(        !*n_298        ) {
            __result_obj__48 = (char*)haystack;
            return __result_obj__48;
        }
    }
    __result_obj__49 = ((void*)0);
    return __result_obj__49;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_299;
int i_300;
void* __result_obj__50;
    cdst_299=(char*)dst;
    for(    i_300=0    ;    i_300<n    ;    i_300++    ){
        cdst_299[i_300]=c;
    }
    __result_obj__50 = dst;
    return __result_obj__50;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_301;
const unsigned char* s2_302;
memset(&s1_301, 0, sizeof(const unsigned char*));
memset(&s2_302, 0, sizeof(const unsigned char*));
    s1_301=v1;
    s2_302=v2;
    while(    n-->0    ) {
        if(        *s1_301!=*s2_302        ) {
            return *s1_301-*s2_302;
        }
        s1_301++,s2_302++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_303;
char* d_304;
void* __result_obj__51;
void* __result_obj__52;
s_303 = (void*)0;
d_304 = (void*)0;
    if(    n==0    ) {
        __result_obj__51 = dst;
        return __result_obj__51;
    }
    s_303=src;
    d_304=dst;
    if(    s_303<d_304&&s_303+n>d_304    ) {
        s_303+=n;
        d_304+=n;
        while(        n-->0        ) {
            *--d_304=*--s_303;
        }
    }
    else {
        while(        n-->0        ) {
            *d_304++=*s_303++;
        }
    }
    __result_obj__52 = dst;
    return __result_obj__52;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__53;
    __result_obj__53 = memmove(dst,src,n);
    return __result_obj__53;
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
char* os_305;
char* __result_obj__54;
os_305 = (void*)0;
    os_305=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__54 = os_305;
    return __result_obj__54;
}

int strlen(const char* s){
int n_306;
memset(&n_306, 0, sizeof(int));
    for(    n_306=0    ;    s[n_306]    ;    n_306++    ){
        ;
    }
    return n_306;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_307;
char* __result_obj__55;
    d_307=dest;
    while(    *d_307    ) {
        d_307++;
    }
    while(    n--&&*src    ) {
        *d_307++=*src++;
    }
    *d_307=0;
    __result_obj__55 = dest;
    return __result_obj__55;
}

char* strtok(char* s, const char* delim){
static char* next_308;
char* start_309;
char* p_310;
char* __result_obj__56;
int is_delim_312;
char* __result_obj__57;
int is_delim_314;
char* __result_obj__58;
next_308 = (void*)0;
start_309 = (void*)0;
p_310 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_308=s;
    }
    if(    next_308==((void*)0)    ) {
        __result_obj__56 = ((void*)0);
        return __result_obj__56;
    }
    start_309=next_308;
    while(    *start_309!=0    ) {
        const char* d_311=delim;
        is_delim_312=0;
        while(        *d_311!=0        ) {
            if(            *start_309==*d_311            ) {
                is_delim_312=1;
                break;
            }
            d_311++;
        }
        if(        !is_delim_312        ) {
            break;
        }
        start_309++;
    }
    if(    *start_309==0    ) {
        next_308=((void*)0);
        __result_obj__57 = ((void*)0);
        return __result_obj__57;
    }
    p_310=start_309;
    while(    *p_310!=0    ) {
        const char* d_313=delim;
        is_delim_314=0;
        while(        *d_313!=0        ) {
            if(            *p_310==*d_313            ) {
                is_delim_314=1;
                break;
            }
            d_313++;
        }
        if(        is_delim_314        ) {
            break;
        }
        p_310++;
    }
    if(    *p_310==0    ) {
        next_308=((void*)0);
    }
    else {
        *p_310=0;
        next_308=p_310+1;
    }
    __result_obj__58 = start_309;
    return __result_obj__58;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_315;
int i_317;
int negative_318;
char* __result_obj__59;
int digit_319;
char* __result_obj__60;
    p_315=buf;
    char tmp_316[32];
    memset(&tmp_316, 0, sizeof(char)    *(32)    );
    i_317=0;
    negative_318=0;
    if(    base<2||base>16    ) {
        *p_315=0;
        __result_obj__59 = p_315;
        return __result_obj__59;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_318=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_319=val_%base;
        tmp_316[i_317++]=(((digit_319<10))?(48+digit_319):(97+digit_319-10));
        val_/=base;
    } while(    val_    );
    if(    negative_318    ) {
        *p_315++=45;
    }
    while(    i_317--    ) {
        *p_315++=tmp_316[i_317];
    }
    *p_315=0;
    __result_obj__60 = buf;
    return __result_obj__60;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_321;
const char* s_322;
unsigned long  int remaining_324;
s_322 = (void*)0;
    char out2_320[512];
    memset(&out2_320, 0, sizeof(char)    *(512)    );
    p_321=out2_320;
    char buf_323[32];
    memset(&buf_323, 0, sizeof(char)    *(32)    );
    remaining_324=sizeof(out2_320);
    for(    ;    *fmt&&remaining_324>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_321++=*fmt;
            remaining_324--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_323,__builtin_va_arg(ap,int),10,1);
            s_322=buf_323;
            break;
            case 117:
            itoa(buf_323,__builtin_va_arg(ap,unsigned int),10,0);
            s_322=buf_323;
            break;
            case 120:
            itoa(buf_323,__builtin_va_arg(ap,unsigned int),16,0);
            s_322=buf_323;
            break;
            case 115:
            s_322=__builtin_va_arg(ap,const char*);
            if(            !s_322            ) {
                s_322="(null)";
            }
            break;
            case 99:
            buf_323[0]=(char)__builtin_va_arg(ap,int);
            buf_323[1]=0;
            s_322=buf_323;
            break;
            case 112:
            strncpy(buf_323,"0x",32);
            itoa(buf_323+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_322=buf_323;
            break;
            case 37:
            buf_323[0]=37;
            buf_323[1]=0;
            s_322=buf_323;
            break;
            default:
            buf_323[0]=37;
            buf_323[1]=*fmt;
            buf_323[2]=0;
            s_322=buf_323;
            break;
        }
        while(        *s_322&&remaining_324>1        ) {
            *p_321++=*s_322++;
            remaining_324--;
        }
    }
    *p_321=0;
    *out=strdup(out2_320);
    return p_321-out2_320;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_325;
char* p_326;
const char* s_327;
unsigned long  int remaining_329;
memset(&ap_325, 0, sizeof(va_list));
s_327 = (void*)0;
    __builtin_va_start(ap_325,fmt);
    p_326=out;
    char buf_328[32];
    memset(&buf_328, 0, sizeof(char)    *(32)    );
    remaining_329=out_size;
    if(    remaining_329==0    ) {
        __builtin_va_end(ap_325);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_329>1            ) {
                *p_326++=*fmt;
                remaining_329--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_327=__builtin_va_arg(ap_325,const char*);
            while(            *s_327&&remaining_329>1            ) {
                *p_326++=*s_327++;
                remaining_329--;
            }
            break;
            case 100:
            itoa(buf_328,__builtin_va_arg(ap_325,int),10,0);
            s_327=buf_328;
            while(            *s_327&&remaining_329>1            ) {
                *p_326++=*s_327++;
                remaining_329--;
            }
            break;
            case 120:
            itoa(buf_328,(unsigned int)__builtin_va_arg(ap_325,int),16,1);
            s_327=buf_328;
            while(            *s_327&&remaining_329>1            ) {
                *p_326++=*s_327++;
                remaining_329--;
            }
            break;
            case 99:
            if(            remaining_329>1            ) {
                *p_326++=(char)__builtin_va_arg(ap_325,int);
                remaining_329--;
            }
            break;
            case 112:
            s_327="0x";
            while(            *s_327&&remaining_329>1            ) {
                *p_326++=*s_327++;
                remaining_329--;
            }
            itoa(buf_328,(long)__builtin_va_arg(ap_325,void*),16,1);
            s_327=buf_328;
            while(            *s_327&&remaining_329>1            ) {
                *p_326++=*s_327++;
                remaining_329--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_328,__builtin_va_arg(ap_325,long),10,1);
                s_327=buf_328;
                while(                *s_327&&remaining_329>1                ) {
                    *p_326++=*s_327++;
                    remaining_329--;
                }
            }
            break;
            default:
            if(            remaining_329>1            ) {
                *p_326++=37;
                remaining_329--;
                if(                remaining_329>1                ) {
                    *p_326++=*fmt;
                    remaining_329--;
                }
            }
            break;
        }
    }
    *p_326=0;
    __builtin_va_end(ap_325);
    return p_326-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
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

void printint(int val_, int base, int sign){
int i_336;
int negative_337;
unsigned int uval_338;
int digit_339;
memset(&uval_338, 0, sizeof(unsigned int));
    char buf_335[33];
    memset(&buf_335, 0, sizeof(char)    *(33)    );
    i_336=0;
    negative_337=0;
    if(    sign&&val_<0    ) {
        negative_337=1;
        uval_338=-val_;
    }
    else {
        uval_338=(unsigned int)val_;
    }
    if(    uval_338==0    ) {
        putchar(48);
        return;
    }
    while(    uval_338>0    ) {
        digit_339=uval_338%base;
        buf_335[i_336++]=((digit_339<10)?(48+digit_339):(97+(digit_339-10)));
        uval_338/=base;
    }
    if(    negative_337    ) {
        putchar(45);
    }
    while(    --i_336>=0    ) {
        putchar(buf_335[i_336]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_341;
int negative_342;
int digit_343;
    char buf_340[65];
    memset(&buf_340, 0, sizeof(char)    *(65)    );
    i_341=0;
    negative_342=0;
    if(    sign&&(long)val_<0    ) {
        negative_342=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_343=val_%base;
        buf_340[i_341++]=((digit_343<10)?(48+digit_343):(97+(digit_343-10)));
        val_/=base;
    }
    if(    negative_342    ) {
        putchar(45);
    }
    while(    --i_341>=0    ) {
        putchar(buf_340[i_341]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_345;
int negative_346;
int digit_347;
    char buf_344[65];
    memset(&buf_344, 0, sizeof(char)    *(65)    );
    i_345=0;
    negative_346=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_346=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_347=val_%base;
        buf_344[i_345++]=((digit_347<10)?(48+digit_347):(97+(digit_347-10)));
        val_/=base;
    }
    if(    negative_346    ) {
        putchar(45);
    }
    while(    --i_345>=0    ) {
        putchar(buf_344[i_345]);
    }
}

int printf(const char* fmt, ...){
va_list ap_348;
const char* p_349;
int lcount_350;
unsigned long  int val__351;
unsigned long  long val__352;
long val__353;
long long val__354;
int i_355;
int val__356;
unsigned int val__357;
unsigned long  int val__358;
char c_360;
memset(&ap_348, 0, sizeof(va_list));
p_349 = (void*)0;
    __builtin_va_start(ap_348,fmt);
    for(    p_349=fmt    ;    *p_349    ;    p_349++    ){
        if(        *p_349!=37        ) {
            putchar(*p_349);
            continue;
        }
        p_349++;
        if(        *p_349==108        ) {
            lcount_350=1;
            if(            *(p_349+1)==108            ) {
                lcount_350=2;
                p_349++;
            }
            p_349++;
            switch (            *p_349) {
                case 120:
                {
                    if(                    lcount_350==1                    ) {
                        val__351=__builtin_va_arg(ap_348,unsigned long  int);
                        printlong(val__351,16,0);
                    }
                    else {
                        val__352=__builtin_va_arg(ap_348,unsigned long  long);
                        printlonglong(val__352,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_350==1                    ) {
                        val__353=__builtin_va_arg(ap_348,long);
                        printlong(val__353,10,1);
                    }
                    else {
                        val__354=__builtin_va_arg(ap_348,long  long);
                        printlonglong(val__354,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_355=0                    ;                    i_355<lcount_350                    ;                    i_355++                    ){
                        putchar(108);
                    }
                    putchar(*p_349);
                    break;
                }
            }
        }
        else {
            switch (            *p_349) {
                case 100:
                {
                    val__356=__builtin_va_arg(ap_348,int);
                    printint(val__356,10,1);
                    break;
                }
                case 120:
                {
                    val__357=__builtin_va_arg(ap_348,unsigned int);
                    printint(val__357,16,0);
                    break;
                }
                case 112:
                {
                    val__358=(unsigned long  int)__builtin_va_arg(ap_348,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__358,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_359=__builtin_va_arg(ap_348,const char*);
                    if(                    !s_359                    ) {
                        s_359="(null)";
                    }
                    while(                    *s_359                    ) {
                        putchar(*s_359++);
                    }
                    break;
                }
                case 99:
                {
                    c_360=(char)__builtin_va_arg(ap_348,int);
                    putchar(c_360);
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
                    putchar(*p_349);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_348);
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
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_361;
int i_362;
void* __right_value35 = (void*)0;
    buf_361=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_361,"%s %d\n",sname,sline);
    for(    i_362=gNumComeStackFrame-2    ;    i_362>=0    ;    i_362--    ){
        buffer_append_format(buf_361,"%s %d #%d\n",gComeStackFrameSName[i_362],gComeStackFrameSLine[i_362],gComeStackFrameID[i_362]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value35=buffer_to_string(buf_361))));
    (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_361, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_363;
    for(    i_363=gNumComeStackFrame-1    ;    i_363>=0    ;    i_363--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_363],gComeStackFrameSLine[i_363],gComeStackFrameID[i_363]);
    }
}

char* come_get_stackframe(){
void* __right_value36 = (void*)0;
char* __result_obj__61;
    __result_obj__61 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(gComeStackFrameBuffer))));
    (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__61 = come_decrement_ref_count(__result_obj__61, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__61;
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
int i_364;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_364=0    ;    i_364<gHeapPages.mSizePages    ;    i_364++    ){
        gHeapPages.mPages[i_364]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_365;
int n_366;
_Bool flag_367;
int i_368;
struct sMemHeaderTiny* it_369;
int n_370;
int i_371;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_365=gAllocMem;
        n_366=0;
        while(        it_365        ) {
            n_366++;
            flag_367=(_Bool)0;
            printf("#%d ",n_366);
            if(            it_365->class_name            ) {
                printf("%p (%s): ",(char*)it_365+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_365->class_name);
            }
            for(            i_368=0            ;            i_368<16            ;            i_368++            ){
                if(                it_365->sname[i_368]                ) {
                    printf("%s %d #%d, ",it_365->sname[i_368],it_365->sline[i_368],it_365->id[i_368]);
                    flag_367=(_Bool)1;
                }
            }
            if(            flag_367            ) {
                puts("");
            }
            it_365=it_365->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_366,gNumAlloc,gNumFree);
    }
    else {
        it_369=(struct sMemHeaderTiny*)gAllocMem;
        n_370=0;
        while(        it_369        ) {
            n_370++;
            if(            it_369->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_370,(char*)it_369+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_369->class_name,it_369->sname,it_369->sline);
            }
            it_369=it_369->next;
        }
        if(        n_370>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_370,gNumAlloc,gNumFree);
        }
    }
    for(    i_371=0    ;    i_371<gHeapPages.mSizePages    ;    i_371++    ){
        free(gHeapPages.mPages[i_371]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_372;
void* __result_obj__62;
    result_372=((void*)0);
    size=(size+7&~7);
    result_372=calloc(1,size);
    __result_obj__62 = result_372;
    return __result_obj__62;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_373;
struct sMemHeader* prev_it_374;
struct sMemHeader* next_it_375;
unsigned long  int size_376;
struct sMemHeaderTiny* it_377;
struct sMemHeaderTiny* prev_it_378;
struct sMemHeaderTiny* next_it_379;
unsigned long  int size_380;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_373=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_373->allocated!=177783            ) {
                return;
            }
            it_373->allocated=0;
            prev_it_374=it_373->prev;
            next_it_375=it_373->next;
            if(            gAllocMem==it_373            ) {
                gAllocMem=next_it_375;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_374                ) {
                    prev_it_374->next=next_it_375;
                }
                if(                next_it_375                ) {
                    next_it_375->prev=prev_it_374;
                }
            }
            size_376=it_373->size;
            free(it_373);
            gNumFree++;
        }
        else {
            it_377=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_377->allocated!=177783            ) {
                return;
            }
            it_377->allocated=0;
            prev_it_378=it_377->prev;
            next_it_379=it_377->next;
            if(            gAllocMem==it_377            ) {
                gAllocMem=(struct sMemHeader*)next_it_379;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_378                ) {
                    prev_it_378->next=next_it_379;
                }
                if(                next_it_379                ) {
                    next_it_379->prev=prev_it_378;
                }
            }
            size_380=it_377->size;
            free(it_377);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_381;
struct sMemHeader* it_382;
int i_383;
int i_384;
void* __result_obj__63;
void* result_385;
struct sMemHeaderTiny* it_386;
void* __result_obj__64;
memset(&i_383, 0, sizeof(int));
memset(&i_384, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_381=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_382=result_381;
        it_382->allocated=177783;
        it_382->size=size+sizeof(struct sMemHeader);
        it_382->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_383=0            ;            i_383<gNumComeStackFrame            ;            i_383++            ){
                it_382->sname[i_383]=gComeStackFrameSName[i_383];
                it_382->sline[i_383]=gComeStackFrameSLine[i_383];
                it_382->id[i_383]=gComeStackFrameID[i_383];
            }
        }
        else {
            for(            i_384=0            ;            i_384<16            ;            i_384++            ){
                it_382->sname[i_384]=gComeStackFrameSName[gNumComeStackFrame-1-i_384];
                it_382->sline[i_384]=gComeStackFrameSLine[gNumComeStackFrame-1-i_384];
                it_382->id[i_384]=gComeStackFrameID[gNumComeStackFrame-1-i_384];
            }
        }
        come_pop_stackframe_v2();
        it_382->next=gAllocMem;
        it_382->prev=((void*)0);
        it_382->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_382;
        }
        gAllocMem=it_382;
        gNumAlloc++;
        __result_obj__63 = (char*)result_381+sizeof(struct sMemHeader);
        return __result_obj__63;
    }
    else {
        result_385=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_386=result_385;
        it_386->allocated=177783;
        it_386->class_name=class_name;
        it_386->sname=sname;
        it_386->sline=sline;
        it_386->size=size+sizeof(struct sMemHeaderTiny);
        it_386->free_next=((void*)0);
        it_386->next=(struct sMemHeaderTiny*)gAllocMem;
        it_386->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_386;
        }
        gAllocMem=(struct sMemHeader*)it_386;
        gNumAlloc++;
        __result_obj__64 = (char*)result_385+sizeof(struct sMemHeaderTiny);
        return __result_obj__64;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_387;
char* __result_obj__65;
struct sMemHeaderTiny* it_388;
char* __result_obj__66;
    if(    gComeDebugLib    ) {
        it_387=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_387->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_387);
            exit(2);
        }
        __result_obj__65 = it_387->class_name;
        return __result_obj__65;
    }
    else {
        it_388=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_388->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_388);
            exit(2);
        }
        __result_obj__66 = it_388->class_name;
        return __result_obj__66;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_389;
int i_390;
struct sMemHeaderTiny* it_391;
    if(    gComeDebugLib    ) {
        it_389=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_389->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_389->class_name        ) {
            printf("(%s): ",it_389->class_name);
        }
        for(        i_390=0        ;        i_390<16        ;        i_390++        ){
            if(            it_389->sname[i_390]            ) {
                printf("%s %d #%d, ",it_389->sname[i_390],it_389->sline[i_390],it_389->id[i_390]);
            }
        }
        puts("");
    }
    else {
        it_391=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_391->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_391->class_name,it_391->sname,it_391->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_392;
unsigned long  int* ref_count_393;
unsigned long  int* size2_394;
void* __result_obj__67;
    mem_392=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_393=(unsigned long  int*)mem_392;
    *ref_count_393=0;
    size2_394=(unsigned long  int*)(mem_392+sizeof(unsigned long  int));
    *size2_394=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__67 = mem_392+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__67;
}

void come_free(void* mem){
unsigned long  int* ref_count_395;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_395=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_395);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__68;
char* mem_396;
unsigned long  int* size_p_397;
unsigned long  int size_398;
void* result_399;
void* __result_obj__69;
    if(    !block    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    mem_396=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_397=(unsigned long  int*)(mem_396+sizeof(unsigned long  int));
    size_398=*size_p_397-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_399=come_calloc_v2(1,size_398,sname,sline,class_name);
    memcpy(result_399,block,size_398);
    __result_obj__69 = result_399;
    return __result_obj__69;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__70;
unsigned long  int* ref_count_400;
void* __result_obj__71;
    if(    mem==((void*)0)    ) {
        __result_obj__70 = mem;
        return __result_obj__70;
    }
    ref_count_400=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_400)++;
    __result_obj__71 = mem;
    return __result_obj__71;
}

void* come_print_ref_count(void* mem){
void* __result_obj__72;
unsigned long  int* ref_count_401;
void* __result_obj__73;
    if(    mem==((void*)0)    ) {
        __result_obj__72 = mem;
        return __result_obj__72;
    }
    ref_count_401=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_401);
    __result_obj__73 = mem;
    return __result_obj__73;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_402;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_402=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_402;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__74;
void* __result_obj__75;
unsigned long  int* ref_count_403;
unsigned long  int count_404;
void (*finalizer_405)(void*);
void* __result_obj__76;
void* __result_obj__77;
memset(&finalizer_405, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__74 = mem;
            return __result_obj__74;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    ref_count_403=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_403)--;
    }
    count_404=*ref_count_403;
    if(    !no_free&&count_404<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_405=protocol_fun;
            finalizer_405(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__76 = ((void*)0);
        return __result_obj__76;
    }
    __result_obj__77 = mem;
    return __result_obj__77;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_406)(void*);
void (*finalizer_407)(void*);
void (*finalizer_408)(void*);
unsigned long  int* ref_count_409;
unsigned long  int count_410;
void (*finalizer_411)(void*);
void (*finalizer_412)(void*);
void (*finalizer_413)(void*);
memset(&finalizer_406, 0, sizeof(void (*)(void*)));
memset(&finalizer_407, 0, sizeof(void (*)(void*)));
memset(&finalizer_408, 0, sizeof(void (*)(void*)));
memset(&finalizer_411, 0, sizeof(void (*)(void*)));
memset(&finalizer_412, 0, sizeof(void (*)(void*)));
memset(&finalizer_413, 0, sizeof(void (*)(void*)));
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
                finalizer_406=protocol_fun;
                finalizer_406(protocol_obj);
            }
            finalizer_407=fun;
            finalizer_407(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_408=protocol_fun;
                finalizer_408(protocol_obj);
            }
        }
    }
    else {
        ref_count_409=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_409)--;
        }
        count_410=*ref_count_409;
        if(        !no_free&&count_410<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_411=protocol_fun;
                        finalizer_411(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_412=fun;
                        finalizer_412(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_413=protocol_fun;
                        finalizer_413(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__78;
int len_414;
void* __right_value37 = (void*)0;
char* result_415;
char* __result_obj__79;
    if(    str==((void*)0)    ) {
        __result_obj__78 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__78;
    }
    len_414=strlen(str)+1;
    result_415=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_414)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_415,str,len_414);
    __result_obj__79 = (char*)come_increment_ref_count(result_415);
    (result_415 = come_decrement_ref_count(result_415, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__79;
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
void* __right_value38 = (void*)0;
char* __result_obj__80;
    __result_obj__80 = (char*)come_increment_ref_count(((char*)(__right_value38=come_get_stackframe())));
    (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__80;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__81;
    __result_obj__81 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__81;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value39 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__82;
    self->size=128;
    __dec_obj11=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2897, "char*"));
    __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__82 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value40 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__83;
    self->size=128;
    __dec_obj12=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2907, "char*"));
    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__84;
void* __right_value41 = (void*)0;
struct buffer* result_416;
void* __right_value42 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__84;
    }
    result_416=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_416->size=self->size;
    __dec_obj13=result_416->buf,
    result_416->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_416->len=self->len;
    memcpy(result_416->buf,self->buf,self->len);
    __result_obj__85 = (struct buffer*)come_increment_ref_count(result_416);
    come_call_finalizer(buffer_finalize, result_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
_Bool __result_obj__86;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__86 = string_equals(((char*)(__right_value43=buffer_to_string(left))),((char*)(__right_value44=buffer_to_string(right))));
    (__right_value43 = come_decrement_ref_count(__right_value43, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__86;
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
struct buffer* __result_obj__87;
void* __right_value45 = (void*)0;
char* old_buf_417;
int old_len_418;
int new_size_419;
void* __right_value46 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__88;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_417=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_417,self->buf,self->size);
        old_len_418=self->len;
        new_size_419=(self->size+size+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_419)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_417,old_len_418);
        self->buf[old_len_418]=0;
        self->size=new_size_419;
        (old_buf_417 = come_decrement_ref_count(old_buf_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__88 = self;
    return __result_obj__88;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__89;
void* __right_value47 = (void*)0;
char* old_buf_420;
int old_len_421;
int new_size_422;
void* __right_value48 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__90;
    if(    self==((void*)0)    ) {
        __result_obj__89 = ((void*)0);
        return __result_obj__89;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_420=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_421=self->len;
        new_size_422=(self->size+10+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_422)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_420,old_len_421);
        self->buf[old_len_421]=0;
        self->size=new_size_422;
        (old_buf_420 = come_decrement_ref_count(old_buf_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__90 = self;
    return __result_obj__90;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__91;
int size_423;
void* __right_value49 = (void*)0;
char* old_buf_424;
int old_len_425;
int new_size_426;
void* __right_value50 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__92;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__91 = self;
        return __result_obj__91;
    }
    size_423=strlen(mem);
    if(    self->len+size_423+1+1>=self->size    ) {
        old_buf_424=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_424,self->buf,self->size);
        old_len_425=self->len;
        new_size_426=(self->size+size_423+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_426)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_424,old_len_425);
        self->buf[old_len_425]=0;
        self->size=new_size_426;
        (old_buf_424 = come_decrement_ref_count(old_buf_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_423);
    self->len+=size_423;
    self->buf[self->len]=0;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__93;
va_list args_427;
char* result_428;
int len_429;
struct buffer* __result_obj__94;
void* __right_value51 = (void*)0;
char* mem_430;
int size_431;
void* __right_value52 = (void*)0;
char* old_buf_432;
int old_len_433;
int new_size_434;
void* __right_value53 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__95;
result_428 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__93 = self;
        return __result_obj__93;
    }
    __builtin_va_start(args_427,msg);
    len_429=vasprintf(&result_428,msg,args_427);
    __builtin_va_end(args_427);
    if(    len_429<0    ) {
        __result_obj__94 = self;
        return __result_obj__94;
    }
    mem_430=(char*)come_increment_ref_count(__builtin_string(result_428));
    size_431=strlen(mem_430);
    if(    self->len+size_431+1+1>=self->size    ) {
        old_buf_432=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_432,self->buf,self->size);
        old_len_433=self->len;
        new_size_434=(self->size+size_431+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_434)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_432,old_len_433);
        self->buf[old_len_433]=0;
        self->size=new_size_434;
        (old_buf_432 = come_decrement_ref_count(old_buf_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_430,size_431);
    self->len+=size_431;
    self->buf[self->len]=0;
    free(result_428);
    __result_obj__95 = self;
    (mem_430 = come_decrement_ref_count(mem_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__95;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__96;
int size_435;
void* __right_value54 = (void*)0;
char* old_buf_436;
int old_len_437;
int new_size_438;
void* __right_value55 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__97;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__96 = self;
        return __result_obj__96;
    }
    size_435=strlen(mem)+1;
    if(    self->len+size_435+1+1+1>=self->size    ) {
        old_buf_436=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_436,self->buf,self->size);
        old_len_437=self->len;
        new_size_438=(self->size+size_435+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_438)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_436,old_len_437);
        self->buf[old_len_437]=0;
        self->size=new_size_438;
        (old_buf_436 = come_decrement_ref_count(old_buf_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_435);
    self->len+=size_435;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__98;
int* mem_439;
int size_440;
void* __right_value56 = (void*)0;
char* old_buf_441;
int old_len_442;
int new_size_443;
void* __right_value57 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__99;
    if(    self==((void*)0)    ) {
        __result_obj__98 = ((void*)0);
        return __result_obj__98;
    }
    mem_439=&value;
    size_440=sizeof(int);
    if(    self->len+size_440+1+1>=self->size    ) {
        old_buf_441=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_441,self->buf,self->size);
        old_len_442=self->len;
        new_size_443=(self->size+size_440+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_443)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_441,old_len_442);
        self->buf[old_len_442]=0;
        self->size=new_size_443;
        (old_buf_441 = come_decrement_ref_count(old_buf_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_439,size_440);
    self->len+=size_440;
    self->buf[self->len]=0;
    __result_obj__99 = self;
    return __result_obj__99;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_444;
int size_445;
void* __right_value58 = (void*)0;
char* old_buf_446;
int old_len_447;
int new_size_448;
void* __right_value59 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__100;
    mem_444=&value;
    size_445=sizeof(long);
    if(    self->len+size_445+1+1>=self->size    ) {
        old_buf_446=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_446,self->buf,self->size);
        old_len_447=self->len;
        new_size_448=(self->size+size_445+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_448)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_446,old_len_447);
        self->buf[old_len_447]=0;
        self->size=new_size_448;
        (old_buf_446 = come_decrement_ref_count(old_buf_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_444,size_445);
    self->len+=size_445;
    self->buf[self->len]=0;
    __result_obj__100 = self;
    return __result_obj__100;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__101;
short* mem_449;
int size_450;
void* __right_value60 = (void*)0;
char* old_buf_451;
int old_len_452;
int new_size_453;
void* __right_value61 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__102;
    if(    self==((void*)0)    ) {
        __result_obj__101 = ((void*)0);
        return __result_obj__101;
    }
    mem_449=&value;
    size_450=sizeof(short);
    if(    self->len+size_450+1+1>=self->size    ) {
        old_buf_451=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_451,self->buf,self->size);
        old_len_452=self->len;
        new_size_453=(self->size+size_450+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_453)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_451,old_len_452);
        self->buf[old_len_452]=0;
        self->size=new_size_453;
        (old_buf_451 = come_decrement_ref_count(old_buf_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_449,size_450);
    self->len+=size_450;
    self->buf[self->len]=0;
    __result_obj__102 = self;
    return __result_obj__102;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__103;
int len_454;
int new_size_455;
void* __right_value62 = (void*)0;
char* __dec_obj22;
int i_456;
struct buffer* __result_obj__104;
    if(    self==((void*)0)    ) {
        __result_obj__103 = ((void*)0);
        return __result_obj__103;
    }
    len_454=self->len;
    len_454=(len_454+3)&~3;
    if(    len_454>=self->size    ) {
        new_size_455=(self->size+1+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_455)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_455;
    }
    for(    i_456=self->len    ;    i_456<len_454    ;    i_456++    ){
        self->buf[i_456]=0;
    }
    self->len=len_454;
    __result_obj__104 = self;
    return __result_obj__104;
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
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* result_457;
struct buffer* __result_obj__105;
struct buffer* __result_obj__106;
    result_457=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__105 = (struct buffer*)come_increment_ref_count(result_457);
        come_call_finalizer(buffer_finalize, result_457, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__105;
    }
    buffer_append_str(result_457,self);
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_457);
    come_call_finalizer(buffer_finalize, result_457, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

char* buffer_to_string(struct buffer* self){
void* __right_value65 = (void*)0;
char* __result_obj__107;
void* __right_value66 = (void*)0;
char* __result_obj__108;
    if(    self==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value65=__builtin_string(""))));
        (__right_value65 = come_decrement_ref_count(__right_value65, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value66=__builtin_string(self->buf))));
    (__right_value66 = come_decrement_ref_count(__right_value66, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__109;
    __result_obj__109 = self->buf;
    return __result_obj__109;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* result_458;
struct buffer* __result_obj__110;
    result_458=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_458,self,sizeof(char)*len);
    __result_obj__110 = (struct buffer*)come_increment_ref_count(result_458);
    come_call_finalizer(buffer_finalize, result_458, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* result_459;
int i_460;
struct buffer* __result_obj__111;
    result_459=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_460=0    ;    i_460<len    ;    i_460++    ){
        buffer_append(result_459,self[i_460],strlen(self[i_460]));
    }
    __result_obj__111 = (struct buffer*)come_increment_ref_count(result_459);
    come_call_finalizer(buffer_finalize, result_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* result_461;
struct buffer* __result_obj__112;
    result_461=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_461,(char*)self,sizeof(short)*len);
    __result_obj__112 = (struct buffer*)come_increment_ref_count(result_461);
    come_call_finalizer(buffer_finalize, result_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* result_462;
struct buffer* __result_obj__113;
    result_462=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_462,(char*)self,sizeof(int)*len);
    __result_obj__113 = (struct buffer*)come_increment_ref_count(result_462);
    come_call_finalizer(buffer_finalize, result_462, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* result_463;
struct buffer* __result_obj__114;
    result_463=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_463,(char*)self,sizeof(long)*len);
    __result_obj__114 = (struct buffer*)come_increment_ref_count(result_463);
    come_call_finalizer(buffer_finalize, result_463, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* result_464;
struct buffer* __result_obj__115;
    result_464=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_464,(char*)self,sizeof(float)*len);
    __result_obj__115 = (struct buffer*)come_increment_ref_count(result_464);
    come_call_finalizer(buffer_finalize, result_464, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* result_465;
struct buffer* __result_obj__116;
    result_465=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_465,(char*)self,sizeof(double)*len);
    __result_obj__116 = (struct buffer*)come_increment_ref_count(result_465);
    come_call_finalizer(buffer_finalize, result_465, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

char* buffer_printable(struct buffer* self){
int len_466;
void* __right_value81 = (void*)0;
char* result_467;
int n_468;
int i_469;
unsigned char c_470;
char* __result_obj__117;
    len_466=self->len;
    result_467=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_466*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_468=0;
    for(    i_469=0    ;    i_469<len_466    ;    i_469++    ){
        c_470=self->buf[i_469];
        if(        (c_470>=0&&c_470<32)||c_470==127        ) {
            result_467[n_468++]=94;
            result_467[n_468++]=c_470+65-1;
        }
        else if(        c_470>127        ) {
            result_467[n_468++]=63;
        }
        else {
            result_467[n_468++]=c_470;
        }
    }
    result_467[n_468]=0;
    __result_obj__117 = (char*)come_increment_ref_count(result_467);
    (result_467 = come_decrement_ref_count(result_467, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_471;
struct list$1char$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_471=0    ;    i_471<num_value    ;    i_471++    ){
        list$1char$_push_back(self,values[i_471]);
    }
    __result_obj__119 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value83 = (void*)0;
struct list_item$1char$* litem_472;
void* __right_value84 = (void*)0;
struct list_item$1char$* litem_473;
void* __right_value85 = (void*)0;
struct list_item$1char$* litem_474;
struct list$1char$* __result_obj__118;
    if(    self->len==0    ) {
        litem_472=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value83=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_472->prev=((void*)0);
        litem_472->next=((void*)0);
        litem_472->item=item;
        self->tail=litem_472;
        self->head=litem_472;
    }
    else if(    self->len==1    ) {
        litem_473=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value84=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_473->prev=self->head;
        litem_473->next=((void*)0);
        litem_473->item=item;
        self->tail=litem_473;
        self->head->next=litem_473;
    }
    else {
        litem_474=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value85=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_474->prev=self->tail;
        litem_474->next=((void*)0);
        litem_474->item=item;
        self->tail->next=litem_474;
        self->tail=litem_474;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_475;
struct list_item$1char$* prev_it_476;
    it_475=self->head;
    while(    it_475!=((void*)0)    ) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1char$* __result_obj__120;
    __result_obj__120 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value86=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3356, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_477;
struct list$1char$p* __result_obj__122;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_477=0    ;    i_477<num_value    ;    i_477++    ){
        list$1char$p_push_back(self,values[i_477]);
    }
    __result_obj__122 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value88 = (void*)0;
struct list_item$1char$p* litem_478;
void* __right_value89 = (void*)0;
struct list_item$1char$p* litem_479;
void* __right_value90 = (void*)0;
struct list_item$1char$p* litem_480;
struct list$1char$p* __result_obj__121;
    if(    self->len==0    ) {
        litem_478=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value88=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_478->prev=((void*)0);
        litem_478->next=((void*)0);
        litem_478->item=item;
        self->tail=litem_478;
        self->head=litem_478;
    }
    else if(    self->len==1    ) {
        litem_479=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value89=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_479->prev=self->head;
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail=litem_479;
        self->head->next=litem_479;
    }
    else {
        litem_480=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value90=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_480->prev=self->tail;
        litem_480->next=((void*)0);
        litem_480->item=item;
        self->tail->next=litem_480;
        self->tail=litem_480;
    }
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_481;
struct list_item$1char$p* prev_it_482;
    it_481=self->head;
    while(    it_481!=((void*)0)    ) {
        prev_it_482=it_481;
        it_481=it_481->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1char$p* __result_obj__123;
    __result_obj__123 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value91=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3361, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__123;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_483;
struct list$1short$* __result_obj__125;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_483=0    ;    i_483<num_value    ;    i_483++    ){
        list$1short$_push_back(self,values[i_483]);
    }
    __result_obj__125 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value93 = (void*)0;
struct list_item$1short$* litem_484;
void* __right_value94 = (void*)0;
struct list_item$1short$* litem_485;
void* __right_value95 = (void*)0;
struct list_item$1short$* litem_486;
struct list$1short$* __result_obj__124;
    if(    self->len==0    ) {
        litem_484=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value93=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_484->prev=((void*)0);
        litem_484->next=((void*)0);
        litem_484->item=item;
        self->tail=litem_484;
        self->head=litem_484;
    }
    else if(    self->len==1    ) {
        litem_485=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value94=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_485->prev=self->head;
        litem_485->next=((void*)0);
        litem_485->item=item;
        self->tail=litem_485;
        self->head->next=litem_485;
    }
    else {
        litem_486=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value95=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_486->prev=self->tail;
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail->next=litem_486;
        self->tail=litem_486;
    }
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_487;
struct list_item$1short$* prev_it_488;
    it_487=self->head;
    while(    it_487!=((void*)0)    ) {
        prev_it_488=it_487;
        it_487=it_487->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_488, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value92 = (void*)0;
void* __right_value96 = (void*)0;
struct list$1short$* __result_obj__126;
    __result_obj__126 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value96=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3366, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_489;
struct list$1int$* __result_obj__128;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_489=0    ;    i_489<num_value    ;    i_489++    ){
        list$1int$_push_back(self,values[i_489]);
    }
    __result_obj__128 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value98 = (void*)0;
struct list_item$1int$* litem_490;
void* __right_value99 = (void*)0;
struct list_item$1int$* litem_491;
void* __right_value100 = (void*)0;
struct list_item$1int$* litem_492;
struct list$1int$* __result_obj__127;
    if(    self->len==0    ) {
        litem_490=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value98=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_490->prev=((void*)0);
        litem_490->next=((void*)0);
        litem_490->item=item;
        self->tail=litem_490;
        self->head=litem_490;
    }
    else if(    self->len==1    ) {
        litem_491=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value99=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_491->prev=self->head;
        litem_491->next=((void*)0);
        litem_491->item=item;
        self->tail=litem_491;
        self->head->next=litem_491;
    }
    else {
        litem_492=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value100=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_492->prev=self->tail;
        litem_492->next=((void*)0);
        litem_492->item=item;
        self->tail->next=litem_492;
        self->tail=litem_492;
    }
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_493;
struct list_item$1int$* prev_it_494;
    it_493=self->head;
    while(    it_493!=((void*)0)    ) {
        prev_it_494=it_493;
        it_493=it_493->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_494, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value97 = (void*)0;
void* __right_value101 = (void*)0;
struct list$1int$* __result_obj__129;
    __result_obj__129 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value101=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3371, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value101, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_495;
struct list$1long$* __result_obj__131;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_495=0    ;    i_495<num_value    ;    i_495++    ){
        list$1long$_push_back(self,values[i_495]);
    }
    __result_obj__131 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value103 = (void*)0;
struct list_item$1long$* litem_496;
void* __right_value104 = (void*)0;
struct list_item$1long$* litem_497;
void* __right_value105 = (void*)0;
struct list_item$1long$* litem_498;
struct list$1long$* __result_obj__130;
    if(    self->len==0    ) {
        litem_496=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value103=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_496->prev=((void*)0);
        litem_496->next=((void*)0);
        litem_496->item=item;
        self->tail=litem_496;
        self->head=litem_496;
    }
    else if(    self->len==1    ) {
        litem_497=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value104=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_497->prev=self->head;
        litem_497->next=((void*)0);
        litem_497->item=item;
        self->tail=litem_497;
        self->head->next=litem_497;
    }
    else {
        litem_498=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value105=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_498->prev=self->tail;
        litem_498->next=((void*)0);
        litem_498->item=item;
        self->tail->next=litem_498;
        self->tail=litem_498;
    }
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_499;
struct list_item$1long$* prev_it_500;
    it_499=self->head;
    while(    it_499!=((void*)0)    ) {
        prev_it_500=it_499;
        it_499=it_499->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value106 = (void*)0;
struct list$1long$* __result_obj__132;
    __result_obj__132 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value106=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3376, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_501;
struct list$1float$* __result_obj__134;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_501=0    ;    i_501<num_value    ;    i_501++    ){
        list$1float$_push_back(self,values[i_501]);
    }
    __result_obj__134 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value108 = (void*)0;
struct list_item$1float$* litem_502;
void* __right_value109 = (void*)0;
struct list_item$1float$* litem_503;
void* __right_value110 = (void*)0;
struct list_item$1float$* litem_504;
struct list$1float$* __result_obj__133;
    if(    self->len==0    ) {
        litem_502=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value108=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_502->prev=((void*)0);
        litem_502->next=((void*)0);
        litem_502->item=item;
        self->tail=litem_502;
        self->head=litem_502;
    }
    else if(    self->len==1    ) {
        litem_503=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value109=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_503->prev=self->head;
        litem_503->next=((void*)0);
        litem_503->item=item;
        self->tail=litem_503;
        self->head->next=litem_503;
    }
    else {
        litem_504=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value110=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_504->prev=self->tail;
        litem_504->next=((void*)0);
        litem_504->item=item;
        self->tail->next=litem_504;
        self->tail=litem_504;
    }
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_505;
struct list_item$1float$* prev_it_506;
    it_505=self->head;
    while(    it_505!=((void*)0)    ) {
        prev_it_506=it_505;
        it_505=it_505->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value107 = (void*)0;
void* __right_value111 = (void*)0;
struct list$1float$* __result_obj__135;
    __result_obj__135 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value111=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3381, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value111, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_507;
struct list$1double$* __result_obj__137;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_507=0    ;    i_507<num_value    ;    i_507++    ){
        list$1double$_push_back(self,values[i_507]);
    }
    __result_obj__137 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value113 = (void*)0;
struct list_item$1double$* litem_508;
void* __right_value114 = (void*)0;
struct list_item$1double$* litem_509;
void* __right_value115 = (void*)0;
struct list_item$1double$* litem_510;
struct list$1double$* __result_obj__136;
    if(    self->len==0    ) {
        litem_508=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value113=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_508->prev=((void*)0);
        litem_508->next=((void*)0);
        litem_508->item=item;
        self->tail=litem_508;
        self->head=litem_508;
    }
    else if(    self->len==1    ) {
        litem_509=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value114=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_509->prev=self->head;
        litem_509->next=((void*)0);
        litem_509->item=item;
        self->tail=litem_509;
        self->head->next=litem_509;
    }
    else {
        litem_510=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value115=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_510->prev=self->tail;
        litem_510->next=((void*)0);
        litem_510->item=item;
        self->tail->next=litem_510;
        self->tail=litem_510;
    }
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_511;
struct list_item$1double$* prev_it_512;
    it_511=self->head;
    while(    it_511!=((void*)0)    ) {
        prev_it_512=it_511;
        it_511=it_511->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_512, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value112 = (void*)0;
void* __right_value116 = (void*)0;
struct list$1double$* __result_obj__138;
    __result_obj__138 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value116=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3386, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value116, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
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
void* __right_value117 = (void*)0;
char* __result_obj__139;
int len_513;
void* __right_value118 = (void*)0;
char* result_514;
char* __result_obj__140;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    len_513=strlen(self)+strlen(right);
    result_514=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_513+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_514,self,len_513+1);
    strncat(result_514,right,len_513+1);
    __result_obj__140 = (char*)come_increment_ref_count(result_514);
    (result_514 = come_decrement_ref_count(result_514, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* string_operator_add(char* self, char* right){
void* __right_value119 = (void*)0;
char* __result_obj__141;
int len_515;
void* __right_value120 = (void*)0;
char* result_516;
char* __result_obj__142;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    len_515=strlen(self)+strlen(right);
    result_516=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_515+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_516,self,len_515+1);
    strncat(result_516,right,len_515+1);
    __result_obj__142 = (char*)come_increment_ref_count(result_516);
    (result_516 = come_decrement_ref_count(result_516, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* charp_operator_mult(char* self, int right){
void* __right_value121 = (void*)0;
char* __result_obj__143;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct buffer* buf_517;
int i_518;
void* __right_value124 = (void*)0;
char* __result_obj__144;
    if(    self==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    buf_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_518=0    ;    i_518<right    ;    i_518++    ){
        buffer_append_str(buf_517,self);
    }
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value124=buffer_to_string(buf_517))));
    come_call_finalizer(buffer_finalize, buf_517, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* string_operator_mult(char* self, int right){
void* __right_value125 = (void*)0;
char* __result_obj__145;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct buffer* buf_519;
int i_520;
void* __right_value128 = (void*)0;
char* __result_obj__146;
    if(    self==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    buf_519=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_520=0    ;    i_520<right    ;    i_520++    ){
        buffer_append_str(buf_519,self);
    }
    __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value128=buffer_to_string(buf_519))));
    come_call_finalizer(buffer_finalize, buf_519, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_521;
int i_522;
    result_521=(_Bool)0;
    for(    i_522=0    ;    i_522<len    ;    i_522++    ){
        if(        strncmp(self[i_522],str,strlen(self[i_522]))==0        ) {
            result_521=(_Bool)1;
            break;
        }
    }
    return result_521;
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
int result_523;
char* p_524;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_523=0;
    p_524=value;
    while(    *p_524    ) {
        result_523+=(*p_524);
        p_524++;
    }
    return result_523;
}

unsigned int string_get_hash_key(char* value){
int result_525;
char* p_526;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_525=0;
    p_526=value;
    while(    *p_526    ) {
        result_525+=(*p_526);
        p_526++;
    }
    return result_525;
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
_Bool result_527;
    result_527=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_527;
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
_Bool result_528;
    result_528=(c>=32&&c<=126);
    return result_528;
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
void* __right_value129 = (void*)0;
char* __result_obj__147;
int len_529;
void* __right_value130 = (void*)0;
char* result_530;
int i_531;
char* __result_obj__148;
    if(    str==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    len_529=strlen(str);
    result_530=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_529+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_531=0    ;    i_531<len_529    ;    i_531++    ){
        result_530[i_531]=str[len_529-i_531-1];
    }
    result_530[len_529]=0;
    __result_obj__148 = (char*)come_increment_ref_count(result_530);
    (result_530 = come_decrement_ref_count(result_530, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value131 = (void*)0;
char* __result_obj__149;
int len_532;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
char* __result_obj__150;
void* __right_value134 = (void*)0;
char* __result_obj__151;
void* __right_value135 = (void*)0;
char* __result_obj__152;
void* __right_value136 = (void*)0;
char* result_533;
char* __result_obj__153;
    if(    str==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value131=__builtin_string(""))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    len_532=strlen(str);
    if(    head<0    ) {
        head+=len_532;
    }
    if(    tail<0    ) {
        tail+=len_532+1;
    }
    if(    head>tail    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value133=charp_reverse(((char*)(__right_value132=charp_substring(str,tail,head)))))));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_532    ) {
        tail=len_532;
    }
    if(    head==tail    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(""))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    if(    tail-head+1<1    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(""))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    result_533=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_533,str+head,tail-head);
    result_533[tail-head]=0;
    __result_obj__153 = (char*)come_increment_ref_count(result_533);
    (result_533 = come_decrement_ref_count(result_533, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value137 = (void*)0;
char* __result_obj__154;
int len_534;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
char* __result_obj__155;
void* __right_value140 = (void*)0;
char* __result_obj__156;
void* __right_value141 = (void*)0;
char* __result_obj__157;
void* __right_value142 = (void*)0;
char* result_535;
char* __result_obj__158;
    if(    str==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(""))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    len_534=strlen(str);
    if(    head<0    ) {
        head+=len_534;
    }
    if(    tail<0    ) {
        tail+=len_534+1;
    }
    if(    head>tail    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value139=charp_reverse(((char*)(__right_value138=charp_substring(str,tail,head)))))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_534    ) {
        tail=len_534;
    }
    if(    head==tail    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    if(    tail-head+1<1    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    result_535=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_535,str+head,tail-head);
    result_535[tail-head]=0;
    __result_obj__158 = (char*)come_increment_ref_count(result_535);
    (result_535 = come_decrement_ref_count(result_535, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value143 = (void*)0;
char* __result_obj__159;
int len_536;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
char* __result_obj__160;
void* __right_value146 = (void*)0;
char* __result_obj__161;
void* __right_value147 = (void*)0;
char* __result_obj__162;
void* __right_value148 = (void*)0;
char* result_537;
char* __result_obj__163;
    if(    str==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    len_536=strlen(str);
    if(    head<0    ) {
        head+=len_536;
    }
    if(    tail<0    ) {
        tail+=len_536+1;
    }
    if(    head>tail    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value145=charp_reverse(((char*)(__right_value144=charp_substring(str,tail,head)))))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_536    ) {
        tail=len_536;
    }
    if(    head==tail    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    if(    tail-head+1<1    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    result_537=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_537,str+head,tail-head);
    result_537[tail-head]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_537);
    (result_537 = come_decrement_ref_count(result_537, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* xsprintf(char* msg, ...){
void* __right_value149 = (void*)0;
char* __result_obj__164;
va_list args_538;
char* result_539;
int len_540;
void* __right_value150 = (void*)0;
char* __result_obj__165;
void* __right_value151 = (void*)0;
char* result2_541;
char* __result_obj__166;
result_539 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    __builtin_va_start(args_538,msg);
    len_540=vasprintf(&result_539,msg,args_538);
    __builtin_va_end(args_538);
    if(    len_540<0    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    result2_541=(char*)come_increment_ref_count(__builtin_string(result_539));
    free(result_539);
    __result_obj__166 = (char*)come_increment_ref_count(result2_541);
    (result2_541 = come_decrement_ref_count(result2_541, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value152 = (void*)0;
char* __result_obj__167;
int len_542;
void* __right_value153 = (void*)0;
char* __result_obj__168;
void* __right_value154 = (void*)0;
char* __result_obj__169;
void* __right_value155 = (void*)0;
char* result_543;
char* __result_obj__170;
    if(    str==((void*)0)    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    len_542=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(str))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    if(    head<0    ) {
        head+=len_542;
    }
    if(    tail<0    ) {
        tail+=len_542+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(str))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    if(    tail>=len_542    ) {
        tail=len_542;
    }
    result_543=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_542-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_543,str,head);
    memcpy(result_543+head,str+tail,len_542-tail);
    result_543[len_542-(tail-head)]=0;
    __result_obj__170 = (char*)come_increment_ref_count(result_543);
    (result_543 = come_decrement_ref_count(result_543, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__171;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_544;
struct list_item$1char$ph* prev_it_545;
    it_544=self->head;
    while(    it_544!=((void*)0)    ) {
        prev_it_545=it_544;
        it_544=it_544->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_545, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value162 = (void*)0;
struct list_item$1char$ph* litem_549;
char* __dec_obj23;
void* __right_value163 = (void*)0;
struct list_item$1char$ph* litem_550;
char* __dec_obj24;
void* __right_value164 = (void*)0;
struct list_item$1char$ph* litem_551;
char* __dec_obj25;
struct list$1char$ph* __result_obj__173;
    if(    self->len==0    ) {
        litem_549=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value162=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_549->prev=((void*)0);
        litem_549->next=((void*)0);
        __dec_obj23=litem_549->item,
        litem_549->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_549;
        self->head=litem_549;
    }
    else if(    self->len==1    ) {
        litem_550=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value163=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_550->prev=self->head;
        litem_550->next=((void*)0);
        __dec_obj24=litem_550->item,
        litem_550->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_550;
        self->head->next=litem_550;
    }
    else {
        litem_551=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value164=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_551->prev=self->tail;
        litem_551->next=((void*)0);
        __dec_obj25=litem_551->item,
        litem_551->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_551;
        self->tail=litem_551;
    }
    self->len++;
    __result_obj__173 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__173;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct list$1char$ph* __result_obj__172;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct list$1char$ph* result_546;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct buffer* str_547;
int i_548;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct list$1char$ph* __result_obj__174;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value157=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value157, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__172;
    }
    result_546=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_548=0    ;    i_548<charp_length(self)    ;    i_548++    ){
        if(        self[i_548]==c        ) {
            list$1char$ph_push_back(result_546,(char*)come_increment_ref_count(__builtin_string(str_547->buf)));
            buffer_reset(str_547);
        }
        else {
            buffer_append_char(str_547,self[i_548]);
        }
    }
    if(    buffer_length(str_547)!=0    ) {
        list$1char$ph_push_back(result_546,(char*)come_increment_ref_count(__builtin_string(str_547->buf)));
    }
    __result_obj__174 = (struct list$1char$ph*)come_increment_ref_count(result_546);
    come_call_finalizer(list$1char$ph$p_finalize, result_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__174;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value167 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf(msg,self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value168 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value168=xsprintf(msg,self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* charp_printable(char* str){
int len_552;
void* __right_value169 = (void*)0;
char* result_553;
int n_554;
int i_555;
char c_556;
char* __result_obj__177;
    len_552=charp_length(str);
    result_553=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_552*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_554=0;
    for(    i_555=0    ;    i_555<len_552    ;    i_555++    ){
        c_556=str[i_555];
        if(        (c_556>=0&&c_556<32)||c_556==127        ) {
            result_553[n_554++]=94;
            result_553[n_554++]=c_556+65-1;
        }
        else {
            result_553[n_554++]=c_556;
        }
    }
    result_553[n_554]=0;
    __result_obj__177 = (char*)come_increment_ref_count(result_553);
    (result_553 = come_decrement_ref_count(result_553, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value170 = (void*)0;
char* __result_obj__178;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct buffer* result_557;
char* p_558;
char* p2_559;
void* __right_value173 = (void*)0;
char* __result_obj__179;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    result_557=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_558=self;
    while(    (_Bool)1    ) {
        p2_559=strstr(p_558,str);
        if(        p2_559==((void*)0)        ) {
            p2_559=p_558;
            while(            *p2_559            ) {
                p2_559++;
            }
            buffer_append(result_557,p_558,p2_559-p_558);
            break;
        }
        buffer_append(result_557,p_558,p2_559-p_558);
        buffer_append_str(result_557,replace);
        p_558=p2_559+strlen(str);
    }
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value173=buffer_to_string(result_557))));
    come_call_finalizer(buffer_finalize, result_557, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* xbasename(char* path){
void* __right_value174 = (void*)0;
char* __result_obj__180;
char* p_560;
void* __right_value175 = (void*)0;
char* __result_obj__181;
void* __right_value176 = (void*)0;
char* __result_obj__182;
void* __right_value177 = (void*)0;
char* __result_obj__183;
    if(    path==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    p_560=path+strlen(path);
    while(    p_560>=path    ) {
        if(        *p_560==47        ) {
            break;
        }
        else {
            p_560--;
        }
    }
    if(    p_560<path    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(path))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    else {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(p_560+1))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
}

char* xnoextname(char* path){
void* __right_value178 = (void*)0;
char* __result_obj__184;
void* __right_value179 = (void*)0;
char* path2_561;
char* p_562;
void* __right_value180 = (void*)0;
char* __result_obj__185;
void* __right_value181 = (void*)0;
char* __result_obj__186;
void* __right_value182 = (void*)0;
char* __result_obj__187;
    if(    path==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string(""))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    path2_561=(char*)come_increment_ref_count(xbasename(path));
    p_562=path2_561+strlen(path2_561);
    while(    p_562>=path2_561    ) {
        if(        *p_562==46        ) {
            break;
        }
        else {
            p_562--;
        }
    }
    if(    p_562<path2_561    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(path2_561))));
        (path2_561 = come_decrement_ref_count(path2_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    else {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value181=charp_substring(path2_561,0,p_562-path2_561))));
        (path2_561 = come_decrement_ref_count(path2_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(""))));
    (path2_561 = come_decrement_ref_count(path2_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

char* xextname(char* path){
void* __right_value183 = (void*)0;
char* __result_obj__188;
char* p_563;
void* __right_value184 = (void*)0;
char* __result_obj__189;
void* __right_value185 = (void*)0;
char* __result_obj__190;
void* __right_value186 = (void*)0;
char* __result_obj__191;
    if(    path==((void*)0)    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value183=__builtin_string(""))));
        (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    p_563=path+strlen(path);
    while(    p_563>=path    ) {
        if(        *p_563==46        ) {
            break;
        }
        else {
            p_563--;
        }
    }
    if(    p_563<path    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string(path))));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    else {
        __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value185=__builtin_string(p_563+1))));
        (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__190;
    }
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string(""))));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* bool_to_string(_Bool self){
void* __right_value187 = (void*)0;
char* __result_obj__192;
void* __right_value188 = (void*)0;
char* __result_obj__193;
    if(    self    ) {
        __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string("true"))));
        (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__192;
    }
    else {
        __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string("false"))));
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__193;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value189 = (void*)0;
char* __result_obj__194;
void* __right_value190 = (void*)0;
char* __result_obj__195;
    if(    self    ) {
        __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string("true"))));
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__194;
    }
    else {
        __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string("false"))));
        (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__195;
    }
}

char* char_to_string(char self){
void* __right_value191 = (void*)0;
char* __result_obj__196;
    __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value191=xsprintf("%c",self))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__196;
}

char* short_to_string(short self){
void* __right_value192 = (void*)0;
char* __result_obj__197;
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value192=xsprintf("%d",self))));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* int_to_string(int self){
void* __right_value193 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value193=xsprintf("%d",self))));
    (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__198;
}

char* long_to_string(long self){
void* __right_value194 = (void*)0;
char* __result_obj__199;
    __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value194=xsprintf("%ld",self))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__199;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value195 = (void*)0;
char* __result_obj__200;
    __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value195=xsprintf("%ld",self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__200;
}

char* float_to_string(float self){
void* __right_value196 = (void*)0;
char* __result_obj__201;
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value196=xsprintf("%f",self))));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
}

char* double_to_string(double self){
void* __right_value197 = (void*)0;
char* __result_obj__202;
    __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value197=xsprintf("%lf",self))));
    (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__202;
}

char* string_to_string(char* self){
void* __right_value198 = (void*)0;
char* __result_obj__203;
void* __right_value199 = (void*)0;
char* __result_obj__204;
    if(    self==((void*)0)    ) {
        __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value198=__builtin_string(""))));
        (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__203;
    }
    __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value199=__builtin_string(self))));
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__204;
}

char* charp_to_string(char* self){
void* __right_value200 = (void*)0;
char* __result_obj__205;
void* __right_value201 = (void*)0;
char* __result_obj__206;
    if(    self==((void*)0)    ) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value200=__builtin_string(""))));
        (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__205;
    }
    __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string(self))));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__206;
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
void* __right_value202 = (void*)0;
char* __result_obj__207;
void* __right_value203 = (void*)0;
char* __result_obj__208;
    if(    self==((void*)0)    ) {
        __result_obj__207 = (char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string(""))));
        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__207;
    }
    puts(self);
    __result_obj__208 = (char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(self))));
    (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__208;
}

char* charp_print(char* self){
void* __right_value204 = (void*)0;
char* __result_obj__209;
void* __right_value205 = (void*)0;
char* __result_obj__210;
    if(    self==((void*)0)    ) {
        __result_obj__209 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string(""))));
        (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__209;
    }
    printf("%s",self);
    __result_obj__210 = (char*)come_increment_ref_count(((char*)(__right_value205=__builtin_string(self))));
    (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__210;
}

char* charp_printf(char* self, ...){
void* __right_value206 = (void*)0;
char* __result_obj__211;
char* msg2_564;
va_list args_565;
void* __right_value207 = (void*)0;
char* __result_obj__212;
msg2_564 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value206=__builtin_string(""))));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__211;
    }
    __builtin_va_start(args_565,self);
    vasprintf(&msg2_564,self,args_565);
    __builtin_va_end(args_565);
    printf("%s",msg2_564);
    free(msg2_564);
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(self))));
    (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__212;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_566;
    for(    i_566=0    ;    i_566<self    ;    i_566++    ){
        block(parent,i_566);
    }
}

