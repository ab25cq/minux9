#include "minux.h"
#include <stdarg.h>

void putchar(char c)
{
    char d = c;
    write(1, &d, 1);
}

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

int gA = 123;
            
// hello.c
int main(int argc, char** argv) {
    if(argc == 1) {
        char buf[32];
        int size = read(0, buf, 32);
        write(1, buf, size);
    }
    else {
        int fd = open(argv[1], 0, 0);
        char buf[32];
        int size = read(fd, buf, 32);
        close(fd);
    
        write(1, buf, size);
    }
    
    exit(0);
}

