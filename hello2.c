#include "minux.h"

// hello.c
int main() {
    //*(volatile char*)0x10000000L = '6';
    //*(volatile char*)0x10000000L = 'O';
    char buf[128];
    int fd = open("/c.txt", 0);
    read(fd, buf, 12);
    close(fd);
    write(1, buf, 12);
    while(1);
    
    return 0;
}

int fun() { return 5; }
