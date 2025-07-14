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
static void* map$2void$ptuple2$2void$plong$$ph_begin(struct map$2void$ptuple2$2void$plong$$ph* self);
static _Bool map$2void$ptuple2$2void$plong$$ph_end(struct map$2void$ptuple2$2void$plong$$ph* self);
static void* map$2void$ptuple2$2void$plong$$ph_next(struct map$2void$ptuple2$2void$plong$$ph* self);
static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph$p_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key);
static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key);
static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item);
unsigned long  long* uvmcreate();
unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz);
static void free_pagetable(unsigned long  long* pagetable, int level);
struct file* get_current_file_table();
void exec_prog(char* hello_elf);
static int list$1proc$ph_length(struct list$1proc$ph* self);
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
void activate_proc(int run_proc_num);
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
void enter_user(unsigned long  int anonymous_var_nameX335, unsigned long  int anonymous_var_nameX336, unsigned long  int anonymous_var_nameX337, unsigned long  long anonymous_var_nameX338);
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
unsigned long  long x_126;
memset(&x_126, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_126));
    return x_126;
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
unsigned long  long x_301;
memset(&x_301, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_301));
    return x_301;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_302;
memset(&sp_val_302, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_302): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_302;
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
struct map$2void$ptuple2$2void$plong$$ph* o2_saved_84;
void* it_87;
void* __right_value9 = (void*)0;
struct tuple2$2void$plong$* multiple_assign_var1 = (void*)0;
void* pa_96=0;
long size_97=0;
void* __right_value10 = (void*)0;
struct proc* parent_98;
unsigned long  long stack_base_99;
int i_100;
char* pa_101;
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
        for(        o2_saved_84=(struct map$2void$ptuple2$2void$plong$$ph*)come_increment_ref_count((parent_71->mapping_values)),it_87=map$2void$ptuple2$2void$plong$$ph_begin((o2_saved_84))        ;        !map$2void$ptuple2$2void$plong$$ph_end((o2_saved_84))        ;        it_87=map$2void$ptuple2$2void$plong$$ph_next((o2_saved_84))        ){
            multiple_assign_var1=((struct tuple2$2void$plong$*)(__right_value9=map$2void$ptuple2$2void$plong$$ph_operator_load_element(parent_71->mapping_values,it_87)));
            pa_96=multiple_assign_var1->v1;
            size_97=multiple_assign_var1->v2;
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            copyout(result_54->pagetable,(unsigned long  long)it_87,pa_96,size_97)<0            ) {
                panic("copyout");
            }
        }
        come_call_finalizer(map$2void$ptuple2$2void$plong$$ph$p_finalize, o2_saved_84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    else {
        parent_98=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        stack_base_99=1073741824UL-16*4096;
        for(        i_100=0        ;        i_100<16        ;        i_100++        ){
            pa_101=kalloc();
            mappages(result_54->pagetable,stack_base_99+i_100*4096,4096,(unsigned long  long)pa_101,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        }
        __asm volatile("sfence.vma zero, zero");
        result_54->stack_top=(char*)stack_base_99;
        result_54->context.sp=stack_base_99+16*4096;
        __asm volatile("sfence.vma zero, zero");
        if(        exec_flag        ) {
            result_54->file_table=fs_dup_table(parent_98->file_table);
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

static void* map$2void$ptuple2$2void$plong$$ph_begin(struct map$2void$ptuple2$2void$plong$$ph* self){
void* result_85;
void* __result_obj__20;
void* __result_obj__21;
void* result_86;
void* __result_obj__22;
result_85 = (void*)0;
result_86 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_85,0,sizeof(void*));
        __result_obj__20 = result_85;
        return __result_obj__20;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it    ) {
        __result_obj__21 = self->key_list->it->item;
        return __result_obj__21;
    }
    memset(&result_86,0,sizeof(void*));
    __result_obj__22 = result_86;
    return __result_obj__22;
}

static _Bool map$2void$ptuple2$2void$plong$$ph_end(struct map$2void$ptuple2$2void$plong$$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$ptuple2$2void$plong$$ph_next(struct map$2void$ptuple2$2void$plong$$ph* self){
void* result_88;
void* __result_obj__23;
void* __result_obj__24;
void* result_89;
void* __result_obj__25;
result_88 = (void*)0;
result_89 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)    ) {
        memset(&result_88,0,sizeof(void*));
        __result_obj__23 = result_88;
        return __result_obj__23;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it    ) {
        __result_obj__24 = self->key_list->it->item;
        return __result_obj__24;
    }
    memset(&result_89,0,sizeof(void*));
    __result_obj__25 = result_89;
    return __result_obj__25;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph$p_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_90;
unsigned int hash_91;
unsigned int it_92;
struct tuple2$2void$plong$* __result_obj__26;
struct tuple2$2void$plong$* __result_obj__27;
struct tuple2$2void$plong$* __result_obj__28;
struct tuple2$2void$plong$* __result_obj__29;
default_value_90 = (void*)0;
    memset(&default_value_90,0,sizeof(struct tuple2$2void$plong$*));
    hash_91=voidp_get_hash_key(((void*)key))%self->size;
    it_92=hash_91;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_92]        ) {
            if(            voidp_equals(self->keys[it_92],key)            ) {
                __result_obj__26 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_92]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__26, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__26;
            }
            it_92++;
            if(            it_92>=self->size            ) {
                it_92=0;
            }
            else if(            it_92==hash_91            ) {
                __result_obj__27 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_90);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__27, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__27;
            }
        }
        else {
            __result_obj__28 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_90);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__28, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__28;
        }
    }
    __result_obj__29 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_90);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__29, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__29;
}

static struct tuple2$2void$plong$* map$2void$ptuple2$2void$plong$$ph_operator_load_element(struct map$2void$ptuple2$2void$plong$$ph* self, void* key){
struct tuple2$2void$plong$* default_value_93;
unsigned int hash_94;
unsigned int it_95;
struct tuple2$2void$plong$* __result_obj__30;
struct tuple2$2void$plong$* __result_obj__31;
struct tuple2$2void$plong$* __result_obj__32;
struct tuple2$2void$plong$* __result_obj__33;
default_value_93 = (void*)0;
    memset(&default_value_93,0,sizeof(struct tuple2$2void$plong$*));
    hash_94=voidp_get_hash_key(((void*)key))%self->size;
    it_95=hash_94;
    while(    (_Bool)1    ) {
        if(        self->item_existance[it_95]        ) {
            if(            voidp_equals(self->keys[it_95],key)            ) {
                __result_obj__30 = (struct tuple2$2void$plong$*)come_increment_ref_count(self->items[it_95]);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__30, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__30;
            }
            it_95++;
            if(            it_95>=self->size            ) {
                it_95=0;
            }
            else if(            it_95==hash_94            ) {
                __result_obj__31 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_93);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__31, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
                return __result_obj__31;
            }
        }
        else {
            __result_obj__32 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_93);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__32;
        }
    }
    __result_obj__33 = (struct tuple2$2void$plong$*)come_increment_ref_count(default_value_93);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, default_value_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(tuple2$2void$plong$$p_finalize, __result_obj__33, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__33;
}

