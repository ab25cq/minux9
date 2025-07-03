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
  0x5a, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa0, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x03, 0x00, 0x40, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xce, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb5, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x21, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0x23, 0x04,
  0xf4, 0xfe, 0xa3, 0x04, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xfe, 0x05, 0x46,
  0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0x1f, 0xf1, 0x01, 0x00, 0xa2, 0x70,
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
  0x27, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x25, 0xba, 0x97,
  0x9c, 0x43, 0x1b, 0x87, 0x07, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0xa7, 0x24, 0xba, 0x97, 0x82, 0x87, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
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
  0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0xa7, 0x1a, 0x23, 0x3c,
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
  0x97, 0x05, 0x00, 0x00, 0x93, 0x85, 0x45, 0x13, 0x05, 0x45, 0xef, 0xf0,
  0xbf, 0x87, 0x23, 0x26, 0x04, 0xfe, 0x93, 0x07, 0x84, 0xf5, 0x05, 0x46,
  0xbe, 0x85, 0x01, 0x45, 0xef, 0xf0, 0xbf, 0x8a, 0x93, 0x07, 0x84, 0xf5,
  0x05, 0x46, 0xbe, 0x85, 0x05, 0x45, 0xef, 0xf0, 0xbf, 0x85, 0x03, 0x47,
  0x84, 0xf5, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x23, 0x88,
  0xe7, 0xf6, 0x83, 0x27, 0xc4, 0xfe, 0x85, 0x27, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87, 0xb5, 0x47, 0x63, 0x09, 0xf7, 0x00,
  0x83, 0x47, 0x84, 0xf5, 0x3e, 0x87, 0xa9, 0x47, 0x63, 0x03, 0xf7, 0x00,
  0x4d, 0xbf, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x81, 0x27, 0xc1, 0x17,
  0xa2, 0x97, 0x23, 0x88, 0x07, 0xf6, 0x17, 0x05, 0x00, 0x00, 0x13, 0x05,
  0xa5, 0x0c, 0xef, 0xf0, 0x3f, 0xf4, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00,
  0x00, 0x00, 0xaa, 0x87, 0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe,
  0x81, 0x27, 0x63, 0xdb, 0x07, 0x00, 0x31, 0x46, 0x97, 0x05, 0x00, 0x00,
  0x93, 0x85, 0xc5, 0x0a, 0x09, 0x45, 0xef, 0xf0, 0x2f, 0xfe, 0x25, 0xa0,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xef, 0x23, 0x22, 0x04, 0xfe,
  0x83, 0x26, 0x44, 0xfe, 0x13, 0x07, 0x84, 0xed, 0x93, 0x07, 0x04, 0xf6,
  0x36, 0x86, 0xba, 0x85, 0x3e, 0x85, 0xef, 0xf0, 0x7f, 0x84, 0x01, 0xa0,
  0x01, 0xa0, 0x05, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x28, 0x6e, 0x75, 0x6c,
  0x6c, 0x29, 0x00, 0x00, 0x7e, 0xfe, 0xff, 0xff, 0xc2, 0xfd, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff, 0x06, 0xfe, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff, 0x36, 0xfe, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff, 0xa6, 0xfe, 0xff, 0xff,
  0xa6, 0xfe, 0xff, 0xff, 0xe4, 0xfd, 0xff, 0xff, 0x24, 0x20, 0x00, 0x00,
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
  0x03, 0x00, 0x02, 0x00, 0x38, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
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
  0x12, 0x00, 0x01, 0x00, 0xb4, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xf8, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x28, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0xb5, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb5, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x20, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xfa, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb8, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb5, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0x5a, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xda, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xe6, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcd, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb5, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb5, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xb8, 0x19, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x01, 0x00, 0xfc, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x68, 0x65,
  0x6c, 0x6c, 0x2e, 0x63, 0x00, 0x77, 0x72, 0x69, 0x74, 0x65, 0x00, 0x24,
  0x78, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32,
  0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32,
  0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a,
  0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75,
  0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x00,
  0x72, 0x65, 0x61, 0x64, 0x00, 0x65, 0x78, 0x65, 0x63, 0x76, 0x00, 0x70,
  0x75, 0x74, 0x63, 0x68, 0x61, 0x72, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74,
  0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70,
  0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f,
  0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53,
  0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73,
  0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00,
  0x70, 0x72, 0x69, 0x6e, 0x74, 0x69, 0x6e, 0x74, 0x00, 0x5f, 0x5f, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00,
  0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e,
  0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74, 0x72, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61,
  0x74, 0x61, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00,
  0x2e, 0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69,
  0x62, 0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xe8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x38, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xce, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x28, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x0c, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5a, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int shell_elf_len=4000;
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
};

