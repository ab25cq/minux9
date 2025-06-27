#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
    int pid = fork();

    if(pid == 0) {
        while (1) {
           //*(volatile char*)0x10000000L = 'C';
            write(1, "C", 1);
        }
    }
    else {
        while (1) {
           //*(volatile char*)0x10000000L = 'P';
            write(1, "P", 1);
        }
    }
/*
            char buf[128];
            int fd = open("/a.txt", 0);
            read(fd, buf, 12);
            close(fd);
            buf[12] = '\0';
            write(1, buf, 1);
*/
    
    return 0;
}

