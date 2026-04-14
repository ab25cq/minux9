#ifndef MINUX_NEOC_H
#define MINUX_NEOC_H

#define va_end(ap) __builtin_va_end(ap)
#include <neo-c.h>

unsigned int sleep(unsigned int seconds);
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

#define T_DIR 1
#define DIRSIZ 14

struct dirent {
    uint16_t inum;
    char name[DIRSIZ];
};

struct stat {
    uint16_t type;
    uint16_t nlink;
    uint32_t size;
    uint32_t inum;
    uint32_t mode;
    uint16_t uid;
    uint16_t gid;
    uint32_t atime;
    uint32_t mtime;
    uint32_t ctime;
};

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
#define O_CREAT (1<<9)
#endif
#ifndef O_TRUNC
#define O_TRUNC (1<<10)
#endif
#ifndef O_APPEND
#define O_APPEND (1<<11)
#endif

long minux_write(int fd, const void* buf, size_t len);
long minux_read(int fd, void* buf, size_t len);
int minux_open(const char* path, int flags, int mode);
int minux_close(int fd);
void minux_exit(int status);
int minux_execv(const char* path, char** argv);
int minux_wait(int* status_ptr);
int minux_dup2(int oldfd, int newfd);
int minux_pipe(int* fds);
int minux_fork(void);
int minux_getpid(void);
int minux_opendir(const char* path);
int minux_readdir(int fd, struct dirent* dirents_ptr, int max_entries);
int minux_closedir(int fd);
int minux_getcwd_user(char* buf, int size);
int minux_mkdir(const char* path, int mode);
int minux_rmdir(const char* path);
int minux_stat(const char* path, struct stat* stptr);
int minux_utimes(const char* path, unsigned int atime, unsigned int mtime);

#endif
