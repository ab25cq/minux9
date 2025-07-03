#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
    int pid = fork();
    char buf2[4];
    buf2[0] = 'c';

    if(pid == 0) {
        execv("/hello3.elf", (void*)0, 0);
        while(1);
    }
    else {
        char buf[128];
        int fd = open("/b.txt", 0);
        int ret = read(fd, buf, 12);
        buf[ret] = '\0';
        close(fd);
        write(1, buf, 12);
        fd = open("/a.txt", 0);
        ret = read(fd, buf, 12);
        buf[ret] = '\0';
        close(fd);
        while(1);
    }
    
    return 0;
}

