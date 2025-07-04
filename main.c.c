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

unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc8, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xbc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x8d, 0x47, 0x3e, 0x85,
  0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4,
  0x22, 0xe0, 0x00, 0x08, 0x19, 0x46, 0x97, 0x05, 0x00, 0x00, 0x93, 0x85,
  0x65, 0x03, 0x05, 0x45, 0xef, 0xf0, 0xdf, 0xf7, 0x09, 0x46, 0x97, 0x05,
  0x00, 0x00, 0x93, 0x85, 0xe5, 0x02, 0x05, 0x45, 0xef, 0xf0, 0xdf, 0xf6,
  0x05, 0x45, 0xef, 0xf0, 0x9f, 0xfa, 0x81, 0x47, 0x3e, 0x85, 0xa2, 0x60,
  0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x48, 0x45, 0x4c, 0x4c, 0x4f, 0x31, 0x00, 0x00, 0x0d, 0x0a, 0x00, 0x47,
  0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64,
  0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00,
  0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x98, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0xa3, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa8, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa8, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x65, 0x78, 0x69, 0x74, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61,
  0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f,
  0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e,
  0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53,
  0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73,
  0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00,
  0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e,
  0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65,
  0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00,
  0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73,
  0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00,
  0x2e, 0x72, 0x6f, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d,
  0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e,
  0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x83, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=1736;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc8, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xbc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x19, 0x46, 0x97, 0x05,
  0x00, 0x00, 0x93, 0x85, 0xa5, 0x04, 0x05, 0x45, 0xef, 0xf0, 0x1f, 0xf9,
  0x09, 0x46, 0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x25, 0x04, 0x05, 0x45,
  0xef, 0xf0, 0x1f, 0xf8, 0x09, 0x45, 0xef, 0xf0, 0xdf, 0xfb, 0x81, 0x47,
  0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11,
  0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60,
  0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x48, 0x45, 0x4c, 0x4c, 0x4f, 0x32, 0x00, 0x00, 0x0d, 0x0a, 0x00, 0x47,
  0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64,
  0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00,
  0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x98, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0xa3, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x7e, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa8, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa8, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa3, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1736;
unsigned char shell_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xa2, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x74, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x39, 0x71,
  0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00, 0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38,
  0xb4, 0xfc, 0x23, 0x34, 0xc4, 0xfc, 0x83, 0x37, 0x84, 0xfe, 0x03, 0x37,
  0x84, 0xfd, 0x83, 0x36, 0x04, 0xfd, 0x03, 0x38, 0x84, 0xfc, 0x3a, 0x85,
  0xb6, 0x85, 0x42, 0x86, 0x93, 0x08, 0x10, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85,
  0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x39, 0x71, 0x06, 0xfc,
  0x22, 0xf8, 0x80, 0x00, 0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc,
  0xb2, 0x87, 0x23, 0x26, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x03, 0x37,
  0x04, 0xfd, 0x83, 0x26, 0xc4, 0xfc, 0x3e, 0x85, 0xba, 0x85, 0x36, 0x86,
  0x93, 0x08, 0x50, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74,
  0x21, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08,
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x3e, 0x85,
  0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74,
  0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0x23, 0x04,
  0xf4, 0xfe, 0xa3, 0x04, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe, 0x05, 0x46,
  0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x9f, 0xec, 0x01, 0x00, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x1d, 0x71, 0x86, 0xec, 0xa2, 0xe8,
  0x80, 0x10, 0xaa, 0x87, 0xae, 0x86, 0x32, 0x87, 0x23, 0x26, 0xf4, 0xfa,
  0xb6, 0x87, 0x23, 0x24, 0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22, 0xf4, 0xfa,
  0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfa,
  0x81, 0x27, 0x8d, 0xc3, 0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27, 0x63, 0xdd,
  0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfa,
  0xbb, 0x07, 0xf0, 0x40, 0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x29, 0xa0,
  0x83, 0x27, 0xc4, 0xfa, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe,
  0x81, 0x27, 0xad, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0xdf, 0xf6,
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
  0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0xdf, 0xee, 0x11, 0xa8, 0x83, 0x27,
  0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc, 0x3e, 0x85,
  0xef, 0xf0, 0x9f, 0xed, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc,
  0xe6, 0x60, 0x46, 0x64, 0x25, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4,
  0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87,
  0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26,
  0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27,
  0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40,
  0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05,
  0x00, 0x03, 0xef, 0xf0, 0xbf, 0xe6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9,
  0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe,
  0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb,
  0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87,
  0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe,
  0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f,
  0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe,
  0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9,
  0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8,
  0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27,
  0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0xff, 0xde, 0x11, 0xa8,
  0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb,
  0x3e, 0x85, 0xef, 0xf0, 0xbf, 0xdd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf,
  0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x59, 0x71,
  0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87,
  0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8,
  0x23, 0x26, 0x04, 0xfe, 0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9,
  0x81, 0x27, 0x91, 0xcf, 0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00,
  0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07,
  0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0xdf, 0xd6, 0x55, 0xa0, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22,
  0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47,
  0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27,
  0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7,
  0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26,
  0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27,
  0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x1f, 0xcf,
  0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7,
  0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0, 0xdf, 0xcd, 0x83, 0x27, 0xc4, 0xfe,
  0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80,
  0x31, 0x71, 0x86, 0xfc, 0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34, 0xa4, 0xf8,
  0x0c, 0xe4, 0x10, 0xe8, 0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4, 0x23, 0x38,
  0x04, 0x03, 0x23, 0x3c, 0x14, 0x03, 0x93, 0x07, 0x04, 0x04, 0x23, 0x30,
  0xf4, 0xf8, 0x83, 0x37, 0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe, 0xd9, 0xac,
  0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07,
  0x50, 0x02, 0x63, 0x0a, 0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xc6, 0x6d, 0xa4, 0x83, 0x37,
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
  0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x1f, 0xb5, 0x23, 0x20, 0x04, 0xfe,
  0x11, 0xa8, 0x13, 0x05, 0xc0, 0x06, 0xef, 0xf0, 0x3f, 0xb4, 0x83, 0x27,
  0x04, 0xfe, 0x85, 0x27, 0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe,
  0x3e, 0x87, 0x83, 0x27, 0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x40,
  0xf7, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0x9f, 0xb1, 0xb9, 0xaa, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
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
  0xef, 0xf0, 0x9f, 0xa5, 0x13, 0x05, 0x80, 0x07, 0xef, 0xf0, 0x1f, 0xa5,
  0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc, 0xef, 0xf0, 0xdf, 0xb8,
  0x69, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x27, 0x1f, 0x23, 0x3c,
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
  0xe3, 0x92, 0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85, 0xe6, 0x70, 0x46, 0x74,
  0x29, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10,
  0x23, 0x34, 0xa4, 0xfe, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfe, 0x13, 0x87,
  0x17, 0x00, 0x23, 0x34, 0xe4, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0x97, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0xed, 0xf3, 0x01, 0x00, 0x01, 0x00, 0xe2, 0x60, 0x42, 0x64, 0x05, 0x61,
  0x82, 0x80, 0x29, 0x71, 0x06, 0xfe, 0x22, 0xfa, 0x80, 0x02, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0xe5, 0x17, 0xef, 0xf0, 0x7f, 0xfb, 0x09, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x85, 0x17, 0x05, 0x45, 0xef, 0xf0,
  0x7f, 0x82, 0x23, 0x26, 0x04, 0xfe, 0x93, 0x07, 0x04, 0xf5, 0x05, 0x46,
  0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0, 0x7f, 0x85, 0x93, 0x07, 0x04, 0xf5,
  0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x7f, 0x80, 0x03, 0x47,
  0x04, 0xf5, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x84,
  0xe7, 0xf6, 0x83, 0x27, 0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x47, 0x04, 0xf5, 0x3e, 0x87, 0xb5, 0x47, 0x63, 0x09, 0xf7, 0x00,
  0x83, 0x47, 0x04, 0xf5, 0x3e, 0x87, 0xa9, 0x47, 0x63, 0x03, 0xf7, 0x00,
  0x4d, 0xbf, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x81, 0x27, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x84, 0x07, 0xf6, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0xe5, 0x0f, 0xef, 0xf0, 0x7f, 0xf3, 0x83, 0x47, 0x84, 0xf5, 0xd1, 0xc3,
  0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x24,
  0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x63, 0xdb, 0x07, 0x00,
  0x31, 0x46, 0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x25, 0x0e, 0x09, 0x45,
  0xef, 0xf0, 0x8f, 0xf8, 0xb1, 0xa8, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27,
  0x8d, 0xe7, 0x23, 0x20, 0x04, 0xfe, 0x83, 0x26, 0x04, 0xfe, 0x13, 0x07,
  0x84, 0xec, 0x93, 0x07, 0x84, 0xf5, 0x36, 0x86, 0xba, 0x85, 0x3e, 0x85,
  0xef, 0xf0, 0xcf, 0xfe, 0xaa, 0x87, 0x23, 0x2e, 0xf4, 0xfc, 0x19, 0x45,
  0xef, 0xf0, 0x5f, 0x82, 0x19, 0xbf, 0x23, 0x26, 0x04, 0xf4, 0x93, 0x07,
  0xc4, 0xf4, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x82, 0xaa, 0x87, 0x23, 0x22,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xf4, 0xbe, 0x85, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0x85, 0x09, 0xef, 0xf0, 0x9f, 0xb8, 0xfd, 0xb5, 0x01, 0x00,
  0xed, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c,
  0x6c, 0x29, 0x00, 0x00, 0x36, 0xfe, 0xff, 0xff, 0x7a, 0xfd, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0xbe, 0xfd, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0xee, 0xfd, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff, 0x5e, 0xfe, 0xff, 0xff,
  0x5e, 0xfe, 0xff, 0xff, 0x9c, 0xfd, 0xff, 0xff, 0x0d, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x6f, 0x72, 0x6b, 0x20, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x0a,
  0x00, 0x00, 0x00, 0x00, 0x0d, 0x0a, 0x77, 0x61, 0x69, 0x74, 0x20, 0x73,
  0x74, 0x61, 0x74, 0x75, 0x73, 0x20, 0x25, 0x64, 0x0d, 0x0a, 0x00, 0x47,
  0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39, 0x36, 0x64,
  0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e, 0x30, 0x00,
  0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0xc8, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x70, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xb4, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xce, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xfc, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x40, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x5b, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x68, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x42, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x60, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xa2, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x2e, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x60, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x44, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x68, 0x65,
  0x6c, 0x6c, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x72, 0x65, 0x61, 0x64, 0x00, 0x65, 0x78, 0x65, 0x63, 0x76, 0x00, 0x65,
  0x78, 0x69, 0x74, 0x00, 0x77, 0x61, 0x69, 0x74, 0x00, 0x70, 0x75, 0x74,
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
  0x00, 0x00, 0x00, 0x00, 0xda, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc8, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd0, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x40, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x0e, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int shell_elf_len=4224;
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
int gActiveProc=0;
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
void exec_prog(char* hello_elf);
static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item);
static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail);
static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self);
static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self);
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
static void list$1proc$ph$p_finalize(struct list$1proc$ph* self);
int Sys_open();
int Sys_fork();
int Sys_execv();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX295, unsigned long  int anonymous_var_nameX296, unsigned long  int anonymous_var_nameX297, unsigned long  long anonymous_var_nameX298);
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
static inline unsigned long  long r_time(){
unsigned long  long x_7;
memset(&x_7, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_7));
    return x_7;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_13;
memset(&x_13, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_13));
    return x_13;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_14;
memset(&x_14, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_14));
    return x_14;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_15;
    x_15=r_sstatus();
    x_15|=(1L<<1);
    w_sstatus(x_15);
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
unsigned long  long x_16;
    x_16=r_sstatus();
    return (x_16&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_116;
memset(&x_116, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_116));
    return x_116;
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
unsigned long  long x_234;
memset(&x_234, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_234));
    return x_234;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_235;
memset(&sp_val_235, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_235): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_235;
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
void* p_8;
void* __result_obj__3;
    p_8=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__3 = p_8;
    return __result_obj__3;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_9;
void* base_10;
unsigned long  int i_11;
void* pg_12;
void* __result_obj__4;
    bump_9=(unsigned long  long)_end2;
    base_10=((void*)0);
    for(    i_11=0    ;    i_11<npages    ;    i_11++    ){
        pg_12=kalloc_page(bump_9);
        if(        i_11==0        ) {
            base_10=pg_12;
        }
    }
    __result_obj__4 = base_10;
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
int r_17;
memset(&r_17, 0, sizeof(int));
    r_17=(lk->locked&&lk->cpu==mycpu());
    return r_17;
}

void push_off(){
int old_18;
    old_18=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_18;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_19;
    c_19=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_19->noff<1    ) {
        panic("pop_off");
    }
    c_19->noff-=1;
    if(    c_19->noff==0&&c_19->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_20;
p_20 = (void*)0;
    p_20=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_20+4096<=(char*)pa_end    ;    p_20+=4096    ){
        kfree(p_20);
    }
}