static struct list$1proc$ph* list$1proc$ph_replace(struct list$1proc$ph* self, int position, struct proc* item){
int len_102;
int i_103;
struct proc* default_value_104;
struct list$1proc$ph* __result_obj__35;
struct list_item$1proc$ph* it_108;
int i_109;
struct proc* __dec_obj6;
struct list$1proc$ph* __result_obj__36;
default_value_104 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    if(    position<0    ) {
        position=0;
    }
    if(    self->len==0||position>=self->len    ) {
        len_102=self->len;
        for(        i_103=0        ;        i_103<position-len_102        ;        i_103++        ){
            memset(&default_value_104,0,sizeof(struct proc*));
            list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(default_value_104));
            come_call_finalizer(proc_finalize, default_value_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        }
        list$1proc$ph_push_back(self,(struct proc*)come_increment_ref_count(item));
        __result_obj__35 = self;
        come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__35;
    }
    it_108=self->head;
    i_109=0;
    while(    it_108!=((void*)0)    ) {
        if(        position==i_109        ) {
            __dec_obj6=it_108->item,
            it_108->item=(struct proc*)come_increment_ref_count(item);
            come_call_finalizer(proc_finalize, __dec_obj6,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
            break;
        }
        it_108=it_108->next;
        i_109++;
    }
    __result_obj__36 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__36;
}

static struct list$1proc$ph* list$1proc$ph_push_back(struct list$1proc$ph* self, struct proc* item){
void* __right_value11 = (void*)0;
struct list_item$1proc$ph* litem_105;
struct proc* __dec_obj3;
void* __right_value12 = (void*)0;
struct list_item$1proc$ph* litem_106;
struct proc* __dec_obj4;
void* __right_value13 = (void*)0;
struct list_item$1proc$ph* litem_107;
struct proc* __dec_obj5;
struct list$1proc$ph* __result_obj__34;
    if(    self->len==0    ) {
        litem_105=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value11=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1proc$ph*"))));
        litem_105->prev=((void*)0);
        litem_105->next=((void*)0);
        __dec_obj3=litem_105->item,
        litem_105->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_105;
        self->head=litem_105;
    }
    else if(    self->len==1    ) {
        litem_106=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value12=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1proc$ph*"))));
        litem_106->prev=self->head;
        litem_106->next=((void*)0);
        __dec_obj4=litem_106->item,
        litem_106->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_106;
        self->head->next=litem_106;
    }
    else {
        litem_107=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value13=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1proc$ph*"))));
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

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value14 = (void*)0;
struct list_item$1proc$ph* litem_110;
struct proc* __dec_obj7;
void* __right_value15 = (void*)0;
struct list_item$1proc$ph* litem_111;
struct proc* __dec_obj8;
void* __right_value16 = (void*)0;
struct list_item$1proc$ph* litem_112;
struct proc* __dec_obj9;
struct list$1proc$ph* __result_obj__37;
    if(    self->len==0    ) {
        litem_110=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value14=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_110->prev=((void*)0);
        litem_110->next=((void*)0);
        __dec_obj7=litem_110->item,
        litem_110->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj7,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_110;
        self->head=litem_110;
    }
    else if(    self->len==1    ) {
        litem_111=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value15=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_111->prev=self->head;
        litem_111->next=((void*)0);
        __dec_obj8=litem_111->item,
        litem_111->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj8,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_111;
        self->head->next=litem_111;
    }
    else {
        litem_112=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value16=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_112->prev=self->tail;
        litem_112->next=((void*)0);
        __dec_obj9=litem_112->item,
        litem_112->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj9,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_112;
        self->tail=litem_112;
    }
    self->len++;
    __result_obj__37 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__37;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_113;
unsigned long  long* __result_obj__38;
unsigned long  long* __result_obj__39;
pagetable_113 = (void*)0;
    pagetable_113=(unsigned long  long*)kalloc();
    if(    pagetable_113==0    ) {
        __result_obj__38 = (unsigned long  long*)0;
        return __result_obj__38;
    }
    memset(pagetable_113,0,4096);
    __result_obj__39 = pagetable_113;
    return __result_obj__39;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__114;
unsigned long  long* __result_obj__40;
unsigned long  long addr_115;
unsigned long  long* pte_116;
unsigned long  long pa_117;
unsigned int flags_118;
char* mem_119;
unsigned long  long* __result_obj__41;
new__114 = (void*)0;
    new__114=uvmcreate();
    if(    new__114==0    ) {
        __result_obj__40 = (unsigned long  long*)0;
        return __result_obj__40;
    }
    for(    addr_115=0    ;    addr_115<sz    ;    addr_115+=4096    ){
        pte_116=walk(old,addr_115,0);
        if(        !pte_116||!(*pte_116&(1L<<0))        ) {
            continue;
        }
        pa_117=(((*pte_116)>>10)<<12);
        flags_118=((*pte_116)&1023);
        mem_119=kalloc();
        if(        mem_119==0        ) {
            panic("coypuvm");
        }
        memmove(mem_119,(char*)pa_117,4096);
        if(        mappages(new__114,addr_115,4096,((((unsigned long  long)mem_119)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_119);
            panic("copyuvm");
        }
    }
    __result_obj__41 = new__114;
    return __result_obj__41;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_120;
unsigned long  long pte_121;
unsigned long  long pa_122;
unsigned long  long* child_123;
    for(    i_120=0    ;    i_120<512    ;    i_120++    ){
        pte_121=pagetable[i_120];
        if(        !(pte_121&(1L<<0))        ) {
            continue;
        }
        pa_122=(((pte_121)>>10)<<12);
        if(        pte_121&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_122);
            }
        }
        else if(        level>0        ) {
            child_123=(unsigned long  long*)pa_122;
            free_pagetable(child_123,level-1);
            kfree(child_123);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value17 = (void*)0;
struct file* __result_obj__42;
    __result_obj__42 = ((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__42;
}

void exec_prog(char* hello_elf){
void* __right_value18 = (void*)0;
struct proc* parent_proc_124;
void* __right_value19 = (void*)0;
struct proc* new_proc_125;
    parent_proc_124=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog(hello_elf,0,1);
    new_proc_125=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
}

static int list$1proc$ph_length(struct list$1proc$ph* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
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
unsigned long  int x_127;
memset(&x_127, 0, sizeof(unsigned long  int));
    x_127=r_sie();
    x_127|=(1UL<<5);
    w_sie(x_127);
    x_127=r_sstatus();
    x_127|=(1UL<<1);
    w_sstatus(x_127);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_128;
    next_128=r_time()+10000UL;
    w_stimecmp(next_128);
}

void timer_handler(){
void* __right_value20 = (void*)0;
struct proc* p_129;
struct context_t* tf_130;
int old_active_proc_131;
void* __right_value21 = (void*)0;
struct proc* old_132;
void* __right_value22 = (void*)0;
struct proc* new__133;
unsigned long  long a0_134;
    disable_timer_interrupts();
    p_129=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_130=(struct context_t*)TRAPFRAME;
    p_129->context=*tf_130;
    timer_reset();
    old_active_proc_131=gActiveProc;
    old_132=((struct proc*)(__right_value21=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value21, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__133=((struct proc*)(__right_value22=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__133!=old_132&&new__133->zombie==0    ) {
        user_sp=new__133->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__133->pagetable)>>12));
        old_132->context=*(struct context_t*)TRAPFRAME;
        a0_134=new__133->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_134));
        swtch(&new__133->context);
    }
    else {
        gActiveProc=old_active_proc_131;
    }
}

void activate_proc(int run_proc_num){
void* __right_value23 = (void*)0;
struct proc* p_135;
struct context_t* tf_136;
int old_active_proc_137;
void* __right_value24 = (void*)0;
struct proc* old_138;
void* __right_value25 = (void*)0;
struct proc* new__139;
unsigned long  long a0_140;
    disable_timer_interrupts();
    p_135=((struct proc*)(__right_value23=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_136=(struct context_t*)TRAPFRAME;
    p_135->context=*tf_136;
    timer_reset();
    old_active_proc_137=gActiveProc;
    old_138=((struct proc*)(__right_value24=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value24, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    new__139=((struct proc*)(__right_value25=list$1proc$ph_operator_load_element(gProc,run_proc_num)));
    come_call_finalizer(proc_finalize, __right_value25, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__139!=old_138&&new__139->zombie==0    ) {
        user_sp=new__139->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__139->pagetable)>>12));
        old_138->context=*(struct context_t*)TRAPFRAME;
        a0_140=new__139->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_140));
        swtch(&new__139->context);
    }
    else {
        gActiveProc=old_active_proc_137;
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
struct context_t* trapframe_141;
unsigned long  int arg0_142;
unsigned long  int arg1_143;
unsigned long  int arg2_144;
unsigned long  int arg3_145;
unsigned long  int arg4_146;
unsigned long  int arg5_147;
unsigned long  int arg6_148;
unsigned long  int arg_syscall_no_149;
int fd_150;
unsigned long  long user_va_152;
int len_153;
void* __right_value26 = (void*)0;
struct proc* p_154;
int ret_155;
int i_156;
    trapframe_141=(struct context_t*)TRAPFRAME;
    arg0_142=trapframe_141->a0;
    arg1_143=trapframe_141->a1;
    arg2_144=trapframe_141->a2;
    arg3_145=trapframe_141->a3;
    arg4_146=trapframe_141->a4;
    arg5_147=trapframe_141->a5;
    arg6_148=trapframe_141->a6;
    arg_syscall_no_149=trapframe_141->a7;
    fd_150=arg0_142;
    char kernel_buf_151[256];
    memset(&kernel_buf_151, 0, sizeof(char)    *(256)    );
    user_va_152=arg1_143;
    len_153=arg2_144;
    memset(kernel_buf_151,0,256);
    p_154=((struct proc*)(__right_value26=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value26, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_155=copyin(p_154->pagetable,kernel_buf_151,user_va_152,len_153);
    if(    ret_155<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_150)    ) {
        pipewrite(fd_150,kernel_buf_151,len_153);
    }
    else if(    1    ) {
        for(        i_156=0        ;        i_156<len_153        ;        i_156++        ){
            putchar(kernel_buf_151[i_156]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context_t* trapframe_157;
unsigned long  int arg0_158;
unsigned long  int arg1_159;
unsigned long  int arg2_160;
unsigned long  int arg3_161;
unsigned long  int arg4_162;
unsigned long  int arg5_163;
unsigned long  int arg6_164;
unsigned long  int arg_syscall_no_165;
void* __right_value27 = (void*)0;
struct proc* p_166;
    trapframe_157=(struct context_t*)TRAPFRAME;
    arg0_158=trapframe_157->a0;
    arg1_159=trapframe_157->a1;
    arg2_160=trapframe_157->a2;
    arg3_161=trapframe_157->a3;
    arg4_162=trapframe_157->a4;
    arg5_163=trapframe_157->a5;
    arg6_164=trapframe_157->a6;
    arg_syscall_no_165=trapframe_157->a7;
    p_166=((struct proc*)(__right_value27=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value27, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_166->xstatus=arg0_158;
    p_166->zombie=1;
    return 0;
}

int Sys_wait(){
struct context_t* trapframe_167;
unsigned long  int arg0_168;
unsigned long  int arg1_169;
unsigned long  int arg2_170;
unsigned long  int arg3_171;
unsigned long  int arg4_172;
unsigned long  int arg5_173;
unsigned long  int arg6_174;
unsigned long  int arg_syscall_no_175;
int* status_va_176;
void* __right_value28 = (void*)0;
struct proc* p_177;
int exit_status_178;
int child_pid_179;
int n_180;
struct list$1proc$ph* o2_saved_181;
struct proc* it_184;
    trapframe_167=(struct context_t*)TRAPFRAME;
    arg0_168=trapframe_167->a0;
    arg1_169=trapframe_167->a1;
    arg2_170=trapframe_167->a2;
    arg3_171=trapframe_167->a3;
    arg4_172=trapframe_167->a4;
    arg5_173=trapframe_167->a5;
    arg6_174=trapframe_167->a6;
    arg_syscall_no_175=trapframe_167->a7;
    status_va_176=(int*)arg0_168;
    p_177=((struct proc*)(__right_value28=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value28, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_178=0;
    child_pid_179=-1;
    while(    child_pid_179==-1    ) {
        timer_handler();
        n_180=0;
        for(        o2_saved_181=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_184=list$1proc$ph_begin((o2_saved_181))        ;        !list$1proc$ph_end((o2_saved_181))        ;        it_184=list$1proc$ph_next((o2_saved_181))        ){
            if(            it_184->zombie            ) {
                exit_status_178=it_184->xstatus;
                child_pid_179=n_180;
                list$1proc$ph_remove_by_pointer(gProc,it_184);
                break;
            }
            n_180++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_177->pagetable,(unsigned long  long)status_va_176,(void*)&exit_status_178,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_179;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_182;
struct proc* __result_obj__43;
struct proc* __result_obj__44;
struct proc* result_183;
struct proc* __result_obj__45;
result_182 = (void*)0;
result_183 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_182,0,sizeof(struct proc*));
        __result_obj__43 = result_182;
        return __result_obj__43;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__44 = self->it->item;
        return __result_obj__44;
    }
    memset(&result_183,0,sizeof(struct proc*));
    __result_obj__45 = result_183;
    return __result_obj__45;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_185;
struct proc* __result_obj__46;
struct proc* __result_obj__47;
struct proc* result_186;
struct proc* __result_obj__48;
result_185 = (void*)0;
result_186 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_185,0,sizeof(struct proc*));
        __result_obj__46 = result_185;
        return __result_obj__46;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__47 = self->it->item;
        return __result_obj__47;
    }
    memset(&result_186,0,sizeof(struct proc*));
    __result_obj__48 = result_186;
    return __result_obj__48;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_187;
struct list_item$1proc$ph* it_188;
struct list$1proc$ph* __result_obj__52;
    it2_187=0;
    it_188=self->head;
    while(    it_188!=((void*)0)    ) {
        if(        it_188->item==item        ) {
            list$1proc$ph_delete(self,it2_187,it2_187+1);
            break;
        }
        it2_187++;
        it_188=it_188->next;
    }
    __result_obj__52 = self;
    return __result_obj__52;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_189;
struct list$1proc$ph* __result_obj__49;
struct list_item$1proc$ph* it_192;
int i_193;
struct list_item$1proc$ph* prev_it_194;
struct list_item$1proc$ph* it_195;
int i_196;
struct list_item$1proc$ph* prev_it_197;
struct list_item$1proc$ph* it_198;
struct list_item$1proc$ph* head_prev_it_199;
struct list_item$1proc$ph* tail_it_200;
int i_201;
struct list_item$1proc$ph* prev_it_202;
struct list$1proc$ph* __result_obj__51;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_189=tail;
        tail=head;
        head=tmp_189;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__49 = self;
        return __result_obj__49;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_192=self->head;
        i_193=0;
        while(        it_192!=((void*)0)        ) {
            if(            i_193<tail            ) {
                prev_it_194=it_192;
                it_192=it_192->next;
                i_193++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_193==tail            ) {
                self->head=it_192;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_192=it_192->next;
                i_193++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_195=self->head;
        i_196=0;
        while(        it_195!=((void*)0)        ) {
            if(            i_196==head            ) {
                self->tail=it_195->prev;
                self->tail->next=((void*)0);
            }
            if(            i_196>=head            ) {
                prev_it_197=it_195;
                it_195=it_195->next;
                i_196++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_195=it_195->next;
                i_196++;
            }
        }
    }
    else {
        it_198=self->head;
        head_prev_it_199=((void*)0);
        tail_it_200=((void*)0);
        i_201=0;
        while(        it_198!=((void*)0)        ) {
            if(            i_201==head            ) {
                head_prev_it_199=it_198->prev;
            }
            if(            i_201==tail            ) {
                tail_it_200=it_198;
            }
            if(            i_201>=head&&i_201<tail            ) {
                prev_it_202=it_198;
                it_198=it_198->next;
                i_201++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_198=it_198->next;
                i_201++;
            }
        }
        if(        head_prev_it_199!=((void*)0)        ) {
            head_prev_it_199->next=tail_it_200;
        }
        if(        tail_it_200!=((void*)0)        ) {
            tail_it_200->prev=head_prev_it_199;
        }
    }
    __result_obj__51 = self;
    return __result_obj__51;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_190;
struct list_item$1proc$ph* prev_it_191;
struct list$1proc$ph* __result_obj__50;
    it_190=self->head;
    while(    it_190!=((void*)0)    ) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__50 = self;
    return __result_obj__50;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_203;
struct list_item$1proc$ph* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context_t* trapframe_205;
unsigned long  int arg0_206;
unsigned long  int arg1_207;
unsigned long  int arg2_208;
unsigned long  int arg3_209;
unsigned long  int arg4_210;
unsigned long  int arg5_211;
unsigned long  int arg6_212;
unsigned long  int arg_syscall_no_213;
unsigned long  long user_va_215;
void* __right_value29 = (void*)0;
struct proc* p_216;
int result_217;
    trapframe_205=(struct context_t*)TRAPFRAME;
    arg0_206=trapframe_205->a0;
    arg1_207=trapframe_205->a1;
    arg2_208=trapframe_205->a2;
    arg3_209=trapframe_205->a3;
    arg4_210=trapframe_205->a4;
    arg5_211=trapframe_205->a5;
    arg6_212=trapframe_205->a6;
    arg_syscall_no_213=trapframe_205->a7;
    char kernel_buf_214[256];
    memset(&kernel_buf_214, 0, sizeof(char)    *(256)    );
    user_va_215=arg0_206;
    p_216=((struct proc*)(__right_value29=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value29, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_216->pagetable,kernel_buf_214,user_va_215,256);
    result_217=fs_open(kernel_buf_214);
    return result_217;
}

int Sys_fork(){
struct context_t* trapframe_218;
unsigned long  int arg0_219;
unsigned long  int arg1_220;
unsigned long  int arg2_221;
unsigned long  int arg3_222;
unsigned long  int arg4_223;
unsigned long  int arg5_224;
unsigned long  int arg6_225;
unsigned long  int arg_syscall_no_226;
void* __right_value30 = (void*)0;
struct proc* p_227;
int fork_flag_228;
void* __right_value31 = (void*)0;
struct proc* child_229;
unsigned long  long sp_230;
int result_231;
memset(&fork_flag_228, 0, sizeof(int));
    trapframe_218=(struct context_t*)TRAPFRAME;
    arg0_219=trapframe_218->a0;
    arg1_220=trapframe_218->a1;
    arg2_221=trapframe_218->a2;
    arg3_222=trapframe_218->a3;
    arg4_223=trapframe_218->a4;
    arg5_224=trapframe_218->a5;
    arg6_225=trapframe_218->a6;
    arg_syscall_no_226=trapframe_218->a7;
    p_227=((struct proc*)(__right_value30=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value30, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_227->program,fork_flag_228=1,0);
    child_229=((struct proc*)(__right_value31=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value31, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_230=child_229->context.sp;
    child_229->context=*trapframe_218;
    child_229->context.mepc=child_229->context.mepc+4;
    child_229->context.sp=sp_230;
    child_229->context.a0=0;
    result_231=list$1proc$ph_length(gProc)-1;
    return result_231;
}

int Sys_execv(){
struct context_t* trapframe_232;
unsigned long  int arg0_233;
unsigned long  int arg1_234;
unsigned long  int arg2_235;
unsigned long  int arg3_236;
unsigned long  int arg4_237;
unsigned long  int arg5_238;
unsigned long  int arg6_239;
unsigned long  int arg_syscall_no_240;
int argc_241;
unsigned long  long user_va_243;
void* __right_value32 = (void*)0;
struct proc* p_244;
char* path_245;
int fd_247;
int ret_248;
void* __right_value33 = (void*)0;
struct proc* result_249;
    trapframe_232=(struct context_t*)TRAPFRAME;
    arg0_233=trapframe_232->a0;
    arg1_234=trapframe_232->a1;
    arg2_235=trapframe_232->a2;
    arg3_236=trapframe_232->a3;
    arg4_237=trapframe_232->a4;
    arg5_238=trapframe_232->a5;
    arg6_239=trapframe_232->a6;
    arg_syscall_no_240=trapframe_232->a7;
    argc_241=arg2_235;
    char kernel_buf_242[256];
    memset(&kernel_buf_242, 0, sizeof(char)    *(256)    );
    user_va_243=arg0_233;
    p_244=((struct proc*)(__right_value32=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value32, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_244->pagetable,kernel_buf_242,user_va_243,256);
    path_245=kernel_buf_242;
    char hello_elf_246[4096];
    memset(&hello_elf_246, 0, sizeof(char)    *(4096)    );
    fd_247=fs_open(path_245);
    ret_248=fs_read(fd_247,hello_elf_246,4096);
    if(    ret_248<0    ) {
        trapframe_232->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_246);
    result_249=((struct proc*)(__right_value33=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value33, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_232->mepc=result_249->context.mepc+4;
    trapframe_232->sp=result_249->context.sp;
    return 0;
}

int Sys_dup2(){
struct context_t* trapframe_250;
unsigned long  int arg0_251;
unsigned long  int arg1_252;
unsigned long  int arg2_253;
unsigned long  int arg3_254;
unsigned long  int arg4_255;
unsigned long  int arg5_256;
unsigned long  int arg6_257;
unsigned long  int arg_syscall_no_258;
int oldfd_259;
int newfd_260;
    trapframe_250=(struct context_t*)TRAPFRAME;
    arg0_251=trapframe_250->a0;
    arg1_252=trapframe_250->a1;
    arg2_253=trapframe_250->a2;
    arg3_254=trapframe_250->a3;
    arg4_255=trapframe_250->a4;
    arg5_256=trapframe_250->a5;
    arg6_257=trapframe_250->a6;
    arg_syscall_no_258=trapframe_250->a7;
    oldfd_259=arg0_251;
    newfd_260=arg1_252;
    printf("gActiveProc %d\n",gActiveProc);
    fs_dup2(oldfd_259,newfd_260);
    return 0;
}

int Sys_pipe(){
struct context_t* trapframe_261;
unsigned long  int arg0_262;
unsigned long  int arg1_263;
unsigned long  int arg2_264;
unsigned long  int arg3_265;
unsigned long  int arg4_266;
unsigned long  int arg5_267;
unsigned long  int arg6_268;
unsigned long  int arg_syscall_no_269;
char* kernel_buf_270;
unsigned long  long user_va_271;
void* __right_value34 = (void*)0;
struct proc* p_273;
kernel_buf_270 = (void*)0;
    trapframe_261=(struct context_t*)TRAPFRAME;
    arg0_262=trapframe_261->a0;
    arg1_263=trapframe_261->a1;
    arg2_264=trapframe_261->a2;
    arg3_265=trapframe_261->a3;
    arg4_266=trapframe_261->a4;
    arg5_267=trapframe_261->a5;
    arg6_268=trapframe_261->a6;
    arg_syscall_no_269=trapframe_261->a7;
    user_va_271=arg0_262;
    int fd_272[2];
    memset(&fd_272, 0, sizeof(int)    *(2)    );
    pipe_open(&fd_272[0],&fd_272[1]);
    p_273=((struct proc*)(__right_value34=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value34, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_273->pagetable,(unsigned long  long)user_va_271,(char*)fd_272,sizeof(int)*2)<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context_t* trapframe_274;
unsigned long  int arg0_275;
unsigned long  int arg1_276;
unsigned long  int arg2_277;
unsigned long  int arg3_278;
unsigned long  int arg4_279;
unsigned long  int arg5_280;
unsigned long  int arg6_281;
unsigned long  int arg_syscall_no_282;
int fd_283;
unsigned long  long destva_284;
unsigned long  int n_285;
int ret_287;
void* __right_value35 = (void*)0;
struct proc* p_288;
memset(&ret_287, 0, sizeof(int));
    trapframe_274=(struct context_t*)TRAPFRAME;
    arg0_275=trapframe_274->a0;
    arg1_276=trapframe_274->a1;
    arg2_277=trapframe_274->a2;
    arg3_278=trapframe_274->a3;
    arg4_279=trapframe_274->a4;
    arg5_280=trapframe_274->a5;
    arg6_281=trapframe_274->a6;
    arg_syscall_no_282=trapframe_274->a7;
    fd_283=arg0_275;
    destva_284=arg1_276;
    n_285=arg2_277;
    char kernel_buf_286[256];
    memset(&kernel_buf_286, 0, sizeof(char)    *(256)    );
    if(    fd_283==0    ) {
        ret_287=uart_readn(kernel_buf_286,n_285);
    }
    else if(    is_pipe(fd_283)    ) {
        ret_287=piperead(fd_283,kernel_buf_286,n_285);
    }
    else {
        ret_287=fs_read(fd_283,kernel_buf_286,n_285);
        if(        ret_287<0        ) {
            trapframe_274->a0=ret_287;
            return 0;
        }
        kernel_buf_286[ret_287]=0;
    }
    p_288=((struct proc*)(__right_value35=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value35, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_288->pagetable,destva_284,kernel_buf_286,ret_287)<0    ) {
        panic("read: copyout failed");
    }
    return ret_287;
}

unsigned long  int syscall_handler(){
struct context_t* trapframe_289;
unsigned long  int arg0_290;
unsigned long  int arg1_291;
unsigned long  int arg2_292;
unsigned long  int arg3_293;
unsigned long  int arg4_294;
unsigned long  int arg5_295;
unsigned long  int arg6_296;
unsigned long  int arg_syscall_no_297;
unsigned long  long result_298;
long fd_299;
int ret_300;
    disable_timer_interrupts();
    trapframe_289=(struct context_t*)TRAPFRAME;
    arg0_290=trapframe_289->a0;
    arg1_291=trapframe_289->a1;
    arg2_292=trapframe_289->a2;
    arg3_293=trapframe_289->a3;
    arg4_294=trapframe_289->a4;
    arg5_295=trapframe_289->a5;
    arg6_296=trapframe_289->a6;
    arg_syscall_no_297=trapframe_289->a7;
    result_298=0;
    switch (    arg_syscall_no_297) {
        case 64:
        {
            result_298=Sys_write();
        }
        break;
        case 73:
        {
            result_298=Sys_pipe();
        }
        break;
        case 72:
        {
            result_298=Sys_dup2();
        }
        break;
        case 70:
        {
            result_298=Sys_exit();
        }
        break;
        case 71:
        {
            result_298=Sys_wait();
        }
        break;
        case 66:
        {
            result_298=Sys_open();
        }
        break;
        case 65:
        {
            result_298=Sys_read();
        }
        break;
        case 67:
        {
            fd_299=arg0_290;
            ret_300=fs_close(fd_299);
            result_298=ret_300;
        }
        break;
        case 68:
        {
            result_298=Sys_fork();
        }
        break;
        case 69:
        {
            result_298=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_289->a0=result_298;
    return result_298;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1proc$ph* __dec_obj10;
    __dec_obj10=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2526, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__53;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__53 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_303;
struct list_item$1proc$ph* prev_it_304;
    it_303=self->head;
    while(    it_303!=((void*)0)    ) {
        prev_it_304=it_303;
        it_303=it_303->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_304, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_305;
void* __right_value38 = (void*)0;
struct proc* p_306;
unsigned long  int usersp_307;
unsigned long  long usersatp_308;
unsigned long  int entry_309;
memset(&fork_flag_305, 0, sizeof(int));
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
    alloc_prog((char*)child_elf,fork_flag_305=0,0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_306=((struct proc*)(__right_value38=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value38, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_307=(unsigned long  long)(p_306->context.sp);
    usersatp_308=((8L<<60)|(((unsigned long  long)p_306->pagetable)>>12));
    entry_309=p_306->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_306;
    kernel_sp=read_s_sp();
    enter_user(entry_309,usersp_307,usersatp_308,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__54;
struct mem_block* current_310;
struct mem_block* prev_311;
void* __result_obj__55;
struct mem_block* new_mem_312;
void* __result_obj__56;
void* __result_obj__57;
    if(    size==0    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_310=free_list;
    prev_311=((void*)0);
    while(    current_310!=((void*)0)    ) {
        if(        current_310->size>=size        ) {
            if(            prev_311==((void*)0)            ) {
                free_list=current_310->next;
            }
            else {
                prev_311->next=current_310->next;
            }
            __result_obj__55 = (void*)(current_310+1);
            return __result_obj__55;
        }
        prev_311=current_310;
        current_310=current_310->next;
    }
    new_mem_312=(struct mem_block*)sbrk(size);
    if(    new_mem_312==(void*)-1    ) {
        __result_obj__56 = ((void*)0);
        return __result_obj__56;
    }
    new_mem_312->size=size;
    new_mem_312->next=((void*)0);
    __result_obj__57 = (void*)(new_mem_312+1);
    return __result_obj__57;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_313;
void* __result_obj__58;
void* ptr_314;
void* __result_obj__59;
    total_size_313=nmemb*size;
    if(    total_size_313==0    ) {
        __result_obj__58 = ((void*)0);
        return __result_obj__58;
    }
    ptr_314=malloc(total_size_313);
    if(    ptr_314!=((void*)0)    ) {
        memset(ptr_314,0,total_size_313);
    }
    __result_obj__59 = ptr_314;
    return __result_obj__59;
}

void free(void* ptr){
struct mem_block* block_315;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_315=(struct mem_block*)ptr-1;
    block_315->next=free_list;
    free_list=block_315;
}

char* strdup(const char* s){
char* s2_316;
unsigned long  int len_317;
char* p_318;
char* __result_obj__60;
    s2_316=s;
    len_317=strlen(s2_316)+1;
    p_318=malloc(len_317);
    if(    p_318    ) {
        memcpy(p_318,s2_316,len_317);
    }
    __result_obj__60 = p_318;
    return __result_obj__60;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__61;
char* __result_obj__62;
char* __result_obj__63;
    if(    !*needle    ) {
        __result_obj__61 = (char*)haystack;
        return __result_obj__61;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_319=haystack;
        const char* n_320=needle;
        while(        *h_319&&*n_320&&(*h_319==*n_320)        ) {
            h_319++;
            n_320++;
        }
        if(        !*n_320        ) {
            __result_obj__62 = (char*)haystack;
            return __result_obj__62;
        }
    }
    __result_obj__63 = ((void*)0);
    return __result_obj__63;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_321;
int i_322;
void* __result_obj__64;
    cdst_321=(char*)dst;
    for(    i_322=0    ;    i_322<n    ;    i_322++    ){
        cdst_321[i_322]=c;
    }
    __result_obj__64 = dst;
    return __result_obj__64;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_323;
const unsigned char* s2_324;
memset(&s1_323, 0, sizeof(const unsigned char*));
memset(&s2_324, 0, sizeof(const unsigned char*));
    s1_323=v1;
    s2_324=v2;
    while(    n-->0    ) {
        if(        *s1_323!=*s2_324        ) {
            return *s1_323-*s2_324;
        }
        s1_323++,s2_324++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_325;
char* d_326;
void* __result_obj__65;
void* __result_obj__66;
s_325 = (void*)0;
d_326 = (void*)0;
    if(    n==0    ) {
        __result_obj__65 = dst;
        return __result_obj__65;
    }
    s_325=src;
    d_326=dst;
    if(    s_325<d_326&&s_325+n>d_326    ) {
        s_325+=n;
        d_326+=n;
        while(        n-->0        ) {
            *--d_326=*--s_325;
        }
    }
    else {
        while(        n-->0        ) {
            *d_326++=*s_325++;
        }
    }
    __result_obj__66 = dst;
    return __result_obj__66;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__67;
    __result_obj__67 = memmove(dst,src,n);
    return __result_obj__67;
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
char* os_327;
char* __result_obj__68;
os_327 = (void*)0;
    os_327=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__68 = os_327;
    return __result_obj__68;
}

int strlen(const char* s){
int n_328;
memset(&n_328, 0, sizeof(int));
    for(    n_328=0    ;    s[n_328]    ;    n_328++    ){
        ;
    }
    return n_328;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_329;
char* __result_obj__69;
    d_329=dest;
    while(    *d_329    ) {
        d_329++;
    }
    while(    n--&&*src    ) {
        *d_329++=*src++;
    }
    *d_329=0;
    __result_obj__69 = dest;
    return __result_obj__69;
}

char* strtok(char* s, const char* delim){
static char* next_330;
char* start_331;
char* p_332;
char* __result_obj__70;
int is_delim_334;
char* __result_obj__71;
int is_delim_336;
char* __result_obj__72;
next_330 = (void*)0;
start_331 = (void*)0;
p_332 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_330=s;
    }
    if(    next_330==((void*)0)    ) {
        __result_obj__70 = ((void*)0);
        return __result_obj__70;
    }
    start_331=next_330;
    while(    *start_331!=0    ) {
        const char* d_333=delim;
        is_delim_334=0;
        while(        *d_333!=0        ) {
            if(            *start_331==*d_333            ) {
                is_delim_334=1;
                break;
            }
            d_333++;
        }
        if(        !is_delim_334        ) {
            break;
        }
        start_331++;
    }
    if(    *start_331==0    ) {
        next_330=((void*)0);
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    p_332=start_331;
    while(    *p_332!=0    ) {
        const char* d_335=delim;
        is_delim_336=0;
        while(        *d_335!=0        ) {
            if(            *p_332==*d_335            ) {
                is_delim_336=1;
                break;
            }
            d_335++;
        }
        if(        is_delim_336        ) {
            break;
        }
        p_332++;
    }
    if(    *p_332==0    ) {
        next_330=((void*)0);
    }
    else {
        *p_332=0;
        next_330=p_332+1;
    }
    __result_obj__72 = start_331;
    return __result_obj__72;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_337;
int i_339;
int negative_340;
char* __result_obj__73;
int digit_341;
char* __result_obj__74;
    p_337=buf;
    char tmp_338[32];
    memset(&tmp_338, 0, sizeof(char)    *(32)    );
    i_339=0;
    negative_340=0;
    if(    base<2||base>16    ) {
        *p_337=0;
        __result_obj__73 = p_337;
        return __result_obj__73;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_340=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_341=val_%base;
        tmp_338[i_339++]=(((digit_341<10))?(48+digit_341):(97+digit_341-10));
        val_/=base;
    } while(    val_    );
    if(    negative_340    ) {
        *p_337++=45;
    }
    while(    i_339--    ) {
        *p_337++=tmp_338[i_339];
    }
    *p_337=0;
    __result_obj__74 = buf;
    return __result_obj__74;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_343;
const char* s_344;
unsigned long  int remaining_346;
s_344 = (void*)0;
    char out2_342[512];
    memset(&out2_342, 0, sizeof(char)    *(512)    );
    p_343=out2_342;
    char buf_345[32];
    memset(&buf_345, 0, sizeof(char)    *(32)    );
    remaining_346=sizeof(out2_342);
    for(    ;    *fmt&&remaining_346>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_343++=*fmt;
            remaining_346--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_345,__builtin_va_arg(ap,int),10,1);
            s_344=buf_345;
            break;
            case 117:
            itoa(buf_345,__builtin_va_arg(ap,unsigned int),10,0);
            s_344=buf_345;
            break;
            case 120:
            itoa(buf_345,__builtin_va_arg(ap,unsigned int),16,0);
            s_344=buf_345;
            break;
            case 115:
            s_344=__builtin_va_arg(ap,const char*);
            if(            !s_344            ) {
                s_344="(null)";
            }
            break;
            case 99:
            buf_345[0]=(char)__builtin_va_arg(ap,int);
            buf_345[1]=0;
            s_344=buf_345;
            break;
            case 112:
            strncpy(buf_345,"0x",32);
            itoa(buf_345+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_344=buf_345;
            break;
            case 37:
            buf_345[0]=37;
            buf_345[1]=0;
            s_344=buf_345;
            break;
            default:
            buf_345[0]=37;
            buf_345[1]=*fmt;
            buf_345[2]=0;
            s_344=buf_345;
            break;
        }
        while(        *s_344&&remaining_346>1        ) {
            *p_343++=*s_344++;
            remaining_346--;
        }
    }
    *p_343=0;
    *out=strdup(out2_342);
    return p_343-out2_342;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_347;
char* p_348;
const char* s_349;
unsigned long  int remaining_351;
memset(&ap_347, 0, sizeof(va_list));
s_349 = (void*)0;
    __builtin_va_start(ap_347,fmt);
    p_348=out;
    char buf_350[32];
    memset(&buf_350, 0, sizeof(char)    *(32)    );
    remaining_351=out_size;
    if(    remaining_351==0    ) {
        __builtin_va_end(ap_347);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_351>1            ) {
                *p_348++=*fmt;
                remaining_351--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_349=__builtin_va_arg(ap_347,const char*);
            while(            *s_349&&remaining_351>1            ) {
                *p_348++=*s_349++;
                remaining_351--;
            }
            break;
            case 100:
            itoa(buf_350,__builtin_va_arg(ap_347,int),10,0);
            s_349=buf_350;
            while(            *s_349&&remaining_351>1            ) {
                *p_348++=*s_349++;
                remaining_351--;
            }
            break;
            case 120:
            itoa(buf_350,(unsigned int)__builtin_va_arg(ap_347,int),16,1);
            s_349=buf_350;
            while(            *s_349&&remaining_351>1            ) {
                *p_348++=*s_349++;
                remaining_351--;
            }
            break;
            case 99:
            if(            remaining_351>1            ) {
                *p_348++=(char)__builtin_va_arg(ap_347,int);
                remaining_351--;
            }
            break;
            case 112:
            s_349="0x";
            while(            *s_349&&remaining_351>1            ) {
                *p_348++=*s_349++;
                remaining_351--;
            }
            itoa(buf_350,(long)__builtin_va_arg(ap_347,void*),16,1);
            s_349=buf_350;
            while(            *s_349&&remaining_351>1            ) {
                *p_348++=*s_349++;
                remaining_351--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_350,__builtin_va_arg(ap_347,long),10,1);
                s_349=buf_350;
                while(                *s_349&&remaining_351>1                ) {
                    *p_348++=*s_349++;
                    remaining_351--;
                }
            }
            break;
            default:
            if(            remaining_351>1            ) {
                *p_348++=37;
                remaining_351--;
                if(                remaining_351>1                ) {
                    *p_348++=*fmt;
                    remaining_351--;
                }
            }
            break;
        }
    }
    *p_348=0;
    __builtin_va_end(ap_347);
    return p_348-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_352;
char* p_353;
const char* s_354;
unsigned long  int remaining_356;
memset(&ap_352, 0, sizeof(va_list));
s_354 = (void*)0;
    __builtin_va_start(ap_352,fmt);
    p_353=out;
    char buf_355[32];
    memset(&buf_355, 0, sizeof(char)    *(32)    );
    remaining_356=out_size;
    if(    remaining_356==0    ) {
        __builtin_va_end(ap_352);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_356>1            ) {
                *p_353++=*fmt;
                remaining_356--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_354=__builtin_va_arg(ap_352,const char*);
            while(            *s_354&&remaining_356>1            ) {
                *p_353++=*s_354++;
                remaining_356--;
            }
            break;
            case 100:
            itoa(buf_355,__builtin_va_arg(ap_352,int),10,0);
            s_354=buf_355;
            while(            *s_354&&remaining_356>1            ) {
                *p_353++=*s_354++;
                remaining_356--;
            }
            break;
            case 120:
            itoa(buf_355,(unsigned int)__builtin_va_arg(ap_352,int),16,1);
            s_354=buf_355;
            while(            *s_354&&remaining_356>1            ) {
                *p_353++=*s_354++;
                remaining_356--;
            }
            break;
            case 99:
            if(            remaining_356>1            ) {
                *p_353++=(char)__builtin_va_arg(ap_352,int);
                remaining_356--;
            }
            break;
            case 112:
            s_354="0x";
            while(            *s_354&&remaining_356>1            ) {
                *p_353++=*s_354++;
                remaining_356--;
            }
            itoa(buf_355,(long)__builtin_va_arg(ap_352,void*),16,1);
            s_354=buf_355;
            while(            *s_354&&remaining_356>1            ) {
                *p_353++=*s_354++;
                remaining_356--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_355,__builtin_va_arg(ap_352,long),10,1);
                s_354=buf_355;
                while(                *s_354&&remaining_356>1                ) {
                    *p_353++=*s_354++;
                    remaining_356--;
                }
            }
            break;
            default:
            if(            remaining_356>1            ) {
                *p_353++=37;
                remaining_356--;
                if(                remaining_356>1                ) {
                    *p_353++=*fmt;
                    remaining_356--;
                }
            }
            break;
        }
    }
    *p_353=0;
    __builtin_va_end(ap_352);
    return p_353-out;
}

void printint(int val_, int base, int sign){
int i_358;
int negative_359;
unsigned int uval_360;
int digit_361;
memset(&uval_360, 0, sizeof(unsigned int));
    char buf_357[33];
    memset(&buf_357, 0, sizeof(char)    *(33)    );
    i_358=0;
    negative_359=0;
    if(    sign&&val_<0    ) {
        negative_359=1;
        uval_360=-val_;
    }
    else {
        uval_360=(unsigned int)val_;
    }
    if(    uval_360==0    ) {
        putchar(48);
        return;
    }
    while(    uval_360>0    ) {
        digit_361=uval_360%base;
        buf_357[i_358++]=((digit_361<10)?(48+digit_361):(97+(digit_361-10)));
        uval_360/=base;
    }
    if(    negative_359    ) {
        putchar(45);
    }
    while(    --i_358>=0    ) {
        putchar(buf_357[i_358]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_363;
int negative_364;
int digit_365;
    char buf_362[65];
    memset(&buf_362, 0, sizeof(char)    *(65)    );
    i_363=0;
    negative_364=0;
    if(    sign&&(long)val_<0    ) {
        negative_364=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_365=val_%base;
        buf_362[i_363++]=((digit_365<10)?(48+digit_365):(97+(digit_365-10)));
        val_/=base;
    }
    if(    negative_364    ) {
        putchar(45);
    }
    while(    --i_363>=0    ) {
        putchar(buf_362[i_363]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_367;
int negative_368;
int digit_369;
    char buf_366[65];
    memset(&buf_366, 0, sizeof(char)    *(65)    );
    i_367=0;
    negative_368=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_368=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_369=val_%base;
        buf_366[i_367++]=((digit_369<10)?(48+digit_369):(97+(digit_369-10)));
        val_/=base;
    }
    if(    negative_368    ) {
        putchar(45);
    }
    while(    --i_367>=0    ) {
        putchar(buf_366[i_367]);
    }
}

int printf(const char* fmt, ...){
va_list ap_370;
const char* p_371;
int lcount_372;
unsigned long  int val__373;
unsigned long  long val__374;
long val__375;
long long val__376;
int i_377;
int val__378;
unsigned int val__379;
unsigned long  int val__380;
char c_382;
memset(&ap_370, 0, sizeof(va_list));
p_371 = (void*)0;
    __builtin_va_start(ap_370,fmt);
    for(    p_371=fmt    ;    *p_371    ;    p_371++    ){
        if(        *p_371!=37        ) {
            putchar(*p_371);
            continue;
        }
        p_371++;
        if(        *p_371==108        ) {
            lcount_372=1;
            if(            *(p_371+1)==108            ) {
                lcount_372=2;
                p_371++;
            }
            p_371++;
            switch (            *p_371) {
                case 120:
                {
                    if(                    lcount_372==1                    ) {
                        val__373=__builtin_va_arg(ap_370,unsigned long  int);
                        printlong(val__373,16,0);
                    }
                    else {
                        val__374=__builtin_va_arg(ap_370,unsigned long  long);
                        printlonglong(val__374,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_372==1                    ) {
                        val__375=__builtin_va_arg(ap_370,long);
                        printlong(val__375,10,1);
                    }
                    else {
                        val__376=__builtin_va_arg(ap_370,long  long);
                        printlonglong(val__376,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_377=0                    ;                    i_377<lcount_372                    ;                    i_377++                    ){
                        putchar(108);
                    }
                    putchar(*p_371);
                    break;
                }
            }
        }
        else {
            switch (            *p_371) {
                case 100:
                {
                    val__378=__builtin_va_arg(ap_370,int);
                    printint(val__378,10,1);
                    break;
                }
                case 120:
                {
                    val__379=__builtin_va_arg(ap_370,unsigned int);
                    printint(val__379,16,0);
                    break;
                }
                case 112:
                {
                    val__380=(unsigned long  int)__builtin_va_arg(ap_370,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__380,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_381=__builtin_va_arg(ap_370,const char*);
                    if(                    !s_381                    ) {
                        s_381="(null)";
                    }
                    while(                    *s_381                    ) {
                        putchar(*s_381++);
                    }
                    break;
                }
                case 99:
                {
                    c_382=(char)__builtin_va_arg(ap_370,int);
                    putchar(c_382);
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
                    putchar(*p_371);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_370);
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
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* buf_383;
int i_384;
void* __right_value41 = (void*)0;
    buf_383=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_383,"%s %d\n",sname,sline);
    for(    i_384=gNumComeStackFrame-2    ;    i_384>=0    ;    i_384--    ){
        buffer_append_format(buf_383,"%s %d #%d\n",gComeStackFrameSName[i_384],gComeStackFrameSLine[i_384],gComeStackFrameID[i_384]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value41=buffer_to_string(buf_383))));
    (__right_value41 = come_decrement_ref_count(__right_value41, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_383, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_385;
    for(    i_385=gNumComeStackFrame-1    ;    i_385>=0    ;    i_385--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_385],gComeStackFrameSLine[i_385],gComeStackFrameID[i_385]);
    }
}

char* come_get_stackframe(){
void* __right_value42 = (void*)0;
char* __result_obj__75;
    __result_obj__75 = (char*)come_increment_ref_count(((char*)(__right_value42=__builtin_string(gComeStackFrameBuffer))));
    (__right_value42 = come_decrement_ref_count(__right_value42, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__75;
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
int i_386;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_386=0    ;    i_386<gHeapPages.mSizePages    ;    i_386++    ){
        gHeapPages.mPages[i_386]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_387;
int n_388;
_Bool flag_389;
int i_390;
struct sMemHeaderTiny* it_391;
int n_392;
int i_393;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_387=gAllocMem;
        n_388=0;
        while(        it_387        ) {
            n_388++;
            flag_389=(_Bool)0;
            printf("#%d ",n_388);
            if(            it_387->class_name            ) {
                printf("%p (%s): ",(char*)it_387+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_387->class_name);
            }
            for(            i_390=0            ;            i_390<16            ;            i_390++            ){
                if(                it_387->sname[i_390]                ) {
                    printf("%s %d #%d, ",it_387->sname[i_390],it_387->sline[i_390],it_387->id[i_390]);
                    flag_389=(_Bool)1;
                }
            }
            if(            flag_389            ) {
                puts("");
            }
            it_387=it_387->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_388,gNumAlloc,gNumFree);
    }
    else {
        it_391=(struct sMemHeaderTiny*)gAllocMem;
        n_392=0;
        while(        it_391        ) {
            n_392++;
            if(            it_391->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_392,(char*)it_391+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_391->class_name,it_391->sname,it_391->sline);
            }
            it_391=it_391->next;
        }
        if(        n_392>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_392,gNumAlloc,gNumFree);
        }
    }
    for(    i_393=0    ;    i_393<gHeapPages.mSizePages    ;    i_393++    ){
        free(gHeapPages.mPages[i_393]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_394;
void* __result_obj__76;
    result_394=((void*)0);
    size=(size+7&~7);
    result_394=calloc(1,size);
    __result_obj__76 = result_394;
    return __result_obj__76;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_395;
struct sMemHeader* prev_it_396;
struct sMemHeader* next_it_397;
unsigned long  int size_398;
struct sMemHeaderTiny* it_399;
struct sMemHeaderTiny* prev_it_400;
struct sMemHeaderTiny* next_it_401;
unsigned long  int size_402;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_395=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_395->allocated!=177783            ) {
                return;
            }
            it_395->allocated=0;
            prev_it_396=it_395->prev;
            next_it_397=it_395->next;
            if(            gAllocMem==it_395            ) {
                gAllocMem=next_it_397;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_396                ) {
                    prev_it_396->next=next_it_397;
                }
                if(                next_it_397                ) {
                    next_it_397->prev=prev_it_396;
                }
            }
            size_398=it_395->size;
            free(it_395);
            gNumFree++;
        }
        else {
            it_399=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_399->allocated!=177783            ) {
                return;
            }
            it_399->allocated=0;
            prev_it_400=it_399->prev;
            next_it_401=it_399->next;
            if(            gAllocMem==it_399            ) {
                gAllocMem=(struct sMemHeader*)next_it_401;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_400                ) {
                    prev_it_400->next=next_it_401;
                }
                if(                next_it_401                ) {
                    next_it_401->prev=prev_it_400;
                }
            }
            size_402=it_399->size;
            free(it_399);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_403;
struct sMemHeader* it_404;
int i_405;
int i_406;
void* __result_obj__77;
void* result_407;
struct sMemHeaderTiny* it_408;
void* __result_obj__78;
memset(&i_405, 0, sizeof(int));
memset(&i_406, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_403=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_404=result_403;
        it_404->allocated=177783;
        it_404->size=size+sizeof(struct sMemHeader);
        it_404->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_405=0            ;            i_405<gNumComeStackFrame            ;            i_405++            ){
                it_404->sname[i_405]=gComeStackFrameSName[i_405];
                it_404->sline[i_405]=gComeStackFrameSLine[i_405];
                it_404->id[i_405]=gComeStackFrameID[i_405];
            }
        }
        else {
            for(            i_406=0            ;            i_406<16            ;            i_406++            ){
                it_404->sname[i_406]=gComeStackFrameSName[gNumComeStackFrame-1-i_406];
                it_404->sline[i_406]=gComeStackFrameSLine[gNumComeStackFrame-1-i_406];
                it_404->id[i_406]=gComeStackFrameID[gNumComeStackFrame-1-i_406];
            }
        }
        come_pop_stackframe_v2();
        it_404->next=gAllocMem;
        it_404->prev=((void*)0);
        it_404->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_404;
        }
        gAllocMem=it_404;
        gNumAlloc++;
        __result_obj__77 = (char*)result_403+sizeof(struct sMemHeader);
        return __result_obj__77;
    }
    else {
        result_407=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_408=result_407;
        it_408->allocated=177783;
        it_408->class_name=class_name;
        it_408->sname=sname;
        it_408->sline=sline;
        it_408->size=size+sizeof(struct sMemHeaderTiny);
        it_408->free_next=((void*)0);
        it_408->next=(struct sMemHeaderTiny*)gAllocMem;
        it_408->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_408;
        }
        gAllocMem=(struct sMemHeader*)it_408;
        gNumAlloc++;
        __result_obj__78 = (char*)result_407+sizeof(struct sMemHeaderTiny);
        return __result_obj__78;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_409;
char* __result_obj__79;
struct sMemHeaderTiny* it_410;
char* __result_obj__80;
    if(    gComeDebugLib    ) {
        it_409=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_409->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_409);
            exit(2);
        }
        __result_obj__79 = it_409->class_name;
        return __result_obj__79;
    }
    else {
        it_410=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_410->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_410);
            exit(2);
        }
        __result_obj__80 = it_410->class_name;
        return __result_obj__80;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_411;
int i_412;
struct sMemHeaderTiny* it_413;
    if(    gComeDebugLib    ) {
        it_411=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_411->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_411->class_name        ) {
            printf("(%s): ",it_411->class_name);
        }
        for(        i_412=0        ;        i_412<16        ;        i_412++        ){
            if(            it_411->sname[i_412]            ) {
                printf("%s %d #%d, ",it_411->sname[i_412],it_411->sline[i_412],it_411->id[i_412]);
            }
        }
        puts("");
    }
    else {
        it_413=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_413->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_413->class_name,it_413->sname,it_413->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_414;
unsigned long  int* ref_count_415;
unsigned long  int* size2_416;
void* __result_obj__81;
    mem_414=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_415=(unsigned long  int*)mem_414;
    *ref_count_415=0;
    size2_416=(unsigned long  int*)(mem_414+sizeof(unsigned long  int));
    *size2_416=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__81 = mem_414+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__81;
}

void come_free(void* mem){
unsigned long  int* ref_count_417;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_417=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_417);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__82;
char* mem_418;
unsigned long  int* size_p_419;
unsigned long  int size_420;
void* result_421;
void* __result_obj__83;
    if(    !block    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    mem_418=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_419=(unsigned long  int*)(mem_418+sizeof(unsigned long  int));
    size_420=*size_p_419-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_421=come_calloc_v2(1,size_420,sname,sline,class_name);
    memcpy(result_421,block,size_420);
    __result_obj__83 = result_421;
    return __result_obj__83;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__84;
unsigned long  int* ref_count_422;
void* __result_obj__85;
    if(    mem==((void*)0)    ) {
        __result_obj__84 = mem;
        return __result_obj__84;
    }
    ref_count_422=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_422)++;
    __result_obj__85 = mem;
    return __result_obj__85;
}

void* come_print_ref_count(void* mem){
void* __result_obj__86;
unsigned long  int* ref_count_423;
void* __result_obj__87;
    if(    mem==((void*)0)    ) {
        __result_obj__86 = mem;
        return __result_obj__86;
    }
    ref_count_423=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_423);
    __result_obj__87 = mem;
    return __result_obj__87;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_424;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_424=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_424;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__88;
void* __result_obj__89;
unsigned long  int* ref_count_425;
unsigned long  int count_426;
void (*finalizer_427)(void*);
void* __result_obj__90;
void* __result_obj__91;
memset(&finalizer_427, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__88 = mem;
            return __result_obj__88;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__89 = ((void*)0);
        return __result_obj__89;
    }
    ref_count_425=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_425)--;
    }
    count_426=*ref_count_425;
    if(    !no_free&&count_426<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_427=protocol_fun;
            finalizer_427(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__90 = ((void*)0);
        return __result_obj__90;
    }
    __result_obj__91 = mem;
    return __result_obj__91;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_428)(void*);
void (*finalizer_429)(void*);
void (*finalizer_430)(void*);
unsigned long  int* ref_count_431;
unsigned long  int count_432;
void (*finalizer_433)(void*);
void (*finalizer_434)(void*);
void (*finalizer_435)(void*);
memset(&finalizer_428, 0, sizeof(void (*)(void*)));
memset(&finalizer_429, 0, sizeof(void (*)(void*)));
memset(&finalizer_430, 0, sizeof(void (*)(void*)));
memset(&finalizer_433, 0, sizeof(void (*)(void*)));
memset(&finalizer_434, 0, sizeof(void (*)(void*)));
memset(&finalizer_435, 0, sizeof(void (*)(void*)));
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
                finalizer_428=protocol_fun;
                finalizer_428(protocol_obj);
            }
            finalizer_429=fun;
            finalizer_429(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_430=protocol_fun;
                finalizer_430(protocol_obj);
            }
        }
    }
    else {
        ref_count_431=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_431)--;
        }
        count_432=*ref_count_431;
        if(        !no_free&&count_432<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_433=protocol_fun;
                        finalizer_433(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_434=fun;
                        finalizer_434(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_435=protocol_fun;
                        finalizer_435(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__92;
int len_436;
void* __right_value43 = (void*)0;
char* result_437;
char* __result_obj__93;
    if(    str==((void*)0)    ) {
        __result_obj__92 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__92 = come_decrement_ref_count(__result_obj__92, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__92;
    }
    len_436=strlen(str)+1;
    result_437=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_436)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_437,str,len_436);
    __result_obj__93 = (char*)come_increment_ref_count(result_437);
    (result_437 = come_decrement_ref_count(result_437, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__93 = come_decrement_ref_count(__result_obj__93, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__93;
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
void* __right_value44 = (void*)0;
char* __result_obj__94;
    __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value44=come_get_stackframe())));
    (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__95;
    __result_obj__95 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__95;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value45 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__96;
    self->size=128;
    __dec_obj11=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2897, "char*"));
    __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__96 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value46 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__97;
    self->size=128;
    __dec_obj12=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2907, "char*"));
    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__97 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__98;
void* __right_value47 = (void*)0;
struct buffer* result_438;
void* __right_value48 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__99;
    if(    self==((void*)0)    ) {
        __result_obj__98 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__98;
    }
    result_438=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_438->size=self->size;
    __dec_obj13=result_438->buf,
    result_438->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_438->len=self->len;
    memcpy(result_438->buf,self->buf,self->len);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_438);
    come_call_finalizer(buffer_finalize, result_438, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
_Bool __result_obj__100;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__100 = string_equals(((char*)(__right_value49=buffer_to_string(left))),((char*)(__right_value50=buffer_to_string(right))));
    (__right_value49 = come_decrement_ref_count(__right_value49, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value50 = come_decrement_ref_count(__right_value50, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__100;
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
struct buffer* __result_obj__101;
void* __right_value51 = (void*)0;
char* old_buf_439;
int old_len_440;
int new_size_441;
void* __right_value52 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__102;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__101 = self;
        return __result_obj__101;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_439=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_439,self->buf,self->size);
        old_len_440=self->len;
        new_size_441=(self->size+size+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_441)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_439,old_len_440);
        self->buf[old_len_440]=0;
        self->size=new_size_441;
        (old_buf_439 = come_decrement_ref_count(old_buf_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__102 = self;
    return __result_obj__102;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__103;
void* __right_value53 = (void*)0;
char* old_buf_442;
int old_len_443;
int new_size_444;
void* __right_value54 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__104;
    if(    self==((void*)0)    ) {
        __result_obj__103 = ((void*)0);
        return __result_obj__103;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_442=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_443=self->len;
        new_size_444=(self->size+10+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_444)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_442,old_len_443);
        self->buf[old_len_443]=0;
        self->size=new_size_444;
        (old_buf_442 = come_decrement_ref_count(old_buf_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__104 = self;
    return __result_obj__104;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__105;
int size_445;
void* __right_value55 = (void*)0;
char* old_buf_446;
int old_len_447;
int new_size_448;
void* __right_value56 = (void*)0;
char* __dec_obj16;
struct buffer* __result_obj__106;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__105 = self;
        return __result_obj__105;
    }
    size_445=strlen(mem);
    if(    self->len+size_445+1+1>=self->size    ) {
        old_buf_446=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_446,self->buf,self->size);
        old_len_447=self->len;
        new_size_448=(self->size+size_445+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_448)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_446,old_len_447);
        self->buf[old_len_447]=0;
        self->size=new_size_448;
        (old_buf_446 = come_decrement_ref_count(old_buf_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_445);
    self->len+=size_445;
    self->buf[self->len]=0;
    __result_obj__106 = self;
    return __result_obj__106;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__107;
va_list args_449;
char* result_450;
int len_451;
struct buffer* __result_obj__108;
void* __right_value57 = (void*)0;
char* mem_452;
int size_453;
void* __right_value58 = (void*)0;
char* old_buf_454;
int old_len_455;
int new_size_456;
void* __right_value59 = (void*)0;
char* __dec_obj17;
struct buffer* __result_obj__109;
result_450 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__107 = self;
        return __result_obj__107;
    }
    __builtin_va_start(args_449,msg);
    len_451=vasprintf(&result_450,msg,args_449);
    __builtin_va_end(args_449);
    if(    len_451<0    ) {
        __result_obj__108 = self;
        return __result_obj__108;
    }
    mem_452=(char*)come_increment_ref_count(__builtin_string(result_450));
    size_453=strlen(mem_452);
    if(    self->len+size_453+1+1>=self->size    ) {
        old_buf_454=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_454,self->buf,self->size);
        old_len_455=self->len;
        new_size_456=(self->size+size_453+1)*2;
        __dec_obj17=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_456)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_454,old_len_455);
        self->buf[old_len_455]=0;
        self->size=new_size_456;
        (old_buf_454 = come_decrement_ref_count(old_buf_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_452,size_453);
    self->len+=size_453;
    self->buf[self->len]=0;
    free(result_450);
    __result_obj__109 = self;
    (mem_452 = come_decrement_ref_count(mem_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__109;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__110;
int size_457;
void* __right_value60 = (void*)0;
char* old_buf_458;
int old_len_459;
int new_size_460;
void* __right_value61 = (void*)0;
char* __dec_obj18;
struct buffer* __result_obj__111;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__110 = self;
        return __result_obj__110;
    }
    size_457=strlen(mem)+1;
    if(    self->len+size_457+1+1+1>=self->size    ) {
        old_buf_458=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_458,self->buf,self->size);
        old_len_459=self->len;
        new_size_460=(self->size+size_457+1)*2;
        __dec_obj18=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_460)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_458,old_len_459);
        self->buf[old_len_459]=0;
        self->size=new_size_460;
        (old_buf_458 = come_decrement_ref_count(old_buf_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_457);
    self->len+=size_457;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__112;
int* mem_461;
int size_462;
void* __right_value62 = (void*)0;
char* old_buf_463;
int old_len_464;
int new_size_465;
void* __right_value63 = (void*)0;
char* __dec_obj19;
struct buffer* __result_obj__113;
    if(    self==((void*)0)    ) {
        __result_obj__112 = ((void*)0);
        return __result_obj__112;
    }
    mem_461=&value;
    size_462=sizeof(int);
    if(    self->len+size_462+1+1>=self->size    ) {
        old_buf_463=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_463,self->buf,self->size);
        old_len_464=self->len;
        new_size_465=(self->size+size_462+1)*2;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_465)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_463,old_len_464);
        self->buf[old_len_464]=0;
        self->size=new_size_465;
        (old_buf_463 = come_decrement_ref_count(old_buf_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_461,size_462);
    self->len+=size_462;
    self->buf[self->len]=0;
    __result_obj__113 = self;
    return __result_obj__113;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_466;
int size_467;
void* __right_value64 = (void*)0;
char* old_buf_468;
int old_len_469;
int new_size_470;
void* __right_value65 = (void*)0;
char* __dec_obj20;
struct buffer* __result_obj__114;
    mem_466=&value;
    size_467=sizeof(long);
    if(    self->len+size_467+1+1>=self->size    ) {
        old_buf_468=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_468,self->buf,self->size);
        old_len_469=self->len;
        new_size_470=(self->size+size_467+1)*2;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_470)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_468,old_len_469);
        self->buf[old_len_469]=0;
        self->size=new_size_470;
        (old_buf_468 = come_decrement_ref_count(old_buf_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_466,size_467);
    self->len+=size_467;
    self->buf[self->len]=0;
    __result_obj__114 = self;
    return __result_obj__114;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__115;
short* mem_471;
int size_472;
void* __right_value66 = (void*)0;
char* old_buf_473;
int old_len_474;
int new_size_475;
void* __right_value67 = (void*)0;
char* __dec_obj21;
struct buffer* __result_obj__116;
    if(    self==((void*)0)    ) {
        __result_obj__115 = ((void*)0);
        return __result_obj__115;
    }
    mem_471=&value;
    size_472=sizeof(short);
    if(    self->len+size_472+1+1>=self->size    ) {
        old_buf_473=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_473,self->buf,self->size);
        old_len_474=self->len;
        new_size_475=(self->size+size_472+1)*2;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_475)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_473,old_len_474);
        self->buf[old_len_474]=0;
        self->size=new_size_475;
        (old_buf_473 = come_decrement_ref_count(old_buf_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_471,size_472);
    self->len+=size_472;
    self->buf[self->len]=0;
    __result_obj__116 = self;
    return __result_obj__116;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__117;
int len_476;
int new_size_477;
void* __right_value68 = (void*)0;
char* __dec_obj22;
int i_478;
struct buffer* __result_obj__118;
    if(    self==((void*)0)    ) {
        __result_obj__117 = ((void*)0);
        return __result_obj__117;
    }
    len_476=self->len;
    len_476=(len_476+3)&~3;
    if(    len_476>=self->size    ) {
        new_size_477=(self->size+1+1)*2;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_477)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_477;
    }
    for(    i_478=self->len    ;    i_478<len_476    ;    i_478++    ){
        self->buf[i_478]=0;
    }
    self->len=len_476;
    __result_obj__118 = self;
    return __result_obj__118;
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
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* result_479;
struct buffer* __result_obj__119;
struct buffer* __result_obj__120;
    result_479=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__119 = (struct buffer*)come_increment_ref_count(result_479);
        come_call_finalizer(buffer_finalize, result_479, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__119;
    }
    buffer_append_str(result_479,self);
    __result_obj__120 = (struct buffer*)come_increment_ref_count(result_479);
    come_call_finalizer(buffer_finalize, result_479, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

char* buffer_to_string(struct buffer* self){
void* __right_value71 = (void*)0;
char* __result_obj__121;
void* __right_value72 = (void*)0;
char* __result_obj__122;
    if(    self==((void*)0)    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value71=__builtin_string(""))));
        (__right_value71 = come_decrement_ref_count(__right_value71, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value72=__builtin_string(self->buf))));
    (__right_value72 = come_decrement_ref_count(__right_value72, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__123;
    __result_obj__123 = self->buf;
    return __result_obj__123;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* result_480;
struct buffer* __result_obj__124;
    result_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_480,self,sizeof(char)*len);
    __result_obj__124 = (struct buffer*)come_increment_ref_count(result_480);
    come_call_finalizer(buffer_finalize, result_480, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* result_481;
int i_482;
struct buffer* __result_obj__125;
    result_481=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_482=0    ;    i_482<len    ;    i_482++    ){
        buffer_append(result_481,self[i_482],strlen(self[i_482]));
    }
    __result_obj__125 = (struct buffer*)come_increment_ref_count(result_481);
    come_call_finalizer(buffer_finalize, result_481, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* result_483;
struct buffer* __result_obj__126;
    result_483=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_483,(char*)self,sizeof(short)*len);
    __result_obj__126 = (struct buffer*)come_increment_ref_count(result_483);
    come_call_finalizer(buffer_finalize, result_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* result_484;
struct buffer* __result_obj__127;
    result_484=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_484,(char*)self,sizeof(int)*len);
    __result_obj__127 = (struct buffer*)come_increment_ref_count(result_484);
    come_call_finalizer(buffer_finalize, result_484, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* result_485;
struct buffer* __result_obj__128;
    result_485=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_485,(char*)self,sizeof(long)*len);
    __result_obj__128 = (struct buffer*)come_increment_ref_count(result_485);
    come_call_finalizer(buffer_finalize, result_485, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* result_486;
struct buffer* __result_obj__129;
    result_486=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_486,(char*)self,sizeof(float)*len);
    __result_obj__129 = (struct buffer*)come_increment_ref_count(result_486);
    come_call_finalizer(buffer_finalize, result_486, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* result_487;
struct buffer* __result_obj__130;
    result_487=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_487,(char*)self,sizeof(double)*len);
    __result_obj__130 = (struct buffer*)come_increment_ref_count(result_487);
    come_call_finalizer(buffer_finalize, result_487, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

char* buffer_printable(struct buffer* self){
int len_488;
void* __right_value87 = (void*)0;
char* result_489;
int n_490;
int i_491;
unsigned char c_492;
char* __result_obj__131;
    len_488=self->len;
    result_489=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_488*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_490=0;
    for(    i_491=0    ;    i_491<len_488    ;    i_491++    ){
        c_492=self->buf[i_491];
        if(        (c_492>=0&&c_492<32)||c_492==127        ) {
            result_489[n_490++]=94;
            result_489[n_490++]=c_492+65-1;
        }
        else if(        c_492>127        ) {
            result_489[n_490++]=63;
        }
        else {
            result_489[n_490++]=c_492;
        }
    }
    result_489[n_490]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_489);
    (result_489 = come_decrement_ref_count(result_489, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_493;
struct list$1char$* __result_obj__133;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_493=0    ;    i_493<num_value    ;    i_493++    ){
        list$1char$_push_back(self,values[i_493]);
    }
    __result_obj__133 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__133;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value89 = (void*)0;
struct list_item$1char$* litem_494;
void* __right_value90 = (void*)0;
struct list_item$1char$* litem_495;
void* __right_value91 = (void*)0;
struct list_item$1char$* litem_496;
struct list$1char$* __result_obj__132;
    if(    self->len==0    ) {
        litem_494=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value89=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_494->prev=((void*)0);
        litem_494->next=((void*)0);
        litem_494->item=item;
        self->tail=litem_494;
        self->head=litem_494;
    }
    else if(    self->len==1    ) {
        litem_495=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value90=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_495->prev=self->head;
        litem_495->next=((void*)0);
        litem_495->item=item;
        self->tail=litem_495;
        self->head->next=litem_495;
    }
    else {
        litem_496=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value91=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_496->prev=self->tail;
        litem_496->next=((void*)0);
        litem_496->item=item;
        self->tail->next=litem_496;
        self->tail=litem_496;
    }
    self->len++;
    __result_obj__132 = self;
    return __result_obj__132;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_497;
struct list_item$1char$* prev_it_498;
    it_497=self->head;
    while(    it_497!=((void*)0)    ) {
        prev_it_498=it_497;
        it_497=it_497->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_498, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value88 = (void*)0;
void* __right_value92 = (void*)0;
struct list$1char$* __result_obj__134;
    __result_obj__134 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value92=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3356, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value92, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_499;
struct list$1char$p* __result_obj__136;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_499=0    ;    i_499<num_value    ;    i_499++    ){
        list$1char$p_push_back(self,values[i_499]);
    }
    __result_obj__136 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value94 = (void*)0;
struct list_item$1char$p* litem_500;
void* __right_value95 = (void*)0;
struct list_item$1char$p* litem_501;
void* __right_value96 = (void*)0;
struct list_item$1char$p* litem_502;
struct list$1char$p* __result_obj__135;
    if(    self->len==0    ) {
        litem_500=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value94=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_500->prev=((void*)0);
        litem_500->next=((void*)0);
        litem_500->item=item;
        self->tail=litem_500;
        self->head=litem_500;
    }
    else if(    self->len==1    ) {
        litem_501=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value95=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_501->prev=self->head;
        litem_501->next=((void*)0);
        litem_501->item=item;
        self->tail=litem_501;
        self->head->next=litem_501;
    }
    else {
        litem_502=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value96=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_502->prev=self->tail;
        litem_502->next=((void*)0);
        litem_502->item=item;
        self->tail->next=litem_502;
        self->tail=litem_502;
    }
    self->len++;
    __result_obj__135 = self;
    return __result_obj__135;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_503;
struct list_item$1char$p* prev_it_504;
    it_503=self->head;
    while(    it_503!=((void*)0)    ) {
        prev_it_504=it_503;
        it_503=it_503->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_504, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value93 = (void*)0;
void* __right_value97 = (void*)0;
struct list$1char$p* __result_obj__137;
    __result_obj__137 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value97=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3361, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value97, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_505;
struct list$1short$* __result_obj__139;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_505=0    ;    i_505<num_value    ;    i_505++    ){
        list$1short$_push_back(self,values[i_505]);
    }
    __result_obj__139 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value99 = (void*)0;
struct list_item$1short$* litem_506;
void* __right_value100 = (void*)0;
struct list_item$1short$* litem_507;
void* __right_value101 = (void*)0;
struct list_item$1short$* litem_508;
struct list$1short$* __result_obj__138;
    if(    self->len==0    ) {
        litem_506=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value99=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_506->prev=((void*)0);
        litem_506->next=((void*)0);
        litem_506->item=item;
        self->tail=litem_506;
        self->head=litem_506;
    }
    else if(    self->len==1    ) {
        litem_507=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value100=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_507->prev=self->head;
        litem_507->next=((void*)0);
        litem_507->item=item;
        self->tail=litem_507;
        self->head->next=litem_507;
    }
    else {
        litem_508=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value101=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_508->prev=self->tail;
        litem_508->next=((void*)0);
        litem_508->item=item;
        self->tail->next=litem_508;
        self->tail=litem_508;
    }
    self->len++;
    __result_obj__138 = self;
    return __result_obj__138;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_509;
struct list_item$1short$* prev_it_510;
    it_509=self->head;
    while(    it_509!=((void*)0)    ) {
        prev_it_510=it_509;
        it_509=it_509->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_510, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value98 = (void*)0;
void* __right_value102 = (void*)0;
struct list$1short$* __result_obj__140;
    __result_obj__140 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value102=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3366, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value102, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__140;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_511;
struct list$1int$* __result_obj__142;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_511=0    ;    i_511<num_value    ;    i_511++    ){
        list$1int$_push_back(self,values[i_511]);
    }
    __result_obj__142 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value104 = (void*)0;
struct list_item$1int$* litem_512;
void* __right_value105 = (void*)0;
struct list_item$1int$* litem_513;
void* __right_value106 = (void*)0;
struct list_item$1int$* litem_514;
struct list$1int$* __result_obj__141;
    if(    self->len==0    ) {
        litem_512=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value104=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_512->prev=((void*)0);
        litem_512->next=((void*)0);
        litem_512->item=item;
        self->tail=litem_512;
        self->head=litem_512;
    }
    else if(    self->len==1    ) {
        litem_513=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value105=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_513->prev=self->head;
        litem_513->next=((void*)0);
        litem_513->item=item;
        self->tail=litem_513;
        self->head->next=litem_513;
    }
    else {
        litem_514=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value106=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_514->prev=self->tail;
        litem_514->next=((void*)0);
        litem_514->item=item;
        self->tail->next=litem_514;
        self->tail=litem_514;
    }
    self->len++;
    __result_obj__141 = self;
    return __result_obj__141;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_515;
struct list_item$1int$* prev_it_516;
    it_515=self->head;
    while(    it_515!=((void*)0)    ) {
        prev_it_516=it_515;
        it_515=it_515->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_516, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value103 = (void*)0;
void* __right_value107 = (void*)0;
struct list$1int$* __result_obj__143;
    __result_obj__143 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value107=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3371, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value107, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__143, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__143;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_517;
struct list$1long$* __result_obj__145;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_517=0    ;    i_517<num_value    ;    i_517++    ){
        list$1long$_push_back(self,values[i_517]);
    }
    __result_obj__145 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__145, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__145;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value109 = (void*)0;
struct list_item$1long$* litem_518;
void* __right_value110 = (void*)0;
struct list_item$1long$* litem_519;
void* __right_value111 = (void*)0;
struct list_item$1long$* litem_520;
struct list$1long$* __result_obj__144;
    if(    self->len==0    ) {
        litem_518=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value109=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_518->prev=((void*)0);
        litem_518->next=((void*)0);
        litem_518->item=item;
        self->tail=litem_518;
        self->head=litem_518;
    }
    else if(    self->len==1    ) {
        litem_519=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value110=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_519->prev=self->head;
        litem_519->next=((void*)0);
        litem_519->item=item;
        self->tail=litem_519;
        self->head->next=litem_519;
    }
    else {
        litem_520=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value111=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_520->prev=self->tail;
        litem_520->next=((void*)0);
        litem_520->item=item;
        self->tail->next=litem_520;
        self->tail=litem_520;
    }
    self->len++;
    __result_obj__144 = self;
    return __result_obj__144;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_521;
struct list_item$1long$* prev_it_522;
    it_521=self->head;
    while(    it_521!=((void*)0)    ) {
        prev_it_522=it_521;
        it_521=it_521->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_522, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value108 = (void*)0;
void* __right_value112 = (void*)0;
struct list$1long$* __result_obj__146;
    __result_obj__146 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value112=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3376, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value112, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__146;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_523;
struct list$1float$* __result_obj__148;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_523=0    ;    i_523<num_value    ;    i_523++    ){
        list$1float$_push_back(self,values[i_523]);
    }
    __result_obj__148 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value114 = (void*)0;
struct list_item$1float$* litem_524;
void* __right_value115 = (void*)0;
struct list_item$1float$* litem_525;
void* __right_value116 = (void*)0;
struct list_item$1float$* litem_526;
struct list$1float$* __result_obj__147;
    if(    self->len==0    ) {
        litem_524=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value114=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_524->prev=((void*)0);
        litem_524->next=((void*)0);
        litem_524->item=item;
        self->tail=litem_524;
        self->head=litem_524;
    }
    else if(    self->len==1    ) {
        litem_525=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value115=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_525->prev=self->head;
        litem_525->next=((void*)0);
        litem_525->item=item;
        self->tail=litem_525;
        self->head->next=litem_525;
    }
    else {
        litem_526=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value116=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_526->prev=self->tail;
        litem_526->next=((void*)0);
        litem_526->item=item;
        self->tail->next=litem_526;
        self->tail=litem_526;
    }
    self->len++;
    __result_obj__147 = self;
    return __result_obj__147;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_527;
struct list_item$1float$* prev_it_528;
    it_527=self->head;
    while(    it_527!=((void*)0)    ) {
        prev_it_528=it_527;
        it_527=it_527->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_528, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value113 = (void*)0;
void* __right_value117 = (void*)0;
struct list$1float$* __result_obj__149;
    __result_obj__149 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value117=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3381, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value117, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__149;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_529;
struct list$1double$* __result_obj__151;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_529=0    ;    i_529<num_value    ;    i_529++    ){
        list$1double$_push_back(self,values[i_529]);
    }
    __result_obj__151 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value119 = (void*)0;
struct list_item$1double$* litem_530;
void* __right_value120 = (void*)0;
struct list_item$1double$* litem_531;
void* __right_value121 = (void*)0;
struct list_item$1double$* litem_532;
struct list$1double$* __result_obj__150;
    if(    self->len==0    ) {
        litem_530=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value119=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_530->prev=((void*)0);
        litem_530->next=((void*)0);
        litem_530->item=item;
        self->tail=litem_530;
        self->head=litem_530;
    }
    else if(    self->len==1    ) {
        litem_531=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value120=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_531->prev=self->head;
        litem_531->next=((void*)0);
        litem_531->item=item;
        self->tail=litem_531;
        self->head->next=litem_531;
    }
    else {
        litem_532=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value121=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_532->prev=self->tail;
        litem_532->next=((void*)0);
        litem_532->item=item;
        self->tail->next=litem_532;
        self->tail=litem_532;
    }
    self->len++;
    __result_obj__150 = self;
    return __result_obj__150;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_533;
struct list_item$1double$* prev_it_534;
    it_533=self->head;
    while(    it_533!=((void*)0)    ) {
        prev_it_534=it_533;
        it_533=it_533->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value118 = (void*)0;
void* __right_value122 = (void*)0;
struct list$1double$* __result_obj__152;
    __result_obj__152 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value122=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3386, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__152, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__152;
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
void* __right_value123 = (void*)0;
char* __result_obj__153;
int len_535;
void* __right_value124 = (void*)0;
char* result_536;
char* __result_obj__154;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    len_535=strlen(self)+strlen(right);
    result_536=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_535+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_536,self,len_535+1);
    strncat(result_536,right,len_535+1);
    __result_obj__154 = (char*)come_increment_ref_count(result_536);
    (result_536 = come_decrement_ref_count(result_536, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* string_operator_add(char* self, char* right){
void* __right_value125 = (void*)0;
char* __result_obj__155;
int len_537;
void* __right_value126 = (void*)0;
char* result_538;
char* __result_obj__156;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    len_537=strlen(self)+strlen(right);
    result_538=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_537+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_538,self,len_537+1);
    strncat(result_538,right,len_537+1);
    __result_obj__156 = (char*)come_increment_ref_count(result_538);
    (result_538 = come_decrement_ref_count(result_538, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* charp_operator_mult(char* self, int right){
void* __right_value127 = (void*)0;
char* __result_obj__157;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* buf_539;
int i_540;
void* __right_value130 = (void*)0;
char* __result_obj__158;
    if(    self==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value127=__builtin_string(""))));
        (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    buf_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_540=0    ;    i_540<right    ;    i_540++    ){
        buffer_append_str(buf_539,self);
    }
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value130=buffer_to_string(buf_539))));
    come_call_finalizer(buffer_finalize, buf_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* string_operator_mult(char* self, int right){
void* __right_value131 = (void*)0;
char* __result_obj__159;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct buffer* buf_541;
int i_542;
void* __right_value134 = (void*)0;
char* __result_obj__160;
    if(    self==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value131=__builtin_string(""))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    buf_541=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_542=0    ;    i_542<right    ;    i_542++    ){
        buffer_append_str(buf_541,self);
    }
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value134=buffer_to_string(buf_541))));
    come_call_finalizer(buffer_finalize, buf_541, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_543;
int i_544;
    result_543=(_Bool)0;
    for(    i_544=0    ;    i_544<len    ;    i_544++    ){
        if(        strncmp(self[i_544],str,strlen(self[i_544]))==0        ) {
            result_543=(_Bool)1;
            break;
        }
    }
    return result_543;
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
int result_545;
char* p_546;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_545=0;
    p_546=value;
    while(    *p_546    ) {
        result_545+=(*p_546);
        p_546++;
    }
    return result_545;
}

unsigned int string_get_hash_key(char* value){
int result_547;
char* p_548;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_547=0;
    p_548=value;
    while(    *p_548    ) {
        result_547+=(*p_548);
        p_548++;
    }
    return result_547;
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
_Bool result_549;
    result_549=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_549;
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
_Bool result_550;
    result_550=(c>=32&&c<=126);
    return result_550;
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
void* __right_value135 = (void*)0;
char* __result_obj__161;
int len_551;
void* __right_value136 = (void*)0;
char* result_552;
int i_553;
char* __result_obj__162;
    if(    str==((void*)0)    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(""))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    len_551=strlen(str);
    result_552=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_551+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_553=0    ;    i_553<len_551    ;    i_553++    ){
        result_552[i_553]=str[len_551-i_553-1];
    }
    result_552[len_551]=0;
    __result_obj__162 = (char*)come_increment_ref_count(result_552);
    (result_552 = come_decrement_ref_count(result_552, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value137 = (void*)0;
char* __result_obj__163;
int len_554;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
char* __result_obj__164;
void* __right_value140 = (void*)0;
char* __result_obj__165;
void* __right_value141 = (void*)0;
char* __result_obj__166;
void* __right_value142 = (void*)0;
char* result_555;
char* __result_obj__167;
    if(    str==((void*)0)    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(""))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    len_554=strlen(str);
    if(    head<0    ) {
        head+=len_554;
    }
    if(    tail<0    ) {
        tail+=len_554+1;
    }
    if(    head>tail    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value139=charp_reverse(((char*)(__right_value138=charp_substring(str,tail,head)))))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_554    ) {
        tail=len_554;
    }
    if(    head==tail    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    if(    tail-head+1<1    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    result_555=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_555,str+head,tail-head);
    result_555[tail-head]=0;
    __result_obj__167 = (char*)come_increment_ref_count(result_555);
    (result_555 = come_decrement_ref_count(result_555, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value143 = (void*)0;
char* __result_obj__168;
int len_556;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
char* __result_obj__169;
void* __right_value146 = (void*)0;
char* __result_obj__170;
void* __right_value147 = (void*)0;
char* __result_obj__171;
void* __right_value148 = (void*)0;
char* result_557;
char* __result_obj__172;
    if(    str==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    len_556=strlen(str);
    if(    head<0    ) {
        head+=len_556;
    }
    if(    tail<0    ) {
        tail+=len_556+1;
    }
    if(    head>tail    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value145=charp_reverse(((char*)(__right_value144=charp_substring(str,tail,head)))))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_556    ) {
        tail=len_556;
    }
    if(    head==tail    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    if(    tail-head+1<1    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    result_557=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_557,str+head,tail-head);
    result_557[tail-head]=0;
    __result_obj__172 = (char*)come_increment_ref_count(result_557);
    (result_557 = come_decrement_ref_count(result_557, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value149 = (void*)0;
char* __result_obj__173;
int len_558;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
char* __result_obj__174;
void* __right_value152 = (void*)0;
char* __result_obj__175;
void* __right_value153 = (void*)0;
char* __result_obj__176;
void* __right_value154 = (void*)0;
char* result_559;
char* __result_obj__177;
    if(    str==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    len_558=strlen(str);
    if(    head<0    ) {
        head+=len_558;
    }
    if(    tail<0    ) {
        tail+=len_558+1;
    }
    if(    head>tail    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value151=charp_reverse(((char*)(__right_value150=charp_substring(str,tail,head)))))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_558    ) {
        tail=len_558;
    }
    if(    head==tail    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    if(    tail-head+1<1    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    result_559=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_559,str+head,tail-head);
    result_559[tail-head]=0;
    __result_obj__177 = (char*)come_increment_ref_count(result_559);
    (result_559 = come_decrement_ref_count(result_559, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* xsprintf(char* msg, ...){
void* __right_value155 = (void*)0;
char* __result_obj__178;
va_list args_560;
char* result_561;
int len_562;
void* __right_value156 = (void*)0;
char* __result_obj__179;
void* __right_value157 = (void*)0;
char* result2_563;
char* __result_obj__180;
result_561 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(""))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    __builtin_va_start(args_560,msg);
    len_562=vasprintf(&result_561,msg,args_560);
    __builtin_va_end(args_560);
    if(    len_562<0    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    result2_563=(char*)come_increment_ref_count(__builtin_string(result_561));
    free(result_561);
    __result_obj__180 = (char*)come_increment_ref_count(result2_563);
    (result2_563 = come_decrement_ref_count(result2_563, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value158 = (void*)0;
char* __result_obj__181;
int len_564;
void* __right_value159 = (void*)0;
char* __result_obj__182;
void* __right_value160 = (void*)0;
char* __result_obj__183;
void* __right_value161 = (void*)0;
char* result_565;
char* __result_obj__184;
    if(    str==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(""))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    len_564=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string(str))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    if(    head<0    ) {
        head+=len_564;
    }
    if(    tail<0    ) {
        tail+=len_564+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string(str))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    if(    tail>=len_564    ) {
        tail=len_564;
    }
    result_565=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_564-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_565,str,head);
    memcpy(result_565+head,str+tail,len_564-tail);
    result_565[len_564-(tail-head)]=0;
    __result_obj__184 = (char*)come_increment_ref_count(result_565);
    (result_565 = come_decrement_ref_count(result_565, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__185;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__185 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__185;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_566;
struct list_item$1char$ph* prev_it_567;
    it_566=self->head;
    while(    it_566!=((void*)0)    ) {
        prev_it_567=it_566;
        it_566=it_566->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_567, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value168 = (void*)0;
struct list_item$1char$ph* litem_571;
char* __dec_obj23;
void* __right_value169 = (void*)0;
struct list_item$1char$ph* litem_572;
char* __dec_obj24;
void* __right_value170 = (void*)0;
struct list_item$1char$ph* litem_573;
char* __dec_obj25;
struct list$1char$ph* __result_obj__187;
    if(    self->len==0    ) {
        litem_571=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value168=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_571->prev=((void*)0);
        litem_571->next=((void*)0);
        __dec_obj23=litem_571->item,
        litem_571->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_571;
        self->head=litem_571;
    }
    else if(    self->len==1    ) {
        litem_572=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value169=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_572->prev=self->head;
        litem_572->next=((void*)0);
        __dec_obj24=litem_572->item,
        litem_572->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_572;
        self->head->next=litem_572;
    }
    else {
        litem_573=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value170=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_573->prev=self->tail;
        litem_573->next=((void*)0);
        __dec_obj25=litem_573->item,
        litem_573->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_573;
        self->tail=litem_573;
    }
    self->len++;
    __result_obj__187 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__187;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct list$1char$ph* __result_obj__186;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct list$1char$ph* result_568;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct buffer* str_569;
int i_570;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct list$1char$ph* __result_obj__188;
    if(    self==((void*)0)    ) {
        __result_obj__186 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value163=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value163, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__186;
    }
    result_568=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_569=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_570=0    ;    i_570<charp_length(self)    ;    i_570++    ){
        if(        self[i_570]==c        ) {
            list$1char$ph_push_back(result_568,(char*)come_increment_ref_count(__builtin_string(str_569->buf)));
            buffer_reset(str_569);
        }
        else {
            buffer_append_char(str_569,self[i_570]);
        }
    }
    if(    buffer_length(str_569)!=0    ) {
        list$1char$ph_push_back(result_568,(char*)come_increment_ref_count(__builtin_string(str_569->buf)));
    }
    __result_obj__188 = (struct list$1char$ph*)come_increment_ref_count(result_568);
    come_call_finalizer(list$1char$ph$p_finalize, result_568, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_569, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__188;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value173 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value173=xsprintf(msg,self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value174 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value174=xsprintf(msg,self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* charp_printable(char* str){
int len_574;
void* __right_value175 = (void*)0;
char* result_575;
int n_576;
int i_577;
char c_578;
char* __result_obj__191;
    len_574=charp_length(str);
    result_575=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_574*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_576=0;
    for(    i_577=0    ;    i_577<len_574    ;    i_577++    ){
        c_578=str[i_577];
        if(        (c_578>=0&&c_578<32)||c_578==127        ) {
            result_575[n_576++]=94;
            result_575[n_576++]=c_578+65-1;
        }
        else {
            result_575[n_576++]=c_578;
        }
    }
    result_575[n_576]=0;
    __result_obj__191 = (char*)come_increment_ref_count(result_575);
    (result_575 = come_decrement_ref_count(result_575, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value176 = (void*)0;
char* __result_obj__192;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct buffer* result_579;
char* p_580;
char* p2_581;
void* __right_value179 = (void*)0;
char* __result_obj__193;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(self))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__192;
    }
    result_579=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_580=self;
    while(    (_Bool)1    ) {
        p2_581=strstr(p_580,str);
        if(        p2_581==((void*)0)        ) {
            p2_581=p_580;
            while(            *p2_581            ) {
                p2_581++;
            }
            buffer_append(result_579,p_580,p2_581-p_580);
            break;
        }
        buffer_append(result_579,p_580,p2_581-p_580);
        buffer_append_str(result_579,replace);
        p_580=p2_581+strlen(str);
    }
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value179=buffer_to_string(result_579))));
    come_call_finalizer(buffer_finalize, result_579, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* xbasename(char* path){
void* __right_value180 = (void*)0;
char* __result_obj__194;
char* p_582;
void* __right_value181 = (void*)0;
char* __result_obj__195;
void* __right_value182 = (void*)0;
char* __result_obj__196;
void* __right_value183 = (void*)0;
char* __result_obj__197;
    if(    path==((void*)0)    ) {
        __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string(""))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__194;
    }
    p_582=path+strlen(path);
    while(    p_582>=path    ) {
        if(        *p_582==47        ) {
            break;
        }
        else {
            p_582--;
        }
    }
    if(    p_582<path    ) {
        __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value181=__builtin_string(path))));
        (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__195;
    }
    else {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(p_582+1))));
        (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value183=__builtin_string(""))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* xnoextname(char* path){
void* __right_value184 = (void*)0;
char* __result_obj__198;
void* __right_value185 = (void*)0;
char* path2_583;
char* p_584;
void* __right_value186 = (void*)0;
char* __result_obj__199;
void* __right_value187 = (void*)0;
char* __result_obj__200;
void* __right_value188 = (void*)0;
char* __result_obj__201;
    if(    path==((void*)0)    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value184=__builtin_string(""))));
        (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    path2_583=(char*)come_increment_ref_count(xbasename(path));
    p_584=path2_583+strlen(path2_583);
    while(    p_584>=path2_583    ) {
        if(        *p_584==46        ) {
            break;
        }
        else {
            p_584--;
        }
    }
    if(    p_584<path2_583    ) {
        __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string(path2_583))));
        (path2_583 = come_decrement_ref_count(path2_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__199;
    }
    else {
        __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value187=charp_substring(path2_583,0,p_584-path2_583))));
        (path2_583 = come_decrement_ref_count(path2_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__200;
    }
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string(""))));
    (path2_583 = come_decrement_ref_count(path2_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
}

char* xextname(char* path){
void* __right_value189 = (void*)0;
char* __result_obj__202;
char* p_585;
void* __right_value190 = (void*)0;
char* __result_obj__203;
void* __right_value191 = (void*)0;
char* __result_obj__204;
void* __right_value192 = (void*)0;
char* __result_obj__205;
    if(    path==((void*)0)    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string(""))));
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    p_585=path+strlen(path);
    while(    p_585>=path    ) {
        if(        *p_585==46        ) {
            break;
        }
        else {
            p_585--;
        }
    }
    if(    p_585<path    ) {
        __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string(path))));
        (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__203;
    }
    else {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string(p_585+1))));
        (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string(""))));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

char* bool_to_string(_Bool self){
void* __right_value193 = (void*)0;
char* __result_obj__206;
void* __right_value194 = (void*)0;
char* __result_obj__207;
    if(    self    ) {
        __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value193=__builtin_string("true"))));
        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__206;
    }
    else {
        __result_obj__207 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string("false"))));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__207 = come_decrement_ref_count(__result_obj__207, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__207;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value195 = (void*)0;
char* __result_obj__208;
void* __right_value196 = (void*)0;
char* __result_obj__209;
    if(    self    ) {
        __result_obj__208 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string("true"))));
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__208;
    }
    else {
        __result_obj__209 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string("false"))));
        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__209;
    }
}

char* char_to_string(char self){
void* __right_value197 = (void*)0;
char* __result_obj__210;
    __result_obj__210 = (char*)come_increment_ref_count(((char*)(__right_value197=xsprintf("%c",self))));
    (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__210;
}

char* short_to_string(short self){
void* __right_value198 = (void*)0;
char* __result_obj__211;
    __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value198=xsprintf("%d",self))));
    (__right_value198 = come_decrement_ref_count(__right_value198, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__211;
}

char* int_to_string(int self){
void* __right_value199 = (void*)0;
char* __result_obj__212;
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value199=xsprintf("%d",self))));
    (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__212;
}

