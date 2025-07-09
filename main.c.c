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

extern struct file file_table[16];
unsigned char hello_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x5a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
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
  0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x8d, 0x47,
  0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11,
  0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x19, 0x46, 0x97, 0x05, 0x00, 0x00,
  0x93, 0x85, 0x45, 0x03, 0x05, 0x45, 0xef, 0xf0, 0xbf, 0xf7, 0x09, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0xc5, 0x02, 0x05, 0x45, 0xef, 0xf0,
  0xbf, 0xf6, 0x05, 0x45, 0xef, 0xf0, 0x7f, 0xfa, 0x81, 0x47, 0x3e, 0x85,
  0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x00, 0x00, 0x00, 0x00,
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
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0xa3, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x46, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa8, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xa3, 0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x5a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0xac, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x0d, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x85, 0x03, 0x05, 0x45, 0xef, 0xf0,
  0xff, 0xf8, 0x09, 0x45, 0xef, 0xf0, 0xbf, 0xfc, 0x81, 0x47, 0x3e, 0x85,
  0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x41, 0x11, 0x06, 0xe4,
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
  0xa4, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
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
  0x60, 0x04, 0x73, 0x00, 0x00, 0x00, 0x01, 0xa0, 0x79, 0x71, 0x06, 0xf4,
  0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd,
  0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70,
  0x02, 0x74, 0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd,
  0x23, 0x04, 0xf4, 0xfe, 0xa3, 0x04, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe,
  0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x7f, 0xec, 0x01, 0x00,
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
  0x13, 0x97, 0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x2a,
  0xba, 0x97, 0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00,
  0x93, 0x87, 0x07, 0x29, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9,
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
  0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x1f,
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
  0x05, 0x61, 0x82, 0x80, 0x29, 0x71, 0x06, 0xfe, 0x22, 0xfa, 0x80, 0x02,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xc5, 0x17, 0xef, 0xf0, 0x7f, 0xfb,
  0x09, 0x46, 0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x65, 0x17, 0x05, 0x45,
  0xef, 0xf0, 0x5f, 0x82, 0x23, 0x26, 0x04, 0xfe, 0x93, 0x07, 0x04, 0xf5,
  0x05, 0x46, 0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0, 0x5f, 0x85, 0x93, 0x07,
  0x04, 0xf5, 0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x5f, 0x80,
  0x03, 0x47, 0x04, 0xf5, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97,
  0x23, 0x84, 0xe7, 0xf6, 0x83, 0x27, 0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x47, 0x04, 0xf5, 0x3e, 0x87, 0xb5, 0x47, 0x63, 0x09,
  0xf7, 0x00, 0x83, 0x47, 0x04, 0xf5, 0x3e, 0x87, 0xa9, 0x47, 0x63, 0x03,
  0xf7, 0x00, 0x4d, 0xbf, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x81, 0x27,
  0xc1, 0x17, 0xa2, 0x97, 0x23, 0x84, 0x07, 0xf6, 0x17, 0x05, 0x00, 0x00,
  0x13, 0x05, 0xc5, 0x0f, 0xef, 0xf0, 0x7f, 0xf3, 0x83, 0x47, 0x84, 0xf5,
  0xd1, 0xc3, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x63, 0xdb,
  0x07, 0x00, 0x31, 0x46, 0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x05, 0x0e,
  0x09, 0x45, 0xef, 0xf0, 0x6f, 0xf8, 0xb1, 0xa8, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x8d, 0xe7, 0x23, 0x20, 0x04, 0xfe, 0x83, 0x26, 0x04, 0xfe,
  0x13, 0x07, 0x84, 0xec, 0x93, 0x07, 0x84, 0xf5, 0x36, 0x86, 0xba, 0x85,
  0x3e, 0x85, 0xef, 0xf0, 0xaf, 0xfe, 0xaa, 0x87, 0x23, 0x2e, 0xf4, 0xfc,
  0x19, 0x45, 0xef, 0xf0, 0x3f, 0x82, 0x19, 0xbf, 0x23, 0x26, 0x04, 0xf4,
  0x93, 0x07, 0xc4, 0xf4, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0x82, 0xaa, 0x87,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xf4, 0xbe, 0x85, 0x17, 0x05,
  0x00, 0x00, 0x13, 0x05, 0x65, 0x09, 0xef, 0xf0, 0x9f, 0xb8, 0xfd, 0xb5,
  0x01, 0x00, 0xed, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c,
  0x6c, 0x29, 0x00, 0x00, 0x38, 0xfe, 0xff, 0xff, 0x7c, 0xfd, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff, 0xc0, 0xfd, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff, 0xf0, 0xfd, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff, 0x60, 0xfe, 0xff, 0xff,
  0x60, 0xfe, 0xff, 0xff, 0x9e, 0xfd, 0xff, 0xff, 0x0d, 0x0a, 0x00, 0x00,
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
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x01, 0x00, 0xd0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xfe, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x42, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x5b, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x6a, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x44, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x60, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xa4, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x30, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x5b, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x60, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x46, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0xdc, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
    struct file file_table[16];
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
static void* kalloc_page(unsigned long  long bump);
void* kalloc_pages(unsigned long  int npages);
void perror(char* str);
void panic(char* str);
struct cpu* mycpu();
unsigned long  long make_satp(unsigned long  long* pagetable);
void copy_file_table(struct file* old, struct file* new_);
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
unsigned long  long x_16;
memset(&x_16, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_16));
    return x_16;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_17;
memset(&x_17, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_17));
    return x_17;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_18;
    x_18=r_sstatus();
    x_18|=(1L<<1);
    w_sstatus(x_18);
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
unsigned long  long x_19;
    x_19=r_sstatus();
    return (x_19&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_119;
memset(&x_119, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_119));
    return x_119;
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
unsigned long  long x_273;
memset(&x_273, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_273));
    return x_273;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_274;
memset(&sp_val_274, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_274): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_274;
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

void copy_file_table(struct file* old, struct file* new_){
int i_15;
    for(    i_15=0    ;    i_15<16    ;    i_15++    ){
        new_[i_15]=old[i_15];
    }
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
int r_20;
memset(&r_20, 0, sizeof(int));
    r_20=(lk->locked&&lk->cpu==mycpu());
    return r_20;
}

void push_off(){
int old_21;
    old_21=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_21;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_22;
    c_22=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_22->noff<1    ) {
        panic("pop_off");
    }
    c_22->noff-=1;
    if(    c_22->noff==0&&c_22->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_23;
p_23 = (void*)0;
    p_23=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_23+4096<=(char*)pa_end    ;    p_23+=4096    ){
        kfree(p_23);
    }
}

void kfree(void* pa){
struct run* r_24;
r_24 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_24=(struct run*)pa;
    acquire(&kmem.lock);
    r_24->next=kmem.freelist;
    kmem.freelist=r_24;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_25;
void* __result_obj__6;
r_25 = (void*)0;
    acquire(&kmem.lock);
    r_25=kmem.freelist;
    if(    r_25    ) {
        kmem.freelist=r_25->next;
    }
    release(&kmem.lock);
    if(    r_25    ) {
        memset((char*)r_25,5,4096);
    }
    __result_obj__6 = (void*)r_25;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_26;
unsigned long  long* pte_27;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    for(    level_26=2    ;    level_26>0    ;    level_26--    ){
        pte_27=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_26))))&511)];
        if(        *pte_27&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_27)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_27=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_28;
unsigned long  long last_29;
unsigned long  long* pte_30;
memset(&a_28, 0, sizeof(unsigned long  long));
memset(&last_29, 0, sizeof(unsigned long  long));
pte_30 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_28=va;
    last_29=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_30=walk(pagetable,a_28,1))==0        ) {
            return -1;
        }
        if(        *pte_30&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_30&1023,perm);
        }
        *pte_30=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_28==last_29        ) {
            break;
        }
        a_28+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_31;
