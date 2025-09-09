#include <stdint.h>
#include <stdarg.h>
#include "minux.h"

int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

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

int xisalpha(char c)
{
    int result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

int xisblank(char c)
{
    return c == ' ' || c == '\t';
}

int xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

// minimal helper: check if a path is an existing directory
static int isdir(const char* path) {
    int fd = opendir(path);
    if (fd >= 0) { closedir(fd); return 1; }
    return 0;
}


/*
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
    while(1);

    return 0;
}
*/

#define MAX_ARGV 3
#define MAX_ARG 16
#define MAX_COMMAND 5

#define PATH_MAX 32

struct sCommand
{
    char argv[MAX_ARGV][MAX_ARG];
    int num_arg;
    char redirect_file[PATH_MAX];
    int redirect_append;
};

int run_command(int n, struct sCommand* commands, int num_commands)
{
    int pipes[2] = { 0, 0 };
    
    struct sCommand* command = commands + n;
    
    if(n == num_commands-1) {
        char* argv[MAX_ARGV];
        int j;
        for(j=0; j<command->num_arg; j++) {
           argv[j] = command->argv[j];
        }
        argv[j] = (void*)0;
        
        if(command->redirect_file[0] != '\0') {
            int fd;
            if(command->redirect_append) {
                fd = open(command->redirect_file, O_APPEND|O_WRONLY|O_CREAT, 0644);
            }
            else {
                fd = open(command->redirect_file, O_WRONLY|O_CREAT|O_TRUNC, 0644);
            }
            
            if(fd < 0) {
                puts("REDIRECT WRITE FILE CAN'T BE OPENED");
                exit(1);
            }
            
            dup2(fd, 1);
            close(fd);
        }
        
        execvp(argv[0], argv);
        exit(127);
    }
    else {
        pipe(pipes);
        
        int pid = fork();
        
        if(pid == 0) {
            dup2(pipes[0], 0);
            close(pipes[0]);
            close(pipes[1]);
            run_command(n+1, commands, num_commands);
        }
        else {
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);
            
            char* argv[MAX_ARGV];
            int j;
            for(j=0; j<command->num_arg; j++) {
               argv[j] = command->argv[j];
            }
            argv[j] = (void*)0;
            
            execvp(argv[0], argv);
            exit(127);
        }
    }
    
    return 1;
}

