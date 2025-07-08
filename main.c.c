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

struct file
{
    unsigned int inum;
    struct dinode din;
    unsigned int off;
    int used;
    struct spipe* pipe;
};

extern struct file file_table[16];
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
  0xaa, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xcd, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb4, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4,
  0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc, 0x83, 0x37,
  0x84, 0xfd, 0x03, 0x37, 0x04, 0xfd, 0x3e, 0x85, 0xba, 0x85, 0x93, 0x08,
  0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c,
  0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x90, 0x04,
  0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61, 0x82, 0x80,
  0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f,
  0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0x23, 0x04, 0xf4, 0xfe, 0xa3, 0x04,
  0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe, 0x05, 0x46, 0xbe, 0x85, 0x05, 0x45,
  0xef, 0xf0, 0x1f, 0xec, 0x01, 0x00, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
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
  0x00, 0x00, 0x93, 0x87, 0xa7, 0x21, 0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87,
  0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x20, 0xba, 0x97,
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
  0x00, 0x00, 0x93, 0x87, 0xa7, 0x16, 0x23, 0x3c, 0xf4, 0xfc, 0x21, 0xa8,
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
  0x01, 0x00, 0xe2, 0x60, 0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x79, 0x71,
  0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18, 0x93, 0x07, 0x04, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0xff, 0x91, 0x83, 0x27, 0x44, 0xfe, 0x0d, 0x46, 0x97, 0x05,
  0x00, 0x00, 0x93, 0x85, 0x65, 0x0e, 0x3e, 0x85, 0xef, 0xf0, 0xdf, 0x81,
  0x83, 0x27, 0x04, 0xfe, 0x3e, 0x87, 0x93, 0x07, 0x84, 0xfd, 0x0d, 0x46,
  0xbe, 0x85, 0x3a, 0x85, 0xef, 0xf0, 0xbf, 0x84, 0x93, 0x07, 0x84, 0xfd,
  0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xf8, 0xa9, 0x47, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0x44, 0xfe, 0x3e, 0x87, 0x83, 0x27, 0xc4, 0xfe, 0xbe, 0x85,
  0x3a, 0x85, 0xef, 0xf0, 0xdf, 0x89, 0x83, 0x27, 0x44, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0x86, 0x83, 0x27, 0xc4, 0xfe, 0x0d, 0x46, 0x97, 0x05,
  0x00, 0x00, 0x93, 0x85, 0xa5, 0x09, 0x3e, 0x85, 0xef, 0xf0, 0x8f, 0xfc,
  0x83, 0x27, 0x04, 0xfe, 0x3e, 0x87, 0x93, 0x07, 0x84, 0xfd, 0x0d, 0x46,
  0xbe, 0x85, 0x3a, 0x85, 0xef, 0xf0, 0x6f, 0xff, 0x93, 0x07, 0x84, 0xfd,
  0x3e, 0x85, 0xef, 0xf0, 0x3f, 0xf3, 0x01, 0xa0, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00, 0xbe, 0xfe, 0xff, 0xff,
  0x02, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff,
  0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff,
  0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff,
  0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff,
  0x46, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff,
  0x76, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff,
  0xe6, 0xfe, 0xff, 0xff, 0xe6, 0xfe, 0xff, 0xff, 0x24, 0xfe, 0xff, 0xff,
  0x41, 0x42, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x45, 0x46, 0x00,
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
  0x03, 0x00, 0x02, 0x00, 0x48, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0x9e, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xd6, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x48, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0xb4, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x70, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x4a, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb8, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xaa, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x36, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb4, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb8, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x4c, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x68, 0x65,
  0x6c, 0x6c, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x72, 0x65, 0x61, 0x64, 0x00, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x00, 0x64,
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
  0x00, 0x00, 0x00, 0x00, 0x5c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x48, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb4, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x98, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x0d, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int shell_elf_len=4056;
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
int is_pipe(int fd);
void pipe_open(int* fd1, int* fd2);
int piperead(int fd, char* addr, int n);
int pipewrite(int fd, char* addr, int n);
void fs_dup2(unsigned int oldfd, unsigned int newfd);
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
int Sys_dup2();
int Sys_pipe();
int Sys_read();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX305, unsigned long  int anonymous_var_nameX306, unsigned long  int anonymous_var_nameX307, unsigned long  long anonymous_var_nameX308);
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
static inline long pipe(int* pip){
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
unsigned long  long x_118;
memset(&x_118, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_118));
    return x_118;
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
unsigned long  long x_271;
memset(&x_271, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_271));
    return x_271;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_272;
