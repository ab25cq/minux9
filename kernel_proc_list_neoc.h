#ifndef KERNEL_PROC_LIST_NEOC_H
#define KERNEL_PROC_LIST_NEOC_H

#define va_end(ap) __builtin_va_end(ap)
#include <neo-c.h>

typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;

#define MAX_OPEN_FILES 32
#define NDIRECT 12
#define PROC_MAX 64

typedef uint64_t pte_t;
typedef pte_t* pagetable_t;

struct context_t {
    uint64_t ra;
    uint64_t sp;
    uint64_t gp;
    uint64_t tp;
    uint64_t t0;
    uint64_t t1;
    uint64_t t2;
    uint64_t t3;
    uint64_t t4;
    uint64_t t5;
    uint64_t t6;
    uint64_t a0;
    uint64_t a1;
    uint64_t a2;
    uint64_t a3;
    uint64_t a4;
    uint64_t a5;
    uint64_t a6;
    uint64_t a7;
    uint64_t s0;
    uint64_t s1;
    uint64_t s2;
    uint64_t s3;
    uint64_t s4;
    uint64_t s5;
    uint64_t s6;
    uint64_t s7;
    uint64_t s8;
    uint64_t s9;
    uint64_t s10;
    uint64_t s11;
    uint64_t mepc;
};

struct sKernelState
{
    struct context_t gYieldContext;
    struct context_t gYieldReturnContext;
    char* gYieldStack;
    uint64_t gYieldUserSatp;
    uint64_t gYieldUserSP;
    uint64_t gYieldUserActiveProc;
};

struct dinode {
    uint16_t type;
    uint16_t major;
    uint16_t minor;
    uint16_t nlink;
    uint32_t size;
    uint32_t mode;
    uint16_t uid;
    uint16_t gid;
    uint32_t atime;
    uint32_t mtime;
    uint32_t ctime;
    uint32_t addrs[NDIRECT + 2];
};

struct file;

struct process_pages
{
    char** process_kalloc_address;
    int num_process_kalloc_address;
};

struct proc {
    struct context_t trapframe;
    struct context_t context;
    struct proc* parent;
    int parent_pid;
    char* stack_top;
    uint64_t vaddr;
    uint64_t memsz;
    uint64_t sz;
    int zombie;
    pagetable_t pagetable;
    char* program;
    int program_size;
    int xstatus;
    struct file* file_table[MAX_OPEN_FILES];
    struct process_pages** process_pages;
    int num_process_pages;
    int debug_;
    int deleted;
    struct proc* next;
    char cwd[128];
    unsigned short umask;
    uint16_t uid;
    uint16_t gid;
    uint16_t pgrp;
    uint16_t supp_gids[8];
    int nsupp;
    char username[32];
};

struct spipe;

struct file {
    enum { FK_STDIN, FK_STDOUT, FK_STDERR, FK_FILE, FK_PIPE, FK_TTY } kind;
    uint32_t inum;
    struct dinode din;
    uint32_t off;
    int used;
    struct spipe* pipe;
    int pipe_used;
    int read_pipe;
    int write_pipe;
    int oflags;
    struct file* free_next;
    struct proc* owner_processes[PROC_MAX];
    int num_owner_process;
};

extern struct proc* gProc[PROC_MAX];
int proc_find_pid(struct proc* p);

#endif