struct proc* gProc[128];
int gActiveProc=0;
int gNumProc=0;
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
unsigned long  long* uvmcreate();
unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz);
static void free_pagetable(unsigned long  long* pagetable, int level);
void free_proc(struct proc* p);
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
void console_init();
void puts(const char* s);
int Sys_write();
int Sys_exit();
int Sys_open();
int Sys_fork();
int Sys_execv();
unsigned long  int syscall_handler();
void enter_user(unsigned long  int anonymous_var_nameX285, unsigned long  int anonymous_var_nameX286, unsigned long  int anonymous_var_nameX287, unsigned long  long anonymous_var_nameX288);
void timerinit();
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
static inline unsigned long  long r_time(){
unsigned long  long x_6;
memset(&x_6, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, time" : "=r" (x_6));
    return x_6;
}
static inline void w_stimecmp(unsigned long  long x){
    __asm volatile("csrw 0x14d, %0" : : "r" (x));
}
static inline unsigned long  long r_mstatus(){
unsigned long  long x_12;
memset(&x_12, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, mstatus" : "=r" (x_12));
    return x_12;
}
static inline unsigned long  long r_sstatus(){
unsigned long  long x_13;
memset(&x_13, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sstatus" : "=r" (x_13));
    return x_13;
}
static inline void w_sstatus(unsigned long  long x){
    __asm volatile("csrw sstatus, %0" : : "r"(x));
}
static inline void intr_on(){
unsigned long  int x_14;
    x_14=r_sstatus();
    x_14|=(1L<<1);
    w_sstatus(x_14);
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
unsigned long  long x_15;
    x_15=r_sstatus();
    return (x_15&(1L<<1))!=0;
}
static inline void w_mstatus(unsigned long  long x){
    __asm volatile("csrw mstatus, %0" : : "r" (x));
}
static inline unsigned long  long r_sie(){
unsigned long  long x_89;
memset(&x_89, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sie" : "=r"(x_89));
    return x_89;
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
unsigned long  long x_185;
memset(&x_185, 0, sizeof(unsigned long  long));
    __asm volatile("csrr %0, sip" : "=r" (x_185));
    return x_185;
}
static inline unsigned long  long read_s_sp(){
unsigned long  long sp_val_186;
memset(&sp_val_186, 0, sizeof(unsigned long  long));
    __asm volatile("mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val_186): // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    return sp_val_186;
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
void* p_7;
void* __result_obj__3;
    p_7=(void*)bump;
    bump=(bump+4095)&~4095UL;
    bump+=4096;
    __result_obj__3 = p_7;
    return __result_obj__3;
}

void* kalloc_pages(unsigned long  int npages){
unsigned long  long bump_8;
void* base_9;
unsigned long  int i_10;
void* pg_11;
void* __result_obj__4;
    bump_8=(unsigned long  long)_end2;
    base_9=((void*)0);
    for(    i_10=0    ;    i_10<npages    ;    i_10++    ){
        pg_11=kalloc_page(bump_8);
        if(        i_10==0        ) {
            base_9=pg_11;
        }
    }
    __result_obj__4 = base_9;
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
int r_16;
memset(&r_16, 0, sizeof(int));
    r_16=(lk->locked&&lk->cpu==mycpu());
    return r_16;
}

void push_off(){
int old_17;
    old_17=intr_get();
    intr_off();
    if(    mycpu()->noff==0    ) {
        mycpu()->intena=old_17;
    }
    mycpu()->noff+=1;
}

void pop_off(){
struct cpu* c_18;
    c_18=mycpu();
    if(    intr_get()    ) {
        panic("pop_off - interruptible");
    }
    if(    c_18->noff<1    ) {
        panic("pop_off");
    }
    c_18->noff-=1;
    if(    c_18->noff==0&&c_18->intena    ) {
        intr_on();
    }
}

void kinit(){
    initlock(&kmem.lock,"kmem");
    freerange(_end3,(void*)2164260864UL);
}

void freerange(void* pa_start, void* pa_end){
char* p_19;
p_19 = (void*)0;
    p_19=(char*)((((unsigned long  long)pa_start)+4096-1)&~(4096-1));
    for(    ;    p_19+4096<=(char*)pa_end    ;    p_19+=4096    ){
        kfree(p_19);
    }
}

void kfree(void* pa){
struct run* r_20;
r_20 = (void*)0;
    if(    ((unsigned long  long)pa%4096)!=0||(char*)pa<_end3||(unsigned long  long)pa>=2164260864UL    ) {
        while(        1        ) {
            puts("kfree panic");
        }
    }
    memset(pa,1,4096);
    r_20=(struct run*)pa;
    acquire(&kmem.lock);
    r_20->next=kmem.freelist;
    kmem.freelist=r_20;
    release(&kmem.lock);
}

void* kalloc(){
struct run* r_21;
void* __result_obj__6;
r_21 = (void*)0;
    acquire(&kmem.lock);
    r_21=kmem.freelist;
    if(    r_21    ) {
        kmem.freelist=r_21->next;
    }
    release(&kmem.lock);
    if(    r_21    ) {
        memset((char*)r_21,5,4096);
    }
    __result_obj__6 = (void*)r_21;
    return __result_obj__6;
}

unsigned long  long* walk(unsigned long  long* pagetable, unsigned long  long va, int alloc){
int level_22;
unsigned long  long* pte_23;
unsigned long  long* __result_obj__7;
unsigned long  long* __result_obj__8;
    for(    level_22=2    ;    level_22>0    ;    level_22--    ){
        pte_23=&pagetable[((((unsigned long  long)(va))>>(12+(9*(level_22))))&511)];
        if(        *pte_23&(1L<<0)        ) {
            pagetable=(unsigned long  long*)(((*pte_23)>>10)<<12);
        }
        else {
            if(            !alloc||(pagetable=(unsigned long  long*)kalloc())==0            ) {
                __result_obj__7 = (void*)0;
                return __result_obj__7;
            }
            memset(pagetable,0,4096);
            *pte_23=((((unsigned long  long)pagetable)>>12)<<10)|(1L<<0);
        }
    }
    __result_obj__8 = &pagetable[((((unsigned long  long)(va))>>(12+(9*(0))))&511)];
    return __result_obj__8;
}

int mappages(unsigned long  long* pagetable, unsigned long  long va, unsigned long  long size, unsigned long  long pa, int perm){
unsigned long  long a_24;
unsigned long  long last_25;
unsigned long  long* pte_26;
memset(&a_24, 0, sizeof(unsigned long  long));
memset(&last_25, 0, sizeof(unsigned long  long));
pte_26 = (void*)0;
    if(    (va%4096)!=0    ) {
        puts("mappages: va not aligned");
    }
    if(    (size%4096)!=0    ) {
        puts("mappages: size not aligned");
    }
    if(    size==0    ) {
        puts("mappages: size");
    }
    a_24=va;
    last_25=va+size-4096;
    for(    ;    ;    ){
        if(        (pte_26=walk(pagetable,a_24,1))==0        ) {
            return -1;
        }
        if(        *pte_26&(1L<<0)        ) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n",va,*pte_26&1023,perm);
        }
        *pte_26=((((unsigned long  long)pa)>>12)<<10)|perm|(1L<<0);
        if(        a_24==last_25        ) {
            break;
        }
        a_24+=4096;
        pa+=4096;
    }
    return 0;
}

void dump_physical_memory(unsigned long  long pa, int count){
unsigned int* ptr_27;
int i_28;
    ptr_27=(unsigned int*)pa;
    for(    i_28=0    ;    i_28<count    ;    i_28++    ){
        if(        i_28%4==0        ) {
            printf("%p: ",(unsigned long  long)(ptr_27+i_28));
        }
        printf("%p ",ptr_27[i_28]);
        if(        i_28%4==3        ) {
            puts("");
        }
    }
    if(    count%4!=0    ) {
        puts("");
    }
}

void vmprint_rec(unsigned long  long* pagetable, unsigned long  long va, int level){
int i_29;
unsigned long  long pte_30;
unsigned long  long pa_31;
unsigned long  long child_va_32;
int j_33;
    for(    i_29=0    ;    i_29<512    ;    i_29++    ){
        pte_30=pagetable[i_29];
        if(        pte_30&(1L<<0)        ) {
            pa_31=(((pte_30)>>10)<<12);
            child_va_32=va|((unsigned long  long)i_29<<(12+9*(2-level)));
            for(            j_33=0            ;            j_33<level            ;            j_33++            ){
                puts("\n.. ");
            }
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n",child_va_32,pa_31,i_29,level);
            if(            (pte_30&((1L<<1)|(1L<<2)|(1L<<3)))!=0            ) {
                printf(" [leaf]");
            }
            printf(" flags: ");
            if(            pte_30&(1L<<1)            ) {
                printf(" R");
            }
            if(            pte_30&(1L<<2)            ) {
                printf(" W");
            }
            if(            pte_30&(1L<<3)            ) {
                printf(" X");
            }
            if(            pte_30&(1L<<4)            ) {
                printf(" U");
            }
            if(            pte_30&(1L<<0)            ) {
                printf(" V");
            }
            puts("");
            if(            (pte_30&((1L<<1)|(1L<<2)|(1L<<3)))==0            ) {
                vmprint_rec((unsigned long  long*)pa_31,child_va_32,level+1);
            }
        }
    }
}

void vmprint(unsigned long  long* pagetable){
    puts("page table:\n");
    vmprint_rec(pagetable,0,0);
}

void enable_mmu(unsigned long  long* kernel_pagetable){
unsigned long  long satp_34;
    satp_34=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    __asm volatile("csrw satp, %0" :: "r"(satp_34));
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
unsigned long  long addr_35;
int i_36;
unsigned long  long va_37;
unsigned long  long pa_38;
    kernel_pagetable=(unsigned long  long*)kalloc();
    memset(kernel_pagetable,0,4096);
    for(    addr_35=2147483648UL    ;    addr_35<2164260864UL    ;    addr_35+=4096    ){
        mappages(kernel_pagetable,addr_35,4096,addr_35,(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
    }
    mappages(kernel_pagetable,268435456,4096,268435456,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,268439552L,4096,268439552L,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33554432,131072,33554432,(1L<<0)|(1L<<1)|(1L<<2));
    mappages(kernel_pagetable,201326592,4194304,201326592,(1L<<0)|(1L<<1)|(1L<<2));
    for(    i_36=0    ;    i_36<8    ;    i_36++    ){
        va_37=268439552UL+i_36*4096UL;
        pa_38=va_37;
        mappages(kernel_pagetable,va_37,4096UL,pa_38,(1L<<0)|(1L<<1)|(1L<<2));
    }
    mappages(kernel_pagetable,33603576UL,4096,33603576UL,(1L<<1)|(1L<<2)|(1L<<0));
    mappages(kernel_pagetable,33570816UL,4096,33570816UL,(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    kernel_satp=((8L<<60)|(((unsigned long  long)kernel_pagetable)>>12));
    enable_mmu(kernel_pagetable);
}

void* walkaddr(unsigned long  long* pagetable, unsigned long  long va){
unsigned long  long* pte_39;
void* __result_obj__9;
void* __result_obj__10;
void* __result_obj__11;
unsigned long  long pa_40;
void* __result_obj__12;
    pte_39=walk(pagetable,va,0);
    if(    pte_39==0    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    if(    (*pte_39&(1L<<0))==0    ) {
        __result_obj__10 = (void*)0;
        return __result_obj__10;
    }
    if(    (*pte_39&(1L<<4))==0    ) {
        __result_obj__11 = (void*)0;
        return __result_obj__11;
    }
    pa_40=(((*pte_39)>>10)<<12);
    __result_obj__12 = (void*)(pa_40+(va&(4096-1)));
    return __result_obj__12;
}

int copyout(unsigned long  long* pagetable, unsigned long  long dstva, void* src, unsigned long  long len){
unsigned long  long va0_41;
unsigned long  long off_42;
char* pa_43;
unsigned long  long n_44;
pa_43 = (void*)0;
    va0_41=(((dstva))&~(4096-1));
    off_42=dstva-va0_41;
    while(    len>0    ) {
        if(        (pa_43=walkaddr(pagetable,va0_41))==0        ) {
            return -1;
        }
        n_44=4096-off_42;
        if(        n_44>len        ) {
            n_44=len;
        }
        memcpy(pa_43+off_42,src,n_44);
        len-=n_44;
        src+=n_44;
        va0_41+=4096;
        off_42=0;
    }
    return 0;
}

int copyin(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long len){
unsigned long  long n_45;
unsigned long  long va0_46;
unsigned long  long pa0_47;
memset(&n_45, 0, sizeof(unsigned long  long));
memset(&va0_46, 0, sizeof(unsigned long  long));
memset(&pa0_47, 0, sizeof(unsigned long  long));
    while(    len>0    ) {
        va0_46=(((srcva))&~(4096-1));
        pa0_47=(unsigned long  long)walkaddr(pagetable,va0_46);
        if(        pa0_47==0        ) {
            return -1;
        }
        n_45=4096-(srcva-va0_46);
        if(        n_45>len        ) {
            n_45=len;
        }
        memmove(dst,(void*)(pa0_47+(srcva-va0_46)),n_45);
        len-=n_45;
        dst+=n_45;
        srcva=va0_46+4096;
    }
    return 0;
}

int copyinstr(unsigned long  long* pagetable, char* dst, unsigned long  long srcva, unsigned long  long max){
unsigned long  long n_48;
unsigned long  long va0_49;
unsigned long  long pa0_50;
int got_null_51;
char* dst2_52;
char* p_53;
memset(&n_48, 0, sizeof(unsigned long  long));
memset(&va0_49, 0, sizeof(unsigned long  long));
memset(&pa0_50, 0, sizeof(unsigned long  long));
    got_null_51=0;
    dst2_52=dst;
    while(    got_null_51==0&&max>0    ) {
        va0_49=(((srcva))&~(4096-1));
        pa0_50=(unsigned long  long)walkaddr(pagetable,va0_49);
        if(        pa0_50==0        ) {
            return -1;
        }
        n_48=4096-(srcva-va0_49);
        if(        n_48>max        ) {
            n_48=max;
        }
        p_53=(char*)(pa0_50+(srcva-va0_49));
        while(        n_48>0        ) {
            if(            *p_53==0            ) {
                *dst2_52=0;
                got_null_51=dst2_52-dst;
                break;
            }
            else {
                *dst2_52=*p_53;
            }
            --n_48;
            --max;
            p_53++;
            dst2_52++;
        }
        srcva=va0_49+4096;
    }
    if(    got_null_51    ) {
        dst2_52[got_null_51]=0;
        return got_null_51;
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
struct proc* result_54;
unsigned long  long* pagetable_55;
struct elfhdr* eh_56;
struct proghdr* ph_57;
unsigned long  long size_58;
unsigned long  long va_59;
int i_60;
void* pa_61;
struct proc* parent_62;
unsigned long  long parent_current_63;
unsigned long  long parent_stack_64;
unsigned long  long offset_65;
char* src_66;
char* pa_67;
char* pa_68;
    result_54=calloc(1,sizeof(struct proc));
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
        parent_62=gProc[gActiveProc];
        parent_current_63=parent_62->context.sp;
        parent_stack_64=(unsigned long  long)parent_62->stack_top;
        offset_65=parent_current_63-parent_stack_64;
        src_66=walkaddr(parent_62->pagetable,parent_stack_64);
        pa_67=kalloc();
        if(        !pa_67        ) {
            panic("fork sp");
        }
        memmove(pa_67,(void*)src_66,4096);
        mappages(result_54->pagetable,va_59,4096,(unsigned long  long)pa_67,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_54->stack=(char*)va_59+4096;
        result_54->stack_top=(char*)va_59;
        result_54->context.sp=parent_62->context.sp;
    }
    else {
        pa_68=kalloc();
        if(        !pa_68        ) {
            panic("kalloc");
        }
        memset(pa_68,0,4096);
        mappages(result_54->pagetable,va_59,4096,(unsigned long  long)pa_68,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
        __asm volatile("sfence.vma zero, zero");
        result_54->stack=(char*)va_59+4096;
        result_54->stack_top=(char*)va_59;
        result_54->context.sp=va_59+4096;
    }
    result_54->context.mepc=eh_56->entry;
    gProc[gNumProc++]=result_54;
}

unsigned long  long* uvmcreate(){
unsigned long  long* pagetable_69;
unsigned long  long* __result_obj__13;
unsigned long  long* __result_obj__14;
pagetable_69 = (void*)0;
    pagetable_69=(unsigned long  long*)kalloc();
    if(    pagetable_69==0    ) {
        __result_obj__13 = (unsigned long  long*)0;
        return __result_obj__13;
    }
    memset(pagetable_69,0,4096);
    __result_obj__14 = pagetable_69;
    return __result_obj__14;
}

unsigned long  long* copyuvm(unsigned long  long* old, unsigned long  long sz){
unsigned long  long* new__70;
unsigned long  long* __result_obj__15;
unsigned long  long addr_71;
unsigned long  long* pte_72;
unsigned long  long pa_73;
unsigned int flags_74;
char* mem_75;
unsigned long  long* __result_obj__16;
new__70 = (void*)0;
    new__70=uvmcreate();
    if(    new__70==0    ) {
        __result_obj__15 = (unsigned long  long*)0;
        return __result_obj__15;
    }
    for(    addr_71=0    ;    addr_71<sz    ;    addr_71+=4096    ){
        pte_72=walk(old,addr_71,0);
        if(        !pte_72||!(*pte_72&(1L<<0))        ) {
            continue;
        }
        pa_73=(((*pte_72)>>10)<<12);
        flags_74=((*pte_72)&1023);
        mem_75=kalloc();
        if(        mem_75==0        ) {
            panic("coypuvm");
        }
        memmove(mem_75,(char*)pa_73,4096);
        if(        mappages(new__70,addr_71,4096,((((unsigned long  long)mem_75)>>12)<<10),(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0))<0        ) {
            kfree(mem_75);
            panic("copyuvm");
        }
    }
    __result_obj__16 = new__70;
    return __result_obj__16;
}

static void free_pagetable(unsigned long  long* pagetable, int level){
int i_76;
unsigned long  long pte_77;
unsigned long  long pa_78;
unsigned long  long* child_79;
    for(    i_76=0    ;    i_76<512    ;    i_76++    ){
        pte_77=pagetable[i_76];
        if(        !(pte_77&(1L<<0))        ) {
            continue;
        }
        pa_78=(((pte_77)>>10)<<12);
        if(        pte_77&((1L<<1)|(1L<<2)|(1L<<3))        ) {
            if(            level>0            ) {
                kfree((void*)pa_78);
            }
        }
        else if(        level>0        ) {
            child_79=(unsigned long  long*)pa_78;
            free_pagetable(child_79,level-1);
            kfree(child_79);
        }
    }
}

void free_proc(struct proc* p){
    free_pagetable(p->pagetable,2);
    kfree(p->pagetable);
}

void exec_prog(char* hello_elf){
struct proc* result_80;
unsigned long  long* pagetable_81;
struct elfhdr* eh_82;
struct proghdr* ph_83;
unsigned long  long size_84;
unsigned long  long va_85;
int i_86;
void* pa_87;
char* pa_88;
    result_80=gProc[gActiveProc];
    free_proc(result_80);
    memset(result_80,0,sizeof(struct proc));
    pagetable_81=(unsigned long  long*)kalloc();
    memset(pagetable_81,0,4096);
    setting_user_pagetable(result_80,pagetable_81);
    result_80->pagetable=pagetable_81;
    eh_82=(struct elfhdr*)hello_elf;
    if(    eh_82->magic!=1179403647    ) {
        while(        1        ) {
            puts("panic");
        }
    }
    ph_83=(struct proghdr*)(hello_elf+eh_82->phoff);
    size_84=ph_83->filesz;
    result_80->vaddr=(((ph_83->vaddr))&~(4096-1));
    va_85=0;
    for(    i_86=0    ;    i_86<eh_82->phnum    ;    i_86++,ph_83++    ){
        if(        ph_83->type!=1        ) {
            continue;
        }
        for(        va_85=(((ph_83->vaddr))&~(4096-1))        ;        va_85<ph_83->vaddr+ph_83->memsz        ;        va_85+=4096        ){
            pa_87=kalloc();
            if(            !pa_87            ) {
                panic("kalloc");
            }
            memset(pa_87,0,4096);
            mappages(result_80->pagetable,va_85,4096,(unsigned long  long)pa_87,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<3)|(1L<<0));
            __asm volatile("sfence.vma zero, zero");
        }
        if(        copyout(result_80->pagetable,ph_83->vaddr,hello_elf+ph_83->off,ph_83->filesz)<0        ) {
            panic("copyout");
        }
        __asm volatile("sfence.vma zero, zero");
    }
    pa_88=kalloc();
    if(    !pa_88    ) {
        panic("kalloc");
    }
    memset(pa_88,0,4096);
    mappages(result_80->pagetable,va_85,4096,(unsigned long  long)pa_88,(1L<<4)|(1L<<1)|(1L<<2)|(1L<<0));
    __asm volatile("sfence.vma zero, zero");
    result_80->stack=(char*)va_85+4096;
    result_80->stack_top=(char*)va_85;
    result_80->context.sp=va_85+4096;
    result_80->context.mepc=eh_82->entry;
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
unsigned long  int x_90;
memset(&x_90, 0, sizeof(unsigned long  int));
    x_90=r_sie();
    x_90|=(1UL<<5);
    w_sie(x_90);
    x_90=r_sstatus();
    x_90|=(1UL<<1);
    w_sstatus(x_90);
}

void disable_timer_interrupts(){
    w_sstatus(r_sstatus()&~(1UL<<1));
    w_sie(r_sie()&~(1UL<<5));
}

void timer_reset(){
unsigned long  long next_91;
    next_91=r_time()+10000UL;
    w_stimecmp(next_91);
}

void timer_handler(){
struct proc* p_92;
struct context* tf_93;
struct proc* old_94;
struct proc* new__95;
unsigned long  long a0_96;
    disable_timer_interrupts();
    p_92=gProc[gActiveProc];
    tf_93=(struct context*)TRAPFRAME;
    p_92->context=*tf_93;
    timer_reset();
    old_94=gProc[gActiveProc];
    gActiveProc++;
    if(    gActiveProc>=gNumProc    ) {
        gActiveProc=0;
    }
    new__95=gProc[gActiveProc];
    if(    new__95!=old_94    ) {
        user_sp=new__95->context.sp;
        user_satp=((8L<<60)|(((unsigned long  long)new__95->pagetable)>>12));
        a0_96=new__95->context.a0;
        __asm volatile("csrw sscratch, %0" : "=r" (a0_96));
        swtch(&new__95->context);
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
struct context* trapframe_97;
unsigned long  int arg0_98;
unsigned long  int arg1_99;
unsigned long  int arg2_100;
unsigned long  int arg3_101;
unsigned long  int arg4_102;
unsigned long  int arg5_103;
unsigned long  int arg6_104;
unsigned long  int arg_syscall_no_105;
unsigned long  long user_va_107;
int len_108;
struct proc* p_109;
int ret_110;
int i_111;
    trapframe_97=(struct context*)TRAPFRAME;
    arg0_98=trapframe_97->a0;
    arg1_99=trapframe_97->a1;
    arg2_100=trapframe_97->a2;
    arg3_101=trapframe_97->a3;
    arg4_102=trapframe_97->a4;
    arg5_103=trapframe_97->a5;
    arg6_104=trapframe_97->a6;
    arg_syscall_no_105=trapframe_97->a7;
    char kernel_buf_106[256];
    memset(&kernel_buf_106, 0, sizeof(char)    *(256)    );
    user_va_107=arg1_99;
    len_108=arg2_100;
    memset(kernel_buf_106,0,256);
    p_109=gProc[gActiveProc];
    ret_110=copyin(p_109->pagetable,kernel_buf_106,user_va_107,len_108);
    if(    ret_110<0    ) {
        panic("copyinstr1");
    }
    for(    i_111=0    ;    i_111<len_108    ;    i_111++    ){
        putchar(kernel_buf_106[i_111]);
    }
    return 0;
}

int Sys_exit(){
struct context* trapframe_112;
unsigned long  int arg0_113;
unsigned long  int arg1_114;
unsigned long  int arg2_115;
unsigned long  int arg3_116;
unsigned long  int arg4_117;
unsigned long  int arg5_118;
unsigned long  int arg6_119;
unsigned long  int arg_syscall_no_120;
struct proc* p_121;
    trapframe_112=(struct context*)TRAPFRAME;
    arg0_113=trapframe_112->a0;
    arg1_114=trapframe_112->a1;
    arg2_115=trapframe_112->a2;
    arg3_116=trapframe_112->a3;
    arg4_117=trapframe_112->a4;
    arg5_118=trapframe_112->a5;
    arg6_119=trapframe_112->a6;
    arg_syscall_no_120=trapframe_112->a7;
    p_121=gProc[gActiveProc];
    p_121->xstatus=arg0_113;
    return 0;
}

int Sys_open(){
struct context* trapframe_122;
unsigned long  int arg0_123;
unsigned long  int arg1_124;
unsigned long  int arg2_125;
unsigned long  int arg3_126;
unsigned long  int arg4_127;
unsigned long  int arg5_128;
unsigned long  int arg6_129;
unsigned long  int arg_syscall_no_130;
unsigned long  long user_va_132;
struct proc* p_133;
int result_134;
    trapframe_122=(struct context*)TRAPFRAME;
    arg0_123=trapframe_122->a0;
    arg1_124=trapframe_122->a1;
    arg2_125=trapframe_122->a2;
    arg3_126=trapframe_122->a3;
    arg4_127=trapframe_122->a4;
    arg5_128=trapframe_122->a5;
    arg6_129=trapframe_122->a6;
    arg_syscall_no_130=trapframe_122->a7;
    char kernel_buf_131[256];
    memset(&kernel_buf_131, 0, sizeof(char)    *(256)    );
    user_va_132=arg0_123;
    p_133=gProc[gActiveProc];
    copyinstr(p_133->pagetable,kernel_buf_131,user_va_132,256);
    result_134=fs_open(kernel_buf_131);
    return result_134;
}

int Sys_fork(){
struct context* trapframe_135;
unsigned long  int arg0_136;
unsigned long  int arg1_137;
unsigned long  int arg2_138;
unsigned long  int arg3_139;
unsigned long  int arg4_140;
unsigned long  int arg5_141;
unsigned long  int arg6_142;
unsigned long  int arg_syscall_no_143;
struct proc* p_144;
int fork_flag_145;
struct proc* child_146;
unsigned long  long sp_147;
int result_148;
memset(&fork_flag_145, 0, sizeof(int));
    trapframe_135=(struct context*)TRAPFRAME;
    arg0_136=trapframe_135->a0;
    arg1_137=trapframe_135->a1;
    arg2_138=trapframe_135->a2;
    arg3_139=trapframe_135->a3;
    arg4_140=trapframe_135->a4;
    arg5_141=trapframe_135->a5;
    arg6_142=trapframe_135->a6;
    arg_syscall_no_143=trapframe_135->a7;
    p_144=gProc[gActiveProc];
    alloc_prog((char*)p_144->program,fork_flag_145=1);
    child_146=gProc[gNumProc-1];
    sp_147=child_146->context.sp;
    child_146->context=*trapframe_135;
    child_146->context.mepc=child_146->context.mepc+4;
    child_146->context.sp=sp_147;
    child_146->context.a0=0;
    result_148=gNumProc-1;
    return result_148;
}

int Sys_execv(){
struct context* trapframe_149;
unsigned long  int arg0_150;
unsigned long  int arg1_151;
unsigned long  int arg2_152;
unsigned long  int arg3_153;
unsigned long  int arg4_154;
unsigned long  int arg5_155;
unsigned long  int arg6_156;
unsigned long  int arg_syscall_no_157;
int argc_158;
unsigned long  long user_va_160;
struct proc* p_161;
char* path_162;
int fd_164;
int ret_165;
struct proc* result_166;
    trapframe_149=(struct context*)TRAPFRAME;
    arg0_150=trapframe_149->a0;
    arg1_151=trapframe_149->a1;
    arg2_152=trapframe_149->a2;
    arg3_153=trapframe_149->a3;
    arg4_154=trapframe_149->a4;
    arg5_155=trapframe_149->a5;
    arg6_156=trapframe_149->a6;
    arg_syscall_no_157=trapframe_149->a7;
    argc_158=arg2_152;
    char kernel_buf_159[256];
    memset(&kernel_buf_159, 0, sizeof(char)    *(256)    );
    user_va_160=arg0_150;
    p_161=gProc[gActiveProc];
    copyinstr(p_161->pagetable,kernel_buf_159,user_va_160,256);
    path_162=kernel_buf_159;
    char hello_elf_163[4096];
    memset(&hello_elf_163, 0, sizeof(char)    *(4096)    );
    fd_164=fs_open(path_162);
    ret_165=fs_read(fd_164,hello_elf_163,4096);
    if(    ret_165<0    ) {
        trapframe_149->a0=-1;
        return 0;
    }
    exec_prog(hello_elf_163);
    result_166=gProc[gActiveProc];
    trapframe_149->mepc=result_166->context.mepc+4;
    trapframe_149->sp=result_166->context.sp;
    return 0;
}

unsigned long  int syscall_handler(){
struct context* trapframe_167;
unsigned long  int arg0_168;
unsigned long  int arg1_169;
unsigned long  int arg2_170;
unsigned long  int arg3_171;
unsigned long  int arg4_172;
unsigned long  int arg5_173;
unsigned long  int arg6_174;
unsigned long  int arg_syscall_no_175;
unsigned long  long result_176;
int fd_177;
unsigned long  long destva_178;
unsigned long  int n_179;
int ret_181;
struct proc* p_182;
int fd_183;
int ret_184;
memset(&ret_181, 0, sizeof(int));
    disable_timer_interrupts();
    trapframe_167=(struct context*)TRAPFRAME;
    arg0_168=trapframe_167->a0;
    arg1_169=trapframe_167->a1;
    arg2_170=trapframe_167->a2;
    arg3_171=trapframe_167->a3;
    arg4_172=trapframe_167->a4;
    arg5_173=trapframe_167->a5;
    arg6_174=trapframe_167->a6;
    arg_syscall_no_175=trapframe_167->a7;
    result_176=0;
    switch (    arg_syscall_no_175) {
        case 64:
        {
            result_176=Sys_write();
        }
        break;
        case 70:
        {
            result_176=Sys_exit();
        }
        break;
        case 66:
        {
            result_176=Sys_open();
        }
        break;
        case 65:
        {
            fd_177=arg0_168;
            destva_178=arg1_169;
            n_179=arg2_170;
            char kernel_buf_180[256];
            memset(&kernel_buf_180, 0, sizeof(char)            *(256)            );
            if(            fd_177==0            ) {
                ret_181=uart_readn(kernel_buf_180,n_179);
            }
            else {
                ret_181=fs_read(fd_177,kernel_buf_180,n_179);
                if(                ret_181<0                ) {
                    trapframe_167->a0=ret_181;
                    return 0;
                }
                kernel_buf_180[ret_181]=0;
            }
            p_182=gProc[gActiveProc];
            if(            copyout(p_182->pagetable,destva_178,kernel_buf_180,ret_181)<0            ) {
                panic("read: copyout failed");
            }
            result_176=ret_181;
        }
        break;
        case 67:
        {
            fd_183=arg0_168;
            ret_184=fs_close(fd_183);
            result_176=ret_184;
        }
        break;
        case 68:
        {
            result_176=Sys_fork();
        }
        break;
        case 69:
        {
            result_176=Sys_execv();
        }
        break;
        default:
        panic("invalid syscall");
    }
    trapframe_167->a0=result_176;
    return result_176;
}

void timerinit(){
    w_stvec((unsigned long  long)trapvec&~3);
    w_stimecmp(r_time()+10000000);
    w_sstatus(r_sstatus()|(1UL<<1));
    w_sie(r_sie()|(1UL<<5));
}

int main(){
int fork_flag_187;
struct proc* p_188;
unsigned long  int usersp_189;
unsigned long  long usersatp_190;
unsigned long  int entry_191;
memset(&fork_flag_187, 0, sizeof(int));
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
    w_stimecmp(r_time()+10000000);
    alloc_prog((char*)shell_elf,fork_flag_187=0);
    __asm volatile("csrs sstatus, %0" : : "r"((1UL<<18)));
    w_stimecmp(r_time()+10000000);
    p_188=gProc[gActiveProc];
    usersp_189=(unsigned long  long)(p_188->stack);
    usersatp_190=((8L<<60)|(((unsigned long  long)p_188->pagetable)>>12));
    entry_191=p_188->context.mepc;
    w_stimecmp(r_time()+100000);
    gCPU.proc=p_188;
    kernel_sp=read_s_sp();
    enter_user(entry_191,usersp_189,usersatp_190,10000UL);
    while(    1    ) {
        ;
    }
come_heap_final();
}

void* malloc(unsigned long  int size){
void* __result_obj__17;
struct mem_block* current_192;
struct mem_block* prev_193;
void* __result_obj__18;
struct mem_block* new_mem_194;
void* __result_obj__19;
void* __result_obj__20;
    if(    size==0    ) {
        __result_obj__17 = ((void*)0);
        return __result_obj__17;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_192=free_list;
    prev_193=((void*)0);
    while(    current_192!=((void*)0)    ) {
        if(        current_192->size>=size        ) {
            if(            prev_193==((void*)0)            ) {
                free_list=current_192->next;
            }
            else {
                prev_193->next=current_192->next;
            }
            __result_obj__18 = (void*)(current_192+1);
            return __result_obj__18;
        }
        prev_193=current_192;
        current_192=current_192->next;
    }
    new_mem_194=(struct mem_block*)sbrk(size);
    if(    new_mem_194==(void*)-1    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
    }
    new_mem_194->size=size;
    new_mem_194->next=((void*)0);
    __result_obj__20 = (void*)(new_mem_194+1);
    return __result_obj__20;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_195;
void* __result_obj__21;
void* ptr_196;
void* __result_obj__22;
    total_size_195=nmemb*size;
    if(    total_size_195==0    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
    }
    ptr_196=malloc(total_size_195);
    if(    ptr_196!=((void*)0)    ) {
        memset(ptr_196,0,total_size_195);
    }
    __result_obj__22 = ptr_196;
    return __result_obj__22;
}

void free(void* ptr){
struct mem_block* block_197;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_197=(struct mem_block*)ptr-1;
    block_197->next=free_list;
    free_list=block_197;
}

char* strdup(const char* s){
char* s2_198;
unsigned long  int len_199;
char* p_200;
char* __result_obj__23;
    s2_198=s;
    len_199=strlen(s2_198)+1;
    p_200=malloc(len_199);
    if(    p_200    ) {
        memcpy(p_200,s2_198,len_199);
    }
    __result_obj__23 = p_200;
    return __result_obj__23;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__24;
char* __result_obj__25;
char* __result_obj__26;
    if(    !*needle    ) {
        __result_obj__24 = (char*)haystack;
        return __result_obj__24;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_201=haystack;
        const char* n_202=needle;
        while(        *h_201&&*n_202&&(*h_201==*n_202)        ) {
            h_201++;
            n_202++;
        }
        if(        !*n_202        ) {
            __result_obj__25 = (char*)haystack;
            return __result_obj__25;
        }
    }
    __result_obj__26 = ((void*)0);
    return __result_obj__26;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_203;
int i_204;
void* __result_obj__27;
    cdst_203=(char*)dst;
    for(    i_204=0    ;    i_204<n    ;    i_204++    ){
        cdst_203[i_204]=c;
    }
    __result_obj__27 = dst;
    return __result_obj__27;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_205;
const unsigned char* s2_206;
memset(&s1_205, 0, sizeof(const unsigned char*));
memset(&s2_206, 0, sizeof(const unsigned char*));
    s1_205=v1;
    s2_206=v2;
    while(    n-->0    ) {
        if(        *s1_205!=*s2_206        ) {
            return *s1_205-*s2_206;
        }
        s1_205++,s2_206++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_207;
char* d_208;
void* __result_obj__28;
void* __result_obj__29;
s_207 = (void*)0;
d_208 = (void*)0;
    if(    n==0    ) {
        __result_obj__28 = dst;
        return __result_obj__28;
    }
    s_207=src;
    d_208=dst;
    if(    s_207<d_208&&s_207+n>d_208    ) {
        s_207+=n;
        d_208+=n;
        while(        n-->0        ) {
            *--d_208=*--s_207;
        }
    }
    else {
        while(        n-->0        ) {
            *d_208++=*s_207++;
        }
    }
    __result_obj__29 = dst;
    return __result_obj__29;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__30;
    __result_obj__30 = memmove(dst,src,n);
    return __result_obj__30;
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
char* os_209;
char* __result_obj__31;
os_209 = (void*)0;
    os_209=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__31 = os_209;
    return __result_obj__31;
}

int strlen(const char* s){
int n_210;
memset(&n_210, 0, sizeof(int));
    for(    n_210=0    ;    s[n_210]    ;    n_210++    ){
        ;
    }
    return n_210;
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_211;
char* __result_obj__32;
    d_211=dest;
    while(    *d_211    ) {
        d_211++;
    }
    while(    n--&&*src    ) {
        *d_211++=*src++;
    }
    *d_211=0;
    __result_obj__32 = dest;
    return __result_obj__32;
}

char* strtok(char* s, const char* delim){
static char* next_212;
char* start_213;
char* p_214;
char* __result_obj__33;
int is_delim_216;
char* __result_obj__34;
int is_delim_218;
char* __result_obj__35;
next_212 = (void*)0;
start_213 = (void*)0;
p_214 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_212=s;
    }
    if(    next_212==((void*)0)    ) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    start_213=next_212;
    while(    *start_213!=0    ) {
        const char* d_215=delim;
        is_delim_216=0;
        while(        *d_215!=0        ) {
            if(            *start_213==*d_215            ) {
                is_delim_216=1;
                break;
            }
            d_215++;
        }
        if(        !is_delim_216        ) {
            break;
        }
        start_213++;
    }
    if(    *start_213==0    ) {
        next_212=((void*)0);
        __result_obj__34 = ((void*)0);
        return __result_obj__34;
    }
    p_214=start_213;
    while(    *p_214!=0    ) {
        const char* d_217=delim;
        is_delim_218=0;
        while(        *d_217!=0        ) {
            if(            *p_214==*d_217            ) {
                is_delim_218=1;
                break;
            }
            d_217++;
        }
        if(        is_delim_218        ) {
            break;
        }
        p_214++;
    }
    if(    *p_214==0    ) {
        next_212=((void*)0);
    }
    else {
        *p_214=0;
        next_212=p_214+1;
    }
    __result_obj__35 = start_213;
    return __result_obj__35;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_219;
int i_221;
int negative_222;
char* __result_obj__36;
int digit_223;
char* __result_obj__37;
    p_219=buf;
    char tmp_220[32];
    memset(&tmp_220, 0, sizeof(char)    *(32)    );
    i_221=0;
    negative_222=0;
    if(    base<2||base>16    ) {
        *p_219=0;
        __result_obj__36 = p_219;
        return __result_obj__36;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_222=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_223=val_%base;
        tmp_220[i_221++]=(((digit_223<10))?(48+digit_223):(97+digit_223-10));
        val_/=base;
    } while(    val_    );
    if(    negative_222    ) {
        *p_219++=45;
    }
    while(    i_221--    ) {
        *p_219++=tmp_220[i_221];
    }
    *p_219=0;
    __result_obj__37 = buf;
    return __result_obj__37;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_225;
const char* s_226;
unsigned long  int remaining_228;
s_226 = (void*)0;
    char out2_224[512];
    memset(&out2_224, 0, sizeof(char)    *(512)    );
    p_225=out2_224;
    char buf_227[32];
    memset(&buf_227, 0, sizeof(char)    *(32)    );
    remaining_228=sizeof(out2_224);
    for(    ;    *fmt&&remaining_228>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_225++=*fmt;
            remaining_228--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_227,__builtin_va_arg(ap,int),10,1);
            s_226=buf_227;
            break;
            case 117:
            itoa(buf_227,__builtin_va_arg(ap,unsigned int),10,0);
            s_226=buf_227;
            break;
            case 120:
            itoa(buf_227,__builtin_va_arg(ap,unsigned int),16,0);
            s_226=buf_227;
            break;
            case 115:
            s_226=__builtin_va_arg(ap,const char*);
            if(            !s_226            ) {
                s_226="(null)";
            }
            break;
            case 99:
            buf_227[0]=(char)__builtin_va_arg(ap,int);
            buf_227[1]=0;
            s_226=buf_227;
            break;
            case 112:
            strncpy(buf_227,"0x",32);
            itoa(buf_227+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_226=buf_227;
            break;
            case 37:
            buf_227[0]=37;
            buf_227[1]=0;
            s_226=buf_227;
            break;
            default:
            buf_227[0]=37;
            buf_227[1]=*fmt;
            buf_227[2]=0;
            s_226=buf_227;
            break;
        }
        while(        *s_226&&remaining_228>1        ) {
            *p_225++=*s_226++;
            remaining_228--;
        }
    }
    *p_225=0;
    *out=strdup(out2_224);
    return p_225-out2_224;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_229;
char* p_230;
const char* s_231;
unsigned long  int remaining_233;
memset(&ap_229, 0, sizeof(va_list));
s_231 = (void*)0;
    __builtin_va_start(ap_229,fmt);
    p_230=out;
    char buf_232[32];
    memset(&buf_232, 0, sizeof(char)    *(32)    );
    remaining_233=out_size;
    if(    remaining_233==0    ) {
        __builtin_va_end(ap_229);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_233>1            ) {
                *p_230++=*fmt;
                remaining_233--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_231=__builtin_va_arg(ap_229,const char*);
            while(            *s_231&&remaining_233>1            ) {
                *p_230++=*s_231++;
                remaining_233--;
            }
            break;
            case 100:
            itoa(buf_232,__builtin_va_arg(ap_229,int),10,0);
            s_231=buf_232;
            while(            *s_231&&remaining_233>1            ) {
                *p_230++=*s_231++;
                remaining_233--;
            }
            break;
            case 120:
            itoa(buf_232,(unsigned int)__builtin_va_arg(ap_229,int),16,1);
            s_231=buf_232;
            while(            *s_231&&remaining_233>1            ) {
                *p_230++=*s_231++;
                remaining_233--;
            }
            break;
            case 99:
            if(            remaining_233>1            ) {
                *p_230++=(char)__builtin_va_arg(ap_229,int);
                remaining_233--;
            }
            break;
            case 112:
            s_231="0x";
            while(            *s_231&&remaining_233>1            ) {
                *p_230++=*s_231++;
                remaining_233--;
            }
            itoa(buf_232,(long)__builtin_va_arg(ap_229,void*),16,1);
            s_231=buf_232;
            while(            *s_231&&remaining_233>1            ) {
                *p_230++=*s_231++;
                remaining_233--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_232,__builtin_va_arg(ap_229,long),10,1);
                s_231=buf_232;
                while(                *s_231&&remaining_233>1                ) {
                    *p_230++=*s_231++;
                    remaining_233--;
                }
            }
            break;
            default:
            if(            remaining_233>1            ) {
                *p_230++=37;
                remaining_233--;
                if(                remaining_233>1                ) {
                    *p_230++=*fmt;
                    remaining_233--;
                }
            }
            break;
        }
    }
    *p_230=0;
    __builtin_va_end(ap_229);
    return p_230-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_234;
char* p_235;
const char* s_236;
unsigned long  int remaining_238;
memset(&ap_234, 0, sizeof(va_list));
s_236 = (void*)0;
    __builtin_va_start(ap_234,fmt);
    p_235=out;
    char buf_237[32];
    memset(&buf_237, 0, sizeof(char)    *(32)    );
    remaining_238=out_size;
    if(    remaining_238==0    ) {
        __builtin_va_end(ap_234);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_238>1            ) {
                *p_235++=*fmt;
                remaining_238--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_236=__builtin_va_arg(ap_234,const char*);
            while(            *s_236&&remaining_238>1            ) {
                *p_235++=*s_236++;
                remaining_238--;
            }
            break;
            case 100:
            itoa(buf_237,__builtin_va_arg(ap_234,int),10,0);
            s_236=buf_237;
            while(            *s_236&&remaining_238>1            ) {
                *p_235++=*s_236++;
                remaining_238--;
            }
            break;
            case 120:
            itoa(buf_237,(unsigned int)__builtin_va_arg(ap_234,int),16,1);
            s_236=buf_237;
            while(            *s_236&&remaining_238>1            ) {
                *p_235++=*s_236++;
                remaining_238--;
            }
            break;
            case 99:
            if(            remaining_238>1            ) {
                *p_235++=(char)__builtin_va_arg(ap_234,int);
                remaining_238--;
            }
            break;
            case 112:
            s_236="0x";
            while(            *s_236&&remaining_238>1            ) {
                *p_235++=*s_236++;
                remaining_238--;
            }
            itoa(buf_237,(long)__builtin_va_arg(ap_234,void*),16,1);
            s_236=buf_237;
            while(            *s_236&&remaining_238>1            ) {
                *p_235++=*s_236++;
                remaining_238--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_237,__builtin_va_arg(ap_234,long),10,1);
                s_236=buf_237;
                while(                *s_236&&remaining_238>1                ) {
                    *p_235++=*s_236++;
                    remaining_238--;
                }
            }
            break;
            default:
            if(            remaining_238>1            ) {
                *p_235++=37;
                remaining_238--;
                if(                remaining_238>1                ) {
                    *p_235++=*fmt;
                    remaining_238--;
                }
            }
            break;
        }
    }
    *p_235=0;
    __builtin_va_end(ap_234);
    return p_235-out;
}

void printint(int val_, int base, int sign){
int i_240;
int negative_241;
unsigned int uval_242;
int digit_243;
memset(&uval_242, 0, sizeof(unsigned int));
    char buf_239[33];
    memset(&buf_239, 0, sizeof(char)    *(33)    );
    i_240=0;
    negative_241=0;
    if(    sign&&val_<0    ) {
        negative_241=1;
        uval_242=-val_;
    }
    else {
        uval_242=(unsigned int)val_;
    }
    if(    uval_242==0    ) {
        putchar(48);
        return;
    }
    while(    uval_242>0    ) {
        digit_243=uval_242%base;
        buf_239[i_240++]=((digit_243<10)?(48+digit_243):(97+(digit_243-10)));
        uval_242/=base;
    }
    if(    negative_241    ) {
        putchar(45);
    }
    while(    --i_240>=0    ) {
        putchar(buf_239[i_240]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_245;
int negative_246;
int digit_247;
    char buf_244[65];
    memset(&buf_244, 0, sizeof(char)    *(65)    );
    i_245=0;
    negative_246=0;
    if(    sign&&(long)val_<0    ) {
        negative_246=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_247=val_%base;
        buf_244[i_245++]=((digit_247<10)?(48+digit_247):(97+(digit_247-10)));
        val_/=base;
    }
    if(    negative_246    ) {
        putchar(45);
    }
    while(    --i_245>=0    ) {
        putchar(buf_244[i_245]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_249;
int negative_250;
int digit_251;
    char buf_248[65];
    memset(&buf_248, 0, sizeof(char)    *(65)    );
    i_249=0;
    negative_250=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_250=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_251=val_%base;
        buf_248[i_249++]=((digit_251<10)?(48+digit_251):(97+(digit_251-10)));
        val_/=base;
    }
    if(    negative_250    ) {
        putchar(45);
    }
    while(    --i_249>=0    ) {
        putchar(buf_248[i_249]);
    }
}

int printf(const char* fmt, ...){
va_list ap_252;
const char* p_253;
int lcount_254;
unsigned long  int val__255;
unsigned long  long val__256;
long val__257;
long long val__258;
int i_259;
int val__260;
unsigned int val__261;
unsigned long  int val__262;
char c_264;
memset(&ap_252, 0, sizeof(va_list));
p_253 = (void*)0;
    __builtin_va_start(ap_252,fmt);
    for(    p_253=fmt    ;    *p_253    ;    p_253++    ){
        if(        *p_253!=37        ) {
            putchar(*p_253);
            continue;
        }
        p_253++;
        if(        *p_253==108        ) {
            lcount_254=1;
            if(            *(p_253+1)==108            ) {
                lcount_254=2;
                p_253++;
            }
            p_253++;
            switch (            *p_253) {
                case 120:
                {
                    if(                    lcount_254==1                    ) {
                        val__255=__builtin_va_arg(ap_252,unsigned long  int);
                        printlong(val__255,16,0);
                    }
                    else {
                        val__256=__builtin_va_arg(ap_252,unsigned long  long);
                        printlonglong(val__256,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_254==1                    ) {
                        val__257=__builtin_va_arg(ap_252,long);
                        printlong(val__257,10,1);
                    }
                    else {
                        val__258=__builtin_va_arg(ap_252,long  long);
                        printlonglong(val__258,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_259=0                    ;                    i_259<lcount_254                    ;                    i_259++                    ){
                        putchar(108);
                    }
                    putchar(*p_253);
                    break;
                }
            }
        }
        else {
            switch (            *p_253) {
                case 100:
                {
                    val__260=__builtin_va_arg(ap_252,int);
                    printint(val__260,10,1);
                    break;
                }
                case 120:
                {
                    val__261=__builtin_va_arg(ap_252,unsigned int);
                    printint(val__261,16,0);
                    break;
                }
                case 112:
                {
                    val__262=(unsigned long  int)__builtin_va_arg(ap_252,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__262,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_263=__builtin_va_arg(ap_252,const char*);
                    if(                    !s_263                    ) {
                        s_263="(null)";
                    }
                    while(                    *s_263                    ) {
                        putchar(*s_263++);
                    }
                    break;
                }
                case 99:
                {
                    c_264=(char)__builtin_va_arg(ap_252,int);
                    putchar(c_264);
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
                    putchar(*p_253);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_252);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_265;
int i_266;
void* __right_value2 = (void*)0;
    buf_265=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 147, "struct buffer*"))));
    buffer_append_format(buf_265,"%s %d\n",sname,sline);
    for(    i_266=gNumComeStackFrame-2    ;    i_266>=0    ;    i_266--    ){
        buffer_append_format(buf_265,"%s %d #%d\n",gComeStackFrameSName[i_266],gComeStackFrameSLine[i_266],gComeStackFrameID[i_266]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_265))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_267;
    for(    i_267=gNumComeStackFrame-1    ;    i_267>=0    ;    i_267--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_267],gComeStackFrameSLine[i_267],gComeStackFrameID[i_267]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__38;
    __result_obj__38 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__38;
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
int i_268;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_268=0    ;    i_268<gHeapPages.mSizePages    ;    i_268++    ){
        gHeapPages.mPages[i_268]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_269;
int n_270;
_Bool flag_271;
int i_272;
struct sMemHeaderTiny* it_273;
int n_274;
int i_275;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_269=gAllocMem;
        n_270=0;
        while(        it_269        ) {
            n_270++;
            flag_271=(_Bool)0;
            printf("#%d ",n_270);
            if(            it_269->class_name            ) {
                printf("%p (%s): ",(char*)it_269+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_269->class_name);
            }
            for(            i_272=0            ;            i_272<16            ;            i_272++            ){
                if(                it_269->sname[i_272]                ) {
                    printf("%s %d #%d, ",it_269->sname[i_272],it_269->sline[i_272],it_269->id[i_272]);
                    flag_271=(_Bool)1;
                }
            }
            if(            flag_271            ) {
                puts("");
            }
            it_269=it_269->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_270,gNumAlloc,gNumFree);
    }
    else {
        it_273=(struct sMemHeaderTiny*)gAllocMem;
        n_274=0;
        while(        it_273        ) {
            n_274++;
            if(            it_273->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_274,(char*)it_273+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_273->class_name,it_273->sname,it_273->sline);
            }
            it_273=it_273->next;
        }
        if(        n_274>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_274,gNumAlloc,gNumFree);
        }
    }
    for(    i_275=0    ;    i_275<gHeapPages.mSizePages    ;    i_275++    ){
        free(gHeapPages.mPages[i_275]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_276;
void* __result_obj__39;
    result_276=((void*)0);
    size=(size+7&~7);
    result_276=calloc(1,size);
    __result_obj__39 = result_276;
    return __result_obj__39;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_277;
struct sMemHeader* prev_it_278;
struct sMemHeader* next_it_279;
unsigned long  int size_280;
struct sMemHeaderTiny* it_281;
struct sMemHeaderTiny* prev_it_282;
struct sMemHeaderTiny* next_it_283;
unsigned long  int size_284;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_277=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_277->allocated!=177783            ) {
                return;
            }
            it_277->allocated=0;
            prev_it_278=it_277->prev;
            next_it_279=it_277->next;
            if(            gAllocMem==it_277            ) {
                gAllocMem=next_it_279;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_278                ) {
                    prev_it_278->next=next_it_279;
                }
                if(                next_it_279                ) {
                    next_it_279->prev=prev_it_278;
                }
            }
            size_280=it_277->size;
            free(it_277);
            gNumFree++;
        }
        else {
            it_281=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_281->allocated!=177783            ) {
                return;
            }
            it_281->allocated=0;
            prev_it_282=it_281->prev;
            next_it_283=it_281->next;
            if(            gAllocMem==it_281            ) {
                gAllocMem=(struct sMemHeader*)next_it_283;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_282                ) {
                    prev_it_282->next=next_it_283;
                }
                if(                next_it_283                ) {
                    next_it_283->prev=prev_it_282;
                }
            }
            size_284=it_281->size;
            free(it_281);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_285;
struct sMemHeader* it_286;
int i_287;
int i_288;
void* __result_obj__40;
void* result_289;
struct sMemHeaderTiny* it_290;
void* __result_obj__41;
memset(&i_287, 0, sizeof(int));
memset(&i_288, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_285=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_286=result_285;
        it_286->allocated=177783;
        it_286->size=size+sizeof(struct sMemHeader);
        it_286->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_287=0            ;            i_287<gNumComeStackFrame            ;            i_287++            ){
                it_286->sname[i_287]=gComeStackFrameSName[i_287];
                it_286->sline[i_287]=gComeStackFrameSLine[i_287];
                it_286->id[i_287]=gComeStackFrameID[i_287];
            }
        }
        else {
            for(            i_288=0            ;            i_288<16            ;            i_288++            ){
                it_286->sname[i_288]=gComeStackFrameSName[gNumComeStackFrame-1-i_288];
                it_286->sline[i_288]=gComeStackFrameSLine[gNumComeStackFrame-1-i_288];
                it_286->id[i_288]=gComeStackFrameID[gNumComeStackFrame-1-i_288];
            }
        }
        come_pop_stackframe_v2();
        it_286->next=gAllocMem;
        it_286->prev=((void*)0);
        it_286->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_286;
        }
        gAllocMem=it_286;
        gNumAlloc++;
        __result_obj__40 = (char*)result_285+sizeof(struct sMemHeader);
        return __result_obj__40;
    }
    else {
        result_289=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_290=result_289;
        it_290->allocated=177783;
        it_290->class_name=class_name;
        it_290->sname=sname;
        it_290->sline=sline;
        it_290->size=size+sizeof(struct sMemHeaderTiny);
        it_290->free_next=((void*)0);
        it_290->next=(struct sMemHeaderTiny*)gAllocMem;
        it_290->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_290;
        }
        gAllocMem=(struct sMemHeader*)it_290;
        gNumAlloc++;
        __result_obj__41 = (char*)result_289+sizeof(struct sMemHeaderTiny);
        return __result_obj__41;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_291;
char* __result_obj__42;
struct sMemHeaderTiny* it_292;
char* __result_obj__43;
    if(    gComeDebugLib    ) {
        it_291=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_291->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_291);
            exit(2);
        }
        __result_obj__42 = it_291->class_name;
        return __result_obj__42;
    }
    else {
        it_292=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_292->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_292);
            exit(2);
        }
        __result_obj__43 = it_292->class_name;
        return __result_obj__43;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_293;
int i_294;
struct sMemHeaderTiny* it_295;
    if(    gComeDebugLib    ) {
        it_293=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_293->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_293->class_name        ) {
            printf("(%s): ",it_293->class_name);
        }
        for(        i_294=0        ;        i_294<16        ;        i_294++        ){
            if(            it_293->sname[i_294]            ) {
                printf("%s %d #%d, ",it_293->sname[i_294],it_293->sline[i_294],it_293->id[i_294]);
            }
        }
        puts("");
    }
    else {
        it_295=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_295->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_295->class_name,it_295->sname,it_295->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_296;
unsigned long  int* ref_count_297;
unsigned long  int* size2_298;
void* __result_obj__44;
    mem_296=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_297=(unsigned long  int*)mem_296;
    *ref_count_297=0;
    size2_298=(unsigned long  int*)(mem_296+sizeof(unsigned long  int));
    *size2_298=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__44 = mem_296+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__44;
}

void come_free(void* mem){
unsigned long  int* ref_count_299;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_299=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_299);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__45;
char* mem_300;
unsigned long  int* size_p_301;
unsigned long  int size_302;
void* result_303;
void* __result_obj__46;
    if(    !block    ) {
        __result_obj__45 = ((void*)0);
        return __result_obj__45;
    }
    mem_300=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_301=(unsigned long  int*)(mem_300+sizeof(unsigned long  int));
    size_302=*size_p_301-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_303=come_calloc_v2(1,size_302,sname,sline,class_name);
    memcpy(result_303,block,size_302);
    __result_obj__46 = result_303;
    return __result_obj__46;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__47;
unsigned long  int* ref_count_304;
void* __result_obj__48;
    if(    mem==((void*)0)    ) {
        __result_obj__47 = mem;
        return __result_obj__47;
    }
    ref_count_304=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_304)++;
    __result_obj__48 = mem;
    return __result_obj__48;
}