memset(&sp_val_272, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_272): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_272;
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
        pte_26=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_25))))&511)];
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
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
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
unsigned long  long addr_38;
int i_39;
unsigned long  long va_40;
unsigned long  long pa_41;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_38=2147483648UL    ;    addr_38<2164260864UL    ;    addr_38+=4096    ){
        mappages(kernel_pagetable,addr_38,4096,addr_38,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_39=0    ;    i_39<8    ;    i_39++    ){
        va_40=268439552UL+i_39*4096UL;
        pa_41=va_40;
        mappages(kernel_pagetable,va_40,4096UL,pa_41,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_42;
void* __result_obj__9;
void* __result_obj__10;
void* __result_obj__11;
unsigned long  long pa_43;
void* __result_obj__12;
    pte_42=walk(pagetable,va,0);
    if(    pte_42==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_42&(1L<<0))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_42&(1L<<4))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    pa_43=(((*pte_42)>>10)<<12);
    __result_obj__12 = (void*)(pa_43+(va&(4096-1)));
    return __result_obj__12;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_44;
unsigned long  long off_45;
char* pa_46;
unsigned long  long n_47;
pa_46 = (void*)0;
    va0_44=(((dstva))&~(4096-1));
    off_45=dstva-va0_44;
    while(    len>0    ) {
        if(        (pa_46=walkaddr(pagetable,va0_44))==0        ) {
            return -1;
        }
        n_47=4096-off_45;
        if(        n_47>len        ) {
            n_47=len;
        }
        memcpy(pa_46+off_45,src,n_47);
        len-=n_47;
        src+=n_47;
        va0_44+=4096;
        off_45=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_48;
unsigned long  long va0_49;
unsigned long  long pa0_50;
memset(&n_48, 0, sizeof(unsigned long  long));
memset(&va0_49, 0, sizeof(unsigned long  long));
memset(&pa0_50, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_49=(((srcva))&~(4096-1));
        pa0_50=(unsigned long  long)walkaddr(pagetable,va0_49);
        if(        pa0_50==0        ) {
            return -1;
        }
        n_48=4096-(srcva-va0_49);
        if(        n_48>len        ) {
            n_48=len;
        }
        memmove(dst,(void*)(pa0_50+(srcva-va0_49)),n_48);
        len-=n_48;
        dst+=n_48;
        srcva=va0_49+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_51;
unsigned long  long va0_52;
unsigned long  long pa0_53;
int got_null_54;
char* dst2_55;
char* p_56;
memset(&n_51, 0, sizeof(unsigned long  long));
memset(&va0_52, 0, sizeof(unsigned long  long));
memset(&pa0_53, 0, sizeof(unsigned long  long));
    got_null_54=0;
    dst2_55=dst;
    while(    got_null_54==0&&max>0    ) {
        va0_52=(((srcva))&~(4096-1));
        pa0_53=(unsigned long  long)walkaddr(pagetable,va0_52);
        if(        pa0_53==0        ) {
            return -1;
        }
        n_51=4096-(srcva-va0_52);
        if(        n_51>max        ) {
            n_51=max;
        }
        p_56=(char*)(pa0_53+(srcva-va0_52));
        while(        n_51>0        ) {
            if(            *p_56==0            ) {
                *dst2_55=0;
                got_null_54=dst2_55-dst;
                break;
            }
            else {
                *dst2_55=*p_56;
            }
            --n_51;
            --max;
            p_56++;
            dst2_55++;
        }
        srcva=va0_52+4096;
    }
    if(    got_null_54    ) {
        dst2_55[got_null_54]=0;
        return got_null_54;
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
struct proc* result_57;
unsigned long  long* pagetable_58;
struct elfhdr* eh_59;
struct proghdr* ph_60;
unsigned long  long size_61;
unsigned long  long va_62;
int i_63;
void* pa_64;
void* __right_value1 = (void*)0;
struct proc* parent_65;
unsigned long  long parent_current_72;
unsigned long  long parent_stack_73;
unsigned long  long offset_74;
char* src_75;
char* pa_76;
char* pa_77;
    result_57=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 772, "struct proc*"));
    result_57->program=hello_elf;
    pagetable_58=(unsigned long  long*)kalloc();
    memset(pagetable_58,0,4096);
    setting_user_pagetable(result_57,pagetable_58);
    result_57->pagetable=pagetable_58;
    eh_59=(struct elfhdr*)hello_elf;
    if(    eh_59->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_60=(struct proghdr*)(hello_elf+eh_59->phoff);
    size_61=ph_60->filesz;
    result_57->vaddr=(((ph_60->vaddr))&~(4096-1));
    va_62=0;
    for(    i_63=0    ;    i_63<eh_59->phnum    ;    i_63++,ph_60++    ){
        if(        ph_60->type!=1        ) {
            continue;
        }
        for(        va_62=(((ph_60->vaddr))&~(4096-1))        ;        va_62<ph_60->vaddr+ph_60->memsz        ;        va_62+=4096        ){
            pa_64=kalloc();
            if(            !pa_64            ) {
                panic("kalloc");
            }
            memset(pa_64,0,4096);
            mappages(result_57->pagetable,va_62,4096,(unsigned long  long)pa_64,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_57->pagetable,ph_60->vaddr,hello_elf+ph_60->off,ph_60->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_65=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_72=parent_65->context.sp;
        parent_stack_73=(unsigned long  long)parent_65->stack_top;
        offset_74=parent_current_72-parent_stack_73;
        src_75=walkaddr(parent_65->pagetable,parent_stack_73);
        pa_76=kalloc();
        if(        !pa_76        ) {
            panic("fork sp");
        }
        memmove(pa_76,(void*)src_75,4096);
        mappages(result_57->pagetable,va_62,4096,(unsigned long  long)pa_76,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_57->stack=(char*)va_62+4096;
        result_57->stack_top=(char*)va_62;
        result_57->context.sp=parent_65->context.sp;
    }
    else {
        pa_77=kalloc();
        if(        !pa_77        ) {
            panic("kalloc");
        }
        memset(pa_77,0,4096);
        mappages(result_57->pagetable,va_62,4096,(unsigned long  long)pa_77,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_57->stack=(char*)va_62+4096;
        result_57->stack_top=(char*)va_62;
        result_57->context.sp=va_62+4096;
    }
    result_57->context.mepc=eh_59->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_57));
    come_call_finalizer(proc_finalize, result_57, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_66;
int i_67;
struct proc* __result_obj__13;
struct proc* default_value_68;
struct proc* __result_obj__14;
default_value_68 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_66=self->head;
    i_67=0;
    while(    it_66!=((void*)0)    ) {
        if(        position==i_67        ) {
            __result_obj__13 = (struct proc*)come_increment_ref_count(it_66->item);
            come_call_finalizer(proc_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
        it_66=it_66->next;
        i_67++;
    }
    memset(&default_value_68,0,sizeof(struct proc*));
    __result_obj__14 = (struct proc*)come_increment_ref_count(default_value_68);
    come_call_finalizer(proc_finalize, default_value_68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static void proc_finalize(struct proc* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_69;
int i_70;
struct proc* __result_obj__15;
struct proc* default_value_71;
struct proc* __result_obj__16;
default_value_71 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_69=self->head;
    i_70=0;
    while(    it_69!=((void*)0)    ) {
        if(        position==i_70        ) {
            __result_obj__15 = (struct proc*)come_increment_ref_count(it_69->item);
            come_call_finalizer(proc_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__15;
        }
        it_69=it_69->next;
        i_70++;
    }
    memset(&default_value_71,0,sizeof(struct proc*));
    __result_obj__16 = (struct proc*)come_increment_ref_count(default_value_71);
    come_call_finalizer(proc_finalize, default_value_71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value2 = (void*)0;
struct list_item$1proc$ph* litem_78;
struct proc* __dec_obj1;
void* __right_value3 = (void*)0;
struct list_item$1proc$ph* litem_79;
struct proc* __dec_obj2;
void* __right_value4 = (void*)0;
struct list_item$1proc$ph* litem_80;
struct proc* __dec_obj3;
struct list$1proc$ph* __result_obj__17;
    if(    self->len==0    ) {
        litem_78=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value2=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_78->prev=((void*)0);
        litem_78->next=((void*)0);
        __dec_obj1=litem_78->item,
        litem_78->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_78;
        self->head=litem_78;
    }
    else if(    self->len==1    ) {
        litem_79=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value3=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_79->prev=self->head;
        litem_79->next=((void*)0);
        __dec_obj2=litem_79->item,
        litem_79->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_79;
        self->head->next=litem_79;
    }
    else {
        litem_80=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value4=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_80->prev=self->tail;
        litem_80->next=((void*)0);
        __dec_obj3=litem_80->item,
        litem_80->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_80;
        self->tail=litem_80;
    }
    self->len++;
    __result_obj__17 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__17;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_81;
unsigned long  long* __result_obj__18;
unsigned long  long* __result_obj__19;
pagetable_81 = (void*)0;
    pagetable_81=(unsigned long  long*)kalloc();
    if(    pagetable_81==0    ) {
        __result_obj__18 = (unsigned long  long*)0;
        return __result_obj__18;
    }
    memset(pagetable_81,0,4096);
    __result_obj__19 = pagetable_81;
    return __result_obj__19;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__82;
unsigned long  long* __result_obj__20;
unsigned long  long addr_83;
unsigned long  long* pte_84;
unsigned long  long pa_85;
unsigned int flags_86;
char* mem_87;
unsigned long  long* __result_obj__21;
new__82 = (void*)0;
    new__82=uvmcreate();
    if(    new__82==0    ) {
        __result_obj__20 = (unsigned long  long*)0;
        return __result_obj__20;
    }
    for(    addr_83=0    ;    addr_83<sz    ;    addr_83+=4096    ){
        pte_84=walk(old,addr_83,0);
        if(        !pte_84||!(*pte_84&(1L<<0))        ) {
            continue;
        }
        pa_85=(((*pte_84)>>10)<<12);
        flags_86=((*pte_84)&1023);
        mem_87=kalloc();
        if(        mem_87==0        ) {
            panic("coypuvm");
        }
        memmove(mem_87,(char*)pa_85,4096);
        if(        mappages(new__82,addr_83,4096,((((unsigned long  long)mem_87)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_87);
            panic("copyuvm");
        }
    }
    __result_obj__21 = new__82;
    return __result_obj__21;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_88;
unsigned long  long pte_89;
unsigned long  long pa_90;
unsigned long  long* child_91;
    for(    i_88=0    ;    i_88<512    ;    i_88++    ){
        pte_89=pagetable[i_88];
        if(        !(pte_89&(1L<<0))        ) {
            continue;
        }
        pa_90=(((pte_89)>>10)<<12);
        if(        pte_89&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_90);
            }
        }
        else if(        level>0        ) {
            child_91=(unsigned long  long*)pa_90;
            free_pagetable(child_91,level-1);
            kfree(child_91);
        }
    }
}

void exec_prog(char* hello_elf){
void* __right_value5 = (void*)0;
struct proc* p_92;
void* __right_value6 = (void*)0;
struct proc* result_93;
unsigned long  long* pagetable_110;
struct elfhdr* eh_111;
struct proghdr* ph_112;
unsigned long  long size_113;
unsigned long  long va_114;
int i_115;
void* pa_116;
char* pa_117;
    p_92=((struct proc*)(__right_value5=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    free_proc(p_92);
    result_93=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 934, "struct proc*"));
    result_93->context=p_92->context;
    list$1proc$ph_remove_by_pointer(gProc,p_92);
    pagetable_110=(unsigned long  long*)kalloc();
    memset(pagetable_110,0,4096);
    setting_user_pagetable(result_93,pagetable_110);
    result_93->pagetable=pagetable_110;
    eh_111=(struct elfhdr*)hello_elf;
    if(    eh_111->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_112=(struct proghdr*)(hello_elf+eh_111->phoff);
    size_113=ph_112->filesz;
    result_93->vaddr=(((ph_112->vaddr))&~(4096-1));
    va_114=0;
    for(    i_115=0    ;    i_115<eh_111->phnum    ;    i_115++,ph_112++    ){
        if(        ph_112->type!=1        ) {
            continue;
        }
        for(        va_114=(((ph_112->vaddr))&~(4096-1))        ;        va_114<ph_112->vaddr+ph_112->memsz        ;        va_114+=4096        ){
            pa_116=kalloc();
            if(            !pa_116            ) {
                panic("kalloc");
            }
            memset(pa_116,0,4096);
            mappages(result_93->pagetable,va_114,4096,(unsigned long  long)pa_116,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_93->pagetable,ph_112->vaddr,hello_elf+ph_112->off,ph_112->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_117=kalloc();
    if(    !pa_117    ) {
        panic("kalloc");
    }
    memset(pa_117,0,4096);
    mappages(result_93->pagetable,va_114,4096,(unsigned long  long)pa_117,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_93->stack=(char*)va_114+4096;
    result_93->stack_top=(char*)va_114;
    result_93->context.sp=va_114+4096;
    result_93->context.mepc=eh_111->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_93));
    come_call_finalizer(proc_finalize, result_93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_94;
struct list_item$1proc$ph* it_95;
struct list$1proc$ph* __result_obj__25;
    it2_94=0;
    it_95=self->head;
    while(    it_95!=((void*)0)    ) {
        if(        it_95->item==item        ) {
            list$1proc$ph_delete(self,it2_94,it2_94+1);
            break;
        }
        it2_94++;
        it_95=it_95->next;
    }
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_96;
struct list$1proc$ph* __result_obj__22;
struct list_item$1proc$ph* it_99;
int i_100;
struct list_item$1proc$ph* prev_it_101;
struct list_item$1proc$ph* it_102;
int i_103;
struct list_item$1proc$ph* prev_it_104;
struct list_item$1proc$ph* it_105;
struct list_item$1proc$ph* head_prev_it_106;
struct list_item$1proc$ph* tail_it_107;
int i_108;
struct list_item$1proc$ph* prev_it_109;
struct list$1proc$ph* __result_obj__24;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_96=tail;
        tail=head;
        head=tmp_96;
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
        it_99=self->head;
        i_100=0;
        while(        it_99!=((void*)0)        ) {
            if(            i_100<tail            ) {
                prev_it_101=it_99;
                it_99=it_99->next;
                i_100++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_100==tail            ) {
                self->head=it_99;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_99=it_99->next;
                i_100++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_102=self->head;
        i_103=0;
        while(        it_102!=((void*)0)        ) {
            if(            i_103==head            ) {
                self->tail=it_102->prev;
                self->tail->next=((void*)0);
            }
            if(            i_103>=head            ) {
                prev_it_104=it_102;
                it_102=it_102->next;
                i_103++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_102=it_102->next;
                i_103++;
            }
        }
    }
    else {
        it_105=self->head;
        head_prev_it_106=((void*)0);
        tail_it_107=((void*)0);
        i_108=0;
        while(        it_105!=((void*)0)        ) {
            if(            i_108==head            ) {
                head_prev_it_106=it_105->prev;
            }
            if(            i_108==tail            ) {
                tail_it_107=it_105;
            }
            if(            i_108>=head&&i_108<tail            ) {
                prev_it_109=it_105;
                it_105=it_105->next;
                i_108++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_105=it_105->next;
                i_108++;
            }
        }
        if(        head_prev_it_106!=((void*)0)        ) {
            head_prev_it_106->next=tail_it_107;
        }
        if(        tail_it_107!=((void*)0)        ) {
            tail_it_107->prev=head_prev_it_106;
        }
    }
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_97;
struct list_item$1proc$ph* prev_it_98;
struct list$1proc$ph* __result_obj__23;
    it_97=self->head;
    while(    it_97!=((void*)0)    ) {
        prev_it_98=it_97;
        it_97=it_97->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
unsigned long  int x_119;
memset(&x_119, 0, sizeof(unsigned long  int));
    x_119=r_sie();
    x_119|=(1UL<<5);
    w_sie(x_119);
    x_119=r_sstatus();
    x_119|=(1UL<<1);
    w_sstatus(x_119);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_120;
    next_120=r_time()+10000UL;
    w_stimecmp(next_120);
}

void timer_handler(){
void* __right_value7 = (void*)0;
struct proc* p_121;
struct context* tf_122;
void* __right_value8 = (void*)0;
struct proc* old_123;
void* __right_value9 = (void*)0;
struct proc* new__124;
unsigned long  long a0_125;
    disable_timer_interrupts();
    p_121=((struct proc*)(__right_value7=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value7, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_122=(struct context*)TRAPFRAME;
    p_121->context=*tf_122;
    timer_reset();
    old_123=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__124=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__124->zombie    ) {
        gActiveProc--;
    }
    if(    new__124!=old_123&&new__124->zombie==0    ) {
        user_sp=new__124->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__124->pagetable)>>12));
        a0_125=new__124->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_125));
        swtch(&new__124->context);
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
struct context* trapframe_126;
unsigned long  int arg0_127;
unsigned long  int arg1_128;
unsigned long  int arg2_129;
unsigned long  int arg3_130;
unsigned long  int arg4_131;
unsigned long  int arg5_132;
unsigned long  int arg6_133;
unsigned long  int arg_syscall_no_134;
int fd_135;
unsigned long  long user_va_137;
int len_138;
void* __right_value10 = (void*)0;
struct proc* p_139;
int ret_140;
int i_141;
    trapframe_126=(struct context*)TRAPFRAME;
    arg0_127=trapframe_126->a0;
    arg1_128=trapframe_126->a1;
    arg2_129=trapframe_126->a2;
    arg3_130=trapframe_126->a3;
    arg4_131=trapframe_126->a4;
    arg5_132=trapframe_126->a5;
    arg6_133=trapframe_126->a6;
    arg_syscall_no_134=trapframe_126->a7;
    fd_135=arg0_127;
    char kernel_buf_136[256];
    memset(&kernel_buf_136, 0, sizeof(char)    *(256)    );
    user_va_137=arg1_128;
    len_138=arg2_129;
    memset(kernel_buf_136,0,256);
    p_139=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_140=copyin(p_139->pagetable,kernel_buf_136,user_va_137,len_138);
    if(    ret_140<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_135)    ) {
        pipewrite(fd_135,kernel_buf_136,len_138);
    }
    else if(    fd_135==1    ) {
        for(        i_141=0        ;        i_141<len_138        ;        i_141++        ){
            putchar(kernel_buf_136[i_141]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context* trapframe_142;
unsigned long  int arg0_143;
unsigned long  int arg1_144;
unsigned long  int arg2_145;
unsigned long  int arg3_146;
unsigned long  int arg4_147;
unsigned long  int arg5_148;
unsigned long  int arg6_149;
unsigned long  int arg_syscall_no_150;
void* __right_value11 = (void*)0;
struct proc* p_151;
    trapframe_142=(struct context*)TRAPFRAME;
    arg0_143=trapframe_142->a0;
    arg1_144=trapframe_142->a1;
    arg2_145=trapframe_142->a2;
    arg3_146=trapframe_142->a3;
    arg4_147=trapframe_142->a4;
    arg5_148=trapframe_142->a5;
    arg6_149=trapframe_142->a6;
    arg_syscall_no_150=trapframe_142->a7;
    p_151=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_151->xstatus=arg0_143;
    p_151->zombie=1;
    timer_handler();
    return 0;
}

int Sys_wait(){
struct context* trapframe_152;
unsigned long  int arg0_153;
unsigned long  int arg1_154;
unsigned long  int arg2_155;
unsigned long  int arg3_156;
unsigned long  int arg4_157;
unsigned long  int arg5_158;
unsigned long  int arg6_159;
unsigned long  int arg_syscall_no_160;
int* status_va_161;
void* __right_value12 = (void*)0;
struct proc* p_162;
int exit_status_163;
int child_pid_164;
int n_165;
struct list$1proc$ph* o2_saved_166;
struct proc* it_169;
    trapframe_152=(struct context*)TRAPFRAME;
    arg0_153=trapframe_152->a0;
    arg1_154=trapframe_152->a1;
    arg2_155=trapframe_152->a2;
    arg3_156=trapframe_152->a3;
    arg4_157=trapframe_152->a4;
    arg5_158=trapframe_152->a5;
    arg6_159=trapframe_152->a6;
    arg_syscall_no_160=trapframe_152->a7;
    status_va_161=(int*)arg0_153;
    p_162=((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_163=0;
    child_pid_164=-1;
    while(    child_pid_164==-1    ) {
        timer_handler();
        n_165=0;
        for(        o2_saved_166=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_169=list$1proc$ph_begin((o2_saved_166))        ;        !list$1proc$ph_end((o2_saved_166))        ;        it_169=list$1proc$ph_next((o2_saved_166))        ){
            if(            it_169->zombie            ) {
                free_proc(it_169);
                exit_status_163=it_169->xstatus;
                child_pid_164=n_165;
                list$1proc$ph_remove_by_pointer(gProc,it_169);
                break;
            }
            n_165++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_162->pagetable,(unsigned long  long)status_va_161,(void*)&exit_status_163,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_164;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_167;
struct proc* __result_obj__26;
struct proc* __result_obj__27;
struct proc* result_168;
struct proc* __result_obj__28;
result_167 = (void*)0;
result_168 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_167,0,sizeof(struct proc*));
        __result_obj__26 = result_167;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_168,0,sizeof(struct proc*));
    __result_obj__28 = result_168;
    return __result_obj__28;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_170;
struct proc* __result_obj__29;
struct proc* __result_obj__30;
struct proc* result_171;
struct proc* __result_obj__31;
result_170 = (void*)0;
result_171 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_170,0,sizeof(struct proc*));
        __result_obj__29 = result_170;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_171,0,sizeof(struct proc*));
    __result_obj__31 = result_171;
    return __result_obj__31;
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_172;
struct list_item$1proc$ph* prev_it_173;
    it_172=self->head;
    while(    it_172!=((void*)0)    ) {
        prev_it_173=it_172;
        it_172=it_172->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context* trapframe_174;
unsigned long  int arg0_175;
unsigned long  int arg1_176;
unsigned long  int arg2_177;
unsigned long  int arg3_178;
unsigned long  int arg4_179;
unsigned long  int arg5_180;
unsigned long  int arg6_181;
unsigned long  int arg_syscall_no_182;
unsigned long  long user_va_184;
void* __right_value13 = (void*)0;
struct proc* p_185;
int result_186;
    trapframe_174=(struct context*)TRAPFRAME;
    arg0_175=trapframe_174->a0;
    arg1_176=trapframe_174->a1;
    arg2_177=trapframe_174->a2;
    arg3_178=trapframe_174->a3;
    arg4_179=trapframe_174->a4;
    arg5_180=trapframe_174->a5;
    arg6_181=trapframe_174->a6;
    arg_syscall_no_182=trapframe_174->a7;
    char kernel_buf_183[256];
    memset(&kernel_buf_183, 0, sizeof(char)    *(256)    );
    user_va_184=arg0_175;
    p_185=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_185->pagetable,kernel_buf_183,user_va_184,256);
    result_186=fs_open(kernel_buf_183);
    return result_186;
}

int Sys_fork(){
struct context* trapframe_187;
unsigned long  int arg0_188;
unsigned long  int arg1_189;
unsigned long  int arg2_190;
unsigned long  int arg3_191;
unsigned long  int arg4_192;
unsigned long  int arg5_193;
unsigned long  int arg6_194;
unsigned long  int arg_syscall_no_195;
void* __right_value14 = (void*)0;
struct proc* p_196;
int fork_flag_197;
void* __right_value15 = (void*)0;
struct proc* child_198;
unsigned long  long sp_199;
int result_200;
memset(&fork_flag_197, 0, sizeof(int));
    trapframe_187=(struct context*)TRAPFRAME;
    arg0_188=trapframe_187->a0;
    arg1_189=trapframe_187->a1;
    arg2_190=trapframe_187->a2;
    arg3_191=trapframe_187->a3;
    arg4_192=trapframe_187->a4;
    arg5_193=trapframe_187->a5;
    arg6_194=trapframe_187->a6;
    arg_syscall_no_195=trapframe_187->a7;
    p_196=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_196->program,fork_flag_197=1);
    child_198=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_199=child_198->context.sp;
    child_198->context=*trapframe_187;
    child_198->context.mepc=child_198->context.mepc+4;
    child_198->context.sp=sp_199;
    child_198->context.a0=0;
    result_200=list$1proc$ph_length(gProc)-1;
    return result_200;
}

int Sys_execv(){
struct context* trapframe_201;
unsigned long  int arg0_202;
unsigned long  int arg1_203;
unsigned long  int arg2_204;
unsigned long  int arg3_205;
unsigned long  int arg4_206;
unsigned long  int arg5_207;
unsigned long  int arg6_208;
unsigned long  int arg_syscall_no_209;
int argc_210;
unsigned long  long user_va_212;
void* __right_value16 = (void*)0;
struct proc* p_213;
char* path_214;
int fd_216;
int ret_217;
void* __right_value17 = (void*)0;
struct proc* result_218;
    trapframe_201=(struct context*)TRAPFRAME;
    arg0_202=trapframe_201->a0;
    arg1_203=trapframe_201->a1;
    arg2_204=trapframe_201->a2;
    arg3_205=trapframe_201->a3;
    arg4_206=trapframe_201->a4;
    arg5_207=trapframe_201->a5;
    arg6_208=trapframe_201->a6;
    arg_syscall_no_209=trapframe_201->a7;
    argc_210=arg2_204;
    char kernel_buf_211[256];
    memset(&kernel_buf_211, 0, sizeof(char)    *(256)    );
    user_va_212=arg0_202;
    p_213=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_213->pagetable,kernel_buf_211,user_va_212,256);
    path_214=kernel_buf_211;
    char hello_elf_215[4096];
    memset(&hello_elf_215, 0, sizeof(char)    *(4096)    );
    fd_216=fs_open(path_214);
    ret_217=fs_read(fd_216,hello_elf_215,4096);
    if(    ret_217<0    ) {
        trapframe_201->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_215);
    result_218=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_201->mepc=result_218->context.mepc+4;
    trapframe_201->sp=result_218->context.sp;
    return 0;
}

int Sys_dup2(){
struct context* trapframe_219;
unsigned long  int arg0_220;
unsigned long  int arg1_221;
unsigned long  int arg2_222;
unsigned long  int arg3_223;
unsigned long  int arg4_224;
unsigned long  int arg5_225;
unsigned long  int arg6_226;
unsigned long  int arg_syscall_no_227;
unsigned long  long oldfd_228;
unsigned long  long newfd_229;
    trapframe_219=(struct context*)TRAPFRAME;
    arg0_220=trapframe_219->a0;
    arg1_221=trapframe_219->a1;
    arg2_222=trapframe_219->a2;
    arg3_223=trapframe_219->a3;
    arg4_224=trapframe_219->a4;
    arg5_225=trapframe_219->a5;
    arg6_226=trapframe_219->a6;
    arg_syscall_no_227=trapframe_219->a7;
    oldfd_228=arg0_220;
    newfd_229=arg1_221;
    fs_dup2(oldfd_228,newfd_229);
    return 0;
}

int Sys_pipe(){
struct context* trapframe_230;
unsigned long  int arg0_231;
unsigned long  int arg1_232;
unsigned long  int arg2_233;
unsigned long  int arg3_234;
unsigned long  int arg4_235;
unsigned long  int arg5_236;
unsigned long  int arg6_237;
unsigned long  int arg_syscall_no_238;
char* kernel_buf_239;
unsigned long  long user_va_240;
int fd0_241;
int fd1_242;
void* __right_value18 = (void*)0;
struct proc* p_243;
kernel_buf_239 = (void*)0;
memset(&fd0_241, 0, sizeof(int));
memset(&fd1_242, 0, sizeof(int));
    trapframe_230=(struct context*)TRAPFRAME;
    arg0_231=trapframe_230->a0;
    arg1_232=trapframe_230->a1;
    arg2_233=trapframe_230->a2;
    arg3_234=trapframe_230->a3;
    arg4_235=trapframe_230->a4;
    arg5_236=trapframe_230->a5;
    arg6_237=trapframe_230->a6;
    arg_syscall_no_238=trapframe_230->a7;
    user_va_240=arg0_231;
    pipe_open(&fd0_241,&fd1_242);
    p_243=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_243->pagetable,(unsigned long  long)user_va_240,(char*)&fd0_241,sizeof(int))<0    ) {
        panic("copyout");
    }
    if(    copyout(p_243->pagetable,(unsigned long  long)user_va_240+4,(char*)&fd1_242,sizeof(int))<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context* trapframe_244;
unsigned long  int arg0_245;
unsigned long  int arg1_246;
unsigned long  int arg2_247;
unsigned long  int arg3_248;
unsigned long  int arg4_249;
unsigned long  int arg5_250;
unsigned long  int arg6_251;
unsigned long  int arg_syscall_no_252;
int fd_253;
unsigned long  long destva_254;
unsigned long  int n_255;
int ret_257;
void* __right_value19 = (void*)0;
struct proc* p_258;
memset(&ret_257, 0, sizeof(int));
    trapframe_244=(struct context*)TRAPFRAME;
    arg0_245=trapframe_244->a0;
    arg1_246=trapframe_244->a1;
    arg2_247=trapframe_244->a2;
    arg3_248=trapframe_244->a3;
    arg4_249=trapframe_244->a4;
    arg5_250=trapframe_244->a5;
    arg6_251=trapframe_244->a6;
    arg_syscall_no_252=trapframe_244->a7;
    fd_253=arg0_245;
    destva_254=arg1_246;
    n_255=arg2_247;
    char kernel_buf_256[256];
    memset(&kernel_buf_256, 0, sizeof(char)    *(256)    );
    if(    fd_253==0    ) {
        ret_257=uart_readn(kernel_buf_256,n_255);
    }
    else if(    is_pipe(fd_253)    ) {
        ret_257=piperead(fd_253,kernel_buf_256,n_255);
    }
    else {
        ret_257=fs_read(fd_253,kernel_buf_256,n_255);
        if(        ret_257<0        ) {
            trapframe_244->a0=ret_257;
            return 0;
        }
        kernel_buf_256[ret_257]=0;
    }
    p_258=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_258->pagetable,destva_254,kernel_buf_256,ret_257)<0    ) {
        panic("read: copyout failed");
    }
    return ret_257;
}

unsigned long  int syscall_handler(){
struct context* trapframe_259;
unsigned long  int arg0_260;
unsigned long  int arg1_261;
unsigned long  int arg2_262;
unsigned long  int arg3_263;
unsigned long  int arg4_264;
unsigned long  int arg5_265;
unsigned long  int arg6_266;
unsigned long  int arg_syscall_no_267;
unsigned long  long result_268;
int fd_269;
int ret_270;
    disable_timer_interrupts();
    trapframe_259=(struct context*)TRAPFRAME;
    arg0_260=trapframe_259->a0;
    arg1_261=trapframe_259->a1;
    arg2_262=trapframe_259->a2;
    arg3_263=trapframe_259->a3;
    arg4_264=trapframe_259->a4;
    arg5_265=trapframe_259->a5;
    arg6_266=trapframe_259->a6;
    arg_syscall_no_267=trapframe_259->a7;
    result_268=0;
    switch (    arg_syscall_no_267) {
        case 64:
        {
            result_268=Sys_write();
        }
        break;
        case 73:
        {
            result_268=Sys_pipe();
        }
        break;
        case 72:
        {
            result_268=Sys_dup2();
        }
        break;
        case 70:
        {
            result_268=Sys_exit();
        }
        break;
        case 71:
        {
            result_268=Sys_wait();
        }
        break;
        case 66:
        {
            result_268=Sys_open();
        }
        break;
        case 65:
        {
            result_268=Sys_read();
        }
        break;
        case 67:
        {
            fd_269=arg0_260;
            ret_270=fs_close(fd_269);
            result_268=ret_270;
        }
        break;
        case 68:
        {
            result_268=Sys_fork();
        }
        break;
        case 69:
        {
            result_268=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_259->a0=result_268;
    return result_268;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
struct list$1proc$ph* __dec_obj4;
    __dec_obj4=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2366, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_273;
struct list_item$1proc$ph* prev_it_274;
    it_273=self->head;
    while(    it_273!=((void*)0)    ) {
        prev_it_274=it_273;
        it_273=it_273->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_274, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_275;
void* __right_value22 = (void*)0;
struct proc* p_276;
unsigned long  int usersp_277;
unsigned long  long usersatp_278;
unsigned long  int entry_279;
memset(&fork_flag_275, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_275=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_276=((struct proc*)(__right_value22=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_277=(unsigned long  long)(p_276->stack);
    usersatp_278=((8L<<60)|(((unsigned long  long)p_276->pagetable)>>12));
    entry_279=p_276->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_276;
    kernel_sp=read_s_sp();
    enter_user(entry_279,usersp_277,usersatp_278,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__33;
struct mem_block* current_280;
struct mem_block* prev_281;
void* __result_obj__34;
struct mem_block* new_mem_282;
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
    current_280=free_list;
    prev_281=((void*)0);
    while(    current_280!=((void*)0)    ) {
        if(        current_280->size>=size        ) {
            if(            prev_281==((void*)0)            ) {
                free_list=current_280->next;
            }
            else {
                prev_281->next=current_280->next;
            }
            __result_obj__34 = (void*)(current_280+1);
            return __result_obj__34;
        }
        prev_281=current_280;
        current_280=current_280->next;
    }
    new_mem_282=(struct mem_block*)sbrk(size);
    if(    new_mem_282==(void*)-1    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    new_mem_282->size=size;
    new_mem_282->next=((void*)0);
    __result_obj__36 = (void*)(new_mem_282+1);
    return __result_obj__36;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_283;
void* __result_obj__37;
void* ptr_284;
void* __result_obj__38;
    total_size_283=nmemb*size;
    if(    total_size_283==0    ) {
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    ptr_284=malloc(total_size_283);
    if(    ptr_284!=((void*)0)    ) {
        memset(ptr_284,0,total_size_283);
    }
    __result_obj__38 = ptr_284;
    return __result_obj__38;
}

void free(void* ptr){
struct mem_block* block_285;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_285=(struct mem_block*)ptr-1;
    block_285->next=free_list;
    free_list=block_285;
}

char* strdup(const char* s){
char* s2_286;
unsigned long  int len_287;
char* p_288;
char* __result_obj__39;
    s2_286=s;
    len_287=strlen(s2_286)+1;
    p_288=malloc(len_287);
    if(    p_288    ) {
        memcpy(p_288,s2_286,len_287);
    }
    __result_obj__39 = p_288;
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
        const char* h_289=haystack;
        const char* n_290=needle;
        while(        *h_289&&*n_290&&(*h_289==*n_290)        ) {
            h_289++;
            n_290++;
        }
        if(        !*n_290        ) {
            __result_obj__41 = (char*)haystack;
            return __result_obj__41;
        }
    }
    __result_obj__42 = ((void*)0);
    return __result_obj__42;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_291;
int i_292;
void* __result_obj__43;
    cdst_291=(char*)dst;
    for(    i_292=0    ;    i_292<n    ;    i_292++    ){
        cdst_291[i_292]=c;
    }
    __result_obj__43 = dst;
    return __result_obj__43;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_293;
const unsigned char* s2_294;
memset(&s1_293, 0, sizeof(const unsigned char*));
memset(&s2_294, 0, sizeof(const unsigned char*));
    s1_293=v1;
    s2_294=v2;
    while(    n-->0    ) {
        if(        *s1_293!=*s2_294        ) {
            return *s1_293-*s2_294;
        }
        s1_293++,s2_294++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_295;
char* d_296;
void* __result_obj__44;
void* __result_obj__45;
s_295 = (void*)0;
d_296 = (void*)0;
    if(    n==0    ) {
        __result_obj__44 = dst;
        return __result_obj__44;
    }
    s_295=src;
    d_296=dst;
    if(    s_295<d_296&&s_295+n>d_296    ) {
        s_295+=n;
        d_296+=n;
        while(        n-->0        ) {
            *--d_296=*--s_295;
        }
    }
    else {
        while(        n-->0        ) {
            *d_296++=*s_295++;
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
char* os_297;
char* __result_obj__47;
os_297 = (void*)0;
    os_297=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__47 = os_297;
    return __result_obj__47;
}

int strlen(const char* s){
int n_298;
memset(&n_298, 0, sizeof(int));
    for(    n_298=0    ;    s[n_298]    ;    n_298++    ){
        ;
    }
    return n_298;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_299;
char* __result_obj__48;
    d_299=dest;
    while(    *d_299    ) {
        d_299++;
    }
    while(    n--&&*src    ) {
        *d_299++=*src++;
    }
    *d_299=0;
    __result_obj__48 = dest;
    return __result_obj__48;
}

char* strtok(char* s, const char* delim){
static char* next_300;
char* start_301;
char* p_302;
char* __result_obj__49;
int is_delim_304;
char* __result_obj__50;
int is_delim_306;
char* __result_obj__51;
next_300 = (void*)0;
start_301 = (void*)0;
p_302 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_300=s;
    }
    if(    next_300==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    start_301=next_300;
    while(    *start_301!=0    ) {
        const char* d_303=delim;
        is_delim_304=0;
        while(        *d_303!=0        ) {
            if(            *start_301==*d_303            ) {
                is_delim_304=1;
                break;
            }
            d_303++;
        }
        if(        !is_delim_304        ) {
            break;
        }
        start_301++;
    }
    if(    *start_301==0    ) {
        next_300=((void*)0);
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    p_302=start_301;
    while(    *p_302!=0    ) {
        const char* d_305=delim;
        is_delim_306=0;
        while(        *d_305!=0        ) {
            if(            *p_302==*d_305            ) {
                is_delim_306=1;
                break;
            }
            d_305++;
        }
        if(        is_delim_306        ) {
            break;
        }
        p_302++;
    }
    if(    *p_302==0    ) {
        next_300=((void*)0);
    }
    else {
        *p_302=0;
        next_300=p_302+1;
    }
    __result_obj__51 = start_301;
    return __result_obj__51;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_307;
int i_309;
int negative_310;
char* __result_obj__52;
int digit_311;
char* __result_obj__53;
    p_307=buf;
    char tmp_308[32];
    memset(&tmp_308, 0, sizeof(char)    *(32)    );
    i_309=0;
    negative_310=0;
    if(    base<2||base>16    ) {
        *p_307=0;
        __result_obj__52 = p_307;
        return __result_obj__52;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_310=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_311=val_%base;
        tmp_308[i_309++]=(((digit_311<10))?(48+digit_311):(97+digit_311-10));
        val_/=base;
    } while(    val_    );
    if(    negative_310    ) {
        *p_307++=45;
    }
    while(    i_309--    ) {
        *p_307++=tmp_308[i_309];
    }
    *p_307=0;
    __result_obj__53 = buf;
    return __result_obj__53;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_313;
const char* s_314;
unsigned long  int remaining_316;
s_314 = (void*)0;
    char out2_312[512];
    memset(&out2_312, 0, sizeof(char)    *(512)    );
    p_313=out2_312;
    char buf_315[32];
    memset(&buf_315, 0, sizeof(char)    *(32)    );
    remaining_316=sizeof(out2_312);
    for(    ;    *fmt&&remaining_316>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_313++=*fmt;
            remaining_316--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_315,__builtin_va_arg(ap,int),10,1);
            s_314=buf_315;
            break;
            case 117:
            itoa(buf_315,__builtin_va_arg(ap,unsigned int),10,0);
            s_314=buf_315;
            break;
            case 120:
            itoa(buf_315,__builtin_va_arg(ap,unsigned int),16,0);
            s_314=buf_315;
            break;
            case 115:
            s_314=__builtin_va_arg(ap,const char*);
            if(            !s_314            ) {
                s_314="(null)";
            }
            break;
            case 99:
            buf_315[0]=(char)__builtin_va_arg(ap,int);
            buf_315[1]=0;
            s_314=buf_315;
            break;
            case 112:
            strncpy(buf_315,"0x",32);
            itoa(buf_315+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_314=buf_315;
            break;
            case 37:
            buf_315[0]=37;
            buf_315[1]=0;
            s_314=buf_315;
            break;
            default:
            buf_315[0]=37;
            buf_315[1]=*fmt;
            buf_315[2]=0;
            s_314=buf_315;
            break;
        }
        while(        *s_314&&remaining_316>1        ) {
            *p_313++=*s_314++;
            remaining_316--;
        }
    }
    *p_313=0;
    *out=strdup(out2_312);
    return p_313-out2_312;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_317;
char* p_318;
const char* s_319;
unsigned long  int remaining_321;
memset(&ap_317, 0, sizeof(va_list));
s_319 = (void*)0;
    __builtin_va_start(ap_317,fmt);
    p_318=out;
    char buf_320[32];
    memset(&buf_320, 0, sizeof(char)    *(32)    );
    remaining_321=out_size;
    if(    remaining_321==0    ) {
        __builtin_va_end(ap_317);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_321>1            ) {
                *p_318++=*fmt;
                remaining_321--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_319=__builtin_va_arg(ap_317,const char*);
            while(            *s_319&&remaining_321>1            ) {
                *p_318++=*s_319++;
                remaining_321--;
            }
            break;
            case 100:
            itoa(buf_320,__builtin_va_arg(ap_317,int),10,0);
            s_319=buf_320;
            while(            *s_319&&remaining_321>1            ) {
                *p_318++=*s_319++;
                remaining_321--;
            }
            break;
            case 120:
            itoa(buf_320,(unsigned int)__builtin_va_arg(ap_317,int),16,1);
            s_319=buf_320;
            while(            *s_319&&remaining_321>1            ) {
                *p_318++=*s_319++;
                remaining_321--;
            }
            break;
            case 99:
            if(            remaining_321>1            ) {
                *p_318++=(char)__builtin_va_arg(ap_317,int);
                remaining_321--;
            }
            break;
            case 112:
            s_319="0x";
            while(            *s_319&&remaining_321>1            ) {
                *p_318++=*s_319++;
                remaining_321--;
            }
            itoa(buf_320,(long)__builtin_va_arg(ap_317,void*),16,1);
            s_319=buf_320;
            while(            *s_319&&remaining_321>1            ) {
                *p_318++=*s_319++;
                remaining_321--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_320,__builtin_va_arg(ap_317,long),10,1);
                s_319=buf_320;
                while(                *s_319&&remaining_321>1                ) {
                    *p_318++=*s_319++;
                    remaining_321--;
                }
            }
            break;
            default:
            if(            remaining_321>1            ) {
                *p_318++=37;
                remaining_321--;
                if(                remaining_321>1                ) {
                    *p_318++=*fmt;
                    remaining_321--;
                }
            }
            break;
        }
    }
    *p_318=0;
    __builtin_va_end(ap_317);
    return p_318-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_322;
char* p_323;
const char* s_324;
unsigned long  int remaining_326;
memset(&ap_322, 0, sizeof(va_list));
s_324 = (void*)0;
    __builtin_va_start(ap_322,fmt);
    p_323=out;
    char buf_325[32];
    memset(&buf_325, 0, sizeof(char)    *(32)    );
    remaining_326=out_size;
    if(    remaining_326==0    ) {
        __builtin_va_end(ap_322);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_326>1            ) {
                *p_323++=*fmt;
                remaining_326--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_324=__builtin_va_arg(ap_322,const char*);
            while(            *s_324&&remaining_326>1            ) {
                *p_323++=*s_324++;
                remaining_326--;
            }
            break;
            case 100:
            itoa(buf_325,__builtin_va_arg(ap_322,int),10,0);
            s_324=buf_325;
            while(            *s_324&&remaining_326>1            ) {
                *p_323++=*s_324++;
                remaining_326--;
            }
            break;
            case 120:
            itoa(buf_325,(unsigned int)__builtin_va_arg(ap_322,int),16,1);
            s_324=buf_325;
            while(            *s_324&&remaining_326>1            ) {
                *p_323++=*s_324++;
                remaining_326--;
            }
            break;
            case 99:
            if(            remaining_326>1            ) {
                *p_323++=(char)__builtin_va_arg(ap_322,int);
                remaining_326--;
            }
            break;
            case 112:
            s_324="0x";
            while(            *s_324&&remaining_326>1            ) {
                *p_323++=*s_324++;
                remaining_326--;
            }
            itoa(buf_325,(long)__builtin_va_arg(ap_322,void*),16,1);
            s_324=buf_325;
            while(            *s_324&&remaining_326>1            ) {
                *p_323++=*s_324++;
                remaining_326--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_325,__builtin_va_arg(ap_322,long),10,1);
                s_324=buf_325;
                while(                *s_324&&remaining_326>1                ) {
                    *p_323++=*s_324++;
                    remaining_326--;
                }
            }
            break;
            default:
            if(            remaining_326>1            ) {
                *p_323++=37;
                remaining_326--;
                if(                remaining_326>1                ) {
                    *p_323++=*fmt;
                    remaining_326--;
                }
            }
            break;
        }
    }
    *p_323=0;
    __builtin_va_end(ap_322);
    return p_323-out;
}

void printint(int val_, int base, int sign){
int i_328;
int negative_329;
unsigned int uval_330;
int digit_331;
memset(&uval_330, 0, sizeof(unsigned int));
    char buf_327[33];
    memset(&buf_327, 0, sizeof(char)    *(33)    );
    i_328=0;
    negative_329=0;
    if(    sign&&val_<0    ) {
        negative_329=1;
        uval_330=-val_;
    }
    else {
        uval_330=(unsigned int)val_;
    }
    if(    uval_330==0    ) {
        putchar(48);
        return;
    }
    while(    uval_330>0    ) {
        digit_331=uval_330%base;
        buf_327[i_328++]=((digit_331<10)?(48+digit_331):(97+(digit_331-10)));
        uval_330/=base;
    }
    if(    negative_329    ) {
        putchar(45);
    }
    while(    --i_328>=0    ) {
        putchar(buf_327[i_328]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_333;
int negative_334;
int digit_335;
    char buf_332[65];
    memset(&buf_332, 0, sizeof(char)    *(65)    );
    i_333=0;
    negative_334=0;
    if(    sign&&(long)val_<0    ) {
        negative_334=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_335=val_%base;
        buf_332[i_333++]=((digit_335<10)?(48+digit_335):(97+(digit_335-10)));
        val_/=base;
    }
    if(    negative_334    ) {
        putchar(45);
    }
    while(    --i_333>=0    ) {
        putchar(buf_332[i_333]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_337;
int negative_338;
int digit_339;
    char buf_336[65];
    memset(&buf_336, 0, sizeof(char)    *(65)    );
    i_337=0;
    negative_338=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_338=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_339=val_%base;
        buf_336[i_337++]=((digit_339<10)?(48+digit_339):(97+(digit_339-10)));
        val_/=base;
    }
    if(    negative_338    ) {
        putchar(45);
    }
    while(    --i_337>=0    ) {
        putchar(buf_336[i_337]);
    }
}

int printf(const char* fmt, ...){
va_list ap_340;
const char* p_341;
int lcount_342;
unsigned long  int val__343;
unsigned long  long val__344;
long val__345;
long long val__346;
int i_347;
int val__348;
unsigned int val__349;
unsigned long  int val__350;
char c_352;
memset(&ap_340, 0, sizeof(va_list));
p_341 = (void*)0;
    __builtin_va_start(ap_340,fmt);
    for(    p_341=fmt    ;    *p_341    ;    p_341++    ){
        if(        *p_341!=37        ) {
            putchar(*p_341);
            continue;
        }
        p_341++;
        if(        *p_341==108        ) {
            lcount_342=1;
            if(            *(p_341+1)==108            ) {
                lcount_342=2;
                p_341++;
            }
            p_341++;
            switch (            *p_341) {
                case 120:
                {
                    if(                    lcount_342==1                    ) {
                        val__343=__builtin_va_arg(ap_340,unsigned long  int);
                        printlong(val__343,16,0);
                    }
                    else {
                        val__344=__builtin_va_arg(ap_340,unsigned long  long);
                        printlonglong(val__344,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_342==1                    ) {
                        val__345=__builtin_va_arg(ap_340,long);
                        printlong(val__345,10,1);
                    }
                    else {
                        val__346=__builtin_va_arg(ap_340,long  long);
                        printlonglong(val__346,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_347=0                    ;                    i_347<lcount_342                    ;                    i_347++                    ){
                        putchar(108);
                    }
                    putchar(*p_341);
                    break;
                }
            }
        }
        else {
            switch (            *p_341) {
                case 100:
                {
                    val__348=__builtin_va_arg(ap_340,int);
                    printint(val__348,10,1);
                    break;
                }
                case 120:
                {
                    val__349=__builtin_va_arg(ap_340,unsigned int);
                    printint(val__349,16,0);
                    break;
                }
                case 112:
                {
                    val__350=(unsigned long  int)__builtin_va_arg(ap_340,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__350,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_351=__builtin_va_arg(ap_340,const char*);
                    if(                    !s_351                    ) {
                        s_351="(null)";
                    }
                    while(                    *s_351                    ) {
                        putchar(*s_351++);
                    }
                    break;
                }
                case 99:
                {
                    c_352=(char)__builtin_va_arg(ap_340,int);
                    putchar(c_352);
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
                    putchar(*p_341);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_340);
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
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct buffer* buf_353;
int i_354;
void* __right_value25 = (void*)0;
    buf_353=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_353,"%s %d\n",sname,sline);
    for(    i_354=gNumComeStackFrame-2    ;    i_354>=0    ;    i_354--    ){
        buffer_append_format(buf_353,"%s %d #%d\n",gComeStackFrameSName[i_354],gComeStackFrameSLine[i_354],gComeStackFrameID[i_354]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value25=buffer_to_string(buf_353))));
    (__right_value25 = come_decrement_ref_count(__right_value25, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_353, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_355;
    for(    i_355=gNumComeStackFrame-1    ;    i_355>=0    ;    i_355--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_355],gComeStackFrameSLine[i_355],gComeStackFrameID[i_355]);
    }
}

char* come_get_stackframe(){
void* __right_value26 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value26=__builtin_string(gComeStackFrameBuffer))));
    (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
int i_356;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_356=0    ;    i_356<gHeapPages.mSizePages    ;    i_356++    ){
        gHeapPages.mPages[i_356]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_357;
int n_358;
_Bool flag_359;
int i_360;
struct sMemHeaderTiny* it_361;
int n_362;
int i_363;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_357=gAllocMem;
        n_358=0;
        while(        it_357        ) {
            n_358++;
            flag_359=(_Bool)0;
            printf("#%d ",n_358);
            if(            it_357->class_name            ) {
                printf("%p (%s): ",(char*)it_357+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_357->class_name);
            }
            for(            i_360=0            ;            i_360<16            ;            i_360++            ){
                if(                it_357->sname[i_360]                ) {
                    printf("%s %d #%d, ",it_357->sname[i_360],it_357->sline[i_360],it_357->id[i_360]);
                    flag_359=(_Bool)1;
                }
            }
            if(            flag_359            ) {
                puts("");
            }
            it_357=it_357->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_358,gNumAlloc,gNumFree);
    }
    else {
        it_361=(struct sMemHeaderTiny*)gAllocMem;
        n_362=0;
        while(        it_361        ) {
            n_362++;
            if(            it_361->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_362,(char*)it_361+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_361->class_name,it_361->sname,it_361->sline);
            }
            it_361=it_361->next;
        }
        if(        n_362>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_362,gNumAlloc,gNumFree);
        }
    }
    for(    i_363=0    ;    i_363<gHeapPages.mSizePages    ;    i_363++    ){
        free(gHeapPages.mPages[i_363]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_364;
void* __result_obj__55;
    result_364=((void*)0);
    size=(size+7&~7);
    result_364=calloc(1,size);
    __result_obj__55 = result_364;
    return __result_obj__55;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_365;
struct sMemHeader* prev_it_366;
struct sMemHeader* next_it_367;
unsigned long  int size_368;
struct sMemHeaderTiny* it_369;
struct sMemHeaderTiny* prev_it_370;
struct sMemHeaderTiny* next_it_371;
unsigned long  int size_372;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_365=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_365->allocated!=177783            ) {
                return;
            }
            it_365->allocated=0;
            prev_it_366=it_365->prev;
            next_it_367=it_365->next;
            if(            gAllocMem==it_365            ) {
                gAllocMem=next_it_367;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_366                ) {
                    prev_it_366->next=next_it_367;
                }
                if(                next_it_367                ) {
                    next_it_367->prev=prev_it_366;
                }
            }
            size_368=it_365->size;
            free(it_365);
            gNumFree++;
        }
        else {
            it_369=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_369->allocated!=177783            ) {
                return;
            }
            it_369->allocated=0;
            prev_it_370=it_369->prev;
            next_it_371=it_369->next;
            if(            gAllocMem==it_369            ) {
                gAllocMem=(struct sMemHeader*)next_it_371;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_370                ) {
                    prev_it_370->next=next_it_371;
                }
                if(                next_it_371                ) {
                    next_it_371->prev=prev_it_370;
                }
            }
            size_372=it_369->size;
            free(it_369);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_373;
struct sMemHeader* it_374;
int i_375;
int i_376;
void* __result_obj__56;
void* result_377;
struct sMemHeaderTiny* it_378;
void* __result_obj__57;
memset(&i_375, 0, sizeof(int));
memset(&i_376, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_373=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_374=result_373;
        it_374->allocated=177783;
        it_374->size=size+sizeof(struct sMemHeader);
        it_374->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_375=0            ;            i_375<gNumComeStackFrame            ;            i_375++            ){
                it_374->sname[i_375]=gComeStackFrameSName[i_375];
                it_374->sline[i_375]=gComeStackFrameSLine[i_375];
                it_374->id[i_375]=gComeStackFrameID[i_375];
            }
        }
        else {
            for(            i_376=0            ;            i_376<16            ;            i_376++            ){
                it_374->sname[i_376]=gComeStackFrameSName[gNumComeStackFrame-1-i_376];
                it_374->sline[i_376]=gComeStackFrameSLine[gNumComeStackFrame-1-i_376];
                it_374->id[i_376]=gComeStackFrameID[gNumComeStackFrame-1-i_376];
            }
        }
        come_pop_stackframe_v2();
        it_374->next=gAllocMem;
        it_374->prev=((void*)0);
        it_374->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_374;
        }
        gAllocMem=it_374;
        gNumAlloc++;
        __result_obj__56 = (char*)result_373+sizeof(struct sMemHeader);
        return __result_obj__56;
    }
    else {
        result_377=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_378=result_377;
        it_378->allocated=177783;
        it_378->class_name=class_name;
        it_378->sname=sname;
        it_378->sline=sline;
        it_378->size=size+sizeof(struct sMemHeaderTiny);
        it_378->free_next=((void*)0);
        it_378->next=(struct sMemHeaderTiny*)gAllocMem;
        it_378->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_378;
        }
        gAllocMem=(struct sMemHeader*)it_378;
        gNumAlloc++;
        __result_obj__57 = (char*)result_377+sizeof(struct sMemHeaderTiny);
        return __result_obj__57;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_379;
char* __result_obj__58;
struct sMemHeaderTiny* it_380;
char* __result_obj__59;
    if(    gComeDebugLib    ) {
        it_379=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_379->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_379);
            exit(2);
        }
        __result_obj__58 = it_379->class_name;
        return __result_obj__58;
    }
    else {
        it_380=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_380->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_380);
            exit(2);
        }
        __result_obj__59 = it_380->class_name;
        return __result_obj__59;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_381;
int i_382;
struct sMemHeaderTiny* it_383;
    if(    gComeDebugLib    ) {
        it_381=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_381->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_381->class_name        ) {
            printf("(%s): ",it_381->class_name);
        }
        for(        i_382=0        ;        i_382<16        ;        i_382++        ){
            if(            it_381->sname[i_382]            ) {
                printf("%s %d #%d, ",it_381->sname[i_382],it_381->sline[i_382],it_381->id[i_382]);
            }
        }
        puts("");
    }
    else {
        it_383=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_383->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_383->class_name,it_383->sname,it_383->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_384;
unsigned long  int* ref_count_385;
unsigned long  int* size2_386;
void* __result_obj__60;
    mem_384=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_385=(unsigned long  int*)mem_384;
    *ref_count_385=0;
    size2_386=(unsigned long  int*)(mem_384+sizeof(unsigned long  int));
    *size2_386=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__60 = mem_384+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__60;
}

void come_free(void* mem){
unsigned long  int* ref_count_387;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_387=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_387);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__61;
char* mem_388;
unsigned long  int* size_p_389;
unsigned long  int size_390;
void* result_391;
void* __result_obj__62;
    if(    !block    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_388=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_389=(unsigned long  int*)(mem_388+sizeof(unsigned long  int));
    size_390=*size_p_389-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_391=come_calloc_v2(1,size_390,sname,sline,class_name);
    memcpy(result_391,block,size_390);
    __result_obj__62 = result_391;
    return __result_obj__62;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__63;
unsigned long  int* ref_count_392;
void* __result_obj__64;
    if(    mem==((void*)0)    ) {
        __result_obj__63 = mem;
        return __result_obj__63;
    }
    ref_count_392=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_392)++;
    __result_obj__64 = mem;
    return __result_obj__64;
}

void* come_print_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_393;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_393=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_393);
    __result_obj__66 = mem;
    return __result_obj__66;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_394;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_394=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_394;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__67;
void* __result_obj__68;
unsigned long  int* ref_count_395;
unsigned long  int count_396;
void (*finalizer_397)(void*);
void* __result_obj__69;
void* __result_obj__70;
memset(&finalizer_397, 0, sizeof(void (*)(void*)));
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
    ref_count_395=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_395)--;
    }
    count_396=*ref_count_395;
    if(    !no_free&&count_396<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_397=protocol_fun;
            finalizer_397(protocol_obj);
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
void (*finalizer_398)(void*);
void (*finalizer_399)(void*);
void (*finalizer_400)(void*);
unsigned long  int* ref_count_401;
unsigned long  int count_402;
void (*finalizer_403)(void*);
void (*finalizer_404)(void*);
void (*finalizer_405)(void*);
memset(&finalizer_398, 0, sizeof(void (*)(void*)));
memset(&finalizer_399, 0, sizeof(void (*)(void*)));
memset(&finalizer_400, 0, sizeof(void (*)(void*)));
memset(&finalizer_403, 0, sizeof(void (*)(void*)));
memset(&finalizer_404, 0, sizeof(void (*)(void*)));
memset(&finalizer_405, 0, sizeof(void (*)(void*)));
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
                finalizer_398=protocol_fun;
                finalizer_398(protocol_obj);
            }
            finalizer_399=fun;
            finalizer_399(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_400=protocol_fun;
                finalizer_400(protocol_obj);
            }
        }
    }
    else {
        ref_count_401=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_401)--;
        }
        count_402=*ref_count_401;
        if(        !no_free&&count_402<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_403=protocol_fun;
                        finalizer_403(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_404=fun;
                        finalizer_404(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_405=protocol_fun;
                        finalizer_405(protocol_obj);
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
int len_406;
void* __right_value27 = (void*)0;
char* result_407;
char* __result_obj__72;
    if(    str==((void*)0)    ) {
        __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    len_406=strlen(str)+1;
    result_407=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_406)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_407,str,len_406);
    __result_obj__72 = (char*)come_increment_ref_count(result_407);
    (result_407 = come_decrement_ref_count(result_407, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value28 = (void*)0;
char* __result_obj__73;
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value28=come_get_stackframe())));
    (__right_value28 = come_decrement_ref_count(__right_value28, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value29 = (void*)0;
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
void* __right_value30 = (void*)0;
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
void* __right_value31 = (void*)0;
struct buffer* result_408;
void* __right_value32 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__77;
    }
    result_408=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2913, "struct buffer*"));
    result_408->size=self->size;
    __dec_obj7=result_408->buf,
    result_408->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2916, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_408->len=self->len;
    memcpy(result_408->buf,self->buf,self->len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_408);
    come_call_finalizer(buffer_finalize, result_408, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
_Bool __result_obj__79;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__79 = string_equals(((char*)(__right_value33=buffer_to_string(left))),((char*)(__right_value34=buffer_to_string(right))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value35 = (void*)0;
char* old_buf_409;
int old_len_410;
int new_size_411;
void* __right_value36 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__81;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_409=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2964, "char*"));
        memcpy(old_buf_409,self->buf,self->size);
        old_len_410=self->len;
        new_size_411=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_411)), "/usr/local/include/comelang.h", 2968, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_409,old_len_410);
        self->buf[old_len_410]=0;
        self->size=new_size_411;
        (old_buf_409 = come_decrement_ref_count(old_buf_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__82;
void* __right_value37 = (void*)0;
char* old_buf_412;
int old_len_413;
int new_size_414;
void* __right_value38 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_412=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2987, "char*"));
        old_len_413=self->len;
        new_size_414=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_414)), "/usr/local/include/comelang.h", 2991, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_412,old_len_413);
        self->buf[old_len_413]=0;
        self->size=new_size_414;
        (old_buf_412 = come_decrement_ref_count(old_buf_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__84;
int size_415;
void* __right_value39 = (void*)0;
char* old_buf_416;
int old_len_417;
int new_size_418;
void* __right_value40 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__85;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    size_415=strlen(mem);
    if(    self->len+size_415+1+1>=self->size    ) {
        old_buf_416=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3013, "char*"));
        memcpy(old_buf_416,self->buf,self->size);
        old_len_417=self->len;
        new_size_418=(self->size+size_415+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_418)), "/usr/local/include/comelang.h", 3017, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_416,old_len_417);
        self->buf[old_len_417]=0;
        self->size=new_size_418;
        (old_buf_416 = come_decrement_ref_count(old_buf_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_415);
    self->len+=size_415;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__86;
va_list args_419;
char* result_420;
int len_421;
struct buffer* __result_obj__87;
void* __right_value41 = (void*)0;
char* mem_422;
int size_423;
void* __right_value42 = (void*)0;
char* old_buf_424;
int old_len_425;
int new_size_426;
void* __right_value43 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__88;
result_420 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    __builtin_va_start(args_419,msg);
    len_421=vasprintf(&result_420,msg,args_419);
    __builtin_va_end(args_419);
    if(    len_421<0    ) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    mem_422=(char*)come_increment_ref_count(__builtin_string(result_420));
    size_423=strlen(mem_422);
    if(    self->len+size_423+1+1>=self->size    ) {
        old_buf_424=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3061, "char*"));
        memcpy(old_buf_424,self->buf,self->size);
        old_len_425=self->len;
        new_size_426=(self->size+size_423+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_426)), "/usr/local/include/comelang.h", 3065, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_424,old_len_425);
        self->buf[old_len_425]=0;
        self->size=new_size_426;
        (old_buf_424 = come_decrement_ref_count(old_buf_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_422,size_423);
    self->len+=size_423;
    self->buf[self->len]=0;
    free(result_420);
    __result_obj__88 = self;
    (mem_422 = come_decrement_ref_count(mem_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__88;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__89;
int size_427;
void* __right_value44 = (void*)0;
char* old_buf_428;
int old_len_429;
int new_size_430;
void* __right_value45 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__90;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    size_427=strlen(mem)+1;
    if(    self->len+size_427+1+1+1>=self->size    ) {
        old_buf_428=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3087, "char*"));
        memcpy(old_buf_428,self->buf,self->size);
        old_len_429=self->len;
        new_size_430=(self->size+size_427+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_430)), "/usr/local/include/comelang.h", 3091, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_428,old_len_429);
        self->buf[old_len_429]=0;
        self->size=new_size_430;
        (old_buf_428 = come_decrement_ref_count(old_buf_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_427);
    self->len+=size_427;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__91;
int* mem_431;
int size_432;
void* __right_value46 = (void*)0;
char* old_buf_433;
int old_len_434;
int new_size_435;
void* __right_value47 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__92;
    if(    self==((void*)0)    ) {
        __result_obj__91 = ((void*)0);
        return __result_obj__91;
    }
    mem_431=&value;
    size_432=sizeof(int);
    if(    self->len+size_432+1+1>=self->size    ) {
        old_buf_433=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_433,self->buf,self->size);
        old_len_434=self->len;
        new_size_435=(self->size+size_432+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_435)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_433,old_len_434);
        self->buf[old_len_434]=0;
        self->size=new_size_435;
        (old_buf_433 = come_decrement_ref_count(old_buf_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_431,size_432);
    self->len+=size_432;
    self->buf[self->len]=0;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_436;
int size_437;
void* __right_value48 = (void*)0;
char* old_buf_438;
int old_len_439;
int new_size_440;
void* __right_value49 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__93;
    mem_436=&value;
    size_437=sizeof(long);
    if(    self->len+size_437+1+1>=self->size    ) {
        old_buf_438=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3137, "char*"));
        memcpy(old_buf_438,self->buf,self->size);
        old_len_439=self->len;
        new_size_440=(self->size+size_437+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_440)), "/usr/local/include/comelang.h", 3141, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_438,old_len_439);
        self->buf[old_len_439]=0;
        self->size=new_size_440;
        (old_buf_438 = come_decrement_ref_count(old_buf_438, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_436,size_437);
    self->len+=size_437;
    self->buf[self->len]=0;
    __result_obj__93 = self;
    return __result_obj__93;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__94;
short* mem_441;
int size_442;
void* __right_value50 = (void*)0;
char* old_buf_443;
int old_len_444;
int new_size_445;
void* __right_value51 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__95;
    if(    self==((void*)0)    ) {
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    mem_441=&value;
    size_442=sizeof(short);
    if(    self->len+size_442+1+1>=self->size    ) {
        old_buf_443=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3164, "char*"));
        memcpy(old_buf_443,self->buf,self->size);
        old_len_444=self->len;
        new_size_445=(self->size+size_442+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_445)), "/usr/local/include/comelang.h", 3168, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_443,old_len_444);
        self->buf[old_len_444]=0;
        self->size=new_size_445;
        (old_buf_443 = come_decrement_ref_count(old_buf_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_441,size_442);
    self->len+=size_442;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__96;
int len_446;
int new_size_447;
void* __right_value52 = (void*)0;
char* __dec_obj16;
int i_448;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    len_446=self->len;
    len_446=(len_446+3)&~3;
    if(    len_446>=self->size    ) {
        new_size_447=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_447)), "/usr/local/include/comelang.h", 3192, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_447;
    }
    for(    i_448=self->len    ;    i_448<len_446    ;    i_448++    ){
        self->buf[i_448]=0;
    }
    self->len=len_446;
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
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* result_449;
struct buffer* __result_obj__98;
struct buffer* __result_obj__99;
    result_449=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3222, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__98 = (struct buffer*)come_increment_ref_count(result_449);
        come_call_finalizer(buffer_finalize, result_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__98;
    }
    buffer_append_str(result_449,self);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_449);
    come_call_finalizer(buffer_finalize, result_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

char* buffer_to_string(struct buffer* self){
void* __right_value55 = (void*)0;
char* __result_obj__100;
void* __right_value56 = (void*)0;
char* __result_obj__101;
    if(    self==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value55=__builtin_string(""))));
        (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value56=__builtin_string(self->buf))));
    (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__102;
    __result_obj__102 = self->buf;
    return __result_obj__102;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct buffer* result_450;
struct buffer* __result_obj__103;
    result_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_450,self,sizeof(char)*len);
    __result_obj__103 = (struct buffer*)come_increment_ref_count(result_450);
    come_call_finalizer(buffer_finalize, result_450, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct buffer* result_451;
int i_452;
struct buffer* __result_obj__104;
    result_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    for(    i_452=0    ;    i_452<len    ;    i_452++    ){
        buffer_append(result_451,self[i_452],strlen(self[i_452]));
    }
    __result_obj__104 = (struct buffer*)come_increment_ref_count(result_451);
    come_call_finalizer(buffer_finalize, result_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* result_453;
struct buffer* __result_obj__105;
    result_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3265, "struct buffer*"))));
    buffer_append(result_453,(char*)self,sizeof(short)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_453);
    come_call_finalizer(buffer_finalize, result_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* result_454;
struct buffer* __result_obj__106;
    result_454=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3272, "struct buffer*"))));
    buffer_append(result_454,(char*)self,sizeof(int)*len);
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_454);
    come_call_finalizer(buffer_finalize, result_454, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* result_455;
struct buffer* __result_obj__107;
    result_455=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_455,(char*)self,sizeof(long)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_455);
    come_call_finalizer(buffer_finalize, result_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* result_456;
struct buffer* __result_obj__108;
    result_456=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_456,(char*)self,sizeof(float)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_456);
    come_call_finalizer(buffer_finalize, result_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* result_457;
struct buffer* __result_obj__109;
    result_457=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_457,(char*)self,sizeof(double)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_457);
    come_call_finalizer(buffer_finalize, result_457, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

char* buffer_printable(struct buffer* self){
int len_458;
void* __right_value71 = (void*)0;
char* result_459;
int n_460;
int i_461;
unsigned char c_462;
char* __result_obj__110;
    len_458=self->len;
    result_459=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_458*2+1)), "/usr/local/include/comelang.h", 3301, "char*"));
    n_460=0;
    for(    i_461=0    ;    i_461<len_458    ;    i_461++    ){
        c_462=self->buf[i_461];
        if(        (c_462>=0&&c_462<32)||c_462==127        ) {
            result_459[n_460++]=94;
            result_459[n_460++]=c_462+65-1;
        }
        else if(        c_462>127        ) {
            result_459[n_460++]=63;
        }
        else {
            result_459[n_460++]=c_462;
        }
    }
    result_459[n_460]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_459);
    (result_459 = come_decrement_ref_count(result_459, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_463;
struct list$1char$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_463=0    ;    i_463<num_value    ;    i_463++    ){
        list$1char$_push_back(self,values[i_463]);
    }
    __result_obj__112 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value73 = (void*)0;
struct list_item$1char$* litem_464;
void* __right_value74 = (void*)0;
struct list_item$1char$* litem_465;
void* __right_value75 = (void*)0;
struct list_item$1char$* litem_466;
struct list$1char$* __result_obj__111;
    if(    self->len==0    ) {
        litem_464=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value73=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_464->prev=((void*)0);
        litem_464->next=((void*)0);
        litem_464->item=item;
        self->tail=litem_464;
        self->head=litem_464;
    }
    else if(    self->len==1    ) {
        litem_465=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value74=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_465->prev=self->head;
        litem_465->next=((void*)0);
        litem_465->item=item;
        self->tail=litem_465;
        self->head->next=litem_465;
    }
    else {
        litem_466=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value75=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_466->prev=self->tail;
        litem_466->next=((void*)0);
        litem_466->item=item;
        self->tail->next=litem_466;
        self->tail=litem_466;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_467;
struct list_item$1char$* prev_it_468;
    it_467=self->head;
    while(    it_467!=((void*)0)    ) {
        prev_it_468=it_467;
        it_467=it_467->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_468, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1char$* __result_obj__113;
    __result_obj__113 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value76=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_469;
struct list$1char$p* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_469=0    ;    i_469<num_value    ;    i_469++    ){
        list$1char$p_push_back(self,values[i_469]);
    }
    __result_obj__115 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value78 = (void*)0;
struct list_item$1char$p* litem_470;
void* __right_value79 = (void*)0;
struct list_item$1char$p* litem_471;
void* __right_value80 = (void*)0;
struct list_item$1char$p* litem_472;
struct list$1char$p* __result_obj__114;
    if(    self->len==0    ) {
        litem_470=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value78=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_470->prev=((void*)0);
        litem_470->next=((void*)0);
        litem_470->item=item;
        self->tail=litem_470;
        self->head=litem_470;
    }
    else if(    self->len==1    ) {
        litem_471=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value79=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_471->prev=self->head;
        litem_471->next=((void*)0);
        litem_471->item=item;
        self->tail=litem_471;
        self->head->next=litem_471;
    }
    else {
        litem_472=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value80=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_472->prev=self->tail;
        litem_472->next=((void*)0);
        litem_472->item=item;
        self->tail->next=litem_472;
        self->tail=litem_472;
    }
    self->len++;
    __result_obj__114 = self;
    return __result_obj__114;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_473;
struct list_item$1char$p* prev_it_474;
    it_473=self->head;
    while(    it_473!=((void*)0)    ) {
        prev_it_474=it_473;
        it_473=it_473->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_474, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1char$p* __result_obj__116;
    __result_obj__116 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value81=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_475;
struct list$1short$* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_475=0    ;    i_475<num_value    ;    i_475++    ){
        list$1short$_push_back(self,values[i_475]);
    }
    __result_obj__118 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value83 = (void*)0;
struct list_item$1short$* litem_476;
void* __right_value84 = (void*)0;
struct list_item$1short$* litem_477;
void* __right_value85 = (void*)0;
struct list_item$1short$* litem_478;
struct list$1short$* __result_obj__117;
    if(    self->len==0    ) {
        litem_476=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value83=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_476->prev=((void*)0);
        litem_476->next=((void*)0);
        litem_476->item=item;
        self->tail=litem_476;
        self->head=litem_476;
    }
    else if(    self->len==1    ) {
        litem_477=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value84=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_477->prev=self->head;
        litem_477->next=((void*)0);
        litem_477->item=item;
        self->tail=litem_477;
        self->head->next=litem_477;
    }
    else {
        litem_478=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value85=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_478->prev=self->tail;
        litem_478->next=((void*)0);
        litem_478->item=item;
        self->tail->next=litem_478;
        self->tail=litem_478;
    }
    self->len++;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_479;
struct list_item$1short$* prev_it_480;
    it_479=self->head;
    while(    it_479!=((void*)0)    ) {
        prev_it_480=it_479;
        it_479=it_479->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_480, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1short$* __result_obj__119;
    __result_obj__119 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value86=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_481;
struct list$1int$* __result_obj__121;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_481=0    ;    i_481<num_value    ;    i_481++    ){
        list$1int$_push_back(self,values[i_481]);
    }
    __result_obj__121 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value88 = (void*)0;
struct list_item$1int$* litem_482;
void* __right_value89 = (void*)0;
struct list_item$1int$* litem_483;
void* __right_value90 = (void*)0;
struct list_item$1int$* litem_484;
struct list$1int$* __result_obj__120;
    if(    self->len==0    ) {
        litem_482=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value88=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_482->prev=((void*)0);
        litem_482->next=((void*)0);
        litem_482->item=item;
        self->tail=litem_482;
        self->head=litem_482;
    }
    else if(    self->len==1    ) {
        litem_483=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value89=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_483->prev=self->head;
        litem_483->next=((void*)0);
        litem_483->item=item;
        self->tail=litem_483;
        self->head->next=litem_483;
    }
    else {
        litem_484=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value90=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_484->prev=self->tail;
        litem_484->next=((void*)0);
        litem_484->item=item;
        self->tail->next=litem_484;
        self->tail=litem_484;
    }
    self->len++;
    __result_obj__120 = self;
    return __result_obj__120;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_485;
struct list_item$1int$* prev_it_486;
    it_485=self->head;
    while(    it_485!=((void*)0)    ) {
        prev_it_486=it_485;
        it_485=it_485->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_486, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1int$* __result_obj__122;
    __result_obj__122 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value91=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_487;
struct list$1long$* __result_obj__124;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_487=0    ;    i_487<num_value    ;    i_487++    ){
        list$1long$_push_back(self,values[i_487]);
    }
    __result_obj__124 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value93 = (void*)0;
struct list_item$1long$* litem_488;
void* __right_value94 = (void*)0;
struct list_item$1long$* litem_489;
void* __right_value95 = (void*)0;
struct list_item$1long$* litem_490;
struct list$1long$* __result_obj__123;
    if(    self->len==0    ) {
        litem_488=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value93=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_488->prev=((void*)0);
        litem_488->next=((void*)0);
        litem_488->item=item;
        self->tail=litem_488;
        self->head=litem_488;
    }
    else if(    self->len==1    ) {
        litem_489=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value94=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_489->prev=self->head;
        litem_489->next=((void*)0);
        litem_489->item=item;
        self->tail=litem_489;
        self->head->next=litem_489;
    }
    else {
        litem_490=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value95=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_490->prev=self->tail;
        litem_490->next=((void*)0);
        litem_490->item=item;
        self->tail->next=litem_490;
        self->tail=litem_490;
    }
    self->len++;
    __result_obj__123 = self;
    return __result_obj__123;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_491;
struct list_item$1long$* prev_it_492;
    it_491=self->head;
    while(    it_491!=((void*)0)    ) {
        prev_it_492=it_491;
        it_491=it_491->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_492, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value92 = (void*)0;
void* __right_value96 = (void*)0;
struct list$1long$* __result_obj__125;
    __result_obj__125 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value96=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3362, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_493;
struct list$1float$* __result_obj__127;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_493=0    ;    i_493<num_value    ;    i_493++    ){
        list$1float$_push_back(self,values[i_493]);
    }
    __result_obj__127 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value98 = (void*)0;
struct list_item$1float$* litem_494;
void* __right_value99 = (void*)0;
struct list_item$1float$* litem_495;
void* __right_value100 = (void*)0;
struct list_item$1float$* litem_496;
struct list$1float$* __result_obj__126;
    if(    self->len==0    ) {
        litem_494=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value98=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_494->prev=((void*)0);
        litem_494->next=((void*)0);
        litem_494->item=item;
        self->tail=litem_494;
        self->head=litem_494;
    }
    else if(    self->len==1    ) {
        litem_495=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value99=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_495->prev=self->head;
        litem_495->next=((void*)0);
        litem_495->item=item;
        self->tail=litem_495;
        self->head->next=litem_495;
    }
    else {
        litem_496=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value100=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_496->prev=self->tail;
        litem_496->next=((void*)0);
        litem_496->item=item;
        self->tail->next=litem_496;
        self->tail=litem_496;
    }
    self->len++;
    __result_obj__126 = self;
    return __result_obj__126;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_497;
struct list_item$1float$* prev_it_498;
    it_497=self->head;
    while(    it_497!=((void*)0)    ) {
        prev_it_498=it_497;
        it_497=it_497->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_498, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value97 = (void*)0;
void* __right_value101 = (void*)0;
struct list$1float$* __result_obj__128;
    __result_obj__128 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value101=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3367, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value101, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_499;
struct list$1double$* __result_obj__130;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_499=0    ;    i_499<num_value    ;    i_499++    ){
        list$1double$_push_back(self,values[i_499]);
    }
    __result_obj__130 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value103 = (void*)0;
struct list_item$1double$* litem_500;
void* __right_value104 = (void*)0;
struct list_item$1double$* litem_501;
void* __right_value105 = (void*)0;
struct list_item$1double$* litem_502;
struct list$1double$* __result_obj__129;
    if(    self->len==0    ) {
        litem_500=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value103=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_500->prev=((void*)0);
        litem_500->next=((void*)0);
        litem_500->item=item;
        self->tail=litem_500;
        self->head=litem_500;
    }
    else if(    self->len==1    ) {
        litem_501=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value104=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_501->prev=self->head;
        litem_501->next=((void*)0);
        litem_501->item=item;
        self->tail=litem_501;
        self->head->next=litem_501;
    }
    else {
        litem_502=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value105=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_502->prev=self->tail;
        litem_502->next=((void*)0);
        litem_502->item=item;
        self->tail->next=litem_502;
        self->tail=litem_502;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_503;
struct list_item$1double$* prev_it_504;
    it_503=self->head;
    while(    it_503!=((void*)0)    ) {
        prev_it_504=it_503;
        it_503=it_503->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_504, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value106 = (void*)0;
struct list$1double$* __result_obj__131;
    __result_obj__131 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value106=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3372, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value106, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value107 = (void*)0;
char* __result_obj__132;
int len_505;
void* __right_value108 = (void*)0;
char* result_506;
char* __result_obj__133;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_505=strlen(self)+strlen(right);
    result_506=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_505+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_506,self,len_505+1);
    strncat(result_506,right,len_505+1);
    __result_obj__133 = (char*)come_increment_ref_count(result_506);
    (result_506 = come_decrement_ref_count(result_506, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* string_operator_add(char* self, char* right){
void* __right_value109 = (void*)0;
char* __result_obj__134;
int len_507;
void* __right_value110 = (void*)0;
char* result_508;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_507=strlen(self)+strlen(right);
    result_508=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_507+1)), "/usr/local/include/comelang.h", 3616, "char*"));
    strncpy(result_508,self,len_507+1);
    strncat(result_508,right,len_507+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_508);
    (result_508 = come_decrement_ref_count(result_508, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_operator_mult(char* self, int right){
void* __right_value111 = (void*)0;
char* __result_obj__136;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct buffer* buf_509;
int i_510;
void* __right_value114 = (void*)0;
char* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    buf_509=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3629, "struct buffer*"))));
    for(    i_510=0    ;    i_510<right    ;    i_510++    ){
        buffer_append_str(buf_509,self);
    }
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value114=buffer_to_string(buf_509))));
    come_call_finalizer(buffer_finalize, buf_509, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* string_operator_mult(char* self, int right){
void* __right_value115 = (void*)0;
char* __result_obj__138;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct buffer* buf_511;
int i_512;
void* __right_value118 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_512=0    ;    i_512<right    ;    i_512++    ){
        buffer_append_str(buf_511,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value118=buffer_to_string(buf_511))));
    come_call_finalizer(buffer_finalize, buf_511, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_513;
int i_514;
    result_513=(_Bool)0;
    for(    i_514=0    ;    i_514<len    ;    i_514++    ){
        if(        strncmp(self[i_514],str,strlen(self[i_514]))==0        ) {
            result_513=(_Bool)1;
            break;
        }
    }
    return result_513;
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

unsigned int string_get_hash_key(char* value){
int result_517;
char* p_518;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_517=0;
    p_518=value;
    while(    *p_518    ) {
        result_517+=(*p_518);
        p_518++;
    }
    return result_517;
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
_Bool result_519;
    result_519=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_519;
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
_Bool result_520;
    result_520=(c>=32&&c<=126);
    return result_520;
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
void* __right_value119 = (void*)0;
char* __result_obj__140;
int len_521;
void* __right_value120 = (void*)0;
char* result_522;
int i_523;
char* __result_obj__141;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_521=strlen(str);
    result_522=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_521+1)), "/usr/local/include/comelang.h", 3911, "char*"));
    for(    i_523=0    ;    i_523<len_521    ;    i_523++    ){
        result_522[i_523]=str[len_521-i_523-1];
    }
    result_522[len_521]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_522);
    (result_522 = come_decrement_ref_count(result_522, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value121 = (void*)0;
char* __result_obj__142;
int len_524;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
char* __result_obj__143;
void* __right_value124 = (void*)0;
char* __result_obj__144;
void* __right_value125 = (void*)0;
char* __result_obj__145;
void* __right_value126 = (void*)0;
char* result_525;
char* __result_obj__146;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_524=strlen(str);
    if(    head<0    ) {
        head+=len_524;
    }
    if(    tail<0    ) {
        tail+=len_524+1;
    }
    if(    head>tail    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value123=charp_reverse(((char*)(__right_value122=charp_substring(str,tail,head)))))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_524    ) {
        tail=len_524;
    }
    if(    head==tail    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(""))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    tail-head+1<1    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    result_525=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3957, "char*"));
    memcpy(result_525,str+head,tail-head);
    result_525[tail-head]=0;
    __result_obj__146 = (char*)come_increment_ref_count(result_525);
    (result_525 = come_decrement_ref_count(result_525, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value127 = (void*)0;
char* __result_obj__147;
int len_526;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* __result_obj__148;
void* __right_value130 = (void*)0;
char* __result_obj__149;
void* __right_value131 = (void*)0;
char* __result_obj__150;
void* __right_value132 = (void*)0;
char* result_527;
char* __result_obj__151;
    if(    str==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value127=__builtin_string(""))));
        (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    len_526=strlen(str);
    if(    head<0    ) {
        head+=len_526;
    }
    if(    tail<0    ) {
        tail+=len_526+1;
    }
    if(    head>tail    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value129=charp_reverse(((char*)(__right_value128=charp_substring(str,tail,head)))))));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_526    ) {
        tail=len_526;
    }
    if(    head==tail    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value130=__builtin_string(""))));
        (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    if(    tail-head+1<1    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value131=__builtin_string(""))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    result_527=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4000, "char*"));
    memcpy(result_527,str+head,tail-head);
    result_527[tail-head]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_527);
    (result_527 = come_decrement_ref_count(result_527, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value133 = (void*)0;
char* __result_obj__152;
int len_528;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
char* __result_obj__153;
void* __right_value136 = (void*)0;
char* __result_obj__154;
void* __right_value137 = (void*)0;
char* __result_obj__155;
void* __right_value138 = (void*)0;
char* result_529;
char* __result_obj__156;
    if(    str==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string(""))));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    len_528=strlen(str);
    if(    head<0    ) {
        head+=len_528;
    }
    if(    tail<0    ) {
        tail+=len_528+1;
    }
    if(    head>tail    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value135=charp_reverse(((char*)(__right_value134=charp_substring(str,tail,head)))))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_528    ) {
        tail=len_528;
    }
    if(    head==tail    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value136=__builtin_string(""))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    if(    tail-head+1<1    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(""))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_529=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4043, "char*"));
    memcpy(result_529,str+head,tail-head);
    result_529[tail-head]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_529);
    (result_529 = come_decrement_ref_count(result_529, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xsprintf(char* msg, ...){
void* __right_value139 = (void*)0;
char* __result_obj__157;
va_list args_530;
char* result_531;
int len_532;
void* __right_value140 = (void*)0;
char* __result_obj__158;
void* __right_value141 = (void*)0;
char* result2_533;
char* __result_obj__159;
result_531 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(""))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __builtin_va_start(args_530,msg);
    len_532=vasprintf(&result_531,msg,args_530);
    __builtin_va_end(args_530);
    if(    len_532<0    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    result2_533=(char*)come_increment_ref_count(__builtin_string(result_531));
    free(result_531);
    __result_obj__159 = (char*)come_increment_ref_count(result2_533);
    (result2_533 = come_decrement_ref_count(result2_533, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value142 = (void*)0;
char* __result_obj__160;
int len_534;
void* __right_value143 = (void*)0;
char* __result_obj__161;
void* __right_value144 = (void*)0;
char* __result_obj__162;
void* __right_value145 = (void*)0;
char* result_535;
char* __result_obj__163;
    if(    str==((void*)0)    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    len_534=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(str))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    if(    head<0    ) {
        head+=len_534;
    }
    if(    tail<0    ) {
        tail+=len_534+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(str))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    if(    tail>=len_534    ) {
        tail=len_534;
    }
    result_535=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_534-(tail-head)+1)), "/usr/local/include/comelang.h", 4105, "char*"));
    memcpy(result_535,str,head);
    memcpy(result_535+head,str+tail,len_534-tail);
    result_535[len_534-(tail-head)]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_535);
    (result_535 = come_decrement_ref_count(result_535, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_536;
struct list_item$1char$ph* prev_it_537;
    it_536=self->head;
    while(    it_536!=((void*)0)    ) {
        prev_it_537=it_536;
        it_536=it_536->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_537, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value152 = (void*)0;
struct list_item$1char$ph* litem_541;
char* __dec_obj17;
void* __right_value153 = (void*)0;
struct list_item$1char$ph* litem_542;
char* __dec_obj18;
void* __right_value154 = (void*)0;
struct list_item$1char$ph* litem_543;
char* __dec_obj19;
struct list$1char$ph* __result_obj__166;
    if(    self->len==0    ) {
        litem_541=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value152=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_541->prev=((void*)0);
        litem_541->next=((void*)0);
        __dec_obj17=litem_541->item,
        litem_541->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_541;
        self->head=litem_541;
    }
    else if(    self->len==1    ) {
        litem_542=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value153=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_542->prev=self->head;
        litem_542->next=((void*)0);
        __dec_obj18=litem_542->item,
        litem_542->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_542;
        self->head->next=litem_542;
    }
    else {
        litem_543=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value154=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_543->prev=self->tail;
        litem_543->next=((void*)0);
        __dec_obj19=litem_543->item,
        litem_543->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_543;
        self->tail=litem_543;
    }
    self->len++;
    __result_obj__166 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__166;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1char$ph* __result_obj__165;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct list$1char$ph* result_538;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* str_539;
int i_540;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct list$1char$ph* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value147=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4118, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__165;
    }
    result_538=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4121, "struct list$1char$ph*"))));
    str_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4123, "struct buffer*"))));
    for(    i_540=0    ;    i_540<charp_length(self)    ;    i_540++    ){
        if(        self[i_540]==c        ) {
            list$1char$ph_push_back(result_538,(char*)come_increment_ref_count(__builtin_string(str_539->buf)));
            buffer_reset(str_539);
        }
        else {
            buffer_append_char(str_539,self[i_540]);
        }
    }
    if(    buffer_length(str_539)!=0    ) {
        list$1char$ph_push_back(result_538,(char*)come_increment_ref_count(__builtin_string(str_539->buf)));
    }
    __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(result_538);
    come_call_finalizer(list$1char$ph$p_finalize, result_538, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value157 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf(msg,self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value158 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf(msg,self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_printable(char* str){
int len_544;
void* __right_value159 = (void*)0;
char* result_545;
int n_546;
int i_547;
char c_548;
char* __result_obj__170;
    len_544=charp_length(str);
    result_545=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_544*2+1)), "/usr/local/include/comelang.h", 4155, "char*"));
    n_546=0;
    for(    i_547=0    ;    i_547<len_544    ;    i_547++    ){
        c_548=str[i_547];
        if(        (c_548>=0&&c_548<32)||c_548==127        ) {
            result_545[n_546++]=94;
            result_545[n_546++]=c_548+65-1;
        }
        else {
            result_545[n_546++]=c_548;
        }
    }
    result_545[n_546]=0;
    __result_obj__170 = (char*)come_increment_ref_count(result_545);
    (result_545 = come_decrement_ref_count(result_545, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value160 = (void*)0;
char* __result_obj__171;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct buffer* result_549;
char* p_550;
char* p2_551;
void* __right_value163 = (void*)0;
char* __result_obj__172;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string(self))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    result_549=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4183, "struct buffer*"))));
    p_550=self;
    while(    (_Bool)1    ) {
        p2_551=strstr(p_550,str);
        if(        p2_551==((void*)0)        ) {
            p2_551=p_550;
            while(            *p2_551            ) {
                p2_551++;
            }
            buffer_append(result_549,p_550,p2_551-p_550);
            break;
        }
        buffer_append(result_549,p_550,p2_551-p_550);
        buffer_append_str(result_549,replace);
        p_550=p2_551+strlen(str);
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value163=buffer_to_string(result_549))));
    come_call_finalizer(buffer_finalize, result_549, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* xbasename(char* path){
void* __right_value164 = (void*)0;
char* __result_obj__173;
char* p_552;
void* __right_value165 = (void*)0;
char* __result_obj__174;
void* __right_value166 = (void*)0;
char* __result_obj__175;
void* __right_value167 = (void*)0;
char* __result_obj__176;
    if(    path==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    p_552=path+strlen(path);
    while(    p_552>=path    ) {
        if(        *p_552==47        ) {
            break;
        }
        else {
            p_552--;
        }
    }
    if(    p_552<path    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(path))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    else {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(p_552+1))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* xnoextname(char* path){
void* __right_value168 = (void*)0;
char* __result_obj__177;
void* __right_value169 = (void*)0;
char* path2_553;
char* p_554;
void* __right_value170 = (void*)0;
char* __result_obj__178;
void* __right_value171 = (void*)0;
char* __result_obj__179;
void* __right_value172 = (void*)0;
char* __result_obj__180;
    if(    path==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    path2_553=(char*)come_increment_ref_count(xbasename(path));
    p_554=path2_553+strlen(path2_553);
    while(    p_554>=path2_553    ) {
        if(        *p_554==46        ) {
            break;
        }
        else {
            p_554--;
        }
    }
    if(    p_554<path2_553    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(path2_553))));
        (path2_553 = come_decrement_ref_count(path2_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value171=charp_substring(path2_553,0,p_554-path2_553))));
        (path2_553 = come_decrement_ref_count(path2_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
    (path2_553 = come_decrement_ref_count(path2_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* xextname(char* path){
void* __right_value173 = (void*)0;
char* __result_obj__181;
char* p_555;
void* __right_value174 = (void*)0;
char* __result_obj__182;
void* __right_value175 = (void*)0;
char* __result_obj__183;
void* __right_value176 = (void*)0;
char* __result_obj__184;
    if(    path==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    p_555=path+strlen(path);
    while(    p_555>=path    ) {
        if(        *p_555==46        ) {
            break;
        }
        else {
            p_555--;
        }
    }
    if(    p_555<path    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(path))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    else {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(p_555+1))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
    (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* bool_to_string(_Bool self){
void* __right_value177 = (void*)0;
char* __result_obj__185;
void* __right_value178 = (void*)0;
char* __result_obj__186;
    if(    self    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string("true"))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    else {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string("false"))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value179 = (void*)0;
char* __result_obj__187;
void* __right_value180 = (void*)0;
char* __result_obj__188;
    if(    self    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value179=__builtin_string("true"))));
        (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    else {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string("false"))));
        (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
}

char* char_to_string(char self){
void* __right_value181 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value181=xsprintf("%c",self))));
    (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

char* short_to_string(short self){
void* __right_value182 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value182=xsprintf("%d",self))));
    (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* int_to_string(int self){
void* __right_value183 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value183=xsprintf("%d",self))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* long_to_string(long self){
void* __right_value184 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value184=xsprintf("%ld",self))));
    (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__192;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value185 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value185=xsprintf("%ld",self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* float_to_string(float self){
void* __right_value186 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value186=xsprintf("%f",self))));
    (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__194;
}

char* double_to_string(double self){
void* __right_value187 = (void*)0;
char* __result_obj__195;
    __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value187=xsprintf("%lf",self))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* string_to_string(char* self){
void* __right_value188 = (void*)0;
char* __result_obj__196;
void* __right_value189 = (void*)0;
char* __result_obj__197;
    if(    self==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string(""))));
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string(self))));
    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* charp_to_string(char* self){
void* __right_value190 = (void*)0;
char* __result_obj__198;
void* __right_value191 = (void*)0;
char* __result_obj__199;
    if(    self==((void*)0)    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string(""))));
        (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string(self))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value192 = (void*)0;
char* __result_obj__200;
void* __right_value193 = (void*)0;
char* __result_obj__201;
    if(    self==((void*)0)    ) {
        __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string(""))));
        (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__200;
    }
    puts(self);
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value193=__builtin_string(self))));
    (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
}

char* charp_print(char* self){
void* __right_value194 = (void*)0;
char* __result_obj__202;
void* __right_value195 = (void*)0;
char* __result_obj__203;
    if(    self==((void*)0)    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string(""))));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    printf("%s",self);
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string(self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_printf(char* self, ...){
void* __right_value196 = (void*)0;
char* __result_obj__204;
char* msg2_556;
va_list args_557;
void* __right_value197 = (void*)0;
char* __result_obj__205;
msg2_556 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string(""))));
        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    __builtin_va_start(args_557,self);
    vasprintf(&msg2_556,self,args_557);
    __builtin_va_end(args_557);
    printf("%s",msg2_556);
    free(msg2_556);
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(self))));
    (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_558;
    for(    i_558=0    ;    i_558<self    ;    i_558++    ){
        block(parent,i_558);
    }
}

