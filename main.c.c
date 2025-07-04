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
  0x3a, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x40, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x27, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0xae, 0x87, 0x23, 0x2a,
  0xf4, 0xfc, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x86, 0x03, 0x37, 0x84, 0xfd,
  0x83, 0x27, 0x44, 0xfd, 0xbe, 0x86, 0xb2, 0x87, 0x3a, 0x85, 0xb6, 0x85,
  0x93, 0x08, 0x20, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74,
  0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x3e, 0x85, 0x93, 0x08,
  0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x39, 0x71, 0x06, 0xfc, 0x22, 0xf8, 0x80, 0x00, 0x23, 0x3c,
  0xa4, 0xfc, 0x23, 0x38, 0xb4, 0xfc, 0xb2, 0x87, 0x23, 0x26, 0xf4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x03, 0x37, 0x04, 0xfd, 0x83, 0x26, 0xc4, 0xfc,
  0x3e, 0x85, 0xba, 0x85, 0x36, 0x86, 0x93, 0x08, 0x50, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe,
  0x3e, 0x85, 0xe2, 0x70, 0x42, 0x74, 0x21, 0x61, 0x82, 0x80, 0x41, 0x11,
  0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x8d, 0x47, 0x3e, 0x85, 0xa2, 0x60,
  0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x35, 0x71, 0x06, 0xed, 0x22, 0xe9,
  0x00, 0x11, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x26, 0xf4, 0xfe, 0x93, 0x07, 0x30, 0x06, 0x23, 0x00, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0x91, 0xeb, 0x01, 0x46, 0x81, 0x45,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x0a, 0xef, 0xf0, 0x7f, 0xf7,
  0x01, 0xa0, 0x81, 0x45, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x0a,
  0xef, 0xf0, 0x5f, 0xef, 0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27,
  0x84, 0xfe, 0x13, 0x07, 0x04, 0xf6, 0x31, 0x46, 0xba, 0x85, 0x3e, 0x85,
  0xef, 0xf0, 0x7f, 0xe9, 0xaa, 0x87, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x88, 0x07, 0xf6, 0x83, 0x27,
  0x84, 0xfe, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xf0, 0x93, 0x07, 0x04, 0xf6,
  0x31, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0xbf, 0xe2, 0x81, 0x45,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0xc5, 0x05, 0xef, 0xf0, 0x5f, 0xea,
  0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe, 0x13, 0x07,
  0x04, 0xf6, 0x31, 0x46, 0xba, 0x85, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0xe4,
  0xaa, 0x87, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x88, 0x07, 0xf6, 0x83, 0x27, 0x84, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0xeb, 0x01, 0xa0, 0x00, 0x00, 0x2f, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x33, 0x2e, 0x65, 0x6c, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2f, 0x62, 0x2e, 0x74, 0x78, 0x74, 0x00, 0x00, 0x2f, 0x61, 0x2e, 0x74,
  0x78, 0x74, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34,
  0x36, 0x39, 0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e,
  0x32, 0x2e, 0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73,
  0x63, 0x76, 0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72,
  0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30,
  0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64,
  0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63,
  0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00,
  0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00,
  0x08, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x2a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0x70, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xb4, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00,
  0xe2, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff,
  0x27, 0x1b, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x27, 0x13, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x26, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x28, 0x13, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x27, 0x13, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00,
  0x3a, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x27, 0x13, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x27, 0x13, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00,
  0x28, 0x13, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63,
  0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x72, 0x65, 0x61, 0x64,
  0x00, 0x6f, 0x70, 0x65, 0x6e, 0x00, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x00,
  0x65, 0x78, 0x65, 0x63, 0x76, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62,
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
  0x1e, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x27, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x40, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x64, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len=2216;
unsigned char hello2_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xe2, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc0, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x70, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x57, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x22, 0xf0, 0x00, 0x18, 0x23, 0x3c, 0xa4, 0xfc, 0xae, 0x87, 0x23, 0x2a,
  0xf4, 0xfc, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x86, 0x03, 0x37, 0x84, 0xfd,
  0x83, 0x27, 0x44, 0xfd, 0xbe, 0x86, 0xb2, 0x87, 0x3a, 0x85, 0xb6, 0x85,
  0x93, 0x08, 0x20, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74,
  0x45, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0x23, 0x3c, 0xa4, 0xfc, 0x83, 0x37, 0x84, 0xfd, 0x3e, 0x85, 0x93, 0x08,
  0x30, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x35, 0x71, 0x06, 0xed, 0x22, 0xe9, 0x00, 0x11, 0x81, 0x45,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x06, 0xef, 0xf0, 0xdf, 0xf7,
  0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x13, 0x07,
  0x84, 0xf6, 0x31, 0x46, 0xba, 0x85, 0x3e, 0x85, 0xef, 0xf0, 0xff, 0xf1,
  0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x8c, 0x07, 0xf6, 0x83, 0x27, 0xc4, 0xfe, 0x3e, 0x85,
  0xef, 0xf0, 0xdf, 0xf8, 0x93, 0x07, 0x84, 0xf6, 0x31, 0x46, 0xbe, 0x85,
  0x05, 0x45, 0xef, 0xf0, 0x3f, 0xeb, 0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4,
  0x22, 0xe0, 0x00, 0x08, 0x95, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64,
  0x41, 0x01, 0x82, 0x80, 0x2f, 0x63, 0x2e, 0x74, 0x78, 0x74, 0x00, 0x47,
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
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x50, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x59, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x2a, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x70, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x63, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xb4, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x69, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x57, 0x1a, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x57, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8b, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0x3c, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x58, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x9b, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x57, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa7, 0x00, 0x00, 0x00, 0x12, 0x00, 0x01, 0x00, 0xe2, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xac, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x57, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xbb, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x57, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc2, 0x00, 0x00, 0x00, 0x10, 0x00, 0x02, 0x00, 0x58, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e, 0x63, 0x00, 0x77, 0x72,
  0x69, 0x74, 0x65, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32,
  0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31,
  0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73,
  0x63, 0x31, 0x70, 0x30, 0x00, 0x72, 0x65, 0x61, 0x64, 0x00, 0x6f, 0x70,
  0x65, 0x6e, 0x00, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x00, 0x5f, 0x5f, 0x67,
  0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65,
  0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42,
  0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f,
  0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f,
  0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d,
  0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42,
  0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74,
  0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d,
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
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x02, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x50, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x70, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x77, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len=1984;
unsigned char shell_elf[]={
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xa2, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x38, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x2e, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x15, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x27, 0x27, 0xba, 0x97,
  0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0x27, 0x26, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
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
  0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x27, 0x1c, 0x23, 0x3c,
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
  0x82, 0x80, 0x69, 0x71, 0x06, 0xf6, 0x22, 0xf2, 0x00, 0x1a, 0x09, 0x46,
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0xc5, 0x14, 0x05, 0x45, 0xef, 0xf0,
  0x3f, 0x83, 0x23, 0x26, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xf5, 0x05, 0x46,
  0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0, 0x3f, 0x86, 0x93, 0x07, 0x84, 0xf5,
  0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x3f, 0x81, 0x03, 0x47,
  0x84, 0xf5, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x88,
  0xe7, 0xf6, 0x83, 0x27, 0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87, 0xb5, 0x47, 0x63, 0x09, 0xf7, 0x00,
  0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87, 0xa9, 0x47, 0x63, 0x03, 0xf7, 0x00,
  0x4d, 0xbf, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x81, 0x27, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x88, 0x07, 0xf6, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0x25, 0x0e, 0xef, 0xf0, 0x3f, 0xf4, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x63, 0xdb, 0x07, 0x00, 0x31, 0x46, 0x97, 0x05, 0x00, 0x00,
  0x93, 0x85, 0x45, 0x0c, 0x09, 0x45, 0xef, 0xf0, 0xaf, 0xf9, 0x81, 0xa0,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x95, 0xe3, 0x23, 0x20, 0x04, 0xfe,
  0x83, 0x26, 0x04, 0xfe, 0x13, 0x07, 0x04, 0xed, 0x93, 0x07, 0x04, 0xf6,
  0x36, 0x86, 0xba, 0x85, 0x3e, 0x85, 0xef, 0xf0, 0xef, 0xff, 0x09, 0x45,
  0xef, 0xf0, 0xdf, 0x83, 0x3d, 0xb7, 0x23, 0x2a, 0x04, 0xf4, 0x93, 0x07,
  0x44, 0xf5, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0x84, 0xaa, 0x87, 0x23, 0x22,
  0xf4, 0xfe, 0x21, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c,
  0x6c, 0x29, 0x00, 0x00, 0x66, 0xfe, 0xff, 0xff, 0xaa, 0xfd, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff, 0xee, 0xfd, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff, 0x1e, 0xfe, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff, 0x8e, 0xfe, 0xff, 0xff,
  0x8e, 0xfe, 0xff, 0xff, 0xcc, 0xfd, 0xff, 0xff, 0x24, 0x20, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x6f, 0x72, 0x6b, 0x20, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x0a,
  0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x67, 0x30, 0x34, 0x36, 0x39,
  0x36, 0x64, 0x66, 0x30, 0x39, 0x29, 0x20, 0x31, 0x34, 0x2e, 0x32, 0x2e,
  0x30, 0x00, 0x41, 0x59, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76,
  0x00, 0x01, 0x4f, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36,
  0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61,
  0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70,
  0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72,
  0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x98, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x10, 0x00, 0xf1, 0xff, 0x15, 0x22, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x15, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x68, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x42, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x18, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x15, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xa2, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x2e, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x15, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x15, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x18, 0x1a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x00, 0x00, 0x00, 0x00, 0xac, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x98, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x98, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x15, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x88, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x0d, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int shell_elf_len=4152;
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
unsigned long  long x_233;
memset(&x_233, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_233));
    return x_233;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_234;
