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
            
int main(int argc, char** argv) {
    char buf[16];
    int size = read(0, buf, 3);
    write(1, buf, 3);
    
    exit(0);
}

