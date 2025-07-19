#ifndef MINUX_H
#define MINUX_H

typedef int pid_t;

#define SYS_write 64
#define SYS_read 65
#define SYS_open 66
#define SYS_close 67
#define SYS_fork 68
#define SYS_execv 69
#define SYS_exit 70
#define SYS_wait 71
#define SYS_dup2 72
#define SYS_pipe 73


#define write(fd, buf, len) ({                                       \
    long _ret;                                                       \
    /* 引数を対応レジスタにセット */                                \
    register long _a0 asm("a0") = (long)(fd);                        \
    register long _a1 asm("a1") = (long)(buf);                       \
    register long _a2 asm("a2") = (long)(len);                       \
    register long _a7 asm("a7") = SYS_write;                         \
    /* ecall して戻り値は a0 に */                                  \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                      \
                 : "memory");                                        \
    /* statement-expression の結果として返す */                      \
    _ret = _a0;                                                     \
    _ret;                                                           \
})



#define read(fd, buf, len) ({                                      \
    long _ret;                                                     \
    /* 引数を対応するレジスタにセット */                          \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a1 asm("a1") = (long)(buf);                     \
    register long _a2 asm("a2") = (long)(len);                     \
    register long _a7 asm("a7") = SYS_read;                        \
    /* ecall 実行。戻り値は a0 に返ってくる */                     \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                       \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                     \
                 : "memory");                                       \
    /* a0 をローカル変数に退避して statement‐expression の値に */   \
    _ret = _a0;                                                    \
    _ret;                                                          \
})

#define open(path, flags, mode) ({                              \
    register long _a0 asm("a0") = (long)(path);                 \
    register long _a1 asm("a1") = (long)(flags);                \
    register long _a2 asm("a2") = (long)(mode);                 \
    register long _a7 asm("a7") = SYS_open;                     \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                    \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                  \
                 : "memory");                                    \
    /* 戻り値は a0 に上がってくる */                             \
    (int)_a0;                                                   \
})

#define open(path, flags) open(path, flags, 0)

#define close(fd) ({                                              \
    register long _a0 asm("a0") = (long)(fd);                     \
    register long _a7 asm("a7") = SYS_close;                      \
    asm volatile("ecall"                                          \
                 : "+r"(_a0)                                     \
                 : "r"(_a7)                                      \
                 : "memory");                                    \
    (int)_a0;                                                     \
})

   
#define execv(path, argv) ({                                    \
    register long _a0 asm("a0") = (long)(path);                 \
    register long _a1 asm("a1") = (long)(argv);                 \
    register long _a7 asm("a7") = SYS_execv;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a1), "r"(_a7)                          \
                 : "memory");                                  \
    (int)_a0;                                                   \
})

static inline void exit(long status) {
    asm volatile(
        "mv   a0, %0   \n"   // status → a0
        "li   a7, %1   \n"   // SYS_exit → a7
        "ecall         \n"   // システムコール発行
        :
        : "r"(status), "i"(SYS_exit)
        : "a0", "a7", "memory"
    );
    
    while(1);
    __builtin_unreachable();  // exit 後は戻らないのでコンパイラに通知
}

#define wait(status_ptr) ({                                    \
    register long _a0 asm("a0") = (long)(status_ptr);          \
    register long _a7 asm("a7") = SYS_wait;                    \
    asm volatile("ecall"                                       \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                                    \
                 : "memory");                                 \
    (int)_a0;                                                   \
})


#define dup2(oldfd,newfd) ({                                   \
    register long _a0 asm("a0") = (long)(oldfd);                \
    register long _a1 asm("a1") = (long)(newfd);                \
    register long _a7 asm("a7") = SYS_dup2;                     \
    asm volatile("ecall"                                       \
                 : "+r"(_a0)                                   \
                 : "r"(_a1), "r"(_a7)                          \
                 : "memory");                                 \
    (int)_a0;                                                   \
})


#define pipe(fds) ({                                           \
    register long _a0 asm("a0") = (long)(fds);                 \
    register long _a7 asm("a7") = SYS_pipe;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                                    \
                 : "memory");                                  \
    (int)_a0;                                                   \
})

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

#endif