int i_32;
    ptr_31=(unsigned int*)pa;
    for(    i_32=0    ;    i_32<count    ;    i_32++    ){
        if(        i_32%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_31+i_32));
        }
        printf("%p ",ptr_31[i_32]);
        if(        i_32%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_33;
unsigned long  long pte_34;
unsigned long  long pa_35;
unsigned long  long child_va_36;
int j_37;
    for(    i_33=0    ;    i_33<512    ;    i_33++    ){
        pte_34=pagetable[i_33];
        if(        pte_34&(1L<<0)        ) {
            pa_35=(((pte_34)>>10)<<12);
            child_va_36=va|((unsigned long  long)i_33<<(12+9*(2-level)));
            for(            j_37=0            ;            j_37<level            ;            j_37++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_36,pa_35,i_33,level);
            if(            (pte_34&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_34&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_34&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_34&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_34&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_34&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_34&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_35,child_va_36,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_38;
    satp_38=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_38));
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
unsigned long  long addr_39;
int i_40;
unsigned long  long va_41;
unsigned long  long pa_42;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_39=2147483648UL    ;    addr_39<2164260864UL    ;    addr_39+=4096    ){
        mappages(kernel_pagetable,addr_39,4096,addr_39,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_40=0    ;    i_40<8    ;    i_40++    ){
        va_41=268439552UL+i_40*4096UL;
        pa_42=va_41;
        mappages(kernel_pagetable,va_41,4096UL,pa_42,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_43;
void* __result_obj__9;
void* __result_obj__10;
void* __result_obj__11;
unsigned long  long pa_44;
void* __result_obj__12;
    pte_43=walk(pagetable,va,0);
    if(    pte_43==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_43&(1L<<0))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_43&(1L<<4))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    pa_44=(((*pte_43)>>10)<<12);
    __result_obj__12 = (void*)(pa_44+(va&(4096-1)));
    return __result_obj__12;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_45;
unsigned long  long off_46;
char* pa_47;
unsigned long  long n_48;
pa_47 = (void*)0;
    va0_45=(((dstva))&~(4096-1));
    off_46=dstva-va0_45;
    while(    len>0    ) {
        if(        (pa_47=walkaddr(pagetable,va0_45))==0        ) {
            return -1;
        }
        n_48=4096-off_46;
        if(        n_48>len        ) {
            n_48=len;
        }
        memcpy(pa_47+off_46,src,n_48);
        len-=n_48;
        src+=n_48;
        va0_45+=4096;
        off_46=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_49;
unsigned long  long va0_50;
unsigned long  long pa0_51;
memset(&n_49, 0, sizeof(unsigned long  long));
memset(&va0_50, 0, sizeof(unsigned long  long));
memset(&pa0_51, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_50=(((srcva))&~(4096-1));
        pa0_51=(unsigned long  long)walkaddr(pagetable,va0_50);
        if(        pa0_51==0        ) {
            return -1;
        }
        n_49=4096-(srcva-va0_50);
        if(        n_49>len        ) {
            n_49=len;
        }
        memmove(dst,(void*)(pa0_51+(srcva-va0_50)),n_49);
        len-=n_49;
        dst+=n_49;
        srcva=va0_50+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_52;
unsigned long  long va0_53;
unsigned long  long pa0_54;
int got_null_55;
char* dst2_56;
char* p_57;
memset(&n_52, 0, sizeof(unsigned long  long));
memset(&va0_53, 0, sizeof(unsigned long  long));
memset(&pa0_54, 0, sizeof(unsigned long  long));
    got_null_55=0;
    dst2_56=dst;
    while(    got_null_55==0&&max>0    ) {
        va0_53=(((srcva))&~(4096-1));
        pa0_54=(unsigned long  long)walkaddr(pagetable,va0_53);
        if(        pa0_54==0        ) {
            return -1;
        }
        n_52=4096-(srcva-va0_53);
        if(        n_52>max        ) {
            n_52=max;
        }
        p_57=(char*)(pa0_54+(srcva-va0_53));
        while(        n_52>0        ) {
            if(            *p_57==0            ) {
                *dst2_56=0;
                got_null_55=dst2_56-dst;
                break;
            }
            else {
                *dst2_56=*p_57;
            }
            --n_52;
            --max;
            p_57++;
            dst2_56++;
        }
        srcva=va0_53+4096;
    }
    if(    got_null_55    ) {
        dst2_56[got_null_55]=0;
        return got_null_55;
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
struct proc* result_58;
unsigned long  long* pagetable_59;
struct elfhdr* eh_60;
struct proghdr* ph_61;
unsigned long  long size_62;
unsigned long  long va_63;
int i_64;
void* pa_65;
void* __right_value1 = (void*)0;
struct proc* parent_66;
unsigned long  long parent_current_73;
unsigned long  long parent_stack_74;
unsigned long  long offset_75;
char* src_76;
char* pa_77;
char* pa_78;
    result_58=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 781, "struct proc*"));
    copy_file_table(file_table,result_58->file_table);
    result_58->program=hello_elf;
    pagetable_59=(unsigned long  long*)kalloc();
    memset(pagetable_59,0,4096);
    setting_user_pagetable(result_58,pagetable_59);
    result_58->pagetable=pagetable_59;
    eh_60=(struct elfhdr*)hello_elf;
    if(    eh_60->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_61=(struct proghdr*)(hello_elf+eh_60->phoff);
    size_62=ph_61->filesz;
    result_58->vaddr=(((ph_61->vaddr))&~(4096-1));
    va_63=0;
    for(    i_64=0    ;    i_64<eh_60->phnum    ;    i_64++,ph_61++    ){
        if(        ph_61->type!=1        ) {
            continue;
        }
        for(        va_63=(((ph_61->vaddr))&~(4096-1))        ;        va_63<ph_61->vaddr+ph_61->memsz        ;        va_63+=4096        ){
            pa_65=kalloc();
            if(            !pa_65            ) {
                panic("kalloc");
            }
            memset(pa_65,0,4096);
            mappages(result_58->pagetable,va_63,4096,(unsigned long  long)pa_65,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_58->pagetable,ph_61->vaddr,hello_elf+ph_61->off,ph_61->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    if(    fork_flag    ) {
        parent_66=((struct proc*)(__right_value1=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
        come_call_finalizer(proc_finalize, __right_value1, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        parent_current_73=parent_66->context.sp;
        parent_stack_74=(unsigned long  long)parent_66->stack_top;
        offset_75=parent_current_73-parent_stack_74;
        src_76=walkaddr(parent_66->pagetable,parent_stack_74);
        pa_77=kalloc();
        if(        !pa_77        ) {
            panic("fork sp");
        }
        memmove(pa_77,(void*)src_76,4096);
        mappages(result_58->pagetable,va_63,4096,(unsigned long  long)pa_77,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_58->stack=(char*)va_63+4096;
        result_58->stack_top=(char*)va_63;
        result_58->context.sp=parent_66->context.sp;
    }
    else {
        pa_78=kalloc();
        if(        !pa_78        ) {
            panic("kalloc");
        }
        memset(pa_78,0,4096);
        mappages(result_58->pagetable,va_63,4096,(unsigned long  long)pa_78,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_58->stack=(char*)va_63+4096;
        result_58->stack_top=(char*)va_63;
        result_58->context.sp=va_63+4096;
    }
    result_58->context.mepc=eh_60->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_58));
    come_call_finalizer(proc_finalize, result_58, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct proc* list$1proc$ph$p_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_67;
int i_68;
struct proc* __result_obj__13;
struct proc* default_value_69;
struct proc* __result_obj__14;
default_value_69 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_67=self->head;
    i_68=0;
    while(    it_67!=((void*)0)    ) {
        if(        position==i_68        ) {
            __result_obj__13 = (struct proc*)come_increment_ref_count(it_67->item);
            come_call_finalizer(proc_finalize, __result_obj__13, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__13;
        }
        it_67=it_67->next;
        i_68++;
    }
    memset(&default_value_69,0,sizeof(struct proc*));
    __result_obj__14 = (struct proc*)come_increment_ref_count(default_value_69);
    come_call_finalizer(proc_finalize, default_value_69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__14, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__14;
}

static void proc_finalize(struct proc* self){
}

static struct proc* list$1proc$ph_operator_load_element(struct list$1proc$ph* self, int position){
struct list_item$1proc$ph* it_70;
int i_71;
struct proc* __result_obj__15;
struct proc* default_value_72;
struct proc* __result_obj__16;
default_value_72 = (void*)0;
    if(    position<0    ) {
        position+=self->len;
    }
    it_70=self->head;
    i_71=0;
    while(    it_70!=((void*)0)    ) {
        if(        position==i_71        ) {
            __result_obj__15 = (struct proc*)come_increment_ref_count(it_70->item);
            come_call_finalizer(proc_finalize, __result_obj__15, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
            return __result_obj__15;
        }
        it_70=it_70->next;
        i_71++;
    }
    memset(&default_value_72,0,sizeof(struct proc*));
    __result_obj__16 = (struct proc*)come_increment_ref_count(default_value_72);
    come_call_finalizer(proc_finalize, default_value_72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(proc_finalize, __result_obj__16, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__16;
}

static struct list$1proc$ph* list$1proc$ph_add(struct list$1proc$ph* self, struct proc* item){
void* __right_value2 = (void*)0;
struct list_item$1proc$ph* litem_79;
struct proc* __dec_obj1;
void* __right_value3 = (void*)0;
struct list_item$1proc$ph* litem_80;
struct proc* __dec_obj2;
void* __right_value4 = (void*)0;
struct list_item$1proc$ph* litem_81;
struct proc* __dec_obj3;
struct list$1proc$ph* __result_obj__17;
    if(    self->len==0    ) {
        litem_79=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value2=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1027, "struct list_item$1proc$ph*"))));
        litem_79->prev=((void*)0);
        litem_79->next=((void*)0);
        __dec_obj1=litem_79->item,
        litem_79->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj1,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_79;
        self->head=litem_79;
    }
    else if(    self->len==1    ) {
        litem_80=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value3=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1037, "struct list_item$1proc$ph*"))));
        litem_80->prev=self->head;
        litem_80->next=((void*)0);
        __dec_obj2=litem_80->item,
        litem_80->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj2,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail=litem_80;
        self->head->next=litem_80;
    }
    else {
        litem_81=(struct list_item$1proc$ph*)come_increment_ref_count(((struct list_item$1proc$ph*)(__right_value4=(struct list_item$1proc$ph*)come_calloc_v2(1, sizeof(struct list_item$1proc$ph)*(1), "/usr/local/include/comelang.h", 1047, "struct list_item$1proc$ph*"))));
        litem_81->prev=self->tail;
        litem_81->next=((void*)0);
        __dec_obj3=litem_81->item,
        litem_81->item=(struct proc*)come_increment_ref_count(item);
        come_call_finalizer(proc_finalize, __dec_obj3,(void*)0, (void*)0, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, (void*)0);
        self->tail->next=litem_81;
        self->tail=litem_81;
    }
    self->len++;
    __result_obj__17 = self;
    come_call_finalizer(proc_finalize, item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__17;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_82;
unsigned long  long* __result_obj__18;
unsigned long  long* __result_obj__19;
pagetable_82 = (void*)0;
    pagetable_82=(unsigned long  long*)kalloc();
    if(    pagetable_82==0    ) {
        __result_obj__18 = (unsigned long  long*)0;
        return __result_obj__18;
    }
    memset(pagetable_82,0,4096);
    __result_obj__19 = pagetable_82;
    return __result_obj__19;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__83;
unsigned long  long* __result_obj__20;
unsigned long  long addr_84;
unsigned long  long* pte_85;
unsigned long  long pa_86;
unsigned int flags_87;
char* mem_88;
unsigned long  long* __result_obj__21;
new__83 = (void*)0;
    new__83=uvmcreate();
    if(    new__83==0    ) {
        __result_obj__20 = (unsigned long  long*)0;
        return __result_obj__20;
    }
    for(    addr_84=0    ;    addr_84<sz    ;    addr_84+=4096    ){
        pte_85=walk(old,addr_84,0);
        if(        !pte_85||!(*pte_85&(1L<<0))        ) {
            continue;
        }
        pa_86=(((*pte_85)>>10)<<12);
        flags_87=((*pte_85)&1023);
        mem_88=kalloc();
        if(        mem_88==0        ) {
            panic("coypuvm");
        }
        memmove(mem_88,(char*)pa_86,4096);
        if(        mappages(new__83,addr_84,4096,((((unsigned long  long)mem_88)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_88);
            panic("copyuvm");
        }
    }
    __result_obj__21 = new__83;
    return __result_obj__21;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_89;
unsigned long  long pte_90;
unsigned long  long pa_91;
unsigned long  long* child_92;
    for(    i_89=0    ;    i_89<512    ;    i_89++    ){
        pte_90=pagetable[i_89];
        if(        !(pte_90&(1L<<0))        ) {
            continue;
        }
        pa_91=(((pte_90)>>10)<<12);
        if(        pte_90&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_91);
            }
        }
        else if(        level>0        ) {
            child_92=(unsigned long  long*)pa_91;
            free_pagetable(child_92,level-1);
            kfree(child_92);
        }
    }
}

void exec_prog(char* hello_elf){
void* __right_value5 = (void*)0;
struct proc* p_93;
void* __right_value6 = (void*)0;
struct proc* result_94;
unsigned long  long* pagetable_111;
struct elfhdr* eh_112;
struct proghdr* ph_113;
unsigned long  long size_114;
unsigned long  long va_115;
int i_116;
void* pa_117;
char* pa_118;
    p_93=((struct proc*)(__right_value5=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    free_proc(p_93);
    result_94=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 945, "struct proc*"));
    result_94->context=p_93->context;
    list$1proc$ph_remove_by_pointer(gProc,p_93);
    pagetable_111=(unsigned long  long*)kalloc();
    memset(pagetable_111,0,4096);
    setting_user_pagetable(result_94,pagetable_111);
    result_94->pagetable=pagetable_111;
    eh_112=(struct elfhdr*)hello_elf;
    if(    eh_112->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_113=(struct proghdr*)(hello_elf+eh_112->phoff);
    size_114=ph_113->filesz;
    result_94->vaddr=(((ph_113->vaddr))&~(4096-1));
    va_115=0;
    for(    i_116=0    ;    i_116<eh_112->phnum    ;    i_116++,ph_113++    ){
        if(        ph_113->type!=1        ) {
            continue;
        }
        for(        va_115=(((ph_113->vaddr))&~(4096-1))        ;        va_115<ph_113->vaddr+ph_113->memsz        ;        va_115+=4096        ){
            pa_117=kalloc();
            if(            !pa_117            ) {
                panic("kalloc");
            }
            memset(pa_117,0,4096);
            mappages(result_94->pagetable,va_115,4096,(unsigned long  long)pa_117,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_94->pagetable,ph_113->vaddr,hello_elf+ph_113->off,ph_113->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_118=kalloc();
    if(    !pa_118    ) {
        panic("kalloc");
    }
    memset(pa_118,0,4096);
    mappages(result_94->pagetable,va_115,4096,(unsigned long  long)pa_118,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_94->stack=(char*)va_115+4096;
    result_94->stack_top=(char*)va_115;
    result_94->context.sp=va_115+4096;
    result_94->context.mepc=eh_112->entry;
    list$1proc$ph_add(gProc,(struct proc*)come_increment_ref_count(result_94));
    come_call_finalizer(proc_finalize, result_94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_95;
struct list_item$1proc$ph* it_96;
struct list$1proc$ph* __result_obj__25;
    it2_95=0;
    it_96=self->head;
    while(    it_96!=((void*)0)    ) {
        if(        it_96->item==item        ) {
            list$1proc$ph_delete(self,it2_95,it2_95+1);
            break;
        }
        it2_95++;
        it_96=it_96->next;
    }
    __result_obj__25 = self;
    return __result_obj__25;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_97;
struct list$1proc$ph* __result_obj__22;
struct list_item$1proc$ph* it_100;
int i_101;
struct list_item$1proc$ph* prev_it_102;
struct list_item$1proc$ph* it_103;
int i_104;
struct list_item$1proc$ph* prev_it_105;
struct list_item$1proc$ph* it_106;
struct list_item$1proc$ph* head_prev_it_107;
struct list_item$1proc$ph* tail_it_108;
int i_109;
struct list_item$1proc$ph* prev_it_110;
struct list$1proc$ph* __result_obj__24;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_97=tail;
        tail=head;
        head=tmp_97;
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
        it_100=self->head;
        i_101=0;
        while(        it_100!=((void*)0)        ) {
            if(            i_101<tail            ) {
                prev_it_102=it_100;
                it_100=it_100->next;
                i_101++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_101==tail            ) {
                self->head=it_100;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_100=it_100->next;
                i_101++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_103=self->head;
        i_104=0;
        while(        it_103!=((void*)0)        ) {
            if(            i_104==head            ) {
                self->tail=it_103->prev;
                self->tail->next=((void*)0);
            }
            if(            i_104>=head            ) {
                prev_it_105=it_103;
                it_103=it_103->next;
                i_104++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_103=it_103->next;
                i_104++;
            }
        }
    }
    else {
        it_106=self->head;
        head_prev_it_107=((void*)0);
        tail_it_108=((void*)0);
        i_109=0;
        while(        it_106!=((void*)0)        ) {
            if(            i_109==head            ) {
                head_prev_it_107=it_106->prev;
            }
            if(            i_109==tail            ) {
                tail_it_108=it_106;
            }
            if(            i_109>=head&&i_109<tail            ) {
                prev_it_110=it_106;
                it_106=it_106->next;
                i_109++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_110, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_106=it_106->next;
                i_109++;
            }
        }
        if(        head_prev_it_107!=((void*)0)        ) {
            head_prev_it_107->next=tail_it_108;
        }
        if(        tail_it_108!=((void*)0)        ) {
            tail_it_108->prev=head_prev_it_107;
        }
    }
    __result_obj__24 = self;
    return __result_obj__24;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_98;
struct list_item$1proc$ph* prev_it_99;
struct list$1proc$ph* __result_obj__23;
    it_98=self->head;
    while(    it_98!=((void*)0)    ) {
        prev_it_99=it_98;
        it_98=it_98->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
unsigned long  int x_120;
memset(&x_120, 0, sizeof(unsigned long  int));
    x_120=r_sie();
    x_120|=(1UL<<5);
    w_sie(x_120);
    x_120=r_sstatus();
    x_120|=(1UL<<1);
    w_sstatus(x_120);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_121;
    next_121=r_time()+10000UL;
    w_stimecmp(next_121);
}

void timer_handler(){
void* __right_value7 = (void*)0;
struct proc* p_122;
struct context* tf_123;
int old_active_proc_124;
void* __right_value8 = (void*)0;
struct proc* old_125;
void* __right_value9 = (void*)0;
struct proc* new__126;
unsigned long  long a0_127;
    disable_timer_interrupts();
    p_122=((struct proc*)(__right_value7=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value7, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_123=(struct context*)TRAPFRAME;
    p_122->context=*tf_123;
    timer_reset();
    old_active_proc_124=gActiveProc;
    old_125=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__126=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__126!=old_125&&new__126->zombie==0    ) {
        user_sp=new__126->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__126->pagetable)>>12));
        a0_127=new__126->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_127));
        swtch(&new__126->context);
    }
    else {
        gActiveProc=old_active_proc_124;
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
struct context* trapframe_128;
unsigned long  int arg0_129;
unsigned long  int arg1_130;
unsigned long  int arg2_131;
unsigned long  int arg3_132;
unsigned long  int arg4_133;
unsigned long  int arg5_134;
unsigned long  int arg6_135;
unsigned long  int arg_syscall_no_136;
int fd_137;
unsigned long  long user_va_139;
int len_140;
void* __right_value10 = (void*)0;
struct proc* p_141;
int ret_142;
int i_143;
    trapframe_128=(struct context*)TRAPFRAME;
    arg0_129=trapframe_128->a0;
    arg1_130=trapframe_128->a1;
    arg2_131=trapframe_128->a2;
    arg3_132=trapframe_128->a3;
    arg4_133=trapframe_128->a4;
    arg5_134=trapframe_128->a5;
    arg6_135=trapframe_128->a6;
    arg_syscall_no_136=trapframe_128->a7;
    fd_137=arg0_129;
    char kernel_buf_138[256];
    memset(&kernel_buf_138, 0, sizeof(char)    *(256)    );
    user_va_139=arg1_130;
    len_140=arg2_131;
    memset(kernel_buf_138,0,256);
    p_141=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_142=copyin(p_141->pagetable,kernel_buf_138,user_va_139,len_140);
    if(    ret_142<0    ) {
        panic("copyinstr1");
    }
    if(    is_pipe(fd_137)    ) {
        pipewrite(fd_137,kernel_buf_138,len_140);
    }
    else if(    is_stdout(fd_137)    ) {
        for(        i_143=0        ;        i_143<len_140        ;        i_143++        ){
            putchar(kernel_buf_138[i_143]);
        }
    }
    else {
        panic("write");
    }
    return 0;
}

int Sys_exit(){
struct context* trapframe_144;
unsigned long  int arg0_145;
unsigned long  int arg1_146;
unsigned long  int arg2_147;
unsigned long  int arg3_148;
unsigned long  int arg4_149;
unsigned long  int arg5_150;
unsigned long  int arg6_151;
unsigned long  int arg_syscall_no_152;
void* __right_value11 = (void*)0;
struct proc* p_153;
    trapframe_144=(struct context*)TRAPFRAME;
    arg0_145=trapframe_144->a0;
    arg1_146=trapframe_144->a1;
    arg2_147=trapframe_144->a2;
    arg3_148=trapframe_144->a3;
    arg4_149=trapframe_144->a4;
    arg5_150=trapframe_144->a5;
    arg6_151=trapframe_144->a6;
    arg_syscall_no_152=trapframe_144->a7;
    p_153=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_153->xstatus=arg0_145;
    p_153->zombie=1;
    return 0;
}

int Sys_wait(){
struct context* trapframe_154;
unsigned long  int arg0_155;
unsigned long  int arg1_156;
unsigned long  int arg2_157;
unsigned long  int arg3_158;
unsigned long  int arg4_159;
unsigned long  int arg5_160;
unsigned long  int arg6_161;
unsigned long  int arg_syscall_no_162;
int* status_va_163;
void* __right_value12 = (void*)0;
struct proc* p_164;
int exit_status_165;
int child_pid_166;
int n_167;
struct list$1proc$ph* o2_saved_168;
struct proc* it_171;
    trapframe_154=(struct context*)TRAPFRAME;
    arg0_155=trapframe_154->a0;
    arg1_156=trapframe_154->a1;
    arg2_157=trapframe_154->a2;
    arg3_158=trapframe_154->a3;
    arg4_159=trapframe_154->a4;
    arg5_160=trapframe_154->a5;
    arg6_161=trapframe_154->a6;
    arg_syscall_no_162=trapframe_154->a7;
    status_va_163=(int*)arg0_155;
    p_164=((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_165=0;
    child_pid_166=-1;
    while(    child_pid_166==-1    ) {
        timer_handler();
        n_167=0;
        for(        o2_saved_168=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_171=list$1proc$ph_begin((o2_saved_168))        ;        !list$1proc$ph_end((o2_saved_168))        ;        it_171=list$1proc$ph_next((o2_saved_168))        ){
            if(            it_171->zombie            ) {
                free_proc(it_171);
                exit_status_165=it_171->xstatus;
                child_pid_166=n_167;
                list$1proc$ph_remove_by_pointer(gProc,it_171);
                break;
            }
            n_167++;
        }
        come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    if(    copyout(p_164->pagetable,(unsigned long  long)status_va_163,(void*)&exit_status_165,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_166;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_169;
struct proc* __result_obj__26;
struct proc* __result_obj__27;
struct proc* result_170;
struct proc* __result_obj__28;
result_169 = (void*)0;
result_170 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_169,0,sizeof(struct proc*));
        __result_obj__26 = result_169;
        return __result_obj__26;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__27 = self->it->item;
        return __result_obj__27;
    }
    memset(&result_170,0,sizeof(struct proc*));
    __result_obj__28 = result_170;
    return __result_obj__28;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_172;
struct proc* __result_obj__29;
struct proc* __result_obj__30;
struct proc* result_173;
struct proc* __result_obj__31;
result_172 = (void*)0;
result_173 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_172,0,sizeof(struct proc*));
        __result_obj__29 = result_172;
        return __result_obj__29;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__30 = self->it->item;
        return __result_obj__30;
    }
    memset(&result_173,0,sizeof(struct proc*));
    __result_obj__31 = result_173;
    return __result_obj__31;
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_174;
struct list_item$1proc$ph* prev_it_175;
    it_174=self->head;
    while(    it_174!=((void*)0)    ) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context* trapframe_176;
unsigned long  int arg0_177;
unsigned long  int arg1_178;
unsigned long  int arg2_179;
unsigned long  int arg3_180;
unsigned long  int arg4_181;
unsigned long  int arg5_182;
unsigned long  int arg6_183;
unsigned long  int arg_syscall_no_184;
unsigned long  long user_va_186;
void* __right_value13 = (void*)0;
struct proc* p_187;
int result_188;
    trapframe_176=(struct context*)TRAPFRAME;
    arg0_177=trapframe_176->a0;
    arg1_178=trapframe_176->a1;
    arg2_179=trapframe_176->a2;
    arg3_180=trapframe_176->a3;
    arg4_181=trapframe_176->a4;
    arg5_182=trapframe_176->a5;
    arg6_183=trapframe_176->a6;
    arg_syscall_no_184=trapframe_176->a7;
    char kernel_buf_185[256];
    memset(&kernel_buf_185, 0, sizeof(char)    *(256)    );
    user_va_186=arg0_177;
    p_187=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_187->pagetable,kernel_buf_185,user_va_186,256);
    result_188=fs_open(kernel_buf_185);
    return result_188;
}

int Sys_fork(){
struct context* trapframe_189;
unsigned long  int arg0_190;
unsigned long  int arg1_191;
unsigned long  int arg2_192;
unsigned long  int arg3_193;
unsigned long  int arg4_194;
unsigned long  int arg5_195;
unsigned long  int arg6_196;
unsigned long  int arg_syscall_no_197;
void* __right_value14 = (void*)0;
struct proc* p_198;
int fork_flag_199;
void* __right_value15 = (void*)0;
struct proc* child_200;
unsigned long  long sp_201;
int result_202;
memset(&fork_flag_199, 0, sizeof(int));
    trapframe_189=(struct context*)TRAPFRAME;
    arg0_190=trapframe_189->a0;
    arg1_191=trapframe_189->a1;
    arg2_192=trapframe_189->a2;
    arg3_193=trapframe_189->a3;
    arg4_194=trapframe_189->a4;
    arg5_195=trapframe_189->a5;
    arg6_196=trapframe_189->a6;
    arg_syscall_no_197=trapframe_189->a7;
    p_198=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_198->program,fork_flag_199=1);
    child_200=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_201=child_200->context.sp;
    child_200->context=*trapframe_189;
    child_200->context.mepc=child_200->context.mepc+4;
    child_200->context.sp=sp_201;
    child_200->context.a0=0;
    result_202=list$1proc$ph_length(gProc)-1;
    return result_202;
}

int Sys_execv(){
struct context* trapframe_203;
unsigned long  int arg0_204;
unsigned long  int arg1_205;
unsigned long  int arg2_206;
unsigned long  int arg3_207;
unsigned long  int arg4_208;
unsigned long  int arg5_209;
unsigned long  int arg6_210;
unsigned long  int arg_syscall_no_211;
int argc_212;
unsigned long  long user_va_214;
void* __right_value16 = (void*)0;
struct proc* p_215;
char* path_216;
int fd_218;
int ret_219;
void* __right_value17 = (void*)0;
struct proc* result_220;
    trapframe_203=(struct context*)TRAPFRAME;
    arg0_204=trapframe_203->a0;
    arg1_205=trapframe_203->a1;
    arg2_206=trapframe_203->a2;
    arg3_207=trapframe_203->a3;
    arg4_208=trapframe_203->a4;
    arg5_209=trapframe_203->a5;
    arg6_210=trapframe_203->a6;
    arg_syscall_no_211=trapframe_203->a7;
    argc_212=arg2_206;
    char kernel_buf_213[256];
    memset(&kernel_buf_213, 0, sizeof(char)    *(256)    );
    user_va_214=arg0_204;
    p_215=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_215->pagetable,kernel_buf_213,user_va_214,256);
    path_216=kernel_buf_213;
    char hello_elf_217[4096];
    memset(&hello_elf_217, 0, sizeof(char)    *(4096)    );
    fd_218=fs_open(path_216);
    ret_219=fs_read(fd_218,hello_elf_217,4096);
    if(    ret_219<0    ) {
        trapframe_203->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_217);
    result_220=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_203->mepc=result_220->context.mepc+4;
    trapframe_203->sp=result_220->context.sp;
    return 0;
}

int Sys_dup2(){
struct context* trapframe_221;
unsigned long  int arg0_222;
unsigned long  int arg1_223;
unsigned long  int arg2_224;
unsigned long  int arg3_225;
unsigned long  int arg4_226;
unsigned long  int arg5_227;
unsigned long  int arg6_228;
unsigned long  int arg_syscall_no_229;
unsigned long  long oldfd_230;
unsigned long  long newfd_231;
    trapframe_221=(struct context*)TRAPFRAME;
    arg0_222=trapframe_221->a0;
    arg1_223=trapframe_221->a1;
    arg2_224=trapframe_221->a2;
    arg3_225=trapframe_221->a3;
    arg4_226=trapframe_221->a4;
    arg5_227=trapframe_221->a5;
    arg6_228=trapframe_221->a6;
    arg_syscall_no_229=trapframe_221->a7;
    oldfd_230=arg0_222;
    newfd_231=arg1_223;
    fs_dup2(oldfd_230,newfd_231);
    return 0;
}

int Sys_pipe(){
struct context* trapframe_232;
unsigned long  int arg0_233;
unsigned long  int arg1_234;
unsigned long  int arg2_235;
unsigned long  int arg3_236;
unsigned long  int arg4_237;
unsigned long  int arg5_238;
unsigned long  int arg6_239;
unsigned long  int arg_syscall_no_240;
char* kernel_buf_241;
unsigned long  long user_va_242;
int fd0_243;
int fd1_244;
void* __right_value18 = (void*)0;
struct proc* p_245;
kernel_buf_241 = (void*)0;
memset(&fd0_243, 0, sizeof(int));
memset(&fd1_244, 0, sizeof(int));
    trapframe_232=(struct context*)TRAPFRAME;
    arg0_233=trapframe_232->a0;
    arg1_234=trapframe_232->a1;
    arg2_235=trapframe_232->a2;
    arg3_236=trapframe_232->a3;
    arg4_237=trapframe_232->a4;
    arg5_238=trapframe_232->a5;
    arg6_239=trapframe_232->a6;
    arg_syscall_no_240=trapframe_232->a7;
    user_va_242=arg0_233;
    pipe_open(&fd0_243,&fd1_244);
    p_245=((struct proc*)(__right_value18=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value18, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_245->pagetable,(unsigned long  long)user_va_242,(char*)&fd0_243,sizeof(int))<0    ) {
        panic("copyout");
    }
    if(    copyout(p_245->pagetable,(unsigned long  long)user_va_242+4,(char*)&fd1_244,sizeof(int))<0    ) {
        panic("copyout");
    }
    return 0;
}

int Sys_read(){
struct context* trapframe_246;
unsigned long  int arg0_247;
unsigned long  int arg1_248;
unsigned long  int arg2_249;
unsigned long  int arg3_250;
unsigned long  int arg4_251;
unsigned long  int arg5_252;
unsigned long  int arg6_253;
unsigned long  int arg_syscall_no_254;
int fd_255;
unsigned long  long destva_256;
unsigned long  int n_257;
int ret_259;
void* __right_value19 = (void*)0;
struct proc* p_260;
memset(&ret_259, 0, sizeof(int));
    trapframe_246=(struct context*)TRAPFRAME;
    arg0_247=trapframe_246->a0;
    arg1_248=trapframe_246->a1;
    arg2_249=trapframe_246->a2;
    arg3_250=trapframe_246->a3;
    arg4_251=trapframe_246->a4;
    arg5_252=trapframe_246->a5;
    arg6_253=trapframe_246->a6;
    arg_syscall_no_254=trapframe_246->a7;
    fd_255=arg0_247;
    destva_256=arg1_248;
    n_257=arg2_249;
    char kernel_buf_258[256];
    memset(&kernel_buf_258, 0, sizeof(char)    *(256)    );
    if(    is_stdin(fd_255)    ) {
        ret_259=uart_readn(kernel_buf_258,n_257);
    }
    else if(    is_pipe(fd_255)    ) {
        ret_259=piperead(fd_255,kernel_buf_258,n_257);
    }
    else {
        ret_259=fs_read(fd_255,kernel_buf_258,n_257);
        if(        ret_259<0        ) {
            trapframe_246->a0=ret_259;
            return 0;
        }
        kernel_buf_258[ret_259]=0;
    }
    p_260=((struct proc*)(__right_value19=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value19, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_260->pagetable,destva_256,kernel_buf_258,ret_259)<0    ) {
        panic("read: copyout failed");
    }
    return ret_259;
}

unsigned long  int syscall_handler(){
struct context* trapframe_261;
unsigned long  int arg0_262;
unsigned long  int arg1_263;
unsigned long  int arg2_264;
unsigned long  int arg3_265;
unsigned long  int arg4_266;
unsigned long  int arg5_267;
unsigned long  int arg6_268;
unsigned long  int arg_syscall_no_269;
unsigned long  long result_270;
int fd_271;
int ret_272;
    disable_timer_interrupts();
    trapframe_261=(struct context*)TRAPFRAME;
    arg0_262=trapframe_261->a0;
    arg1_263=trapframe_261->a1;
    arg2_264=trapframe_261->a2;
    arg3_265=trapframe_261->a3;
    arg4_266=trapframe_261->a4;
    arg5_267=trapframe_261->a5;
    arg6_268=trapframe_261->a6;
    arg_syscall_no_269=trapframe_261->a7;
    result_270=0;
    switch (    arg_syscall_no_269) {
        case 64:
        {
            result_270=Sys_write();
        }
        break;
        case 73:
        {
            result_270=Sys_pipe();
        }
        break;
        case 72:
        {
            result_270=Sys_dup2();
        }
        break;
        case 70:
        {
            result_270=Sys_exit();
        }
        break;
        case 71:
        {
            result_270=Sys_wait();
        }
        break;
        case 66:
        {
            result_270=Sys_open();
        }
        break;
        case 65:
        {
            result_270=Sys_read();
        }
        break;
        case 67:
        {
            fd_271=arg0_262;
            ret_272=fs_close(fd_271);
            result_270=ret_272;
        }
        break;
        case 68:
        {
            result_270=Sys_fork();
        }
        break;
        case 69:
        {
            result_270=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_261->a0=result_270;
    return result_270;
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
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2458, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_275;
struct list_item$1proc$ph* prev_it_276;
    it_275=self->head;
    while(    it_275!=((void*)0)    ) {
        prev_it_276=it_275;
        it_275=it_275->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_276, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_277;
void* __right_value22 = (void*)0;
struct proc* p_278;
unsigned long  int usersp_279;
unsigned long  long usersatp_280;
unsigned long  int entry_281;
memset(&fork_flag_277, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_277=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_278=((struct proc*)(__right_value22=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value22, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_279=(unsigned long  long)(p_278->stack);
    usersatp_280=((8L<<60)|(((unsigned long  long)p_278->pagetable)>>12));
    entry_281=p_278->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_278;
    kernel_sp=read_s_sp();
    enter_user(entry_281,usersp_279,usersatp_280,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__33;
struct mem_block* current_282;
struct mem_block* prev_283;
void* __result_obj__34;
struct mem_block* new_mem_284;
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
    current_282=free_list;
    prev_283=((void*)0);
    while(    current_282!=((void*)0)    ) {
        if(        current_282->size>=size        ) {
            if(            prev_283==((void*)0)            ) {
                free_list=current_282->next;
            }
            else {
                prev_283->next=current_282->next;
            }
            __result_obj__34 = (void*)(current_282+1);
            return __result_obj__34;
        }
        prev_283=current_282;
        current_282=current_282->next;
    }
    new_mem_284=(struct mem_block*)sbrk(size);
    if(    new_mem_284==(void*)-1    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    new_mem_284->size=size;
    new_mem_284->next=((void*)0);
    __result_obj__36 = (void*)(new_mem_284+1);
    return __result_obj__36;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_285;
void* __result_obj__37;
void* ptr_286;
void* __result_obj__38;
    total_size_285=nmemb*size;
    if(    total_size_285==0    ) {
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    ptr_286=malloc(total_size_285);
    if(    ptr_286!=((void*)0)    ) {
        memset(ptr_286,0,total_size_285);
    }
    __result_obj__38 = ptr_286;
    return __result_obj__38;
}

void free(void* ptr){
struct mem_block* block_287;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_287=(struct mem_block*)ptr-1;
    block_287->next=free_list;
    free_list=block_287;
}

char* strdup(const char* s){
char* s2_288;
unsigned long  int len_289;
char* p_290;
char* __result_obj__39;
    s2_288=s;
    len_289=strlen(s2_288)+1;
    p_290=malloc(len_289);
    if(    p_290    ) {
        memcpy(p_290,s2_288,len_289);
    }
    __result_obj__39 = p_290;
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
        const char* h_291=haystack;
        const char* n_292=needle;
        while(        *h_291&&*n_292&&(*h_291==*n_292)        ) {
            h_291++;
            n_292++;
        }
        if(        !*n_292        ) {
            __result_obj__41 = (char*)haystack;
            return __result_obj__41;
        }
    }
    __result_obj__42 = ((void*)0);
    return __result_obj__42;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_293;
int i_294;
void* __result_obj__43;
    cdst_293=(char*)dst;
    for(    i_294=0    ;    i_294<n    ;    i_294++    ){
        cdst_293[i_294]=c;
    }
    __result_obj__43 = dst;
    return __result_obj__43;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_295;
const unsigned char* s2_296;
memset(&s1_295, 0, sizeof(const unsigned char*));
memset(&s2_296, 0, sizeof(const unsigned char*));
    s1_295=v1;
    s2_296=v2;
    while(    n-->0    ) {
        if(        *s1_295!=*s2_296        ) {
            return *s1_295-*s2_296;
        }
        s1_295++,s2_296++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_297;
char* d_298;
void* __result_obj__44;
void* __result_obj__45;
s_297 = (void*)0;
d_298 = (void*)0;
    if(    n==0    ) {
        __result_obj__44 = dst;
        return __result_obj__44;
    }
    s_297=src;
    d_298=dst;
    if(    s_297<d_298&&s_297+n>d_298    ) {
        s_297+=n;
        d_298+=n;
        while(        n-->0        ) {
            *--d_298=*--s_297;
        }
    }
    else {
        while(        n-->0        ) {
            *d_298++=*s_297++;
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
char* os_299;
char* __result_obj__47;
os_299 = (void*)0;
    os_299=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__47 = os_299;
    return __result_obj__47;
}

int strlen(const char* s){
int n_300;
memset(&n_300, 0, sizeof(int));
    for(    n_300=0    ;    s[n_300]    ;    n_300++    ){
        ;
    }
    return n_300;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_301;
char* __result_obj__48;
    d_301=dest;
    while(    *d_301    ) {
        d_301++;
    }
    while(    n--&&*src    ) {
        *d_301++=*src++;
    }
    *d_301=0;
    __result_obj__48 = dest;
    return __result_obj__48;
}

char* strtok(char* s, const char* delim){
static char* next_302;
char* start_303;
char* p_304;
char* __result_obj__49;
int is_delim_306;
char* __result_obj__50;
int is_delim_308;
char* __result_obj__51;
next_302 = (void*)0;
start_303 = (void*)0;
p_304 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_302=s;
    }
    if(    next_302==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    start_303=next_302;
    while(    *start_303!=0    ) {
        const char* d_305=delim;
        is_delim_306=0;
        while(        *d_305!=0        ) {
            if(            *start_303==*d_305            ) {
                is_delim_306=1;
                break;
            }
            d_305++;
        }
        if(        !is_delim_306        ) {
            break;
        }
        start_303++;
    }
    if(    *start_303==0    ) {
        next_302=((void*)0);
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    p_304=start_303;
    while(    *p_304!=0    ) {
        const char* d_307=delim;
        is_delim_308=0;
        while(        *d_307!=0        ) {
            if(            *p_304==*d_307            ) {
                is_delim_308=1;
                break;
            }
            d_307++;
        }
        if(        is_delim_308        ) {
            break;
        }
        p_304++;
    }
    if(    *p_304==0    ) {
        next_302=((void*)0);
    }
    else {
        *p_304=0;
        next_302=p_304+1;
    }
    __result_obj__51 = start_303;
    return __result_obj__51;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_309;
int i_311;
int negative_312;
char* __result_obj__52;
int digit_313;
char* __result_obj__53;
    p_309=buf;
    char tmp_310[32];
    memset(&tmp_310, 0, sizeof(char)    *(32)    );
    i_311=0;
    negative_312=0;
    if(    base<2||base>16    ) {
        *p_309=0;
        __result_obj__52 = p_309;
        return __result_obj__52;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_312=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_313=val_%base;
        tmp_310[i_311++]=(((digit_313<10))?(48+digit_313):(97+digit_313-10));
        val_/=base;
    } while(    val_    );
    if(    negative_312    ) {
        *p_309++=45;
    }
    while(    i_311--    ) {
        *p_309++=tmp_310[i_311];
    }
    *p_309=0;
    __result_obj__53 = buf;
    return __result_obj__53;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_315;
const char* s_316;
unsigned long  int remaining_318;
s_316 = (void*)0;
    char out2_314[512];
    memset(&out2_314, 0, sizeof(char)    *(512)    );
    p_315=out2_314;
    char buf_317[32];
    memset(&buf_317, 0, sizeof(char)    *(32)    );
    remaining_318=sizeof(out2_314);
    for(    ;    *fmt&&remaining_318>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_315++=*fmt;
            remaining_318--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_317,__builtin_va_arg(ap,int),10,1);
            s_316=buf_317;
            break;
            case 117:
            itoa(buf_317,__builtin_va_arg(ap,unsigned int),10,0);
            s_316=buf_317;
            break;
            case 120:
            itoa(buf_317,__builtin_va_arg(ap,unsigned int),16,0);
            s_316=buf_317;
            break;
            case 115:
            s_316=__builtin_va_arg(ap,const char*);
            if(            !s_316            ) {
                s_316="(null)";
            }
            break;
            case 99:
            buf_317[0]=(char)__builtin_va_arg(ap,int);
            buf_317[1]=0;
            s_316=buf_317;
            break;
            case 112:
            strncpy(buf_317,"0x",32);
            itoa(buf_317+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_316=buf_317;
            break;
            case 37:
            buf_317[0]=37;
            buf_317[1]=0;
            s_316=buf_317;
            break;
            default:
            buf_317[0]=37;
            buf_317[1]=*fmt;
            buf_317[2]=0;
            s_316=buf_317;
            break;
        }
        while(        *s_316&&remaining_318>1        ) {
            *p_315++=*s_316++;
            remaining_318--;
        }
    }
    *p_315=0;
    *out=strdup(out2_314);
    return p_315-out2_314;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
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

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_324;
char* p_325;
const char* s_326;
unsigned long  int remaining_328;
memset(&ap_324, 0, sizeof(va_list));
s_326 = (void*)0;
    __builtin_va_start(ap_324,fmt);
    p_325=out;
    char buf_327[32];
    memset(&buf_327, 0, sizeof(char)    *(32)    );
    remaining_328=out_size;
    if(    remaining_328==0    ) {
        __builtin_va_end(ap_324);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_328>1            ) {
                *p_325++=*fmt;
                remaining_328--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_326=__builtin_va_arg(ap_324,const char*);
            while(            *s_326&&remaining_328>1            ) {
                *p_325++=*s_326++;
                remaining_328--;
            }
            break;
            case 100:
            itoa(buf_327,__builtin_va_arg(ap_324,int),10,0);
            s_326=buf_327;
            while(            *s_326&&remaining_328>1            ) {
                *p_325++=*s_326++;
                remaining_328--;
            }
            break;
            case 120:
            itoa(buf_327,(unsigned int)__builtin_va_arg(ap_324,int),16,1);
            s_326=buf_327;
            while(            *s_326&&remaining_328>1            ) {
                *p_325++=*s_326++;
                remaining_328--;
            }
            break;
            case 99:
            if(            remaining_328>1            ) {
                *p_325++=(char)__builtin_va_arg(ap_324,int);
                remaining_328--;
            }
            break;
            case 112:
            s_326="0x";
            while(            *s_326&&remaining_328>1            ) {
                *p_325++=*s_326++;
                remaining_328--;
            }
            itoa(buf_327,(long)__builtin_va_arg(ap_324,void*),16,1);
            s_326=buf_327;
            while(            *s_326&&remaining_328>1            ) {
                *p_325++=*s_326++;
                remaining_328--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_327,__builtin_va_arg(ap_324,long),10,1);
                s_326=buf_327;
                while(                *s_326&&remaining_328>1                ) {
                    *p_325++=*s_326++;
                    remaining_328--;
                }
            }
            break;
            default:
            if(            remaining_328>1            ) {
                *p_325++=37;
                remaining_328--;
                if(                remaining_328>1                ) {
                    *p_325++=*fmt;
                    remaining_328--;
                }
            }
            break;
        }
    }
    *p_325=0;
    __builtin_va_end(ap_324);
    return p_325-out;
}

void printint(int val_, int base, int sign){
int i_330;
int negative_331;
unsigned int uval_332;
int digit_333;
memset(&uval_332, 0, sizeof(unsigned int));
    char buf_329[33];
    memset(&buf_329, 0, sizeof(char)    *(33)    );
    i_330=0;
    negative_331=0;
    if(    sign&&val_<0    ) {
        negative_331=1;
        uval_332=-val_;
    }
    else {
        uval_332=(unsigned int)val_;
    }
    if(    uval_332==0    ) {
        putchar(48);
        return;
    }
    while(    uval_332>0    ) {
        digit_333=uval_332%base;
        buf_329[i_330++]=((digit_333<10)?(48+digit_333):(97+(digit_333-10)));
        uval_332/=base;
    }
    if(    negative_331    ) {
        putchar(45);
    }
    while(    --i_330>=0    ) {
        putchar(buf_329[i_330]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_335;
int negative_336;
int digit_337;
    char buf_334[65];
    memset(&buf_334, 0, sizeof(char)    *(65)    );
    i_335=0;
    negative_336=0;
    if(    sign&&(long)val_<0    ) {
        negative_336=1;
        val_=-(long)val_;
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

void printlonglong(unsigned long  long val_, int base, int sign){
int i_339;
int negative_340;
int digit_341;
    char buf_338[65];
    memset(&buf_338, 0, sizeof(char)    *(65)    );
    i_339=0;
    negative_340=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_340=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_341=val_%base;
        buf_338[i_339++]=((digit_341<10)?(48+digit_341):(97+(digit_341-10)));
        val_/=base;
    }
    if(    negative_340    ) {
        putchar(45);
    }
    while(    --i_339>=0    ) {
        putchar(buf_338[i_339]);
    }
}

int printf(const char* fmt, ...){
va_list ap_342;
const char* p_343;
int lcount_344;
unsigned long  int val__345;
unsigned long  long val__346;
long val__347;
long long val__348;
int i_349;
int val__350;
unsigned int val__351;
unsigned long  int val__352;
char c_354;
memset(&ap_342, 0, sizeof(va_list));
p_343 = (void*)0;
    __builtin_va_start(ap_342,fmt);
    for(    p_343=fmt    ;    *p_343    ;    p_343++    ){
        if(        *p_343!=37        ) {
            putchar(*p_343);
            continue;
        }
        p_343++;
        if(        *p_343==108        ) {
            lcount_344=1;
            if(            *(p_343+1)==108            ) {
                lcount_344=2;
                p_343++;
            }
            p_343++;
            switch (            *p_343) {
                case 120:
                {
                    if(                    lcount_344==1                    ) {
                        val__345=__builtin_va_arg(ap_342,unsigned long  int);
                        printlong(val__345,16,0);
                    }
                    else {
                        val__346=__builtin_va_arg(ap_342,unsigned long  long);
                        printlonglong(val__346,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_344==1                    ) {
                        val__347=__builtin_va_arg(ap_342,long);
                        printlong(val__347,10,1);
                    }
                    else {
                        val__348=__builtin_va_arg(ap_342,long  long);
                        printlonglong(val__348,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_349=0                    ;                    i_349<lcount_344                    ;                    i_349++                    ){
                        putchar(108);
                    }
                    putchar(*p_343);
                    break;
                }
            }
        }
        else {
            switch (            *p_343) {
                case 100:
                {
                    val__350=__builtin_va_arg(ap_342,int);
                    printint(val__350,10,1);
                    break;
                }
                case 120:
                {
                    val__351=__builtin_va_arg(ap_342,unsigned int);
                    printint(val__351,16,0);
                    break;
                }
                case 112:
                {
                    val__352=(unsigned long  int)__builtin_va_arg(ap_342,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__352,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_353=__builtin_va_arg(ap_342,const char*);
                    if(                    !s_353                    ) {
                        s_353="(null)";
                    }
                    while(                    *s_353                    ) {
                        putchar(*s_353++);
                    }
                    break;
                }
                case 99:
                {
                    c_354=(char)__builtin_va_arg(ap_342,int);
                    putchar(c_354);
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
                    putchar(*p_343);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_342);
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
struct buffer* buf_355;
int i_356;
void* __right_value25 = (void*)0;
    buf_355=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_355,"%s %d\n",sname,sline);
    for(    i_356=gNumComeStackFrame-2    ;    i_356>=0    ;    i_356--    ){
        buffer_append_format(buf_355,"%s %d #%d\n",gComeStackFrameSName[i_356],gComeStackFrameSLine[i_356],gComeStackFrameID[i_356]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value25=buffer_to_string(buf_355))));
    (__right_value25 = come_decrement_ref_count(__right_value25, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_355, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_357;
    for(    i_357=gNumComeStackFrame-1    ;    i_357>=0    ;    i_357--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_357],gComeStackFrameSLine[i_357],gComeStackFrameID[i_357]);
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
int i_358;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_358=0    ;    i_358<gHeapPages.mSizePages    ;    i_358++    ){
        gHeapPages.mPages[i_358]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_359;
int n_360;
_Bool flag_361;
int i_362;
struct sMemHeaderTiny* it_363;
int n_364;
int i_365;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_359=gAllocMem;
        n_360=0;
        while(        it_359        ) {
            n_360++;
            flag_361=(_Bool)0;
            printf("#%d ",n_360);
            if(            it_359->class_name            ) {
                printf("%p (%s): ",(char*)it_359+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_359->class_name);
            }
            for(            i_362=0            ;            i_362<16            ;            i_362++            ){
                if(                it_359->sname[i_362]                ) {
                    printf("%s %d #%d, ",it_359->sname[i_362],it_359->sline[i_362],it_359->id[i_362]);
                    flag_361=(_Bool)1;
                }
            }
            if(            flag_361            ) {
                puts("");
            }
            it_359=it_359->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_360,gNumAlloc,gNumFree);
    }
    else {
        it_363=(struct sMemHeaderTiny*)gAllocMem;
        n_364=0;
        while(        it_363        ) {
            n_364++;
            if(            it_363->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_364,(char*)it_363+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_363->class_name,it_363->sname,it_363->sline);
            }
            it_363=it_363->next;
        }
        if(        n_364>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_364,gNumAlloc,gNumFree);
        }
    }
    for(    i_365=0    ;    i_365<gHeapPages.mSizePages    ;    i_365++    ){
        free(gHeapPages.mPages[i_365]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_366;
void* __result_obj__55;
    result_366=((void*)0);
    size=(size+7&~7);
    result_366=calloc(1,size);
    __result_obj__55 = result_366;
    return __result_obj__55;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_367;
struct sMemHeader* prev_it_368;
struct sMemHeader* next_it_369;
unsigned long  int size_370;
struct sMemHeaderTiny* it_371;
struct sMemHeaderTiny* prev_it_372;
struct sMemHeaderTiny* next_it_373;
unsigned long  int size_374;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_367=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_367->allocated!=177783            ) {
                return;
            }
            it_367->allocated=0;
            prev_it_368=it_367->prev;
            next_it_369=it_367->next;
            if(            gAllocMem==it_367            ) {
                gAllocMem=next_it_369;
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
        else {
            it_371=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_371->allocated!=177783            ) {
                return;
            }
            it_371->allocated=0;
            prev_it_372=it_371->prev;
            next_it_373=it_371->next;
            if(            gAllocMem==it_371            ) {
                gAllocMem=(struct sMemHeader*)next_it_373;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_372                ) {
                    prev_it_372->next=next_it_373;
                }
                if(                next_it_373                ) {
                    next_it_373->prev=prev_it_372;
                }
            }
            size_374=it_371->size;
            free(it_371);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_375;
struct sMemHeader* it_376;
int i_377;
int i_378;
void* __result_obj__56;
void* result_379;
struct sMemHeaderTiny* it_380;
void* __result_obj__57;
memset(&i_377, 0, sizeof(int));
memset(&i_378, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_375=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_376=result_375;
        it_376->allocated=177783;
        it_376->size=size+sizeof(struct sMemHeader);
        it_376->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_377=0            ;            i_377<gNumComeStackFrame            ;            i_377++            ){
                it_376->sname[i_377]=gComeStackFrameSName[i_377];
                it_376->sline[i_377]=gComeStackFrameSLine[i_377];
                it_376->id[i_377]=gComeStackFrameID[i_377];
            }
        }
        else {
            for(            i_378=0            ;            i_378<16            ;            i_378++            ){
                it_376->sname[i_378]=gComeStackFrameSName[gNumComeStackFrame-1-i_378];
                it_376->sline[i_378]=gComeStackFrameSLine[gNumComeStackFrame-1-i_378];
                it_376->id[i_378]=gComeStackFrameID[gNumComeStackFrame-1-i_378];
            }
        }
        come_pop_stackframe_v2();
        it_376->next=gAllocMem;
        it_376->prev=((void*)0);
        it_376->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_376;
        }
        gAllocMem=it_376;
        gNumAlloc++;
        __result_obj__56 = (char*)result_375+sizeof(struct sMemHeader);
        return __result_obj__56;
    }
    else {
        result_379=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_380=result_379;
        it_380->allocated=177783;
        it_380->class_name=class_name;
        it_380->sname=sname;
        it_380->sline=sline;
        it_380->size=size+sizeof(struct sMemHeaderTiny);
        it_380->free_next=((void*)0);
        it_380->next=(struct sMemHeaderTiny*)gAllocMem;
        it_380->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_380;
        }
        gAllocMem=(struct sMemHeader*)it_380;
        gNumAlloc++;
        __result_obj__57 = (char*)result_379+sizeof(struct sMemHeaderTiny);
        return __result_obj__57;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_381;
char* __result_obj__58;
struct sMemHeaderTiny* it_382;
char* __result_obj__59;
    if(    gComeDebugLib    ) {
        it_381=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_381->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_381);
            exit(2);
        }
        __result_obj__58 = it_381->class_name;
        return __result_obj__58;
    }
    else {
        it_382=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_382->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_382);
            exit(2);
        }
        __result_obj__59 = it_382->class_name;
        return __result_obj__59;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_383;
int i_384;
struct sMemHeaderTiny* it_385;
    if(    gComeDebugLib    ) {
        it_383=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_383->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_383->class_name        ) {
            printf("(%s): ",it_383->class_name);
        }
        for(        i_384=0        ;        i_384<16        ;        i_384++        ){
            if(            it_383->sname[i_384]            ) {
                printf("%s %d #%d, ",it_383->sname[i_384],it_383->sline[i_384],it_383->id[i_384]);
            }
        }
        puts("");
    }
    else {
        it_385=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_385->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_385->class_name,it_385->sname,it_385->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_386;
unsigned long  int* ref_count_387;
unsigned long  int* size2_388;
void* __result_obj__60;
    mem_386=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_387=(unsigned long  int*)mem_386;
    *ref_count_387=0;
    size2_388=(unsigned long  int*)(mem_386+sizeof(unsigned long  int));
    *size2_388=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__60 = mem_386+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__60;
}

void come_free(void* mem){
unsigned long  int* ref_count_389;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_389=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_389);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__61;
char* mem_390;
unsigned long  int* size_p_391;
unsigned long  int size_392;
void* result_393;
void* __result_obj__62;
    if(    !block    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_390=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_391=(unsigned long  int*)(mem_390+sizeof(unsigned long  int));
    size_392=*size_p_391-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_393=come_calloc_v2(1,size_392,sname,sline,class_name);
    memcpy(result_393,block,size_392);
    __result_obj__62 = result_393;
    return __result_obj__62;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__63;
unsigned long  int* ref_count_394;
void* __result_obj__64;
    if(    mem==((void*)0)    ) {
        __result_obj__63 = mem;
        return __result_obj__63;
    }
    ref_count_394=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_394)++;
    __result_obj__64 = mem;
    return __result_obj__64;
}

void* come_print_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_395;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_395=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_395);
    __result_obj__66 = mem;
    return __result_obj__66;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_396;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_396=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_396;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__67;
void* __result_obj__68;
unsigned long  int* ref_count_397;
unsigned long  int count_398;
void (*finalizer_399)(void*);
void* __result_obj__69;
void* __result_obj__70;
memset(&finalizer_399, 0, sizeof(void (*)(void*)));
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
    ref_count_397=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_397)--;
    }
    count_398=*ref_count_397;
    if(    !no_free&&count_398<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_399=protocol_fun;
            finalizer_399(protocol_obj);
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
void (*finalizer_400)(void*);
void (*finalizer_401)(void*);
void (*finalizer_402)(void*);
unsigned long  int* ref_count_403;
unsigned long  int count_404;
void (*finalizer_405)(void*);
void (*finalizer_406)(void*);
void (*finalizer_407)(void*);
memset(&finalizer_400, 0, sizeof(void (*)(void*)));
memset(&finalizer_401, 0, sizeof(void (*)(void*)));
memset(&finalizer_402, 0, sizeof(void (*)(void*)));
memset(&finalizer_405, 0, sizeof(void (*)(void*)));
memset(&finalizer_406, 0, sizeof(void (*)(void*)));
memset(&finalizer_407, 0, sizeof(void (*)(void*)));
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
                finalizer_400=protocol_fun;
                finalizer_400(protocol_obj);
            }
            finalizer_401=fun;
            finalizer_401(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_402=protocol_fun;
                finalizer_402(protocol_obj);
            }
        }
    }
    else {
        ref_count_403=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_403)--;
        }
        count_404=*ref_count_403;
        if(        !no_free&&count_404<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_405=protocol_fun;
                        finalizer_405(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_406=fun;
                        finalizer_406(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_407=protocol_fun;
                        finalizer_407(protocol_obj);
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
int len_408;
void* __right_value27 = (void*)0;
char* result_409;
char* __result_obj__72;
    if(    str==((void*)0)    ) {
        __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    len_408=strlen(str)+1;
    result_409=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_408)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_409,str,len_408);
    __result_obj__72 = (char*)come_increment_ref_count(result_409);
    (result_409 = come_decrement_ref_count(result_409, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2897, "char*"));
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
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2907, "char*"));
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
struct buffer* result_410;
void* __right_value32 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__77;
    }
    result_410=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2927, "struct buffer*"));
    result_410->size=self->size;
    __dec_obj7=result_410->buf,
    result_410->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2930, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_410->len=self->len;
    memcpy(result_410->buf,self->buf,self->len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_410);
    come_call_finalizer(buffer_finalize, result_410, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_411;
int old_len_412;
int new_size_413;
void* __right_value36 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__81;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_411=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2978, "char*"));
        memcpy(old_buf_411,self->buf,self->size);
        old_len_412=self->len;
        new_size_413=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_413)), "/usr/local/include/comelang.h", 2982, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_411,old_len_412);
        self->buf[old_len_412]=0;
        self->size=new_size_413;
        (old_buf_411 = come_decrement_ref_count(old_buf_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_414;
int old_len_415;
int new_size_416;
void* __right_value38 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_414=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3001, "char*"));
        old_len_415=self->len;
        new_size_416=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_416)), "/usr/local/include/comelang.h", 3005, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_414,old_len_415);
        self->buf[old_len_415]=0;
        self->size=new_size_416;
        (old_buf_414 = come_decrement_ref_count(old_buf_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__84;
int size_417;
void* __right_value39 = (void*)0;
char* old_buf_418;
int old_len_419;
int new_size_420;
void* __right_value40 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__85;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    size_417=strlen(mem);
    if(    self->len+size_417+1+1>=self->size    ) {
        old_buf_418=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3027, "char*"));
        memcpy(old_buf_418,self->buf,self->size);
        old_len_419=self->len;
        new_size_420=(self->size+size_417+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_420)), "/usr/local/include/comelang.h", 3031, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_418,old_len_419);
        self->buf[old_len_419]=0;
        self->size=new_size_420;
        (old_buf_418 = come_decrement_ref_count(old_buf_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_417);
    self->len+=size_417;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__86;
va_list args_421;
char* result_422;
int len_423;
struct buffer* __result_obj__87;
void* __right_value41 = (void*)0;
char* mem_424;
int size_425;
void* __right_value42 = (void*)0;
char* old_buf_426;
int old_len_427;
int new_size_428;
void* __right_value43 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__88;
result_422 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    __builtin_va_start(args_421,msg);
    len_423=vasprintf(&result_422,msg,args_421);
    __builtin_va_end(args_421);
    if(    len_423<0    ) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    mem_424=(char*)come_increment_ref_count(__builtin_string(result_422));
    size_425=strlen(mem_424);
    if(    self->len+size_425+1+1>=self->size    ) {
        old_buf_426=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3075, "char*"));
        memcpy(old_buf_426,self->buf,self->size);
        old_len_427=self->len;
        new_size_428=(self->size+size_425+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_428)), "/usr/local/include/comelang.h", 3079, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_426,old_len_427);
        self->buf[old_len_427]=0;
        self->size=new_size_428;
        (old_buf_426 = come_decrement_ref_count(old_buf_426, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_424,size_425);
    self->len+=size_425;
    self->buf[self->len]=0;
    free(result_422);
    __result_obj__88 = self;
    (mem_424 = come_decrement_ref_count(mem_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__88;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__89;
int size_429;
void* __right_value44 = (void*)0;
char* old_buf_430;
int old_len_431;
int new_size_432;
void* __right_value45 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__90;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    size_429=strlen(mem)+1;
    if(    self->len+size_429+1+1+1>=self->size    ) {
        old_buf_430=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3101, "char*"));
        memcpy(old_buf_430,self->buf,self->size);
        old_len_431=self->len;
        new_size_432=(self->size+size_429+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_432)), "/usr/local/include/comelang.h", 3105, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_430,old_len_431);
        self->buf[old_len_431]=0;
        self->size=new_size_432;
        (old_buf_430 = come_decrement_ref_count(old_buf_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_429);
    self->len+=size_429;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__91;
int* mem_433;
int size_434;
void* __right_value46 = (void*)0;
char* old_buf_435;
int old_len_436;
int new_size_437;
void* __right_value47 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__92;
    if(    self==((void*)0)    ) {
        __result_obj__91 = ((void*)0);
        return __result_obj__91;
    }
    mem_433=&value;
    size_434=sizeof(int);
    if(    self->len+size_434+1+1>=self->size    ) {
        old_buf_435=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3128, "char*"));
        memcpy(old_buf_435,self->buf,self->size);
        old_len_436=self->len;
        new_size_437=(self->size+size_434+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_437)), "/usr/local/include/comelang.h", 3132, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_435,old_len_436);
        self->buf[old_len_436]=0;
        self->size=new_size_437;
        (old_buf_435 = come_decrement_ref_count(old_buf_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_433,size_434);
    self->len+=size_434;
    self->buf[self->len]=0;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_438;
int size_439;
void* __right_value48 = (void*)0;
char* old_buf_440;
int old_len_441;
int new_size_442;
void* __right_value49 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__93;
    mem_438=&value;
    size_439=sizeof(long);
    if(    self->len+size_439+1+1>=self->size    ) {
        old_buf_440=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3151, "char*"));
        memcpy(old_buf_440,self->buf,self->size);
        old_len_441=self->len;
        new_size_442=(self->size+size_439+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_442)), "/usr/local/include/comelang.h", 3155, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_440,old_len_441);
        self->buf[old_len_441]=0;
        self->size=new_size_442;
        (old_buf_440 = come_decrement_ref_count(old_buf_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_438,size_439);
    self->len+=size_439;
    self->buf[self->len]=0;
    __result_obj__93 = self;
    return __result_obj__93;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__94;
short* mem_443;
int size_444;
void* __right_value50 = (void*)0;
char* old_buf_445;
int old_len_446;
int new_size_447;
void* __right_value51 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__95;
    if(    self==((void*)0)    ) {
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    mem_443=&value;
    size_444=sizeof(short);
    if(    self->len+size_444+1+1>=self->size    ) {
        old_buf_445=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3178, "char*"));
        memcpy(old_buf_445,self->buf,self->size);
        old_len_446=self->len;
        new_size_447=(self->size+size_444+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_447)), "/usr/local/include/comelang.h", 3182, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_445,old_len_446);
        self->buf[old_len_446]=0;
        self->size=new_size_447;
        (old_buf_445 = come_decrement_ref_count(old_buf_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_443,size_444);
    self->len+=size_444;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__96;
int len_448;
int new_size_449;
void* __right_value52 = (void*)0;
char* __dec_obj16;
int i_450;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    len_448=self->len;
    len_448=(len_448+3)&~3;
    if(    len_448>=self->size    ) {
        new_size_449=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_449)), "/usr/local/include/comelang.h", 3206, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_449;
    }
    for(    i_450=self->len    ;    i_450<len_448    ;    i_450++    ){
        self->buf[i_450]=0;
    }
    self->len=len_448;
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
struct buffer* result_451;
struct buffer* __result_obj__98;
struct buffer* __result_obj__99;
    result_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3236, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__98 = (struct buffer*)come_increment_ref_count(result_451);
        come_call_finalizer(buffer_finalize, result_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__98;
    }
    buffer_append_str(result_451,self);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_451);
    come_call_finalizer(buffer_finalize, result_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_452;
struct buffer* __result_obj__103;
    result_452=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3263, "struct buffer*"))));
    buffer_append(result_452,self,sizeof(char)*len);
    __result_obj__103 = (struct buffer*)come_increment_ref_count(result_452);
    come_call_finalizer(buffer_finalize, result_452, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct buffer* result_453;
int i_454;
struct buffer* __result_obj__104;
    result_453=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3270, "struct buffer*"))));
    for(    i_454=0    ;    i_454<len    ;    i_454++    ){
        buffer_append(result_453,self[i_454],strlen(self[i_454]));
    }
    __result_obj__104 = (struct buffer*)come_increment_ref_count(result_453);
    come_call_finalizer(buffer_finalize, result_453, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* result_455;
struct buffer* __result_obj__105;
    result_455=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_455,(char*)self,sizeof(short)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_455);
    come_call_finalizer(buffer_finalize, result_455, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* result_456;
struct buffer* __result_obj__106;
    result_456=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_456,(char*)self,sizeof(int)*len);
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_456);
    come_call_finalizer(buffer_finalize, result_456, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* result_457;
struct buffer* __result_obj__107;
    result_457=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_457,(char*)self,sizeof(long)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_457);
    come_call_finalizer(buffer_finalize, result_457, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* result_458;
struct buffer* __result_obj__108;
    result_458=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3300, "struct buffer*"))));
    buffer_append(result_458,(char*)self,sizeof(float)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_458);
    come_call_finalizer(buffer_finalize, result_458, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* result_459;
struct buffer* __result_obj__109;
    result_459=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3307, "struct buffer*"))));
    buffer_append(result_459,(char*)self,sizeof(double)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_459);
    come_call_finalizer(buffer_finalize, result_459, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

char* buffer_printable(struct buffer* self){
int len_460;
void* __right_value71 = (void*)0;
char* result_461;
int n_462;
int i_463;
unsigned char c_464;
char* __result_obj__110;
    len_460=self->len;
    result_461=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_460*2+1)), "/usr/local/include/comelang.h", 3315, "char*"));
    n_462=0;
    for(    i_463=0    ;    i_463<len_460    ;    i_463++    ){
        c_464=self->buf[i_463];
        if(        (c_464>=0&&c_464<32)||c_464==127        ) {
            result_461[n_462++]=94;
            result_461[n_462++]=c_464+65-1;
        }
        else if(        c_464>127        ) {
            result_461[n_462++]=63;
        }
        else {
            result_461[n_462++]=c_464;
        }
    }
    result_461[n_462]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_461);
    (result_461 = come_decrement_ref_count(result_461, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_465;
struct list$1char$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_465=0    ;    i_465<num_value    ;    i_465++    ){
        list$1char$_push_back(self,values[i_465]);
    }
    __result_obj__112 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value73 = (void*)0;
struct list_item$1char$* litem_466;
void* __right_value74 = (void*)0;
struct list_item$1char$* litem_467;
void* __right_value75 = (void*)0;
struct list_item$1char$* litem_468;
struct list$1char$* __result_obj__111;
    if(    self->len==0    ) {
        litem_466=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value73=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_466->prev=((void*)0);
        litem_466->next=((void*)0);
        litem_466->item=item;
        self->tail=litem_466;
        self->head=litem_466;
    }
    else if(    self->len==1    ) {
        litem_467=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value74=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_467->prev=self->head;
        litem_467->next=((void*)0);
        litem_467->item=item;
        self->tail=litem_467;
        self->head->next=litem_467;
    }
    else {
        litem_468=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value75=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_468->prev=self->tail;
        litem_468->next=((void*)0);
        litem_468->item=item;
        self->tail->next=litem_468;
        self->tail=litem_468;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_469;
struct list_item$1char$* prev_it_470;
    it_469=self->head;
    while(    it_469!=((void*)0)    ) {
        prev_it_470=it_469;
        it_469=it_469->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_470, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1char$* __result_obj__113;
    __result_obj__113 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value76=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3356, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_471;
struct list$1char$p* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_471=0    ;    i_471<num_value    ;    i_471++    ){
        list$1char$p_push_back(self,values[i_471]);
    }
    __result_obj__115 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value78 = (void*)0;
struct list_item$1char$p* litem_472;
void* __right_value79 = (void*)0;
struct list_item$1char$p* litem_473;
void* __right_value80 = (void*)0;
struct list_item$1char$p* litem_474;
struct list$1char$p* __result_obj__114;
    if(    self->len==0    ) {
        litem_472=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value78=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_472->prev=((void*)0);
        litem_472->next=((void*)0);
        litem_472->item=item;
        self->tail=litem_472;
        self->head=litem_472;
    }
    else if(    self->len==1    ) {
        litem_473=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value79=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_473->prev=self->head;
        litem_473->next=((void*)0);
        litem_473->item=item;
        self->tail=litem_473;
        self->head->next=litem_473;
    }
    else {
        litem_474=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value80=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_474->prev=self->tail;
        litem_474->next=((void*)0);
        litem_474->item=item;
        self->tail->next=litem_474;
        self->tail=litem_474;
    }
    self->len++;
    __result_obj__114 = self;
    return __result_obj__114;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_475;
struct list_item$1char$p* prev_it_476;
    it_475=self->head;
    while(    it_475!=((void*)0)    ) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_476, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1char$p* __result_obj__116;
    __result_obj__116 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value81=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3361, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_477;
struct list$1short$* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_477=0    ;    i_477<num_value    ;    i_477++    ){
        list$1short$_push_back(self,values[i_477]);
    }
    __result_obj__118 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value83 = (void*)0;
struct list_item$1short$* litem_478;
void* __right_value84 = (void*)0;
struct list_item$1short$* litem_479;
void* __right_value85 = (void*)0;
struct list_item$1short$* litem_480;
struct list$1short$* __result_obj__117;
    if(    self->len==0    ) {
        litem_478=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value83=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_478->prev=((void*)0);
        litem_478->next=((void*)0);
        litem_478->item=item;
        self->tail=litem_478;
        self->head=litem_478;
    }
    else if(    self->len==1    ) {
        litem_479=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value84=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_479->prev=self->head;
        litem_479->next=((void*)0);
        litem_479->item=item;
        self->tail=litem_479;
        self->head->next=litem_479;
    }
    else {
        litem_480=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value85=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_480->prev=self->tail;
        litem_480->next=((void*)0);
        litem_480->item=item;
        self->tail->next=litem_480;
        self->tail=litem_480;
    }
    self->len++;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_481;
struct list_item$1short$* prev_it_482;
    it_481=self->head;
    while(    it_481!=((void*)0)    ) {
        prev_it_482=it_481;
        it_481=it_481->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_482, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1short$* __result_obj__119;
    __result_obj__119 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value86=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3366, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_483;
struct list$1int$* __result_obj__121;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_483=0    ;    i_483<num_value    ;    i_483++    ){
        list$1int$_push_back(self,values[i_483]);
    }
    __result_obj__121 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value88 = (void*)0;
struct list_item$1int$* litem_484;
void* __right_value89 = (void*)0;
struct list_item$1int$* litem_485;
void* __right_value90 = (void*)0;
struct list_item$1int$* litem_486;
struct list$1int$* __result_obj__120;
    if(    self->len==0    ) {
        litem_484=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value88=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_484->prev=((void*)0);
        litem_484->next=((void*)0);
        litem_484->item=item;
        self->tail=litem_484;
        self->head=litem_484;
    }
    else if(    self->len==1    ) {
        litem_485=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value89=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_485->prev=self->head;
        litem_485->next=((void*)0);
        litem_485->item=item;
        self->tail=litem_485;
        self->head->next=litem_485;
    }
    else {
        litem_486=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value90=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_486->prev=self->tail;
        litem_486->next=((void*)0);
        litem_486->item=item;
        self->tail->next=litem_486;
        self->tail=litem_486;
    }
    self->len++;
    __result_obj__120 = self;
    return __result_obj__120;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_487;
struct list_item$1int$* prev_it_488;
    it_487=self->head;
    while(    it_487!=((void*)0)    ) {
        prev_it_488=it_487;
        it_487=it_487->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_488, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1int$* __result_obj__122;
    __result_obj__122 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value91=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3371, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value91, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_489;
struct list$1long$* __result_obj__124;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_489=0    ;    i_489<num_value    ;    i_489++    ){
        list$1long$_push_back(self,values[i_489]);
    }
    __result_obj__124 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value93 = (void*)0;
struct list_item$1long$* litem_490;
void* __right_value94 = (void*)0;
struct list_item$1long$* litem_491;
void* __right_value95 = (void*)0;
struct list_item$1long$* litem_492;
struct list$1long$* __result_obj__123;
    if(    self->len==0    ) {
        litem_490=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value93=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_490->prev=((void*)0);
        litem_490->next=((void*)0);
        litem_490->item=item;
        self->tail=litem_490;
        self->head=litem_490;
    }
    else if(    self->len==1    ) {
        litem_491=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value94=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_491->prev=self->head;
        litem_491->next=((void*)0);
        litem_491->item=item;
        self->tail=litem_491;
        self->head->next=litem_491;
    }
    else {
        litem_492=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value95=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_492->prev=self->tail;
        litem_492->next=((void*)0);
        litem_492->item=item;
        self->tail->next=litem_492;
        self->tail=litem_492;
    }
    self->len++;
    __result_obj__123 = self;
    return __result_obj__123;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_493;
struct list_item$1long$* prev_it_494;
    it_493=self->head;
    while(    it_493!=((void*)0)    ) {
        prev_it_494=it_493;
        it_493=it_493->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_494, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value92 = (void*)0;
void* __right_value96 = (void*)0;
struct list$1long$* __result_obj__125;
    __result_obj__125 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value96=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3376, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value96, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_495;
struct list$1float$* __result_obj__127;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_495=0    ;    i_495<num_value    ;    i_495++    ){
        list$1float$_push_back(self,values[i_495]);
    }
    __result_obj__127 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value98 = (void*)0;
struct list_item$1float$* litem_496;
void* __right_value99 = (void*)0;
struct list_item$1float$* litem_497;
void* __right_value100 = (void*)0;
struct list_item$1float$* litem_498;
struct list$1float$* __result_obj__126;
    if(    self->len==0    ) {
        litem_496=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value98=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_496->prev=((void*)0);
        litem_496->next=((void*)0);
        litem_496->item=item;
        self->tail=litem_496;
        self->head=litem_496;
    }
    else if(    self->len==1    ) {
        litem_497=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value99=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_497->prev=self->head;
        litem_497->next=((void*)0);
        litem_497->item=item;
        self->tail=litem_497;
        self->head->next=litem_497;
    }
    else {
        litem_498=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value100=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_498->prev=self->tail;
        litem_498->next=((void*)0);
        litem_498->item=item;
        self->tail->next=litem_498;
        self->tail=litem_498;
    }
    self->len++;
    __result_obj__126 = self;
    return __result_obj__126;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_499;
struct list_item$1float$* prev_it_500;
    it_499=self->head;
    while(    it_499!=((void*)0)    ) {
        prev_it_500=it_499;
        it_499=it_499->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value97 = (void*)0;
void* __right_value101 = (void*)0;
struct list$1float$* __result_obj__128;
    __result_obj__128 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value101=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3381, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value101, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_501;
struct list$1double$* __result_obj__130;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_501=0    ;    i_501<num_value    ;    i_501++    ){
        list$1double$_push_back(self,values[i_501]);
    }
    __result_obj__130 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value103 = (void*)0;
struct list_item$1double$* litem_502;
void* __right_value104 = (void*)0;
struct list_item$1double$* litem_503;
void* __right_value105 = (void*)0;
struct list_item$1double$* litem_504;
struct list$1double$* __result_obj__129;
    if(    self->len==0    ) {
        litem_502=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value103=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_502->prev=((void*)0);
        litem_502->next=((void*)0);
        litem_502->item=item;
        self->tail=litem_502;
        self->head=litem_502;
    }
    else if(    self->len==1    ) {
        litem_503=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value104=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_503->prev=self->head;
        litem_503->next=((void*)0);
        litem_503->item=item;
        self->tail=litem_503;
        self->head->next=litem_503;
    }
    else {
        litem_504=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value105=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_504->prev=self->tail;
        litem_504->next=((void*)0);
        litem_504->item=item;
        self->tail->next=litem_504;
        self->tail=litem_504;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_505;
struct list_item$1double$* prev_it_506;
    it_505=self->head;
    while(    it_505!=((void*)0)    ) {
        prev_it_506=it_505;
        it_505=it_505->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_506, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value102 = (void*)0;
void* __right_value106 = (void*)0;
struct list$1double$* __result_obj__131;
    __result_obj__131 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value106=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3386, "struct list$1double$*")),len,self))));
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
int len_507;
void* __right_value108 = (void*)0;
char* result_508;
char* __result_obj__133;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_507=strlen(self)+strlen(right);
    result_508=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_507+1)), "/usr/local/include/comelang.h", 3615, "char*"));
    strncpy(result_508,self,len_507+1);
    strncat(result_508,right,len_507+1);
    __result_obj__133 = (char*)come_increment_ref_count(result_508);
    (result_508 = come_decrement_ref_count(result_508, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* string_operator_add(char* self, char* right){
void* __right_value109 = (void*)0;
char* __result_obj__134;
int len_509;
void* __right_value110 = (void*)0;
char* result_510;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_509=strlen(self)+strlen(right);
    result_510=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_509+1)), "/usr/local/include/comelang.h", 3630, "char*"));
    strncpy(result_510,self,len_509+1);
    strncat(result_510,right,len_509+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_510);
    (result_510 = come_decrement_ref_count(result_510, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_operator_mult(char* self, int right){
void* __right_value111 = (void*)0;
char* __result_obj__136;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct buffer* buf_511;
int i_512;
void* __right_value114 = (void*)0;
char* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    buf_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_512=0    ;    i_512<right    ;    i_512++    ){
        buffer_append_str(buf_511,self);
    }
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value114=buffer_to_string(buf_511))));
    come_call_finalizer(buffer_finalize, buf_511, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* string_operator_mult(char* self, int right){
void* __right_value115 = (void*)0;
char* __result_obj__138;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
struct buffer* buf_513;
int i_514;
void* __right_value118 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3657, "struct buffer*"))));
    for(    i_514=0    ;    i_514<right    ;    i_514++    ){
        buffer_append_str(buf_513,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value118=buffer_to_string(buf_513))));
    come_call_finalizer(buffer_finalize, buf_513, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_515;
int i_516;
    result_515=(_Bool)0;
    for(    i_516=0    ;    i_516<len    ;    i_516++    ){
        if(        strncmp(self[i_516],str,strlen(self[i_516]))==0        ) {
            result_515=(_Bool)1;
            break;
        }
    }
    return result_515;
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

unsigned int string_get_hash_key(char* value){
int result_519;
char* p_520;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_519=0;
    p_520=value;
    while(    *p_520    ) {
        result_519+=(*p_520);
        p_520++;
    }
    return result_519;
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
_Bool result_521;
    result_521=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_521;
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
_Bool result_522;
    result_522=(c>=32&&c<=126);
    return result_522;
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
int len_523;
void* __right_value120 = (void*)0;
char* result_524;
int i_525;
char* __result_obj__141;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_523=strlen(str);
    result_524=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_523+1)), "/usr/local/include/comelang.h", 3925, "char*"));
    for(    i_525=0    ;    i_525<len_523    ;    i_525++    ){
        result_524[i_525]=str[len_523-i_525-1];
    }
    result_524[len_523]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_524);
    (result_524 = come_decrement_ref_count(result_524, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value121 = (void*)0;
char* __result_obj__142;
int len_526;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
char* __result_obj__143;
void* __right_value124 = (void*)0;
char* __result_obj__144;
void* __right_value125 = (void*)0;
char* __result_obj__145;
void* __right_value126 = (void*)0;
char* result_527;
char* __result_obj__146;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(""))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_526=strlen(str);
    if(    head<0    ) {
        head+=len_526;
    }
    if(    tail<0    ) {
        tail+=len_526+1;
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
    if(    tail>=len_526    ) {
        tail=len_526;
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
    result_527=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3971, "char*"));
    memcpy(result_527,str+head,tail-head);
    result_527[tail-head]=0;
    __result_obj__146 = (char*)come_increment_ref_count(result_527);
    (result_527 = come_decrement_ref_count(result_527, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value127 = (void*)0;
char* __result_obj__147;
int len_528;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* __result_obj__148;
void* __right_value130 = (void*)0;
char* __result_obj__149;
void* __right_value131 = (void*)0;
char* __result_obj__150;
void* __right_value132 = (void*)0;
char* result_529;
char* __result_obj__151;
    if(    str==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value127=__builtin_string(""))));
        (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    len_528=strlen(str);
    if(    head<0    ) {
        head+=len_528;
    }
    if(    tail<0    ) {
        tail+=len_528+1;
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
    if(    tail>=len_528    ) {
        tail=len_528;
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
    result_529=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4014, "char*"));
    memcpy(result_529,str+head,tail-head);
    result_529[tail-head]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_529);
    (result_529 = come_decrement_ref_count(result_529, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value133 = (void*)0;
char* __result_obj__152;
int len_530;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
char* __result_obj__153;
void* __right_value136 = (void*)0;
char* __result_obj__154;
void* __right_value137 = (void*)0;
char* __result_obj__155;
void* __right_value138 = (void*)0;
char* result_531;
char* __result_obj__156;
    if(    str==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value133=__builtin_string(""))));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    len_530=strlen(str);
    if(    head<0    ) {
        head+=len_530;
    }
    if(    tail<0    ) {
        tail+=len_530+1;
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
    if(    tail>=len_530    ) {
        tail=len_530;
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
    result_531=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4057, "char*"));
    memcpy(result_531,str+head,tail-head);
    result_531[tail-head]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_531);
    (result_531 = come_decrement_ref_count(result_531, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xsprintf(char* msg, ...){
void* __right_value139 = (void*)0;
char* __result_obj__157;
va_list args_532;
char* result_533;
int len_534;
void* __right_value140 = (void*)0;
char* __result_obj__158;
void* __right_value141 = (void*)0;
char* result2_535;
char* __result_obj__159;
result_533 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(""))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __builtin_va_start(args_532,msg);
    len_534=vasprintf(&result_533,msg,args_532);
    __builtin_va_end(args_532);
    if(    len_534<0    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    result2_535=(char*)come_increment_ref_count(__builtin_string(result_533));
    free(result_533);
    __result_obj__159 = (char*)come_increment_ref_count(result2_535);
    (result2_535 = come_decrement_ref_count(result2_535, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value142 = (void*)0;
char* __result_obj__160;
int len_536;
void* __right_value143 = (void*)0;
char* __result_obj__161;
void* __right_value144 = (void*)0;
char* __result_obj__162;
void* __right_value145 = (void*)0;
char* result_537;
char* __result_obj__163;
    if(    str==((void*)0)    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    len_536=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(str))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    if(    head<0    ) {
        head+=len_536;
    }
    if(    tail<0    ) {
        tail+=len_536+1;
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
    if(    tail>=len_536    ) {
        tail=len_536;
    }
    result_537=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_536-(tail-head)+1)), "/usr/local/include/comelang.h", 4119, "char*"));
    memcpy(result_537,str,head);
    memcpy(result_537+head,str+tail,len_536-tail);
    result_537[len_536-(tail-head)]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_537);
    (result_537 = come_decrement_ref_count(result_537, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_538;
struct list_item$1char$ph* prev_it_539;
    it_538=self->head;
    while(    it_538!=((void*)0)    ) {
        prev_it_539=it_538;
        it_538=it_538->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_539, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value152 = (void*)0;
struct list_item$1char$ph* litem_543;
char* __dec_obj17;
void* __right_value153 = (void*)0;
struct list_item$1char$ph* litem_544;
char* __dec_obj18;
void* __right_value154 = (void*)0;
struct list_item$1char$ph* litem_545;
char* __dec_obj19;
struct list$1char$ph* __result_obj__166;
    if(    self->len==0    ) {
        litem_543=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value152=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_543->prev=((void*)0);
        litem_543->next=((void*)0);
        __dec_obj17=litem_543->item,
        litem_543->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_543;
        self->head=litem_543;
    }
    else if(    self->len==1    ) {
        litem_544=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value153=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_544->prev=self->head;
        litem_544->next=((void*)0);
        __dec_obj18=litem_544->item,
        litem_544->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_544;
        self->head->next=litem_544;
    }
    else {
        litem_545=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value154=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_545->prev=self->tail;
        litem_545->next=((void*)0);
        __dec_obj19=litem_545->item,
        litem_545->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_545;
        self->tail=litem_545;
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
struct list$1char$ph* result_540;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* str_541;
int i_542;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct list$1char$ph* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value147=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4132, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value147, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__165;
    }
    result_540=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4135, "struct list$1char$ph*"))));
    str_541=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4137, "struct buffer*"))));
    for(    i_542=0    ;    i_542<charp_length(self)    ;    i_542++    ){
        if(        self[i_542]==c        ) {
            list$1char$ph_push_back(result_540,(char*)come_increment_ref_count(__builtin_string(str_541->buf)));
            buffer_reset(str_541);
        }
        else {
            buffer_append_char(str_541,self[i_542]);
        }
    }
    if(    buffer_length(str_541)!=0    ) {
        list$1char$ph_push_back(result_540,(char*)come_increment_ref_count(__builtin_string(str_541->buf)));
    }
    __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(result_540);
    come_call_finalizer(list$1char$ph$p_finalize, result_540, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_541, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_546;
void* __right_value159 = (void*)0;
char* result_547;
int n_548;
int i_549;
char c_550;
char* __result_obj__170;
    len_546=charp_length(str);
    result_547=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_546*2+1)), "/usr/local/include/comelang.h", 4169, "char*"));
    n_548=0;
    for(    i_549=0    ;    i_549<len_546    ;    i_549++    ){
        c_550=str[i_549];
        if(        (c_550>=0&&c_550<32)||c_550==127        ) {
            result_547[n_548++]=94;
            result_547[n_548++]=c_550+65-1;
        }
        else {
            result_547[n_548++]=c_550;
        }
    }
    result_547[n_548]=0;
    __result_obj__170 = (char*)come_increment_ref_count(result_547);
    (result_547 = come_decrement_ref_count(result_547, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value160 = (void*)0;
char* __result_obj__171;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct buffer* result_551;
char* p_552;
char* p2_553;
void* __right_value163 = (void*)0;
char* __result_obj__172;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string(self))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    result_551=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4197, "struct buffer*"))));
    p_552=self;
    while(    (_Bool)1    ) {
        p2_553=strstr(p_552,str);
        if(        p2_553==((void*)0)        ) {
            p2_553=p_552;
            while(            *p2_553            ) {
                p2_553++;
            }
            buffer_append(result_551,p_552,p2_553-p_552);
            break;
        }
        buffer_append(result_551,p_552,p2_553-p_552);
        buffer_append_str(result_551,replace);
        p_552=p2_553+strlen(str);
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value163=buffer_to_string(result_551))));
    come_call_finalizer(buffer_finalize, result_551, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* xbasename(char* path){
void* __right_value164 = (void*)0;
char* __result_obj__173;
char* p_554;
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
    p_554=path+strlen(path);
    while(    p_554>=path    ) {
        if(        *p_554==47        ) {
            break;
        }
        else {
            p_554--;
        }
    }
    if(    p_554<path    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(path))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    else {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(p_554+1))));
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
char* path2_555;
char* p_556;
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
    path2_555=(char*)come_increment_ref_count(xbasename(path));
    p_556=path2_555+strlen(path2_555);
    while(    p_556>=path2_555    ) {
        if(        *p_556==46        ) {
            break;
        }
        else {
            p_556--;
        }
    }
    if(    p_556<path2_555    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(path2_555))));
        (path2_555 = come_decrement_ref_count(path2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value171=charp_substring(path2_555,0,p_556-path2_555))));
        (path2_555 = come_decrement_ref_count(path2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
    (path2_555 = come_decrement_ref_count(path2_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* xextname(char* path){
void* __right_value173 = (void*)0;
char* __result_obj__181;
char* p_557;
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
    p_557=path+strlen(path);
    while(    p_557>=path    ) {
        if(        *p_557==46        ) {
            break;
        }
        else {
            p_557--;
        }
    }
    if(    p_557<path    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(path))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    else {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(p_557+1))));
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
char* msg2_558;
va_list args_559;
void* __right_value197 = (void*)0;
char* __result_obj__205;
msg2_558 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value196=__builtin_string(""))));
        (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    __builtin_va_start(args_559,self);
    vasprintf(&msg2_558,self,args_559);
    __builtin_va_end(args_559);
    printf("%s",msg2_558);
    free(msg2_558);
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
int i_560;
    for(    i_560=0    ;    i_560<self    ;    i_560++    ){
        block(parent,i_560);
    }
}

