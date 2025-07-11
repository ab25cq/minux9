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
  0x74, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd0, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xbd, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa4, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x23, 0x30, 0xb4, 0xfe, 0x03, 0x35, 0x84, 0xfe, 0x83, 0x35, 0x04, 0xfe,
  0x93, 0x08, 0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x3e, 0x85,
  0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4,
  0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x90, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd,
  0x23, 0x04, 0xf4, 0xfe, 0xa3, 0x04, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe,
  0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x7f, 0xef, 0x01, 0x00,
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
  0x13, 0x97, 0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x22,
  0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00,
  0x93, 0x87, 0x87, 0x21, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9,
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
  0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x87, 0x17,
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
  0x05, 0x61, 0x82, 0x80, 0x35, 0x71, 0x06, 0xed, 0x22, 0xe9, 0x00, 0x11,
  0x93, 0x07, 0x04, 0xfe, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x91, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0x85, 0xe7, 0x83, 0x27, 0x04, 0xfe,
  0x3e, 0x85, 0xef, 0xf0, 0x9f, 0x88, 0x83, 0x27, 0x44, 0xfe, 0x85, 0x45,
  0x3e, 0x85, 0xef, 0xf0, 0x7f, 0x8c, 0x83, 0x27, 0x44, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0x3f, 0x87, 0x19, 0x45, 0xef, 0xf0, 0xbf, 0x89, 0x83, 0x27,
  0x04, 0xfe, 0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86, 0xbe, 0x85, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x25, 0x0b, 0xef, 0xf0, 0xdf, 0xc3, 0x93, 0x08,
  0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x85, 0xe3, 0x83, 0x27, 0x04, 0xfe,
  0x03, 0x27, 0x44, 0xfe, 0x3a, 0x86, 0xbe, 0x85, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x45, 0x09, 0xef, 0xf0, 0xff, 0xc0, 0x19, 0x45, 0xef, 0xf0,
  0xff, 0x84, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x25, 0x09, 0xef, 0xf0,
  0x5f, 0xf2, 0x01, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c,
  0x6c, 0x29, 0x00, 0x00, 0xb0, 0xfe, 0xff, 0xff, 0xf4, 0xfd, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff, 0x38, 0xfe, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff, 0x68, 0xfe, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff, 0xd8, 0xfe, 0xff, 0xff,
  0xd8, 0xfe, 0xff, 0xff, 0x16, 0xfe, 0xff, 0xff, 0x50, 0x41, 0x52, 0x45,
  0x4e, 0x54, 0x20, 0x25, 0x64, 0x20, 0x25, 0x64, 0x0d, 0x0a, 0x00, 0x00,
  0x43, 0x48, 0x49, 0x4c, 0x44, 0x32, 0x20, 0x25, 0x64, 0x20, 0x25, 0x64,
  0x0a, 0x00, 0x00, 0x00, 0x45, 0x4e, 0x44, 0x00, 0x47, 0x43, 0x43, 0x3a,
  0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39,
  0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x41, 0x59, 0x00,
  0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x4f, 0x00, 0x00,
  0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31,
  0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66,
  0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d,
  0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31,
  0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x20, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0x74, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xa0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0xce, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x12, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0xa4, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0xa4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x3a, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x14, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0xa8, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0xa4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x74, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xda, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0xa4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0xa4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0xa8, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf5, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x16, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x68, 0x65, 0x6c, 0x6c, 0x2e, 0x63,
  0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x63, 0x6c, 0x6f, 0x73,
  0x65, 0x00, 0x65, 0x78, 0x69, 0x74, 0x00, 0x6d, 0x79, 0x5f, 0x64, 0x75,
  0x70, 0x32, 0x00, 0x70, 0x69, 0x70, 0x65, 0x00, 0x70, 0x75, 0x74, 0x63,
  0x68, 0x61, 0x72, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f,
  0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e,
  0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41,
  0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x70, 0x75, 0x74,
  0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x6c,
  0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e,
  0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74,
  0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x70, 0x72, 0x69,
  0x6e, 0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41,
  0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64,
  0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x70, 0x72, 0x69,
  0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d,
  0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00,
  0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74,
  0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00,
  0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69,
  0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74,
  0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbd, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x70, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x0c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x87, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int shell_elf_len=4048;
typedef unsigned long  int anonymous_var_nameX33;

typedef long  int anonymous_var_nameX34;

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
typedef unsigned long  int anonymous_var_nameX37;

typedef long  int anonymous_var_nameX38;

extern char _end2[];
extern char _end3[];
struct context
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

struct cpu
{
    struct proc* proc;
    struct context context;
    int noff;
    int intena;
};

struct cpu gCPU;
typedef unsigned long  long pte_t;

typedef unsigned long  long pde_t;

typedef unsigned long  long* pagetable_t;

unsigned long  long* kernel_pagetable;
struct proc
{
    struct context trapframe;
    struct context context;
    struct proc* parent;
    char* stack;
    char* stack_top;
    unsigned long  long vaddr;
    unsigned long  long* pagetable;
    char* program;
    int xstatus;
    int zombie;
    struct file* file_table;
};

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
int fs_close(int fd);
int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);
void pipe_open(int* fd1, int* fd2);
int piperead(int fd, char* addr, int n);
int pipewrite(int fd, char* addr, int n);
void fs_dup2(unsigned int oldfd, unsigned int newfd);
struct file* fs_init();
struct file* fs_dup_table(struct file* orig);
static void* kalloc_page(unsigned long  long bump);
void* kalloc_pages(unsigned long  int npages);
void perror(char* str);
void panic(char* str);
struct cpu* mycpu();
unsigned long  long make_satp(unsigned long  long* pagetable);
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
void swtch(struct context* new_);
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
void enter_user(unsigned long  int anonymous_var_nameX310, unsigned long  int anonymous_var_nameX311, unsigned long  int anonymous_var_nameX312, unsigned long  long anonymous_var_nameX313);
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
static inline long dup2(long oldfd, long newfd){
}
static inline long my_dup2(long oldfd, long newfd){
}
static inline long pipe(int* pip){
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
unsigned long  long x_98;
memset(&x_98, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_98));
    return x_98;
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
unsigned long  long x_268;
memset(&x_268, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_268));
    return x_268;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_269;
memset(&sp_val_269, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_269): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_269;
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
        pte_18=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_17))))&511)];
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
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
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

