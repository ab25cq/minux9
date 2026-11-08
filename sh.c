#include "minux.h"
#include <stdint.h>

static const char* s_strchr(const char* s, int ch) {
    while (*s) { if (*s == (char)ch) return s; s++; }
    return NULL;
}

static bool sh_string_is_empty(const char* s)
{
    return s == NULL || s[0] == '\0';
}

#define BUF_SIZE 64
#define MAX_TOKEN 64
#define SH_PATH_MAX 32

static char g_cmdline[BUF_SIZE];

static void remember_cmdline(const char* command)
{
    int i = 0;

    while(command[i] && i < BUF_SIZE-1) {
        g_cmdline[i] = command[i];
        i++;
    }

    g_cmdline[i] = '\0';
}

static void build_cmdline_env(char* envbuf, int envbuf_size)
{
    int i = 0;
    const char* prefix = "MINUX_CMDLINE=";

    if(envbuf_size <= 0) {
        return;
    }

    for(int k=0; prefix[k] && i < envbuf_size-1; k++) {
        envbuf[i++] = prefix[k];
    }

    for(int k=0; g_cmdline[k] && i < envbuf_size-1; k++) {
        envbuf[i++] = g_cmdline[k];
    }

    envbuf[i] = '\0';
}

static bool make_rooted_command_path(const char* command, char* abuf, int abuf_size)
{
    int i = 0;

    if(sh_string_is_empty(command) || s_strchr(command, '/') || abuf_size < 2) {
        return false;
    }

    abuf[0] = '/';

    while(command[i] && i < abuf_size-2) {
        abuf[i+1] = command[i];
        i++;
    }

    abuf[i+1] = '\0';

    return true;
}

static void exec_minux_program(char** argv, char* envbuf, int debug_)
{
    char* envp[2];

    envp[0] = envbuf;
    envp[1] = NULL;

    if(debug_) {
        execved(argv[0], argv, envp);
    }
    else {
        execve(argv[0], argv, envp);
    }
}