void kfree(void* pa){
struct run* r_21;
r_21 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_21=(struct run*)pa;
    acquire(&kmem.lock);
    r_21->next=kmem.freelist;
    kmem.freelist=r_21;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_22;
void* __result_obj__6;
r_22 = (void*)0;
    acquire(&kmem.lock);
    r_22=kmem.freelist;
    if(    r_22    ) {
        kmem.freelist=r_22->next;
    }
    release(&kmem.lock);
    if(    r_22    ) {
        memset((char*)r_22,5,4096);
    }
    __result_obj__6 = (void*)r_22;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_23;
unsigned long  long* pte_24;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    for(    level_23=2    ;    level_23>0    ;    level_23--    ){
        pte_24=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_23))))&511)];
        if(        *pte_24&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_24)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_24=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_25;
unsigned long  long last_26;
unsigned long  long* pte_27;
memset(&a_25, 0, sizeof(unsigned long  long));
memset(&last_26, 0, sizeof(unsigned long  long));
pte_27 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_25=va;
    last_26=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_27=walk(pagetable,a_25,1))==0        ) {
            return -1;
        }
        if(        *pte_27&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_27&1023,perm);
        }
        *pte_27=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_25==last_26        ) {
            break;
        }
        a_25+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_28;
int i_29;
    ptr_28=(unsigned int*)pa;
    for(    i_29=0    ;    i_29<count    ;    i_29++    ){
        if(        i_29%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_28+i_29));
        }
        printf("%p ",ptr_28[i_29]);
        if(        i_29%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_30;
unsigned long  long pte_31;
unsigned long  long pa_32;
unsigned long  long child_va_33;
int j_34;
    for(    i_30=0    ;    i_30<512    ;    i_30++    ){
        pte_31=pagetable[i_30];
        if(        pte_31&(1L<<0)        ) {
            pa_32=(((pte_31)>>10)<<12);
            child_va_33=va|((unsigned long  long)i_30<<(12+9*(2-level)));
            for(            j_34=0            ;            j_34<level            ;            j_34++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_33,pa_32,i_30,level);
            if(            (pte_31&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_31&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_31&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_31&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_31&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_31&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_31&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_32,child_va_33,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_35;
    satp_35=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_35));
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
unsigned long  long addr_36;
int i_37;
unsigned long  long va_38;
unsigned long  long pa_39;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_36=2147483648UL    ;    addr_36<2164260864UL    ;    addr_36+=4096    ){
        mappages(kernel_pagetable,addr_36,4096,addr_36,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_37=0    ;    i_37<8    ;    i_37++    ){
        va_38=268439552UL+i_37*4096UL;
        pa_39=va_38;
        mappages(kernel_pagetable,va_38,4096UL,pa_39,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_40;
void* __result_obj__9;
void* __result_obj__10;
void* __result_obj__11;
unsigned long  long pa_41;
void* __result_obj__12;
    pte_40=walk(pagetable,va,0);
    if(    pte_40==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_40&(1L<<0))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_40&(1L<<4))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    pa_41=(((*pte_40)>>10)<<12);
    __result_obj__12 = (void*)(pa_41+(va&(4096-1)));
    return __result_obj__12;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_42;
unsigned long  long off_43;
char* pa_44;
unsigned long  long n_45;
pa_44 = (void*)0;
    va0_42=(((dstva))&~(4096-1));
    off_43=dstva-va0_42;
    while(    len>0    ) {
        if(        (pa_44=walkaddr(pagetable,va0_42))==0        ) {
            return -1;
        }
        n_45=4096-off_43;
        if(        n_45>len        ) {
            n_45=len;
        }
        memcpy(pa_44+off_43,src,n_45);
        len-=n_45;
        src+=n_45;
        va0_42+=4096;
        off_43=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_46;
unsigned long  long va0_47;
unsigned long  long pa0_48;
memset(&n_46, 0, sizeof(unsigned long  long));
memset(&va0_47, 0, sizeof(unsigned long  long));
memset(&pa0_48, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_47=(((srcva))&~(4096-1));
        pa0_48=(unsigned long  long)walkaddr(pagetable,va0_47);
        if(        pa0_48==0        ) {
            return -1;
        }
        n_46=4096-(srcva-va0_47);
        if(        n_46>len        ) {
            n_46=len;
        }
        memmove(dst,(void*)(pa0_48+(srcva-va0_47)),n_46);
        len-=n_46;
        dst+=n_46;
        srcva=va0_47+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_49;
unsigned long  long va0_50;
unsigned long  long pa0_51;
int got_null_52;
char* dst2_53;
char* p_54;
memset(&n_49, 0, sizeof(unsigned long  long));
memset(&va0_50, 0, sizeof(unsigned long  long));
memset(&pa0_51, 0, sizeof(unsigned long  long));
    got_null_52=0;
    dst2_53=dst;
    while(    got_null_52==0&&max>0    ) {
        va0_50=(((srcva))&~(4096-1));
        pa0_51=(unsigned long  long)walkaddr(pagetable,va0_50);
        if(        pa0_51==0        ) {
            return -1;
        }
        n_49=4096-(srcva-va0_50);
        if(        n_49>max        ) {
            n_49=max;
        }
        p_54=(char*)(pa0_51+(srcva-va0_50));
        while(        n_49>0        ) {
            if(            *p_54==0            ) {
                *dst2_53=0;
                got_null_52=dst2_53-dst;
                break;
            }
            else {
                *dst2_53=*p_54;
            }
            --n_49;
            --max;
            p_54++;
            dst2_53++;
        }
        srcva=va0_50+4096;
    }
    if(    got_null_52    ) {
        dst2_53[got_null_52]=0;
        return got_null_52;
    }
    else {
        return -1;
    }
}

void setting_user_pagetable(struct proc* proc, unsigned long  long* pagetable){
    mappages(pagetable,(unsigned long  long)TRAMPOLINE,4096,(unsigned long  long)TRAMPOLINE,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME,4096,(unsigned long  long)TRAPFRAME,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)TRAPFRAME2,4096,(unsigned long  long)TRAPFRAME2,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4)|(1L<<3));
    mappages(pagetable,(unsigned long  long)COMMON,4096,(unsigned long  long)COMMON,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<3)|(1L<<4));
    mappages(pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    mappages(pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0)|(1L<<4));
    __asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* hello_elf, int fork_flag){
void* __right_value0 = (void*)0;
struct proc* result_55;
unsigned long  long* pagetable_56;
struct elfhdr* eh_57;
struct proghdr* ph_58;
unsigned long  long size_59;
unsigned long  long va_60;
int i_61;
void* pa_62;
void* __right_value1 = (void*)0;
struct proc* parent_63;
unsigned long  long parent_current_70;
unsigned long  long parent_stack_71;
unsigned long  long offset_72;
char* src_73;
char* pa_74;
char* pa_75;
    result_55=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 772, "struct proc*"));
    result_55->program=hello_elf;
    pagetable_56=(unsigned long  long*)kalloc();
    memset(pagetable_56,0,4096);
    setting_user_pagetable(result_55,pagetable_56);
    result_55->pagetable=pagetable_56;
    eh_57=(struct elfhdr*)hello_elf;
    if(    eh_57->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_58=(struct proghdr*)(hello_elf+eh_57->phoff);
    size_59=ph_58->filesz;
    result_55->vaddr=(((ph_58->vaddr))&~(4096-1));
    va_60=0;
    for(    i_61=0    ;    i_61<eh_57->phnum    ;    i_61++,ph_58++    ){
        if(        ph_58->type!=1        ) {
            continue;
        }
        for(        va_60=(((ph_58->vaddr))&~(4096-1))        ;        va_60<ph_58->vaddr+ph_58->memsz        ;        va_60+=4096        ){
            pa_62=kalloc();
            if(            !pa_62            ) {
                panic("kalloc");
            }
            memset(pa_62,0,4096);
            mappages(result_55->pagetable,va_60,4096,(unsigned long  long)pa_62,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_55->pagetable,ph_58->vaddr,hello_elf+ph_58->off,ph_58->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_63=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_70=parent_63->context.sp;
        parent_stack_71=(unsigned long  long)parent_63->stack_top;
        offset_72=parent_current_70-parent_stack_71;
        src_73=walkaddr(parent_63->pagetable,parent_stack_71);
        pa_74=kalloc();
        if(        !pa_74        ) {
            panic("fork sp");
        }
        memmove(pa_74,(void*)src_73,4096);
        mappages(result_55->pagetable,va_60,4096,(unsigned long  long)pa_74,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_55->stack=(char*)va_60+4096;
        result_55->stack_top=(char*)va_60;
        result_55->context.sp=parent_63->context.sp;
    }
    else {
        pa_75=kalloc();
        if(        !pa_75        ) {
            panic("kalloc");
        }
        memset(pa_75,0,4096);
        mappages(result_55->pagetable,va_60,4096,(unsigned long  long)pa_75,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_55->stack=(char*)va_60+4096;
        result_55->stack_top=(char*)va_60;
        result_55->context.sp=va_60+4096;
    }
    result_55->context.mepc=eh_57->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_55));
    come_call_finalizer(proc_finalize, result_55, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_64;
int i_65;
struct proc* __result_obj__13;
struct proc* default_value_66;
struct proc* __result_obj__14;
default_value_66 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_64=self->head;
    i_65=0;
    while(    it_64!=((void*)0)    ) {
        if(        position==i_65        ) {
            __result_obj__13 = (struct proc*)come_increment_ref_count(it_64->item);
            come_call_finalizer(proc_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
        it_64=it_64->next;
        i_65++;
    }
    memset(&default_value_66,0,sizeof(struct proc*));
    __result_obj__14 = (struct proc*)come_increment_ref_count(default_value_66);
    come_call_finalizer(proc_finalize, default_value_66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static void proc_finalize(struct proc* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_67;
int i_68;
struct proc* __result_obj__15;
struct proc* default_value_69;
struct proc* __result_obj__16;
default_value_69 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_67=self->head;
    i_68=0;
    while(    it_67!=((void*)0)    ) {
        if(        position==i_68        ) {
            __result_obj__15 = (struct proc*)come_increment_ref_count(it_67->item);
            come_call_finalizer(proc_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__15;
        }
        it_67=it_67->next;
        i_68++;
    }
    memset(&default_value_69,0,sizeof(struct proc*));
    __result_obj__16 = (struct proc*)come_increment_ref_count(default_value_69);
    come_call_finalizer(proc_finalize, default_value_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value2 = (void*)0;
struct list_item$1proc$ph* litem_76;
struct proc* __dec_obj1;
void* __right_value3 = (void*)0;
struct list_item$1proc$ph* litem_77;
struct proc* __dec_obj2;
void* __right_value4 = (void*)0;
struct list_item$1proc$ph* litem_78;
struct proc* __dec_obj3;
struct list$1proc$ph* __result_obj__17;
    if(    self->len==0    ) {
        litem_76=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value2=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_76->prev=((void*)0);
        litem_76->next=((void*)0);
        __dec_obj1=litem_76->item,
        litem_76->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_76;
        self->head=litem_76;
    }
    else if(    self->len==1    ) {
        litem_77=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value3=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_77->prev=self->head;
        litem_77->next=((void*)0);
        __dec_obj2=litem_77->item,
        litem_77->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_77;
        self->head->next=litem_77;
    }
    else {
        litem_78=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value4=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_78->prev=self->tail;
        litem_78->next=((void*)0);
        __dec_obj3=litem_78->item,
        litem_78->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_78;
        self->tail=litem_78;
    }
    self->len++;
    __result_obj__17 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__17;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_79;
unsigned long  long* __result_obj__18;
unsigned long  long* __result_obj__19;
pagetable_79 = (void*)0;
    pagetable_79=(unsigned long  long*)kalloc();
    if(    pagetable_79==0    ) {
        __result_obj__18 = (unsigned long  long*)0;
        return __result_obj__18;
    }
    memset(pagetable_79,0,4096);
    __result_obj__19 = pagetable_79;
    return __result_obj__19;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__80;
unsigned long  long* __result_obj__20;
unsigned long  long addr_81;
unsigned long  long* pte_82;
unsigned long  long pa_83;
unsigned int flags_84;
char* mem_85;
unsigned long  long* __result_obj__21;
new__80 = (void*)0;
    new__80=uvmcreate();
    if(    new__80==0    ) {
        __result_obj__20 = (unsigned long  long*)0;
        return __result_obj__20;
    }
    for(    addr_81=0    ;    addr_81<sz    ;    addr_81+=4096    ){
        pte_82=walk(old,addr_81,0);
        if(        !pte_82||!(*pte_82&(1L<<0))        ) {
            continue;
        }
        pa_83=(((*pte_82)>>10)<<12);
        flags_84=((*pte_82)&1023);
        mem_85=kalloc();
        if(        mem_85==0        ) {
            panic("coypuvm");
        }
        memmove(mem_85,(char*)pa_83,4096);
        if(        mappages(new__80,addr_81,4096,((((unsigned long  long)mem_85)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_85);
            panic("copyuvm");
        }
    }
    __result_obj__21 = new__80;
    return __result_obj__21;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_86;
unsigned long  long pte_87;
unsigned long  long pa_88;
unsigned long  long* child_89;
    for(    i_86=0    ;    i_86<512    ;    i_86++    ){
        pte_87=pagetable[i_86];
        if(        !(pte_87&(1L<<0))        ) {
            continue;
        }
        pa_88=(((pte_87)>>10)<<12);
        if(        pte_87&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_88);
            }
        }
        else if(        level>0        ) {
            child_89=(unsigned long  long*)pa_88;
            free_pagetable(child_89,level-1);
            kfree(child_89);
        }
    }
}

void exec_prog(char* hello_elf){
void* __right_value5 = (void*)0;
struct proc* p_90;
void* __right_value6 = (void*)0;
struct proc* result_91;
unsigned long  long* pagetable_108;
struct elfhdr* eh_109;
struct proghdr* ph_110;
unsigned long  long size_111;
unsigned long  long va_112;
int i_113;
void* pa_114;
char* pa_115;
    p_90=((struct proc*)(__right_value5=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    free_proc(p_90);
    result_91=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 934, "struct proc*"));
    result_91->context=p_90->context;
    list$1proc$ph_remove_by_pointer(gProc,p_90);
    pagetable_108=(unsigned long  long*)kalloc();
    memset(pagetable_108,0,4096);
    setting_user_pagetable(result_91,pagetable_108);
    result_91->pagetable=pagetable_108;
    eh_109=(struct elfhdr*)hello_elf;
    if(    eh_109->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_110=(struct proghdr*)(hello_elf+eh_109->phoff);
    size_111=ph_110->filesz;
    result_91->vaddr=(((ph_110->vaddr))&~(4096-1));
    va_112=0;
    for(    i_113=0    ;    i_113<eh_109->phnum    ;    i_113++,ph_110++    ){
        if(        ph_110->type!=1        ) {
            continue;
        }
        for(        va_112=(((ph_110->vaddr))&~(4096-1))        ;        va_112<ph_110->vaddr+ph_110->memsz        ;        va_112+=4096        ){
            pa_114=kalloc();
            if(            !pa_114            ) {
                panic("kalloc");
            }
            memset(pa_114,0,4096);
            mappages(result_91->pagetable,va_112,4096,(unsigned long  long)pa_114,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_91->pagetable,ph_110->vaddr,hello_elf+ph_110->off,ph_110->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_115=kalloc();
    if(    !pa_115    ) {
        panic("kalloc");
    }
    memset(pa_115,0,4096);
    mappages(result_91->pagetable,va_112,4096,(unsigned long  long)pa_115,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_91->stack=(char*)va_112+4096;
    result_91->stack_top=(char*)va_112;
    result_91->context.sp=va_112+4096;
    result_91->context.mepc=eh_109->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_91));
    come_call_finalizer(proc_finalize, result_91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_92;
struct list_item$1proc$ph* it_93;
struct list$1proc$ph* __result_obj__25;
    it2_92=0;
    it_93=self->head;
    while(    it_93!=((void*)0)    ) {
        if(        it_93->item==item        ) {
            list$1proc$ph_delete(self,it2_92,it2_92+1);
            break;
        }
        it2_92++;
        it_93=it_93->next;
    }
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_94;
struct list$1proc$ph* __result_obj__22;
struct list_item$1proc$ph* it_97;
int i_98;
struct list_item$1proc$ph* prev_it_99;
struct list_item$1proc$ph* it_100;
int i_101;
struct list_item$1proc$ph* prev_it_102;
struct list_item$1proc$ph* it_103;
struct list_item$1proc$ph* head_prev_it_104;
struct list_item$1proc$ph* tail_it_105;
int i_106;
struct list_item$1proc$ph* prev_it_107;
struct list$1proc$ph* __result_obj__24;
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
        __result_obj__22 = self;
        return __result_obj__22;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_97=self->head;
        i_98=0;
        while(        it_97!=((void*)0)        ) {
            if(            i_98<tail            ) {
                prev_it_99=it_97;
                it_97=it_97->next;
                i_98++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_95;
struct list_item$1proc$ph* prev_it_96;
struct list$1proc$ph* __result_obj__23;
    it_95=self->head;
    while(    it_95!=((void*)0)    ) {
        prev_it_96=it_95;
        it_95=it_95->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__23 = self;
    return __result_obj__23;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
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
unsigned long  int x_117;
memset(&x_117, 0, sizeof(unsigned long  int));
    x_117=r_sie();
    x_117|=(1UL<<5);
    w_sie(x_117);
    x_117=r_sstatus();
    x_117|=(1UL<<1);
    w_sstatus(x_117);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_118;
    next_118=r_time()+10000UL;
    w_stimecmp(next_118);
}

void timer_handler(){
void* __right_value7 = (void*)0;
struct proc* p_119;
struct context* tf_120;
void* __right_value8 = (void*)0;
struct proc* old_121;
void* __right_value9 = (void*)0;
struct proc* new__122;
unsigned long  long a0_123;
    disable_timer_interrupts();
    p_119=((struct proc*)(__right_value7=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value7, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_120=(struct context*)TRAPFRAME;
    p_119->context=*tf_120;
    timer_reset();
    old_121=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__122=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__122->zombie    ) {
        gActiveProc--;
    }
    if(    new__122!=old_121&&new__122->zombie==0    ) {
        user_sp=new__122->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__122->pagetable)>>12));
        a0_123=new__122->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_123));
        swtch(&new__122->context);
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
struct context* trapframe_124;
unsigned long  int arg0_125;
unsigned long  int arg1_126;
unsigned long  int arg2_127;
unsigned long  int arg3_128;
unsigned long  int arg4_129;
unsigned long  int arg5_130;
unsigned long  int arg6_131;
unsigned long  int arg_syscall_no_132;
unsigned long  long user_va_134;
int len_135;
void* __right_value10 = (void*)0;
struct proc* p_136;
int ret_137;
int i_138;
    trapframe_124=(struct context*)TRAPFRAME;
    arg0_125=trapframe_124->a0;
    arg1_126=trapframe_124->a1;
    arg2_127=trapframe_124->a2;
    arg3_128=trapframe_124->a3;
    arg4_129=trapframe_124->a4;
    arg5_130=trapframe_124->a5;
    arg6_131=trapframe_124->a6;
    arg_syscall_no_132=trapframe_124->a7;
    char kernel_buf_133[256];
    memset(&kernel_buf_133, 0, sizeof(char)    *(256)    );
    user_va_134=arg1_126;
    len_135=arg2_127;
    memset(kernel_buf_133,0,256);
    p_136=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_137=copyin(p_136->pagetable,kernel_buf_133,user_va_134,len_135);
    if(    ret_137<0    ) {
        panic("copyinstr1");
    }
    for(    i_138=0    ;    i_138<len_135    ;    i_138++    ){
        putchar(kernel_buf_133[i_138]);
    }
    return 0;
}

int Sys_exit(){
struct context* trapframe_139;
unsigned long  int arg0_140;
unsigned long  int arg1_141;
unsigned long  int arg2_142;
unsigned long  int arg3_143;
unsigned long  int arg4_144;
unsigned long  int arg5_145;
unsigned long  int arg6_146;
unsigned long  int arg_syscall_no_147;
void* __right_value11 = (void*)0;
struct proc* p_148;
    trapframe_139=(struct context*)TRAPFRAME;
    arg0_140=trapframe_139->a0;
    arg1_141=trapframe_139->a1;
    arg2_142=trapframe_139->a2;
    arg3_143=trapframe_139->a3;
    arg4_144=trapframe_139->a4;
    arg5_145=trapframe_139->a5;
    arg6_146=trapframe_139->a6;
    arg_syscall_no_147=trapframe_139->a7;
    p_148=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_148->xstatus=arg0_140;
    p_148->zombie=1;
    timer_handler();
    return 0;
}

int Sys_wait(){
struct context* trapframe_149;
unsigned long  int arg0_150;
unsigned long  int arg1_151;
unsigned long  int arg2_152;
unsigned long  int arg3_153;
unsigned long  int arg4_154;
unsigned long  int arg5_155;
unsigned long  int arg6_156;
unsigned long  int arg_syscall_no_157;
int* status_va_158;
void* __right_value12 = (void*)0;
struct proc* p_159;
int exit_status_160;
int child_pid_161;
int n_162;
struct list$1proc$ph* o2_saved_163;
struct proc* it_166;
    trapframe_149=(struct context*)TRAPFRAME;
    arg0_150=trapframe_149->a0;
    arg1_151=trapframe_149->a1;
    arg2_152=trapframe_149->a2;
    arg3_153=trapframe_149->a3;
    arg4_154=trapframe_149->a4;
    arg5_155=trapframe_149->a5;
    arg6_156=trapframe_149->a6;
    arg_syscall_no_157=trapframe_149->a7;
    status_va_158=(int*)arg0_150;
    p_159=((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_160=0;
    child_pid_161=-1;
    while(    child_pid_161==-1    ) {
        timer_handler();
        n_162=0;
        for(        o2_saved_163=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_166=list$1proc$ph_begin((o2_saved_163))        ;        !list$1proc$ph_end((o2_saved_163))        ;        it_166=list$1proc$ph_next((o2_saved_163))        ){
            if(            it_166->zombie            ) {
                free_proc(it_166);
                exit_status_160=it_166->xstatus;
                child_pid_161=n_162;
                list$1proc$ph_remove_by_pointer(gProc,it_166);
                break;
            }
            n_162++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_159->pagetable,(unsigned long  long)status_va_158,(void*)&exit_status_160,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_161;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_164;
struct proc* __result_obj__26;
struct proc* __result_obj__27;
struct proc* result_165;
struct proc* __result_obj__28;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_164,0,sizeof(struct proc*));
        __result_obj__26 = result_164;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_165,0,sizeof(struct proc*));
    __result_obj__28 = result_165;
    return __result_obj__28;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_167;
struct proc* __result_obj__29;
struct proc* __result_obj__30;
struct proc* result_168;
struct proc* __result_obj__31;
result_167 = (void*)0;
result_168 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_167,0,sizeof(struct proc*));
        __result_obj__29 = result_167;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_168,0,sizeof(struct proc*));
    __result_obj__31 = result_168;
    return __result_obj__31;
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
void* __right_value13 = (void*)0;
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
    p_182=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value14 = (void*)0;
struct proc* p_193;
int fork_flag_194;
void* __right_value15 = (void*)0;
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
    p_193=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_193->program,fork_flag_194=1);
    child_195=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value16 = (void*)0;
struct proc* p_210;
char* path_211;
int fd_213;
int ret_214;
void* __right_value17 = (void*)0;
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
    p_210=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
    result_215=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_198->mepc=result_215->context.mepc+4;
    trapframe_198->sp=result_215->context.sp;
    return 0;
}

unsigned long  int syscall_handler(){
struct context* trapframe_216;
unsigned long  int arg0_217;
unsigned long  int arg1_218;
unsigned long  int arg2_219;
unsigned long  int arg3_220;
unsigned long  int arg4_221;
unsigned long  int arg5_222;
unsigned long  int arg6_223;
unsigned long  int arg_syscall_no_224;
unsigned long  long result_225;
int fd_226;
unsigned long  long destva_227;
unsigned long  int n_228;
int ret_230;
void* __right_value18 = (void*)0;
struct proc* p_231;
int fd_232;
int ret_233;
memset(&ret_230, 0, sizeof(int));
    disable_timer_interrupts();
    trapframe_216=(struct context*)TRAPFRAME;
    arg0_217=trapframe_216->a0;
    arg1_218=trapframe_216->a1;
    arg2_219=trapframe_216->a2;
    arg3_220=trapframe_216->a3;
    arg4_221=trapframe_216->a4;
    arg5_222=trapframe_216->a5;
    arg6_223=trapframe_216->a6;
    arg_syscall_no_224=trapframe_216->a7;
    result_225=0;
    switch (    arg_syscall_no_224) {
        case 64:
        {
            result_225=Sys_write();
        }
        break;
        case 70:
        {
            result_225=Sys_exit();
        }
        break;
        case 71:
        {
            result_225=Sys_wait();
        }
        break;
        case 66:
        {
            result_225=Sys_open();
        }
        break;
        case 65:
        {
            fd_226=arg0_217;
            destva_227=arg1_218;
            n_228=arg2_219;
            char kernel_buf_229[256];
            memset(&kernel_buf_229, 0, sizeof(char)            *(256)            );
            if(            fd_226==0            ) {
                ret_230=uart_readn(kernel_buf_229,n_228);
            }
            else {
                ret_230=fs_read(fd_226,kernel_buf_229,n_228);
                if(                ret_230<0                ) {
                    trapframe_216->a0=ret_230;
                    return 0;
                }
                kernel_buf_229[ret_230]=0;
            }
            p_231=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
            come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            copyout(p_231->pagetable,destva_227,kernel_buf_229,ret_230)<0            ) {
                panic("read: copyout failed");
            }
            result_225=ret_230;
        }
        break;
        case 67:
        {
            fd_232=arg0_217;
            ret_233=fs_close(fd_232);
            result_225=ret_233;
        }
        break;
        case 68:
        {
            result_225=Sys_fork();
        }
        break;
        case 69:
        {
            result_225=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_216->a0=result_225;
    return result_225;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value19 = (void*)0;
void* __right_value20 = (void*)0;
struct list$1proc$ph* __dec_obj4;
    __dec_obj4=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2272, "struct list$1proc$ph*"))));
    come_call_finalizer(list$1proc$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_initialize(struct list$1proc$ph* self){
struct list$1proc$ph* __result_obj__32;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__32 = (struct list$1proc$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1proc$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1proc$ph$p_finalize, __result_obj__32, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__32;
}

static void list$1proc$ph_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_236;
struct list_item$1proc$ph* prev_it_237;
    it_236=self->head;
    while(    it_236!=((void*)0)    ) {
        prev_it_237=it_236;
        it_236=it_236->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_238;
void* __right_value21 = (void*)0;
struct proc* p_239;
unsigned long  int usersp_240;
unsigned long  long usersatp_241;
unsigned long  int entry_242;
memset(&fork_flag_238, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_238=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_239=((struct proc*)(__right_value21=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value21, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_240=(unsigned long  long)(p_239->stack);
    usersatp_241=((8L<<60)|(((unsigned long  long)p_239->pagetable)>>12));
    entry_242=p_239->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_239;
    kernel_sp=read_s_sp();
    enter_user(entry_242,usersp_240,usersatp_241,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__33;
struct mem_block* current_243;
struct mem_block* prev_244;
void* __result_obj__34;
struct mem_block* new_mem_245;
void* __result_obj__35;
void* __result_obj__36;
    if(    size==0    ) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_243=free_list;
    prev_244=((void*)0);
    while(    current_243!=((void*)0)    ) {
        if(        current_243->size>=size        ) {
            if(            prev_244==((void*)0)            ) {
                free_list=current_243->next;
            }
            else {
                prev_244->next=current_243->next;
            }
            __result_obj__34 = (void*)(current_243+1);
            return __result_obj__34;
        }
        prev_244=current_243;
        current_243=current_243->next;
    }
    new_mem_245=(struct mem_block*)sbrk(size);
    if(    new_mem_245==(void*)-1    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    new_mem_245->size=size;
    new_mem_245->next=((void*)0);
    __result_obj__36 = (void*)(new_mem_245+1);
    return __result_obj__36;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_246;
void* __result_obj__37;
void* ptr_247;
void* __result_obj__38;
    total_size_246=nmemb*size;
    if(    total_size_246==0    ) {
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    ptr_247=malloc(total_size_246);
    if(    ptr_247!=((void*)0)    ) {
        memset(ptr_247,0,total_size_246);
    }
    __result_obj__38 = ptr_247;
    return __result_obj__38;
}

void free(void* ptr){
struct mem_block* block_248;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_248=(struct mem_block*)ptr-1;
    block_248->next=free_list;
    free_list=block_248;
}

char* strdup(const char* s){
char* s2_249;
unsigned long  int len_250;
char* p_251;
char* __result_obj__39;
    s2_249=s;
    len_250=strlen(s2_249)+1;
    p_251=malloc(len_250);
    if(    p_251    ) {
        memcpy(p_251,s2_249,len_250);
    }
    __result_obj__39 = p_251;
    return __result_obj__39;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__40;
char* __result_obj__41;
char* __result_obj__42;
    if(    !*needle    ) {
        __result_obj__40 = (char*)haystack;
        return __result_obj__40;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_252=haystack;
        const char* n_253=needle;
        while(        *h_252&&*n_253&&(*h_252==*n_253)        ) {
            h_252++;
            n_253++;
        }
        if(        !*n_253        ) {
            __result_obj__41 = (char*)haystack;
            return __result_obj__41;
        }
    }
    __result_obj__42 = ((void*)0);
    return __result_obj__42;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_254;
int i_255;
void* __result_obj__43;
    cdst_254=(char*)dst;
    for(    i_255=0    ;    i_255<n    ;    i_255++    ){
        cdst_254[i_255]=c;
    }
    __result_obj__43 = dst;
    return __result_obj__43;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_256;
const unsigned char* s2_257;
memset(&s1_256, 0, sizeof(const unsigned char*));
memset(&s2_257, 0, sizeof(const unsigned char*));
    s1_256=v1;
    s2_257=v2;
    while(    n-->0    ) {
        if(        *s1_256!=*s2_257        ) {
            return *s1_256-*s2_257;
        }
        s1_256++,s2_257++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_258;
char* d_259;
void* __result_obj__44;
void* __result_obj__45;
s_258 = (void*)0;
d_259 = (void*)0;
    if(    n==0    ) {
        __result_obj__44 = dst;
        return __result_obj__44;
    }
    s_258=src;
    d_259=dst;
    if(    s_258<d_259&&s_258+n>d_259    ) {
        s_258+=n;
        d_259+=n;
        while(        n-->0        ) {
            *--d_259=*--s_258;
        }
    }
    else {
        while(        n-->0        ) {
            *d_259++=*s_258++;
        }
    }
    __result_obj__45 = dst;
    return __result_obj__45;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__46;
    __result_obj__46 = memmove(dst,src,n);
    return __result_obj__46;
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
char* os_260;
char* __result_obj__47;
os_260 = (void*)0;
    os_260=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__47 = os_260;
    return __result_obj__47;
}

int strlen(const char* s){
int n_261;
memset(&n_261, 0, sizeof(int));
    for(    n_261=0    ;    s[n_261]    ;    n_261++    ){
        ;
    }
    return n_261;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_262;
char* __result_obj__48;
    d_262=dest;
    while(    *d_262    ) {
        d_262++;
    }
    while(    n--&&*src    ) {
        *d_262++=*src++;
    }
    *d_262=0;
    __result_obj__48 = dest;
    return __result_obj__48;
}

char* strtok(char* s, const char* delim){
static char* next_263;
char* start_264;
char* p_265;
char* __result_obj__49;
int is_delim_267;
char* __result_obj__50;
int is_delim_269;
char* __result_obj__51;
next_263 = (void*)0;
start_264 = (void*)0;
p_265 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_263=s;
    }
    if(    next_263==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    start_264=next_263;
    while(    *start_264!=0    ) {
        const char* d_266=delim;
        is_delim_267=0;
        while(        *d_266!=0        ) {
            if(            *start_264==*d_266            ) {
                is_delim_267=1;
                break;
            }
            d_266++;
        }
        if(        !is_delim_267        ) {
            break;
        }
        start_264++;
    }
    if(    *start_264==0    ) {
        next_263=((void*)0);
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    p_265=start_264;
    while(    *p_265!=0    ) {
        const char* d_268=delim;
        is_delim_269=0;
        while(        *d_268!=0        ) {
            if(            *p_265==*d_268            ) {
                is_delim_269=1;
                break;
            }
            d_268++;
        }
        if(        is_delim_269        ) {
            break;
        }
        p_265++;
    }
    if(    *p_265==0    ) {
        next_263=((void*)0);
    }
    else {
        *p_265=0;
        next_263=p_265+1;
    }
    __result_obj__51 = start_264;
    return __result_obj__51;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_270;
int i_272;
int negative_273;
char* __result_obj__52;
int digit_274;
char* __result_obj__53;
    p_270=buf;
    char tmp_271[32];
    memset(&tmp_271, 0, sizeof(char)    *(32)    );
    i_272=0;
    negative_273=0;
    if(    base<2||base>16    ) {
        *p_270=0;
        __result_obj__52 = p_270;
        return __result_obj__52;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_273=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_274=val_%base;
        tmp_271[i_272++]=(((digit_274<10))?(48+digit_274):(97+digit_274-10));
        val_/=base;
    } while(    val_    );
    if(    negative_273    ) {
        *p_270++=45;
    }
    while(    i_272--    ) {
        *p_270++=tmp_271[i_272];
    }
    *p_270=0;
    __result_obj__53 = buf;
    return __result_obj__53;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_276;
const char* s_277;
unsigned long  int remaining_279;
s_277 = (void*)0;
    char out2_275[512];
    memset(&out2_275, 0, sizeof(char)    *(512)    );
    p_276=out2_275;
    char buf_278[32];
    memset(&buf_278, 0, sizeof(char)    *(32)    );
    remaining_279=sizeof(out2_275);
    for(    ;    *fmt&&remaining_279>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_276++=*fmt;
            remaining_279--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_278,__builtin_va_arg(ap,int),10,1);
            s_277=buf_278;
            break;
            case 117:
            itoa(buf_278,__builtin_va_arg(ap,unsigned int),10,0);
            s_277=buf_278;
            break;
            case 120:
            itoa(buf_278,__builtin_va_arg(ap,unsigned int),16,0);
            s_277=buf_278;
            break;
            case 115:
            s_277=__builtin_va_arg(ap,const char*);
            if(            !s_277            ) {
                s_277="(null)";
            }
            break;
            case 99:
            buf_278[0]=(char)__builtin_va_arg(ap,int);
            buf_278[1]=0;
            s_277=buf_278;
            break;
            case 112:
            strncpy(buf_278,"0x",32);
            itoa(buf_278+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_277=buf_278;
            break;
            case 37:
            buf_278[0]=37;
            buf_278[1]=0;
            s_277=buf_278;
            break;
            default:
            buf_278[0]=37;
            buf_278[1]=*fmt;
            buf_278[2]=0;
            s_277=buf_278;
            break;
        }
        while(        *s_277&&remaining_279>1        ) {
            *p_276++=*s_277++;
            remaining_279--;
        }
    }
    *p_276=0;
    *out=strdup(out2_275);
    return p_276-out2_275;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_280;
char* p_281;
const char* s_282;
unsigned long  int remaining_284;
memset(&ap_280, 0, sizeof(va_list));
s_282 = (void*)0;
    __builtin_va_start(ap_280,fmt);
    p_281=out;
    char buf_283[32];
    memset(&buf_283, 0, sizeof(char)    *(32)    );
    remaining_284=out_size;
    if(    remaining_284==0    ) {
        __builtin_va_end(ap_280);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_284>1            ) {
                *p_281++=*fmt;
                remaining_284--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_282=__builtin_va_arg(ap_280,const char*);
            while(            *s_282&&remaining_284>1            ) {
                *p_281++=*s_282++;
                remaining_284--;
            }
            break;
            case 100:
            itoa(buf_283,__builtin_va_arg(ap_280,int),10,0);
            s_282=buf_283;
            while(            *s_282&&remaining_284>1            ) {
                *p_281++=*s_282++;
                remaining_284--;
            }
            break;
            case 120:
            itoa(buf_283,(unsigned int)__builtin_va_arg(ap_280,int),16,1);
            s_282=buf_283;
            while(            *s_282&&remaining_284>1            ) {
                *p_281++=*s_282++;
                remaining_284--;
            }
            break;
            case 99:
            if(            remaining_284>1            ) {
                *p_281++=(char)__builtin_va_arg(ap_280,int);
                remaining_284--;
            }
            break;
            case 112:
            s_282="0x";
            while(            *s_282&&remaining_284>1            ) {
                *p_281++=*s_282++;
                remaining_284--;
            }
            itoa(buf_283,(long)__builtin_va_arg(ap_280,void*),16,1);
            s_282=buf_283;
            while(            *s_282&&remaining_284>1            ) {
                *p_281++=*s_282++;
                remaining_284--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_283,__builtin_va_arg(ap_280,long),10,1);
                s_282=buf_283;
                while(                *s_282&&remaining_284>1                ) {
                    *p_281++=*s_282++;
                    remaining_284--;
                }
            }
            break;
            default:
            if(            remaining_284>1            ) {
                *p_281++=37;
                remaining_284--;
                if(                remaining_284>1                ) {
                    *p_281++=*fmt;
                    remaining_284--;
                }
            }
            break;
        }
    }
    *p_281=0;
    __builtin_va_end(ap_280);
    return p_281-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_285;
char* p_286;
const char* s_287;
unsigned long  int remaining_289;
memset(&ap_285, 0, sizeof(va_list));
s_287 = (void*)0;
    __builtin_va_start(ap_285,fmt);
    p_286=out;
    char buf_288[32];
    memset(&buf_288, 0, sizeof(char)    *(32)    );
    remaining_289=out_size;
    if(    remaining_289==0    ) {
        __builtin_va_end(ap_285);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_289>1            ) {
                *p_286++=*fmt;
                remaining_289--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_287=__builtin_va_arg(ap_285,const char*);
            while(            *s_287&&remaining_289>1            ) {
                *p_286++=*s_287++;
                remaining_289--;
            }
            break;
            case 100:
            itoa(buf_288,__builtin_va_arg(ap_285,int),10,0);
            s_287=buf_288;
            while(            *s_287&&remaining_289>1            ) {
                *p_286++=*s_287++;
                remaining_289--;
            }
            break;
            case 120:
            itoa(buf_288,(unsigned int)__builtin_va_arg(ap_285,int),16,1);
            s_287=buf_288;
            while(            *s_287&&remaining_289>1            ) {
                *p_286++=*s_287++;
                remaining_289--;
            }
            break;
            case 99:
            if(            remaining_289>1            ) {
                *p_286++=(char)__builtin_va_arg(ap_285,int);
                remaining_289--;
            }
            break;
            case 112:
            s_287="0x";
            while(            *s_287&&remaining_289>1            ) {
                *p_286++=*s_287++;
                remaining_289--;
            }
            itoa(buf_288,(long)__builtin_va_arg(ap_285,void*),16,1);
            s_287=buf_288;
            while(            *s_287&&remaining_289>1            ) {
                *p_286++=*s_287++;
                remaining_289--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_288,__builtin_va_arg(ap_285,long),10,1);
                s_287=buf_288;
                while(                *s_287&&remaining_289>1                ) {
                    *p_286++=*s_287++;
                    remaining_289--;
                }
            }
            break;
            default:
            if(            remaining_289>1            ) {
                *p_286++=37;
                remaining_289--;
                if(                remaining_289>1                ) {
                    *p_286++=*fmt;
                    remaining_289--;
                }
            }
            break;
        }
    }
    *p_286=0;
    __builtin_va_end(ap_285);
    return p_286-out;
}

void printint(int val_, int base, int sign){
int i_291;
int negative_292;
unsigned int uval_293;
int digit_294;
memset(&uval_293, 0, sizeof(unsigned int));
    char buf_290[33];
    memset(&buf_290, 0, sizeof(char)    *(33)    );
    i_291=0;
    negative_292=0;
    if(    sign&&val_<0    ) {
        negative_292=1;
        uval_293=-val_;
    }
    else {
        uval_293=(unsigned int)val_;
    }
    if(    uval_293==0    ) {
        putchar(48);
        return;
    }
    while(    uval_293>0    ) {
        digit_294=uval_293%base;
        buf_290[i_291++]=((digit_294<10)?(48+digit_294):(97+(digit_294-10)));
        uval_293/=base;
    }
    if(    negative_292    ) {
        putchar(45);
    }
    while(    --i_291>=0    ) {
        putchar(buf_290[i_291]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_296;
int negative_297;
int digit_298;
    char buf_295[65];
    memset(&buf_295, 0, sizeof(char)    *(65)    );
    i_296=0;
    negative_297=0;
    if(    sign&&(long)val_<0    ) {
        negative_297=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_298=val_%base;
        buf_295[i_296++]=((digit_298<10)?(48+digit_298):(97+(digit_298-10)));
        val_/=base;
    }
    if(    negative_297    ) {
        putchar(45);
    }
    while(    --i_296>=0    ) {
        putchar(buf_295[i_296]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_300;
int negative_301;
int digit_302;
    char buf_299[65];
    memset(&buf_299, 0, sizeof(char)    *(65)    );
    i_300=0;
    negative_301=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_301=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_302=val_%base;
        buf_299[i_300++]=((digit_302<10)?(48+digit_302):(97+(digit_302-10)));
        val_/=base;
    }
    if(    negative_301    ) {
        putchar(45);
    }
    while(    --i_300>=0    ) {
        putchar(buf_299[i_300]);
    }
}

int printf(const char* fmt, ...){
va_list ap_303;
const char* p_304;
int lcount_305;
unsigned long  int val__306;
unsigned long  long val__307;
long val__308;
long long val__309;
int i_310;
int val__311;
unsigned int val__312;
unsigned long  int val__313;
char c_315;
memset(&ap_303, 0, sizeof(va_list));
p_304 = (void*)0;
    __builtin_va_start(ap_303,fmt);
    for(    p_304=fmt    ;    *p_304    ;    p_304++    ){
        if(        *p_304!=37        ) {
            putchar(*p_304);
            continue;
        }
        p_304++;
        if(        *p_304==108        ) {
            lcount_305=1;
            if(            *(p_304+1)==108            ) {
                lcount_305=2;
                p_304++;
            }
            p_304++;
            switch (            *p_304) {
                case 120:
                {
                    if(                    lcount_305==1                    ) {
                        val__306=__builtin_va_arg(ap_303,unsigned long  int);
                        printlong(val__306,16,0);
                    }
                    else {
                        val__307=__builtin_va_arg(ap_303,unsigned long  long);
                        printlonglong(val__307,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_305==1                    ) {
                        val__308=__builtin_va_arg(ap_303,long);
                        printlong(val__308,10,1);
                    }
                    else {
                        val__309=__builtin_va_arg(ap_303,long  long);
                        printlonglong(val__309,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_310=0                    ;                    i_310<lcount_305                    ;                    i_310++                    ){
                        putchar(108);
                    }
                    putchar(*p_304);
                    break;
                }
            }
        }
        else {
            switch (            *p_304) {
                case 100:
                {
                    val__311=__builtin_va_arg(ap_303,int);
                    printint(val__311,10,1);
                    break;
                }
                case 120:
                {
                    val__312=__builtin_va_arg(ap_303,unsigned int);
                    printint(val__312,16,0);
                    break;
                }
                case 112:
                {
                    val__313=(unsigned long  int)__builtin_va_arg(ap_303,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__313,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_314=__builtin_va_arg(ap_303,const char*);
                    if(                    !s_314                    ) {
                        s_314="(null)";
                    }
                    while(                    *s_314                    ) {
                        putchar(*s_314++);
                    }
                    break;
                }
                case 99:
                {
                    c_315=(char)__builtin_va_arg(ap_303,int);
                    putchar(c_315);
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
                    putchar(*p_304);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_303);
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
void* __right_value22 = (void*)0;
void* __right_value23 = (void*)0;
struct buffer* buf_316;
int i_317;
void* __right_value24 = (void*)0;
    buf_316=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_316,"%s %d\n",sname,sline);
    for(    i_317=gNumComeStackFrame-2    ;    i_317>=0    ;    i_317--    ){
        buffer_append_format(buf_316,"%s %d #%d\n",gComeStackFrameSName[i_317],gComeStackFrameSLine[i_317],gComeStackFrameID[i_317]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value24=buffer_to_string(buf_316))));
    (__right_value24 = come_decrement_ref_count(__right_value24, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_316, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_318;
    for(    i_318=gNumComeStackFrame-1    ;    i_318>=0    ;    i_318--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_318],gComeStackFrameSLine[i_318],gComeStackFrameID[i_318]);
    }
}

char* come_get_stackframe(){
void* __right_value25 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value25=__builtin_string(gComeStackFrameBuffer))));
    (__right_value25 = come_decrement_ref_count(__right_value25, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__54 = come_decrement_ref_count(__result_obj__54, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__54;
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
int i_319;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_319=0    ;    i_319<gHeapPages.mSizePages    ;    i_319++    ){
        gHeapPages.mPages[i_319]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_320;
int n_321;
_Bool flag_322;
int i_323;
struct sMemHeaderTiny* it_324;
int n_325;
int i_326;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_320=gAllocMem;
        n_321=0;
        while(        it_320        ) {
            n_321++;
            flag_322=(_Bool)0;
            printf("#%d ",n_321);
            if(            it_320->class_name            ) {
                printf("%p (%s): ",(char*)it_320+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_320->class_name);
            }
            for(            i_323=0            ;            i_323<16            ;            i_323++            ){
                if(                it_320->sname[i_323]                ) {
                    printf("%s %d #%d, ",it_320->sname[i_323],it_320->sline[i_323],it_320->id[i_323]);
                    flag_322=(_Bool)1;
                }
            }
            if(            flag_322            ) {
                puts("");
            }
            it_320=it_320->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_321,gNumAlloc,gNumFree);
    }
    else {
        it_324=(struct sMemHeaderTiny*)gAllocMem;
        n_325=0;
        while(        it_324        ) {
            n_325++;
            if(            it_324->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_325,(char*)it_324+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_324->class_name,it_324->sname,it_324->sline);
            }
            it_324=it_324->next;
        }
        if(        n_325>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_325,gNumAlloc,gNumFree);
        }
    }
    for(    i_326=0    ;    i_326<gHeapPages.mSizePages    ;    i_326++    ){
        free(gHeapPages.mPages[i_326]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_327;
void* __result_obj__55;
    result_327=((void*)0);
    size=(size+7&~7);
    result_327=calloc(1,size);
    __result_obj__55 = result_327;
    return __result_obj__55;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_328;
struct sMemHeader* prev_it_329;
struct sMemHeader* next_it_330;
unsigned long  int size_331;
struct sMemHeaderTiny* it_332;
struct sMemHeaderTiny* prev_it_333;
struct sMemHeaderTiny* next_it_334;
unsigned long  int size_335;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_328=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_328->allocated!=177783            ) {
                return;
            }
            it_328->allocated=0;
            prev_it_329=it_328->prev;
            next_it_330=it_328->next;
            if(            gAllocMem==it_328            ) {
                gAllocMem=next_it_330;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_329                ) {
                    prev_it_329->next=next_it_330;
                }
                if(                next_it_330                ) {
                    next_it_330->prev=prev_it_329;
                }
            }
            size_331=it_328->size;
            free(it_328);
            gNumFree++;
        }
        else {
            it_332=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_332->allocated!=177783            ) {
                return;
            }
            it_332->allocated=0;
            prev_it_333=it_332->prev;
            next_it_334=it_332->next;
            if(            gAllocMem==it_332            ) {
                gAllocMem=(struct sMemHeader*)next_it_334;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_333                ) {
                    prev_it_333->next=next_it_334;
                }
                if(                next_it_334                ) {
                    next_it_334->prev=prev_it_333;
                }
            }
            size_335=it_332->size;
            free(it_332);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_336;
struct sMemHeader* it_337;
int i_338;
int i_339;
void* __result_obj__56;
void* result_340;
struct sMemHeaderTiny* it_341;
void* __result_obj__57;
memset(&i_338, 0, sizeof(int));
memset(&i_339, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_336=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_337=result_336;
        it_337->allocated=177783;
        it_337->size=size+sizeof(struct sMemHeader);
        it_337->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_338=0            ;            i_338<gNumComeStackFrame            ;            i_338++            ){
                it_337->sname[i_338]=gComeStackFrameSName[i_338];
                it_337->sline[i_338]=gComeStackFrameSLine[i_338];
                it_337->id[i_338]=gComeStackFrameID[i_338];
            }
        }
        else {
            for(            i_339=0            ;            i_339<16            ;            i_339++            ){
                it_337->sname[i_339]=gComeStackFrameSName[gNumComeStackFrame-1-i_339];
                it_337->sline[i_339]=gComeStackFrameSLine[gNumComeStackFrame-1-i_339];
                it_337->id[i_339]=gComeStackFrameID[gNumComeStackFrame-1-i_339];
            }
        }
        come_pop_stackframe_v2();
        it_337->next=gAllocMem;
        it_337->prev=((void*)0);
        it_337->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_337;
        }
        gAllocMem=it_337;
        gNumAlloc++;
        __result_obj__56 = (char*)result_336+sizeof(struct sMemHeader);
        return __result_obj__56;
    }
    else {
        result_340=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_341=result_340;
        it_341->allocated=177783;
        it_341->class_name=class_name;
        it_341->sname=sname;
        it_341->sline=sline;
        it_341->size=size+sizeof(struct sMemHeaderTiny);
        it_341->free_next=((void*)0);
        it_341->next=(struct sMemHeaderTiny*)gAllocMem;
        it_341->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_341;
        }
        gAllocMem=(struct sMemHeader*)it_341;
        gNumAlloc++;
        __result_obj__57 = (char*)result_340+sizeof(struct sMemHeaderTiny);
        return __result_obj__57;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_342;
char* __result_obj__58;
struct sMemHeaderTiny* it_343;
char* __result_obj__59;
    if(    gComeDebugLib    ) {
        it_342=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_342->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_342);
            exit(2);
        }
        __result_obj__58 = it_342->class_name;
        return __result_obj__58;
    }
    else {
        it_343=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_343->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_343);
            exit(2);
        }
        __result_obj__59 = it_343->class_name;
        return __result_obj__59;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_344;
int i_345;
struct sMemHeaderTiny* it_346;
    if(    gComeDebugLib    ) {
        it_344=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_344->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_344->class_name        ) {
            printf("(%s): ",it_344->class_name);
        }
        for(        i_345=0        ;        i_345<16        ;        i_345++        ){
            if(            it_344->sname[i_345]            ) {
                printf("%s %d #%d, ",it_344->sname[i_345],it_344->sline[i_345],it_344->id[i_345]);
            }
        }
        puts("");
    }
    else {
        it_346=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_346->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_346->class_name,it_346->sname,it_346->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_347;
unsigned long  int* ref_count_348;
unsigned long  int* size2_349;
void* __result_obj__60;
    mem_347=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_348=(unsigned long  int*)mem_347;
    *ref_count_348=0;
    size2_349=(unsigned long  int*)(mem_347+sizeof(unsigned long  int));
    *size2_349=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__60 = mem_347+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__60;
}

void come_free(void* mem){
unsigned long  int* ref_count_350;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_350=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_350);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__61;
char* mem_351;
unsigned long  int* size_p_352;
unsigned long  int size_353;
void* result_354;
void* __result_obj__62;
    if(    !block    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_351=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_352=(unsigned long  int*)(mem_351+sizeof(unsigned long  int));
    size_353=*size_p_352-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_354=come_calloc_v2(1,size_353,sname,sline,class_name);
    memcpy(result_354,block,size_353);
    __result_obj__62 = result_354;
    return __result_obj__62;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__63;
unsigned long  int* ref_count_355;
void* __result_obj__64;
    if(    mem==((void*)0)    ) {
        __result_obj__63 = mem;
        return __result_obj__63;
    }
    ref_count_355=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_355)++;
    __result_obj__64 = mem;
    return __result_obj__64;
}

void* come_print_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_356;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_356=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_356);
    __result_obj__66 = mem;
    return __result_obj__66;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_357;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_357=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_357;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__67;
void* __result_obj__68;
unsigned long  int* ref_count_358;
unsigned long  int count_359;
void (*finalizer_360)(void*);
void* __result_obj__69;
void* __result_obj__70;
memset(&finalizer_360, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__67 = mem;
            return __result_obj__67;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    ref_count_358=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_358)--;
    }
    count_359=*ref_count_358;
    if(    !no_free&&count_359<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_360=protocol_fun;
            finalizer_360(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__69 = ((void*)0);
        return __result_obj__69;
    }
    __result_obj__70 = mem;
    return __result_obj__70;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_361)(void*);
void (*finalizer_362)(void*);
void (*finalizer_363)(void*);
unsigned long  int* ref_count_364;
unsigned long  int count_365;
void (*finalizer_366)(void*);
void (*finalizer_367)(void*);
void (*finalizer_368)(void*);
memset(&finalizer_361, 0, sizeof(void (*)(void*)));
memset(&finalizer_362, 0, sizeof(void (*)(void*)));
memset(&finalizer_363, 0, sizeof(void (*)(void*)));
memset(&finalizer_366, 0, sizeof(void (*)(void*)));
memset(&finalizer_367, 0, sizeof(void (*)(void*)));
memset(&finalizer_368, 0, sizeof(void (*)(void*)));
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
                finalizer_361=protocol_fun;
                finalizer_361(protocol_obj);
            }
            finalizer_362=fun;
            finalizer_362(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_363=protocol_fun;
                finalizer_363(protocol_obj);
            }
        }
    }
    else {
        ref_count_364=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_364)--;
        }
        count_365=*ref_count_364;
        if(        !no_free&&count_365<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_366=protocol_fun;
                        finalizer_366(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_367=fun;
                        finalizer_367(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_368=protocol_fun;
                        finalizer_368(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__71;
int len_369;
void* __right_value26 = (void*)0;
char* result_370;
char* __result_obj__72;
    if(    str==((void*)0)    ) {
        __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    len_369=strlen(str)+1;
    result_370=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_369)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_370,str,len_369);
    __result_obj__72 = (char*)come_increment_ref_count(result_370);
    (result_370 = come_decrement_ref_count(result_370, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
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
void* __right_value27 = (void*)0;
char* __result_obj__73;
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value27=come_get_stackframe())));
    (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__73;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__74;
    __result_obj__74 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__74;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value28 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__75;
    self->size=128;
    __dec_obj5=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2883, "char*"));
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__75 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value29 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__76;
    self->size=128;
    __dec_obj6=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2893, "char*"));
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__77;
void* __right_value30 = (void*)0;
struct buffer* result_371;
void* __right_value31 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__77;
    }
    result_371=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2913, "struct buffer*"));
    result_371->size=self->size;
    __dec_obj7=result_371->buf,
    result_371->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2916, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_371->len=self->len;
    memcpy(result_371->buf,self->buf,self->len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_371);
    come_call_finalizer(buffer_finalize, result_371, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
_Bool __result_obj__79;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__79 = string_equals(((char*)(__right_value32=buffer_to_string(left))),((char*)(__right_value33=buffer_to_string(right))));
    (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__79;
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
struct buffer* __result_obj__80;
void* __right_value34 = (void*)0;
char* old_buf_372;
int old_len_373;
int new_size_374;
void* __right_value35 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__81;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_372=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2964, "char*"));
        memcpy(old_buf_372,self->buf,self->size);
        old_len_373=self->len;
        new_size_374=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_374)), "/usr/local/include/comelang.h", 2968, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_372,old_len_373);
        self->buf[old_len_373]=0;
        self->size=new_size_374;
        (old_buf_372 = come_decrement_ref_count(old_buf_372, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__82;
void* __right_value36 = (void*)0;
char* old_buf_375;
int old_len_376;
int new_size_377;
void* __right_value37 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_375=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2987, "char*"));
        old_len_376=self->len;
        new_size_377=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_377)), "/usr/local/include/comelang.h", 2991, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_375,old_len_376);
        self->buf[old_len_376]=0;
        self->size=new_size_377;
        (old_buf_375 = come_decrement_ref_count(old_buf_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__84;
int size_378;
void* __right_value38 = (void*)0;
char* old_buf_379;
int old_len_380;
int new_size_381;
void* __right_value39 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__85;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    size_378=strlen(mem);
    if(    self->len+size_378+1+1>=self->size    ) {
        old_buf_379=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3013, "char*"));
        memcpy(old_buf_379,self->buf,self->size);
        old_len_380=self->len;
        new_size_381=(self->size+size_378+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_381)), "/usr/local/include/comelang.h", 3017, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_379,old_len_380);
        self->buf[old_len_380]=0;
        self->size=new_size_381;
        (old_buf_379 = come_decrement_ref_count(old_buf_379, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_378);
    self->len+=size_378;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__86;
va_list args_382;
char* result_383;
int len_384;
struct buffer* __result_obj__87;
void* __right_value40 = (void*)0;
char* mem_385;
int size_386;
void* __right_value41 = (void*)0;
char* old_buf_387;
int old_len_388;
int new_size_389;
void* __right_value42 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__88;
result_383 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    __builtin_va_start(args_382,msg);
    len_384=vasprintf(&result_383,msg,args_382);
    __builtin_va_end(args_382);
    if(    len_384<0    ) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    mem_385=(char*)come_increment_ref_count(__builtin_string(result_383));
    size_386=strlen(mem_385);
    if(    self->len+size_386+1+1>=self->size    ) {
        old_buf_387=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3061, "char*"));
        memcpy(old_buf_387,self->buf,self->size);
        old_len_388=self->len;
        new_size_389=(self->size+size_386+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_389)), "/usr/local/include/comelang.h", 3065, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_387,old_len_388);
        self->buf[old_len_388]=0;
        self->size=new_size_389;
        (old_buf_387 = come_decrement_ref_count(old_buf_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_385,size_386);
    self->len+=size_386;
    self->buf[self->len]=0;
    free(result_383);
    __result_obj__88 = self;
    (mem_385 = come_decrement_ref_count(mem_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__88;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__89;
int size_390;
void* __right_value43 = (void*)0;
char* old_buf_391;
int old_len_392;
int new_size_393;
void* __right_value44 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__90;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    size_390=strlen(mem)+1;
    if(    self->len+size_390+1+1+1>=self->size    ) {
        old_buf_391=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3087, "char*"));
        memcpy(old_buf_391,self->buf,self->size);
        old_len_392=self->len;
        new_size_393=(self->size+size_390+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_393)), "/usr/local/include/comelang.h", 3091, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_391,old_len_392);
        self->buf[old_len_392]=0;
        self->size=new_size_393;
        (old_buf_391 = come_decrement_ref_count(old_buf_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_390);
    self->len+=size_390;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__91;
int* mem_394;
int size_395;
void* __right_value45 = (void*)0;
char* old_buf_396;
int old_len_397;
int new_size_398;
void* __right_value46 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__92;
    if(    self==((void*)0)    ) {
        __result_obj__91 = ((void*)0);
        return __result_obj__91;
    }
    mem_394=&value;
    size_395=sizeof(int);
    if(    self->len+size_395+1+1>=self->size    ) {
        old_buf_396=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_396,self->buf,self->size);
        old_len_397=self->len;
        new_size_398=(self->size+size_395+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_398)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_396,old_len_397);
        self->buf[old_len_397]=0;
        self->size=new_size_398;
        (old_buf_396 = come_decrement_ref_count(old_buf_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_394,size_395);
    self->len+=size_395;
    self->buf[self->len]=0;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_399;
int size_400;
void* __right_value47 = (void*)0;
char* old_buf_401;
int old_len_402;
int new_size_403;
void* __right_value48 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__93;
    mem_399=&value;
    size_400=sizeof(long);
    if(    self->len+size_400+1+1>=self->size    ) {
        old_buf_401=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3137, "char*"));
        memcpy(old_buf_401,self->buf,self->size);
        old_len_402=self->len;
        new_size_403=(self->size+size_400+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_403)), "/usr/local/include/comelang.h", 3141, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_401,old_len_402);
        self->buf[old_len_402]=0;
        self->size=new_size_403;
        (old_buf_401 = come_decrement_ref_count(old_buf_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_399,size_400);
    self->len+=size_400;
    self->buf[self->len]=0;
    __result_obj__93 = self;
    return __result_obj__93;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__94;
short* mem_404;
int size_405;
void* __right_value49 = (void*)0;
char* old_buf_406;
int old_len_407;
int new_size_408;
void* __right_value50 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__95;
    if(    self==((void*)0)    ) {
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    mem_404=&value;
    size_405=sizeof(short);
    if(    self->len+size_405+1+1>=self->size    ) {
        old_buf_406=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3164, "char*"));
        memcpy(old_buf_406,self->buf,self->size);
        old_len_407=self->len;
        new_size_408=(self->size+size_405+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_408)), "/usr/local/include/comelang.h", 3168, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_406,old_len_407);
        self->buf[old_len_407]=0;
        self->size=new_size_408;
        (old_buf_406 = come_decrement_ref_count(old_buf_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_404,size_405);
    self->len+=size_405;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__96;
int len_409;
int new_size_410;
void* __right_value51 = (void*)0;
char* __dec_obj16;
int i_411;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    len_409=self->len;
    len_409=(len_409+3)&~3;
    if(    len_409>=self->size    ) {
        new_size_410=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_410)), "/usr/local/include/comelang.h", 3192, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_410;
    }
    for(    i_411=self->len    ;    i_411<len_409    ;    i_411++    ){
        self->buf[i_411]=0;
    }
    self->len=len_409;
    __result_obj__97 = self;
    return __result_obj__97;
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
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct buffer* result_412;
struct buffer* __result_obj__98;
struct buffer* __result_obj__99;
    result_412=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3222, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__98 = (struct buffer*)come_increment_ref_count(result_412);
        come_call_finalizer(buffer_finalize, result_412, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__98;
    }
    buffer_append_str(result_412,self);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_412);
    come_call_finalizer(buffer_finalize, result_412, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

char* buffer_to_string(struct buffer* self){
void* __right_value54 = (void*)0;
char* __result_obj__100;
void* __right_value55 = (void*)0;
char* __result_obj__101;
    if(    self==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value54=__builtin_string(""))));
        (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value55=__builtin_string(self->buf))));
    (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__102;
    __result_obj__102 = self->buf;
    return __result_obj__102;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct buffer* result_413;
struct buffer* __result_obj__103;
    result_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_413,self,sizeof(char)*len);
    __result_obj__103 = (struct buffer*)come_increment_ref_count(result_413);
    come_call_finalizer(buffer_finalize, result_413, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct buffer* result_414;
int i_415;
struct buffer* __result_obj__104;
    result_414=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    for(    i_415=0    ;    i_415<len    ;    i_415++    ){
        buffer_append(result_414,self[i_415],strlen(self[i_415]));
    }
    __result_obj__104 = (struct buffer*)come_increment_ref_count(result_414);
    come_call_finalizer(buffer_finalize, result_414, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
struct buffer* result_416;
struct buffer* __result_obj__105;
    result_416=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3265, "struct buffer*"))));
    buffer_append(result_416,(char*)self,sizeof(short)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_416);
    come_call_finalizer(buffer_finalize, result_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
struct buffer* result_417;
struct buffer* __result_obj__106;
    result_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3272, "struct buffer*"))));
    buffer_append(result_417,(char*)self,sizeof(int)*len);
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_417);
    come_call_finalizer(buffer_finalize, result_417, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct buffer* result_418;
struct buffer* __result_obj__107;
    result_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_418,(char*)self,sizeof(long)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_418);
    come_call_finalizer(buffer_finalize, result_418, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value66 = (void*)0;
void* __right_value67 = (void*)0;
struct buffer* result_419;
struct buffer* __result_obj__108;
    result_419=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_419,(char*)self,sizeof(float)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_419);
    come_call_finalizer(buffer_finalize, result_419, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
struct buffer* result_420;
struct buffer* __result_obj__109;
    result_420=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_420,(char*)self,sizeof(double)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_420);
    come_call_finalizer(buffer_finalize, result_420, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

char* buffer_printable(struct buffer* self){
int len_421;
void* __right_value70 = (void*)0;
char* result_422;
int n_423;
int i_424;
unsigned char c_425;
char* __result_obj__110;
    len_421=self->len;
    result_422=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_421*2+1)), "/usr/local/include/comelang.h", 3301, "char*"));
    n_423=0;
    for(    i_424=0    ;    i_424<len_421    ;    i_424++    ){
        c_425=self->buf[i_424];
        if(        (c_425>=0&&c_425<32)||c_425==127        ) {
            result_422[n_423++]=94;
            result_422[n_423++]=c_425+65-1;
        }
        else if(        c_425>127        ) {
            result_422[n_423++]=63;
        }
        else {
            result_422[n_423++]=c_425;
        }
    }
    result_422[n_423]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_422);
    (result_422 = come_decrement_ref_count(result_422, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_426;
struct list$1char$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_426=0    ;    i_426<num_value    ;    i_426++    ){
        list$1char$_push_back(self,values[i_426]);
    }
    __result_obj__112 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value72 = (void*)0;
struct list_item$1char$* litem_427;
void* __right_value73 = (void*)0;
struct list_item$1char$* litem_428;
void* __right_value74 = (void*)0;
struct list_item$1char$* litem_429;
struct list$1char$* __result_obj__111;
    if(    self->len==0    ) {
        litem_427=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value72=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_427->prev=((void*)0);
        litem_427->next=((void*)0);
        litem_427->item=item;
        self->tail=litem_427;
        self->head=litem_427;
    }
    else if(    self->len==1    ) {
        litem_428=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value73=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_428->prev=self->head;
        litem_428->next=((void*)0);
        litem_428->item=item;
        self->tail=litem_428;
        self->head->next=litem_428;
    }
    else {
        litem_429=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value74=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_429->prev=self->tail;
        litem_429->next=((void*)0);
        litem_429->item=item;
        self->tail->next=litem_429;
        self->tail=litem_429;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_430;
struct list_item$1char$* prev_it_431;
    it_430=self->head;
    while(    it_430!=((void*)0)    ) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_431, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1char$* __result_obj__113;
    __result_obj__113 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value75=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_432;
struct list$1char$p* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_432=0    ;    i_432<num_value    ;    i_432++    ){
        list$1char$p_push_back(self,values[i_432]);
    }
    __result_obj__115 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value77 = (void*)0;
struct list_item$1char$p* litem_433;
void* __right_value78 = (void*)0;
struct list_item$1char$p* litem_434;
void* __right_value79 = (void*)0;
struct list_item$1char$p* litem_435;
struct list$1char$p* __result_obj__114;
    if(    self->len==0    ) {
        litem_433=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value77=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_433->prev=((void*)0);
        litem_433->next=((void*)0);
        litem_433->item=item;
        self->tail=litem_433;
        self->head=litem_433;
    }
    else if(    self->len==1    ) {
        litem_434=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value78=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_434->prev=self->head;
        litem_434->next=((void*)0);
        litem_434->item=item;
        self->tail=litem_434;
        self->head->next=litem_434;
    }
    else {
        litem_435=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value79=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_435->prev=self->tail;
        litem_435->next=((void*)0);
        litem_435->item=item;
        self->tail->next=litem_435;
        self->tail=litem_435;
    }
    self->len++;
    __result_obj__114 = self;
    return __result_obj__114;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_436;
struct list_item$1char$p* prev_it_437;
    it_436=self->head;
    while(    it_436!=((void*)0)    ) {
        prev_it_437=it_436;
        it_436=it_436->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_437, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value76 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1char$p* __result_obj__116;
    __result_obj__116 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value80=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_438;
struct list$1short$* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_438=0    ;    i_438<num_value    ;    i_438++    ){
        list$1short$_push_back(self,values[i_438]);
    }
    __result_obj__118 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value82 = (void*)0;
struct list_item$1short$* litem_439;
void* __right_value83 = (void*)0;
struct list_item$1short$* litem_440;
void* __right_value84 = (void*)0;
struct list_item$1short$* litem_441;
struct list$1short$* __result_obj__117;
    if(    self->len==0    ) {
        litem_439=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value82=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_439->prev=((void*)0);
        litem_439->next=((void*)0);
        litem_439->item=item;
        self->tail=litem_439;
        self->head=litem_439;
    }
    else if(    self->len==1    ) {
        litem_440=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value83=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_440->prev=self->head;
        litem_440->next=((void*)0);
        litem_440->item=item;
        self->tail=litem_440;
        self->head->next=litem_440;
    }
    else {
        litem_441=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value84=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_441->prev=self->tail;
        litem_441->next=((void*)0);
        litem_441->item=item;
        self->tail->next=litem_441;
        self->tail=litem_441;
    }
    self->len++;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_442;
struct list_item$1short$* prev_it_443;
    it_442=self->head;
    while(    it_442!=((void*)0)    ) {
        prev_it_443=it_442;
        it_442=it_442->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_443, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value81 = (void*)0;
void* __right_value85 = (void*)0;
struct list$1short$* __result_obj__119;
    __result_obj__119 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value85=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value85, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_444;
struct list$1int$* __result_obj__121;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_444=0    ;    i_444<num_value    ;    i_444++    ){
        list$1int$_push_back(self,values[i_444]);
    }
    __result_obj__121 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value87 = (void*)0;
struct list_item$1int$* litem_445;
void* __right_value88 = (void*)0;
struct list_item$1int$* litem_446;
void* __right_value89 = (void*)0;
struct list_item$1int$* litem_447;
struct list$1int$* __result_obj__120;
    if(    self->len==0    ) {
        litem_445=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value87=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_445->prev=((void*)0);
        litem_445->next=((void*)0);
        litem_445->item=item;
        self->tail=litem_445;
        self->head=litem_445;
    }
    else if(    self->len==1    ) {
        litem_446=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value88=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_446->prev=self->head;
        litem_446->next=((void*)0);
        litem_446->item=item;
        self->tail=litem_446;
        self->head->next=litem_446;
    }
    else {
        litem_447=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value89=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_447->prev=self->tail;
        litem_447->next=((void*)0);
        litem_447->item=item;
        self->tail->next=litem_447;
        self->tail=litem_447;
    }
    self->len++;
    __result_obj__120 = self;
    return __result_obj__120;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_448;
struct list_item$1int$* prev_it_449;
    it_448=self->head;
    while(    it_448!=((void*)0)    ) {
        prev_it_449=it_448;
        it_448=it_448->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value86 = (void*)0;
void* __right_value90 = (void*)0;
struct list$1int$* __result_obj__122;
    __result_obj__122 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value90=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value90, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_450;
struct list$1long$* __result_obj__124;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_450=0    ;    i_450<num_value    ;    i_450++    ){
        list$1long$_push_back(self,values[i_450]);
    }
    __result_obj__124 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value92 = (void*)0;
struct list_item$1long$* litem_451;
void* __right_value93 = (void*)0;
struct list_item$1long$* litem_452;
void* __right_value94 = (void*)0;
struct list_item$1long$* litem_453;
struct list$1long$* __result_obj__123;
    if(    self->len==0    ) {
        litem_451=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value92=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_451->prev=((void*)0);
        litem_451->next=((void*)0);
        litem_451->item=item;
        self->tail=litem_451;
        self->head=litem_451;
    }
    else if(    self->len==1    ) {
        litem_452=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value93=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_452->prev=self->head;
        litem_452->next=((void*)0);
        litem_452->item=item;
        self->tail=litem_452;
        self->head->next=litem_452;
    }
    else {
        litem_453=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value94=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_453->prev=self->tail;
        litem_453->next=((void*)0);
        litem_453->item=item;
        self->tail->next=litem_453;
        self->tail=litem_453;
    }
    self->len++;
    __result_obj__123 = self;
    return __result_obj__123;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_454;
struct list_item$1long$* prev_it_455;
    it_454=self->head;
    while(    it_454!=((void*)0)    ) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1long$* __result_obj__125;
    __result_obj__125 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value95=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3362, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value95, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_456;
struct list$1float$* __result_obj__127;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_456=0    ;    i_456<num_value    ;    i_456++    ){
        list$1float$_push_back(self,values[i_456]);
    }
    __result_obj__127 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value97 = (void*)0;
