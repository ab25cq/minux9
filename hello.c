#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
    int pid = fork();

    if(pid == 0) {
        write(1, "C", 1);
        while (1) ;
    }
    else {
        char buf[128];
        int fd = open("/a.txt", 0);
        read(fd, buf, 12);
        close(fd);
        write(1, buf, 12);

        while(1);
    }
    
    return 0;
}