void alloc_prog(char* hello_elf, int fork_flag){
void* __right_value0 = (void*)0;
struct proc* result_54;
unsigned long  long* pagetable_55;
struct elfhdr* eh_56;
struct proghdr* ph_57;
unsigned long  long size_58;
unsigned long  long va_59;
int i_60;
void* pa_61;
void* __right_value1 = (void*)0;
struct proc* parent_62;
unsigned long  long parent_current_69;
unsigned long  long parent_stack_top_70;
char* src_71;
char* pa_72;
char* pa_73;
    result_54=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 794, "struct proc*"));
    result_54->program=hello_elf;
    pagetable_55=(unsigned long  long*)kalloc();
    memset(pagetable_55,0,4096);
    setting_user_pagetable(result_54,pagetable_55);
    result_54->pagetable=pagetable_55;
    eh_56=(struct elfhdr*)hello_elf;
    if(    eh_56->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_57=(struct proghdr*)(hello_elf+eh_56->phoff);
    size_58=ph_57->filesz;
    result_54->vaddr=(((ph_57->vaddr))&~(4096-1));
    va_59=0;
    for(    i_60=0    ;    i_60<eh_56->phnum    ;    i_60++,ph_57++    ){
        if(        ph_57->type!=1        ) {
            continue;
        }
        for(        va_59=(((ph_57->vaddr))&~(4096-1))        ;        va_59<ph_57->vaddr+ph_57->memsz        ;        va_59+=4096        ){
            pa_61=kalloc();
            if(            !pa_61            ) {
                panic("kalloc");
            }
            memset(pa_61,0,4096);
            mappages(result_54->pagetable,va_59,4096,(unsigned long  long)pa_61,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_54->pagetable,ph_57->vaddr,hello_elf+ph_57->off,ph_57->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_62=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_69=parent_62->context.sp;
        parent_stack_top_70=(unsigned long  long)parent_62->stack_top;
        src_71=walkaddr(parent_62->pagetable,parent_stack_top_70);
        pa_72=kalloc();
        if(        !pa_72        ) {
            panic("fork sp");
        }
        memmove(pa_72,(void*)src_71,4096);
        mappages(result_54->pagetable,va_59,4096,(unsigned long  long)pa_72,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_54->stack=(char*)va_59+4096;
        result_54->stack_top=(char*)va_59;
        result_54->context.sp=parent_62->context.sp;
        result_54->file_table=fs_init();
        *result_54->file_table=*get_current_file_table();
    }
    else {
        pa_73=kalloc();
        if(        !pa_73        ) {
            panic("kalloc");
        }
        memset(pa_73,0,4096);
        mappages(result_54->pagetable,va_59,4096,(unsigned long  long)pa_73,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_54->stack=(char*)va_59+4096;
        result_54->stack_top=(char*)va_59;
        result_54->context.sp=va_59+4096;
        result_54->file_table=fs_init();
    }
    result_54->context.mepc=eh_56->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_54));
    come_call_finalizer(proc_finalize, result_54, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
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

static void proc_finalize(struct proc* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_66;
int i_67;
struct proc* __result_obj__16;
struct proc* default_value_68;
struct proc* __result_obj__17;
default_value_68 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_66=self->head;
    i_67=0;
    while(    it_66!=((void*)0)    ) {
        if(        position==i_67        ) {
            __result_obj__16 = (struct proc*)come_increment_ref_count(it_66->item);
            come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__16;
        }
        it_66=it_66->next;
        i_67++;
    }
    memset(&default_value_68,0,sizeof(struct proc*));
    __result_obj__17 = (struct proc*)come_increment_ref_count(default_value_68);
    come_call_finalizer(proc_finalize, default_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__17, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__17;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value2 = (void*)0;
struct list_item$1proc$ph* litem_74;
struct proc* __dec_obj1;
void* __right_value3 = (void*)0;
struct list_item$1proc$ph* litem_75;
struct proc* __dec_obj2;
void* __right_value4 = (void*)0;
struct list_item$1proc$ph* litem_76;
struct proc* __dec_obj3;
struct list$1proc$ph* __result_obj__18;
    if(    self->len==0    ) {
        litem_74=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value2=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_74->prev=((void*)0);
        litem_74->next=((void*)0);
        __dec_obj1=litem_74->item,
        litem_74->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_74;
        self->head=litem_74;
    }
    else if(    self->len==1    ) {
        litem_75=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value3=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_75->prev=self->head;
        litem_75->next=((void*)0);
        __dec_obj2=litem_75->item,
        litem_75->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_75;
        self->head->next=litem_75;
    }
    else {
        litem_76=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value4=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_76->prev=self->tail;
        litem_76->next=((void*)0);
        __dec_obj3=litem_76->item,
        litem_76->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_76;
        self->tail=litem_76;
    }
    self->len++;
    __result_obj__18 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__18;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_77;
unsigned long  long* __result_obj__19;
unsigned long  long* __result_obj__20;
pagetable_77 = (void*)0;
    pagetable_77=(unsigned long  long*)kalloc();
    if(    pagetable_77==0    ) {
        __result_obj__19 = (unsigned long  long*)0;
        return __result_obj__19;
    }
    memset(pagetable_77,0,4096);
    __result_obj__20 = pagetable_77;
    return __result_obj__20;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__78;
unsigned long  long* __result_obj__21;
unsigned long  long addr_79;
unsigned long  long* pte_80;
unsigned long  long pa_81;
unsigned int flags_82;
char* mem_83;
unsigned long  long* __result_obj__22;
new__78 = (void*)0;
    new__78=uvmcreate();
    if(    new__78==0    ) {
        __result_obj__21 = (unsigned long  long*)0;
        return __result_obj__21;
    }
    for(    addr_79=0    ;    addr_79<sz    ;    addr_79+=4096    ){
        pte_80=walk(old,addr_79,0);
        if(        !pte_80||!(*pte_80&(1L<<0))        ) {
            continue;
        }
        pa_81=(((*pte_80)>>10)<<12);
        flags_82=((*pte_80)&1023);
        mem_83=kalloc();
        if(        mem_83==0        ) {
            panic("coypuvm");
        }
        memmove(mem_83,(char*)pa_81,4096);
        if(        mappages(new__78,addr_79,4096,((((unsigned long  long)mem_83)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_83);
            panic("copyuvm");
        }
    }
    __result_obj__22 = new__78;
    return __result_obj__22;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_84;
unsigned long  long pte_85;
unsigned long  long pa_86;
unsigned long  long* child_87;
    for(    i_84=0    ;    i_84<512    ;    i_84++    ){
        pte_85=pagetable[i_84];
        if(        !(pte_85&(1L<<0))        ) {
            continue;
        }
        pa_86=(((pte_85)>>10)<<12);
        if(        pte_85&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_86);
            }
        }
        else if(        level>0        ) {
            child_87=(unsigned long  long*)pa_86;
            free_pagetable(child_87,level-1);
            kfree(child_87);
        }
    }
}

struct file* get_current_file_table(){
void* __right_value5 = (void*)0;
struct file* __result_obj__23;
    __result_obj__23 = ((struct proc*)(__right_value5=list$1proc$ph_operator_load_element(gProc,gActiveProc)))->file_table;
    come_call_finalizer(proc_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__23;
}

void exec_prog(char* hello_elf){
void* __right_value6 = (void*)0;
struct proc* p_88;
void* __right_value7 = (void*)0;
struct proc* result_89;
unsigned long  long* pagetable_90;
struct elfhdr* eh_91;
struct proghdr* ph_92;
unsigned long  long size_93;
unsigned long  long va_94;
int i_95;
void* pa_96;
char* pa_97;
    p_88=((struct proc*)(__right_value6=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value6, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    result_89=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 978, "struct proc*"));
    result_89->file_table=p_88->file_table;
    result_89->context=p_88->context;
    pagetable_90=(unsigned long  long*)kalloc();
    memset(pagetable_90,0,4096);
    setting_user_pagetable(result_89,pagetable_90);
    result_89->pagetable=pagetable_90;
    eh_91=(struct elfhdr*)hello_elf;
    if(    eh_91->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_92=(struct proghdr*)(hello_elf+eh_91->phoff);
    size_93=ph_92->filesz;
    result_89->vaddr=(((ph_92->vaddr))&~(4096-1));
    va_94=0;
    for(    i_95=0    ;    i_95<eh_91->phnum    ;    i_95++,ph_92++    ){
        if(        ph_92->type!=1        ) {
            continue;
        }
        for(        va_94=(((ph_92->vaddr))&~(4096-1))        ;        va_94<ph_92->vaddr+ph_92->memsz        ;        va_94+=4096        ){
            pa_96=kalloc();
            if(            !pa_96            ) {
                panic("kalloc");
            }
            memset(pa_96,0,4096);
            mappages(result_89->pagetable,va_94,4096,(unsigned long  long)pa_96,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_89->pagetable,ph_92->vaddr,hello_elf+ph_92->off,ph_92->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_97=kalloc();
    if(    !pa_97    ) {
        panic("kalloc");
    }
    memset(pa_97,0,4096);
    mappages(result_89->pagetable,va_94,4096,(unsigned long  long)pa_97,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_89->stack=(char*)va_94+4096;
    result_89->stack_top=(char*)va_94;
    result_89->context.sp=va_94+4096;
    result_89->context.mepc=eh_91->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_89));
    come_call_finalizer(proc_finalize, result_89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
unsigned long  int x_99;
memset(&x_99, 0, sizeof(unsigned long  int));
    x_99=r_sie();
    x_99|=(1UL<<5);
    w_sie(x_99);
    x_99=r_sstatus();
    x_99|=(1UL<<1);
    w_sstatus(x_99);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_100;
    next_100=r_time()+10000UL;
    w_stimecmp(next_100);
}

void timer_handler(){
void* __right_value8 = (void*)0;
struct proc* p_101;
struct context* tf_102;
int old_active_proc_103;
void* __right_value9 = (void*)0;
struct proc* old_104;
void* __right_value10 = (void*)0;
struct proc* new__105;
unsigned long  long a0_106;
    disable_timer_interrupts();
    p_101=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_102=(struct context*)TRAPFRAME;
    p_101->context=*tf_102;
    timer_reset();
    old_active_proc_103=gActiveProc;
    old_104=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__105=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__105!=old_104&&new__105->zombie==0    ) {
        user_sp=new__105->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__105->pagetable)>>12));
        old_104->context=*(struct context*)TRAPFRAME;
        a0_106=new__105->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_106));
        swtch(&new__105->context);
    }
    else {
        gActiveProc=old_active_proc_103;
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
struct context* trapframe_107;
unsigned long  int arg0_108;
unsigned long  int arg1_109;
unsigned long  int arg2_110;
unsigned long  int arg3_111;
unsigned long  int arg4_112;
unsigned long  int arg5_113;
unsigned long  int arg6_114;
unsigned long  int arg_syscall_no_115;
int fd_116;
unsigned long  long user_va_118;
int len_119;
void* __right_value11 = (void*)0;
struct proc* p_120;
int ret_121;
int i_122;
    trapframe_107=(struct context*)TRAPFRAME;
    arg0_108=trapframe_107->a0;
    arg1_109=trapframe_107->a1;
    arg2_110=trapframe_107->a2;
    arg3_111=trapframe_107->a3;
    arg4_112=trapframe_107->a4;
    arg5_113=trapframe_107->a5;
    arg6_114=trapframe_107->a6;
    arg_syscall_no_115=trapframe_107->a7;
    fd_116=arg0_108;
    char kernel_buf_117[256];
    memset(&kernel_buf_117, 0, sizeof(char)    *(256)    );
    user_va_118=arg1_109;
    len_119=arg2_110;
    memset(kernel_buf_117,0,256);
    p_120=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_121=copyin(p_120->pagetable,kernel_buf_117,user_va_118,len_119);
    if(    ret_121<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_116)    ) {
        pipewrite(fd_116,kernel_buf_117,len_119);
    }
    else if(    is_stdout(fd_116)    ) {
        for(        i_122=0        ;        i_122<len_119        ;        i_122++        ){
            putchar(kernel_buf_117[i_122]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context* trapframe_123;
unsigned long  int arg0_124;
unsigned long  int arg1_125;
unsigned long  int arg2_126;
unsigned long  int arg3_127;
unsigned long  int arg4_128;
unsigned long  int arg5_129;
unsigned long  int arg6_130;
unsigned long  int arg_syscall_no_131;
void* __right_value12 = (void*)0;
struct proc* p_132;
    trapframe_123=(struct context*)TRAPFRAME;
    arg0_124=trapframe_123->a0;
    arg1_125=trapframe_123->a1;
    arg2_126=trapframe_123->a2;
    arg3_127=trapframe_123->a3;
    arg4_128=trapframe_123->a4;
    arg5_129=trapframe_123->a5;
    arg6_130=trapframe_123->a6;
    arg_syscall_no_131=trapframe_123->a7;
    p_132=((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_132->xstatus=arg0_124;
    p_132->zombie=1;
    return 0;
}

int Sys_wait(){
struct context* trapframe_133;
unsigned long  int arg0_134;
unsigned long  int arg1_135;
unsigned long  int arg2_136;
unsigned long  int arg3_137;
unsigned long  int arg4_138;
unsigned long  int arg5_139;
unsigned long  int arg6_140;
unsigned long  int arg_syscall_no_141;
int* status_va_142;
void* __right_value13 = (void*)0;
struct proc* p_143;
int exit_status_144;
int child_pid_145;
int n_146;
struct list$1proc$ph* o2_saved_147;
struct proc* it_150;
    trapframe_133=(struct context*)TRAPFRAME;
    arg0_134=trapframe_133->a0;
    arg1_135=trapframe_133->a1;
    arg2_136=trapframe_133->a2;
    arg3_137=trapframe_133->a3;
    arg4_138=trapframe_133->a4;
    arg5_139=trapframe_133->a5;
    arg6_140=trapframe_133->a6;
    arg_syscall_no_141=trapframe_133->a7;
    status_va_142=(int*)arg0_134;
    p_143=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_144=0;
    child_pid_145=-1;
    while(    child_pid_145==-1    ) {
        timer_handler();
        n_146=0;
        for(        o2_saved_147=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_150=list$1proc$ph_begin((o2_saved_147))        ;        !list$1proc$ph_end((o2_saved_147))        ;        it_150=list$1proc$ph_next((o2_saved_147))        ){
            if(            it_150->zombie            ) {
                free_proc(it_150);
                exit_status_144=it_150->xstatus;
                child_pid_145=n_146;
                list$1proc$ph_remove_by_pointer(gProc,it_150);
                break;
            }
            n_146++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_147, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_143->pagetable,(unsigned long  long)status_va_142,(void*)&exit_status_144,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_145;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_148;
struct proc* __result_obj__24;
struct proc* __result_obj__25;
struct proc* result_149;
struct proc* __result_obj__26;
result_148 = (void*)0;
result_149 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_148,0,sizeof(struct proc*));
        __result_obj__24 = result_148;
        return __result_obj__24;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__25 = self->it->item;
        return __result_obj__25;
    }
    memset(&result_149,0,sizeof(struct proc*));
    __result_obj__26 = result_149;
    return __result_obj__26;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_151;
struct proc* __result_obj__27;
struct proc* __result_obj__28;
struct proc* result_152;
struct proc* __result_obj__29;
result_151 = (void*)0;
result_152 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_151,0,sizeof(struct proc*));
        __result_obj__27 = result_151;
        return __result_obj__27;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__28 = self->it->item;
        return __result_obj__28;
    }
    memset(&result_152,0,sizeof(struct proc*));
    __result_obj__29 = result_152;
    return __result_obj__29;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_153;
struct list_item$1proc$ph* it_154;
struct list$1proc$ph* __result_obj__33;
    it2_153=0;
    it_154=self->head;
    while(    it_154!=((void*)0)    ) {
        if(        it_154->item==item        ) {
            list$1proc$ph_delete(self,it2_153,it2_153+1);
            break;
        }
        it2_153++;
        it_154=it_154->next;
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_155;
struct list$1proc$ph* __result_obj__30;
struct list_item$1proc$ph* it_158;
int i_159;
struct list_item$1proc$ph* prev_it_160;
struct list_item$1proc$ph* it_161;
int i_162;
struct list_item$1proc$ph* prev_it_163;
struct list_item$1proc$ph* it_164;
struct list_item$1proc$ph* head_prev_it_165;
struct list_item$1proc$ph* tail_it_166;
int i_167;
struct list_item$1proc$ph* prev_it_168;
struct list$1proc$ph* __result_obj__32;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_155=tail;
        tail=head;
        head=tmp_155;
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
        it_158=self->head;
        i_159=0;
        while(        it_158!=((void*)0)        ) {
            if(            i_159<tail            ) {
                prev_it_160=it_158;
                it_158=it_158->next;
                i_159++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_159==tail            ) {
                self->head=it_158;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_158=it_158->next;
                i_159++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_161=self->head;
        i_162=0;
        while(        it_161!=((void*)0)        ) {
            if(            i_162==head            ) {
                self->tail=it_161->prev;
                self->tail->next=((void*)0);
            }
            if(            i_162>=head            ) {
                prev_it_163=it_161;
                it_161=it_161->next;
                i_162++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_161=it_161->next;
                i_162++;
            }
        }
    }
    else {
        it_164=self->head;
        head_prev_it_165=((void*)0);
        tail_it_166=((void*)0);
        i_167=0;
        while(        it_164!=((void*)0)        ) {
            if(            i_167==head            ) {
                head_prev_it_165=it_164->prev;
            }
            if(            i_167==tail            ) {
                tail_it_166=it_164;
            }
            if(            i_167>=head&&i_167<tail            ) {
                prev_it_168=it_164;
                it_164=it_164->next;
                i_167++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_164=it_164->next;
                i_167++;
            }
        }
        if(        head_prev_it_165!=((void*)0)        ) {
            head_prev_it_165->next=tail_it_166;
        }
        if(        tail_it_166!=((void*)0)        ) {
            tail_it_166->prev=head_prev_it_165;
        }
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_156;
struct list_item$1proc$ph* prev_it_157;
struct list$1proc$ph* __result_obj__31;
    it_156=self->head;
    while(    it_156!=((void*)0)    ) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
struct list_item$1proc$ph* it_169;
struct list_item$1proc$ph* prev_it_170;
    it_169=self->head;
    while(    it_169!=((void*)0)    ) {
        prev_it_170=it_169;
        it_169=it_169->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context* trapframe_171;
unsigned long  int arg0_172;
unsigned long  int arg1_173;
unsigned long  int arg2_174;
unsigned long  int arg3_175;
unsigned long  int arg4_176;
unsigned long  int arg5_177;
unsigned long  int arg6_178;
unsigned long  int arg_syscall_no_179;
unsigned long  long user_va_181;
void* __right_value14 = (void*)0;
struct proc* p_182;
int result_183;
    trapframe_171=(struct context*)TRAPFRAME;
    arg0_172=trapframe_171->a0;
    arg1_173=trapframe_171->a1;
    arg2_174=trapframe_171->a2;
    arg3_175=trapframe_171->a3;
    arg4_176=trapframe_171->a4;
    arg5_177=trapframe_171->a5;
    arg6_178=trapframe_171->a6;
    arg_syscall_no_179=trapframe_171->a7;
    char kernel_buf_180[256];
    memset(&kernel_buf_180, 0, sizeof(char)    *(256)    );
    user_va_181=arg0_172;
    p_182=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_182->pagetable,kernel_buf_180,user_va_181,256);
    result_183=fs_open(kernel_buf_180);
    return result_183;
}

int Sys_fork(){
struct context* trapframe_184;
unsigned long  int arg0_185;
unsigned long  int arg1_186;
unsigned long  int arg2_187;
unsigned long  int arg3_188;
unsigned long  int arg4_189;
unsigned long  int arg5_190;
unsigned long  int arg6_191;
unsigned long  int arg_syscall_no_192;
void* __right_value15 = (void*)0;
struct proc* p_193;
int fork_flag_194;
void* __right_value16 = (void*)0;
struct proc* child_195;
unsigned long  long sp_196;
int result_197;
memset(&fork_flag_194, 0, sizeof(int));
    trapframe_184=(struct context*)TRAPFRAME;
    arg0_185=trapframe_184->a0;
    arg1_186=trapframe_184->a1;
    arg2_187=trapframe_184->a2;
    arg3_188=trapframe_184->a3;
    arg4_189=trapframe_184->a4;
    arg5_190=trapframe_184->a5;
    arg6_191=trapframe_184->a6;
    arg_syscall_no_192=trapframe_184->a7;
    p_193=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_193->program,fork_flag_194=1);
    child_195=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_196=child_195->context.sp;
    child_195->context=*trapframe_184;
    child_195->context.mepc=child_195->context.mepc+4;
    child_195->context.sp=sp_196;
    child_195->context.a0=0;
    result_197=list$1proc$ph_length(gProc)-1;
    return result_197;
}

int Sys_execv(){
struct context* trapframe_198;
unsigned long  int arg0_199;
unsigned long  int arg1_200;
unsigned long  int arg2_201;
unsigned long  int arg3_202;
unsigned long  int arg4_203;
unsigned long  int arg5_204;
unsigned long  int arg6_205;
unsigned long  int arg_syscall_no_206;
int argc_207;
unsigned long  long user_va_209;
void* __right_value17 = (void*)0;
struct proc* p_210;
char* path_211;
int fd_213;
int ret_214;
void* __right_value18 = (void*)0;
struct proc* result_215;
    trapframe_198=(struct context*)TRAPFRAME;
    arg0_199=trapframe_198->a0;
    arg1_200=trapframe_198->a1;
    arg2_201=trapframe_198->a2;
    arg3_202=trapframe_198->a3;
    arg4_203=trapframe_198->a4;
    arg5_204=trapframe_198->a5;
    arg6_205=trapframe_198->a6;
    arg_syscall_no_206=trapframe_198->a7;
    argc_207=arg2_201;
    char kernel_buf_208[256];
    memset(&kernel_buf_208, 0, sizeof(char)    *(256)    );
    user_va_209=arg0_199;
    p_210=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_210->pagetable,kernel_buf_208,user_va_209,256);
    path_211=kernel_buf_208;
    char hello_elf_212[4096];
    memset(&hello_elf_212, 0, sizeof(char)    *(4096)    );
    fd_213=fs_open(path_211);
    ret_214=fs_read(fd_213,hello_elf_212,4096);
    if(    ret_214<0    ) {
        trapframe_198->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_212);
    result_215=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_198->mepc=result_215->context.mepc+4;
    trapframe_198->sp=result_215->context.sp;
    return 0;
}

int Sys_dup2(){
struct context* trapframe_216;
unsigned long  int arg0_217;
unsigned long  int arg1_218;
unsigned long  int arg2_219;
unsigned long  int arg3_220;
unsigned long  int arg4_221;
unsigned long  int arg5_222;
unsigned long  int arg6_223;
unsigned long  int arg_syscall_no_224;
unsigned long  long oldfd_225;
unsigned long  long newfd_226;
    trapframe_216=(struct context*)TRAPFRAME;
    arg0_217=trapframe_216->a0;
    arg1_218=trapframe_216->a1;
    arg2_219=trapframe_216->a2;
    arg3_220=trapframe_216->a3;
    arg4_221=trapframe_216->a4;
    arg5_222=trapframe_216->a5;
    arg6_223=trapframe_216->a6;
    arg_syscall_no_224=trapframe_216->a7;
    oldfd_225=arg0_217;
    newfd_226=arg1_218;
    fs_dup2(oldfd_225,newfd_226);
    return 0;
}

int Sys_pipe(){
struct context* trapframe_227;
unsigned long  int arg0_228;
unsigned long  int arg1_229;
unsigned long  int arg2_230;
unsigned long  int arg3_231;
unsigned long  int arg4_232;
unsigned long  int arg5_233;
unsigned long  int arg6_234;
unsigned long  int arg_syscall_no_235;
char* kernel_buf_236;
unsigned long  long user_va_237;
int fd0_238;
int fd1_239;
void* __right_value19 = (void*)0;
struct proc* p_240;
kernel_buf_236 = (void*)0;
memset(&fd0_238, 0, sizeof(int));
memset(&fd1_239, 0, sizeof(int));
    trapframe_227=(struct context*)TRAPFRAME;
    arg0_228=trapframe_227->a0;
    arg1_229=trapframe_227->a1;
    arg2_230=trapframe_227->a2;
    arg3_231=trapframe_227->a3;
    arg4_232=trapframe_227->a4;
    arg5_233=trapframe_227->a5;
    arg6_234=trapframe_227->a6;
    arg_syscall_no_235=trapframe_227->a7;
    user_va_237=arg0_228;
    pipe_open(&fd0_238,&fd1_239);
    p_240=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_240->pagetable,(unsigned long  long)user_va_237,(char*)&fd0_238,sizeof(int))<0    ) {
        panic("copyout");
    }
    if(    copyout(p_240->pagetable,(unsigned long  long)user_va_237+4,(char*)&fd1_239,sizeof(int))<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context* trapframe_241;
unsigned long  int arg0_242;
unsigned long  int arg1_243;
unsigned long  int arg2_244;
unsigned long  int arg3_245;
unsigned long  int arg4_246;
unsigned long  int arg5_247;
unsigned long  int arg6_248;
unsigned long  int arg_syscall_no_249;
int fd_250;
unsigned long  long destva_251;
unsigned long  int n_252;
int ret_254;
void* __right_value20 = (void*)0;
struct proc* p_255;
memset(&ret_254, 0, sizeof(int));
    trapframe_241=(struct context*)TRAPFRAME;
    arg0_242=trapframe_241->a0;
    arg1_243=trapframe_241->a1;
    arg2_244=trapframe_241->a2;
    arg3_245=trapframe_241->a3;
    arg4_246=trapframe_241->a4;
    arg5_247=trapframe_241->a5;
    arg6_248=trapframe_241->a6;
    arg_syscall_no_249=trapframe_241->a7;
    fd_250=arg0_242;
    destva_251=arg1_243;
    n_252=arg2_244;
    char kernel_buf_253[256];
    memset(&kernel_buf_253, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_250)    ) {
        ret_254=uart_readn(kernel_buf_253,n_252);
    }
    else if(    is_pipe(fd_250)    ) {
        ret_254=piperead(fd_250,kernel_buf_253,n_252);
    }
    else {
        ret_254=fs_read(fd_250,kernel_buf_253,n_252);
        if(        ret_254<0        ) {
            trapframe_241->a0=ret_254;
            return 0;
        }
        kernel_buf_253[ret_254]=0;
    }
    p_255=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_255->pagetable,destva_251,kernel_buf_253,ret_254)<0    ) {
        panic("read: copyout failed");
    }
    return ret_254;
}

unsigned long  int syscall_handler(){
struct context* trapframe_256;
unsigned long  int arg0_257;
unsigned long  int arg1_258;
unsigned long  int arg2_259;
unsigned long  int arg3_260;
unsigned long  int arg4_261;
unsigned long  int arg5_262;
unsigned long  int arg6_263;
unsigned long  int arg_syscall_no_264;
unsigned long  long result_265;
int fd_266;
int ret_267;
    disable_timer_interrupts();
    trapframe_256=(struct context*)TRAPFRAME;
    arg0_257=trapframe_256->a0;
    arg1_258=trapframe_256->a1;
    arg2_259=trapframe_256->a2;
    arg3_260=trapframe_256->a3;
    arg4_261=trapframe_256->a4;
    arg5_262=trapframe_256->a5;
    arg6_263=trapframe_256->a6;
    arg_syscall_no_264=trapframe_256->a7;
    result_265=0;
    switch (    arg_syscall_no_264) {
        case 64:
        {
            result_265=Sys_write();
        }
        break;
        case 73:
        {
            result_265=Sys_pipe();
        }
        break;
        case 72:
        {
            result_265=Sys_dup2();
        }
        break;
        case 70:
        {
            result_265=Sys_exit();
        }
        break;
        case 71:
        {
            result_265=Sys_wait();
        }
        break;
        case 66:
        {
            result_265=Sys_open();
        }
        break;
        case 65:
        {
            result_265=Sys_read();
        }
        break;
        case 67:
        {
            fd_266=arg0_257;
            ret_267=fs_close(fd_266);
            result_265=ret_267;
        }
        break;
        case 68:
        {
            result_265=Sys_fork();
        }
        break;
        case 69:
        {
            result_265=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_256->a0=result_265;
    return result_265;
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
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2468, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_270;
struct list_item$1proc$ph* prev_it_271;
    it_270=self->head;
    while(    it_270!=((void*)0)    ) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_271, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_272;
void* __right_value23 = (void*)0;
struct proc* p_273;
unsigned long  int usersp_274;
unsigned long  long usersatp_275;
unsigned long  int entry_276;
memset(&fork_flag_272, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_272=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_273=((struct proc*)(__right_value23=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value23, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_274=(unsigned long  long)(p_273->stack);
    usersatp_275=((8L<<60)|(((unsigned long  long)p_273->pagetable)>>12));
    entry_276=p_273->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_273;
    kernel_sp=read_s_sp();
    enter_user(entry_276,usersp_274,usersatp_275,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__35;
struct mem_block* current_277;
struct mem_block* prev_278;
void* __result_obj__36;
struct mem_block* new_mem_279;
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
    current_277=free_list;
    prev_278=((void*)0);
    while(    current_277!=((void*)0)    ) {
        if(        current_277->size>=size        ) {
            if(            prev_278==((void*)0)            ) {
                free_list=current_277->next;
            }
            else {
                prev_278->next=current_277->next;
            }
            __result_obj__36 = (void*)(current_277+1);
            return __result_obj__36;
        }
        prev_278=current_277;
        current_277=current_277->next;
    }
    new_mem_279=(struct mem_block*)sbrk(size);
    if(    new_mem_279==(void*)-1    ) {
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    new_mem_279->size=size;
    new_mem_279->next=((void*)0);
    __result_obj__38 = (void*)(new_mem_279+1);
    return __result_obj__38;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_280;
void* __result_obj__39;
void* ptr_281;
void* __result_obj__40;
    total_size_280=nmemb*size;
    if(    total_size_280==0    ) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    ptr_281=malloc(total_size_280);
    if(    ptr_281!=((void*)0)    ) {
        memset(ptr_281,0,total_size_280);
    }
    __result_obj__40 = ptr_281;
    return __result_obj__40;
}

void free(void* ptr){
struct mem_block* block_282;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_282=(struct mem_block*)ptr-1;
    block_282->next=free_list;
    free_list=block_282;
}

char* strdup(const char* s){
char* s2_283;
unsigned long  int len_284;
char* p_285;
char* __result_obj__41;
    s2_283=s;
    len_284=strlen(s2_283)+1;
    p_285=malloc(len_284);
    if(    p_285    ) {
        memcpy(p_285,s2_283,len_284);
    }
    __result_obj__41 = p_285;
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
        const char* h_286=haystack;
        const char* n_287=needle;
        while(        *h_286&&*n_287&&(*h_286==*n_287)        ) {
            h_286++;
            n_287++;
        }
        if(        !*n_287        ) {
            __result_obj__43 = (char*)haystack;
            return __result_obj__43;
        }
    }
    __result_obj__44 = ((void*)0);
    return __result_obj__44;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_288;
int i_289;
void* __result_obj__45;
    cdst_288=(char*)dst;
    for(    i_289=0    ;    i_289<n    ;    i_289++    ){
        cdst_288[i_289]=c;
    }
    __result_obj__45 = dst;
    return __result_obj__45;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_290;
const unsigned char* s2_291;
memset(&s1_290, 0, sizeof(const unsigned char*));
memset(&s2_291, 0, sizeof(const unsigned char*));
    s1_290=v1;
    s2_291=v2;
    while(    n-->0    ) {
        if(        *s1_290!=*s2_291        ) {
            return *s1_290-*s2_291;
        }
        s1_290++,s2_291++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_292;
char* d_293;
void* __result_obj__46;
void* __result_obj__47;
s_292 = (void*)0;
d_293 = (void*)0;
    if(    n==0    ) {
        __result_obj__46 = dst;
        return __result_obj__46;
    }
    s_292=src;
    d_293=dst;
    if(    s_292<d_293&&s_292+n>d_293    ) {
        s_292+=n;
        d_293+=n;
        while(        n-->0        ) {
            *--d_293=*--s_292;
        }
    }
    else {
        while(        n-->0        ) {
            *d_293++=*s_292++;
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
char* os_294;
char* __result_obj__49;
os_294 = (void*)0;
    os_294=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__49 = os_294;
    return __result_obj__49;
}

int strlen(const char* s){
int n_295;
memset(&n_295, 0, sizeof(int));
    for(    n_295=0    ;    s[n_295]    ;    n_295++    ){
        ;
    }
    return n_295;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_296;
char* __result_obj__50;
    d_296=dest;
    while(    *d_296    ) {
        d_296++;
    }
    while(    n--&&*src    ) {
        *d_296++=*src++;
    }
    *d_296=0;
    __result_obj__50 = dest;
    return __result_obj__50;
}

char* strtok(char* s, const char* delim){
static char* next_297;
char* start_298;
char* p_299;
char* __result_obj__51;
int is_delim_301;
char* __result_obj__52;
int is_delim_303;
char* __result_obj__53;
next_297 = (void*)0;
start_298 = (void*)0;
p_299 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_297=s;
    }
    if(    next_297==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    start_298=next_297;
    while(    *start_298!=0    ) {
        const char* d_300=delim;
        is_delim_301=0;
        while(        *d_300!=0        ) {
            if(            *start_298==*d_300            ) {
                is_delim_301=1;
                break;
            }
            d_300++;
        }
        if(        !is_delim_301        ) {
            break;
        }
        start_298++;
    }
    if(    *start_298==0    ) {
        next_297=((void*)0);
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    p_299=start_298;
    while(    *p_299!=0    ) {
        const char* d_302=delim;
        is_delim_303=0;
        while(        *d_302!=0        ) {
            if(            *p_299==*d_302            ) {
                is_delim_303=1;
                break;
            }
            d_302++;
        }
        if(        is_delim_303        ) {
            break;
        }
        p_299++;
    }
    if(    *p_299==0    ) {
        next_297=((void*)0);
    }
    else {
        *p_299=0;
        next_297=p_299+1;
    }
    __result_obj__53 = start_298;
    return __result_obj__53;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_304;
int i_306;
int negative_307;
char* __result_obj__54;
int digit_308;
char* __result_obj__55;
    p_304=buf;
    char tmp_305[32];
    memset(&tmp_305, 0, sizeof(char)    *(32)    );
    i_306=0;
    negative_307=0;
    if(    base<2||base>16    ) {
        *p_304=0;
        __result_obj__54 = p_304;
        return __result_obj__54;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_307=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_308=val_%base;
        tmp_305[i_306++]=(((digit_308<10))?(48+digit_308):(97+digit_308-10));
        val_/=base;
    } while(    val_    );
    if(    negative_307    ) {
        *p_304++=45;
    }
    while(    i_306--    ) {
        *p_304++=tmp_305[i_306];
    }
    *p_304=0;
    __result_obj__55 = buf;
    return __result_obj__55;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_310;
const char* s_311;
unsigned long  int remaining_313;
s_311 = (void*)0;
    char out2_309[512];
    memset(&out2_309, 0, sizeof(char)    *(512)    );
    p_310=out2_309;
    char buf_312[32];
    memset(&buf_312, 0, sizeof(char)    *(32)    );
    remaining_313=sizeof(out2_309);
    for(    ;    *fmt&&remaining_313>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_310++=*fmt;
            remaining_313--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_312,__builtin_va_arg(ap,int),10,1);
            s_311=buf_312;
            break;
            case 117:
            itoa(buf_312,__builtin_va_arg(ap,unsigned int),10,0);
            s_311=buf_312;
            break;
            case 120:
            itoa(buf_312,__builtin_va_arg(ap,unsigned int),16,0);
            s_311=buf_312;
            break;
            case 115:
            s_311=__builtin_va_arg(ap,const char*);
            if(            !s_311            ) {
                s_311="(null)";
            }
            break;
            case 99:
            buf_312[0]=(char)__builtin_va_arg(ap,int);
            buf_312[1]=0;
            s_311=buf_312;
            break;
            case 112:
            strncpy(buf_312,"0x",32);
            itoa(buf_312+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_311=buf_312;
            break;
            case 37:
            buf_312[0]=37;
            buf_312[1]=0;
            s_311=buf_312;
            break;
            default:
            buf_312[0]=37;
            buf_312[1]=*fmt;
            buf_312[2]=0;
            s_311=buf_312;
            break;
        }
        while(        *s_311&&remaining_313>1        ) {
            *p_310++=*s_311++;
            remaining_313--;
        }
    }
    *p_310=0;
    *out=strdup(out2_309);
    return p_310-out2_309;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_314;
char* p_315;
const char* s_316;
unsigned long  int remaining_318;
memset(&ap_314, 0, sizeof(va_list));
s_316 = (void*)0;
    __builtin_va_start(ap_314,fmt);
    p_315=out;
    char buf_317[32];
    memset(&buf_317, 0, sizeof(char)    *(32)    );
    remaining_318=out_size;
    if(    remaining_318==0    ) {
        __builtin_va_end(ap_314);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_318>1            ) {
                *p_315++=*fmt;
                remaining_318--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_316=__builtin_va_arg(ap_314,const char*);
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 100:
            itoa(buf_317,__builtin_va_arg(ap_314,int),10,0);
            s_316=buf_317;
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 120:
            itoa(buf_317,(unsigned int)__builtin_va_arg(ap_314,int),16,1);
            s_316=buf_317;
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 99:
            if(            remaining_318>1            ) {
                *p_315++=(char)__builtin_va_arg(ap_314,int);
                remaining_318--;
            }
            break;
            case 112:
            s_316="0x";
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            itoa(buf_317,(long)__builtin_va_arg(ap_314,void*),16,1);
            s_316=buf_317;
            while(            *s_316&&remaining_318>1            ) {
                *p_315++=*s_316++;
                remaining_318--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_317,__builtin_va_arg(ap_314,long),10,1);
                s_316=buf_317;
                while(                *s_316&&remaining_318>1                ) {
                    *p_315++=*s_316++;
                    remaining_318--;
                }
            }
            break;
            default:
            if(            remaining_318>1            ) {
                *p_315++=37;
                remaining_318--;
                if(                remaining_318>1                ) {
                    *p_315++=*fmt;
                    remaining_318--;
                }
            }
            break;
        }
    }
    *p_315=0;
    __builtin_va_end(ap_314);
    return p_315-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_319;
char* p_320;
const char* s_321;
unsigned long  int remaining_323;
memset(&ap_319, 0, sizeof(va_list));
s_321 = (void*)0;
    __builtin_va_start(ap_319,fmt);
    p_320=out;
    char buf_322[32];
    memset(&buf_322, 0, sizeof(char)    *(32)    );
    remaining_323=out_size;
    if(    remaining_323==0    ) {
        __builtin_va_end(ap_319);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_323>1            ) {
                *p_320++=*fmt;
                remaining_323--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_321=__builtin_va_arg(ap_319,const char*);
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 100:
            itoa(buf_322,__builtin_va_arg(ap_319,int),10,0);
            s_321=buf_322;
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 120:
            itoa(buf_322,(unsigned int)__builtin_va_arg(ap_319,int),16,1);
            s_321=buf_322;
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 99:
            if(            remaining_323>1            ) {
                *p_320++=(char)__builtin_va_arg(ap_319,int);
                remaining_323--;
            }
            break;
            case 112:
            s_321="0x";
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            itoa(buf_322,(long)__builtin_va_arg(ap_319,void*),16,1);
            s_321=buf_322;
            while(            *s_321&&remaining_323>1            ) {
                *p_320++=*s_321++;
                remaining_323--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_322,__builtin_va_arg(ap_319,long),10,1);
                s_321=buf_322;
                while(                *s_321&&remaining_323>1                ) {
                    *p_320++=*s_321++;
                    remaining_323--;
                }
            }
            break;
            default:
            if(            remaining_323>1            ) {
                *p_320++=37;
                remaining_323--;
                if(                remaining_323>1                ) {
                    *p_320++=*fmt;
                    remaining_323--;
                }
            }
            break;
        }
    }
    *p_320=0;
    __builtin_va_end(ap_319);
    return p_320-out;
}

void printint(int val_, int base, int sign){
int i_325;
int negative_326;
unsigned int uval_327;
int digit_328;
memset(&uval_327, 0, sizeof(unsigned int));
    char buf_324[33];
    memset(&buf_324, 0, sizeof(char)    *(33)    );
    i_325=0;
    negative_326=0;
    if(    sign&&val_<0    ) {
        negative_326=1;
        uval_327=-val_;
    }
    else {
        uval_327=(unsigned int)val_;
    }
    if(    uval_327==0    ) {
        putchar(48);
        return;
    }
    while(    uval_327>0    ) {
        digit_328=uval_327%base;
        buf_324[i_325++]=((digit_328<10)?(48+digit_328):(97+(digit_328-10)));
        uval_327/=base;
    }
    if(    negative_326    ) {
        putchar(45);
    }
    while(    --i_325>=0    ) {
        putchar(buf_324[i_325]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_330;
int negative_331;
int digit_332;
    char buf_329[65];
    memset(&buf_329, 0, sizeof(char)    *(65)    );
    i_330=0;
    negative_331=0;
    if(    sign&&(long)val_<0    ) {
        negative_331=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_332=val_%base;
        buf_329[i_330++]=((digit_332<10)?(48+digit_332):(97+(digit_332-10)));
        val_/=base;
    }
    if(    negative_331    ) {
        putchar(45);
    }
    while(    --i_330>=0    ) {
        putchar(buf_329[i_330]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_334;
int negative_335;
int digit_336;
    char buf_333[65];
    memset(&buf_333, 0, sizeof(char)    *(65)    );
    i_334=0;
    negative_335=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_335=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_336=val_%base;
        buf_333[i_334++]=((digit_336<10)?(48+digit_336):(97+(digit_336-10)));
        val_/=base;
    }
    if(    negative_335    ) {
        putchar(45);
    }
    while(    --i_334>=0    ) {
        putchar(buf_333[i_334]);
    }
}

int printf(const char* fmt, ...){
va_list ap_337;
const char* p_338;
int lcount_339;
unsigned long  int val__340;
unsigned long  long val__341;
long val__342;
long long val__343;
int i_344;
int val__345;
unsigned int val__346;
unsigned long  int val__347;
char c_349;
memset(&ap_337, 0, sizeof(va_list));
p_338 = (void*)0;
    __builtin_va_start(ap_337,fmt);
    for(    p_338=fmt    ;    *p_338    ;    p_338++    ){
        if(        *p_338!=37        ) {
            putchar(*p_338);
            continue;
        }
        p_338++;
        if(        *p_338==108        ) {
            lcount_339=1;
            if(            *(p_338+1)==108            ) {
                lcount_339=2;
                p_338++;
            }
            p_338++;
            switch (            *p_338) {
                case 120:
                {
                    if(                    lcount_339==1                    ) {
                        val__340=__builtin_va_arg(ap_337,unsigned long  int);
                        printlong(val__340,16,0);
                    }
                    else {
                        val__341=__builtin_va_arg(ap_337,unsigned long  long);
                        printlonglong(val__341,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_339==1                    ) {
                        val__342=__builtin_va_arg(ap_337,long);
                        printlong(val__342,10,1);
                    }
                    else {
                        val__343=__builtin_va_arg(ap_337,long  long);
                        printlonglong(val__343,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_344=0                    ;                    i_344<lcount_339                    ;                    i_344++                    ){
                        putchar(108);
                    }
                    putchar(*p_338);
                    break;
                }
            }
        }
        else {
            switch (            *p_338) {
                case 100:
                {
                    val__345=__builtin_va_arg(ap_337,int);
                    printint(val__345,10,1);
                    break;
                }
                case 120:
                {
                    val__346=__builtin_va_arg(ap_337,unsigned int);
                    printint(val__346,16,0);
                    break;
                }
                case 112:
                {
                    val__347=(unsigned long  int)__builtin_va_arg(ap_337,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__347,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_348=__builtin_va_arg(ap_337,const char*);
                    if(                    !s_348                    ) {
                        s_348="(null)";
                    }
                    while(                    *s_348                    ) {
                        putchar(*s_348++);
                    }
                    break;
                }
                case 99:
                {
                    c_349=(char)__builtin_va_arg(ap_337,int);
                    putchar(c_349);
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
                    putchar(*p_338);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_337);
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
struct buffer* buf_350;
int i_351;
void* __right_value26 = (void*)0;
    buf_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_350,"%s %d\n",sname,sline);
    for(    i_351=gNumComeStackFrame-2    ;    i_351>=0    ;    i_351--    ){
        buffer_append_format(buf_350,"%s %d #%d\n",gComeStackFrameSName[i_351],gComeStackFrameSLine[i_351],gComeStackFrameID[i_351]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value26=buffer_to_string(buf_350))));
    (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_350, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_352;
    for(    i_352=gNumComeStackFrame-1    ;    i_352>=0    ;    i_352--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_352],gComeStackFrameSLine[i_352],gComeStackFrameID[i_352]);
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
int i_353;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_353=0    ;    i_353<gHeapPages.mSizePages    ;    i_353++    ){
        gHeapPages.mPages[i_353]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_354;
int n_355;
_Bool flag_356;
int i_357;
struct sMemHeaderTiny* it_358;
int n_359;
int i_360;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_354=gAllocMem;
        n_355=0;
        while(        it_354        ) {
            n_355++;
            flag_356=(_Bool)0;
            printf("#%d ",n_355);
            if(            it_354->class_name            ) {
                printf("%p (%s): ",(char*)it_354+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_354->class_name);
            }
            for(            i_357=0            ;            i_357<16            ;            i_357++            ){
                if(                it_354->sname[i_357]                ) {
                    printf("%s %d #%d, ",it_354->sname[i_357],it_354->sline[i_357],it_354->id[i_357]);
                    flag_356=(_Bool)1;
                }
            }
            if(            flag_356            ) {
                puts("");
            }
            it_354=it_354->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_355,gNumAlloc,gNumFree);
    }
    else {
        it_358=(struct sMemHeaderTiny*)gAllocMem;
        n_359=0;
        while(        it_358        ) {
            n_359++;
            if(            it_358->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_359,(char*)it_358+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_358->class_name,it_358->sname,it_358->sline);
            }
            it_358=it_358->next;
        }
        if(        n_359>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_359,gNumAlloc,gNumFree);
        }
    }
    for(    i_360=0    ;    i_360<gHeapPages.mSizePages    ;    i_360++    ){
        free(gHeapPages.mPages[i_360]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_361;
void* __result_obj__57;
    result_361=((void*)0);
    size=(size+7&~7);
    result_361=calloc(1,size);
    __result_obj__57 = result_361;
    return __result_obj__57;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_362;
struct sMemHeader* prev_it_363;
struct sMemHeader* next_it_364;
unsigned long  int size_365;
struct sMemHeaderTiny* it_366;
struct sMemHeaderTiny* prev_it_367;
struct sMemHeaderTiny* next_it_368;
unsigned long  int size_369;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_362=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_362->allocated!=177783            ) {
                return;
            }
            it_362->allocated=0;
            prev_it_363=it_362->prev;
            next_it_364=it_362->next;
            if(            gAllocMem==it_362            ) {
                gAllocMem=next_it_364;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_363                ) {
                    prev_it_363->next=next_it_364;
                }
                if(                next_it_364                ) {
                    next_it_364->prev=prev_it_363;
                }
            }
            size_365=it_362->size;
            free(it_362);
            gNumFree++;
        }
        else {
            it_366=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_366->allocated!=177783            ) {
                return;
            }
            it_366->allocated=0;
            prev_it_367=it_366->prev;
            next_it_368=it_366->next;
            if(            gAllocMem==it_366            ) {
                gAllocMem=(struct sMemHeader*)next_it_368;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_367                ) {
                    prev_it_367->next=next_it_368;
                }
                if(                next_it_368                ) {
                    next_it_368->prev=prev_it_367;
                }
            }
            size_369=it_366->size;
            free(it_366);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_370;
struct sMemHeader* it_371;
int i_372;
int i_373;
void* __result_obj__58;
void* result_374;
struct sMemHeaderTiny* it_375;
void* __result_obj__59;
memset(&i_372, 0, sizeof(int));
memset(&i_373, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_370=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_371=result_370;
        it_371->allocated=177783;
        it_371->size=size+sizeof(struct sMemHeader);
        it_371->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_372=0            ;            i_372<gNumComeStackFrame            ;            i_372++            ){
                it_371->sname[i_372]=gComeStackFrameSName[i_372];
                it_371->sline[i_372]=gComeStackFrameSLine[i_372];
                it_371->id[i_372]=gComeStackFrameID[i_372];
            }
        }
        else {
            for(            i_373=0            ;            i_373<16            ;            i_373++            ){
                it_371->sname[i_373]=gComeStackFrameSName[gNumComeStackFrame-1-i_373];
                it_371->sline[i_373]=gComeStackFrameSLine[gNumComeStackFrame-1-i_373];
                it_371->id[i_373]=gComeStackFrameID[gNumComeStackFrame-1-i_373];
            }
        }
        come_pop_stackframe_v2();
        it_371->next=gAllocMem;
        it_371->prev=((void*)0);
        it_371->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_371;
        }
        gAllocMem=it_371;
        gNumAlloc++;
        __result_obj__58 = (char*)result_370+sizeof(struct sMemHeader);
        return __result_obj__58;
    }
    else {
        result_374=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_375=result_374;
        it_375->allocated=177783;
        it_375->class_name=class_name;
        it_375->sname=sname;
        it_375->sline=sline;
        it_375->size=size+sizeof(struct sMemHeaderTiny);
        it_375->free_next=((void*)0);
        it_375->next=(struct sMemHeaderTiny*)gAllocMem;
        it_375->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_375;
        }
        gAllocMem=(struct sMemHeader*)it_375;
        gNumAlloc++;
        __result_obj__59 = (char*)result_374+sizeof(struct sMemHeaderTiny);
        return __result_obj__59;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_376;
char* __result_obj__60;
struct sMemHeaderTiny* it_377;
char* __result_obj__61;
    if(    gComeDebugLib    ) {
        it_376=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_376->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_376);
            exit(2);
        }
        __result_obj__60 = it_376->class_name;
        return __result_obj__60;
    }
    else {
        it_377=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_377->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_377);
            exit(2);
        }
        __result_obj__61 = it_377->class_name;
        return __result_obj__61;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_378;
int i_379;
struct sMemHeaderTiny* it_380;
    if(    gComeDebugLib    ) {
        it_378=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_378->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_378->class_name        ) {
            printf("(%s): ",it_378->class_name);
        }
        for(        i_379=0        ;        i_379<16        ;        i_379++        ){
            if(            it_378->sname[i_379]            ) {
                printf("%s %d #%d, ",it_378->sname[i_379],it_378->sline[i_379],it_378->id[i_379]);
            }
        }
        puts("");
    }
    else {
        it_380=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_380->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_380->class_name,it_380->sname,it_380->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_381;
unsigned long  int* ref_count_382;
unsigned long  int* size2_383;
void* __result_obj__62;
    mem_381=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_382=(unsigned long  int*)mem_381;
    *ref_count_382=0;
    size2_383=(unsigned long  int*)(mem_381+sizeof(unsigned long  int));
    *size2_383=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__62 = mem_381+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__62;
}

void come_free(void* mem){
unsigned long  int* ref_count_384;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_384=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_384);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__63;
char* mem_385;
unsigned long  int* size_p_386;
unsigned long  int size_387;
void* result_388;
void* __result_obj__64;
    if(    !block    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    mem_385=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_386=(unsigned long  int*)(mem_385+sizeof(unsigned long  int));
    size_387=*size_p_386-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_388=come_calloc_v2(1,size_387,sname,sline,class_name);
    memcpy(result_388,block,size_387);
    __result_obj__64 = result_388;
    return __result_obj__64;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_389;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_389=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_389)++;
    __result_obj__66 = mem;
    return __result_obj__66;
}

void* come_print_ref_count(void* mem){
void* __result_obj__67;
unsigned long  int* ref_count_390;
void* __result_obj__68;
    if(    mem==((void*)0)    ) {
        __result_obj__67 = mem;
        return __result_obj__67;
    }
    ref_count_390=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_390);
    __result_obj__68 = mem;
    return __result_obj__68;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_391;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_391=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_391;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__69;
void* __result_obj__70;
unsigned long  int* ref_count_392;
unsigned long  int count_393;
void (*finalizer_394)(void*);
void* __result_obj__71;
void* __result_obj__72;
memset(&finalizer_394, 0, sizeof(void (*)(void*)));
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
    ref_count_392=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_392)--;
    }
    count_393=*ref_count_392;
    if(    !no_free&&count_393<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_394=protocol_fun;
            finalizer_394(protocol_obj);
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
void (*finalizer_395)(void*);
void (*finalizer_396)(void*);
void (*finalizer_397)(void*);
unsigned long  int* ref_count_398;
unsigned long  int count_399;
void (*finalizer_400)(void*);
void (*finalizer_401)(void*);
void (*finalizer_402)(void*);
memset(&finalizer_395, 0, sizeof(void (*)(void*)));
memset(&finalizer_396, 0, sizeof(void (*)(void*)));
memset(&finalizer_397, 0, sizeof(void (*)(void*)));
memset(&finalizer_400, 0, sizeof(void (*)(void*)));
memset(&finalizer_401, 0, sizeof(void (*)(void*)));
memset(&finalizer_402, 0, sizeof(void (*)(void*)));
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
                finalizer_395=protocol_fun;
                finalizer_395(protocol_obj);
            }
            finalizer_396=fun;
            finalizer_396(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_397=protocol_fun;
                finalizer_397(protocol_obj);
            }
        }
    }
    else {
        ref_count_398=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_398)--;
        }
        count_399=*ref_count_398;
        if(        !no_free&&count_399<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_400=protocol_fun;
                        finalizer_400(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_401=fun;
                        finalizer_401(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_402=protocol_fun;
                        finalizer_402(protocol_obj);
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
int len_403;
void* __right_value28 = (void*)0;
char* result_404;
char* __result_obj__74;
    if(    str==((void*)0)    ) {
        __result_obj__73 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__73;
    }
    len_403=strlen(str)+1;
    result_404=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_403)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_404,str,len_403);
    __result_obj__74 = (char*)come_increment_ref_count(result_404);
    (result_404 = come_decrement_ref_count(result_404, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct buffer* result_405;
void* __right_value33 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__80;
    if(    self==((void*)0)    ) {
        __result_obj__79 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__79;
    }
    result_405=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_405->size=self->size;
    __dec_obj7=result_405->buf,
    result_405->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_405->len=self->len;
    memcpy(result_405->buf,self->buf,self->len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_405);
    come_call_finalizer(buffer_finalize, result_405, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_406;
int old_len_407;
int new_size_408;
void* __right_value37 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__83;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__82 = self;
        return __result_obj__82;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_406=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_406,self->buf,self->size);
        old_len_407=self->len;
        new_size_408=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_408)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_406,old_len_407);
        self->buf[old_len_407]=0;
        self->size=new_size_408;
        (old_buf_406 = come_decrement_ref_count(old_buf_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_409;
int old_len_410;
int new_size_411;
void* __right_value39 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = ((void*)0);
        return __result_obj__84;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_409=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_410=self->len;
        new_size_411=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_411)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_409,old_len_410);
        self->buf[old_len_410]=0;
        self->size=new_size_411;
        (old_buf_409 = come_decrement_ref_count(old_buf_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__86;
int size_412;
void* __right_value40 = (void*)0;
char* old_buf_413;
int old_len_414;
int new_size_415;
void* __right_value41 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__87;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    size_412=strlen(mem);
    if(    self->len+size_412+1+1>=self->size    ) {
        old_buf_413=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_413,self->buf,self->size);
        old_len_414=self->len;
        new_size_415=(self->size+size_412+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_415)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_413,old_len_414);
        self->buf[old_len_414]=0;
        self->size=new_size_415;
        (old_buf_413 = come_decrement_ref_count(old_buf_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_412);
    self->len+=size_412;
    self->buf[self->len]=0;
    __result_obj__87 = self;
    return __result_obj__87;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__88;
va_list args_416;
char* result_417;
int len_418;
struct buffer* __result_obj__89;
void* __right_value42 = (void*)0;
char* mem_419;
int size_420;
void* __right_value43 = (void*)0;
char* old_buf_421;
int old_len_422;
int new_size_423;
void* __right_value44 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__90;
result_417 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__88 = self;
        return __result_obj__88;
    }
    __builtin_va_start(args_416,msg);
    len_418=vasprintf(&result_417,msg,args_416);
    __builtin_va_end(args_416);
    if(    len_418<0    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    mem_419=(char*)come_increment_ref_count(__builtin_string(result_417));
    size_420=strlen(mem_419);
    if(    self->len+size_420+1+1>=self->size    ) {
        old_buf_421=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_421,self->buf,self->size);
        old_len_422=self->len;
        new_size_423=(self->size+size_420+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_423)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_421,old_len_422);
        self->buf[old_len_422]=0;
        self->size=new_size_423;
        (old_buf_421 = come_decrement_ref_count(old_buf_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_419,size_420);
    self->len+=size_420;
    self->buf[self->len]=0;
    free(result_417);
    __result_obj__90 = self;
    (mem_419 = come_decrement_ref_count(mem_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__90;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__91;
int size_424;
void* __right_value45 = (void*)0;
char* old_buf_425;
int old_len_426;
int new_size_427;
void* __right_value46 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__92;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__91 = self;
        return __result_obj__91;
    }
    size_424=strlen(mem)+1;
    if(    self->len+size_424+1+1+1>=self->size    ) {
        old_buf_425=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_425,self->buf,self->size);
        old_len_426=self->len;
        new_size_427=(self->size+size_424+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_427)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_425,old_len_426);
        self->buf[old_len_426]=0;
        self->size=new_size_427;
        (old_buf_425 = come_decrement_ref_count(old_buf_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_424);
    self->len+=size_424;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__93;
int* mem_428;
int size_429;
void* __right_value47 = (void*)0;
char* old_buf_430;
int old_len_431;
int new_size_432;
void* __right_value48 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__94;
    if(    self==((void*)0)    ) {
        __result_obj__93 = ((void*)0);
        return __result_obj__93;
    }
    mem_428=&value;
    size_429=sizeof(int);
    if(    self->len+size_429+1+1>=self->size    ) {
        old_buf_430=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_430,self->buf,self->size);
        old_len_431=self->len;
        new_size_432=(self->size+size_429+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_432)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_430,old_len_431);
        self->buf[old_len_431]=0;
        self->size=new_size_432;
        (old_buf_430 = come_decrement_ref_count(old_buf_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_428,size_429);
    self->len+=size_429;
    self->buf[self->len]=0;
    __result_obj__94 = self;
    return __result_obj__94;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_433;
int size_434;
void* __right_value49 = (void*)0;
char* old_buf_435;
int old_len_436;
int new_size_437;
void* __right_value50 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__95;
    mem_433=&value;
    size_434=sizeof(long);
    if(    self->len+size_434+1+1>=self->size    ) {
        old_buf_435=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_435,self->buf,self->size);
        old_len_436=self->len;
        new_size_437=(self->size+size_434+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_437)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_435,old_len_436);
        self->buf[old_len_436]=0;
        self->size=new_size_437;
        (old_buf_435 = come_decrement_ref_count(old_buf_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_433,size_434);
    self->len+=size_434;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__96;
short* mem_438;
int size_439;
void* __right_value51 = (void*)0;
char* old_buf_440;
int old_len_441;
int new_size_442;
void* __right_value52 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    mem_438=&value;
    size_439=sizeof(short);
    if(    self->len+size_439+1+1>=self->size    ) {
        old_buf_440=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_440,self->buf,self->size);
        old_len_441=self->len;
        new_size_442=(self->size+size_439+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_442)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_440,old_len_441);
        self->buf[old_len_441]=0;
        self->size=new_size_442;
        (old_buf_440 = come_decrement_ref_count(old_buf_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_438,size_439);
    self->len+=size_439;
    self->buf[self->len]=0;
    __result_obj__97 = self;
    return __result_obj__97;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__98;
int len_443;
int new_size_444;
void* __right_value53 = (void*)0;
char* __dec_obj16;
int i_445;
struct buffer* __result_obj__99;
    if(    self==((void*)0)    ) {
        __result_obj__98 = ((void*)0);
        return __result_obj__98;
    }
    len_443=self->len;
    len_443=(len_443+3)&~3;
    if(    len_443>=self->size    ) {
        new_size_444=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_444)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_444;
    }
    for(    i_445=self->len    ;    i_445<len_443    ;    i_445++    ){
        self->buf[i_445]=0;
    }
    self->len=len_443;
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
struct buffer* result_446;
struct buffer* __result_obj__100;
struct buffer* __result_obj__101;
    result_446=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__100 = (struct buffer*)come_increment_ref_count(result_446);
        come_call_finalizer(buffer_finalize, result_446, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__100;
    }
    buffer_append_str(result_446,self);
    __result_obj__101 = (struct buffer*)come_increment_ref_count(result_446);
    come_call_finalizer(buffer_finalize, result_446, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_447;
struct buffer* __result_obj__105;
    result_447=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_447,self,sizeof(char)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_447);
    come_call_finalizer(buffer_finalize, result_447, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct buffer* result_448;
int i_449;
struct buffer* __result_obj__106;
    result_448=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_449=0    ;    i_449<len    ;    i_449++    ){
        buffer_append(result_448,self[i_449],strlen(self[i_449]));
    }
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_448);
    come_call_finalizer(buffer_finalize, result_448, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct buffer* result_450;
struct buffer* __result_obj__107;
    result_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_450,(char*)self,sizeof(short)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_450);
    come_call_finalizer(buffer_finalize, result_450, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct buffer* result_451;
struct buffer* __result_obj__108;
    result_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_451,(char*)self,sizeof(int)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_451);
    come_call_finalizer(buffer_finalize, result_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
struct buffer* result_452;
struct buffer* __result_obj__109;
    result_452=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_452,(char*)self,sizeof(long)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_452);
    come_call_finalizer(buffer_finalize, result_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct buffer* result_453;
struct buffer* __result_obj__110;
    result_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_453,(char*)self,sizeof(float)*len);
    __result_obj__110 = (struct buffer*)come_increment_ref_count(result_453);
    come_call_finalizer(buffer_finalize, result_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__110;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* result_454;
struct buffer* __result_obj__111;
    result_454=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_454,(char*)self,sizeof(double)*len);
    __result_obj__111 = (struct buffer*)come_increment_ref_count(result_454);
    come_call_finalizer(buffer_finalize, result_454, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

char* buffer_printable(struct buffer* self){
int len_455;
void* __right_value72 = (void*)0;
char* result_456;
int n_457;
int i_458;
unsigned char c_459;
char* __result_obj__112;
    len_455=self->len;
    result_456=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_455*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_457=0;
    for(    i_458=0    ;    i_458<len_455    ;    i_458++    ){
        c_459=self->buf[i_458];
        if(        (c_459>=0&&c_459<32)||c_459==127        ) {
            result_456[n_457++]=94;
            result_456[n_457++]=c_459+65-1;
        }
        else if(        c_459>127        ) {
            result_456[n_457++]=63;
        }
        else {
            result_456[n_457++]=c_459;
        }
    }
    result_456[n_457]=0;
    __result_obj__112 = (char*)come_increment_ref_count(result_456);
    (result_456 = come_decrement_ref_count(result_456, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_460;
struct list$1char$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_460=0    ;    i_460<num_value    ;    i_460++    ){
        list$1char$_push_back(self,values[i_460]);
    }
    __result_obj__114 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value74 = (void*)0;
struct list_item$1char$* litem_461;
void* __right_value75 = (void*)0;
struct list_item$1char$* litem_462;
void* __right_value76 = (void*)0;
struct list_item$1char$* litem_463;
struct list$1char$* __result_obj__113;
    if(    self->len==0    ) {
        litem_461=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value74=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_461->prev=((void*)0);
        litem_461->next=((void*)0);
        litem_461->item=item;
        self->tail=litem_461;
        self->head=litem_461;
    }
    else if(    self->len==1    ) {
        litem_462=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value75=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_462->prev=self->head;
        litem_462->next=((void*)0);
        litem_462->item=item;
        self->tail=litem_462;
        self->head->next=litem_462;
    }
    else {
        litem_463=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value76=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_463->prev=self->tail;
        litem_463->next=((void*)0);
        litem_463->item=item;
        self->tail->next=litem_463;
        self->tail=litem_463;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_464;
struct list_item$1char$* prev_it_465;
    it_464=self->head;
    while(    it_464!=((void*)0)    ) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_465, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_466;
struct list$1char$p* __result_obj__117;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_466=0    ;    i_466<num_value    ;    i_466++    ){
        list$1char$p_push_back(self,values[i_466]);
    }
    __result_obj__117 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__117, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__117;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value79 = (void*)0;
struct list_item$1char$p* litem_467;
void* __right_value80 = (void*)0;
struct list_item$1char$p* litem_468;
void* __right_value81 = (void*)0;
struct list_item$1char$p* litem_469;
struct list$1char$p* __result_obj__116;
    if(    self->len==0    ) {
        litem_467=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value79=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_467->prev=((void*)0);
        litem_467->next=((void*)0);
        litem_467->item=item;
        self->tail=litem_467;
        self->head=litem_467;
    }
    else if(    self->len==1    ) {
        litem_468=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value80=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_468->prev=self->head;
        litem_468->next=((void*)0);
        litem_468->item=item;
        self->tail=litem_468;
        self->head->next=litem_468;
    }
    else {
        litem_469=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value81=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_469->prev=self->tail;
        litem_469->next=((void*)0);
        litem_469->item=item;
        self->tail->next=litem_469;
        self->tail=litem_469;
    }
    self->len++;
    __result_obj__116 = self;
    return __result_obj__116;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_470;
struct list_item$1char$p* prev_it_471;
    it_470=self->head;
    while(    it_470!=((void*)0)    ) {
        prev_it_471=it_470;
        it_470=it_470->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_471, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_472;
struct list$1short$* __result_obj__120;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_472=0    ;    i_472<num_value    ;    i_472++    ){
        list$1short$_push_back(self,values[i_472]);
    }
    __result_obj__120 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__120;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value84 = (void*)0;
struct list_item$1short$* litem_473;
void* __right_value85 = (void*)0;
struct list_item$1short$* litem_474;
void* __right_value86 = (void*)0;
struct list_item$1short$* litem_475;
struct list$1short$* __result_obj__119;
    if(    self->len==0    ) {
        litem_473=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value84=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_473->prev=((void*)0);
        litem_473->next=((void*)0);
        litem_473->item=item;
        self->tail=litem_473;
        self->head=litem_473;
    }
    else if(    self->len==1    ) {
        litem_474=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value85=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_474->prev=self->head;
        litem_474->next=((void*)0);
        litem_474->item=item;
        self->tail=litem_474;
        self->head->next=litem_474;
    }
    else {
        litem_475=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value86=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_475->prev=self->tail;
        litem_475->next=((void*)0);
        litem_475->item=item;
        self->tail->next=litem_475;
        self->tail=litem_475;
    }
    self->len++;
    __result_obj__119 = self;
    return __result_obj__119;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_476;
struct list_item$1short$* prev_it_477;
    it_476=self->head;
    while(    it_476!=((void*)0)    ) {
        prev_it_477=it_476;
        it_476=it_476->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_477, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_478;
struct list$1int$* __result_obj__123;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_478=0    ;    i_478<num_value    ;    i_478++    ){
        list$1int$_push_back(self,values[i_478]);
    }
    __result_obj__123 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__123, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__123;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value89 = (void*)0;
struct list_item$1int$* litem_479;
void* __right_value90 = (void*)0;
struct list_item$1int$* litem_480;
void* __right_value91 = (void*)0;
struct list_item$1int$* litem_481;
struct list$1int$* __result_obj__122;
    if(    self->len==0    ) {
        litem_479=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value89=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_479->prev=((void*)0);
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail=litem_479;
        self->head=litem_479;
    }
    else if(    self->len==1    ) {
        litem_480=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value90=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_480->prev=self->head;
        litem_480->next=((void*)0);
        litem_480->item=item;
        self->tail=litem_480;
        self->head->next=litem_480;
    }
    else {
        litem_481=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value91=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_481->prev=self->tail;
        litem_481->next=((void*)0);
        litem_481->item=item;
        self->tail->next=litem_481;
        self->tail=litem_481;
    }
    self->len++;
    __result_obj__122 = self;
    return __result_obj__122;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_482;
struct list_item$1int$* prev_it_483;
    it_482=self->head;
    while(    it_482!=((void*)0)    ) {
        prev_it_483=it_482;
        it_482=it_482->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_483, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_484;
struct list$1long$* __result_obj__126;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_484=0    ;    i_484<num_value    ;    i_484++    ){
        list$1long$_push_back(self,values[i_484]);
    }
    __result_obj__126 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__126;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value94 = (void*)0;
struct list_item$1long$* litem_485;
void* __right_value95 = (void*)0;
struct list_item$1long$* litem_486;
void* __right_value96 = (void*)0;
struct list_item$1long$* litem_487;
struct list$1long$* __result_obj__125;
    if(    self->len==0    ) {
        litem_485=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value94=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_485->prev=((void*)0);
        litem_485->next=((void*)0);
        litem_485->item=item;
        self->tail=litem_485;
        self->head=litem_485;
    }
    else if(    self->len==1    ) {
        litem_486=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value95=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_486->prev=self->head;
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail=litem_486;
        self->head->next=litem_486;
    }
    else {
        litem_487=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value96=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_487->prev=self->tail;
        litem_487->next=((void*)0);
        litem_487->item=item;
        self->tail->next=litem_487;
        self->tail=litem_487;
    }
    self->len++;
    __result_obj__125 = self;
    return __result_obj__125;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_488;
struct list_item$1long$* prev_it_489;
    it_488=self->head;
    while(    it_488!=((void*)0)    ) {
        prev_it_489=it_488;
        it_488=it_488->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_489, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_490;
struct list$1float$* __result_obj__129;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_490=0    ;    i_490<num_value    ;    i_490++    ){
        list$1float$_push_back(self,values[i_490]);
    }
    __result_obj__129 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__129, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__129;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value99 = (void*)0;
struct list_item$1float$* litem_491;
void* __right_value100 = (void*)0;
struct list_item$1float$* litem_492;
void* __right_value101 = (void*)0;
struct list_item$1float$* litem_493;
struct list$1float$* __result_obj__128;
    if(    self->len==0    ) {
        litem_491=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value99=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_491->prev=((void*)0);
        litem_491->next=((void*)0);
        litem_491->item=item;
        self->tail=litem_491;
        self->head=litem_491;
    }
    else if(    self->len==1    ) {
        litem_492=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value100=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_492->prev=self->head;
        litem_492->next=((void*)0);
        litem_492->item=item;
        self->tail=litem_492;
        self->head->next=litem_492;
    }
    else {
        litem_493=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value101=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_493->prev=self->tail;
        litem_493->next=((void*)0);
        litem_493->item=item;
        self->tail->next=litem_493;
        self->tail=litem_493;
    }
    self->len++;
    __result_obj__128 = self;
    return __result_obj__128;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_494;
struct list_item$1float$* prev_it_495;
    it_494=self->head;
    while(    it_494!=((void*)0)    ) {
        prev_it_495=it_494;
        it_494=it_494->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_495, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_496;
struct list$1double$* __result_obj__132;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_496=0    ;    i_496<num_value    ;    i_496++    ){
        list$1double$_push_back(self,values[i_496]);
    }
    __result_obj__132 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value104 = (void*)0;
struct list_item$1double$* litem_497;
void* __right_value105 = (void*)0;
struct list_item$1double$* litem_498;
void* __right_value106 = (void*)0;
struct list_item$1double$* litem_499;
struct list$1double$* __result_obj__131;
    if(    self->len==0    ) {
        litem_497=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value104=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_497->prev=((void*)0);
        litem_497->next=((void*)0);
        litem_497->item=item;
        self->tail=litem_497;
        self->head=litem_497;
    }
    else if(    self->len==1    ) {
        litem_498=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value105=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_498->prev=self->head;
        litem_498->next=((void*)0);
        litem_498->item=item;
        self->tail=litem_498;
        self->head->next=litem_498;
    }
    else {
        litem_499=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value106=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_499->prev=self->tail;
        litem_499->next=((void*)0);
        litem_499->item=item;
        self->tail->next=litem_499;
        self->tail=litem_499;
    }
    self->len++;
    __result_obj__131 = self;
    return __result_obj__131;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_500;
struct list_item$1double$* prev_it_501;
    it_500=self->head;
    while(    it_500!=((void*)0)    ) {
        prev_it_501=it_500;
        it_500=it_500->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_501, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_502;
void* __right_value109 = (void*)0;
char* result_503;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_502=strlen(self)+strlen(right);
    result_503=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_502+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_503,self,len_502+1);
    strncat(result_503,right,len_502+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_503);
    (result_503 = come_decrement_ref_count(result_503, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* string_operator_add(char* self, char* right){
void* __right_value110 = (void*)0;
char* __result_obj__136;
int len_504;
void* __right_value111 = (void*)0;
char* result_505;
char* __result_obj__137;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    len_504=strlen(self)+strlen(right);
    result_505=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_504+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_505,self,len_504+1);
    strncat(result_505,right,len_504+1);
    __result_obj__137 = (char*)come_increment_ref_count(result_505);
    (result_505 = come_decrement_ref_count(result_505, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_operator_mult(char* self, int right){
void* __right_value112 = (void*)0;
char* __result_obj__138;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct buffer* buf_506;
int i_507;
void* __right_value115 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_507=0    ;    i_507<right    ;    i_507++    ){
        buffer_append_str(buf_506,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value115=buffer_to_string(buf_506))));
    come_call_finalizer(buffer_finalize, buf_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* string_operator_mult(char* self, int right){
void* __right_value116 = (void*)0;
char* __result_obj__140;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct buffer* buf_508;
int i_509;
void* __right_value119 = (void*)0;
char* __result_obj__141;
    if(    self==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    buf_508=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_509=0    ;    i_509<right    ;    i_509++    ){
        buffer_append_str(buf_508,self);
    }
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value119=buffer_to_string(buf_508))));
    come_call_finalizer(buffer_finalize, buf_508, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_510;
int i_511;
    result_510=(_Bool)0;
    for(    i_511=0    ;    i_511<len    ;    i_511++    ){
        if(        strncmp(self[i_511],str,strlen(self[i_511]))==0        ) {
            result_510=(_Bool)1;
            break;
        }
    }
    return result_510;
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
int result_512;
char* p_513;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_512=0;
    p_513=value;
    while(    *p_513    ) {
        result_512+=(*p_513);
        p_513++;
    }
    return result_512;
}

unsigned int string_get_hash_key(char* value){
int result_514;
char* p_515;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_514=0;
    p_515=value;
    while(    *p_515    ) {
        result_514+=(*p_515);
        p_515++;
    }
    return result_514;
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
_Bool result_516;
    result_516=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_516;
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
_Bool result_517;
    result_517=(c>=32&&c<=126);
    return result_517;
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
int len_518;
void* __right_value121 = (void*)0;
char* result_519;
int i_520;
char* __result_obj__143;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_518=strlen(str);
    result_519=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_518+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_520=0    ;    i_520<len_518    ;    i_520++    ){
        result_519[i_520]=str[len_518-i_520-1];
    }
    result_519[len_518]=0;
    __result_obj__143 = (char*)come_increment_ref_count(result_519);
    (result_519 = come_decrement_ref_count(result_519, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value122 = (void*)0;
char* __result_obj__144;
int len_521;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
char* __result_obj__145;
void* __right_value125 = (void*)0;
char* __result_obj__146;
void* __right_value126 = (void*)0;
char* __result_obj__147;
void* __right_value127 = (void*)0;
char* result_522;
char* __result_obj__148;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_521=strlen(str);
    if(    head<0    ) {
        head+=len_521;
    }
    if(    tail<0    ) {
        tail+=len_521+1;
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
    if(    tail>=len_521    ) {
        tail=len_521;
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
    result_522=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_522,str+head,tail-head);
    result_522[tail-head]=0;
    __result_obj__148 = (char*)come_increment_ref_count(result_522);
    (result_522 = come_decrement_ref_count(result_522, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value128 = (void*)0;
char* __result_obj__149;
int len_523;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
char* __result_obj__150;
void* __right_value131 = (void*)0;
char* __result_obj__151;
void* __right_value132 = (void*)0;
char* __result_obj__152;
void* __right_value133 = (void*)0;
char* result_524;
char* __result_obj__153;
    if(    str==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value128=__builtin_string(""))));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    len_523=strlen(str);
    if(    head<0    ) {
        head+=len_523;
    }
    if(    tail<0    ) {
        tail+=len_523+1;
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
    if(    tail>=len_523    ) {
        tail=len_523;
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
    result_524=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_524,str+head,tail-head);
    result_524[tail-head]=0;
    __result_obj__153 = (char*)come_increment_ref_count(result_524);
    (result_524 = come_decrement_ref_count(result_524, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value134 = (void*)0;
char* __result_obj__154;
int len_525;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __result_obj__155;
void* __right_value137 = (void*)0;
char* __result_obj__156;
void* __right_value138 = (void*)0;
char* __result_obj__157;
void* __right_value139 = (void*)0;
char* result_526;
char* __result_obj__158;
    if(    str==((void*)0)    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(""))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    len_525=strlen(str);
    if(    head<0    ) {
        head+=len_525;
    }
    if(    tail<0    ) {
        tail+=len_525+1;
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
    if(    tail>=len_525    ) {
        tail=len_525;
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
    result_526=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_526,str+head,tail-head);
    result_526[tail-head]=0;
    __result_obj__158 = (char*)come_increment_ref_count(result_526);
    (result_526 = come_decrement_ref_count(result_526, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* xsprintf(char* msg, ...){
void* __right_value140 = (void*)0;
char* __result_obj__159;
va_list args_527;
char* result_528;
int len_529;
void* __right_value141 = (void*)0;
char* __result_obj__160;
void* __right_value142 = (void*)0;
char* result2_530;
char* __result_obj__161;
result_528 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    __builtin_va_start(args_527,msg);
    len_529=vasprintf(&result_528,msg,args_527);
    __builtin_va_end(args_527);
    if(    len_529<0    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    result2_530=(char*)come_increment_ref_count(__builtin_string(result_528));
    free(result_528);
    __result_obj__161 = (char*)come_increment_ref_count(result2_530);
    (result2_530 = come_decrement_ref_count(result2_530, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value143 = (void*)0;
char* __result_obj__162;
int len_531;
void* __right_value144 = (void*)0;
char* __result_obj__163;
void* __right_value145 = (void*)0;
char* __result_obj__164;
void* __right_value146 = (void*)0;
char* result_532;
char* __result_obj__165;
    if(    str==((void*)0)    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    len_531=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(str))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    if(    head<0    ) {
        head+=len_531;
    }
    if(    tail<0    ) {
        tail+=len_531+1;
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
    if(    tail>=len_531    ) {
        tail=len_531;
    }
    result_532=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_531-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_532,str,head);
    memcpy(result_532+head,str+tail,len_531-tail);
    result_532[len_531-(tail-head)]=0;
    __result_obj__165 = (char*)come_increment_ref_count(result_532);
    (result_532 = come_decrement_ref_count(result_532, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_533;
struct list_item$1char$ph* prev_it_534;
    it_533=self->head;
    while(    it_533!=((void*)0)    ) {
        prev_it_534=it_533;
        it_533=it_533->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_534, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value153 = (void*)0;
struct list_item$1char$ph* litem_538;
char* __dec_obj17;
void* __right_value154 = (void*)0;
struct list_item$1char$ph* litem_539;
char* __dec_obj18;
void* __right_value155 = (void*)0;
struct list_item$1char$ph* litem_540;
char* __dec_obj19;
struct list$1char$ph* __result_obj__168;
    if(    self->len==0    ) {
        litem_538=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value153=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_538->prev=((void*)0);
        litem_538->next=((void*)0);
        __dec_obj17=litem_538->item,
        litem_538->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_538;
        self->head=litem_538;
    }
    else if(    self->len==1    ) {
        litem_539=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value154=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_539->prev=self->head;
        litem_539->next=((void*)0);
        __dec_obj18=litem_539->item,
        litem_539->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_539;
        self->head->next=litem_539;
    }
    else {
        litem_540=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value155=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_540->prev=self->tail;
        litem_540->next=((void*)0);
        __dec_obj19=litem_540->item,
        litem_540->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_540;
        self->tail=litem_540;
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
struct list$1char$ph* result_535;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct buffer* str_536;
int i_537;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct list$1char$ph* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value148=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value148, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__167;
    }
    result_535=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_537=0    ;    i_537<charp_length(self)    ;    i_537++    ){
        if(        self[i_537]==c        ) {
            list$1char$ph_push_back(result_535,(char*)come_increment_ref_count(__builtin_string(str_536->buf)));
            buffer_reset(str_536);
        }
        else {
            buffer_append_char(str_536,self[i_537]);
        }
    }
    if(    buffer_length(str_536)!=0    ) {
        list$1char$ph_push_back(result_535,(char*)come_increment_ref_count(__builtin_string(str_536->buf)));
    }
    __result_obj__169 = (struct list$1char$ph*)come_increment_ref_count(result_535);
    come_call_finalizer(list$1char$ph$p_finalize, result_535, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_536, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_541;
void* __right_value160 = (void*)0;
char* result_542;
int n_543;
int i_544;
char c_545;
char* __result_obj__172;
    len_541=charp_length(str);
    result_542=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_541*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_543=0;
    for(    i_544=0    ;    i_544<len_541    ;    i_544++    ){
        c_545=str[i_544];
        if(        (c_545>=0&&c_545<32)||c_545==127        ) {
            result_542[n_543++]=94;
            result_542[n_543++]=c_545+65-1;
        }
        else {
            result_542[n_543++]=c_545;
        }
    }
    result_542[n_543]=0;
    __result_obj__172 = (char*)come_increment_ref_count(result_542);
    (result_542 = come_decrement_ref_count(result_542, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value161 = (void*)0;
char* __result_obj__173;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct buffer* result_546;
char* p_547;
char* p2_548;
void* __right_value164 = (void*)0;
char* __result_obj__174;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string(self))));
        (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    result_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_547=self;
    while(    (_Bool)1    ) {
        p2_548=strstr(p_547,str);
        if(        p2_548==((void*)0)        ) {
            p2_548=p_547;
            while(            *p2_548            ) {
                p2_548++;
            }
            buffer_append(result_546,p_547,p2_548-p_547);
            break;
        }
        buffer_append(result_546,p_547,p2_548-p_547);
        buffer_append_str(result_546,replace);
        p_547=p2_548+strlen(str);
    }
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value164=buffer_to_string(result_546))));
    come_call_finalizer(buffer_finalize, result_546, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* xbasename(char* path){
void* __right_value165 = (void*)0;
char* __result_obj__175;
char* p_549;
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
    p_549=path+strlen(path);
    while(    p_549>=path    ) {
        if(        *p_549==47        ) {
            break;
        }
        else {
            p_549--;
        }
    }
    if(    p_549<path    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(path))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    else {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(p_549+1))));
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
char* path2_550;
char* p_551;
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
    path2_550=(char*)come_increment_ref_count(xbasename(path));
    p_551=path2_550+strlen(path2_550);
    while(    p_551>=path2_550    ) {
        if(        *p_551==46        ) {
            break;
        }
        else {
            p_551--;
        }
    }
    if(    p_551<path2_550    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(path2_550))));
        (path2_550 = come_decrement_ref_count(path2_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    else {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value172=charp_substring(path2_550,0,p_551-path2_550))));
        (path2_550 = come_decrement_ref_count(path2_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
    (path2_550 = come_decrement_ref_count(path2_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__182;
}

char* xextname(char* path){
void* __right_value174 = (void*)0;
char* __result_obj__183;
char* p_552;
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
    p_552=path+strlen(path);
    while(    p_552>=path    ) {
        if(        *p_552==46        ) {
            break;
        }
        else {
            p_552--;
        }
    }
    if(    p_552<path    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(path))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    else {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(p_552+1))));
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
char* msg2_553;
va_list args_554;
void* __right_value198 = (void*)0;
char* __result_obj__207;
msg2_553 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(""))));
        (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__206;
    }
    __builtin_va_start(args_554,self);
    vasprintf(&msg2_553,self,args_554);
    __builtin_va_end(args_554);
    printf("%s",msg2_553);
    free(msg2_553);
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
int i_555;
    for(    i_555=0    ;    i_555<self    ;    i_555++    ){
        block(parent,i_555);
    }
}