struct list_item$1float$* litem_457;
void* __right_value98 = (void*)0;
struct list_item$1float$* litem_458;
void* __right_value99 = (void*)0;
struct list_item$1float$* litem_459;
struct list$1float$* __result_obj__126;
    if(    self->len==0    ) {
        litem_457=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value97=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_457->prev=((void*)0);
        litem_457->next=((void*)0);
        litem_457->item=item;
        self->tail=litem_457;
        self->head=litem_457;
    }
    else if(    self->len==1    ) {
        litem_458=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value98=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_458->prev=self->head;
        litem_458->next=((void*)0);
        litem_458->item=item;
        self->tail=litem_458;
        self->head->next=litem_458;
    }
    else {
        litem_459=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value99=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_459->prev=self->tail;
        litem_459->next=((void*)0);
        litem_459->item=item;
        self->tail->next=litem_459;
        self->tail=litem_459;
    }
    self->len++;
    __result_obj__126 = self;
    return __result_obj__126;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_460;
struct list_item$1float$* prev_it_461;
    it_460=self->head;
    while(    it_460!=((void*)0)    ) {
        prev_it_461=it_460;
        it_460=it_460->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1float$* __result_obj__128;
    __result_obj__128 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value100=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3367, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value100, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_462;
struct list$1double$* __result_obj__130;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_462=0    ;    i_462<num_value    ;    i_462++    ){
        list$1double$_push_back(self,values[i_462]);
    }
    __result_obj__130 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value102 = (void*)0;
