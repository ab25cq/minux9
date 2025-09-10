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

// open(2) flags (subset)
#ifndef O_RDONLY
#define O_RDONLY 0
#endif
#ifndef O_WRONLY
#define O_WRONLY 1
#endif
#ifndef O_RDWR
#define O_RDWR 2
#endif
#ifndef O_CREAT
#define O_CREAT  (1<<9)
#endif
#ifndef O_TRUNC
#define O_TRUNC  (1<<10)
#endif
#ifndef O_APPEND
#define O_APPEND (1<<11)
#endif

#define close(fd) ({                                              \
    register long _a0 asm("a0") = (long)(fd);                     \
    register long _a7 asm("a7") = SYS_close;                      \
    asm volatile("ecall"                                          \
                 : "+r"(_a0)                                     \
                 : "r"(_a7)                                      \
                 : "memory");                                    \
    (int)_a0;                                                     \
})

// opendir: open a directory and return fd (or -1)
#define opendir(path) ({                                           \
    register long _a0 asm("a0") = (long)(path);                    \
    register long _a7 asm("a7") = SYS_opendir;                     \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a7)                                       \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// readdir: fetch up to max_entries dirents; returns number filled, 0 (EOF), or -1
#define readdir(fd, dirents_ptr, max_entries) ({                    \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a1 asm("a1") = (long)(dirents_ptr);             \
    register long _a2 asm("a2") = (long)(max_entries);             \
    register long _a7 asm("a7") = SYS_readdir;                     \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                    \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// closedir: close directory fd; returns 0 or -1
#define closedir(fd) ({                                             \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a7 asm("a7") = SYS_closedir;                    \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a7)                                       \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// getcwd: write current directory into user buffer; returns length or -1
#define getcwd_user(buf, size) ({                                    \
    register long _a0 asm("a0") = (long)(buf);                      \
    register long _a1 asm("a1") = (long)(size);                     \
    register long _a7 asm("a7") = SYS_getcwd;                       \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a1), "r"(_a7)                               \
                 : "memory");                                       \
    (int)_a0;                                                       \
})

// chdir: change current process directory; returns 0 or -1
#define chdir(path) ({                                               \
    register long _a0 asm("a0") = (long)(path);                     \
    register long _a7 asm("a7") = SYS_chdir;                        \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a7)                                         \
                 : "memory");                                       \
    (int)_a0;                                                       \
})

// mkdir: create directory at path; returns 0 or -1
#define mkdir(path, mode) ({                                          \
    register long _a0 asm("a0") = (long)(path);                      \
    register long _a1 asm("a1") = (long)(mode);                      \
    register long _a7 asm("a7") = SYS_mkdir;                         \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a1), "r"(_a7)                               \
                 : "memory");                                       \
    (int)_a0;                                                        \
})

// rmdir: remove empty directory at path; returns 0 or -1
#define rmdir(path) ({                                                \
    register long _a0 asm("a0") = (long)(path);                      \
    register long _a7 asm("a7") = SYS_rmdir;                         \
    asm volatile("ecall"                                            \
                 : "+r"(_a0)                                       \
                 : "r"(_a7)                                         \
                 : "memory");                                       \
    (int)_a0;                                                        \
})

// unlink: remove a file (not directory); returns 0 or -1
#define unlink(path) ({                                                \
    register long _a0 asm("a0") = (long)(path);                       \
    register long _a7 asm("a7") = SYS_unlink;                          \
    asm volatile("ecall"                                             \
                 : "+r"(_a0)                                        \
                 : "r"(_a7)                                          \
                 : "memory");                                        \
    (int)_a0;                                                         \
})

// rename: move/rename file or directory
#define rename(oldp,newp) ({                                           \
    register long _a0 asm("a0") = (long)(oldp);                       \
    register long _a1 asm("a1") = (long)(newp);                       \
    register long _a7 asm("a7") = SYS_rename;                          \
    asm volatile("ecall"                                             \
                 : "+r"(_a0)                                        \
                 : "r"(_a1), "r"(_a7)                                 \
                 : "memory");                                        \
    (int)_a0;                                                         \
})