char* long_to_string(long self){
void* __right_value200 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value200=xsprintf("%ld",self))));
    (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__213;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value201 = (void*)0;
char* __result_obj__214;
    __result_obj__214 = (char*)come_increment_ref_count(((char*)(__right_value201=xsprintf("%ld",self))));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__214;
}

char* float_to_string(float self){
void* __right_value202 = (void*)0;
char* __result_obj__215;
    __result_obj__215 = (char*)come_increment_ref_count(((char*)(__right_value202=xsprintf("%f",self))));
    (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__215;
}

char* double_to_string(double self){
void* __right_value203 = (void*)0;
char* __result_obj__216;
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value203=xsprintf("%lf",self))));
    (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__216;
}

char* string_to_string(char* self){
void* __right_value204 = (void*)0;
char* __result_obj__217;
void* __right_value205 = (void*)0;
char* __result_obj__218;
    if(    self==((void*)0)    ) {
        __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string(""))));
        (__right_value204 = come_decrement_ref_count(__right_value204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__217;
    }
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value205=__builtin_string(self))));
    (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__218;
}

char* charp_to_string(char* self){
void* __right_value206 = (void*)0;
char* __result_obj__219;
void* __right_value207 = (void*)0;
char* __result_obj__220;
    if(    self==((void*)0)    ) {
        __result_obj__219 = (char*)come_increment_ref_count(((char*)(__right_value206=__builtin_string(""))));
        (__right_value206 = come_decrement_ref_count(__right_value206, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__219;
    }
    __result_obj__220 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(self))));
    (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__220;
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
void* __right_value208 = (void*)0;
char* __result_obj__221;
void* __right_value209 = (void*)0;
char* __result_obj__222;
    if(    self==((void*)0)    ) {
        __result_obj__221 = (char*)come_increment_ref_count(((char*)(__right_value208=__builtin_string(""))));
        (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__221;
    }
    puts(self);
    __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value209=__builtin_string(self))));
    (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__222;
}

char* charp_print(char* self){
void* __right_value210 = (void*)0;
char* __result_obj__223;
void* __right_value211 = (void*)0;
char* __result_obj__224;
    if(    self==((void*)0)    ) {
        __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value210=__builtin_string(""))));
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__223;
    }
    printf("%s",self);
    __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value211=__builtin_string(self))));
    (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__224;
}

char* charp_printf(char* self, ...){
void* __right_value212 = (void*)0;
char* __result_obj__225;
char* msg2_586;
va_list args_587;
void* __right_value213 = (void*)0;
char* __result_obj__226;
msg2_586 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__225 = (char*)come_increment_ref_count(((char*)(__right_value212=__builtin_string(""))));
        (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__225;
    }
    __builtin_va_start(args_587,self);
    vasprintf(&msg2_586,self,args_587);
    __builtin_va_end(args_587);
    printf("%s",msg2_586);
    free(msg2_586);
    __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value213=__builtin_string(self))));
    (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__226;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_588;
    for(    i_588=0    ;    i_588<self    ;    i_588++    ){
        block(parent,i_588);
    }
}

