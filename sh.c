#include <stdint.h>
#include <stdarg.h>
#include "minux.h"

static const char* s_strchr(const char* s, int ch) {
    while (*s) { if (*s == (char)ch) return s; s++; }
    return NULL;
}

#define BUF_SIZE 64

static char g_cmdline[BUF_SIZE];

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



#define MAX_ARGV 32
#define MAX_ARG 32
#define MAX_COMMAND 16

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

        char envbuf[BUF_SIZE + 16];
        int ei = 0;
        const char* prefix = "MINUX_CMDLINE=";
        for (int k=0; prefix[k]; k++) envbuf[ei++] = prefix[k];
        for (int k=0; g_cmdline[k] && ei < (int)sizeof(envbuf)-1; k++) envbuf[ei++] = g_cmdline[k];
        envbuf[ei] = '\0';
        char* envp[2]; envp[0] = envbuf; envp[1] = 0;
        
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
        
        // Try exec as given; if no slash and fails, try "/cmd"
        execve(argv[0], argv, envp);
        if (argv[0] && argv[0][0] && !s_strchr(argv[0], '/')) {
            char abuf[64];
            abuf[0] = '/';
            int i=0; while (argv[0][i] && i < (int)sizeof(abuf)-2) { abuf[i+1] = argv[0][i]; i++; }
            abuf[i+1] = '\0';
            argv[0] = abuf; // safe: we exit on failure anyway
            execve(argv[0], argv, envp);
        }
        exit(127);
    }
    else {
        pipe(pipes);

        int pid = fork();

        if(pid == 0) {
            close(pipes[1]);
            dup2(pipes[0], 0);
            close(pipes[0]);
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
            
            char envbuf[BUF_SIZE + 16];
            int ei = 0;
            const char* prefix = "MINUX_CMDLINE=";
            for (int k=0; prefix[k]; k++) envbuf[ei++] = prefix[k];
            for (int k=0; g_cmdline[k] && ei < (int)sizeof(envbuf)-1; k++) envbuf[ei++] = g_cmdline[k];
            envbuf[ei] = '\0';
            char* envp[2]; envp[0] = envbuf; envp[1] = 0;

            execve(argv[0], argv, envp);
            if (argv[0] && argv[0][0] && !s_strchr(argv[0], '/')) {
                char abuf[64];
                abuf[0] = '/';
                int i=0; while (argv[0][i] && i < (int)sizeof(abuf)-2) { abuf[i+1] = argv[0][i]; i++; }
                abuf[i+1] = '\0';
                argv[0] = abuf;
                execve(argv[0], argv, envp);
            }
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
    int m = 0;
    
    for (;;) {
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
        
        
        write(1, "\r\n", 2);
        // save whole command line into global for MINUX_CMDLINE
        int gi = 0; while (buf[gi] && gi < BUF_SIZE-1) { g_cmdline[gi] = buf[gi]; gi++; } g_cmdline[gi] = '\0';
        
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

        pid = fork();
        
        if(pid == 0) {
            run_command(0, commands, num_commands);
        }
        else {
            for(int k=0; k<num_commands; k++) {
                int status;
                wait(&status);
                printf("=> %d\r\n", status);
            }
        }
    }
    
    return 0;
}