struct list_item$1double$* litem_463;
void* __right_value103 = (void*)0;
struct list_item$1double$* litem_464;
void* __right_value104 = (void*)0;
struct list_item$1double$* litem_465;
struct list$1double$* __result_obj__129;
    if(    self->len==0    ) {
        litem_463=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value102=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_463->prev=((void*)0);
        litem_463->next=((void*)0);
        litem_463->item=item;
        self->tail=litem_463;
        self->head=litem_463;
    }
    else if(    self->len==1    ) {
        litem_464=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value103=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_464->prev=self->head;
        litem_464->next=((void*)0);
        litem_464->item=item;
        self->tail=litem_464;
        self->head->next=litem_464;
    }
    else {
        litem_465=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value104=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_465->prev=self->tail;
        litem_465->next=((void*)0);
        litem_465->item=item;
        self->tail->next=litem_465;
        self->tail=litem_465;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_466;
struct list_item$1double$* prev_it_467;
    it_466=self->head;
    while(    it_466!=((void*)0)    ) {
        prev_it_467=it_466;
        it_466=it_466->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_467, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1double$* __result_obj__131;
    __result_obj__131 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value105=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3372, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value105, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__131, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__131;
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
void* __right_value106 = (void*)0;
char* __result_obj__132;
int len_468;
void* __right_value107 = (void*)0;
char* result_469;
char* __result_obj__133;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_468=strlen(self)+strlen(right);
    result_469=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_468+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_469,self,len_468+1);
    strncat(result_469,right,len_468+1);
    __result_obj__133 = (char*)come_increment_ref_count(result_469);
    (result_469 = come_decrement_ref_count(result_469, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* string_operator_add(char* self, char* right){
void* __right_value108 = (void*)0;
char* __result_obj__134;
int len_470;
void* __right_value109 = (void*)0;
char* result_471;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_470=strlen(self)+strlen(right);
    result_471=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_470+1)), "/usr/local/include/comelang.h", 3616, "char*"));
    strncpy(result_471,self,len_470+1);
    strncat(result_471,right,len_470+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_471);
    (result_471 = come_decrement_ref_count(result_471, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_operator_mult(char* self, int right){
void* __right_value110 = (void*)0;
char* __result_obj__136;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct buffer* buf_472;
int i_473;
void* __right_value113 = (void*)0;
char* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    buf_472=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3629, "struct buffer*"))));
    for(    i_473=0    ;    i_473<right    ;    i_473++    ){
        buffer_append_str(buf_472,self);
    }
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value113=buffer_to_string(buf_472))));
    come_call_finalizer(buffer_finalize, buf_472, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* string_operator_mult(char* self, int right){
void* __right_value114 = (void*)0;
char* __result_obj__138;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct buffer* buf_474;
int i_475;
void* __right_value117 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_474=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_475=0    ;    i_475<right    ;    i_475++    ){
        buffer_append_str(buf_474,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value117=buffer_to_string(buf_474))));
    come_call_finalizer(buffer_finalize, buf_474, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_476;
int i_477;
    result_476=(_Bool)0;
    for(    i_477=0    ;    i_477<len    ;    i_477++    ){
        if(        strncmp(self[i_477],str,strlen(self[i_477]))==0        ) {
            result_476=(_Bool)1;
            break;
        }
    }
    return result_476;
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
int result_478;
char* p_479;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_478=0;
    p_479=value;
    while(    *p_479    ) {
        result_478+=(*p_479);
        p_479++;
    }
    return result_478;
}

