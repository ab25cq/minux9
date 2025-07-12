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
static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position);
static void proc_finalize(struct proc* self);
static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position);
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
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX303, unsigned long  int anonymous_var_nameX304, unsigned long  int anonymous_var_nameX305, unsigned long  long anonymous_var_nameX306);
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
unsigned long  long x_99;
memset(&x_99, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_99));
    return x_99;
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
unsigned long  long x_269;
memset(&x_269, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_269));
    return x_269;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_270;
memset(&sp_val_270, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_270): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_270;
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
unsigned long  long* pagetable_63;
struct elfhdr* eh_64;
struct proghdr* ph_65;
unsigned long  long size_66;
unsigned long  long va_67;
int i_68;
void* pa_69;
void* __right_value1 = (void*)0;
struct proc* parent_70;
unsigned long  long parent_current_77;
unsigned long  long parent_stack_top_78;
char* src_79;
char* pa_80;
void* __right_value2 = (void*)0;
struct proc* parent_81;
char* pa_82;
    result_62=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 791, "struct proc*"));
    result_62->program=hello_elf;
    pagetable_63=(unsigned long  long*)kalloc();
    memset(pagetable_63,0,4096);
    setting_user_pagetable(result_62,pagetable_63);
    result_62->pagetable=pagetable_63;
    eh_64=(struct elfhdr*)hello_elf;
    if(    eh_64->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_65=(struct proghdr*)(hello_elf+eh_64->phoff);
    size_66=ph_65->filesz;
    result_62->vaddr=(((ph_65->vaddr))&~(4096-1));
    va_67=0;
    for(    i_68=0    ;    i_68<eh_64->phnum    ;    i_68++,ph_65++    ){
        if(        ph_65->type!=1        ) {
            continue;
        }
        for(        va_67=(((ph_65->vaddr))&~(4096-1))        ;        va_67<ph_65->vaddr+ph_65->memsz        ;        va_67+=4096        ){
            pa_69=kalloc();
            if(            !pa_69            ) {
                panic("kalloc");
            }
            memset(pa_69,0,4096);
            mappages(result_62->pagetable,va_67,4096,(unsigned long  long)pa_69,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_62->pagetable,ph_65->vaddr,hello_elf+ph_65->off,ph_65->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_70=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_77=parent_70->context.sp;
        parent_stack_top_78=(unsigned long  long)parent_70->stack_top;
        src_79=walkaddr(parent_70->pagetable,parent_stack_top_78);
        pa_80=kalloc();
        if(        !pa_80        ) {
            panic("fork sp");
        }
        memmove(pa_80,(void*)src_79,4096);
        mappages(result_62->pagetable,va_67,4096,(unsigned long  long)pa_80,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_62->stack=(char*)va_67+4096;
        result_62->stack_top=(char*)va_67;
        result_62->context.sp=parent_70->context.sp;
        result_62->file_table=fs_init();
        *result_62->file_table=*get_current_file_table();
    }
    else {
        parent_81=((struct proc*)(__right_value2=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value2, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        pa_82=kalloc();
        if(        !pa_82        ) {
            panic("kalloc");
        }
        memset(pa_82,0,4096);
        mappages(result_62->pagetable,va_67,4096,(unsigned long  long)pa_82,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_62->stack=(char*)va_67+4096;
        result_62->stack_top=(char*)va_67;
        result_62->context.sp=va_67+4096;
        result_62->file_table=fs_init();
    }
    result_62->context.mepc=eh_64->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_62));
    come_call_finalizer(proc_finalize, result_62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_71;
int i_72;
struct proc* __result_obj__14;
struct proc* default_value_73;
struct proc* __result_obj__15;
default_value_73 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_71=self->head;
    i_72=0;
    while(    it_71!=((void*)0)    ) {
        if(        position==i_72        ) {
            __result_obj__14 = (struct proc*)come_increment_ref_count(it_71->item);
            come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__14;
        }
        it_71=it_71->next;
        i_72++;
    }
    memset(&default_value_73,0,sizeof(struct proc*));
    __result_obj__15 = (struct proc*)come_increment_ref_count(default_value_73);
    come_call_finalizer(proc_finalize, default_value_73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__15;
}

static void proc_finalize(struct proc* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_74;
int i_75;
struct proc* __result_obj__16;
struct proc* default_value_76;
struct proc* __result_obj__17;
default_value_76 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_74=self->head;
    i_75=0;
    while(    it_74!=((void*)0)    ) {
        if(        position==i_75        ) {
            __result_obj__16 = (struct proc*)come_increment_ref_count(it_74->item);
            come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__16;
        }
        it_74=it_74->next;
        i_75++;
    }
    memset(&default_value_76,0,sizeof(struct proc*));
    __result_obj__17 = (struct proc*)come_increment_ref_count(default_value_76);
    come_call_finalizer(proc_finalize, default_value_76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value3 = (void*)0;
struct list_item$1proc$ph* litem_83;
struct proc* __dec_obj1;
void* __right_value4 = (void*)0;
struct list_item$1proc$ph* litem_84;
struct proc* __dec_obj2;
void* __right_value5 = (void*)0;
struct list_item$1proc$ph* litem_85;
struct proc* __dec_obj3;
struct list$1proc$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_83=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value3=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj1=litem_83->item,
        litem_83->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1    ) {
        litem_84=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value4=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj2=litem_84->item,
        litem_84->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value5=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj3=litem_85->item,
        litem_85->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_86;
unsigned long  long* __result_obj__19;
unsigned long  long* __result_obj__20;
pagetable_86 = (void*)0;
    pagetable_86=(unsigned long  long*)kalloc();
    if(    pagetable_86==0    ) {
        __result_obj__19 = (unsigned long  long*)0;
        return __result_obj__19;
    }
    memset(pagetable_86,0,4096);
    __result_obj__20 = pagetable_86;
    return __result_obj__20;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__87;
unsigned long  long* __result_obj__21;
unsigned long  long addr_88;
unsigned long  long* pte_89;
unsigned long  long pa_90;
unsigned int flags_91;
char* mem_92;
unsigned long  long* __result_obj__22;
new__87 = (void*)0;
    new__87=uvmcreate();
    if(    new__87==0    ) {
        __result_obj__21 = (unsigned long  long*)0;
        return __result_obj__21;
    }
    for(    addr_88=0    ;    addr_88<sz    ;    addr_88+=4096    ){
        pte_89=walk(old,addr_88,0);
        if(        !pte_89||!(*pte_89&(1L<<0))        ) {
            continue;
        }
        pa_90=(((*pte_89)>>10)<<12);
        flags_91=((*pte_89)&1023);
        mem_92=kalloc();
        if(        mem_92==0        ) {
            panic("coypuvm");
        }
        memmove(mem_92,(char*)pa_90,4096);
        if(        mappages(new__87,addr_88,4096,((((unsigned long  long)mem_92)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_92);
            panic("copyuvm");
        }
    }
    __result_obj__22 = new__87;
    return __result_obj__22;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_93;
unsigned long  long pte_94;
unsigned long  long pa_95;
unsigned long  long* child_96;
    for(    i_93=0    ;    i_93<512    ;    i_93++    ){
        pte_94=pagetable[i_93];
        if(        !(pte_94&(1L<<0))        ) {
            continue;
        }
        pa_95=(((pte_94)>>10)<<12);
        if(        pte_94&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_95);
            }
        }
        else if(        level>0        ) {
            child_96=(unsigned long  long*)pa_95;
            free_pagetable(child_96,level-1);
            kfree(child_96);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value6 = (void*)0;
struct file* __result_obj__23;
    __result_obj__23 = ((struct proc*)(__right_value6=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value6, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__23;
}

void exec_prog(char* hello_elf){
void* __right_value7 = (void*)0;
struct proc* parent_proc_97;
struct file* old_file_table_98;
    parent_proc_97=((struct proc*)(__right_value7=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value7, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    parent_proc_97->zombie=1;
    old_file_table_98=parent_proc_97->file_table;
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
unsigned long  int x_100;
memset(&x_100, 0, sizeof(unsigned long  int));
    x_100=r_sie();
    x_100|=(1UL<<5);
    w_sie(x_100);
    x_100=r_sstatus();
    x_100|=(1UL<<1);
    w_sstatus(x_100);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_101;
    next_101=r_time()+10000UL;
    w_stimecmp(next_101);
}

void timer_handler(){
void* __right_value8 = (void*)0;
struct proc* p_102;
struct context_t* tf_103;
int old_active_proc_104;
void* __right_value9 = (void*)0;
struct proc* old_105;
void* __right_value10 = (void*)0;
struct proc* new__106;
unsigned long  long a0_107;
    disable_timer_interrupts();
    p_102=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_103=(struct context_t*)TRAPFRAME;
    p_102->context=*tf_103;
    timer_reset();
    old_active_proc_104=gActiveProc;
    old_105=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__106=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__106!=old_105&&new__106->zombie==0    ) {
        user_sp=new__106->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__106->pagetable)>>12));
        old_105->context=*(struct context_t*)TRAPFRAME;
        a0_107=new__106->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_107));
        swtch(&new__106->context);
    }
    else {
        gActiveProc=old_active_proc_104;
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
struct context_t* trapframe_108;
unsigned long  int arg0_109;
unsigned long  int arg1_110;
unsigned long  int arg2_111;
unsigned long  int arg3_112;
unsigned long  int arg4_113;
unsigned long  int arg5_114;
unsigned long  int arg6_115;
unsigned long  int arg_syscall_no_116;
int fd_117;
unsigned long  long user_va_119;
int len_120;
void* __right_value11 = (void*)0;
struct proc* p_121;
int ret_122;
int i_123;
    trapframe_108=(struct context_t*)TRAPFRAME;
    arg0_109=trapframe_108->a0;
    arg1_110=trapframe_108->a1;
    arg2_111=trapframe_108->a2;
    arg3_112=trapframe_108->a3;
    arg4_113=trapframe_108->a4;
    arg5_114=trapframe_108->a5;
    arg6_115=trapframe_108->a6;
    arg_syscall_no_116=trapframe_108->a7;
    fd_117=arg0_109;
    char kernel_buf_118[256];
    memset(&kernel_buf_118, 0, sizeof(char)    *(256)    );
    user_va_119=arg1_110;
    len_120=arg2_111;
    memset(kernel_buf_118,0,256);
    p_121=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_122=copyin(p_121->pagetable,kernel_buf_118,user_va_119,len_120);
    if(    ret_122<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_117)    ) {
        pipewrite(fd_117,kernel_buf_118,len_120);
    }
    else if(    is_stdout(fd_117)    ) {
        for(        i_123=0        ;        i_123<len_120        ;        i_123++        ){
            putchar(kernel_buf_118[i_123]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_124;
unsigned long  int arg0_125;
unsigned long  int arg1_126;
unsigned long  int arg2_127;
unsigned long  int arg3_128;
unsigned long  int arg4_129;
unsigned long  int arg5_130;
unsigned long  int arg6_131;
unsigned long  int arg_syscall_no_132;
void* __right_value12 = (void*)0;
struct proc* p_133;
    trapframe_124=(struct context_t*)TRAPFRAME;
    arg0_125=trapframe_124->a0;
    arg1_126=trapframe_124->a1;
    arg2_127=trapframe_124->a2;
    arg3_128=trapframe_124->a3;
    arg4_129=trapframe_124->a4;
    arg5_130=trapframe_124->a5;
    arg6_131=trapframe_124->a6;
    arg_syscall_no_132=trapframe_124->a7;
    p_133=((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_133->xstatus=arg0_125;
    p_133->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_134;
unsigned long  int arg0_135;
unsigned long  int arg1_136;
unsigned long  int arg2_137;
unsigned long  int arg3_138;
unsigned long  int arg4_139;
unsigned long  int arg5_140;
unsigned long  int arg6_141;
unsigned long  int arg_syscall_no_142;
int* status_va_143;
void* __right_value13 = (void*)0;
struct proc* p_144;
int exit_status_145;
int child_pid_146;
int n_147;
struct list$1proc$ph* o2_saved_148;
struct proc* it_151;
    trapframe_134=(struct context_t*)TRAPFRAME;
    arg0_135=trapframe_134->a0;
    arg1_136=trapframe_134->a1;
    arg2_137=trapframe_134->a2;
    arg3_138=trapframe_134->a3;
    arg4_139=trapframe_134->a4;
    arg5_140=trapframe_134->a5;
    arg6_141=trapframe_134->a6;
    arg_syscall_no_142=trapframe_134->a7;
    status_va_143=(int*)arg0_135;
    p_144=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_145=0;
    child_pid_146=-1;
    while(    child_pid_146==-1    ) {
        timer_handler();
        n_147=0;
        for(        o2_saved_148=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_151=list$1proc$ph_begin((o2_saved_148))        ;        !list$1proc$ph_end((o2_saved_148))        ;        it_151=list$1proc$ph_next((o2_saved_148))        ){
            if(            it_151->zombie            ) {
                exit_status_145=it_151->xstatus;
                child_pid_146=n_147;
                list$1proc$ph_remove_by_pointer(gProc,it_151);
                break;
            }
            n_147++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_144->pagetable,(unsigned long  long)status_va_143,(void*)&exit_status_145,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_146;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_149;
struct proc* __result_obj__24;
struct proc* __result_obj__25;
struct proc* result_150;
struct proc* __result_obj__26;
result_149 = (void*)0;
result_150 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_149,0,sizeof(struct proc*));
        __result_obj__24 = result_149;
        return __result_obj__24;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__25 = self->it->item;
        return __result_obj__25;
    }
    memset(&result_150,0,sizeof(struct proc*));
    __result_obj__26 = result_150;
    return __result_obj__26;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_152;
struct proc* __result_obj__27;
struct proc* __result_obj__28;
struct proc* result_153;
struct proc* __result_obj__29;
result_152 = (void*)0;
result_153 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_152,0,sizeof(struct proc*));
        __result_obj__27 = result_152;
        return __result_obj__27;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_153,0,sizeof(struct proc*));
    __result_obj__29 = result_153;
    return __result_obj__29;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_154;
struct list_item$1proc$ph* it_155;
struct list$1proc$ph* __result_obj__33;
    it2_154=0;
    it_155=self->head;
    while(    it_155!=((void*)0)    ) {
        if(        it_155->item==item        ) {
            list$1proc$ph_delete(self,it2_154,it2_154+1);
            break;
        }
        it2_154++;
        it_155=it_155->next;
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_156;
struct list$1proc$ph* __result_obj__30;
struct list_item$1proc$ph* it_159;
int i_160;
struct list_item$1proc$ph* prev_it_161;
struct list_item$1proc$ph* it_162;
int i_163;
struct list_item$1proc$ph* prev_it_164;
struct list_item$1proc$ph* it_165;
struct list_item$1proc$ph* head_prev_it_166;
struct list_item$1proc$ph* tail_it_167;
int i_168;
struct list_item$1proc$ph* prev_it_169;
struct list$1proc$ph* __result_obj__32;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_156=tail;
        tail=head;
        head=tmp_156;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__30 = self;
        return __result_obj__30;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_159=self->head;
        i_160=0;
        while(        it_159!=((void*)0)        ) {
            if(            i_160<tail            ) {
                prev_it_161=it_159;
                it_159=it_159->next;
                i_160++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_160==tail            ) {
                self->head=it_159;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_159=it_159->next;
                i_160++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_162=self->head;
        i_163=0;
        while(        it_162!=((void*)0)        ) {
            if(            i_163==head            ) {
                self->tail=it_162->prev;
                self->tail->next=((void*)0);
            }
            if(            i_163>=head            ) {
                prev_it_164=it_162;
                it_162=it_162->next;
                i_163++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_162=it_162->next;
                i_163++;
            }
        }
    }
    else {
        it_165=self->head;
        head_prev_it_166=((void*)0);
        tail_it_167=((void*)0);
        i_168=0;
        while(        it_165!=((void*)0)        ) {
            if(            i_168==head            ) {
                head_prev_it_166=it_165->prev;
            }
            if(            i_168==tail            ) {
                tail_it_167=it_165;
            }
            if(            i_168>=head&&i_168<tail            ) {
                prev_it_169=it_165;
                it_165=it_165->next;
                i_168++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_165=it_165->next;
                i_168++;
            }
        }
        if(        head_prev_it_166!=((void*)0)        ) {
            head_prev_it_166->next=tail_it_167;
        }
        if(        tail_it_167!=((void*)0)        ) {
            tail_it_167->prev=head_prev_it_166;
        }
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_157;
struct list_item$1proc$ph* prev_it_158;
struct list$1proc$ph* __result_obj__31;
    it_157=self->head;
    while(    it_157!=((void*)0)    ) {
        prev_it_158=it_157;
        it_157=it_157->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__31 = self;
    return __result_obj__31;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_170;
struct list_item$1proc$ph* prev_it_171;
    it_170=self->head;
    while(    it_170!=((void*)0)    ) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_172;
unsigned long  int arg0_173;
unsigned long  int arg1_174;
unsigned long  int arg2_175;
unsigned long  int arg3_176;
unsigned long  int arg4_177;
unsigned long  int arg5_178;
unsigned long  int arg6_179;
unsigned long  int arg_syscall_no_180;
unsigned long  long user_va_182;
void* __right_value14 = (void*)0;
struct proc* p_183;
int result_184;
    trapframe_172=(struct context_t*)TRAPFRAME;
    arg0_173=trapframe_172->a0;
    arg1_174=trapframe_172->a1;
    arg2_175=trapframe_172->a2;
    arg3_176=trapframe_172->a3;
    arg4_177=trapframe_172->a4;
    arg5_178=trapframe_172->a5;
    arg6_179=trapframe_172->a6;
    arg_syscall_no_180=trapframe_172->a7;
    char kernel_buf_181[256];
    memset(&kernel_buf_181, 0, sizeof(char)    *(256)    );
    user_va_182=arg0_173;
    p_183=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_183->pagetable,kernel_buf_181,user_va_182,256);
    result_184=fs_open(kernel_buf_181);
    return result_184;
}

int Sys_fork(){
struct context_t* trapframe_185;
unsigned long  int arg0_186;
unsigned long  int arg1_187;
unsigned long  int arg2_188;
unsigned long  int arg3_189;
unsigned long  int arg4_190;
unsigned long  int arg5_191;
unsigned long  int arg6_192;
unsigned long  int arg_syscall_no_193;
void* __right_value15 = (void*)0;
struct proc* p_194;
int fork_flag_195;
void* __right_value16 = (void*)0;
struct proc* child_196;
unsigned long  long sp_197;
int result_198;
memset(&fork_flag_195, 0, sizeof(int));
    trapframe_185=(struct context_t*)TRAPFRAME;
    arg0_186=trapframe_185->a0;
    arg1_187=trapframe_185->a1;
    arg2_188=trapframe_185->a2;
    arg3_189=trapframe_185->a3;
    arg4_190=trapframe_185->a4;
    arg5_191=trapframe_185->a5;
    arg6_192=trapframe_185->a6;
    arg_syscall_no_193=trapframe_185->a7;
    p_194=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_194->program,fork_flag_195=1);
    child_196=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_197=child_196->context.sp;
    child_196->context=*trapframe_185;
    child_196->context.mepc=child_196->context.mepc+4;
    child_196->context.sp=sp_197;
    child_196->context.a0=0;
    result_198=list$1proc$ph_length(gProc)-1;
    return result_198;
}

int Sys_execv(){
struct context_t* trapframe_199;
unsigned long  int arg0_200;
unsigned long  int arg1_201;
unsigned long  int arg2_202;
unsigned long  int arg3_203;
unsigned long  int arg4_204;
unsigned long  int arg5_205;
unsigned long  int arg6_206;
unsigned long  int arg_syscall_no_207;
int argc_208;
unsigned long  long user_va_210;
void* __right_value17 = (void*)0;
struct proc* p_211;
char* path_212;
int fd_214;
int ret_215;
void* __right_value18 = (void*)0;
struct proc* result_216;
    trapframe_199=(struct context_t*)TRAPFRAME;
    arg0_200=trapframe_199->a0;
    arg1_201=trapframe_199->a1;
    arg2_202=trapframe_199->a2;
    arg3_203=trapframe_199->a3;
    arg4_204=trapframe_199->a4;
    arg5_205=trapframe_199->a5;
    arg6_206=trapframe_199->a6;
    arg_syscall_no_207=trapframe_199->a7;
    argc_208=arg2_202;
    char kernel_buf_209[256];
    memset(&kernel_buf_209, 0, sizeof(char)    *(256)    );
    user_va_210=arg0_200;
    p_211=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_211->pagetable,kernel_buf_209,user_va_210,256);
    path_212=kernel_buf_209;
    char hello_elf_213[4096];
    memset(&hello_elf_213, 0, sizeof(char)    *(4096)    );
    fd_214=fs_open(path_212);
    ret_215=fs_read(fd_214,hello_elf_213,4096);
    if(    ret_215<0    ) {
        trapframe_199->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_213);
    result_216=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_199->mepc=result_216->context.mepc+4;
    trapframe_199->sp=result_216->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_217;
unsigned long  int arg0_218;
unsigned long  int arg1_219;
unsigned long  int arg2_220;
unsigned long  int arg3_221;
unsigned long  int arg4_222;
unsigned long  int arg5_223;
unsigned long  int arg6_224;
unsigned long  int arg_syscall_no_225;
int oldfd_226;
int newfd_227;
    trapframe_217=(struct context_t*)TRAPFRAME;
    arg0_218=trapframe_217->a0;
    arg1_219=trapframe_217->a1;
    arg2_220=trapframe_217->a2;
    arg3_221=trapframe_217->a3;
    arg4_222=trapframe_217->a4;
    arg5_223=trapframe_217->a5;
    arg6_224=trapframe_217->a6;
    arg_syscall_no_225=trapframe_217->a7;
    oldfd_226=arg0_218;
    newfd_227=arg1_219;
    printf("gActiveProc %d\n",gActiveProc);
    fs_dup2(oldfd_226,newfd_227);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_228;
unsigned long  int arg0_229;
unsigned long  int arg1_230;
unsigned long  int arg2_231;
unsigned long  int arg3_232;
unsigned long  int arg4_233;
unsigned long  int arg5_234;
unsigned long  int arg6_235;
unsigned long  int arg_syscall_no_236;
char* kernel_buf_237;
unsigned long  long user_va_238;
long fd0_239;
long fd1_240;
void* __right_value19 = (void*)0;
struct proc* p_241;
kernel_buf_237 = (void*)0;
memset(&fd0_239, 0, sizeof(long));
memset(&fd1_240, 0, sizeof(long));
    trapframe_228=(struct context_t*)TRAPFRAME;
    arg0_229=trapframe_228->a0;
    arg1_230=trapframe_228->a1;
    arg2_231=trapframe_228->a2;
    arg3_232=trapframe_228->a3;
    arg4_233=trapframe_228->a4;
    arg5_234=trapframe_228->a5;
    arg6_235=trapframe_228->a6;
    arg_syscall_no_236=trapframe_228->a7;
    user_va_238=arg0_229;
    pipe_open(&fd0_239,&fd1_240);
    printf("PIPE OPEN %ld %ld\n",fd0_239,fd1_240);
    p_241=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_241->pagetable,(unsigned long  long)user_va_238,(char*)&fd0_239,sizeof(long))<0    ) {
        panic("copyout");
    }
    if(    copyout(p_241->pagetable,(unsigned long  long)user_va_238+8,(char*)&fd1_240,sizeof(long))<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context_t* trapframe_242;
unsigned long  int arg0_243;
unsigned long  int arg1_244;
unsigned long  int arg2_245;
unsigned long  int arg3_246;
unsigned long  int arg4_247;
unsigned long  int arg5_248;
unsigned long  int arg6_249;
unsigned long  int arg_syscall_no_250;
int fd_251;
unsigned long  long destva_252;
unsigned long  int n_253;
int ret_255;
void* __right_value20 = (void*)0;
struct proc* p_256;
memset(&ret_255, 0, sizeof(int));
    trapframe_242=(struct context_t*)TRAPFRAME;
    arg0_243=trapframe_242->a0;
    arg1_244=trapframe_242->a1;
    arg2_245=trapframe_242->a2;
    arg3_246=trapframe_242->a3;
    arg4_247=trapframe_242->a4;
    arg5_248=trapframe_242->a5;
    arg6_249=trapframe_242->a6;
    arg_syscall_no_250=trapframe_242->a7;
    fd_251=arg0_243;
    destva_252=arg1_244;
    n_253=arg2_245;
    char kernel_buf_254[256];
    memset(&kernel_buf_254, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_251)    ) {
        ret_255=uart_readn(kernel_buf_254,n_253);
    }
    else if(    is_pipe(fd_251)    ) {
        ret_255=piperead(fd_251,kernel_buf_254,n_253);
    }
    else {
        ret_255=fs_read(fd_251,kernel_buf_254,n_253);
        if(        ret_255<0        ) {
            trapframe_242->a0=ret_255;
            return 0;
        }
        kernel_buf_254[ret_255]=0;
    }
    p_256=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_256->pagetable,destva_252,kernel_buf_254,ret_255)<0    ) {
        panic("read: copyout failed");
    }
    return ret_255;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_257;
unsigned long  int arg0_258;
unsigned long  int arg1_259;
unsigned long  int arg2_260;
unsigned long  int arg3_261;
unsigned long  int arg4_262;
unsigned long  int arg5_263;
unsigned long  int arg6_264;
unsigned long  int arg_syscall_no_265;
unsigned long  long result_266;
long fd_267;
int ret_268;
    disable_timer_interrupts();
    trapframe_257=(struct context_t*)TRAPFRAME;
    arg0_258=trapframe_257->a0;
    arg1_259=trapframe_257->a1;
    arg2_260=trapframe_257->a2;
    arg3_261=trapframe_257->a3;
    arg4_262=trapframe_257->a4;
    arg5_263=trapframe_257->a5;
    arg6_264=trapframe_257->a6;
    arg_syscall_no_265=trapframe_257->a7;
    result_266=0;
    switch (    arg_syscall_no_265) {
        case 64:
        {
            result_266=Sys_write();
        }
        break;
        case 73:
        {
            result_266=Sys_pipe();
        }
        break;
        case 72:
        {
            result_266=Sys_dup2();
        }
        break;
        case 70:
        {
            result_266=Sys_exit();
        }
        break;
        case 71:
        {
            result_266=Sys_wait();
        }
        break;
        case 66:
        {
            result_266=Sys_open();
        }
        break;
        case 65:
        {
            result_266=Sys_read();
        }
        break;
        case 67:
        {
            fd_267=arg0_258;
            ret_268=fs_close(fd_267);
            result_266=ret_268;
        }
        break;
        case 68:
        {
            result_266=Sys_fork();
        }
        break;
        case 69:
        {
            result_266=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_257->a0=result_266;
    return result_266;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1proc$ph* __dec_obj4;
    __dec_obj4=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2428, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__34;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__34 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__34, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__34;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_271;
struct list_item$1proc$ph* prev_it_272;
    it_271=self->head;
    while(    it_271!=((void*)0)    ) {
        prev_it_272=it_271;
        it_271=it_271->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_272, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_273;
void* __right_value23 = (void*)0;
struct proc* p_274;
unsigned long  int usersp_275;
unsigned long  long usersatp_276;
unsigned long  int entry_277;
memset(&fork_flag_273, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_273=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_274=((struct proc*)(__right_value23=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_275=(unsigned long  long)(p_274->stack);
    usersatp_276=((8L<<60)|(((unsigned long  long)p_274->pagetable)>>12));
    entry_277=p_274->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_274;
    kernel_sp=read_s_sp();
    enter_user(entry_277,usersp_275,usersatp_276,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__35;
struct mem_block* current_278;
struct mem_block* prev_279;
void* __result_obj__36;
struct mem_block* new_mem_280;
void* __result_obj__37;
void* __result_obj__38;
    if(    size==0    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_278=free_list;
    prev_279=((void*)0);
    while(    current_278!=((void*)0)    ) {
        if(        current_278->size>=size        ) {
            if(            prev_279==((void*)0)            ) {
                free_list=current_278->next;
            }
            else {
                prev_279->next=current_278->next;
            }
            __result_obj__36 = (void*)(current_278+1);
            return __result_obj__36;
        }
        prev_279=current_278;
        current_278=current_278->next;
    }
    new_mem_280=(struct mem_block*)sbrk(size);
    if(    new_mem_280==(void*)-1    ) {
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    new_mem_280->size=size;
    new_mem_280->next=((void*)0);
    __result_obj__38 = (void*)(new_mem_280+1);
    return __result_obj__38;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_281;
void* __result_obj__39;
void* ptr_282;
void* __result_obj__40;
    total_size_281=nmemb*size;
    if(    total_size_281==0    ) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    ptr_282=malloc(total_size_281);
    if(    ptr_282!=((void*)0)    ) {
        memset(ptr_282,0,total_size_281);
    }
    __result_obj__40 = ptr_282;
    return __result_obj__40;
}

void free(void* ptr){
struct mem_block* block_283;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_283=(struct mem_block*)ptr-1;
    block_283->next=free_list;
    free_list=block_283;
}

char* strdup(const char* s){
char* s2_284;
unsigned long  int len_285;
char* p_286;
char* __result_obj__41;
    s2_284=s;
    len_285=strlen(s2_284)+1;
    p_286=malloc(len_285);
    if(    p_286    ) {
        memcpy(p_286,s2_284,len_285);
    }
    __result_obj__41 = p_286;
    return __result_obj__41;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__42;
char* __result_obj__43;
char* __result_obj__44;
    if(    !*needle    ) {
        __result_obj__42 = (char*)haystack;
        return __result_obj__42;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_287=haystack;
        const char* n_288=needle;
        while(        *h_287&&*n_288&&(*h_287==*n_288)        ) {
            h_287++;
            n_288++;
        }
        if(        !*n_288        ) {
            __result_obj__43 = (char*)haystack;
            return __result_obj__43;
        }
    }
    __result_obj__44 = ((void*)0);
    return __result_obj__44;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_289;
int i_290;
void* __result_obj__45;
    cdst_289=(char*)dst;
    for(    i_290=0    ;    i_290<n    ;    i_290++    ){
        cdst_289[i_290]=c;
    }
    __result_obj__45 = dst;
    return __result_obj__45;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_291;
const unsigned char* s2_292;
memset(&s1_291, 0, sizeof(const unsigned char*));
memset(&s2_292, 0, sizeof(const unsigned char*));
    s1_291=v1;
    s2_292=v2;
    while(    n-->0    ) {
        if(        *s1_291!=*s2_292        ) {
            return *s1_291-*s2_292;
        }
        s1_291++,s2_292++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_293;
char* d_294;
void* __result_obj__46;
void* __result_obj__47;
s_293 = (void*)0;
d_294 = (void*)0;
    if(    n==0    ) {
        __result_obj__46 = dst;
        return __result_obj__46;
    }
    s_293=src;
    d_294=dst;
    if(    s_293<d_294&&s_293+n>d_294    ) {
        s_293+=n;
        d_294+=n;
        while(        n-->0        ) {
            *--d_294=*--s_293;
        }
    }
    else {
        while(        n-->0        ) {
            *d_294++=*s_293++;
        }
    }
    __result_obj__47 = dst;
    return __result_obj__47;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__48;
    __result_obj__48 = memmove(dst,src,n);
    return __result_obj__48;
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
char* os_295;
char* __result_obj__49;
os_295 = (void*)0;
    os_295=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__49 = os_295;
    return __result_obj__49;
}

int strlen(const char* s){
int n_296;
memset(&n_296, 0, sizeof(int));
    for(    n_296=0    ;    s[n_296]    ;    n_296++    ){
        ;
    }
    return n_296;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_297;
char* __result_obj__50;
    d_297=dest;
    while(    *d_297    ) {
        d_297++;
    }
    while(    n--&&*src    ) {
        *d_297++=*src++;
    }
    *d_297=0;
    __result_obj__50 = dest;
    return __result_obj__50;
}

char* strtok(char* s, const char* delim){
static char* next_298;
char* start_299;
char* p_300;
char* __result_obj__51;
int is_delim_302;
char* __result_obj__52;
int is_delim_304;
char* __result_obj__53;
next_298 = (void*)0;
start_299 = (void*)0;
p_300 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_298=s;
    }
    if(    next_298==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    start_299=next_298;
    while(    *start_299!=0    ) {
        const char* d_301=delim;
        is_delim_302=0;
        while(        *d_301!=0        ) {
            if(            *start_299==*d_301            ) {
                is_delim_302=1;
                break;
            }
            d_301++;
        }
        if(        !is_delim_302        ) {
            break;
        }
        start_299++;
    }
    if(    *start_299==0    ) {
        next_298=((void*)0);
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    p_300=start_299;
    while(    *p_300!=0    ) {
        const char* d_303=delim;
        is_delim_304=0;
        while(        *d_303!=0        ) {
            if(            *p_300==*d_303            ) {
                is_delim_304=1;
                break;
            }
            d_303++;
        }
        if(        is_delim_304        ) {
            break;
        }
        p_300++;
    }
    if(    *p_300==0    ) {
        next_298=((void*)0);
    }
    else {
        *p_300=0;
        next_298=p_300+1;
    }
    __result_obj__53 = start_299;
    return __result_obj__53;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_305;
int i_307;
int negative_308;
char* __result_obj__54;
int digit_309;
char* __result_obj__55;
    p_305=buf;
    char tmp_306[32];
    memset(&tmp_306, 0, sizeof(char)    *(32)    );
    i_307=0;
    negative_308=0;
    if(    base<2||base>16    ) {
        *p_305=0;
        __result_obj__54 = p_305;
        return __result_obj__54;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_308=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_309=val_%base;
        tmp_306[i_307++]=(((digit_309<10))?(48+digit_309):(97+digit_309-10));
        val_/=base;
    } while(    val_    );
    if(    negative_308    ) {
        *p_305++=45;
    }
    while(    i_307--    ) {
        *p_305++=tmp_306[i_307];
    }
    *p_305=0;
    __result_obj__55 = buf;
    return __result_obj__55;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_311;
const char* s_312;
unsigned long  int remaining_314;
s_312 = (void*)0;
    char out2_310[512];
    memset(&out2_310, 0, sizeof(char)    *(512)    );
    p_311=out2_310;
    char buf_313[32];
    memset(&buf_313, 0, sizeof(char)    *(32)    );
    remaining_314=sizeof(out2_310);
    for(    ;    *fmt&&remaining_314>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_311++=*fmt;
            remaining_314--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_313,__builtin_va_arg(ap,int),10,1);
            s_312=buf_313;
            break;
            case 117:
            itoa(buf_313,__builtin_va_arg(ap,unsigned int),10,0);
            s_312=buf_313;
            break;
            case 120:
            itoa(buf_313,__builtin_va_arg(ap,unsigned int),16,0);
            s_312=buf_313;
            break;
            case 115:
            s_312=__builtin_va_arg(ap,const char*);
            if(            !s_312            ) {
                s_312="(null)";
            }
            break;
            case 99:
            buf_313[0]=(char)__builtin_va_arg(ap,int);
            buf_313[1]=0;
            s_312=buf_313;
            break;
            case 112:
            strncpy(buf_313,"0x",32);
            itoa(buf_313+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_312=buf_313;
            break;
            case 37:
            buf_313[0]=37;
            buf_313[1]=0;
            s_312=buf_313;
            break;
            default:
            buf_313[0]=37;
            buf_313[1]=*fmt;
            buf_313[2]=0;
            s_312=buf_313;
            break;
        }
        while(        *s_312&&remaining_314>1        ) {
            *p_311++=*s_312++;
            remaining_314--;
        }
    }
    *p_311=0;
    *out=strdup(out2_310);
    return p_311-out2_310;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_315;
char* p_316;
const char* s_317;
unsigned long  int remaining_319;
memset(&ap_315, 0, sizeof(va_list));
s_317 = (void*)0;
    __builtin_va_start(ap_315,fmt);
    p_316=out;
    char buf_318[32];
    memset(&buf_318, 0, sizeof(char)    *(32)    );
    remaining_319=out_size;
    if(    remaining_319==0    ) {
        __builtin_va_end(ap_315);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_319>1            ) {
                *p_316++=*fmt;
                remaining_319--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_317=__builtin_va_arg(ap_315,const char*);
            while(            *s_317&&remaining_319>1            ) {
                *p_316++=*s_317++;
                remaining_319--;
            }
            break;
            case 100:
            itoa(buf_318,__builtin_va_arg(ap_315,int),10,0);
            s_317=buf_318;
            while(            *s_317&&remaining_319>1            ) {
                *p_316++=*s_317++;
                remaining_319--;
            }
            break;
            case 120:
            itoa(buf_318,(unsigned int)__builtin_va_arg(ap_315,int),16,1);
            s_317=buf_318;
            while(            *s_317&&remaining_319>1            ) {
                *p_316++=*s_317++;
                remaining_319--;
            }
            break;
            case 99:
            if(            remaining_319>1            ) {
                *p_316++=(char)__builtin_va_arg(ap_315,int);
                remaining_319--;
            }
            break;
            case 112:
            s_317="0x";
            while(            *s_317&&remaining_319>1            ) {
                *p_316++=*s_317++;
                remaining_319--;
            }
            itoa(buf_318,(long)__builtin_va_arg(ap_315,void*),16,1);
            s_317=buf_318;
            while(            *s_317&&remaining_319>1            ) {
                *p_316++=*s_317++;
                remaining_319--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_318,__builtin_va_arg(ap_315,long),10,1);
                s_317=buf_318;
                while(                *s_317&&remaining_319>1                ) {
                    *p_316++=*s_317++;
                    remaining_319--;
                }
            }
            break;
            default:
            if(            remaining_319>1            ) {
                *p_316++=37;
                remaining_319--;
                if(                remaining_319>1                ) {
                    *p_316++=*fmt;
                    remaining_319--;
                }
            }
            break;
        }
    }
    *p_316=0;
    __builtin_va_end(ap_315);
    return p_316-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_320;
char* p_321;
const char* s_322;
unsigned long  int remaining_324;
memset(&ap_320, 0, sizeof(va_list));
s_322 = (void*)0;
    __builtin_va_start(ap_320,fmt);
    p_321=out;
    char buf_323[32];
    memset(&buf_323, 0, sizeof(char)    *(32)    );
    remaining_324=out_size;
    if(    remaining_324==0    ) {
        __builtin_va_end(ap_320);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_324>1            ) {
                *p_321++=*fmt;
                remaining_324--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_322=__builtin_va_arg(ap_320,const char*);
            while(            *s_322&&remaining_324>1            ) {
                *p_321++=*s_322++;
                remaining_324--;
            }
            break;
            case 100:
            itoa(buf_323,__builtin_va_arg(ap_320,int),10,0);
            s_322=buf_323;
            while(            *s_322&&remaining_324>1            ) {
                *p_321++=*s_322++;
                remaining_324--;
            }
            break;
            case 120:
            itoa(buf_323,(unsigned int)__builtin_va_arg(ap_320,int),16,1);
            s_322=buf_323;
            while(            *s_322&&remaining_324>1            ) {
                *p_321++=*s_322++;
                remaining_324--;
            }
            break;
            case 99:
            if(            remaining_324>1            ) {
                *p_321++=(char)__builtin_va_arg(ap_320,int);
                remaining_324--;
            }
            break;
            case 112:
            s_322="0x";
            while(            *s_322&&remaining_324>1            ) {
                *p_321++=*s_322++;
                remaining_324--;
            }
            itoa(buf_323,(long)__builtin_va_arg(ap_320,void*),16,1);
            s_322=buf_323;
            while(            *s_322&&remaining_324>1            ) {
                *p_321++=*s_322++;
                remaining_324--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_323,__builtin_va_arg(ap_320,long),10,1);
                s_322=buf_323;
                while(                *s_322&&remaining_324>1                ) {
                    *p_321++=*s_322++;
                    remaining_324--;
                }
            }
            break;
            default:
            if(            remaining_324>1            ) {
                *p_321++=37;
                remaining_324--;
                if(                remaining_324>1                ) {
                    *p_321++=*fmt;
                    remaining_324--;
                }
            }
            break;
        }
    }
    *p_321=0;
    __builtin_va_end(ap_320);
    return p_321-out;
}

void printint(int val_, int base, int sign){
int i_326;
int negative_327;
unsigned int uval_328;
int digit_329;
memset(&uval_328, 0, sizeof(unsigned int));
    char buf_325[33];
    memset(&buf_325, 0, sizeof(char)    *(33)    );
    i_326=0;
    negative_327=0;
    if(    sign&&val_<0    ) {
        negative_327=1;
        uval_328=-val_;
    }
    else {
        uval_328=(unsigned int)val_;
    }
    if(    uval_328==0    ) {
        putchar(48);
        return;
    }
    while(    uval_328>0    ) {
        digit_329=uval_328%base;
        buf_325[i_326++]=((digit_329<10)?(48+digit_329):(97+(digit_329-10)));
        uval_328/=base;
    }
    if(    negative_327    ) {
        putchar(45);
    }
    while(    --i_326>=0    ) {
        putchar(buf_325[i_326]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_331;
int negative_332;
int digit_333;
    char buf_330[65];
    memset(&buf_330, 0, sizeof(char)    *(65)    );
    i_331=0;
    negative_332=0;
    if(    sign&&(long)val_<0    ) {
        negative_332=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_333=val_%base;
        buf_330[i_331++]=((digit_333<10)?(48+digit_333):(97+(digit_333-10)));
        val_/=base;
    }
    if(    negative_332    ) {
        putchar(45);
    }
    while(    --i_331>=0    ) {
        putchar(buf_330[i_331]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_335;
int negative_336;
int digit_337;
    char buf_334[65];
    memset(&buf_334, 0, sizeof(char)    *(65)    );
    i_335=0;
    negative_336=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_336=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_337=val_%base;
        buf_334[i_335++]=((digit_337<10)?(48+digit_337):(97+(digit_337-10)));
        val_/=base;
    }
    if(    negative_336    ) {
        putchar(45);
    }
    while(    --i_335>=0    ) {
        putchar(buf_334[i_335]);
    }
}

int printf(const char* fmt, ...){
va_list ap_338;
const char* p_339;
int lcount_340;
unsigned long  int val__341;
unsigned long  long val__342;
long val__343;
long long val__344;
int i_345;
int val__346;
unsigned int val__347;
unsigned long  int val__348;
char c_350;
memset(&ap_338, 0, sizeof(va_list));
p_339 = (void*)0;
    __builtin_va_start(ap_338,fmt);
    for(    p_339=fmt    ;    *p_339    ;    p_339++    ){
        if(        *p_339!=37        ) {
            putchar(*p_339);
            continue;
        }
        p_339++;
        if(        *p_339==108        ) {
            lcount_340=1;
            if(            *(p_339+1)==108            ) {
                lcount_340=2;
                p_339++;
            }
            p_339++;
            switch (            *p_339) {
                case 120:
                {
                    if(                    lcount_340==1                    ) {
                        val__341=__builtin_va_arg(ap_338,unsigned long  int);
                        printlong(val__341,16,0);
                    }
                    else {
                        val__342=__builtin_va_arg(ap_338,unsigned long  long);
                        printlonglong(val__342,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_340==1                    ) {
                        val__343=__builtin_va_arg(ap_338,long);
                        printlong(val__343,10,1);
                    }
                    else {
                        val__344=__builtin_va_arg(ap_338,long  long);
                        printlonglong(val__344,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_345=0                    ;                    i_345<lcount_340                    ;                    i_345++                    ){
                        putchar(108);
                    }
                    putchar(*p_339);
                    break;
                }
            }
        }
        else {
            switch (            *p_339) {
                case 100:
                {
                    val__346=__builtin_va_arg(ap_338,int);
                    printint(val__346,10,1);
                    break;
                }
                case 120:
                {
                    val__347=__builtin_va_arg(ap_338,unsigned int);
                    printint(val__347,16,0);
                    break;
                }
                case 112:
                {
                    val__348=(unsigned long  int)__builtin_va_arg(ap_338,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__348,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_349=__builtin_va_arg(ap_338,const char*);
                    if(                    !s_349                    ) {
                        s_349="(null)";
                    }
                    while(                    *s_349                    ) {
                        putchar(*s_349++);
                    }
                    break;
                }
                case 99:
                {
                    c_350=(char)__builtin_va_arg(ap_338,int);
                    putchar(c_350);
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
                    putchar(*p_339);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_338);
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
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct buffer* buf_351;
int i_352;
void* __right_value26 = (void*)0;
    buf_351=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_351,"%s %d\n",sname,sline);
    for(    i_352=gNumComeStackFrame-2    ;    i_352>=0    ;    i_352--    ){
        buffer_append_format(buf_351,"%s %d #%d\n",gComeStackFrameSName[i_352],gComeStackFrameSLine[i_352],gComeStackFrameID[i_352]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value26=buffer_to_string(buf_351))));
    (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_351, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_353;
    for(    i_353=gNumComeStackFrame-1    ;    i_353>=0    ;    i_353--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_353],gComeStackFrameSLine[i_353],gComeStackFrameID[i_353]);
    }
}

char* come_get_stackframe(){
void* __right_value27 = (void*)0;
char* __result_obj__56;
    __result_obj__56 = (char*)come_increment_ref_count(((char*)(__right_value27=__builtin_string(gComeStackFrameBuffer))));
    (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
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
int i_354;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_354=0    ;    i_354<gHeapPages.mSizePages    ;    i_354++    ){
        gHeapPages.mPages[i_354]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_355;
int n_356;
_Bool flag_357;
int i_358;
struct sMemHeaderTiny* it_359;
int n_360;
int i_361;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_355=gAllocMem;
        n_356=0;
        while(        it_355        ) {
            n_356++;
            flag_357=(_Bool)0;
            printf("#%d ",n_356);
            if(            it_355->class_name            ) {
                printf("%p (%s): ",(char*)it_355+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_355->class_name);
            }
            for(            i_358=0            ;            i_358<16            ;            i_358++            ){
                if(                it_355->sname[i_358]                ) {
                    printf("%s %d #%d, ",it_355->sname[i_358],it_355->sline[i_358],it_355->id[i_358]);
                    flag_357=(_Bool)1;
                }
            }
            if(            flag_357            ) {
                puts("");
            }
            it_355=it_355->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_356,gNumAlloc,gNumFree);
    }
    else {
        it_359=(struct sMemHeaderTiny*)gAllocMem;
        n_360=0;
        while(        it_359        ) {
            n_360++;
            if(            it_359->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_360,(char*)it_359+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_359->class_name,it_359->sname,it_359->sline);
            }
            it_359=it_359->next;
        }
        if(        n_360>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_360,gNumAlloc,gNumFree);
        }
    }
    for(    i_361=0    ;    i_361<gHeapPages.mSizePages    ;    i_361++    ){
        free(gHeapPages.mPages[i_361]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_362;
void* __result_obj__57;
    result_362=((void*)0);
    size=(size+7&~7);
    result_362=calloc(1,size);
    __result_obj__57 = result_362;
    return __result_obj__57;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_363;
struct sMemHeader* prev_it_364;
struct sMemHeader* next_it_365;
unsigned long  int size_366;
struct sMemHeaderTiny* it_367;
struct sMemHeaderTiny* prev_it_368;
struct sMemHeaderTiny* next_it_369;
unsigned long  int size_370;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_363=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_363->allocated!=177783            ) {
                return;
            }
            it_363->allocated=0;
            prev_it_364=it_363->prev;
            next_it_365=it_363->next;
            if(            gAllocMem==it_363            ) {
                gAllocMem=next_it_365;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_364                ) {
                    prev_it_364->next=next_it_365;
                }
                if(                next_it_365                ) {
                    next_it_365->prev=prev_it_364;
                }
            }
            size_366=it_363->size;
            free(it_363);
            gNumFree++;
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
struct sMemHeader* it_372;
int i_373;
int i_374;
void* __result_obj__58;
void* result_375;
struct sMemHeaderTiny* it_376;
void* __result_obj__59;
memset(&i_373, 0, sizeof(int));
memset(&i_374, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_371=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_372=result_371;
        it_372->allocated=177783;
        it_372->size=size+sizeof(struct sMemHeader);
        it_372->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_373=0            ;            i_373<gNumComeStackFrame            ;            i_373++            ){
                it_372->sname[i_373]=gComeStackFrameSName[i_373];
                it_372->sline[i_373]=gComeStackFrameSLine[i_373];
                it_372->id[i_373]=gComeStackFrameID[i_373];
            }
        }
        else {
            for(            i_374=0            ;            i_374<16            ;            i_374++            ){
                it_372->sname[i_374]=gComeStackFrameSName[gNumComeStackFrame-1-i_374];
                it_372->sline[i_374]=gComeStackFrameSLine[gNumComeStackFrame-1-i_374];
                it_372->id[i_374]=gComeStackFrameID[gNumComeStackFrame-1-i_374];
            }
        }
        come_pop_stackframe_v2();
        it_372->next=gAllocMem;
        it_372->prev=((void*)0);
        it_372->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_372;
        }
        gAllocMem=it_372;
        gNumAlloc++;
        __result_obj__58 = (char*)result_371+sizeof(struct sMemHeader);
        return __result_obj__58;
    }
    else {
        result_375=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_376=result_375;
        it_376->allocated=177783;
        it_376->class_name=class_name;
        it_376->sname=sname;
        it_376->sline=sline;
        it_376->size=size+sizeof(struct sMemHeaderTiny);
        it_376->free_next=((void*)0);
        it_376->next=(struct sMemHeaderTiny*)gAllocMem;
        it_376->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_376;
        }
        gAllocMem=(struct sMemHeader*)it_376;
        gNumAlloc++;
        __result_obj__59 = (char*)result_375+sizeof(struct sMemHeaderTiny);
        return __result_obj__59;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_377;
char* __result_obj__60;
struct sMemHeaderTiny* it_378;
char* __result_obj__61;
    if(    gComeDebugLib    ) {
        it_377=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_377->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_377);
            exit(2);
        }
        __result_obj__60 = it_377->class_name;
        return __result_obj__60;
    }
    else {
        it_378=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_378->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_378);
            exit(2);
        }
        __result_obj__61 = it_378->class_name;
        return __result_obj__61;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_379;
int i_380;
struct sMemHeaderTiny* it_381;
    if(    gComeDebugLib    ) {
        it_379=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_379->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_379->class_name        ) {
            printf("(%s): ",it_379->class_name);
        }
        for(        i_380=0        ;        i_380<16        ;        i_380++        ){
            if(            it_379->sname[i_380]            ) {
                printf("%s %d #%d, ",it_379->sname[i_380],it_379->sline[i_380],it_379->id[i_380]);
            }
        }
        puts("");
    }
    else {
        it_381=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_381->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_381->class_name,it_381->sname,it_381->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_382;
unsigned long  int* ref_count_383;
unsigned long  int* size2_384;
void* __result_obj__62;
    mem_382=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_383=(unsigned long  int*)mem_382;
    *ref_count_383=0;
    size2_384=(unsigned long  int*)(mem_382+sizeof(unsigned long  int));
    *size2_384=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__62 = mem_382+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__62;
}

void come_free(void* mem){
unsigned long  int* ref_count_385;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_385=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_385);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__63;
char* mem_386;
unsigned long  int* size_p_387;
unsigned long  int size_388;
void* result_389;
void* __result_obj__64;
    if(    !block    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    mem_386=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_387=(unsigned long  int*)(mem_386+sizeof(unsigned long  int));
    size_388=*size_p_387-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_389=come_calloc_v2(1,size_388,sname,sline,class_name);
    memcpy(result_389,block,size_388);
    __result_obj__64 = result_389;
    return __result_obj__64;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_390;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_390=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_390)++;
    __result_obj__66 = mem;
    return __result_obj__66;
}

void* come_print_ref_count(void* mem){
void* __result_obj__67;
unsigned long  int* ref_count_391;
void* __result_obj__68;
    if(    mem==((void*)0)    ) {
        __result_obj__67 = mem;
        return __result_obj__67;
    }
    ref_count_391=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_391);
    __result_obj__68 = mem;
    return __result_obj__68;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_392;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_392=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_392;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__69;
void* __result_obj__70;
unsigned long  int* ref_count_393;
unsigned long  int count_394;
void (*finalizer_395)(void*);
void* __result_obj__71;
void* __result_obj__72;
memset(&finalizer_395, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__69 = mem;
            return __result_obj__69;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__70 = ((void*)0);
        return __result_obj__70;
    }
    ref_count_393=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_393)--;
    }
    count_394=*ref_count_393;
    if(    !no_free&&count_394<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_395=protocol_fun;
            finalizer_395(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    __result_obj__72 = mem;
    return __result_obj__72;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_396)(void*);
void (*finalizer_397)(void*);
void (*finalizer_398)(void*);
unsigned long  int* ref_count_399;
unsigned long  int count_400;
void (*finalizer_401)(void*);
void (*finalizer_402)(void*);
void (*finalizer_403)(void*);
memset(&finalizer_396, 0, sizeof(void (*)(void*)));
memset(&finalizer_397, 0, sizeof(void (*)(void*)));
memset(&finalizer_398, 0, sizeof(void (*)(void*)));
memset(&finalizer_401, 0, sizeof(void (*)(void*)));
memset(&finalizer_402, 0, sizeof(void (*)(void*)));
memset(&finalizer_403, 0, sizeof(void (*)(void*)));
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
                finalizer_396=protocol_fun;
                finalizer_396(protocol_obj);
            }
            finalizer_397=fun;
            finalizer_397(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_398=protocol_fun;
                finalizer_398(protocol_obj);
            }
        }
    }
    else {
        ref_count_399=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_399)--;
        }
        count_400=*ref_count_399;
        if(        !no_free&&count_400<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_401=protocol_fun;
                        finalizer_401(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_402=fun;
                        finalizer_402(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_403=protocol_fun;
                        finalizer_403(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__73;
int len_404;
void* __right_value28 = (void*)0;
char* result_405;
char* __result_obj__74;
    if(    str==((void*)0)    ) {
        __result_obj__73 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__73;
    }
    len_404=strlen(str)+1;
    result_405=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_404)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_405,str,len_404);
    __result_obj__74 = (char*)come_increment_ref_count(result_405);
    (result_405 = come_decrement_ref_count(result_405, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__74 = come_decrement_ref_count(__result_obj__74, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__74;
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
void* __right_value29 = (void*)0;
char* __result_obj__75;
    __result_obj__75 = (char*)come_increment_ref_count(((char*)(__right_value29=come_get_stackframe())));
    (__right_value29 = come_decrement_ref_count(__right_value29, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__75;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__76;
    __result_obj__76 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__76;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value30 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__77;
    self->size=128;
    __dec_obj5=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2897, "char*"));
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__77 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value31 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__78;
    self->size=128;
    __dec_obj6=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2907, "char*"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__79;
void* __right_value32 = (void*)0;
struct buffer* result_406;
void* __right_value33 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__80;
    if(    self==((void*)0)    ) {
        __result_obj__79 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__79;
    }
    result_406=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_406->size=self->size;
    __dec_obj7=result_406->buf,
    result_406->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_406->len=self->len;
    memcpy(result_406->buf,self->buf,self->len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_406);
    come_call_finalizer(buffer_finalize, result_406, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
_Bool __result_obj__81;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__81 = string_equals(((char*)(__right_value34=buffer_to_string(left))),((char*)(__right_value35=buffer_to_string(right))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__81;
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
struct buffer* __result_obj__82;
void* __right_value36 = (void*)0;
char* old_buf_407;
int old_len_408;
int new_size_409;
void* __right_value37 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__83;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__82 = self;
        return __result_obj__82;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_407=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_407,self->buf,self->size);
        old_len_408=self->len;
        new_size_409=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_409)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_407,old_len_408);
        self->buf[old_len_408]=0;
        self->size=new_size_409;
        (old_buf_407 = come_decrement_ref_count(old_buf_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__84;
void* __right_value38 = (void*)0;
char* old_buf_410;
int old_len_411;
int new_size_412;
void* __right_value39 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = ((void*)0);
        return __result_obj__84;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_410=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_411=self->len;
        new_size_412=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_412)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_410,old_len_411);
        self->buf[old_len_411]=0;
        self->size=new_size_412;
        (old_buf_410 = come_decrement_ref_count(old_buf_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__86;
int size_413;
void* __right_value40 = (void*)0;
char* old_buf_414;
int old_len_415;
int new_size_416;
void* __right_value41 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__87;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    size_413=strlen(mem);
    if(    self->len+size_413+1+1>=self->size    ) {
        old_buf_414=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_414,self->buf,self->size);
        old_len_415=self->len;
        new_size_416=(self->size+size_413+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_416)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_414,old_len_415);
        self->buf[old_len_415]=0;
        self->size=new_size_416;
        (old_buf_414 = come_decrement_ref_count(old_buf_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_413);
    self->len+=size_413;
    self->buf[self->len]=0;
    __result_obj__87 = self;
    return __result_obj__87;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__88;
va_list args_417;
char* result_418;
int len_419;
struct buffer* __result_obj__89;
void* __right_value42 = (void*)0;
char* mem_420;
int size_421;
void* __right_value43 = (void*)0;
char* old_buf_422;
int old_len_423;
int new_size_424;
void* __right_value44 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__90;
result_418 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__88 = self;
        return __result_obj__88;
    }
    __builtin_va_start(args_417,msg);
    len_419=vasprintf(&result_418,msg,args_417);
    __builtin_va_end(args_417);
    if(    len_419<0    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    mem_420=(char*)come_increment_ref_count(__builtin_string(result_418));
    size_421=strlen(mem_420);
    if(    self->len+size_421+1+1>=self->size    ) {
        old_buf_422=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_422,self->buf,self->size);
        old_len_423=self->len;
        new_size_424=(self->size+size_421+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_424)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_422,old_len_423);
        self->buf[old_len_423]=0;
        self->size=new_size_424;
        (old_buf_422 = come_decrement_ref_count(old_buf_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_420,size_421);
    self->len+=size_421;
    self->buf[self->len]=0;
    free(result_418);
    __result_obj__90 = self;
    (mem_420 = come_decrement_ref_count(mem_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__90;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__91;
int size_425;
void* __right_value45 = (void*)0;
char* old_buf_426;
int old_len_427;
int new_size_428;
void* __right_value46 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__92;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__91 = self;
        return __result_obj__91;
    }
    size_425=strlen(mem)+1;
    if(    self->len+size_425+1+1+1>=self->size    ) {
        old_buf_426=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_426,self->buf,self->size);
        old_len_427=self->len;
        new_size_428=(self->size+size_425+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_428)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_426,old_len_427);
        self->buf[old_len_427]=0;
        self->size=new_size_428;
        (old_buf_426 = come_decrement_ref_count(old_buf_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_425);
    self->len+=size_425;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__93;
int* mem_429;
int size_430;
void* __right_value47 = (void*)0;
char* old_buf_431;
int old_len_432;
int new_size_433;
void* __right_value48 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__94;
    if(    self==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    mem_429=&value;
    size_430=sizeof(int);
    if(    self->len+size_430+1+1>=self->size    ) {
        old_buf_431=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_431,self->buf,self->size);
        old_len_432=self->len;
        new_size_433=(self->size+size_430+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_433)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_431,old_len_432);
        self->buf[old_len_432]=0;
        self->size=new_size_433;
        (old_buf_431 = come_decrement_ref_count(old_buf_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_429,size_430);
    self->len+=size_430;
    self->buf[self->len]=0;
    __result_obj__94 = self;
    return __result_obj__94;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_434;
int size_435;
void* __right_value49 = (void*)0;
char* old_buf_436;
int old_len_437;
int new_size_438;
void* __right_value50 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__95;
    mem_434=&value;
    size_435=sizeof(long);
    if(    self->len+size_435+1+1>=self->size    ) {
        old_buf_436=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_436,self->buf,self->size);
        old_len_437=self->len;
        new_size_438=(self->size+size_435+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_438)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_436,old_len_437);
        self->buf[old_len_437]=0;
        self->size=new_size_438;
        (old_buf_436 = come_decrement_ref_count(old_buf_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_434,size_435);
    self->len+=size_435;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__96;
short* mem_439;
int size_440;
void* __right_value51 = (void*)0;
char* old_buf_441;
int old_len_442;
int new_size_443;
void* __right_value52 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    mem_439=&value;
    size_440=sizeof(short);
    if(    self->len+size_440+1+1>=self->size    ) {
        old_buf_441=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_441,self->buf,self->size);
        old_len_442=self->len;
        new_size_443=(self->size+size_440+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_443)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_441,old_len_442);
        self->buf[old_len_442]=0;
        self->size=new_size_443;
        (old_buf_441 = come_decrement_ref_count(old_buf_441, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_439,size_440);
    self->len+=size_440;
    self->buf[self->len]=0;
    __result_obj__97 = self;
    return __result_obj__97;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__98;
int len_444;
int new_size_445;
void* __right_value53 = (void*)0;
char* __dec_obj16;
int i_446;
struct buffer* __result_obj__99;
    if(    self==((void*)0)    ) {
        __result_obj__98 = ((void*)0);
        return __result_obj__98;
    }
    len_444=self->len;
    len_444=(len_444+3)&~3;
    if(    len_444>=self->size    ) {
        new_size_445=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_445)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_445;
    }
    for(    i_446=self->len    ;    i_446<len_444    ;    i_446++    ){
        self->buf[i_446]=0;
    }
    self->len=len_444;
    __result_obj__99 = self;
    return __result_obj__99;
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
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
struct buffer* result_447;
struct buffer* __result_obj__100;
struct buffer* __result_obj__101;
    result_447=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__100 = (struct buffer*)come_increment_ref_count(result_447);
        come_call_finalizer(buffer_finalize, result_447, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__100;
    }
    buffer_append_str(result_447,self);
    __result_obj__101 = (struct buffer*)come_increment_ref_count(result_447);
    come_call_finalizer(buffer_finalize, result_447, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

char* buffer_to_string(struct buffer* self){
void* __right_value56 = (void*)0;
char* __result_obj__102;
void* __right_value57 = (void*)0;
char* __result_obj__103;
    if(    self==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value56=__builtin_string(""))));
        (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value57=__builtin_string(self->buf))));
    (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__104;
    __result_obj__104 = self->buf;
    return __result_obj__104;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct buffer* result_448;
struct buffer* __result_obj__105;
    result_448=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_448,self,sizeof(char)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_448);
    come_call_finalizer(buffer_finalize, result_448, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct buffer* result_449;
int i_450;
struct buffer* __result_obj__106;
    result_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_450=0    ;    i_450<len    ;    i_450++    ){
        buffer_append(result_449,self[i_450],strlen(self[i_450]));
    }
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_449);
    come_call_finalizer(buffer_finalize, result_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct buffer* result_451;
struct buffer* __result_obj__107;
    result_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_451,(char*)self,sizeof(short)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_451);
    come_call_finalizer(buffer_finalize, result_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct buffer* result_452;
struct buffer* __result_obj__108;
    result_452=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_452,(char*)self,sizeof(int)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_452);
    come_call_finalizer(buffer_finalize, result_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
struct buffer* result_453;
struct buffer* __result_obj__109;
    result_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_453,(char*)self,sizeof(long)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_453);
    come_call_finalizer(buffer_finalize, result_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct buffer* result_454;
struct buffer* __result_obj__110;
    result_454=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_454,(char*)self,sizeof(float)*len);
    __result_obj__110 = (struct buffer*)come_increment_ref_count(result_454);
    come_call_finalizer(buffer_finalize, result_454, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* result_455;
struct buffer* __result_obj__111;
    result_455=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_455,(char*)self,sizeof(double)*len);
    __result_obj__111 = (struct buffer*)come_increment_ref_count(result_455);
    come_call_finalizer(buffer_finalize, result_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

char* buffer_printable(struct buffer* self){
int len_456;
void* __right_value72 = (void*)0;
char* result_457;
int n_458;
int i_459;
unsigned char c_460;
char* __result_obj__112;
    len_456=self->len;
    result_457=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_456*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_458=0;
    for(    i_459=0    ;    i_459<len_456    ;    i_459++    ){
        c_460=self->buf[i_459];
        if(        (c_460>=0&&c_460<32)||c_460==127        ) {
            result_457[n_458++]=94;
            result_457[n_458++]=c_460+65-1;
        }
        else if(        c_460>127        ) {
            result_457[n_458++]=63;
        }
        else {
            result_457[n_458++]=c_460;
        }
    }
    result_457[n_458]=0;
    __result_obj__112 = (char*)come_increment_ref_count(result_457);
    (result_457 = come_decrement_ref_count(result_457, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_461;
struct list$1char$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_461=0    ;    i_461<num_value    ;    i_461++    ){
        list$1char$_push_back(self,values[i_461]);
    }
    __result_obj__114 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value74 = (void*)0;
struct list_item$1char$* litem_462;
void* __right_value75 = (void*)0;
struct list_item$1char$* litem_463;
void* __right_value76 = (void*)0;
struct list_item$1char$* litem_464;
struct list$1char$* __result_obj__113;
    if(    self->len==0    ) {
        litem_462=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value74=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_462->prev=((void*)0);
        litem_462->next=((void*)0);
        litem_462->item=item;
        self->tail=litem_462;
        self->head=litem_462;
    }
    else if(    self->len==1    ) {
        litem_463=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value75=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_463->prev=self->head;
        litem_463->next=((void*)0);
        litem_463->item=item;
        self->tail=litem_463;
        self->head->next=litem_463;
    }
    else {
        litem_464=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value76=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_464->prev=self->tail;
        litem_464->next=((void*)0);
        litem_464->item=item;
        self->tail->next=litem_464;
        self->tail=litem_464;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_465;
struct list_item$1char$* prev_it_466;
    it_465=self->head;
    while(    it_465!=((void*)0)    ) {
        prev_it_466=it_465;
        it_465=it_465->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_466, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1char$* __result_obj__115;
    __result_obj__115 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value77=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3356, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_467;
struct list$1char$p* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_467=0    ;    i_467<num_value    ;    i_467++    ){
        list$1char$p_push_back(self,values[i_467]);
    }
    __result_obj__117 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value79 = (void*)0;
struct list_item$1char$p* litem_468;
void* __right_value80 = (void*)0;
struct list_item$1char$p* litem_469;
void* __right_value81 = (void*)0;
struct list_item$1char$p* litem_470;
struct list$1char$p* __result_obj__116;
    if(    self->len==0    ) {
        litem_468=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value79=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_468->prev=((void*)0);
        litem_468->next=((void*)0);
        litem_468->item=item;
        self->tail=litem_468;
        self->head=litem_468;
    }
    else if(    self->len==1    ) {
        litem_469=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value80=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_469->prev=self->head;
        litem_469->next=((void*)0);
        litem_469->item=item;
        self->tail=litem_469;
        self->head->next=litem_469;
    }
    else {
        litem_470=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value81=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_470->prev=self->tail;
        litem_470->next=((void*)0);
        litem_470->item=item;
        self->tail->next=litem_470;
        self->tail=litem_470;
    }
    self->len++;
    __result_obj__116 = self;
    return __result_obj__116;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_471;
struct list_item$1char$p* prev_it_472;
    it_471=self->head;
    while(    it_471!=((void*)0)    ) {
        prev_it_472=it_471;
        it_471=it_471->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_472, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value78 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1char$p* __result_obj__118;
    __result_obj__118 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value82=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3361, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_473;
struct list$1short$* __result_obj__120;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_473=0    ;    i_473<num_value    ;    i_473++    ){
        list$1short$_push_back(self,values[i_473]);
    }
    __result_obj__120 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value84 = (void*)0;
struct list_item$1short$* litem_474;
void* __right_value85 = (void*)0;
struct list_item$1short$* litem_475;
void* __right_value86 = (void*)0;
struct list_item$1short$* litem_476;
struct list$1short$* __result_obj__119;
    if(    self->len==0    ) {
        litem_474=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value84=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_474->prev=((void*)0);
        litem_474->next=((void*)0);
        litem_474->item=item;
        self->tail=litem_474;
        self->head=litem_474;
    }
    else if(    self->len==1    ) {
        litem_475=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value85=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_475->prev=self->head;
        litem_475->next=((void*)0);
        litem_475->item=item;
        self->tail=litem_475;
        self->head->next=litem_475;
    }
    else {
        litem_476=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value86=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_476->prev=self->tail;
        litem_476->next=((void*)0);
        litem_476->item=item;
        self->tail->next=litem_476;
        self->tail=litem_476;
    }
    self->len++;
    __result_obj__119 = self;
    return __result_obj__119;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_477;
struct list_item$1short$* prev_it_478;
    it_477=self->head;
    while(    it_477!=((void*)0)    ) {
        prev_it_478=it_477;
        it_477=it_477->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_478, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value83 = (void*)0;
void* __right_value87 = (void*)0;
struct list$1short$* __result_obj__121;
    __result_obj__121 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value87=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3366, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value87, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_479;
struct list$1int$* __result_obj__123;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_479=0    ;    i_479<num_value    ;    i_479++    ){
        list$1int$_push_back(self,values[i_479]);
    }
    __result_obj__123 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__123;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value89 = (void*)0;
struct list_item$1int$* litem_480;
void* __right_value90 = (void*)0;
struct list_item$1int$* litem_481;
void* __right_value91 = (void*)0;
struct list_item$1int$* litem_482;
struct list$1int$* __result_obj__122;
    if(    self->len==0    ) {
        litem_480=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value89=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_480->prev=((void*)0);
        litem_480->next=((void*)0);
        litem_480->item=item;
        self->tail=litem_480;
        self->head=litem_480;
    }
    else if(    self->len==1    ) {
        litem_481=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value90=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_481->prev=self->head;
        litem_481->next=((void*)0);
        litem_481->item=item;
        self->tail=litem_481;
        self->head->next=litem_481;
    }
    else {
        litem_482=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value91=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_482->prev=self->tail;
        litem_482->next=((void*)0);
        litem_482->item=item;
        self->tail->next=litem_482;
        self->tail=litem_482;
    }
    self->len++;
    __result_obj__122 = self;
    return __result_obj__122;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_483;
struct list_item$1int$* prev_it_484;
    it_483=self->head;
    while(    it_483!=((void*)0)    ) {
        prev_it_484=it_483;
        it_483=it_483->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_484, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value88 = (void*)0;
void* __right_value92 = (void*)0;
struct list$1int$* __result_obj__124;
    __result_obj__124 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value92=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3371, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value92, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_485;
struct list$1long$* __result_obj__126;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_485=0    ;    i_485<num_value    ;    i_485++    ){
        list$1long$_push_back(self,values[i_485]);
    }
    __result_obj__126 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value94 = (void*)0;
struct list_item$1long$* litem_486;
void* __right_value95 = (void*)0;
struct list_item$1long$* litem_487;
void* __right_value96 = (void*)0;
struct list_item$1long$* litem_488;
struct list$1long$* __result_obj__125;
    if(    self->len==0    ) {
        litem_486=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value94=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1    ) {
        litem_487=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value95=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        litem_487->item=item;
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value96=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        litem_488->item=item;
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result_obj__125 = self;
    return __result_obj__125;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_489;
struct list_item$1long$* prev_it_490;
    it_489=self->head;
    while(    it_489!=((void*)0)    ) {
        prev_it_490=it_489;
        it_489=it_489->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_490, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value93 = (void*)0;
void* __right_value97 = (void*)0;
struct list$1long$* __result_obj__127;
    __result_obj__127 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value97=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3376, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value97, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_491;
struct list$1float$* __result_obj__129;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_491=0    ;    i_491<num_value    ;    i_491++    ){
        list$1float$_push_back(self,values[i_491]);
    }
    __result_obj__129 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value99 = (void*)0;
struct list_item$1float$* litem_492;
void* __right_value100 = (void*)0;
struct list_item$1float$* litem_493;
void* __right_value101 = (void*)0;
struct list_item$1float$* litem_494;
struct list$1float$* __result_obj__128;
    if(    self->len==0    ) {
        litem_492=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value99=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_492->prev=((void*)0);
        litem_492->next=((void*)0);
        litem_492->item=item;
        self->tail=litem_492;
        self->head=litem_492;
    }
    else if(    self->len==1    ) {
        litem_493=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value100=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_493->prev=self->head;
        litem_493->next=((void*)0);
        litem_493->item=item;
        self->tail=litem_493;
        self->head->next=litem_493;
    }
    else {
        litem_494=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value101=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_494->prev=self->tail;
        litem_494->next=((void*)0);
        litem_494->item=item;
        self->tail->next=litem_494;
        self->tail=litem_494;
    }
    self->len++;
    __result_obj__128 = self;
    return __result_obj__128;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_495;
struct list_item$1float$* prev_it_496;
    it_495=self->head;
    while(    it_495!=((void*)0)    ) {
        prev_it_496=it_495;
        it_495=it_495->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_496, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value98 = (void*)0;
void* __right_value102 = (void*)0;
struct list$1float$* __result_obj__130;
    __result_obj__130 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value102=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3381, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_497;
struct list$1double$* __result_obj__132;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_497=0    ;    i_497<num_value    ;    i_497++    ){
        list$1double$_push_back(self,values[i_497]);
    }
    __result_obj__132 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value104 = (void*)0;
struct list_item$1double$* litem_498;
void* __right_value105 = (void*)0;
struct list_item$1double$* litem_499;
void* __right_value106 = (void*)0;
struct list_item$1double$* litem_500;
struct list$1double$* __result_obj__131;
    if(    self->len==0    ) {
        litem_498=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value104=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_498->prev=((void*)0);
        litem_498->next=((void*)0);
        litem_498->item=item;
        self->tail=litem_498;
        self->head=litem_498;
    }
    else if(    self->len==1    ) {
        litem_499=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value105=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_499->prev=self->head;
        litem_499->next=((void*)0);
        litem_499->item=item;
        self->tail=litem_499;
        self->head->next=litem_499;
    }
    else {
        litem_500=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value106=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_500->prev=self->tail;
        litem_500->next=((void*)0);
        litem_500->item=item;
        self->tail->next=litem_500;
        self->tail=litem_500;
    }
    self->len++;
    __result_obj__131 = self;
    return __result_obj__131;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_501;
struct list_item$1double$* prev_it_502;
    it_501=self->head;
    while(    it_501!=((void*)0)    ) {
        prev_it_502=it_501;
        it_501=it_501->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value103 = (void*)0;
void* __right_value107 = (void*)0;
struct list$1double$* __result_obj__133;
    __result_obj__133 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value107=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3386, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
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
void* __right_value108 = (void*)0;
char* __result_obj__134;
int len_503;
void* __right_value109 = (void*)0;
char* result_504;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_503=strlen(self)+strlen(right);
    result_504=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_503+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_504,self,len_503+1);
    strncat(result_504,right,len_503+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_504);
    (result_504 = come_decrement_ref_count(result_504, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* string_operator_add(char* self, char* right){
void* __right_value110 = (void*)0;
char* __result_obj__136;
int len_505;
void* __right_value111 = (void*)0;
char* result_506;
char* __result_obj__137;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    len_505=strlen(self)+strlen(right);
    result_506=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_505+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_506,self,len_505+1);
    strncat(result_506,right,len_505+1);
    __result_obj__137 = (char*)come_increment_ref_count(result_506);
    (result_506 = come_decrement_ref_count(result_506, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_operator_mult(char* self, int right){
void* __right_value112 = (void*)0;
char* __result_obj__138;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct buffer* buf_507;
int i_508;
void* __right_value115 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_507=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_508=0    ;    i_508<right    ;    i_508++    ){
        buffer_append_str(buf_507,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value115=buffer_to_string(buf_507))));
    come_call_finalizer(buffer_finalize, buf_507, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* string_operator_mult(char* self, int right){
void* __right_value116 = (void*)0;
char* __result_obj__140;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct buffer* buf_509;
int i_510;
void* __right_value119 = (void*)0;
char* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    buf_509=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_510=0    ;    i_510<right    ;    i_510++    ){
        buffer_append_str(buf_509,self);
    }
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value119=buffer_to_string(buf_509))));
    come_call_finalizer(buffer_finalize, buf_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_511;
int i_512;
    result_511=(_Bool)0;
    for(    i_512=0    ;    i_512<len    ;    i_512++    ){
        if(        strncmp(self[i_512],str,strlen(self[i_512]))==0        ) {
            result_511=(_Bool)1;
            break;
        }
    }
    return result_511;
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
int result_513;
char* p_514;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_513=0;
    p_514=value;
    while(    *p_514    ) {
        result_513+=(*p_514);
        p_514++;
    }
    return result_513;
}

unsigned int string_get_hash_key(char* value){
int result_515;
char* p_516;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_515=0;
    p_516=value;
    while(    *p_516    ) {
        result_515+=(*p_516);
        p_516++;
    }
    return result_515;
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
_Bool result_517;
    result_517=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_517;
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
_Bool result_518;
    result_518=(c>=32&&c<=126);
    return result_518;
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
void* __right_value120 = (void*)0;
char* __result_obj__142;
int len_519;
void* __right_value121 = (void*)0;
char* result_520;
int i_521;
char* __result_obj__143;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_519=strlen(str);
    result_520=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_519+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_521=0    ;    i_521<len_519    ;    i_521++    ){
        result_520[i_521]=str[len_519-i_521-1];
    }
    result_520[len_519]=0;
    __result_obj__143 = (char*)come_increment_ref_count(result_520);
    (result_520 = come_decrement_ref_count(result_520, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value122 = (void*)0;
char* __result_obj__144;
int len_522;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
char* __result_obj__145;
void* __right_value125 = (void*)0;
char* __result_obj__146;
void* __right_value126 = (void*)0;
char* __result_obj__147;
void* __right_value127 = (void*)0;
char* result_523;
char* __result_obj__148;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_522=strlen(str);
    if(    head<0    ) {
        head+=len_522;
    }
    if(    tail<0    ) {
        tail+=len_522+1;
    }
    if(    head>tail    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value124=charp_reverse(((char*)(__right_value123=charp_substring(str,tail,head)))))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_522    ) {
        tail=len_522;
    }
    if(    head==tail    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    if(    tail-head+1<1    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string(""))));
        (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    result_523=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_523,str+head,tail-head);
    result_523[tail-head]=0;
    __result_obj__148 = (char*)come_increment_ref_count(result_523);
    (result_523 = come_decrement_ref_count(result_523, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value128 = (void*)0;
char* __result_obj__149;
int len_524;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
char* __result_obj__150;
void* __right_value131 = (void*)0;
char* __result_obj__151;
void* __right_value132 = (void*)0;
char* __result_obj__152;
void* __right_value133 = (void*)0;
char* result_525;
char* __result_obj__153;
    if(    str==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value128=__builtin_string(""))));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    len_524=strlen(str);
    if(    head<0    ) {
        head+=len_524;
    }
    if(    tail<0    ) {
        tail+=len_524+1;
    }
    if(    head>tail    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value130=charp_reverse(((char*)(__right_value129=charp_substring(str,tail,head)))))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_524    ) {
        tail=len_524;
    }
    if(    head==tail    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value131=__builtin_string(""))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    if(    tail-head+1<1    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value132=__builtin_string(""))));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    result_525=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_525,str+head,tail-head);
    result_525[tail-head]=0;
    __result_obj__153 = (char*)come_increment_ref_count(result_525);
    (result_525 = come_decrement_ref_count(result_525, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value134 = (void*)0;
char* __result_obj__154;
int len_526;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __result_obj__155;
void* __right_value137 = (void*)0;
char* __result_obj__156;
void* __right_value138 = (void*)0;
char* __result_obj__157;
void* __right_value139 = (void*)0;
char* result_527;
char* __result_obj__158;
    if(    str==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(""))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    len_526=strlen(str);
    if(    head<0    ) {
        head+=len_526;
    }
    if(    tail<0    ) {
        tail+=len_526+1;
    }
    if(    head>tail    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value136=charp_reverse(((char*)(__right_value135=charp_substring(str,tail,head)))))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_526    ) {
        tail=len_526;
    }
    if(    head==tail    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(""))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    if(    tail-head+1<1    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    result_527=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_527,str+head,tail-head);
    result_527[tail-head]=0;
    __result_obj__158 = (char*)come_increment_ref_count(result_527);
    (result_527 = come_decrement_ref_count(result_527, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* xsprintf(char* msg, ...){
void* __right_value140 = (void*)0;
char* __result_obj__159;
va_list args_528;
char* result_529;
int len_530;
void* __right_value141 = (void*)0;
char* __result_obj__160;
void* __right_value142 = (void*)0;
char* result2_531;
char* __result_obj__161;
result_529 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    __builtin_va_start(args_528,msg);
    len_530=vasprintf(&result_529,msg,args_528);
    __builtin_va_end(args_528);
    if(    len_530<0    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    result2_531=(char*)come_increment_ref_count(__builtin_string(result_529));
    free(result_529);
    __result_obj__161 = (char*)come_increment_ref_count(result2_531);
    (result2_531 = come_decrement_ref_count(result2_531, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value143 = (void*)0;
char* __result_obj__162;
int len_532;
void* __right_value144 = (void*)0;
char* __result_obj__163;
void* __right_value145 = (void*)0;
char* __result_obj__164;
void* __right_value146 = (void*)0;
char* result_533;
char* __result_obj__165;
    if(    str==((void*)0)    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    len_532=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(str))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    if(    head<0    ) {
        head+=len_532;
    }
    if(    tail<0    ) {
        tail+=len_532+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(str))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    if(    tail>=len_532    ) {
        tail=len_532;
    }
    result_533=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_532-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_533,str,head);
    memcpy(result_533+head,str+tail,len_532-tail);
    result_533[len_532-(tail-head)]=0;
    __result_obj__165 = (char*)come_increment_ref_count(result_533);
    (result_533 = come_decrement_ref_count(result_533, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__166 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__166;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_534;
struct list_item$1char$ph* prev_it_535;
    it_534=self->head;
    while(    it_534!=((void*)0)    ) {
        prev_it_535=it_534;
        it_534=it_534->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value153 = (void*)0;
struct list_item$1char$ph* litem_539;
char* __dec_obj17;
void* __right_value154 = (void*)0;
struct list_item$1char$ph* litem_540;
char* __dec_obj18;
void* __right_value155 = (void*)0;
struct list_item$1char$ph* litem_541;
char* __dec_obj19;
struct list$1char$ph* __result_obj__168;
    if(    self->len==0    ) {
        litem_539=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value153=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_539->prev=((void*)0);
        litem_539->next=((void*)0);
        __dec_obj17=litem_539->item,
        litem_539->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_539;
        self->head=litem_539;
    }
    else if(    self->len==1    ) {
        litem_540=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value154=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_540->prev=self->head;
        litem_540->next=((void*)0);
        __dec_obj18=litem_540->item,
        litem_540->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_540;
        self->head->next=litem_540;
    }
    else {
        litem_541=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value155=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_541->prev=self->tail;
        litem_541->next=((void*)0);
        __dec_obj19=litem_541->item,
        litem_541->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_541;
        self->tail=litem_541;
    }
    self->len++;
    __result_obj__168 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__168;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct list$1char$ph* __result_obj__167;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1char$ph* result_536;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct buffer* str_537;
int i_538;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct list$1char$ph* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value148=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__167;
    }
    result_536=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_538=0    ;    i_538<charp_length(self)    ;    i_538++    ){
        if(        self[i_538]==c        ) {
            list$1char$ph_push_back(result_536,(char*)come_increment_ref_count(__builtin_string(str_537->buf)));
            buffer_reset(str_537);
        }
        else {
            buffer_append_char(str_537,self[i_538]);
        }
    }
    if(    buffer_length(str_537)!=0    ) {
        list$1char$ph_push_back(result_536,(char*)come_increment_ref_count(__builtin_string(str_537->buf)));
    }
    __result_obj__169 = (struct list$1char$ph*)come_increment_ref_count(result_536);
    come_call_finalizer(list$1char$ph$p_finalize, result_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__169;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value158 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf(msg,self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value159 = (void*)0;
char* __result_obj__171;
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf(msg,self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* charp_printable(char* str){
int len_542;
void* __right_value160 = (void*)0;
char* result_543;
int n_544;
int i_545;
char c_546;
char* __result_obj__172;
    len_542=charp_length(str);
    result_543=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_542*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_544=0;
    for(    i_545=0    ;    i_545<len_542    ;    i_545++    ){
        c_546=str[i_545];
        if(        (c_546>=0&&c_546<32)||c_546==127        ) {
            result_543[n_544++]=94;
            result_543[n_544++]=c_546+65-1;
        }
        else {
            result_543[n_544++]=c_546;
        }
    }
    result_543[n_544]=0;
    __result_obj__172 = (char*)come_increment_ref_count(result_543);
    (result_543 = come_decrement_ref_count(result_543, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value161 = (void*)0;
char* __result_obj__173;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct buffer* result_547;
char* p_548;
char* p2_549;
void* __right_value164 = (void*)0;
char* __result_obj__174;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string(self))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    result_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_548=self;
    while(    (_Bool)1    ) {
        p2_549=strstr(p_548,str);
        if(        p2_549==((void*)0)        ) {
            p2_549=p_548;
            while(            *p2_549            ) {
                p2_549++;
            }
            buffer_append(result_547,p_548,p2_549-p_548);
            break;
        }
        buffer_append(result_547,p_548,p2_549-p_548);
        buffer_append_str(result_547,replace);
        p_548=p2_549+strlen(str);
    }
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value164=buffer_to_string(result_547))));
    come_call_finalizer(buffer_finalize, result_547, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* xbasename(char* path){
void* __right_value165 = (void*)0;
char* __result_obj__175;
char* p_550;
void* __right_value166 = (void*)0;
char* __result_obj__176;
void* __right_value167 = (void*)0;
char* __result_obj__177;
void* __right_value168 = (void*)0;
char* __result_obj__178;
    if(    path==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    p_550=path+strlen(path);
    while(    p_550>=path    ) {
        if(        *p_550==47        ) {
            break;
        }
        else {
            p_550--;
        }
    }
    if(    p_550<path    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(path))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    else {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(p_550+1))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* xnoextname(char* path){
void* __right_value169 = (void*)0;
char* __result_obj__179;
void* __right_value170 = (void*)0;
char* path2_551;
char* p_552;
void* __right_value171 = (void*)0;
char* __result_obj__180;
void* __right_value172 = (void*)0;
char* __result_obj__181;
void* __right_value173 = (void*)0;
char* __result_obj__182;
    if(    path==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    path2_551=(char*)come_increment_ref_count(xbasename(path));
    p_552=path2_551+strlen(path2_551);
    while(    p_552>=path2_551    ) {
        if(        *p_552==46        ) {
            break;
        }
        else {
            p_552--;
        }
    }
    if(    p_552<path2_551    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(path2_551))));
        (path2_551 = come_decrement_ref_count(path2_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    else {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value172=charp_substring(path2_551,0,p_552-path2_551))));
        (path2_551 = come_decrement_ref_count(path2_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
    (path2_551 = come_decrement_ref_count(path2_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

char* xextname(char* path){
void* __right_value174 = (void*)0;
char* __result_obj__183;
char* p_553;
void* __right_value175 = (void*)0;
char* __result_obj__184;
void* __right_value176 = (void*)0;
char* __result_obj__185;
void* __right_value177 = (void*)0;
char* __result_obj__186;
    if(    path==((void*)0)    ) {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    p_553=path+strlen(path);
    while(    p_553>=path    ) {
        if(        *p_553==46        ) {
            break;
        }
        else {
            p_553--;
        }
    }
    if(    p_553<path    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(path))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    else {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(p_553+1))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(""))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__186;
}

char* bool_to_string(_Bool self){
void* __right_value178 = (void*)0;
char* __result_obj__187;
void* __right_value179 = (void*)0;
char* __result_obj__188;
    if(    self    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string("true"))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    else {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string("false"))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value180 = (void*)0;
char* __result_obj__189;
void* __right_value181 = (void*)0;
char* __result_obj__190;
    if(    self    ) {
        __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string("true"))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__189;
    }
    else {
        __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value181=__builtin_string("false"))));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__190;
    }
}

char* char_to_string(char self){
void* __right_value182 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value182=xsprintf("%c",self))));
    (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* short_to_string(short self){
void* __right_value183 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value183=xsprintf("%d",self))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__192;
}

char* int_to_string(int self){
void* __right_value184 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value184=xsprintf("%d",self))));
    (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* long_to_string(long self){
void* __right_value185 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value185=xsprintf("%ld",self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__194;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value186 = (void*)0;
char* __result_obj__195;
    __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value186=xsprintf("%ld",self))));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* float_to_string(float self){
void* __right_value187 = (void*)0;
char* __result_obj__196;
    __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value187=xsprintf("%f",self))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__196;
}

char* double_to_string(double self){
void* __right_value188 = (void*)0;
char* __result_obj__197;
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value188=xsprintf("%lf",self))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* string_to_string(char* self){
void* __right_value189 = (void*)0;
char* __result_obj__198;
void* __right_value190 = (void*)0;
char* __result_obj__199;
    if(    self==((void*)0)    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string(""))));
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string(self))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__199;
}

char* charp_to_string(char* self){
void* __right_value191 = (void*)0;
char* __result_obj__200;
void* __right_value192 = (void*)0;
char* __result_obj__201;
    if(    self==((void*)0)    ) {
        __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string(""))));
        (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__200;
    }
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string(self))));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
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
void* __right_value193 = (void*)0;
char* __result_obj__202;
void* __right_value194 = (void*)0;
char* __result_obj__203;
    if(    self==((void*)0)    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value193=__builtin_string(""))));
        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    puts(self);
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string(self))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_print(char* self){
void* __right_value195 = (void*)0;
char* __result_obj__204;
void* __right_value196 = (void*)0;
char* __result_obj__205;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string(""))));
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    printf("%s",self);
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string(self))));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

char* charp_printf(char* self, ...){
void* __right_value197 = (void*)0;
char* __result_obj__206;
char* msg2_554;
va_list args_555;
void* __right_value198 = (void*)0;
char* __result_obj__207;
msg2_554 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(""))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__206;
    }
    __builtin_va_start(args_555,self);
    vasprintf(&msg2_554,self,args_555);
    __builtin_va_end(args_555);
    printf("%s",msg2_554);
    free(msg2_554);
    __result_obj__207 = (char*)come_increment_ref_count(((char*)(__right_value198=__builtin_string(self))));
    (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__207;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_556;
    for(    i_556=0    ;    i_556<self    ;    i_556++    ){
        block(parent,i_556);
    }
}