void* come_print_ref_count(void* mem){
void* __result_obj__49;
unsigned long  int* ref_count_305;
void* __result_obj__50;
    if(    mem==((void*)0)    ) {
        __result_obj__49 = mem;
        return __result_obj__49;
    }
    ref_count_305=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_305);
    __result_obj__50 = mem;
    return __result_obj__50;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_306;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_306=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_306;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__51;
void* __result_obj__52;
unsigned long  int* ref_count_307;
unsigned long  int count_308;
void (*finalizer_309)(void*);
void* __result_obj__53;
void* __result_obj__54;
memset(&finalizer_309, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__51 = mem;
            return __result_obj__51;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    ref_count_307=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_307)--;
    }
    count_308=*ref_count_307;
    if(    !no_free&&count_308<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_309=protocol_fun;
            finalizer_309(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__53 = ((void*)0);
        return __result_obj__53;
    }
    __result_obj__54 = mem;
    return __result_obj__54;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_310)(void*);
void (*finalizer_311)(void*);
void (*finalizer_312)(void*);
unsigned long  int* ref_count_313;
unsigned long  int count_314;
void (*finalizer_315)(void*);
void (*finalizer_316)(void*);
void (*finalizer_317)(void*);
memset(&finalizer_310, 0, sizeof(void (*)(void*)));
memset(&finalizer_311, 0, sizeof(void (*)(void*)));
memset(&finalizer_312, 0, sizeof(void (*)(void*)));
memset(&finalizer_315, 0, sizeof(void (*)(void*)));
memset(&finalizer_316, 0, sizeof(void (*)(void*)));
memset(&finalizer_317, 0, sizeof(void (*)(void*)));
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
                finalizer_310=protocol_fun;
                finalizer_310(protocol_obj);
            }
            finalizer_311=fun;
            finalizer_311(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_312=protocol_fun;
                finalizer_312(protocol_obj);
            }
        }
    }
    else {
        ref_count_313=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_313)--;
        }
        count_314=*ref_count_313;
        if(        !no_free&&count_314<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_315=protocol_fun;
                        finalizer_315(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_316=fun;
                        finalizer_316(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_317=protocol_fun;
                        finalizer_317(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__55;
int len_318;
void* __right_value4 = (void*)0;
char* result_319;
char* __result_obj__56;
    if(    str==((void*)0)    ) {
        __result_obj__55 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__55 = come_decrement_ref_count(__result_obj__55, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__55;
    }
    len_318=strlen(str)+1;
    result_319=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_318)), "/usr/local/include/comelang.h", 911, "char*"));
    strncpy(result_319,str,len_318);
    __result_obj__56 = (char*)come_increment_ref_count(result_319);
    (result_319 = come_decrement_ref_count(result_319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__56 = come_decrement_ref_count(__result_obj__56, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__56;
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
void* __right_value5 = (void*)0;
char* __result_obj__57;
    __result_obj__57 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__57 = come_decrement_ref_count(__result_obj__57, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__57;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__58;
    __result_obj__58 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__58;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__59;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2868, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__59 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__59, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__59;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__60;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2878, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__60 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__60, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__60;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__61;
void* __right_value8 = (void*)0;
struct buffer* result_320;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__61, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__61;
    }
    result_320=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2898, "struct buffer*"));
    result_320->size=self->size;
    __dec_obj3=result_320->buf,
    result_320->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2901, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_320->len=self->len;
    memcpy(result_320->buf,self->buf,self->len);
    __result_obj__62 = (struct buffer*)come_increment_ref_count(result_320);
    come_call_finalizer(buffer_finalize, result_320, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__62, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__62;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__63;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__63 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__63;
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
struct buffer* __result_obj__64;
void* __right_value12 = (void*)0;
char* old_buf_321;
int old_len_322;
int new_size_323;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_321=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2949, "char*"));
        memcpy(old_buf_321,self->buf,self->size);
        old_len_322=self->len;
        new_size_323=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_323)), "/usr/local/include/comelang.h", 2953, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_321,old_len_322);
        self->buf[old_len_322]=0;
        self->size=new_size_323;
        (old_buf_321 = come_decrement_ref_count(old_buf_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__66;
void* __right_value14 = (void*)0;
char* old_buf_324;
int old_len_325;
int new_size_326;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_324=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2972, "char*"));
        old_len_325=self->len;
        new_size_326=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_326)), "/usr/local/include/comelang.h", 2976, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_324,old_len_325);
        self->buf[old_len_325]=0;
        self->size=new_size_326;
        (old_buf_324 = come_decrement_ref_count(old_buf_324, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__68;
int size_327;
void* __right_value16 = (void*)0;
char* old_buf_328;
int old_len_329;
int new_size_330;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__69;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__68 = self;
        return __result_obj__68;
    }
    size_327=strlen(mem);
    if(    self->len+size_327+1+1>=self->size    ) {
        old_buf_328=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2998, "char*"));
        memcpy(old_buf_328,self->buf,self->size);
        old_len_329=self->len;
        new_size_330=(self->size+size_327+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_330)), "/usr/local/include/comelang.h", 3002, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_328,old_len_329);
        self->buf[old_len_329]=0;
        self->size=new_size_330;
        (old_buf_328 = come_decrement_ref_count(old_buf_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_327);
    self->len+=size_327;
    self->buf[self->len]=0;
    __result_obj__69 = self;
    return __result_obj__69;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__70;
va_list args_331;
char* result_332;
int len_333;
struct buffer* __result_obj__71;
void* __right_value18 = (void*)0;
char* mem_334;
int size_335;
void* __right_value19 = (void*)0;
char* old_buf_336;
int old_len_337;
int new_size_338;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__72;
result_332 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__70 = self;
        return __result_obj__70;
    }
    __builtin_va_start(args_331,msg);
    len_333=vasprintf(&result_332,msg,args_331);
    __builtin_va_end(args_331);
    if(    len_333<0    ) {
        __result_obj__71 = self;
        return __result_obj__71;
    }
    mem_334=(char*)come_increment_ref_count(__builtin_string(result_332));
    size_335=strlen(mem_334);
    if(    self->len+size_335+1+1>=self->size    ) {
        old_buf_336=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3046, "char*"));
        memcpy(old_buf_336,self->buf,self->size);
        old_len_337=self->len;
        new_size_338=(self->size+size_335+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_338)), "/usr/local/include/comelang.h", 3050, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_336,old_len_337);
        self->buf[old_len_337]=0;
        self->size=new_size_338;
        (old_buf_336 = come_decrement_ref_count(old_buf_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_334,size_335);
    self->len+=size_335;
    self->buf[self->len]=0;
    free(result_332);
    __result_obj__72 = self;
    (mem_334 = come_decrement_ref_count(mem_334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__72;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__73;
int size_339;
void* __right_value21 = (void*)0;
char* old_buf_340;
int old_len_341;
int new_size_342;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__74;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__73 = self;
        return __result_obj__73;
    }
    size_339=strlen(mem)+1;
    if(    self->len+size_339+1+1+1>=self->size    ) {
        old_buf_340=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3072, "char*"));
        memcpy(old_buf_340,self->buf,self->size);
        old_len_341=self->len;
        new_size_342=(self->size+size_339+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_342)), "/usr/local/include/comelang.h", 3076, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_340,old_len_341);
        self->buf[old_len_341]=0;
        self->size=new_size_342;
        (old_buf_340 = come_decrement_ref_count(old_buf_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_339);
    self->len+=size_339;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__75;
int* mem_343;
int size_344;
void* __right_value23 = (void*)0;
char* old_buf_345;
int old_len_346;
int new_size_347;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = ((void*)0);
        return __result_obj__75;
    }
    mem_343=&value;
    size_344=sizeof(int);
    if(    self->len+size_344+1+1>=self->size    ) {
        old_buf_345=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3099, "char*"));
        memcpy(old_buf_345,self->buf,self->size);
        old_len_346=self->len;
        new_size_347=(self->size+size_344+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_347)), "/usr/local/include/comelang.h", 3103, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_345,old_len_346);
        self->buf[old_len_346]=0;
        self->size=new_size_347;
        (old_buf_345 = come_decrement_ref_count(old_buf_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_343,size_344);
    self->len+=size_344;
    self->buf[self->len]=0;
    __result_obj__76 = self;
    return __result_obj__76;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_348;
int size_349;
void* __right_value25 = (void*)0;
char* old_buf_350;
int old_len_351;
int new_size_352;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__77;
    mem_348=&value;
    size_349=sizeof(long);
    if(    self->len+size_349+1+1>=self->size    ) {
        old_buf_350=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3122, "char*"));
        memcpy(old_buf_350,self->buf,self->size);
        old_len_351=self->len;
        new_size_352=(self->size+size_349+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_352)), "/usr/local/include/comelang.h", 3126, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_350,old_len_351);
        self->buf[old_len_351]=0;
        self->size=new_size_352;
        (old_buf_350 = come_decrement_ref_count(old_buf_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_348,size_349);
    self->len+=size_349;
    self->buf[self->len]=0;
    __result_obj__77 = self;
    return __result_obj__77;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__78;
short* mem_353;
int size_354;
void* __right_value27 = (void*)0;
char* old_buf_355;
int old_len_356;
int new_size_357;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__79;
    if(    self==((void*)0)    ) {
        __result_obj__78 = ((void*)0);
        return __result_obj__78;
    }
    mem_353=&value;
    size_354=sizeof(short);
    if(    self->len+size_354+1+1>=self->size    ) {
        old_buf_355=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3149, "char*"));
        memcpy(old_buf_355,self->buf,self->size);
        old_len_356=self->len;
        new_size_357=(self->size+size_354+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_357)), "/usr/local/include/comelang.h", 3153, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_355,old_len_356);
        self->buf[old_len_356]=0;
        self->size=new_size_357;
        (old_buf_355 = come_decrement_ref_count(old_buf_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_353,size_354);
    self->len+=size_354;
    self->buf[self->len]=0;
    __result_obj__79 = self;
    return __result_obj__79;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__80;
int len_358;
int new_size_359;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_360;
struct buffer* __result_obj__81;
    if(    self==((void*)0)    ) {
        __result_obj__80 = ((void*)0);
        return __result_obj__80;
    }
    len_358=self->len;
    len_358=(len_358+3)&~3;
    if(    len_358>=self->size    ) {
        new_size_359=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_359)), "/usr/local/include/comelang.h", 3177, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_359;
    }
    for(    i_360=self->len    ;    i_360<len_358    ;    i_360++    ){
        self->buf[i_360]=0;
    }
    self->len=len_358;
    __result_obj__81 = self;
    return __result_obj__81;
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
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result_361;
struct buffer* __result_obj__82;
struct buffer* __result_obj__83;
    result_361=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3207, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__82 = (struct buffer*)come_increment_ref_count(result_361);
        come_call_finalizer(buffer_finalize, result_361, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__82;
    }
    buffer_append_str(result_361,self);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_361);
    come_call_finalizer(buffer_finalize, result_361, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__84;
void* __right_value33 = (void*)0;
char* __result_obj__85;
    if(    self==((void*)0)    ) {
        __result_obj__84 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__84 = come_decrement_ref_count(__result_obj__84, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__84;
    }
    __result_obj__85 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__86;
    __result_obj__86 = self->buf;
    return __result_obj__86;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_362;
struct buffer* __result_obj__87;
    result_362=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3234, "struct buffer*"))));
    buffer_append(result_362,self,sizeof(char)*len);
    __result_obj__87 = (struct buffer*)come_increment_ref_count(result_362);
    come_call_finalizer(buffer_finalize, result_362, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_363;
int i_364;
struct buffer* __result_obj__88;
    result_363=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3241, "struct buffer*"))));
    for(    i_364=0    ;    i_364<len    ;    i_364++    ){
        buffer_append(result_363,self[i_364],strlen(self[i_364]));
    }
    __result_obj__88 = (struct buffer*)come_increment_ref_count(result_363);
    come_call_finalizer(buffer_finalize, result_363, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_365;
struct buffer* __result_obj__89;
    result_365=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3250, "struct buffer*"))));
    buffer_append(result_365,(char*)self,sizeof(short)*len);
    __result_obj__89 = (struct buffer*)come_increment_ref_count(result_365);
    come_call_finalizer(buffer_finalize, result_365, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_366;
struct buffer* __result_obj__90;
    result_366=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3257, "struct buffer*"))));
    buffer_append(result_366,(char*)self,sizeof(int)*len);
    __result_obj__90 = (struct buffer*)come_increment_ref_count(result_366);
    come_call_finalizer(buffer_finalize, result_366, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_367;
struct buffer* __result_obj__91;
    result_367=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3264, "struct buffer*"))));
    buffer_append(result_367,(char*)self,sizeof(long)*len);
    __result_obj__91 = (struct buffer*)come_increment_ref_count(result_367);
    come_call_finalizer(buffer_finalize, result_367, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_368;
struct buffer* __result_obj__92;
    result_368=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3271, "struct buffer*"))));
    buffer_append(result_368,(char*)self,sizeof(float)*len);
    __result_obj__92 = (struct buffer*)come_increment_ref_count(result_368);
    come_call_finalizer(buffer_finalize, result_368, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_369;
struct buffer* __result_obj__93;
    result_369=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3278, "struct buffer*"))));
    buffer_append(result_369,(char*)self,sizeof(double)*len);
    __result_obj__93 = (struct buffer*)come_increment_ref_count(result_369);
    come_call_finalizer(buffer_finalize, result_369, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

char* buffer_printable(struct buffer* self){
int len_370;
void* __right_value48 = (void*)0;
char* result_371;
int n_372;
int i_373;
unsigned char c_374;
char* __result_obj__94;
    len_370=self->len;
    result_371=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_370*2+1)), "/usr/local/include/comelang.h", 3286, "char*"));
    n_372=0;
    for(    i_373=0    ;    i_373<len_370    ;    i_373++    ){
        c_374=self->buf[i_373];
        if(        (c_374>=0&&c_374<32)||c_374==127        ) {
            result_371[n_372++]=94;
            result_371[n_372++]=c_374+65-1;
        }
        else if(        c_374>127        ) {
            result_371[n_372++]=63;
        }
        else {
            result_371[n_372++]=c_374;
        }
    }
    result_371[n_372]=0;
    __result_obj__94 = (char*)come_increment_ref_count(result_371);
    (result_371 = come_decrement_ref_count(result_371, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__94;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_375;
struct list$1char$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_375=0    ;    i_375<num_value    ;    i_375++    ){
        list$1char$_push_back(self,values[i_375]);
    }
    __result_obj__96 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_376;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_377;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_378;
struct list$1char$* __result_obj__95;
    if(    self->len==0    ) {
        litem_376=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$*"))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        litem_376->item=item;
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1    ) {
        litem_377=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$*"))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        litem_377->item=item;
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$*"))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        litem_378->item=item;
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_379;
struct list_item$1char$* prev_it_380;
    it_379=self->head;
    while(    it_379!=((void*)0)    ) {
        prev_it_380=it_379;
        it_379=it_379->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_380, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__97;
    __result_obj__97 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3327, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_381;
struct list$1char$p* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_381=0    ;    i_381<num_value    ;    i_381++    ){
        list$1char$p_push_back(self,values[i_381]);
    }
    __result_obj__99 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_382;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_383;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_384;
struct list$1char$p* __result_obj__98;
    if(    self->len==0    ) {
        litem_382=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$p*"))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        litem_382->item=item;
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1    ) {
        litem_383=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$p*"))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        litem_383->item=item;
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$p*"))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        litem_384->item=item;
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_385;
struct list_item$1char$p* prev_it_386;
    it_385=self->head;
    while(    it_385!=((void*)0)    ) {
        prev_it_386=it_385;
        it_385=it_385->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_386, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__100;
    __result_obj__100 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3332, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_387;
struct list$1short$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_387=0    ;    i_387<num_value    ;    i_387++    ){
        list$1short$_push_back(self,values[i_387]);
    }
    __result_obj__102 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_388;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_389;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_390;
struct list$1short$* __result_obj__101;
    if(    self->len==0    ) {
        litem_388=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1short$*"))));
        litem_388->prev=((void*)0);
        litem_388->next=((void*)0);
        litem_388->item=item;
        self->tail=litem_388;
        self->head=litem_388;
    }
    else if(    self->len==1    ) {
        litem_389=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1short$*"))));
        litem_389->prev=self->head;
        litem_389->next=((void*)0);
        litem_389->item=item;
        self->tail=litem_389;
        self->head->next=litem_389;
    }
    else {
        litem_390=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1short$*"))));
        litem_390->prev=self->tail;
        litem_390->next=((void*)0);
        litem_390->item=item;
        self->tail->next=litem_390;
        self->tail=litem_390;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_391;
struct list_item$1short$* prev_it_392;
    it_391=self->head;
    while(    it_391!=((void*)0)    ) {
        prev_it_392=it_391;
        it_391=it_391->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_392, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__103;
    __result_obj__103 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3337, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_393;
struct list$1int$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_393=0    ;    i_393<num_value    ;    i_393++    ){
        list$1int$_push_back(self,values[i_393]);
    }
    __result_obj__105 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_394;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_395;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_396;
struct list$1int$* __result_obj__104;
    if(    self->len==0    ) {
        litem_394=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1int$*"))));
        litem_394->prev=((void*)0);
        litem_394->next=((void*)0);
        litem_394->item=item;
        self->tail=litem_394;
        self->head=litem_394;
    }
    else if(    self->len==1    ) {
        litem_395=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1int$*"))));
        litem_395->prev=self->head;
        litem_395->next=((void*)0);
        litem_395->item=item;
        self->tail=litem_395;
        self->head->next=litem_395;
    }
    else {
        litem_396=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1int$*"))));
        litem_396->prev=self->tail;
        litem_396->next=((void*)0);
        litem_396->item=item;
        self->tail->next=litem_396;
        self->tail=litem_396;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_397;
struct list_item$1int$* prev_it_398;
    it_397=self->head;
    while(    it_397!=((void*)0)    ) {
        prev_it_398=it_397;
        it_397=it_397->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_398, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__106;
    __result_obj__106 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3342, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_399;
struct list$1long$* __result_obj__108;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_399=0    ;    i_399<num_value    ;    i_399++    ){
        list$1long$_push_back(self,values[i_399]);
    }
    __result_obj__108 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__108, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__108;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_400;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_401;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_402;
struct list$1long$* __result_obj__107;
    if(    self->len==0    ) {
        litem_400=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1long$*"))));
        litem_400->prev=((void*)0);
        litem_400->next=((void*)0);
        litem_400->item=item;
        self->tail=litem_400;
        self->head=litem_400;
    }
    else if(    self->len==1    ) {
        litem_401=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1long$*"))));
        litem_401->prev=self->head;
        litem_401->next=((void*)0);
        litem_401->item=item;
        self->tail=litem_401;
        self->head->next=litem_401;
    }
    else {
        litem_402=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1long$*"))));
        litem_402->prev=self->tail;
        litem_402->next=((void*)0);
        litem_402->item=item;
        self->tail->next=litem_402;
        self->tail=litem_402;
    }
    self->len++;
    __result_obj__107 = self;
    return __result_obj__107;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_403;
struct list_item$1long$* prev_it_404;
    it_403=self->head;
    while(    it_403!=((void*)0)    ) {
        prev_it_404=it_403;
        it_403=it_403->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_404, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__109;
    __result_obj__109 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3347, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__109, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__109;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_405;
struct list$1float$* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_405=0    ;    i_405<num_value    ;    i_405++    ){
        list$1float$_push_back(self,values[i_405]);
    }
    __result_obj__111 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__111, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__111;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_406;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_407;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_408;
struct list$1float$* __result_obj__110;
    if(    self->len==0    ) {
        litem_406=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1float$*"))));
        litem_406->prev=((void*)0);
        litem_406->next=((void*)0);
        litem_406->item=item;
        self->tail=litem_406;
        self->head=litem_406;
    }
    else if(    self->len==1    ) {
        litem_407=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1float$*"))));
        litem_407->prev=self->head;
        litem_407->next=((void*)0);
        litem_407->item=item;
        self->tail=litem_407;
        self->head->next=litem_407;
    }
    else {
        litem_408=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1float$*"))));
        litem_408->prev=self->tail;
        litem_408->next=((void*)0);
        litem_408->item=item;
        self->tail->next=litem_408;
        self->tail=litem_408;
    }
    self->len++;
    __result_obj__110 = self;
    return __result_obj__110;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_409;
struct list_item$1float$* prev_it_410;
    it_409=self->head;
    while(    it_409!=((void*)0)    ) {
        prev_it_410=it_409;
        it_409=it_409->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_410, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__112;
    __result_obj__112 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3352, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__112, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__112;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_411;
struct list$1double$* __result_obj__114;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_411=0    ;    i_411<num_value    ;    i_411++    ){
        list$1double$_push_back(self,values[i_411]);
    }
    __result_obj__114 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__114, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__114;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_412;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_413;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_414;
struct list$1double$* __result_obj__113;
    if(    self->len==0    ) {
        litem_412=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1double$*"))));
        litem_412->prev=((void*)0);
        litem_412->next=((void*)0);
        litem_412->item=item;
        self->tail=litem_412;
        self->head=litem_412;
    }
    else if(    self->len==1    ) {
        litem_413=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1double$*"))));
        litem_413->prev=self->head;
        litem_413->next=((void*)0);
        litem_413->item=item;
        self->tail=litem_413;
        self->head->next=litem_413;
    }
    else {
        litem_414=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1double$*"))));
        litem_414->prev=self->tail;
        litem_414->next=((void*)0);
        litem_414->item=item;
        self->tail->next=litem_414;
        self->tail=litem_414;
    }
    self->len++;
    __result_obj__113 = self;
    return __result_obj__113;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_415;
struct list_item$1double$* prev_it_416;
    it_415=self->head;
    while(    it_415!=((void*)0)    ) {
        prev_it_416=it_415;
        it_415=it_415->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_416, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__115;
    __result_obj__115 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3357, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__115;
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
void* __right_value84 = (void*)0;
char* __result_obj__116;
int len_417;
void* __right_value85 = (void*)0;
char* result_418;
char* __result_obj__117;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    len_417=strlen(self)+strlen(right);
    result_418=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_417+1)), "/usr/local/include/comelang.h", 3586, "char*"));
    strncpy(result_418,self,len_417+1);
    strncat(result_418,right,len_417+1);
    __result_obj__117 = (char*)come_increment_ref_count(result_418);
    (result_418 = come_decrement_ref_count(result_418, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__118;
int len_419;
void* __right_value87 = (void*)0;
char* result_420;
char* __result_obj__119;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_419=strlen(self)+strlen(right);
    result_420=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_419+1)), "/usr/local/include/comelang.h", 3601, "char*"));
    strncpy(result_420,self,len_419+1);
    strncat(result_420,right,len_419+1);
    __result_obj__119 = (char*)come_increment_ref_count(result_420);
    (result_420 = come_decrement_ref_count(result_420, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__120;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_421;
int i_422;
void* __right_value91 = (void*)0;
char* __result_obj__121;
    if(    self==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    buf_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3614, "struct buffer*"))));
    for(    i_422=0    ;    i_422<right    ;    i_422++    ){
        buffer_append_str(buf_421,self);
    }
    __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_421))));
    come_call_finalizer(buffer_finalize, buf_421, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__122;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_423;
int i_424;
void* __right_value95 = (void*)0;
char* __result_obj__123;
    if(    self==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    buf_423=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3628, "struct buffer*"))));
    for(    i_424=0    ;    i_424<right    ;    i_424++    ){
        buffer_append_str(buf_423,self);
    }
    __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_423))));
    come_call_finalizer(buffer_finalize, buf_423, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_425;
int i_426;
    result_425=(_Bool)0;
    for(    i_426=0    ;    i_426<len    ;    i_426++    ){
        if(        strncmp(self[i_426],str,strlen(self[i_426]))==0        ) {
            result_425=(_Bool)1;
            break;
        }
    }
    return result_425;
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
int result_427;
char* p_428;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_427=0;
    p_428=value;
    while(    *p_428    ) {
        result_427+=(*p_428);
        p_428++;
    }
    return result_427;
}