unsigned int string_get_hash_key(char* value){
int result_480;
char* p_481;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_480=0;
    p_481=value;
    while(    *p_481    ) {
        result_480+=(*p_481);
        p_481++;
    }
    return result_480;
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
_Bool result_482;
    result_482=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_482;
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
_Bool result_483;
    result_483=(c>=32&&c<=126);
    return result_483;
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
void* __right_value118 = (void*)0;
char* __result_obj__140;
int len_484;
void* __right_value119 = (void*)0;
char* result_485;
int i_486;
char* __result_obj__141;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_484=strlen(str);
    result_485=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_484+1)), "/usr/local/include/comelang.h", 3911, "char*"));
    for(    i_486=0    ;    i_486<len_484    ;    i_486++    ){
        result_485[i_486]=str[len_484-i_486-1];
    }
    result_485[len_484]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_485);
    (result_485 = come_decrement_ref_count(result_485, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__142;
int len_487;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
char* __result_obj__143;
void* __right_value123 = (void*)0;
char* __result_obj__144;
void* __right_value124 = (void*)0;
char* __result_obj__145;
void* __right_value125 = (void*)0;
char* result_488;
char* __result_obj__146;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_487=strlen(str);
    if(    head<0    ) {
        head+=len_487;
    }
    if(    tail<0    ) {
        tail+=len_487+1;
    }
    if(    head>tail    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value122=charp_reverse(((char*)(__right_value121=charp_substring(str,tail,head)))))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_487    ) {
        tail=len_487;
    }
    if(    head==tail    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    tail-head+1<1    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(""))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    result_488=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3957, "char*"));
    memcpy(result_488,str+head,tail-head);
    result_488[tail-head]=0;
    __result_obj__146 = (char*)come_increment_ref_count(result_488);
    (result_488 = come_decrement_ref_count(result_488, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value126 = (void*)0;
char* __result_obj__147;
int len_489;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
char* __result_obj__148;
void* __right_value129 = (void*)0;
char* __result_obj__149;
void* __right_value130 = (void*)0;
char* __result_obj__150;
void* __right_value131 = (void*)0;
char* result_490;
char* __result_obj__151;
    if(    str==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string(""))));
        (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    len_489=strlen(str);
    if(    head<0    ) {
        head+=len_489;
    }
    if(    tail<0    ) {
        tail+=len_489+1;
    }
    if(    head>tail    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value128=charp_reverse(((char*)(__right_value127=charp_substring(str,tail,head)))))));
        (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_489    ) {
        tail=len_489;
    }
    if(    head==tail    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    if(    tail-head+1<1    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value130=__builtin_string(""))));
        (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    result_490=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4000, "char*"));
    memcpy(result_490,str+head,tail-head);
    result_490[tail-head]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_490);
    (result_490 = come_decrement_ref_count(result_490, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value132 = (void*)0;
char* __result_obj__152;
int len_491;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* __result_obj__153;
void* __right_value135 = (void*)0;
char* __result_obj__154;
void* __right_value136 = (void*)0;
char* __result_obj__155;
void* __right_value137 = (void*)0;
char* result_492;
char* __result_obj__156;
    if(    str==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value132=__builtin_string(""))));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    len_491=strlen(str);
    if(    head<0    ) {
        head+=len_491;
    }
    if(    tail<0    ) {
        tail+=len_491+1;
    }
    if(    head>tail    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value134=charp_reverse(((char*)(__right_value133=charp_substring(str,tail,head)))))));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_491    ) {
        tail=len_491;
    }
    if(    head==tail    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(""))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    if(    tail-head+1<1    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value136=__builtin_string(""))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_492=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4043, "char*"));
    memcpy(result_492,str+head,tail-head);
    result_492[tail-head]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_492);
    (result_492 = come_decrement_ref_count(result_492, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xsprintf(char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__157;
va_list args_493;
char* result_494;
int len_495;
void* __right_value139 = (void*)0;
char* __result_obj__158;
void* __right_value140 = (void*)0;
char* result2_496;
char* __result_obj__159;
result_494 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __builtin_va_start(args_493,msg);
    len_495=vasprintf(&result_494,msg,args_493);
    __builtin_va_end(args_493);
    if(    len_495<0    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(""))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    result2_496=(char*)come_increment_ref_count(__builtin_string(result_494));
    free(result_494);
    __result_obj__159 = (char*)come_increment_ref_count(result2_496);
    (result2_496 = come_decrement_ref_count(result2_496, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value141 = (void*)0;
char* __result_obj__160;
int len_497;
void* __right_value142 = (void*)0;
char* __result_obj__161;
void* __right_value143 = (void*)0;
char* __result_obj__162;
void* __right_value144 = (void*)0;
char* result_498;
char* __result_obj__163;
    if(    str==((void*)0)    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    len_497=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(str))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    if(    head<0    ) {
        head+=len_497;
    }
    if(    tail<0    ) {
        tail+=len_497+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(str))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    if(    tail>=len_497    ) {
        tail=len_497;
    }
    result_498=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_497-(tail-head)+1)), "/usr/local/include/comelang.h", 4105, "char*"));
    memcpy(result_498,str,head);
    memcpy(result_498+head,str+tail,len_497-tail);
    result_498[len_497-(tail-head)]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_498);
    (result_498 = come_decrement_ref_count(result_498, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__164;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__164 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__164;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_499;
struct list_item$1char$ph* prev_it_500;
    it_499=self->head;
    while(    it_499!=((void*)0)    ) {
        prev_it_500=it_499;
        it_499=it_499->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value151 = (void*)0;
struct list_item$1char$ph* litem_504;
char* __dec_obj17;
void* __right_value152 = (void*)0;
struct list_item$1char$ph* litem_505;
char* __dec_obj18;
void* __right_value153 = (void*)0;
struct list_item$1char$ph* litem_506;
char* __dec_obj19;
struct list$1char$ph* __result_obj__166;
    if(    self->len==0    ) {
        litem_504=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value151=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_504->prev=((void*)0);
        litem_504->next=((void*)0);
        __dec_obj17=litem_504->item,
        litem_504->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_504;
        self->head=litem_504;
    }
    else if(    self->len==1    ) {
        litem_505=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value152=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_505->prev=self->head;
        litem_505->next=((void*)0);
        __dec_obj18=litem_505->item,
        litem_505->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_505;
        self->head->next=litem_505;
    }
    else {
        litem_506=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value153=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_506->prev=self->tail;
        litem_506->next=((void*)0);
        __dec_obj19=litem_506->item,
        litem_506->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_506;
        self->tail=litem_506;
    }
    self->len++;
    __result_obj__166 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__166;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1char$ph* __result_obj__165;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
struct list$1char$ph* result_501;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct buffer* str_502;
int i_503;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct list$1char$ph* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value146=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4118, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value146, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__165;
    }
    result_501=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4121, "struct list$1char$ph*"))));
    str_502=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4123, "struct buffer*"))));
    for(    i_503=0    ;    i_503<charp_length(self)    ;    i_503++    ){
        if(        self[i_503]==c        ) {
            list$1char$ph_push_back(result_501,(char*)come_increment_ref_count(__builtin_string(str_502->buf)));
            buffer_reset(str_502);
        }
        else {
            buffer_append_char(str_502,self[i_503]);
        }
    }
    if(    buffer_length(str_502)!=0    ) {
        list$1char$ph_push_back(result_501,(char*)come_increment_ref_count(__builtin_string(str_502->buf)));
    }
    __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(result_501);
    come_call_finalizer(list$1char$ph$p_finalize, result_501, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_502, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value156 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf(msg,self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value157 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf(msg,self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_printable(char* str){
int len_507;
void* __right_value158 = (void*)0;
char* result_508;
int n_509;
int i_510;
char c_511;
char* __result_obj__170;
    len_507=charp_length(str);
    result_508=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_507*2+1)), "/usr/local/include/comelang.h", 4155, "char*"));
    n_509=0;
    for(    i_510=0    ;    i_510<len_507    ;    i_510++    ){
        c_511=str[i_510];
        if(        (c_511>=0&&c_511<32)||c_511==127        ) {
            result_508[n_509++]=94;
            result_508[n_509++]=c_511+65-1;
        }
        else {
            result_508[n_509++]=c_511;
        }
    }
    result_508[n_509]=0;
    __result_obj__170 = (char*)come_increment_ref_count(result_508);
    (result_508 = come_decrement_ref_count(result_508, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value159 = (void*)0;
char* __result_obj__171;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct buffer* result_512;
char* p_513;
char* p2_514;
void* __right_value162 = (void*)0;
char* __result_obj__172;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string(self))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    result_512=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4183, "struct buffer*"))));
    p_513=self;
    while(    (_Bool)1    ) {
        p2_514=strstr(p_513,str);
        if(        p2_514==((void*)0)        ) {
            p2_514=p_513;
            while(            *p2_514            ) {
                p2_514++;
            }
            buffer_append(result_512,p_513,p2_514-p_513);
            break;
        }
        buffer_append(result_512,p_513,p2_514-p_513);
        buffer_append_str(result_512,replace);
        p_513=p2_514+strlen(str);
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value162=buffer_to_string(result_512))));
    come_call_finalizer(buffer_finalize, result_512, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* xbasename(char* path){
void* __right_value163 = (void*)0;
char* __result_obj__173;
char* p_515;
void* __right_value164 = (void*)0;
char* __result_obj__174;
void* __right_value165 = (void*)0;
char* __result_obj__175;
void* __right_value166 = (void*)0;
char* __result_obj__176;
    if(    path==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(""))));
        (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    p_515=path+strlen(path);
    while(    p_515>=path    ) {
        if(        *p_515==47        ) {
            break;
        }
        else {
            p_515--;
        }
    }
    if(    p_515<path    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(path))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    else {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(p_515+1))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* xnoextname(char* path){
void* __right_value167 = (void*)0;
char* __result_obj__177;
void* __right_value168 = (void*)0;
char* path2_516;
char* p_517;
void* __right_value169 = (void*)0;
char* __result_obj__178;
void* __right_value170 = (void*)0;
char* __result_obj__179;
void* __right_value171 = (void*)0;
char* __result_obj__180;
    if(    path==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    path2_516=(char*)come_increment_ref_count(xbasename(path));
    p_517=path2_516+strlen(path2_516);
    while(    p_517>=path2_516    ) {
        if(        *p_517==46        ) {
            break;
        }
        else {
            p_517--;
        }
    }
    if(    p_517<path2_516    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(path2_516))));
        (path2_516 = come_decrement_ref_count(path2_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value170=charp_substring(path2_516,0,p_517-path2_516))));
        (path2_516 = come_decrement_ref_count(path2_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
    (path2_516 = come_decrement_ref_count(path2_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* xextname(char* path){
void* __right_value172 = (void*)0;
char* __result_obj__181;
char* p_518;
void* __right_value173 = (void*)0;
char* __result_obj__182;
void* __right_value174 = (void*)0;
char* __result_obj__183;
void* __right_value175 = (void*)0;
char* __result_obj__184;
    if(    path==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    p_518=path+strlen(path);
    while(    p_518>=path    ) {
        if(        *p_518==46        ) {
            break;
        }
        else {
            p_518--;
        }
    }
    if(    p_518<path    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(path))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    else {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(p_518+1))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(""))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* bool_to_string(_Bool self){
void* __right_value176 = (void*)0;
char* __result_obj__185;
void* __right_value177 = (void*)0;
char* __result_obj__186;
    if(    self    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string("true"))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    else {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string("false"))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
}

char* _Bool_to_string(_Bool self){
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

char* char_to_string(char self){
void* __right_value180 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value180=xsprintf("%c",self))));
    (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

char* short_to_string(short self){
void* __right_value181 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value181=xsprintf("%d",self))));
    (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* int_to_string(int self){
void* __right_value182 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value182=xsprintf("%d",self))));
    (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* long_to_string(long self){
void* __right_value183 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value183=xsprintf("%ld",self))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__192;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value184 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value184=xsprintf("%ld",self))));
    (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* float_to_string(float self){
void* __right_value185 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value185=xsprintf("%f",self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__194;
}

char* double_to_string(double self){
void* __right_value186 = (void*)0;
char* __result_obj__195;
    __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value186=xsprintf("%lf",self))));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* string_to_string(char* self){
void* __right_value187 = (void*)0;
char* __result_obj__196;
void* __right_value188 = (void*)0;
char* __result_obj__197;
    if(    self==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string(""))));
        (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string(self))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* charp_to_string(char* self){
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
    puts(self);
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string(self))));
    (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
}

char* charp_print(char* self){
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
    printf("%s",self);
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string(self))));
    (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_printf(char* self, ...){
void* __right_value195 = (void*)0;
char* __result_obj__204;
char* msg2_519;
va_list args_520;
void* __right_value196 = (void*)0;
char* __result_obj__205;
msg2_519 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string(""))));
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    __builtin_va_start(args_520,self);
    vasprintf(&msg2_519,self,args_520);
    __builtin_va_end(args_520);
    printf("%s",msg2_519);
    free(msg2_519);
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string(self))));
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_521;
    for(    i_521=0    ;    i_521<self    ;    i_521++    ){
        block(parent,i_521);
    }
}

