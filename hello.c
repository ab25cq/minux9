#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
    int pid = fork();
    
    if(pid == 0) {
        while (1) {
            write(1, "CHILD", 5);
        }
    }
    else {
        while (1) {
            char buf[128];
            int fd = open("/a.txt", 0);
            read(fd, buf, 12);
            close(fd);
            buf[12] = '\0';
            write(1, buf, 1);
        }
    }
    
    return 0;
}