unsigned int string_get_hash_key(char* value){
int result_429;
char* p_430;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_429=0;
    p_430=value;
    while(    *p_430    ) {
        result_429+=(*p_430);
        p_430++;
    }
    return result_429;
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
_Bool result_431;
    result_431=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_431;
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
_Bool result_432;
    result_432=(c>=32&&c<=126);
    return result_432;
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
void* __right_value96 = (void*)0;
char* __result_obj__124;
int len_433;
void* __right_value97 = (void*)0;
char* result_434;
int i_435;
char* __result_obj__125;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_433=strlen(str);
    result_434=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_433+1)), "/usr/local/include/comelang.h", 3896, "char*"));
    for(    i_435=0    ;    i_435<len_433    ;    i_435++    ){
        result_434[i_435]=str[len_433-i_435-1];
    }
    result_434[len_433]=0;
    __result_obj__125 = (char*)come_increment_ref_count(result_434);
    (result_434 = come_decrement_ref_count(result_434, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__125;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__126;
int len_436;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__127;
void* __right_value101 = (void*)0;
char* __result_obj__128;
void* __right_value102 = (void*)0;
char* __result_obj__129;
void* __right_value103 = (void*)0;
char* result_437;
char* __result_obj__130;
    if(    str==((void*)0)    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    len_436=strlen(str);
    if(    head<0    ) {
        head+=len_436;
    }
    if(    tail<0    ) {
        tail+=len_436+1;
    }
    if(    head>tail    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_436    ) {
        tail=len_436;
    }
    if(    head==tail    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    tail-head+1<1    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result_437=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3942, "char*"));
    memcpy(result_437,str+head,tail-head);
    result_437[tail-head]=0;
    __result_obj__130 = (char*)come_increment_ref_count(result_437);
    (result_437 = come_decrement_ref_count(result_437, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__131;
int len_438;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__132;
void* __right_value107 = (void*)0;
char* __result_obj__133;
void* __right_value108 = (void*)0;
char* __result_obj__134;
void* __right_value109 = (void*)0;
char* result_439;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_438=strlen(str);
    if(    head<0    ) {
        head+=len_438;
    }
    if(    tail<0    ) {
        tail+=len_438+1;
    }
    if(    head>tail    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_438    ) {
        tail=len_438;
    }
    if(    head==tail    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    tail-head+1<1    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    result_439=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3985, "char*"));
    memcpy(result_439,str+head,tail-head);
    result_439[tail-head]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_439);
    (result_439 = come_decrement_ref_count(result_439, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__136;
int len_440;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__137;
void* __right_value113 = (void*)0;
char* __result_obj__138;
void* __right_value114 = (void*)0;
char* __result_obj__139;
void* __right_value115 = (void*)0;
char* result_441;
char* __result_obj__140;
    if(    str==((void*)0)    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    len_440=strlen(str);
    if(    head<0    ) {
        head+=len_440;
    }
    if(    tail<0    ) {
        tail+=len_440+1;
    }
    if(    head>tail    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_440    ) {
        tail=len_440;
    }
    if(    head==tail    ) {
        __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__138;
    }
    if(    tail-head+1<1    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_441=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4028, "char*"));
    memcpy(result_441,str+head,tail-head);
    result_441[tail-head]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_441);
    (result_441 = come_decrement_ref_count(result_441, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__141;
va_list args_442;
char* result_443;
int len_444;
void* __right_value117 = (void*)0;
char* __result_obj__142;
void* __right_value118 = (void*)0;
char* result2_445;
char* __result_obj__143;
result_443 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    __builtin_va_start(args_442,msg);
    len_444=vasprintf(&result_443,msg,args_442);
    __builtin_va_end(args_442);
    if(    len_444<0    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result2_445=(char*)come_increment_ref_count(__builtin_string(result_443));
    free(result_443);
    __result_obj__143 = (char*)come_increment_ref_count(result2_445);
    (result2_445 = come_decrement_ref_count(result2_445, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__144;
int len_446;
void* __right_value120 = (void*)0;
char* __result_obj__145;
void* __right_value121 = (void*)0;
char* __result_obj__146;
void* __right_value122 = (void*)0;
char* result_447;
char* __result_obj__147;
    if(    str==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    len_446=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    if(    head<0    ) {
        head+=len_446;
    }
    if(    tail<0    ) {
        tail+=len_446+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    if(    tail>=len_446    ) {
        tail=len_446;
    }
    result_447=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_446-(tail-head)+1)), "/usr/local/include/comelang.h", 4090, "char*"));
    memcpy(result_447,str,head);
    memcpy(result_447+head,str+tail,len_446-tail);
    result_447[len_446-(tail-head)]=0;
    __result_obj__147 = (char*)come_increment_ref_count(result_447);
    (result_447 = come_decrement_ref_count(result_447, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__148;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__148 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__148, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__148;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_448;
struct list_item$1char$ph* prev_it_449;
    it_448=self->head;
    while(    it_448!=((void*)0)    ) {
        prev_it_449=it_448;
        it_448=it_448->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_449, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_453;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_454;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_455;
char* __dec_obj15;
struct list$1char$ph* __result_obj__150;
    if(    self->len==0    ) {
        litem_453=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1097, "struct list_item$1char$ph*"))));
        litem_453->prev=((void*)0);
        litem_453->next=((void*)0);
        __dec_obj13=litem_453->item,
        litem_453->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_453;
        self->head=litem_453;
    }
    else if(    self->len==1    ) {
        litem_454=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1107, "struct list_item$1char$ph*"))));
        litem_454->prev=self->head;
        litem_454->next=((void*)0);
        __dec_obj14=litem_454->item,
        litem_454->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_454;
        self->head->next=litem_454;
    }
    else {
        litem_455=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1117, "struct list_item$1char$ph*"))));
        litem_455->prev=self->tail;
        litem_455->next=((void*)0);
        __dec_obj15=litem_455->item,
        litem_455->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_455;
        self->tail=litem_455;
    }
    self->len++;
    __result_obj__150 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__150;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__149;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_450;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_451;
