#include "minux.h"

int main(int argc, char** argv)
{
/*
    char buf[128];
    int fd = open("/c.txt", 0);
    read(fd, buf, 13);
    close(fd);
    write(1, buf, 13);
    exit(2);
*/
    write(1, "HELLO3", 6);
    write(1, "\r\n", 2);
    exit(3);
}
