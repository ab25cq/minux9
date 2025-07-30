#include <comelang.h>
#include "minux.h"

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

// hello.c
int main(int argc, char** argv) {
/*
    if(argc < 2) exit(2);
    
    char* word = argv[1];
    buffer*% buf = new buffer();
    while(1) {
*/
        char buf2[256];
        int size = read(0, buf2, 3);
        buf2[size] ='\0';
        
        puts(buf2);
        
/*
        if(size <= 0) {
            break;
        }
        
        buf.append_str(buf2);
    }
    puts(buf.to_string());
*/
    exit(2);
}

