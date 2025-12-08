#ifndef MINUX2_H
#define MINUX2_H

void puts(const char *s);

#define SYS_execve 100
#define SYS_execved 199
#define SYS_settimeofday 92
#define SYS_utimes 93
#define SYS_umask 94
#define SYS_gettimeofday 95
#define SYS_getuid 96
#define SYS_getgid 97
#define SYS_setuid 98
#define SYS_setgid 99
#define SYS_lseek 192
#ifndef SEEK_SET
#define SEEK_SET 0
#endif
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif
#ifndef SEEK_END
#define SEEK_END 2
#endif
#define SYS_fstat   210
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
#define SYS_brk 74
#define SYS_clear 75
#define SYS_opendir 76
#define SYS_readdir 77
#define SYS_closedir 78
// add cwd-related syscalls
#define SYS_getcwd 79
#define SYS_chdir 80
#define SYS_mkdir 81
#define SYS_rmdir 82
#define SYS_unlink 83
#define SYS_rename 84
#define SYS_link   85
#define SYS_symlink 86
#define SYS_stat    87
#define SYS_readlink 88
#define SYS_lstat   89
#define SYS_chmod   90
#define SYS_chown   91
#define SYS_sleep 102
#define SYS_tcsetpgrp 103
#define SYS_getpid 105
#define SYS_realpath 101
#define SYS_isatty 104

#define write(fd, buf, len) ({                                       \
    long _ret;                                                       \
    /* Put arguments into the corresponding registers */             \
    register long _a0 asm("a0") = (long)(fd);                        \
    register long _a1 asm("a1") = (long)(buf);                       \
    register long _a2 asm("a2") = (long)(len);                       \
    register long _a7 asm("a7") = SYS_write;                         \
    /* Do ecall; return value comes back in a0 */                    \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                      \
                 : "memory");                                        \
    /* Return it as the statement-expression result */               \
    _ret = _a0;                                                     \
    _ret;                                                           \
})

#endif
