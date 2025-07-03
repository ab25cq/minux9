#ifndef MINUX_H
#define MINUX_H

typedef int pid_t;

#define SYS_write 64
#define SYS_read 65
#define SYS_open 66
#define SYS_close 67
#define SYS_fork 68
#define SYS_execv 69

// user-space 側
static inline long write(long fd, const void *buf, long size) {
    long ret;
    asm volatile(
        "mv   a0, %1    \n"  // fd → a0
        "mv   a1, %2    \n"  // buf → a1
        "mv   a2, %3    \n"  // size → a2
        "li   a7, %4    \n"  // SYS_write → a7
        "ecall          \n"  // システムコール発行
        "mv   %0, a0    \n"  // 戻り値 a0 → ret
        : "=r"(ret)         // 出力オペランド
        : "r"(fd),          // %1
          "r"(buf),         // %2
          "r"(size),        // %3
          "i"(SYS_write)    // %4 = システムコール番号
        : "a0","a1","a2","a7","memory"
    );
    return ret;
}

// user-space 側
static inline long read(long fd, void *buf, long size) {
    long ret;
    asm volatile(
        "mv   a0, %2    \n"  // fd → a0
        "mv   a1, %3    \n"  // buf → a1
        "mv   a2, %4    \n"  // size → a2
        "li   a7, %5    \n"  // SYS_read → a7
        "ecall          \n"  // システムコール発行
        "mv   %0, a0    \n"  // 戻り値 a0 → ret
        : "=r"(ret)         // %0 = 出力オペランド
        : "0"(ret),         // %1 = 同じレジスタ（ダミー）
          "r"(fd),          // %2 = fd
          "r"(buf),         // %3 = buf
          "r"(size),        // %4 = size
          "i"(SYS_read)     // %5 = システムコール番号
        : "a0", "a1", "a2", "a7", "memory"
    );
    return ret;
}

// user-space 側
static inline int open(const char *path, int oflag) {
    int ret;
    asm volatile(
        "mv  a0, %2      \n"  // path → a0
        "mv  a1, %3      \n"  // oflag → a1
        "li  a7, %4      \n"  // SYS_open → a7
        "ecall           \n"  // syscall
        "mv  %0, a0      \n"  // 戻り値 a0 → ret
        : "=r"(ret)           // %0 = 出力 (ret)
        : "0"(ret),           // %1 = 同じレジスタに一時退避（不要ですが慣例的に入れます）
          "r"(path),          // %2 = path
          "r"(oflag),         // %3 = oflag
          "i"(SYS_open)       // %4 = syscall 番号
        : "a0", "a1", "a7", "memory"
    );
    return ret;
}

// user-space 側
static inline int close(long fd) {
    int ret;
    asm volatile(
        "mv   a0, %1    \n"  // fd → a0
        "li   a7, %2    \n"  // SYS_close → a7
        "ecall          \n"  // システムコール発行
        "mv   %0, a0    \n"  // 戻り値 a0 → ret
        : "=r"(ret)          // 出力オペランド
        : "r"(fd),           // %1
          "i"(SYS_close)     // %2 = システムコール番号
        : "a0","a7","memory"
    );
    return ret;
}

// 戻り値を取るバージョン
#define fork()                                        \
    ({                                                    \
        register long _num asm("a7") = SYS_fork;          \
        register long _ret asm("a0");                     \
        asm volatile("ecall"                              \
                     : "=r"(_ret)                         \
                     : "r"(_num)                          \
                     : "memory");                         \
        _ret;                                             \
    })


// user-space 側
static inline int execv(char *path, char **argv, int argc) {
    int ret;
    asm volatile(
        "mv   a0, %1    \n"  // path → a0
        "mv   a1, %2    \n"  // argv → a1
        "mv   a2, %3    \n"  // argc → a2
        "li   a7, %4    \n"  // SYS_execv → a7
        "ecall          \n"  // システムコール発行
        "mv   %0, a0    \n"  // 戻り値 a0 → ret
        : "=r"(ret)          // 出力オペランド
        : "r"(path),         // %1
          "r"(argv),         // %2
          "r"(argc),         // %3
          "i"(SYS_execv)     // %4
        : "a0","a1","a2","a7","memory"
    );
    return ret;
}

static inline int exit(int status) {
    while(1);
}

#endif
