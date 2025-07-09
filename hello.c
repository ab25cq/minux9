#include "minux.h"

int fun() {
    return 3;
}
            
// hello.c
int main() {
/*
    char buf[128];
    int fd = open("/a.txt", 0);
    int ret = read(fd, buf, 12);
    buf[ret] = '\0';
    close(fd);
    write(1, buf, 12);
    exit(1);
*/
    write(1, "HELLO1\r\n", 8);
    exit(1);
}