// link: create a hard link newp pointing to oldp
#define link(oldp,newp) ({                                              \
    register long _a0 asm("a0") = (long)(oldp);                        \
    register long _a1 asm("a1") = (long)(newp);                        \
    register long _a7 asm("a7") = SYS_link;                            \
    asm volatile("ecall"                                              \
                 : "+r"(_a0)                                         \
                 : "r"(_a1), "r"(_a7)                                  \
                 : "memory");                                         \
    (int)_a0;                                                          \
})

// symlink: create a symbolic link
#define symlink(target, linkpath) ({                                     \
    register long _a0 asm("a0") = (long)(target);                       \
    register long _a1 asm("a1") = (long)(linkpath);                     \
    register long _a7 asm("a7") = SYS_symlink;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// stat: fill struct stat for path
#define stat(path, stptr) ({                                             \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(stptr);                         \
    register long _a7 asm("a7") = SYS_stat;                              \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// readlink: read symlink target into buf (no NUL), returns bytes copied
#define readlink(path, buf, size) ({                                     \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(buf);                           \
    register long _a2 asm("a2") = (long)(size);                          \
    register long _a7 asm("a7") = SYS_readlink;                          \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// lstat: like stat but does not follow final symlink
#define lstat(path, stptr) ({                                            \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(stptr);                         \
    register long _a7 asm("a7") = SYS_lstat;                             \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// chmod: change file mode
#define chmod(path, mode) ({                                             \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(mode);                          \
    register long _a7 asm("a7") = SYS_chmod;                             \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// chown: change ownership
#define chown(path, uid, gid) ({                                         \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(uid);                           \
    register long _a2 asm("a2") = (long)(gid);                           \
    register long _a7 asm("a7") = SYS_chown;                             \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
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

#define execvp(path, argv) ({                                    \
    register long _a0 asm("a0") = (long)(path);                 \
    register long _a1 asm("a1") = (long)(argv);                 \
    register long _a7 asm("a7") = SYS_execv;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a1), "r"(_a7)                          \
                 : "memory");                                  \
    (int)_a0;                                                   \
})

// execve: exec with environment (envp = array of "KEY=VAL" strings)
#ifndef SYS_execve
#define SYS_execve 100
#endif
#define execve(path, argv, envp) ({                               \
    register long _a0 asm("a0") = (long)(path);                  \
    register long _a1 asm("a1") = (long)(argv);                  \
    register long _a2 asm("a2") = (long)(envp);                  \
    register long _a7 asm("a7") = SYS_execve;                    \
    asm volatile("ecall"                                         \
                 : "+r"(_a0)                                    \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                 \
                 : "memory");                                   \
    (int)_a0;                                                    \
})

#define exit(status) __extension__ ({  \
    register long _a0 asm("a0") = (long)(status);                 \
    register long _a7 asm("a7") = SYS_exit;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                          \
                 : "memory");                                  \
    while(1); \
}) 

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
    
#define clear_proc()                                       \
    ({                                                    \
        register long _num asm("a7") = SYS_clear;         \
        register long _ret asm("a0");                     \
        asm volatile("ecall"                              \
                     : "=r"(_ret)                         \
                     : "r"(_num)                          \
                     : "memory");                         \
        _ret;                                             \
    })
    
#define brk(size) ({                                           \
    register long _a0 asm("a0") = (long)(size);                 \
    register long _a7 asm("a7") = SYS_brk;                    \
    asm volatile("ecall"                                        \
                 : "+r"(_a0)                                   \
                 : "r"(_a7)                                    \
                 : "memory");                                  \
    (int)_a0;                                                   \
})
    
#define __MINUX__ 1

