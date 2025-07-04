#include "minux.h"

// hello.c
int main() {
    write(1, "HELLO2", 6);
    write(1, "\r\n", 2);
    exit(2);
/*
    char buf[128];
    int fd = open("/b.txt", 0);
    int ret = read(fd, buf, 12);
    buf[ret] = '\0';
    close(fd);
    write(1, buf, 12);
    exit(2);
*/
}

int fun() { return 5; }