memset(&sp_val_234, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_234): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_234;
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
        ;
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
    result_55=(struct proc*)come_increment_ref_count((struct proc*)come_calloc_v2(1, sizeof(struct proc)*(1), "main.c", 770, "struct proc*"));
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
struct proc* result_90;
unsigned long  long* pagetable_91;
struct elfhdr* eh_92;
struct proghdr* ph_93;
unsigned long  long size_94;
unsigned long  long va_95;
int i_96;
void* pa_97;
char* pa_98;
    result_90=((struct proc*)(__right_value5=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value5, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    free_proc(result_90);
    memset(result_90,0,sizeof(struct proc));
    pagetable_91=(unsigned long  long*)kalloc();
    memset(pagetable_91,0,4096);
    setting_user_pagetable(result_90,pagetable_91);
    result_90->pagetable=pagetable_91;
    eh_92=(struct elfhdr*)hello_elf;
    if(    eh_92->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_93=(struct proghdr*)(hello_elf+eh_92->phoff);
    size_94=ph_93->filesz;
    result_90->vaddr=(((ph_93->vaddr))&~(4096-1));
    va_95=0;
    for(    i_96=0    ;    i_96<eh_92->phnum    ;    i_96++,ph_93++    ){
        if(        ph_93->type!=1        ) {
            continue;
        }
        for(        va_95=(((ph_93->vaddr))&~(4096-1))        ;        va_95<ph_93->vaddr+ph_93->memsz        ;        va_95+=4096        ){
            pa_97=kalloc();
            if(            !pa_97            ) {
                panic("kalloc");
            }
            memset(pa_97,0,4096);
            mappages(result_90->pagetable,va_95,4096,(unsigned long  long)pa_97,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_90->pagetable,ph_93->vaddr,hello_elf+ph_93->off,ph_93->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_98=kalloc();
    if(    !pa_98    ) {
        panic("kalloc");
    }
    memset(pa_98,0,4096);
    mappages(result_90->pagetable,va_95,4096,(unsigned long  long)pa_98,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_90->stack=(char*)va_95+4096;
    result_90->stack_top=(char*)va_95;
    result_90->context.sp=va_95+4096;
    result_90->context.mepc=eh_92->entry;
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
void* __right_value6 = (void*)0;
struct proc* p_102;
struct context* tf_103;
void* __right_value7 = (void*)0;
struct proc* old_104;
void* __right_value8 = (void*)0;
struct proc* new__105;
unsigned long  long a0_106;
    disable_timer_interrupts();
    p_102=((struct proc*)(__right_value6=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value6, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    tf_103=(struct context*)TRAPFRAME;
    p_102->context=*tf_103;
    timer_reset();
    old_104=((struct proc*)(__right_value7=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value7, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    gActiveProc++;
    if(    gActiveProc>=list$1proc$ph_length(gProc)    ) {
        gActiveProc=0;
    }
    new__105=((struct proc*)(__right_value8=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value8, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    if(    new__105!=old_104    ) {
        user_sp=new__105->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__105->pagetable)>>12));
        a0_106=new__105->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_106));
        swtch(&new__105->context);
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
unsigned long  long user_va_117;
int len_118;
void* __right_value9 = (void*)0;
struct proc* p_119;
int ret_120;
int i_121;
    trapframe_107=(struct context*)TRAPFRAME;
    arg0_108=trapframe_107->a0;
    arg1_109=trapframe_107->a1;
    arg2_110=trapframe_107->a2;
    arg3_111=trapframe_107->a3;
    arg4_112=trapframe_107->a4;
    arg5_113=trapframe_107->a5;
    arg6_114=trapframe_107->a6;
    arg_syscall_no_115=trapframe_107->a7;
    char kernel_buf_116[256];
    memset(&kernel_buf_116, 0, sizeof(char)    *(256)    );
    user_va_117=arg1_109;
    len_118=arg2_110;
    memset(kernel_buf_116,0,256);
    p_119=((struct proc*)(__right_value9=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value9, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    ret_120=copyin(p_119->pagetable,kernel_buf_116,user_va_117,len_118);
    if(    ret_120<0    ) {
        panic("copyinstr1");
    }
    for(    i_121=0    ;    i_121<len_118    ;    i_121++    ){
        putchar(kernel_buf_116[i_121]);
    }
    return 0;
}

int Sys_exit(){
struct context* trapframe_122;
unsigned long  int arg0_123;
unsigned long  int arg1_124;
unsigned long  int arg2_125;
unsigned long  int arg3_126;
unsigned long  int arg4_127;
unsigned long  int arg5_128;
unsigned long  int arg6_129;
unsigned long  int arg_syscall_no_130;
void* __right_value10 = (void*)0;
struct proc* p_131;
    trapframe_122=(struct context*)TRAPFRAME;
    arg0_123=trapframe_122->a0;
    arg1_124=trapframe_122->a1;
    arg2_125=trapframe_122->a2;
    arg3_126=trapframe_122->a3;
    arg4_127=trapframe_122->a4;
    arg5_128=trapframe_122->a5;
    arg6_129=trapframe_122->a6;
    arg_syscall_no_130=trapframe_122->a7;
    p_131=((struct proc*)(__right_value10=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value10, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    p_131->xstatus=arg0_123;
    p_131->zombie=1;
    return 0;
}

int Sys_wait(){
struct context* trapframe_132;
unsigned long  int arg0_133;
unsigned long  int arg1_134;
unsigned long  int arg2_135;
unsigned long  int arg3_136;
unsigned long  int arg4_137;
unsigned long  int arg5_138;
unsigned long  int arg6_139;
unsigned long  int arg_syscall_no_140;
int* status_va_141;
void* __right_value11 = (void*)0;
struct proc* p_142;
int exit_status_143;
int child_pid_144;
int n_145;
struct list$1proc$ph* o2_saved_146;
struct proc* it_149;
    trapframe_132=(struct context*)TRAPFRAME;
    arg0_133=trapframe_132->a0;
    arg1_134=trapframe_132->a1;
    arg2_135=trapframe_132->a2;
    arg3_136=trapframe_132->a3;
    arg4_137=trapframe_132->a4;
    arg5_138=trapframe_132->a5;
    arg6_139=trapframe_132->a6;
    arg_syscall_no_140=trapframe_132->a7;
    status_va_141=(int*)arg0_133;
    p_142=((struct proc*)(__right_value11=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value11, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    exit_status_143=0;
    child_pid_144=-1;
    n_145=0;
    for(    o2_saved_146=(struct list$1proc$ph*)come_increment_ref_count((gProc)),it_149=list$1proc$ph_begin((o2_saved_146))    ;    !list$1proc$ph_end((o2_saved_146))    ;    it_149=list$1proc$ph_next((o2_saved_146))    ){
        if(        it_149->zombie        ) {
            free_proc(it_149);
            exit_status_143=it_149->xstatus;
            child_pid_144=n_145;
            list$1proc$ph_remove_by_pointer(gProc,it_149);
            break;
        }
        n_145++;
    }
    come_call_finalizer(list$1proc$ph$p_finalize, o2_saved_146, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    if(    copyout(p_142->pagetable,(unsigned long  long)status_va_141,(void*)&exit_status_143,sizeof(int))<0    ) {
        panic("read: copyout failed");
    }
    return child_pid_144;
}

static struct proc* list$1proc$ph_begin(struct list$1proc$ph* self){
struct proc* result_147;
struct proc* __result_obj__22;
struct proc* __result_obj__23;
struct proc* result_148;
struct proc* __result_obj__24;
result_147 = (void*)0;
result_148 = (void*)0;
    if(    self==((void*)0)    ) {
        memset(&result_147,0,sizeof(struct proc*));
        __result_obj__22 = result_147;
        return __result_obj__22;
    }
    self->it=self->head;
    if(    self->it    ) {
        __result_obj__23 = self->it->item;
        return __result_obj__23;
    }
    memset(&result_148,0,sizeof(struct proc*));
    __result_obj__24 = result_148;
    return __result_obj__24;
}

static _Bool list$1proc$ph_end(struct list$1proc$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct proc* list$1proc$ph_next(struct list$1proc$ph* self){
struct proc* result_150;
struct proc* __result_obj__25;
struct proc* __result_obj__26;
struct proc* result_151;
struct proc* __result_obj__27;
result_150 = (void*)0;
result_151 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)    ) {
        memset(&result_150,0,sizeof(struct proc*));
        __result_obj__25 = result_150;
        return __result_obj__25;
    }
    self->it=self->it->next;
    if(    self->it    ) {
        __result_obj__26 = self->it->item;
        return __result_obj__26;
    }
    memset(&result_151,0,sizeof(struct proc*));
    __result_obj__27 = result_151;
    return __result_obj__27;
}

static struct list$1proc$ph* list$1proc$ph_remove_by_pointer(struct list$1proc$ph* self, struct proc* item){
int it2_152;
struct list_item$1proc$ph* it_153;
struct list$1proc$ph* __result_obj__31;
    it2_152=0;
    it_153=self->head;
    while(    it_153!=((void*)0)    ) {
        if(        it_153==item        ) {
            list$1proc$ph_delete(self,it2_152,it2_152+1);
            break;
        }
        it2_152++;
        it_153=it_153->next;
    }
    __result_obj__31 = self;
    return __result_obj__31;
}

static struct list$1proc$ph* list$1proc$ph_delete(struct list$1proc$ph* self, int head, int tail){
int tmp_154;
struct list$1proc$ph* __result_obj__28;
struct list_item$1proc$ph* it_157;
int i_158;
struct list_item$1proc$ph* prev_it_159;
struct list_item$1proc$ph* it_160;
int i_161;
struct list_item$1proc$ph* prev_it_162;
struct list_item$1proc$ph* it_163;
struct list_item$1proc$ph* head_prev_it_164;
struct list_item$1proc$ph* tail_it_165;
int i_166;
struct list_item$1proc$ph* prev_it_167;
struct list$1proc$ph* __result_obj__30;
    if(    head<0    ) {
        head+=self->len;
    }
    if(    tail<0    ) {
        tail+=self->len+1;
    }
    if(    head>tail    ) {
        tmp_154=tail;
        tail=head;
        head=tmp_154;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>self->len    ) {
        tail=self->len;
    }
    if(    head==tail    ) {
        __result_obj__28 = self;
        return __result_obj__28;
    }
    if(    head==0&&tail==self->len    ) {
        list$1proc$ph_reset(self);
    }
    else if(    head==0    ) {
        it_157=self->head;
        i_158=0;
        while(        it_157!=((void*)0)        ) {
            if(            i_158<tail            ) {
                prev_it_159=it_157;
                it_157=it_157->next;
                i_158++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else if(            i_158==tail            ) {
                self->head=it_157;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_157=it_157->next;
                i_158++;
            }
        }
    }
    else if(    tail==self->len    ) {
        it_160=self->head;
        i_161=0;
        while(        it_160!=((void*)0)        ) {
            if(            i_161==head            ) {
                self->tail=it_160->prev;
                self->tail->next=((void*)0);
            }
            if(            i_161>=head            ) {
                prev_it_162=it_160;
                it_160=it_160->next;
                i_161++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_160=it_160->next;
                i_161++;
            }
        }
    }
    else {
        it_163=self->head;
        head_prev_it_164=((void*)0);
        tail_it_165=((void*)0);
        i_166=0;
        while(        it_163!=((void*)0)        ) {
            if(            i_166==head            ) {
                head_prev_it_164=it_163->prev;
            }
            if(            i_166==tail            ) {
                tail_it_165=it_163;
            }
            if(            i_166>=head&&i_166<tail            ) {
                prev_it_167=it_163;
                it_163=it_163->next;
                i_166++;
                come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
                self->len--;
            }
            else {
                it_163=it_163->next;
                i_166++;
            }
        }
        if(        head_prev_it_164!=((void*)0)        ) {
            head_prev_it_164->next=tail_it_165;
        }
        if(        tail_it_165!=((void*)0)        ) {
            tail_it_165->prev=head_prev_it_164;
        }
    }
    __result_obj__30 = self;
    return __result_obj__30;
}

static struct list$1proc$ph* list$1proc$ph_reset(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_155;
struct list_item$1proc$ph* prev_it_156;
struct list$1proc$ph* __result_obj__29;
    it_155=self->head;
    while(    it_155!=((void*)0)    ) {
        prev_it_156=it_155;
        it_155=it_155->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__29 = self;
    return __result_obj__29;
}

static void list_item$1proc$ph$p_finalize(struct list_item$1proc$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        come_call_finalizer(proc_finalize, self->item, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list$1proc$ph$p_finalize(struct list$1proc$ph* self){
struct list_item$1proc$ph* it_168;
struct list_item$1proc$ph* prev_it_169;
    it_168=self->head;
    while(    it_168!=((void*)0)    ) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int Sys_open(){
struct context* trapframe_170;
unsigned long  int arg0_171;
unsigned long  int arg1_172;
unsigned long  int arg2_173;
unsigned long  int arg3_174;
unsigned long  int arg4_175;
unsigned long  int arg5_176;
unsigned long  int arg6_177;
unsigned long  int arg_syscall_no_178;
unsigned long  long user_va_180;
void* __right_value12 = (void*)0;
struct proc* p_181;
int result_182;
    trapframe_170=(struct context*)TRAPFRAME;
    arg0_171=trapframe_170->a0;
    arg1_172=trapframe_170->a1;
    arg2_173=trapframe_170->a2;
    arg3_174=trapframe_170->a3;
    arg4_175=trapframe_170->a4;
    arg5_176=trapframe_170->a5;
    arg6_177=trapframe_170->a6;
    arg_syscall_no_178=trapframe_170->a7;
    char kernel_buf_179[256];
    memset(&kernel_buf_179, 0, sizeof(char)    *(256)    );
    user_va_180=arg0_171;
    p_181=((struct proc*)(__right_value12=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value12, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_181->pagetable,kernel_buf_179,user_va_180,256);
    result_182=fs_open(kernel_buf_179);
    return result_182;
}

int Sys_fork(){
struct context* trapframe_183;
unsigned long  int arg0_184;
unsigned long  int arg1_185;
unsigned long  int arg2_186;
unsigned long  int arg3_187;
unsigned long  int arg4_188;
unsigned long  int arg5_189;
unsigned long  int arg6_190;
unsigned long  int arg_syscall_no_191;
void* __right_value13 = (void*)0;
struct proc* p_192;
int fork_flag_193;
void* __right_value14 = (void*)0;
struct proc* child_194;
unsigned long  long sp_195;
int result_196;
memset(&fork_flag_193, 0, sizeof(int));
    trapframe_183=(struct context*)TRAPFRAME;
    arg0_184=trapframe_183->a0;
    arg1_185=trapframe_183->a1;
    arg2_186=trapframe_183->a2;
    arg3_187=trapframe_183->a3;
    arg4_188=trapframe_183->a4;
    arg5_189=trapframe_183->a5;
    arg6_190=trapframe_183->a6;
    arg_syscall_no_191=trapframe_183->a7;
    p_192=((struct proc*)(__right_value13=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value13, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    alloc_prog((char*)p_192->program,fork_flag_193=1);
    child_194=((struct proc*)(__right_value14=list$1proc$ph_operator_load_element(gProc,list$1proc$ph_length(gProc)-1)));
    come_call_finalizer(proc_finalize, __right_value14, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    sp_195=child_194->context.sp;
    child_194->context=*trapframe_183;
    child_194->context.mepc=child_194->context.mepc+4;
    child_194->context.sp=sp_195;
    child_194->context.a0=0;
    result_196=list$1proc$ph_length(gProc)-1;
    return result_196;
}

int Sys_execv(){
struct context* trapframe_197;
unsigned long  int arg0_198;
unsigned long  int arg1_199;
unsigned long  int arg2_200;
unsigned long  int arg3_201;
unsigned long  int arg4_202;
unsigned long  int arg5_203;
unsigned long  int arg6_204;
unsigned long  int arg_syscall_no_205;
int argc_206;
unsigned long  long user_va_208;
void* __right_value15 = (void*)0;
struct proc* p_209;
char* path_210;
int fd_212;
int ret_213;
void* __right_value16 = (void*)0;
struct proc* result_214;
    trapframe_197=(struct context*)TRAPFRAME;
    arg0_198=trapframe_197->a0;
    arg1_199=trapframe_197->a1;
    arg2_200=trapframe_197->a2;
    arg3_201=trapframe_197->a3;
    arg4_202=trapframe_197->a4;
    arg5_203=trapframe_197->a5;
    arg6_204=trapframe_197->a6;
    arg_syscall_no_205=trapframe_197->a7;
    argc_206=arg2_200;
    char kernel_buf_207[256];
    memset(&kernel_buf_207, 0, sizeof(char)    *(256)    );
    user_va_208=arg0_198;
    p_209=((struct proc*)(__right_value15=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value15, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    copyinstr(p_209->pagetable,kernel_buf_207,user_va_208,256);
    path_210=kernel_buf_207;
    char hello_elf_211[4096];
    memset(&hello_elf_211, 0, sizeof(char)    *(4096)    );
    fd_212=fs_open(path_210);
    ret_213=fs_read(fd_212,hello_elf_211,4096);
    if(    ret_213<0    ) {
        trapframe_197->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_211);
    result_214=((struct proc*)(__right_value16=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
    come_call_finalizer(proc_finalize, __right_value16, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    trapframe_197->mepc=result_214->context.mepc+4;
    trapframe_197->sp=result_214->context.sp;
    return 0;
}

unsigned long  int syscall_handler(){
struct context* trapframe_215;
unsigned long  int arg0_216;
unsigned long  int arg1_217;
unsigned long  int arg2_218;
unsigned long  int arg3_219;
unsigned long  int arg4_220;
unsigned long  int arg5_221;
unsigned long  int arg6_222;
unsigned long  int arg_syscall_no_223;
unsigned long  long result_224;
int fd_225;
unsigned long  long destva_226;
unsigned long  int n_227;
int ret_229;
void* __right_value17 = (void*)0;
struct proc* p_230;
int fd_231;
int ret_232;
memset(&ret_229, 0, sizeof(int));
    disable_timer_interrupts();
    trapframe_215=(struct context*)TRAPFRAME;
    arg0_216=trapframe_215->a0;
    arg1_217=trapframe_215->a1;
    arg2_218=trapframe_215->a2;
    arg3_219=trapframe_215->a3;
    arg4_220=trapframe_215->a4;
    arg5_221=trapframe_215->a5;
    arg6_222=trapframe_215->a6;
    arg_syscall_no_223=trapframe_215->a7;
    result_224=0;
    switch (    arg_syscall_no_223) {
        case 64:
        {
            result_224=Sys_write();
        }
        break;
        case 70:
        {
            result_224=Sys_exit();
        }
        break;
        case 71:
        {
            result_224=Sys_wait();
        }
        break;
        case 66:
        {
            result_224=Sys_open();
        }
        break;
        case 65:
        {
            fd_225=arg0_216;
            destva_226=arg1_217;
            n_227=arg2_218;
            char kernel_buf_228[256];
            memset(&kernel_buf_228, 0, sizeof(char)            *(256)            );
            if(            fd_225==0            ) {
                ret_229=uart_readn(kernel_buf_228,n_227);
            }
            else {
                ret_229=fs_read(fd_225,kernel_buf_228,n_227);
                if(                ret_229<0                ) {
                    trapframe_215->a0=ret_229;
                    return 0;
                }
                kernel_buf_228[ret_229]=0;
            }
            p_230=((struct proc*)(__right_value17=list$1proc$ph_operator_load_element(gProc,gActiveProc)));
            come_call_finalizer(proc_finalize, __right_value17, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
            if(            copyout(p_230->pagetable,destva_226,kernel_buf_228,ret_229)<0            ) {
                panic("read: copyout failed");
            }
            result_224=ret_229;
        }
        break;
        case 67:
        {
            fd_231=arg0_216;
            ret_232=fs_close(fd_231);
            result_224=ret_232;
        }
        break;
        case 68:
        {
            result_224=Sys_fork();
        }
        break;
        case 69:
        {
            result_224=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_215->a0=result_224;
    return result_224;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

void global_init(){
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct list$1proc$ph* __dec_obj4;
    __dec_obj4=gProc,
    gProc=(struct list$1proc$ph*)come_increment_ref_count(list$1proc$ph_initialize((struct list$1proc$ph*)come_increment_ref_count((struct list$1proc$ph*)come_calloc_v2(1, sizeof(struct list$1proc$ph)*(1), "main.c", 2252, "struct list$1proc$ph*"))));
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
struct list_item$1proc$ph* it_235;
struct list_item$1proc$ph* prev_it_236;
    it_235=self->head;
    while(    it_235!=((void*)0)    ) {
        prev_it_236=it_235;
        it_235=it_235->next;
        come_call_finalizer(list_item$1proc$ph$p_finalize, prev_it_236, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

int main(){
int fork_flag_237;
void* __right_value20 = (void*)0;
struct proc* p_238;
unsigned long  int usersp_239;
unsigned long  long usersatp_240;
unsigned long  int entry_241;
memset(&fork_flag_237, 0, sizeof(int));
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
    alloc_prog((char*)shell_elf,fork_flag_237=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_238=((struct proc*)(__right_value20=list$1proc$ph_operator_load_element(gProc,0)));
    come_call_finalizer(proc_finalize, __right_value20, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    usersp_239=(unsigned long  long)(p_238->stack);
    usersatp_240=((8L<<60)|(((unsigned long  long)p_238->pagetable)>>12));
    entry_241=p_238->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_238;
    kernel_sp=read_s_sp();
    enter_user(entry_241,usersp_239,usersatp_240,10000UL);
    while(    1    ) {
        ;
    }
come_call_finalizer(list$1proc$ph$p_finalize, gProc, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__33;
struct mem_block* current_242;
struct mem_block* prev_243;
void* __result_obj__34;
struct mem_block* new_mem_244;
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
    current_242=free_list;
    prev_243=((void*)0);
    while(    current_242!=((void*)0)    ) {
        if(        current_242->size>=size        ) {
            if(            prev_243==((void*)0)            ) {
                free_list=current_242->next;
            }
            else {
                prev_243->next=current_242->next;
            }
            __result_obj__34 = (void*)(current_242+1);
            return __result_obj__34;
        }
        prev_243=current_242;
        current_242=current_242->next;
    }
    new_mem_244=(struct mem_block*)sbrk(size);
    if(    new_mem_244==(void*)-1    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    new_mem_244->size=size;
    new_mem_244->next=((void*)0);
    __result_obj__36 = (void*)(new_mem_244+1);
    return __result_obj__36;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_245;
void* __result_obj__37;
void* ptr_246;
void* __result_obj__38;
    total_size_245=nmemb*size;
    if(    total_size_245==0    ) {
        __result_obj__37 = ((void*)0);
        return __result_obj__37;
    }
    ptr_246=malloc(total_size_245);
    if(    ptr_246!=((void*)0)    ) {
        memset(ptr_246,0,total_size_245);
    }
    __result_obj__38 = ptr_246;
    return __result_obj__38;
}

void free(void* ptr){
struct mem_block* block_247;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_247=(struct mem_block*)ptr-1;
    block_247->next=free_list;
    free_list=block_247;
}

char* strdup(const char* s){
char* s2_248;
unsigned long  int len_249;
char* p_250;
char* __result_obj__39;
    s2_248=s;
    len_249=strlen(s2_248)+1;
    p_250=malloc(len_249);
    if(    p_250    ) {
        memcpy(p_250,s2_248,len_249);
    }
    __result_obj__39 = p_250;
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
        const char* h_251=haystack;
        const char* n_252=needle;
        while(        *h_251&&*n_252&&(*h_251==*n_252)        ) {
            h_251++;
            n_252++;
        }
        if(        !*n_252        ) {
            __result_obj__41 = (char*)haystack;
            return __result_obj__41;
        }
    }
    __result_obj__42 = ((void*)0);
    return __result_obj__42;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_253;
int i_254;
void* __result_obj__43;
    cdst_253=(char*)dst;
    for(    i_254=0    ;    i_254<n    ;    i_254++    ){
        cdst_253[i_254]=c;
    }
    __result_obj__43 = dst;
    return __result_obj__43;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_255;
const unsigned char* s2_256;
memset(&s1_255, 0, sizeof(const unsigned char*));
memset(&s2_256, 0, sizeof(const unsigned char*));
    s1_255=v1;
    s2_256=v2;
    while(    n-->0    ) {
        if(        *s1_255!=*s2_256        ) {
            return *s1_255-*s2_256;
        }
        s1_255++,s2_256++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_257;
char* d_258;
void* __result_obj__44;
void* __result_obj__45;
s_257 = (void*)0;
d_258 = (void*)0;
    if(    n==0    ) {
        __result_obj__44 = dst;
        return __result_obj__44;
    }
    s_257=src;
    d_258=dst;
    if(    s_257<d_258&&s_257+n>d_258    ) {
        s_257+=n;
        d_258+=n;
        while(        n-->0        ) {
            *--d_258=*--s_257;
        }
    }
    else {
        while(        n-->0        ) {
            *d_258++=*s_257++;
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
char* os_259;
char* __result_obj__47;
os_259 = (void*)0;
    os_259=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__47 = os_259;
    return __result_obj__47;
}

int strlen(const char* s){
int n_260;
memset(&n_260, 0, sizeof(int));
    for(    n_260=0    ;    s[n_260]    ;    n_260++    ){
        ;
    }
    return n_260;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_261;
char* __result_obj__48;
    d_261=dest;
    while(    *d_261    ) {
        d_261++;
    }
    while(    n--&&*src    ) {
        *d_261++=*src++;
    }
    *d_261=0;
    __result_obj__48 = dest;
    return __result_obj__48;
}

char* strtok(char* s, const char* delim){
static char* next_262;
char* start_263;
char* p_264;
char* __result_obj__49;
int is_delim_266;
char* __result_obj__50;
int is_delim_268;
char* __result_obj__51;
next_262 = (void*)0;
start_263 = (void*)0;
p_264 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_262=s;
    }
    if(    next_262==((void*)0)    ) {
        __result_obj__49 = ((void*)0);
        return __result_obj__49;
    }
    start_263=next_262;
    while(    *start_263!=0    ) {
        const char* d_265=delim;
        is_delim_266=0;
        while(        *d_265!=0        ) {
            if(            *start_263==*d_265            ) {
                is_delim_266=1;
                break;
            }
            d_265++;
        }
        if(        !is_delim_266        ) {
            break;
        }
        start_263++;
    }
    if(    *start_263==0    ) {
        next_262=((void*)0);
        __result_obj__50 = ((void*)0);
        return __result_obj__50;
    }
    p_264=start_263;
    while(    *p_264!=0    ) {
        const char* d_267=delim;
        is_delim_268=0;
        while(        *d_267!=0        ) {
            if(            *p_264==*d_267            ) {
                is_delim_268=1;
                break;
            }
            d_267++;
        }
        if(        is_delim_268        ) {
            break;
        }
        p_264++;
    }
    if(    *p_264==0    ) {
        next_262=((void*)0);
    }
    else {
        *p_264=0;
        next_262=p_264+1;
    }
    __result_obj__51 = start_263;
    return __result_obj__51;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_269;
int i_271;
int negative_272;
char* __result_obj__52;
int digit_273;
char* __result_obj__53;
    p_269=buf;
    char tmp_270[32];
    memset(&tmp_270, 0, sizeof(char)    *(32)    );
    i_271=0;
    negative_272=0;
    if(    base<2||base>16    ) {
        *p_269=0;
        __result_obj__52 = p_269;
        return __result_obj__52;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_272=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_273=val_%base;
        tmp_270[i_271++]=(((digit_273<10))?(48+digit_273):(97+digit_273-10));
        val_/=base;
    } while(    val_    );
    if(    negative_272    ) {
        *p_269++=45;
    }
    while(    i_271--    ) {
        *p_269++=tmp_270[i_271];
    }
    *p_269=0;
    __result_obj__53 = buf;
    return __result_obj__53;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_275;
const char* s_276;
unsigned long  int remaining_278;
s_276 = (void*)0;
    char out2_274[512];
    memset(&out2_274, 0, sizeof(char)    *(512)    );
    p_275=out2_274;
    char buf_277[32];
    memset(&buf_277, 0, sizeof(char)    *(32)    );
    remaining_278=sizeof(out2_274);
    for(    ;    *fmt&&remaining_278>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_275++=*fmt;
            remaining_278--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_277,__builtin_va_arg(ap,int),10,1);
            s_276=buf_277;
            break;
            case 117:
            itoa(buf_277,__builtin_va_arg(ap,unsigned int),10,0);
            s_276=buf_277;
            break;
            case 120:
            itoa(buf_277,__builtin_va_arg(ap,unsigned int),16,0);
            s_276=buf_277;
            break;
            case 115:
            s_276=__builtin_va_arg(ap,const char*);
            if(            !s_276            ) {
                s_276="(null)";
            }
            break;
            case 99:
            buf_277[0]=(char)__builtin_va_arg(ap,int);
            buf_277[1]=0;
            s_276=buf_277;
            break;
            case 112:
            strncpy(buf_277,"0x",32);
            itoa(buf_277+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_276=buf_277;
            break;
            case 37:
            buf_277[0]=37;
            buf_277[1]=0;
            s_276=buf_277;
            break;
            default:
            buf_277[0]=37;
            buf_277[1]=*fmt;
            buf_277[2]=0;
            s_276=buf_277;
            break;
        }
        while(        *s_276&&remaining_278>1        ) {
            *p_275++=*s_276++;
            remaining_278--;
        }
    }
    *p_275=0;
    *out=strdup(out2_274);
    return p_275-out2_274;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_279;
char* p_280;
const char* s_281;
unsigned long  int remaining_283;
memset(&ap_279, 0, sizeof(va_list));
s_281 = (void*)0;
    __builtin_va_start(ap_279,fmt);
    p_280=out;
    char buf_282[32];
    memset(&buf_282, 0, sizeof(char)    *(32)    );
    remaining_283=out_size;
    if(    remaining_283==0    ) {
        __builtin_va_end(ap_279);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_283>1            ) {
                *p_280++=*fmt;
                remaining_283--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_281=__builtin_va_arg(ap_279,const char*);
            while(            *s_281&&remaining_283>1            ) {
                *p_280++=*s_281++;
                remaining_283--;
            }
            break;
            case 100:
            itoa(buf_282,__builtin_va_arg(ap_279,int),10,0);
            s_281=buf_282;
            while(            *s_281&&remaining_283>1            ) {
                *p_280++=*s_281++;
                remaining_283--;
            }
            break;
            case 120:
            itoa(buf_282,(unsigned int)__builtin_va_arg(ap_279,int),16,1);
            s_281=buf_282;
            while(            *s_281&&remaining_283>1            ) {
                *p_280++=*s_281++;
                remaining_283--;
            }
            break;
            case 99:
            if(            remaining_283>1            ) {
                *p_280++=(char)__builtin_va_arg(ap_279,int);
                remaining_283--;
            }
            break;
            case 112:
            s_281="0x";
            while(            *s_281&&remaining_283>1            ) {
                *p_280++=*s_281++;
                remaining_283--;
            }
            itoa(buf_282,(long)__builtin_va_arg(ap_279,void*),16,1);
            s_281=buf_282;
            while(            *s_281&&remaining_283>1            ) {
                *p_280++=*s_281++;
                remaining_283--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_282,__builtin_va_arg(ap_279,long),10,1);
                s_281=buf_282;
                while(                *s_281&&remaining_283>1                ) {
                    *p_280++=*s_281++;
                    remaining_283--;
                }
            }
            break;
            default:
            if(            remaining_283>1            ) {
                *p_280++=37;
                remaining_283--;
                if(                remaining_283>1                ) {
                    *p_280++=*fmt;
                    remaining_283--;
                }
            }
            break;
        }
    }
    *p_280=0;
    __builtin_va_end(ap_279);
    return p_280-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_284;
char* p_285;
const char* s_286;
unsigned long  int remaining_288;
memset(&ap_284, 0, sizeof(va_list));
s_286 = (void*)0;
    __builtin_va_start(ap_284,fmt);
    p_285=out;
    char buf_287[32];
    memset(&buf_287, 0, sizeof(char)    *(32)    );
    remaining_288=out_size;
    if(    remaining_288==0    ) {
        __builtin_va_end(ap_284);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_288>1            ) {
                *p_285++=*fmt;
                remaining_288--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_286=__builtin_va_arg(ap_284,const char*);
            while(            *s_286&&remaining_288>1            ) {
                *p_285++=*s_286++;
                remaining_288--;
            }
            break;
            case 100:
            itoa(buf_287,__builtin_va_arg(ap_284,int),10,0);
            s_286=buf_287;
            while(            *s_286&&remaining_288>1            ) {
                *p_285++=*s_286++;
                remaining_288--;
            }
            break;
            case 120:
            itoa(buf_287,(unsigned int)__builtin_va_arg(ap_284,int),16,1);
            s_286=buf_287;
            while(            *s_286&&remaining_288>1            ) {
                *p_285++=*s_286++;
                remaining_288--;
            }
            break;
            case 99:
            if(            remaining_288>1            ) {
                *p_285++=(char)__builtin_va_arg(ap_284,int);
                remaining_288--;
            }
            break;
            case 112:
            s_286="0x";
            while(            *s_286&&remaining_288>1            ) {
                *p_285++=*s_286++;
                remaining_288--;
            }
            itoa(buf_287,(long)__builtin_va_arg(ap_284,void*),16,1);
            s_286=buf_287;
            while(            *s_286&&remaining_288>1            ) {
                *p_285++=*s_286++;
                remaining_288--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_287,__builtin_va_arg(ap_284,long),10,1);
                s_286=buf_287;
                while(                *s_286&&remaining_288>1                ) {
                    *p_285++=*s_286++;
                    remaining_288--;
                }
            }
            break;
            default:
            if(            remaining_288>1            ) {
                *p_285++=37;
                remaining_288--;
                if(                remaining_288>1                ) {
                    *p_285++=*fmt;
                    remaining_288--;
                }
            }
            break;
        }
    }
    *p_285=0;
    __builtin_va_end(ap_284);
    return p_285-out;
}

void printint(int val_, int base, int sign){
int i_290;
int negative_291;
unsigned int uval_292;
int digit_293;
memset(&uval_292, 0, sizeof(unsigned int));
    char buf_289[33];
    memset(&buf_289, 0, sizeof(char)    *(33)    );
    i_290=0;
    negative_291=0;
    if(    sign&&val_<0    ) {
        negative_291=1;
        uval_292=-val_;
    }
    else {
        uval_292=(unsigned int)val_;
    }
    if(    uval_292==0    ) {
        putchar(48);
        return;
    }
    while(    uval_292>0    ) {
        digit_293=uval_292%base;
        buf_289[i_290++]=((digit_293<10)?(48+digit_293):(97+(digit_293-10)));
        uval_292/=base;
    }
    if(    negative_291    ) {
        putchar(45);
    }
    while(    --i_290>=0    ) {
        putchar(buf_289[i_290]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_295;
int negative_296;
int digit_297;
    char buf_294[65];
    memset(&buf_294, 0, sizeof(char)    *(65)    );
    i_295=0;
    negative_296=0;
    if(    sign&&(long)val_<0    ) {
        negative_296=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_297=val_%base;
        buf_294[i_295++]=((digit_297<10)?(48+digit_297):(97+(digit_297-10)));
        val_/=base;
    }
    if(    negative_296    ) {
        putchar(45);
    }
    while(    --i_295>=0    ) {
        putchar(buf_294[i_295]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_299;
int negative_300;
int digit_301;
    char buf_298[65];
    memset(&buf_298, 0, sizeof(char)    *(65)    );
    i_299=0;
    negative_300=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_300=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_301=val_%base;
        buf_298[i_299++]=((digit_301<10)?(48+digit_301):(97+(digit_301-10)));
        val_/=base;
    }
    if(    negative_300    ) {
        putchar(45);
    }
    while(    --i_299>=0    ) {
        putchar(buf_298[i_299]);
    }
}

int printf(const char* fmt, ...){
va_list ap_302;
const char* p_303;
int lcount_304;
unsigned long  int val__305;
unsigned long  long val__306;
long val__307;
long long val__308;
int i_309;
int val__310;
unsigned int val__311;
unsigned long  int val__312;
char c_314;
memset(&ap_302, 0, sizeof(va_list));
p_303 = (void*)0;
    __builtin_va_start(ap_302,fmt);
    for(    p_303=fmt    ;    *p_303    ;    p_303++    ){
        if(        *p_303!=37        ) {
            putchar(*p_303);
            continue;
        }
        p_303++;
        if(        *p_303==108        ) {
            lcount_304=1;
            if(            *(p_303+1)==108            ) {
                lcount_304=2;
                p_303++;
            }
            p_303++;
            switch (            *p_303) {
                case 120:
                {
                    if(                    lcount_304==1                    ) {
                        val__305=__builtin_va_arg(ap_302,unsigned long  int);
                        printlong(val__305,16,0);
                    }
                    else {
                        val__306=__builtin_va_arg(ap_302,unsigned long  long);
                        printlonglong(val__306,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_304==1                    ) {
                        val__307=__builtin_va_arg(ap_302,long);
                        printlong(val__307,10,1);
                    }
                    else {
                        val__308=__builtin_va_arg(ap_302,long  long);
                        printlonglong(val__308,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_309=0                    ;                    i_309<lcount_304                    ;                    i_309++                    ){
                        putchar(108);
                    }
                    putchar(*p_303);
                    break;
                }
            }
        }
        else {
            switch (            *p_303) {
                case 100:
                {
                    val__310=__builtin_va_arg(ap_302,int);
                    printint(val__310,10,1);
                    break;
                }
                case 120:
                {
                    val__311=__builtin_va_arg(ap_302,unsigned int);
                    printint(val__311,16,0);
                    break;
                }
                case 112:
                {
                    val__312=(unsigned long  int)__builtin_va_arg(ap_302,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__312,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_313=__builtin_va_arg(ap_302,const char*);
                    if(                    !s_313                    ) {
                        s_313="(null)";
                    }
                    while(                    *s_313                    ) {
                        putchar(*s_313++);
                    }
                    break;
                }
                case 99:
                {
                    c_314=(char)__builtin_va_arg(ap_302,int);
                    putchar(c_314);
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
                    putchar(*p_303);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_302);
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
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct buffer* buf_315;
int i_316;
void* __right_value23 = (void*)0;
    buf_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_315,"%s %d\n",sname,sline);
    for(    i_316=gNumComeStackFrame-2    ;    i_316>=0    ;    i_316--    ){
        buffer_append_format(buf_315,"%s %d #%d\n",gComeStackFrameSName[i_316],gComeStackFrameSLine[i_316],gComeStackFrameID[i_316]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value23=buffer_to_string(buf_315))));
    (__right_value23 = come_decrement_ref_count(__right_value23, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_315, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_317;
    for(    i_317=gNumComeStackFrame-1    ;    i_317>=0    ;    i_317--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_317],gComeStackFrameSLine[i_317],gComeStackFrameID[i_317]);
    }
}

char* come_get_stackframe(){
void* __right_value24 = (void*)0;
char* __result_obj__54;
    __result_obj__54 = (char*)come_increment_ref_count(((char*)(__right_value24=__builtin_string(gComeStackFrameBuffer))));
    (__right_value24 = come_decrement_ref_count(__right_value24, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
int i_318;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_318=0    ;    i_318<gHeapPages.mSizePages    ;    i_318++    ){
        gHeapPages.mPages[i_318]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_319;
int n_320;
_Bool flag_321;
int i_322;
struct sMemHeaderTiny* it_323;
int n_324;
int i_325;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_319=gAllocMem;
        n_320=0;
        while(        it_319        ) {
            n_320++;
            flag_321=(_Bool)0;
            printf("#%d ",n_320);
            if(            it_319->class_name            ) {
                printf("%p (%s): ",(char*)it_319+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_319->class_name);
            }
            for(            i_322=0            ;            i_322<16            ;            i_322++            ){
                if(                it_319->sname[i_322]                ) {
                    printf("%s %d #%d, ",it_319->sname[i_322],it_319->sline[i_322],it_319->id[i_322]);
                    flag_321=(_Bool)1;
                }
            }
            if(            flag_321            ) {
                puts("");
            }
            it_319=it_319->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_320,gNumAlloc,gNumFree);
    }
    else {
        it_323=(struct sMemHeaderTiny*)gAllocMem;
        n_324=0;
        while(        it_323        ) {
            n_324++;
            if(            it_323->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_324,(char*)it_323+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_323->class_name,it_323->sname,it_323->sline);
            }
            it_323=it_323->next;
        }
        if(        n_324>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_324,gNumAlloc,gNumFree);
        }
    }
    for(    i_325=0    ;    i_325<gHeapPages.mSizePages    ;    i_325++    ){
        free(gHeapPages.mPages[i_325]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_326;
void* __result_obj__55;
    result_326=((void*)0);
    size=(size+7&~7);
    result_326=calloc(1,size);
    __result_obj__55 = result_326;
    return __result_obj__55;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_327;
struct sMemHeader* prev_it_328;
struct sMemHeader* next_it_329;
unsigned long  int size_330;
struct sMemHeaderTiny* it_331;
struct sMemHeaderTiny* prev_it_332;
struct sMemHeaderTiny* next_it_333;
unsigned long  int size_334;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_327=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_327->allocated!=177783            ) {
                return;
            }
            it_327->allocated=0;
            prev_it_328=it_327->prev;
            next_it_329=it_327->next;
            if(            gAllocMem==it_327            ) {
                gAllocMem=next_it_329;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_328                ) {
                    prev_it_328->next=next_it_329;
                }
                if(                next_it_329                ) {
                    next_it_329->prev=prev_it_328;
                }
            }
            size_330=it_327->size;
            free(it_327);
            gNumFree++;
        }
        else {
            it_331=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_331->allocated!=177783            ) {
                return;
            }
            it_331->allocated=0;
            prev_it_332=it_331->prev;
            next_it_333=it_331->next;
            if(            gAllocMem==it_331            ) {
                gAllocMem=(struct sMemHeader*)next_it_333;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_332                ) {
                    prev_it_332->next=next_it_333;
                }
                if(                next_it_333                ) {
                    next_it_333->prev=prev_it_332;
                }
            }
            size_334=it_331->size;
            free(it_331);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_335;
struct sMemHeader* it_336;
int i_337;
int i_338;
void* __result_obj__56;
void* result_339;
struct sMemHeaderTiny* it_340;
void* __result_obj__57;
memset(&i_337, 0, sizeof(int));
memset(&i_338, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_335=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_336=result_335;
        it_336->allocated=177783;
        it_336->size=size+sizeof(struct sMemHeader);
        it_336->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_337=0            ;            i_337<gNumComeStackFrame            ;            i_337++            ){
                it_336->sname[i_337]=gComeStackFrameSName[i_337];
                it_336->sline[i_337]=gComeStackFrameSLine[i_337];
                it_336->id[i_337]=gComeStackFrameID[i_337];
            }
        }
        else {
            for(            i_338=0            ;            i_338<16            ;            i_338++            ){
                it_336->sname[i_338]=gComeStackFrameSName[gNumComeStackFrame-1-i_338];
                it_336->sline[i_338]=gComeStackFrameSLine[gNumComeStackFrame-1-i_338];
                it_336->id[i_338]=gComeStackFrameID[gNumComeStackFrame-1-i_338];
            }
        }
        come_pop_stackframe_v2();
        it_336->next=gAllocMem;
        it_336->prev=((void*)0);
        it_336->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_336;
        }
        gAllocMem=it_336;
        gNumAlloc++;
        __result_obj__56 = (char*)result_335+sizeof(struct sMemHeader);
        return __result_obj__56;
    }
    else {
        result_339=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_340=result_339;
        it_340->allocated=177783;
        it_340->class_name=class_name;
        it_340->sname=sname;
        it_340->sline=sline;
        it_340->size=size+sizeof(struct sMemHeaderTiny);
        it_340->free_next=((void*)0);
        it_340->next=(struct sMemHeaderTiny*)gAllocMem;
        it_340->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_340;
        }
        gAllocMem=(struct sMemHeader*)it_340;
        gNumAlloc++;
        __result_obj__57 = (char*)result_339+sizeof(struct sMemHeaderTiny);
        return __result_obj__57;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_341;
char* __result_obj__58;
struct sMemHeaderTiny* it_342;
char* __result_obj__59;
    if(    gComeDebugLib    ) {
        it_341=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_341->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_341);
            exit(2);
        }
        __result_obj__58 = it_341->class_name;
        return __result_obj__58;
    }
    else {
        it_342=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_342->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_342);
            exit(2);
        }
        __result_obj__59 = it_342->class_name;
        return __result_obj__59;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_343;
int i_344;
struct sMemHeaderTiny* it_345;
    if(    gComeDebugLib    ) {
        it_343=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_343->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_343->class_name        ) {
            printf("(%s): ",it_343->class_name);
        }
        for(        i_344=0        ;        i_344<16        ;        i_344++        ){
            if(            it_343->sname[i_344]            ) {
                printf("%s %d #%d, ",it_343->sname[i_344],it_343->sline[i_344],it_343->id[i_344]);
            }
        }
        puts("");
    }
    else {
        it_345=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_345->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_345->class_name,it_345->sname,it_345->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_346;
unsigned long  int* ref_count_347;
unsigned long  int* size2_348;
void* __result_obj__60;
    mem_346=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_347=(unsigned long  int*)mem_346;
    *ref_count_347=0;
    size2_348=(unsigned long  int*)(mem_346+sizeof(unsigned long  int));
    *size2_348=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__60 = mem_346+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__60;
}

void come_free(void* mem){
unsigned long  int* ref_count_349;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_349=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_349);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__61;
char* mem_350;
unsigned long  int* size_p_351;
unsigned long  int size_352;
void* result_353;
void* __result_obj__62;
    if(    !block    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_350=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_351=(unsigned long  int*)(mem_350+sizeof(unsigned long  int));
    size_352=*size_p_351-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_353=come_calloc_v2(1,size_352,sname,sline,class_name);
    memcpy(result_353,block,size_352);
    __result_obj__62 = result_353;
    return __result_obj__62;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__63;
unsigned long  int* ref_count_354;
void* __result_obj__64;
    if(    mem==((void*)0)    ) {
        __result_obj__63 = mem;
        return __result_obj__63;
    }
    ref_count_354=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_354)++;
    __result_obj__64 = mem;
    return __result_obj__64;
}

void* come_print_ref_count(void* mem){
void* __result_obj__65;
unsigned long  int* ref_count_355;
void* __result_obj__66;
    if(    mem==((void*)0)    ) {
        __result_obj__65 = mem;
        return __result_obj__65;
    }
    ref_count_355=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_355);
    __result_obj__66 = mem;
    return __result_obj__66;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_356;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_356=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_356;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__67;
void* __result_obj__68;
unsigned long  int* ref_count_357;
unsigned long  int count_358;
void (*finalizer_359)(void*);
void* __result_obj__69;
void* __result_obj__70;
memset(&finalizer_359, 0, sizeof(void (*)(void*)));
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
    ref_count_357=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_357)--;
    }
    count_358=*ref_count_357;
    if(    !no_free&&count_358<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_359=protocol_fun;
            finalizer_359(protocol_obj);
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
void (*finalizer_360)(void*);
void (*finalizer_361)(void*);
void (*finalizer_362)(void*);
unsigned long  int* ref_count_363;
unsigned long  int count_364;
void (*finalizer_365)(void*);
void (*finalizer_366)(void*);
void (*finalizer_367)(void*);
memset(&finalizer_360, 0, sizeof(void (*)(void*)));
memset(&finalizer_361, 0, sizeof(void (*)(void*)));
memset(&finalizer_362, 0, sizeof(void (*)(void*)));
memset(&finalizer_365, 0, sizeof(void (*)(void*)));
memset(&finalizer_366, 0, sizeof(void (*)(void*)));
memset(&finalizer_367, 0, sizeof(void (*)(void*)));
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
                finalizer_360=protocol_fun;
                finalizer_360(protocol_obj);
            }
            finalizer_361=fun;
            finalizer_361(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_362=protocol_fun;
                finalizer_362(protocol_obj);
            }
        }
    }
    else {
        ref_count_363=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_363)--;
        }
        count_364=*ref_count_363;
        if(        !no_free&&count_364<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_365=protocol_fun;
                        finalizer_365(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_366=fun;
                        finalizer_366(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_367=protocol_fun;
                        finalizer_367(protocol_obj);
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
int len_368;
void* __right_value25 = (void*)0;
char* result_369;
char* __result_obj__72;
    if(    str==((void*)0)    ) {
        __result_obj__71 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    len_368=strlen(str)+1;
    result_369=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_368)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_369,str,len_368);
    __result_obj__72 = (char*)come_increment_ref_count(result_369);
    (result_369 = come_decrement_ref_count(result_369, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value26 = (void*)0;
char* __result_obj__73;
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value26=come_get_stackframe())));
    (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value27 = (void*)0;
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
void* __right_value28 = (void*)0;
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
void* __right_value29 = (void*)0;
struct buffer* result_370;
void* __right_value30 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__78;
    if(    self==((void*)0)    ) {
        __result_obj__77 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__77;
    }
    result_370=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2913, "struct buffer*"));
    result_370->size=self->size;
    __dec_obj7=result_370->buf,
    result_370->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2916, "char*"));
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_370->len=self->len;
    memcpy(result_370->buf,self->buf,self->len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_370);
    come_call_finalizer(buffer_finalize, result_370, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
_Bool __result_obj__79;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__79 = string_equals(((char*)(__right_value31=buffer_to_string(left))),((char*)(__right_value32=buffer_to_string(right))));
    (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value33 = (void*)0;
char* old_buf_371;
int old_len_372;
int new_size_373;
void* __right_value34 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__81;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__80 = self;
        return __result_obj__80;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_371=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2964, "char*"));
        memcpy(old_buf_371,self->buf,self->size);
        old_len_372=self->len;
        new_size_373=(self->size+size+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_373)), "/usr/local/include/comelang.h", 2968, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_371,old_len_372);
        self->buf[old_len_372]=0;
        self->size=new_size_373;
        (old_buf_371 = come_decrement_ref_count(old_buf_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__81 = self;
    return __result_obj__81;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__82;
void* __right_value35 = (void*)0;
char* old_buf_374;
int old_len_375;
int new_size_376;
void* __right_value36 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__83;
    if(    self==((void*)0)    ) {
        __result_obj__82 = ((void*)0);
        return __result_obj__82;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_374=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2987, "char*"));
        old_len_375=self->len;
        new_size_376=(self->size+10+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_376)), "/usr/local/include/comelang.h", 2991, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_374,old_len_375);
        self->buf[old_len_375]=0;
        self->size=new_size_376;
        (old_buf_374 = come_decrement_ref_count(old_buf_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__83 = self;
    return __result_obj__83;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__84;
int size_377;
void* __right_value37 = (void*)0;
char* old_buf_378;
int old_len_379;
int new_size_380;
void* __right_value38 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__85;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__84 = self;
        return __result_obj__84;
    }
    size_377=strlen(mem);
    if(    self->len+size_377+1+1>=self->size    ) {
        old_buf_378=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3013, "char*"));
        memcpy(old_buf_378,self->buf,self->size);
        old_len_379=self->len;
        new_size_380=(self->size+size_377+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_380)), "/usr/local/include/comelang.h", 3017, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_378,old_len_379);
        self->buf[old_len_379]=0;
        self->size=new_size_380;
        (old_buf_378 = come_decrement_ref_count(old_buf_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_377);
    self->len+=size_377;
    self->buf[self->len]=0;
    __result_obj__85 = self;
    return __result_obj__85;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__86;
va_list args_381;
char* result_382;
int len_383;
struct buffer* __result_obj__87;
void* __right_value39 = (void*)0;
char* mem_384;
int size_385;
void* __right_value40 = (void*)0;
char* old_buf_386;
int old_len_387;
int new_size_388;
void* __right_value41 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__88;
result_382 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__86 = self;
        return __result_obj__86;
    }
    __builtin_va_start(args_381,msg);
    len_383=vasprintf(&result_382,msg,args_381);
    __builtin_va_end(args_381);
    if(    len_383<0    ) {
        __result_obj__87 = self;
        return __result_obj__87;
    }
    mem_384=(char*)come_increment_ref_count(__builtin_string(result_382));
    size_385=strlen(mem_384);
    if(    self->len+size_385+1+1>=self->size    ) {
        old_buf_386=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3061, "char*"));
        memcpy(old_buf_386,self->buf,self->size);
        old_len_387=self->len;
        new_size_388=(self->size+size_385+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_388)), "/usr/local/include/comelang.h", 3065, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_386,old_len_387);
        self->buf[old_len_387]=0;
        self->size=new_size_388;
        (old_buf_386 = come_decrement_ref_count(old_buf_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_384,size_385);
    self->len+=size_385;
    self->buf[self->len]=0;
    free(result_382);
    __result_obj__88 = self;
    (mem_384 = come_decrement_ref_count(mem_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__88;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__89;
int size_389;
void* __right_value42 = (void*)0;
char* old_buf_390;
int old_len_391;
int new_size_392;
void* __right_value43 = (void*)0;
char* __dec_obj12;
struct buffer* __result_obj__90;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__89 = self;
        return __result_obj__89;
    }
    size_389=strlen(mem)+1;
    if(    self->len+size_389+1+1+1>=self->size    ) {
        old_buf_390=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3087, "char*"));
        memcpy(old_buf_390,self->buf,self->size);
        old_len_391=self->len;
        new_size_392=(self->size+size_389+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_392)), "/usr/local/include/comelang.h", 3091, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_390,old_len_391);
        self->buf[old_len_391]=0;
        self->size=new_size_392;
        (old_buf_390 = come_decrement_ref_count(old_buf_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_389);
    self->len+=size_389;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__91;
int* mem_393;
int size_394;
void* __right_value44 = (void*)0;
char* old_buf_395;
int old_len_396;
int new_size_397;
void* __right_value45 = (void*)0;
char* __dec_obj13;
struct buffer* __result_obj__92;
    if(    self==((void*)0)    ) {
        __result_obj__91 = ((void*)0);
        return __result_obj__91;
    }
    mem_393=&value;
    size_394=sizeof(int);
    if(    self->len+size_394+1+1>=self->size    ) {
        old_buf_395=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3114, "char*"));
        memcpy(old_buf_395,self->buf,self->size);
        old_len_396=self->len;
        new_size_397=(self->size+size_394+1)*2;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_397)), "/usr/local/include/comelang.h", 3118, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_395,old_len_396);
        self->buf[old_len_396]=0;
        self->size=new_size_397;
        (old_buf_395 = come_decrement_ref_count(old_buf_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_393,size_394);
    self->len+=size_394;
    self->buf[self->len]=0;
    __result_obj__92 = self;
    return __result_obj__92;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_398;
int size_399;
void* __right_value46 = (void*)0;
char* old_buf_400;
int old_len_401;
int new_size_402;
void* __right_value47 = (void*)0;
char* __dec_obj14;
struct buffer* __result_obj__93;
    mem_398=&value;
    size_399=sizeof(long);
    if(    self->len+size_399+1+1>=self->size    ) {
        old_buf_400=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3137, "char*"));
        memcpy(old_buf_400,self->buf,self->size);
        old_len_401=self->len;
        new_size_402=(self->size+size_399+1)*2;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_402)), "/usr/local/include/comelang.h", 3141, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_400,old_len_401);
        self->buf[old_len_401]=0;
        self->size=new_size_402;
        (old_buf_400 = come_decrement_ref_count(old_buf_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_398,size_399);
    self->len+=size_399;
    self->buf[self->len]=0;
    __result_obj__93 = self;
    return __result_obj__93;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__94;
short* mem_403;
int size_404;
void* __right_value48 = (void*)0;
char* old_buf_405;
int old_len_406;
int new_size_407;
void* __right_value49 = (void*)0;
char* __dec_obj15;
struct buffer* __result_obj__95;
    if(    self==((void*)0)    ) {
        __result_obj__94 = ((void*)0);
        return __result_obj__94;
    }
    mem_403=&value;
    size_404=sizeof(short);
    if(    self->len+size_404+1+1>=self->size    ) {
        old_buf_405=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3164, "char*"));
        memcpy(old_buf_405,self->buf,self->size);
        old_len_406=self->len;
        new_size_407=(self->size+size_404+1)*2;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_407)), "/usr/local/include/comelang.h", 3168, "char*"));
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_405,old_len_406);
        self->buf[old_len_406]=0;
        self->size=new_size_407;
        (old_buf_405 = come_decrement_ref_count(old_buf_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_403,size_404);
    self->len+=size_404;
    self->buf[self->len]=0;
    __result_obj__95 = self;
    return __result_obj__95;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__96;
int len_408;
int new_size_409;
void* __right_value50 = (void*)0;
char* __dec_obj16;
int i_410;
struct buffer* __result_obj__97;
    if(    self==((void*)0)    ) {
        __result_obj__96 = ((void*)0);
        return __result_obj__96;
    }
    len_408=self->len;
    len_408=(len_408+3)&~3;
    if(    len_408>=self->size    ) {
        new_size_409=(self->size+1+1)*2;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_409)), "/usr/local/include/comelang.h", 3192, "char*"));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_409;
    }
    for(    i_410=self->len    ;    i_410<len_408    ;    i_410++    ){
        self->buf[i_410]=0;
    }
    self->len=len_408;
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
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct buffer* result_411;
struct buffer* __result_obj__98;
struct buffer* __result_obj__99;
    result_411=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3222, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__98 = (struct buffer*)come_increment_ref_count(result_411);
        come_call_finalizer(buffer_finalize, result_411, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__98;
    }
    buffer_append_str(result_411,self);
    __result_obj__99 = (struct buffer*)come_increment_ref_count(result_411);
    come_call_finalizer(buffer_finalize, result_411, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

char* buffer_to_string(struct buffer* self){
void* __right_value53 = (void*)0;
char* __result_obj__100;
void* __right_value54 = (void*)0;
char* __result_obj__101;
    if(    self==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value53=__builtin_string(""))));
        (__right_value53 = come_decrement_ref_count(__right_value53, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    __result_obj__101 = (char*)come_increment_ref_count(((char*)(__right_value54=__builtin_string(self->buf))));
    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__102;
    __result_obj__102 = self->buf;
    return __result_obj__102;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct buffer* result_412;
struct buffer* __result_obj__103;
    result_412=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3249, "struct buffer*"))));
    buffer_append(result_412,self,sizeof(char)*len);
    __result_obj__103 = (struct buffer*)come_increment_ref_count(result_412);
    come_call_finalizer(buffer_finalize, result_412, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct buffer* result_413;
int i_414;
struct buffer* __result_obj__104;
    result_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3256, "struct buffer*"))));
    for(    i_414=0    ;    i_414<len    ;    i_414++    ){
        buffer_append(result_413,self[i_414],strlen(self[i_414]));
    }
    __result_obj__104 = (struct buffer*)come_increment_ref_count(result_413);
    come_call_finalizer(buffer_finalize, result_413, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__104, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__104;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct buffer* result_415;
struct buffer* __result_obj__105;
    result_415=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3265, "struct buffer*"))));
    buffer_append(result_415,(char*)self,sizeof(short)*len);
    __result_obj__105 = (struct buffer*)come_increment_ref_count(result_415);
    come_call_finalizer(buffer_finalize, result_415, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* result_416;
struct buffer* __result_obj__106;
    result_416=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3272, "struct buffer*"))));
    buffer_append(result_416,(char*)self,sizeof(int)*len);
    __result_obj__106 = (struct buffer*)come_increment_ref_count(result_416);
    come_call_finalizer(buffer_finalize, result_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* result_417;
struct buffer* __result_obj__107;
    result_417=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3279, "struct buffer*"))));
    buffer_append(result_417,(char*)self,sizeof(long)*len);
    __result_obj__107 = (struct buffer*)come_increment_ref_count(result_417);
    come_call_finalizer(buffer_finalize, result_417, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__107, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__107;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* result_418;
struct buffer* __result_obj__108;
    result_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3286, "struct buffer*"))));
    buffer_append(result_418,(char*)self,sizeof(float)*len);
    __result_obj__108 = (struct buffer*)come_increment_ref_count(result_418);
    come_call_finalizer(buffer_finalize, result_418, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* result_419;
struct buffer* __result_obj__109;
    result_419=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3293, "struct buffer*"))));
    buffer_append(result_419,(char*)self,sizeof(double)*len);
    __result_obj__109 = (struct buffer*)come_increment_ref_count(result_419);
    come_call_finalizer(buffer_finalize, result_419, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

char* buffer_printable(struct buffer* self){
int len_420;
void* __right_value69 = (void*)0;
char* result_421;
int n_422;
int i_423;
unsigned char c_424;
char* __result_obj__110;
    len_420=self->len;
    result_421=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_420*2+1)), "/usr/local/include/comelang.h", 3301, "char*"));
    n_422=0;
    for(    i_423=0    ;    i_423<len_420    ;    i_423++    ){
        c_424=self->buf[i_423];
        if(        (c_424>=0&&c_424<32)||c_424==127        ) {
            result_421[n_422++]=94;
            result_421[n_422++]=c_424+65-1;
        }
        else if(        c_424>127        ) {
            result_421[n_422++]=63;
        }
        else {
            result_421[n_422++]=c_424;
        }
    }
    result_421[n_422]=0;
    __result_obj__110 = (char*)come_increment_ref_count(result_421);
    (result_421 = come_decrement_ref_count(result_421, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_425;
struct list$1char$* __result_obj__112;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_425=0    ;    i_425<num_value    ;    i_425++    ){
        list$1char$_push_back(self,values[i_425]);
    }
    __result_obj__112 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value71 = (void*)0;
struct list_item$1char$* litem_426;
void* __right_value72 = (void*)0;
struct list_item$1char$* litem_427;
void* __right_value73 = (void*)0;
struct list_item$1char$* litem_428;
struct list$1char$* __result_obj__111;
    if(    self->len==0    ) {
        litem_426=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value71=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_426->prev=((void*)0);
        litem_426->next=((void*)0);
        litem_426->item=item;
        self->tail=litem_426;
        self->head=litem_426;
    }
    else if(    self->len==1    ) {
        litem_427=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value72=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_427->prev=self->head;
        litem_427->next=((void*)0);
        litem_427->item=item;
        self->tail=litem_427;
        self->head->next=litem_427;
    }
    else {
        litem_428=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value73=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_428->prev=self->tail;
        litem_428->next=((void*)0);
        litem_428->item=item;
        self->tail->next=litem_428;
        self->tail=litem_428;
    }
    self->len++;
    __result_obj__111 = self;
    return __result_obj__111;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_429;
struct list_item$1char$* prev_it_430;
    it_429=self->head;
    while(    it_429!=((void*)0)    ) {
        prev_it_430=it_429;
        it_429=it_429->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_430, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1char$* __result_obj__113;
    __result_obj__113 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value74=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__113;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_431;
struct list$1char$p* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_431=0    ;    i_431<num_value    ;    i_431++    ){
        list$1char$p_push_back(self,values[i_431]);
    }
    __result_obj__115 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value76 = (void*)0;
struct list_item$1char$p* litem_432;
void* __right_value77 = (void*)0;
struct list_item$1char$p* litem_433;
void* __right_value78 = (void*)0;
struct list_item$1char$p* litem_434;
struct list$1char$p* __result_obj__114;
    if(    self->len==0    ) {
        litem_432=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value76=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_432->prev=((void*)0);
        litem_432->next=((void*)0);
        litem_432->item=item;
        self->tail=litem_432;
        self->head=litem_432;
    }
    else if(    self->len==1    ) {
        litem_433=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value77=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_433->prev=self->head;
        litem_433->next=((void*)0);
        litem_433->item=item;
        self->tail=litem_433;
        self->head->next=litem_433;
    }
    else {
        litem_434=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value78=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_434->prev=self->tail;
        litem_434->next=((void*)0);
        litem_434->item=item;
        self->tail->next=litem_434;
        self->tail=litem_434;
    }
    self->len++;
    __result_obj__114 = self;
    return __result_obj__114;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_435;
struct list_item$1char$p* prev_it_436;
    it_435=self->head;
    while(    it_435!=((void*)0)    ) {
        prev_it_436=it_435;
        it_435=it_435->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_436, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1char$p* __result_obj__116;
    __result_obj__116 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value79=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__116;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_437;
struct list$1short$* __result_obj__118;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_437=0    ;    i_437<num_value    ;    i_437++    ){
        list$1short$_push_back(self,values[i_437]);
    }
    __result_obj__118 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__118, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__118;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value81 = (void*)0;
struct list_item$1short$* litem_438;
void* __right_value82 = (void*)0;
struct list_item$1short$* litem_439;
void* __right_value83 = (void*)0;
struct list_item$1short$* litem_440;
struct list$1short$* __result_obj__117;
    if(    self->len==0    ) {
        litem_438=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value81=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_438->prev=((void*)0);
        litem_438->next=((void*)0);
        litem_438->item=item;
        self->tail=litem_438;
        self->head=litem_438;
    }
    else if(    self->len==1    ) {
        litem_439=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value82=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_439->prev=self->head;
        litem_439->next=((void*)0);
        litem_439->item=item;
        self->tail=litem_439;
        self->head->next=litem_439;
    }
    else {
        litem_440=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value83=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_440->prev=self->tail;
        litem_440->next=((void*)0);
        litem_440->item=item;
        self->tail->next=litem_440;
        self->tail=litem_440;
    }
    self->len++;
    __result_obj__117 = self;
    return __result_obj__117;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_441;
struct list_item$1short$* prev_it_442;
    it_441=self->head;
    while(    it_441!=((void*)0)    ) {
        prev_it_442=it_441;
        it_441=it_441->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_442, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1short$* __result_obj__119;
    __result_obj__119 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value84=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__119;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_443;
struct list$1int$* __result_obj__121;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_443=0    ;    i_443<num_value    ;    i_443++    ){
        list$1int$_push_back(self,values[i_443]);
    }
    __result_obj__121 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__121, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__121;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value86 = (void*)0;
struct list_item$1int$* litem_444;
void* __right_value87 = (void*)0;
struct list_item$1int$* litem_445;
void* __right_value88 = (void*)0;
struct list_item$1int$* litem_446;
struct list$1int$* __result_obj__120;
    if(    self->len==0    ) {
        litem_444=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value86=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_444->prev=((void*)0);
        litem_444->next=((void*)0);
        litem_444->item=item;
        self->tail=litem_444;
        self->head=litem_444;
    }
    else if(    self->len==1    ) {
        litem_445=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value87=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_445->prev=self->head;
        litem_445->next=((void*)0);
        litem_445->item=item;
        self->tail=litem_445;
        self->head->next=litem_445;
    }
    else {
        litem_446=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value88=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_446->prev=self->tail;
        litem_446->next=((void*)0);
        litem_446->item=item;
        self->tail->next=litem_446;
        self->tail=litem_446;
    }
    self->len++;
    __result_obj__120 = self;
    return __result_obj__120;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_447;
struct list_item$1int$* prev_it_448;
    it_447=self->head;
    while(    it_447!=((void*)0)    ) {
        prev_it_448=it_447;
        it_447=it_447->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_448, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value85 = (void*)0;
void* __right_value89 = (void*)0;
struct list$1int$* __result_obj__122;
    __result_obj__122 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value89=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value89, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__122;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_449;
struct list$1long$* __result_obj__124;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_449=0    ;    i_449<num_value    ;    i_449++    ){
        list$1long$_push_back(self,values[i_449]);
    }
    __result_obj__124 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__124;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value91 = (void*)0;
struct list_item$1long$* litem_450;
void* __right_value92 = (void*)0;
struct list_item$1long$* litem_451;
void* __right_value93 = (void*)0;
struct list_item$1long$* litem_452;
struct list$1long$* __result_obj__123;
    if(    self->len==0    ) {
        litem_450=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value91=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_450->prev=((void*)0);
        litem_450->next=((void*)0);
        litem_450->item=item;
        self->tail=litem_450;
        self->head=litem_450;
    }
    else if(    self->len==1    ) {
        litem_451=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value92=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_451->prev=self->head;
        litem_451->next=((void*)0);
        litem_451->item=item;
        self->tail=litem_451;
        self->head->next=litem_451;
    }
    else {
        litem_452=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value93=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_452->prev=self->tail;
        litem_452->next=((void*)0);
        litem_452->item=item;
        self->tail->next=litem_452;
        self->tail=litem_452;
    }
    self->len++;
    __result_obj__123 = self;
    return __result_obj__123;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_453;
struct list_item$1long$* prev_it_454;
    it_453=self->head;
    while(    it_453!=((void*)0)    ) {
        prev_it_454=it_453;
        it_453=it_453->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_454, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value90 = (void*)0;
void* __right_value94 = (void*)0;
struct list$1long$* __result_obj__125;
    __result_obj__125 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value94=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3362, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value94, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__125, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__125;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_455;
struct list$1float$* __result_obj__127;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_455=0    ;    i_455<num_value    ;    i_455++    ){
        list$1float$_push_back(self,values[i_455]);
    }
    __result_obj__127 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__127;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value96 = (void*)0;
struct list_item$1float$* litem_456;
void* __right_value97 = (void*)0;
struct list_item$1float$* litem_457;
void* __right_value98 = (void*)0;
struct list_item$1float$* litem_458;
struct list$1float$* __result_obj__126;
    if(    self->len==0    ) {
        litem_456=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value96=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_456->prev=((void*)0);
        litem_456->next=((void*)0);
        litem_456->item=item;
        self->tail=litem_456;
        self->head=litem_456;
    }
    else if(    self->len==1    ) {
        litem_457=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value97=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_457->prev=self->head;
        litem_457->next=((void*)0);
        litem_457->item=item;
        self->tail=litem_457;
        self->head->next=litem_457;
    }
    else {
        litem_458=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value98=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_458->prev=self->tail;
        litem_458->next=((void*)0);
        litem_458->item=item;
        self->tail->next=litem_458;
        self->tail=litem_458;
    }
    self->len++;
    __result_obj__126 = self;
    return __result_obj__126;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_459;
struct list_item$1float$* prev_it_460;
    it_459=self->head;
    while(    it_459!=((void*)0)    ) {
        prev_it_460=it_459;
        it_459=it_459->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_460, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value95 = (void*)0;
void* __right_value99 = (void*)0;
struct list$1float$* __result_obj__128;
    __result_obj__128 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value99=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3367, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value99, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__128, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__128;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_461;
struct list$1double$* __result_obj__130;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_461=0    ;    i_461<num_value    ;    i_461++    ){
        list$1double$_push_back(self,values[i_461]);
    }
    __result_obj__130 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__130, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__130;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value101 = (void*)0;
struct list_item$1double$* litem_462;
void* __right_value102 = (void*)0;
struct list_item$1double$* litem_463;
void* __right_value103 = (void*)0;
struct list_item$1double$* litem_464;
struct list$1double$* __result_obj__129;
    if(    self->len==0    ) {
        litem_462=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value101=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_462->prev=((void*)0);
        litem_462->next=((void*)0);
        litem_462->item=item;
        self->tail=litem_462;
        self->head=litem_462;
    }
    else if(    self->len==1    ) {
        litem_463=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value102=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_463->prev=self->head;
        litem_463->next=((void*)0);
        litem_463->item=item;
        self->tail=litem_463;
        self->head->next=litem_463;
    }
    else {
        litem_464=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value103=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_464->prev=self->tail;
        litem_464->next=((void*)0);
        litem_464->item=item;
        self->tail->next=litem_464;
        self->tail=litem_464;
    }
    self->len++;
    __result_obj__129 = self;
    return __result_obj__129;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_465;
struct list_item$1double$* prev_it_466;
    it_465=self->head;
    while(    it_465!=((void*)0)    ) {
        prev_it_466=it_465;
        it_465=it_465->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_466, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value100 = (void*)0;
void* __right_value104 = (void*)0;
struct list$1double$* __result_obj__131;
    __result_obj__131 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value104=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3372, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value104, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value105 = (void*)0;
char* __result_obj__132;
int len_467;
void* __right_value106 = (void*)0;
char* result_468;
char* __result_obj__133;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_467=strlen(self)+strlen(right);
    result_468=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_467+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_468,self,len_467+1);
    strncat(result_468,right,len_467+1);
    __result_obj__133 = (char*)come_increment_ref_count(result_468);
    (result_468 = come_decrement_ref_count(result_468, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

char* string_operator_add(char* self, char* right){
void* __right_value107 = (void*)0;
char* __result_obj__134;
int len_469;
void* __right_value108 = (void*)0;
char* result_470;
char* __result_obj__135;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    len_469=strlen(self)+strlen(right);
    result_470=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_469+1)), "/usr/local/include/comelang.h", 3616, "char*"));
    strncpy(result_470,self,len_469+1);
    strncat(result_470,right,len_469+1);
    __result_obj__135 = (char*)come_increment_ref_count(result_470);
    (result_470 = come_decrement_ref_count(result_470, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_operator_mult(char* self, int right){
void* __right_value109 = (void*)0;
char* __result_obj__136;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
struct buffer* buf_471;
int i_472;
void* __right_value112 = (void*)0;
char* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    buf_471=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3629, "struct buffer*"))));
    for(    i_472=0    ;    i_472<right    ;    i_472++    ){
        buffer_append_str(buf_471,self);
    }
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value112=buffer_to_string(buf_471))));
    come_call_finalizer(buffer_finalize, buf_471, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* string_operator_mult(char* self, int right){
void* __right_value113 = (void*)0;
char* __result_obj__138;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
struct buffer* buf_473;
int i_474;
void* __right_value116 = (void*)0;
char* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    buf_473=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "struct buffer*"))));
    for(    i_474=0    ;    i_474<right    ;    i_474++    ){
        buffer_append_str(buf_473,self);
    }
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value116=buffer_to_string(buf_473))));
    come_call_finalizer(buffer_finalize, buf_473, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_475;
int i_476;
    result_475=(_Bool)0;
    for(    i_476=0    ;    i_476<len    ;    i_476++    ){
        if(        strncmp(self[i_476],str,strlen(self[i_476]))==0        ) {
            result_475=(_Bool)1;
            break;
        }
    }
    return result_475;
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
int result_477;
char* p_478;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_477=0;
    p_478=value;
    while(    *p_478    ) {
        result_477+=(*p_478);
        p_478++;
    }
    return result_477;
}