static void exec_minux_program_with_root_fallback(char** argv, char* envbuf, int debug_)
{
    char abuf[64];

    exec_minux_program(argv, envbuf, debug_);

    if(make_rooted_command_path(argv[0], abuf, sizeof(abuf))) {
        argv[0] = abuf;
        exec_minux_program(argv, envbuf, debug_);
    }

    exit(126);
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

static int isdir(const char* path) {
    int fd = opendir(path);
    if (fd >= 0) { closedir(fd); return 1; }
    return 0;
}

/* A command line has at most BUF_SIZE tokens or pipeline stages. */
struct shell_list {
    uintptr_t items[BUF_SIZE];
    int length;
};

static struct shell_list* shell_list_new(void)
{
    struct shell_list* list = calloc(1, sizeof(*list));
    if(!list) exit(1);
    return list;
}

static void shell_list_add(struct shell_list* list, uintptr_t item)
{
    if(list->length >= BUF_SIZE) exit(1);
    list->items[list->length++] = item;
}

struct sCommand
{
    struct shell_list* argv_list;
    char redirect_file[SH_PATH_MAX];
    int redirect_append;
};

static struct shell_list* get_command_argv_list(struct sCommand* command)
{
    if(command == NULL) {
        return NULL;
    }

    if(command->argv_list == NULL) {
        command->argv_list = shell_list_new();
    }

    return (struct shell_list*)command->argv_list;
}

static struct sCommand* new_command(void)
{
    struct sCommand* command = calloc(1, sizeof(struct sCommand));

    if(command == NULL) {
        return NULL;
    }

    command->argv_list = shell_list_new();
    command->redirect_file[0] = '\0';
    command->redirect_append = 0;

    return command;
}

static int command_argc(struct sCommand* command)
{
    struct shell_list* argv_list = get_command_argv_list(command);

    if(argv_list == NULL) {
        return 0;
    }

    return argv_list->length;
}

static char* command_argv_at(struct sCommand* command, int index)
{
    struct shell_list* argv_list = get_command_argv_list(command);

    if(argv_list == NULL || index < 0 || index >= argv_list->length) {
        return NULL;
    }

    return (char*)argv_list->items[index];
}

static int append_token_to_command(struct sCommand* command, char* token, int len)
{
    struct shell_list* argv_list = get_command_argv_list(command);

    if(argv_list == NULL) {
        return -1;
    }

    char* arg = malloc(len + 1);

    if(arg == NULL) {
        return -1;
    }

    memcpy(arg, token, len);
    arg[len] = '\0';

    shell_list_add(argv_list, (uintptr_t)((long)arg));

    return 0;
}

static void free_command(struct sCommand* command)
{
    if(command == NULL) {
        return;
    }

    struct shell_list* argv_list = get_command_argv_list(command);

    if(argv_list != NULL) {
        int argc = argv_list->length;

        for(int i=0; i<argc; i++) {
            char* arg = (char*)argv_list->items[i];

            if(arg != NULL) {
                free(arg);
            }
        }

        free(argv_list);
    }

    free(command);
}

static void free_command_list(struct shell_list* commands)
{
    if(commands == NULL) {
        return;
    }

    int num_commands = commands->length;

    for(int i=0; i<num_commands; i++) {
        free_command((struct sCommand*)commands->items[i]);
    }

    free(commands);
}

static char** make_exec_argv(struct sCommand* command)
{
    int argc = command_argc(command);
    char** argv = calloc(argc + 1, sizeof(char*));

    if(argv == NULL) {
        return NULL;
    }

    for(int i=0; i<argc; i++) {
        argv[i] = command_argv_at(command, i);
    }

    argv[argc] = NULL;

    return argv;
}

int run_command(int n, struct shell_list* commands, int debug_, int shell_pgrp)
{
    int pipes[2] = { 0, 0 };
    int num_commands = commands->length;
    struct sCommand* command = (struct sCommand*)commands->items[n];
    int argc = command_argc(command);
    char** argv = make_exec_argv(command);

    if(argv == NULL) {
        exit(1);
    }

    if(n == num_commands-1) {
        tcsetpgrp(0, shell_pgrp);

        char envbuf[BUF_SIZE + 16];

        build_cmdline_env(envbuf, sizeof(envbuf));

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

        exec_minux_program_with_root_fallback(argv, envbuf, debug_);
    }
    else {
        pipe(pipes);

        int pid = fork();

        if(pid == 0) {
            close(pipes[1]);
            dup2(pipes[0], 0);
            close(pipes[0]);
            run_command(n+1, commands, debug_, shell_pgrp);
        }
        else {
            tcsetpgrp(0, shell_pgrp);
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);

            char envbuf[BUF_SIZE + 16];

            build_cmdline_env(envbuf, sizeof(envbuf));

            exec_minux_program_with_root_fallback(argv, envbuf, debug_);
        }
    }

    return 1;
}

