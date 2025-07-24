#include <stdint.h>
#include <stdarg.h>
#include "minux.h"

void putchar(char c)
{
    char buf[2];
    buf[0] = c;
    buf[1] = '\0';
    write(1, buf, 1);
}

void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}

#define BUF_SIZE 64

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}


int main(void) {
    int fd[2];
    pid_t pid1, pid2;
    char buf[4];
    int status;

    pipe(fd);
    
    pid1 = fork();
    if (pid1 == 0) {
        close(fd[0]);
        dup2(fd[1], 1);
        close(fd[1]);
        
        char* argv[] = { "/hello.elf", "aaa", "bbb", (void*)0 };

        execv("/hello.elf", (void*)argv);
        exit(6);
    }
    

    pid2 = fork();
    if (pid2 == 0) {
        dup2(fd[0], 0);
        close(fd[1]);               // 書き側は不要
        close(fd[0]);
        
        char* argv[] = { "/hello2.elf", "aaa", "bbb", (void*)0 };

        execv("/hello2.elf", (void*)argv);
        exit(6);
    }
    
    status = 0;
    wait(&status);
    status = 0;
    wait(&status);

    // 親プロセスはパイプを閉じて子の終了を待つ
    close(fd[0]);
    close(fd[1]);
puts("END");
    while(1);

    return 0;
}

/*
int main(void) {
    char buf[BUF_SIZE];
    long n;
    char buf2[2];
    pid_t pid;
    char* argv[16];
    int argc;
    int status;
    
    for (;;) {
        write(1, "\r\n", 2);
        // プロンプト
        write(1, "$ ", 2);
        
        // キーボードから１行読み込み（改行込み）
        
        n = 0;
        while(1) {
            read(0, buf2, 1);
            write(1, buf2, 1);
            
            buf[n] = buf2[0];
            n++;
            
            if(buf2[0] == '\r') {
                break;
            }
            if(buf2[0] == '\n') {
                break;
            }
        }
        
        buf[n-1] = '\0';
        write(1, "\r\n", 2);
        
        if(buf[0] == '\0') {
            continue;
        }
        
        // fork して
        pid = fork();
        if (pid < 0) {
            write(2, "fork failed\n", 12);
            continue;
        }
        
        if (pid == 0) {
            execv(buf, argc);
            exit(6);
        }
        else {
            status = 0;
            pid = wait(&status);
            printf("\r\nwait status %d\r\n", status);
        }
    }
    
    return 0;
}
*/