unsigned int string_get_hash_key(char* value){
int result_479;
char* p_480;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_479=0;
    p_480=value;
    while(    *p_480    ) {
        result_479+=(*p_480);
        p_480++;
    }
    return result_479;
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
_Bool result_481;
    result_481=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_481;
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
_Bool result_482;
    result_482=(c>=32&&c<=126);
    return result_482;
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
void* __right_value117 = (void*)0;
char* __result_obj__140;
int len_483;
void* __right_value118 = (void*)0;
char* result_484;
int i_485;
char* __result_obj__141;
    if(    str==((void*)0)    ) {
        __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__140;
    }
    len_483=strlen(str);
    result_484=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_483+1)), "/usr/local/include/comelang.h", 3911, "char*"));
    for(    i_485=0    ;    i_485<len_483    ;    i_485++    ){
        result_484[i_485]=str[len_483-i_485-1];
    }
    result_484[len_483]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_484);
    (result_484 = come_decrement_ref_count(result_484, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__142;
int len_486;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* __result_obj__143;
void* __right_value122 = (void*)0;
char* __result_obj__144;
void* __right_value123 = (void*)0;
char* __result_obj__145;
void* __right_value124 = (void*)0;
char* result_487;
char* __result_obj__146;
    if(    str==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    len_486=strlen(str);
    if(    head<0    ) {
        head+=len_486;
    }
    if(    tail<0    ) {
        tail+=len_486+1;
    }
    if(    head>tail    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value121=charp_reverse(((char*)(__right_value120=charp_substring(str,tail,head)))))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_486    ) {
        tail=len_486;
    }
    if(    head==tail    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    if(    tail-head+1<1    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(""))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    result_487=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3957, "char*"));
    memcpy(result_487,str+head,tail-head);
    result_487[tail-head]=0;
    __result_obj__146 = (char*)come_increment_ref_count(result_487);
    (result_487 = come_decrement_ref_count(result_487, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value125 = (void*)0;
char* __result_obj__147;
int len_488;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
char* __result_obj__148;
void* __right_value128 = (void*)0;
char* __result_obj__149;
void* __right_value129 = (void*)0;
char* __result_obj__150;
void* __right_value130 = (void*)0;
char* result_489;
char* __result_obj__151;
    if(    str==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(""))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    len_488=strlen(str);
    if(    head<0    ) {
        head+=len_488;
    }
    if(    tail<0    ) {
        tail+=len_488+1;
    }
    if(    head>tail    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value127=charp_reverse(((char*)(__right_value126=charp_substring(str,tail,head)))))));
        (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value127 = come_decrement_ref_count(__right_value127, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_488    ) {
        tail=len_488;
    }
    if(    head==tail    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value128=__builtin_string(""))));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    if(    tail-head+1<1    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value129=__builtin_string(""))));
        (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    result_489=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4000, "char*"));
    memcpy(result_489,str+head,tail-head);
    result_489[tail-head]=0;
    __result_obj__151 = (char*)come_increment_ref_count(result_489);
    (result_489 = come_decrement_ref_count(result_489, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value131 = (void*)0;
char* __result_obj__152;
int len_490;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
char* __result_obj__153;
void* __right_value134 = (void*)0;
char* __result_obj__154;
void* __right_value135 = (void*)0;
char* __result_obj__155;
void* __right_value136 = (void*)0;
char* result_491;
char* __result_obj__156;
    if(    str==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value131=__builtin_string(""))));
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    len_490=strlen(str);
    if(    head<0    ) {
        head+=len_490;
    }
    if(    tail<0    ) {
        tail+=len_490+1;
    }
    if(    head>tail    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value133=charp_reverse(((char*)(__right_value132=charp_substring(str,tail,head)))))));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_490    ) {
        tail=len_490;
    }
    if(    head==tail    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(""))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    if(    tail-head+1<1    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(""))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_491=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4043, "char*"));
    memcpy(result_491,str+head,tail-head);
    result_491[tail-head]=0;
    __result_obj__156 = (char*)come_increment_ref_count(result_491);
    (result_491 = come_decrement_ref_count(result_491, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xsprintf(char* msg, ...){
void* __right_value137 = (void*)0;
char* __result_obj__157;
va_list args_492;
char* result_493;
int len_494;
void* __right_value138 = (void*)0;
char* __result_obj__158;
void* __right_value139 = (void*)0;
char* result2_495;
char* __result_obj__159;
result_493 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(""))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    __builtin_va_start(args_492,msg);
    len_494=vasprintf(&result_493,msg,args_492);
    __builtin_va_end(args_492);
    if(    len_494<0    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    result2_495=(char*)come_increment_ref_count(__builtin_string(result_493));
    free(result_493);
    __result_obj__159 = (char*)come_increment_ref_count(result2_495);
    (result2_495 = come_decrement_ref_count(result2_495, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value140 = (void*)0;
char* __result_obj__160;
int len_496;
void* __right_value141 = (void*)0;
char* __result_obj__161;
void* __right_value142 = (void*)0;
char* __result_obj__162;
void* __right_value143 = (void*)0;
char* result_497;
char* __result_obj__163;
    if(    str==((void*)0)    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    len_496=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(str))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    if(    head<0    ) {
        head+=len_496;
    }
    if(    tail<0    ) {
        tail+=len_496+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(str))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    if(    tail>=len_496    ) {
        tail=len_496;
    }
    result_497=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_496-(tail-head)+1)), "/usr/local/include/comelang.h", 4105, "char*"));
    memcpy(result_497,str,head);
    memcpy(result_497+head,str+tail,len_496-tail);
    result_497[len_496-(tail-head)]=0;
    __result_obj__163 = (char*)come_increment_ref_count(result_497);
    (result_497 = come_decrement_ref_count(result_497, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_498;
struct list_item$1char$ph* prev_it_499;
    it_498=self->head;
    while(    it_498!=((void*)0)    ) {
        prev_it_499=it_498;
        it_498=it_498->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_499, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value150 = (void*)0;
struct list_item$1char$ph* litem_503;
char* __dec_obj17;
void* __right_value151 = (void*)0;
struct list_item$1char$ph* litem_504;
char* __dec_obj18;
void* __right_value152 = (void*)0;
struct list_item$1char$ph* litem_505;
char* __dec_obj19;
struct list$1char$ph* __result_obj__166;
    if(    self->len==0    ) {
        litem_503=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value150=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_503->prev=((void*)0);
        litem_503->next=((void*)0);
        __dec_obj17=litem_503->item,
        litem_503->item=(char*)come_increment_ref_count(item);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_503;
        self->head=litem_503;
    }
    else if(    self->len==1    ) {
        litem_504=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value151=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_504->prev=self->head;
        litem_504->next=((void*)0);
        __dec_obj18=litem_504->item,
        litem_504->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_504;
        self->head->next=litem_504;
    }
    else {
        litem_505=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value152=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_505->prev=self->tail;
        litem_505->next=((void*)0);
        __dec_obj19=litem_505->item,
        litem_505->item=(char*)come_increment_ref_count(item);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_505;
        self->tail=litem_505;
    }
    self->len++;
    __result_obj__166 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__166;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1char$ph* __result_obj__165;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1char$ph* result_500;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct buffer* str_501;
int i_502;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct list$1char$ph* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__165 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value145=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4118, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value145, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__165;
    }
    result_500=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4121, "struct list$1char$ph*"))));
    str_501=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4123, "struct buffer*"))));
    for(    i_502=0    ;    i_502<charp_length(self)    ;    i_502++    ){
        if(        self[i_502]==c        ) {
            list$1char$ph_push_back(result_500,(char*)come_increment_ref_count(__builtin_string(str_501->buf)));
            buffer_reset(str_501);
        }
        else {
            buffer_append_char(str_501,self[i_502]);
        }
    }
    if(    buffer_length(str_501)!=0    ) {
        list$1char$ph_push_back(result_500,(char*)come_increment_ref_count(__builtin_string(str_501->buf)));
    }
    __result_obj__167 = (struct list$1char$ph*)come_increment_ref_count(result_500);
    come_call_finalizer(list$1char$ph$p_finalize, result_500, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_501, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__167;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value155 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value155=xsprintf(msg,self))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value156 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf(msg,self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_printable(char* str){
int len_506;
void* __right_value157 = (void*)0;
char* result_507;
int n_508;
int i_509;
char c_510;
char* __result_obj__170;
    len_506=charp_length(str);
    result_507=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_506*2+1)), "/usr/local/include/comelang.h", 4155, "char*"));
    n_508=0;
    for(    i_509=0    ;    i_509<len_506    ;    i_509++    ){
        c_510=str[i_509];
        if(        (c_510>=0&&c_510<32)||c_510==127        ) {
            result_507[n_508++]=94;
            result_507[n_508++]=c_510+65-1;
        }
        else {
            result_507[n_508++]=c_510;
        }
    }
    result_507[n_508]=0;
    __result_obj__170 = (char*)come_increment_ref_count(result_507);
    (result_507 = come_decrement_ref_count(result_507, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value158 = (void*)0;
char* __result_obj__171;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct buffer* result_511;
char* p_512;
char* p2_513;
void* __right_value161 = (void*)0;
char* __result_obj__172;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string(self))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    result_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4183, "struct buffer*"))));
    p_512=self;
    while(    (_Bool)1    ) {
        p2_513=strstr(p_512,str);
        if(        p2_513==((void*)0)        ) {
            p2_513=p_512;
            while(            *p2_513            ) {
                p2_513++;
            }
            buffer_append(result_511,p_512,p2_513-p_512);
            break;
        }
        buffer_append(result_511,p_512,p2_513-p_512);
        buffer_append_str(result_511,replace);
        p_512=p2_513+strlen(str);
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value161=buffer_to_string(result_511))));
    come_call_finalizer(buffer_finalize, result_511, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* xbasename(char* path){
void* __right_value162 = (void*)0;
char* __result_obj__173;
char* p_514;
void* __right_value163 = (void*)0;
char* __result_obj__174;
void* __right_value164 = (void*)0;
char* __result_obj__175;
void* __right_value165 = (void*)0;
char* __result_obj__176;
    if(    path==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    p_514=path+strlen(path);
    while(    p_514>=path    ) {
        if(        *p_514==47        ) {
            break;
        }
        else {
            p_514--;
        }
    }
    if(    p_514<path    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(path))));
        (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    else {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(p_514+1))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* xnoextname(char* path){
void* __right_value166 = (void*)0;
char* __result_obj__177;
void* __right_value167 = (void*)0;
char* path2_515;
char* p_516;
void* __right_value168 = (void*)0;
char* __result_obj__178;
void* __right_value169 = (void*)0;
char* __result_obj__179;
void* __right_value170 = (void*)0;
char* __result_obj__180;
    if(    path==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    path2_515=(char*)come_increment_ref_count(xbasename(path));
    p_516=path2_515+strlen(path2_515);
    while(    p_516>=path2_515    ) {
        if(        *p_516==46        ) {
            break;
        }
        else {
            p_516--;
        }
    }
    if(    p_516<path2_515    ) {
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(path2_515))));
        (path2_515 = come_decrement_ref_count(path2_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__178;
    }
    else {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value169=charp_substring(path2_515,0,p_516-path2_515))));
        (path2_515 = come_decrement_ref_count(path2_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
    (path2_515 = come_decrement_ref_count(path2_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

char* xextname(char* path){
void* __right_value171 = (void*)0;
char* __result_obj__181;
char* p_517;
void* __right_value172 = (void*)0;
char* __result_obj__182;
void* __right_value173 = (void*)0;
char* __result_obj__183;
void* __right_value174 = (void*)0;
char* __result_obj__184;
    if(    path==((void*)0)    ) {
        __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__181;
    }
    p_517=path+strlen(path);
    while(    p_517>=path    ) {
        if(        *p_517==46        ) {
            break;
        }
        else {
            p_517--;
        }
    }
    if(    p_517<path    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(path))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    else {
        __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(p_517+1))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__183;
    }
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__184;
}

char* bool_to_string(_Bool self){
void* __right_value175 = (void*)0;
char* __result_obj__185;
void* __right_value176 = (void*)0;
char* __result_obj__186;
    if(    self    ) {
        __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string("true"))));
        (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__185;
    }
    else {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string("false"))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value177 = (void*)0;
char* __result_obj__187;
void* __right_value178 = (void*)0;
char* __result_obj__188;
    if(    self    ) {
        __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string("true"))));
        (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__187;
    }
    else {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value178=__builtin_string("false"))));
        (__right_value178 = come_decrement_ref_count(__right_value178, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
}

char* char_to_string(char self){
void* __right_value179 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value179=xsprintf("%c",self))));
    (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

char* short_to_string(short self){
void* __right_value180 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value180=xsprintf("%d",self))));
    (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__190;
}