int main(int argc, char** argv) {
    char buf[BUF_SIZE];
    char linebuf[BUF_SIZE];
    char token[MAX_TOKEN];

    printf("[sh argc=%d]\r\n", argc);

    long n;
    pid_t pid;
    int status;

    char* p;
    int m = 0;
    int i;

    buf[0] = '\0';

    int run_once = 0;
    const char* script_path = NULL;
    FILE* script_fp = NULL;
    int debug_ = 0;
    for(i=1; i<argc; i++) {
        if(strcmp(argv[i], "-c") == 0) {
            run_once = 1;
        }
        else if(run_once) {
            strncat(buf, argv[i], BUF_SIZE);
            strncat(buf, " ", BUF_SIZE);
        }
        else if(script_path == NULL) {
            script_path = argv[i];
        }
    }

    if(script_path) {
        script_fp = fopen(script_path, "r");
        if(script_fp == NULL) {
            printf("sh: can't open %s\r\n", script_path);
            exit(1);
        }
    }

    for (;;) {
        char* cmdline = NULL;
        debug_ = 0;

        if(run_once == 0 && script_fp == NULL) {
            cmdline = readline("$ ");
            if(cmdline == NULL) {
                exit(0);
            }

            if(cmdline[0] == '!') {
                debug_ = 1;
                strncpy(buf, cmdline + 1, BUF_SIZE);
            }
            else {
                strncpy(buf, cmdline, BUF_SIZE);
            }
        }
        else if(script_fp != NULL) {
            if(fgets(linebuf, sizeof(linebuf), script_fp) == NULL) {
                fclose(script_fp);
                exit(0);
            }

            strncpy(buf, linebuf, BUF_SIZE);

            int len = strlen(buf);
            while(len > 0 && (buf[len-1] == '\n' || buf[len-1] == '\r')) {
                buf[--len] = '\0';
            }

            char* head = buf;
            while(*head == ' ' || *head == '\t') {
                head++;
            }
            if(*head == '#') {
                buf[0] = '\0';
            }
            else if(head != buf) {
                memmove(buf, head, strlen(head) + 1);
            }
        }

        remember_cmdline(buf);

        if(buf[0] == '\0') {
            if(cmdline) {
                free(cmdline);
            }
            continue;
        }

        if(run_once || script_fp != NULL) {
            printf("[sh mode run_once=%d script=%d buf=%s]\r\n", run_once, script_fp != NULL, buf);
        }

        struct shell_list* commands = shell_list_new();
        struct sCommand* current = new_command();
        int token_len = 0;
        int parse_error = 0;

        if(current == NULL) {
            if(cmdline) {
                free(cmdline);
            }
            exit(1);
        }

        shell_list_add(commands, (uintptr_t)((long)current));

        p = buf;
        n = 0;

        while(1) {
            if(*p == '|') {
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }

                current = new_command();
                if(current == NULL) {
                    parse_error = 1;
                    break;
                }
                shell_list_add(commands, (uintptr_t)((long)current));
            }
            else if(*p == '>' && *(p+1) != '>') {
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                p++;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }

                int ri = 0;
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    if(ri >= SH_PATH_MAX-1) {
                        puts("FILE NAME IS TOO LONG");
                        parse_error = 1;
                        break;
                    }
                    current->redirect_file[ri++] = *p++;
                }
                if(parse_error) {
                    break;
                }
                current->redirect_file[ri] = '\0';
                current->redirect_append = 0;

                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == '>' && *(p+1) == '>') {
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                p += 2;
                while(*p == ' ' || *p == '\t') {
                    p++;
                }

                int ri = 0;
                while(xisalnum(*p) || *p == '.' || *p == '_' || *p == '-' || *p == '/') {
                    if(ri >= SH_PATH_MAX-1) {
                        puts("FILE NAME IS TOO LONG");
                        parse_error = 1;
                        break;
                    }
                    current->redirect_file[ri++] = *p++;
                }
                if(parse_error) {
                    break;
                }
                current->redirect_file[ri] = '\0';
                current->redirect_append = 1;

                while(*p == ' ' || *p == '\t') {
                    p++;
                }
            }
            else if(*p == ' ' || *p == '\t') {
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                if(token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
            }
            else if(*p == '\0') {
                if (token_len > 0) {
                    if(append_token_to_command(current, token, token_len) < 0) {
                        parse_error = 1;
                        break;
                    }
                    token_len = 0;
                }
                break;
            }
            else {
                token[token_len++] = *p;
                p++;

                if(token_len >= MAX_TOKEN-1) {
                    puts("ERR ARG NUM");
                    parse_error = 1;
                    break;
                }
            }
        }

        if(parse_error || commands->length == 0) {
            free_command_list(commands);
            if(cmdline) {
                free(cmdline);
            }
            continue;
        }

        struct sCommand* first_command = (struct sCommand*)commands->items[0];

        if (commands->length == 1 && command_argc(first_command) >= 1 && strcmp(command_argv_at(first_command, 0), "cd") == 0) {
            const char* target = "/";
            if (command_argc(first_command) >= 2 && command_argv_at(first_command, 1)[0]) {
                target = command_argv_at(first_command, 1);
            }
            int rc = chdir(target);
            if (rc < 0) {
                puts("cd: failed\n");
            }
            free_command_list(commands);
            if(cmdline) {
                free(cmdline);
            }
            continue;
        }

        int shell_pgrp = getpid();
        tcsetpgrp(0, shell_pgrp);

        pid = fork();

        if(pid == 0) {
            tcsetpgrp(0, shell_pgrp);
            run_command(0, commands, debug_, shell_pgrp);
        }
        else {
            for(int k=0; k<commands->length; k++) {
                int status;
                if(commands->length == 1) waitdirect(&status);
                else wait(&status);
                printf("=> %d\r\n", status);
            }
        }

        free_command_list(commands);

        if(cmdline) {
            free(cmdline);
        }

        if(run_once) {
            exit(0);
        }
    }

    exit(0);
}