int main(void) {
    char buf[BUF_SIZE];
    long n;
    char buf2[2];
    pid_t pid;
    int argc;
    int status;
    
    struct sCommand commands[MAX_COMMAND];
    int num_commands;
    int num_arg;
    char* p;
    
    for (;;) {
        //write(1, "\r\n", 2);
        // プロンプト
        write(1, "$ ", 2);
        
        // キーボードから１行読み込み（改行込み）
        n = 0;
        while(1) {
            read(0, buf2, 1);
            write(1, buf2, 1);
            
            // バックスペース or DEL?
            if ((buf2[0] == '\b' || buf2[0] == 127) && n > 0) {
                // バッファ末尾をひとつ取り除く
                n--;
                buf[n] = '\0';
                // 画面上の文字を消す: "\b \b"
                write(1, "\b \b", 3);
            }
            else if(buf2[0] == '\r') {
                break;
            }
            else if(buf2[0] == '\n') {
                break;
            }
            else {
                buf[n] = buf2[0];
                n++;
            }
        }
        buf[n] = '\0';
     
//        strncpy(buf, "cat a.txt | cat | cat", BUF_SIZE);
        
        write(1, "\r\n", 2);
        
        if(buf[0] == '\0') {
            continue;
        }
        
        num_commands = 0;
        num_arg = 0;
        p = buf;
        n = 0;
        
        commands[num_commands].redirect_file[0] = '\0'; 
        
        while(1) {
            if(*p == '|') {
                // finalize pending token before pipe
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                commands[num_commands].num_arg = num_arg;
            
                num_commands++;
                n = 0;
                num_arg = 0;
                // reset redirect target for the next command
                commands[num_commands].redirect_file[0] = '\0';
                
                if(num_commands >= MAX_COMMAND) {
                    puts("ERR MAX COMMAND");
                    break;
                }
            }
            else if(*p == '>' && *(p+1) != '>') {
                // finalize pending token before redirection
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                    n = 0;
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                
                int i = 0;
                // allow common filename characters
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    commands[num_commands].redirect_file[i++] = *p++;
                    
                    if(i-1 >= PATH_MAX) {
                        puts("FILE NAME IS TOO LONG");
                        exit(2);
                    }
                }
                commands[num_commands].redirect_file[i] = '\0';
                commands[num_commands].redirect_append = 0;
                
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == '>' && *(p+1) == '>') {
                // finalize pending token before redirection
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                    n = 0;
                }
                // consume both '>' characters for append redirection
                p += 2;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                
                int i = 0;
                // allow common filename characters
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    commands[num_commands].redirect_file[i++] = *p++;
                    
                    if(i-1 >= PATH_MAX) {
                        puts("FILE NAME IS TOO LONG");
                        exit(2);
                    }
                }
                commands[num_commands].redirect_file[i] = '\0';
                commands[num_commands].redirect_append = 1;
                
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == ' ' || *p == '\t') {
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                if(n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    n = 0;
                    if(num_arg >= MAX_ARGV) {
                        puts("ARG NUM ERROR");
                        break;
                    }
                }
                
            }
            else if(*p == '\0') {
                // Finalize the last token only if there is one
                if (n > 0) {
                    commands[num_commands].argv[num_arg][n] = '\0';
                    num_arg++;
                    n = 0;
                }

                commands[num_commands].num_arg = num_arg;
                num_commands++;
                break;
            }
            else {
                commands[num_commands].argv[num_arg][n] = *p;
                p++;
                n++;
                
                if(n >= MAX_ARG) {
                    puts("ERR ARG NUM");
                    break;
                }
            }
        }
    
        // built-in: cd [DIR]
        if (num_commands == 1 && commands[0].num_arg >= 1 && strcmp(commands[0].argv[0], "cd") == 0) {
            const char* target = "/";
            if (commands[0].num_arg >= 2 && commands[0].argv[1][0]) {
                target = commands[0].argv[1];
            }
            int rc = chdir(target);
            if (rc < 0) {
                puts("cd: failed\n");
            }
            continue;
        }

        // built-in: mkdir [-p] DIR [DIR...]
        if (num_commands == 1 && commands[0].num_arg >= 1 && strcmp(commands[0].argv[0], "mkdir") == 0) {
            if (commands[0].num_arg < 2) { puts("mkdir: missing operand\n"); continue; }
            int argi = 1; int parents = 0;
            if (commands[0].num_arg >= 2 && strcmp(commands[0].argv[1], "-p") == 0) { parents = 1; argi = 2; }
            if (commands[0].num_arg <= argi) { puts("mkdir: missing operand\n"); continue; }

            for (int ai = argi; ai < commands[0].num_arg; ai++) {
                const char* path = commands[0].argv[ai];
                if (!path || !path[0]) { puts("mkdir: invalid path\n"); continue; }
                if (!parents) {
                    int rc = mkdir(path, 0755);
                    if (rc < 0) puts("mkdir: failed\n");
                } else {
                    // mkdir -p behavior
                    char accum[256]; int ap = 0; accum[0] = '\0';
                    const char* s = path;
                    if (*s == '/') { accum[ap++] = '/'; accum[ap] = '\0'; while (*s=='/') s++; }
                    while (*s) {
                        char name[64]; int ni=0;
                        while (s[0] && s[0] != '/' && ni < (int)sizeof(name)-1) { name[ni++] = *s++; }
                        name[ni] = '\0';
                        while (*s == '/') s++;
                        if (ni == 0) continue;
                        if (!(ap==1 && accum[0]=='/')) { if (ap < (int)sizeof(accum)-1) accum[ap++] = '/'; }
                        for (int k=0; k<ni && ap < (int)sizeof(accum)-1; k++) accum[ap++] = name[k];
                        accum[ap] = '\0';
                        if (isdir(accum)) continue;
                        if (mkdir(accum, 0755) < 0) { puts("mkdir: failed\n"); break; }
                    }
                }
            }
            continue;
        }

        pid = fork();
        
        if(pid == 0) {
            run_command(0, commands, num_commands);
        }
        else {
            for(int k=0; k<num_commands; k++) {
                int status;
                wait(&status);
            }
        }
    }
    
    return 0;
}