#endif
#define SYS_settimeofday 92
#define SYS_utimes 93
#define SYS_umask 94
#define SYS_gettimeofday 95
#define SYS_getuid 96
#define SYS_getgid 97
#define SYS_setuid 98
#define SYS_setgid 99
// settimeofday: set base epoch seconds used by FS times
#define settimeofday(sec) ({                                            \
    register long _a0 asm("a0") = (long)(sec);                          \
    register long _a7 asm("a7") = SYS_settimeofday;                     \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// utimes: set atime/mtime; pass 0xFFFFFFFF to set to 'now'
#define utimes(path, atime, mtime) ({                                   \
    register long _a0 asm("a0") = (long)(path);                         \
    register long _a1 asm("a1") = (long)(atime);                        \
    register long _a2 asm("a2") = (long)(mtime);                        \
    register long _a7 asm("a7") = SYS_utimes;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// umask: set new umask, return old
#define umask(newmask) ({                                               \
    register long _a0 asm("a0") = (long)(newmask);                      \
    register long _a7 asm("a7") = SYS_umask;                            \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// gettimeofday: returns epoch seconds
#define gettimeofday() ({                                               \
    register long _a7 asm("a7") = SYS_gettimeofday;                     \
    register long _a0 asm("a0") = 0;                                    \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// uid/gid syscalls
#define getuid() ({                                                     \
    register long _a7 asm("a7") = SYS_getuid;                           \
    register long _a0 asm("a0") = 0;                                    \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

#define getgid() ({                                                     \
    register long _a7 asm("a7") = SYS_getgid;                           \
    register long _a0 asm("a0") = 0;                                    \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

#define setuid(uid) ({                                                  \
    register long _a0 asm("a0") = (long)(uid);                          \
    register long _a7 asm("a7") = SYS_setuid;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

#define setgid(gid) ({                                                  \
    register long _a0 asm("a0") = (long)(gid);                          \
    register long _a7 asm("a7") = SYS_setgid;                           \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a7)                                            \
                 : "memory");                                          \
    (int)_a0;                                                           \
})
#define SYS_realpath 101
#define SYS_getlogin 103
#define SYS_isatty 104
// realpath: resolve to canonical absolute path; returns 0 on success
#define realpath_user(path, outbuf, outsz) ({                             \
    register long _a0 asm("a0") = (long)(path);                          \
    register long _a1 asm("a1") = (long)(outbuf);                        \
    register long _a2 asm("a2") = (long)(outsz);                         \
    register long _a7 asm("a7") = SYS_realpath;                          \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a2), "r"(_a7)                        \
                 : "memory");                                          \
    (int)_a0;                                                           \
})

// isatty: return 1 if fd refers to a TTY (stdin/stdout/stderr/tty), else 0
#define isatty(fd) ({                                              \
    register long _a0 asm("a0") = (long)(fd);                      \
    register long _a7 asm("a7") = SYS_isatty;                      \
    asm volatile("ecall"                                           \
                 : "+r"(_a0)                                      \
                 : "r"(_a7)                                       \
                 : "memory");                                     \
    (int)_a0;                                                      \
})

// getlogin: write username into buf; returns length
#define getlogin_user(buf, size) ({                                      \
    register long _a0 asm("a0") = (long)(buf);                           \
    register long _a1 asm("a1") = (long)(size);                          \
    register long _a7 asm("a7") = SYS_getlogin;                          \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})
#define SYS_login 102
// login: authenticate and switch credentials
#define login_user(name, pass) ({                                        \
    register long _a0 asm("a0") = (long)(name);                         \
    register long _a1 asm("a1") = (long)(pass);                         \
    register long _a7 asm("a7") = SYS_login;                            \
    asm volatile("ecall"                                               \
                 : "+r"(_a0)                                          \
                 : "r"(_a1), "r"(_a7)                                   \
                 : "memory");                                          \
    (int)_a0;                                                           \
})