int i_452;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__151;
    if(    self==((void*)0)    ) {
        __result_obj__149 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4103, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__149, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__149;
    }
    result_450=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4106, "struct list$1char$ph*"))));
    str_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4108, "struct buffer*"))));
    for(    i_452=0    ;    i_452<charp_length(self)    ;    i_452++    ){
        if(        self[i_452]==c        ) {
            list$1char$ph_push_back(result_450,(char*)come_increment_ref_count(__builtin_string(str_451->buf)));
            buffer_reset(str_451);
        }
        else {
            buffer_append_char(str_451,self[i_452]);
        }
    }
    if(    buffer_length(str_451)!=0    ) {
        list$1char$ph_push_back(result_450,(char*)come_increment_ref_count(__builtin_string(str_451->buf)));
    }
    __result_obj__151 = (struct list$1char$ph*)come_increment_ref_count(result_450);
    come_call_finalizer(list$1char$ph$p_finalize, result_450, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_451, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__151;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__152;
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__153;
    __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__153;
}

char* charp_printable(char* str){
int len_456;
void* __right_value136 = (void*)0;
char* result_457;
int n_458;
int i_459;
char c_460;
char* __result_obj__154;
    len_456=charp_length(str);
    result_457=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_456*2+1)), "/usr/local/include/comelang.h", 4140, "char*"));
    n_458=0;
    for(    i_459=0    ;    i_459<len_456    ;    i_459++    ){
        c_460=str[i_459];
        if(        (c_460>=0&&c_460<32)||c_460==127        ) {
            result_457[n_458++]=94;
            result_457[n_458++]=c_460+65-1;
        }
        else {
            result_457[n_458++]=c_460;
        }
    }
    result_457[n_458]=0;
    __result_obj__154 = (char*)come_increment_ref_count(result_457);
    (result_457 = come_decrement_ref_count(result_457, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__155;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_461;
char* p_462;
char* p2_463;
void* __right_value140 = (void*)0;
char* __result_obj__156;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    result_461=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4168, "struct buffer*"))));
    p_462=self;
    while(    (_Bool)1    ) {
        p2_463=strstr(p_462,str);
        if(        p2_463==((void*)0)        ) {
            p2_463=p_462;
            while(            *p2_463            ) {
                p2_463++;
            }
            buffer_append(result_461,p_462,p2_463-p_462);
            break;
        }
        buffer_append(result_461,p_462,p2_463-p_462);
        buffer_append_str(result_461,replace);
        p_462=p2_463+strlen(str);
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_461))));
    come_call_finalizer(buffer_finalize, result_461, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__157;
char* p_464;
void* __right_value142 = (void*)0;
char* __result_obj__158;
void* __right_value143 = (void*)0;
char* __result_obj__159;
void* __right_value144 = (void*)0;
char* __result_obj__160;
    if(    path==((void*)0)    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    p_464=path+strlen(path);
    while(    p_464>=path    ) {
        if(        *p_464==47        ) {
            break;
        }
        else {
            p_464--;
        }
    }
    if(    p_464<path    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_464+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__161;
void* __right_value146 = (void*)0;
char* path2_465;
char* p_466;
void* __right_value147 = (void*)0;
char* __result_obj__162;
void* __right_value148 = (void*)0;
char* __result_obj__163;
void* __right_value149 = (void*)0;
char* __result_obj__164;
    if(    path==((void*)0)    ) {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
    path2_465=(char*)come_increment_ref_count(xbasename(path));
    p_466=path2_465+strlen(path2_465);
    while(    p_466>=path2_465    ) {
        if(        *p_466==46        ) {
            break;
        }
        else {
            p_466--;
        }
    }
    if(    p_466<path2_465    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_465))));
        (path2_465 = come_decrement_ref_count(path2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_465,0,p_466-path2_465))));
        (path2_465 = come_decrement_ref_count(path2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_465 = come_decrement_ref_count(path2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__165;
char* p_467;
void* __right_value151 = (void*)0;
char* __result_obj__166;
void* __right_value152 = (void*)0;
char* __result_obj__167;
void* __right_value153 = (void*)0;
char* __result_obj__168;
    if(    path==((void*)0)    ) {
        __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__165;
    }
    p_467=path+strlen(path);
    while(    p_467>=path    ) {
        if(        *p_467==46        ) {
            break;
        }
        else {
            p_467--;
        }
    }
    if(    p_467<path    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    else {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_467+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__169;
void* __right_value155 = (void*)0;
char* __result_obj__170;
    if(    self    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    else {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__171;
void* __right_value157 = (void*)0;
char* __result_obj__172;
    if(    self    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    else {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__173;
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__174;
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__175;
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__176;
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__178;
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__179;
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__179;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__180;
void* __right_value166 = (void*)0;
char* __result_obj__181;
    if(    self==((void*)0)    ) {
        __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__180;
    }
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__181;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__182;
void* __right_value168 = (void*)0;
char* __result_obj__183;
    if(    self==((void*)0)    ) {
        __result_obj__182 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__182 = come_decrement_ref_count(__result_obj__182, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__182;
    }
    __result_obj__183 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__183 = come_decrement_ref_count(__result_obj__183, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__183;
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
void* __right_value169 = (void*)0;
char* __result_obj__184;
void* __right_value170 = (void*)0;
char* __result_obj__185;
    if(    self==((void*)0)    ) {
        __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__184;
    }
    puts(self);
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__185;
}

char* charp_print(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__186;
void* __right_value172 = (void*)0;
char* __result_obj__187;
    if(    self==((void*)0)    ) {
        __result_obj__186 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__186 = come_decrement_ref_count(__result_obj__186, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__186;
    }
    printf("%s",self);
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__187;
}

char* charp_printf(char* self, ...){
void* __right_value173 = (void*)0;
char* __result_obj__188;
char* msg2_468;
va_list args_469;
void* __right_value174 = (void*)0;
char* __result_obj__189;
msg2_468 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__188 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__188 = come_decrement_ref_count(__result_obj__188, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__188;
    }
    __builtin_va_start(args_469,self);
    vasprintf(&msg2_468,self,args_469);
    __builtin_va_end(args_469);
    printf("%s",msg2_468);
    free(msg2_468);
    __result_obj__189 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__189;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_470;
    for(    i_470=0    ;    i_470<self    ;    i_470++    ){
        block(parent,i_470);
    }
}