char* int_to_string(int self){
void* __right_value181 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = (char*)come_increment_ref_count(((char*)(__right_value181=xsprintf("%d",self))));
    (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__191;
}

char* long_to_string(long self){
void* __right_value182 = (void*)0;
char* __result_obj__192;
    __result_obj__192 = (char*)come_increment_ref_count(((char*)(__right_value182=xsprintf("%ld",self))));
    (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__192 = come_decrement_ref_count(__result_obj__192, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__192;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value183 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value183=xsprintf("%ld",self))));
    (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__193;
}

char* float_to_string(float self){
void* __right_value184 = (void*)0;
char* __result_obj__194;
    __result_obj__194 = (char*)come_increment_ref_count(((char*)(__right_value184=xsprintf("%f",self))));
    (__right_value184 = come_decrement_ref_count(__right_value184, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__194 = come_decrement_ref_count(__result_obj__194, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__194;
}

char* double_to_string(double self){
void* __right_value185 = (void*)0;
char* __result_obj__195;
    __result_obj__195 = (char*)come_increment_ref_count(((char*)(__right_value185=xsprintf("%lf",self))));
    (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__195 = come_decrement_ref_count(__result_obj__195, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__195;
}

char* string_to_string(char* self){
void* __right_value186 = (void*)0;
char* __result_obj__196;
void* __right_value187 = (void*)0;
char* __result_obj__197;
    if(    self==((void*)0)    ) {
        __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value186=__builtin_string(""))));
        (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__196;
    }
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value187=__builtin_string(self))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__197;
}

char* charp_to_string(char* self){
void* __right_value188 = (void*)0;
char* __result_obj__198;
void* __right_value189 = (void*)0;
char* __result_obj__199;
    if(    self==((void*)0)    ) {
        __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string(""))));
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__198;
    }
    __result_obj__199 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string(self))));
    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value190 = (void*)0;
char* __result_obj__200;
void* __right_value191 = (void*)0;
char* __result_obj__201;
    if(    self==((void*)0)    ) {
        __result_obj__200 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string(""))));
        (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__200 = come_decrement_ref_count(__result_obj__200, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__200;
    }
    puts(self);
    __result_obj__201 = (char*)come_increment_ref_count(((char*)(__right_value191=__builtin_string(self))));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__201 = come_decrement_ref_count(__result_obj__201, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__201;
}

char* charp_print(char* self){
void* __right_value192 = (void*)0;
char* __result_obj__202;
void* __right_value193 = (void*)0;
char* __result_obj__203;
    if(    self==((void*)0)    ) {
        __result_obj__202 = (char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string(""))));
        (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__202 = come_decrement_ref_count(__result_obj__202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__202;
    }
    printf("%s",self);
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value193=__builtin_string(self))));
    (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__203;
}

char* charp_printf(char* self, ...){
void* __right_value194 = (void*)0;
char* __result_obj__204;
char* msg2_518;
va_list args_519;
void* __right_value195 = (void*)0;
char* __result_obj__205;
msg2_518 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string(""))));
        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__204;
    }
    __builtin_va_start(args_519,self);
    vasprintf(&msg2_518,self,args_519);
    __builtin_va_end(args_519);
    printf("%s",msg2_518);
    free(msg2_518);
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string(self))));
    (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__205;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_520;
    for(    i_520=0    ;    i_520<self    ;    i_520++    ){
        block(parent,i_520);
    }
}

