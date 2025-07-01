#include "minux.h"

int main(int argc, char** argv)
{
    char buf[128];
    int fd = open("/d.txt", 0);
    read(fd, buf, 12);
    close(fd);
    char c = buf[0];
    write(1, &c, 1);
//    write(1, buf, 12);
//    write(1, "AAA", 3);
    while(1);
}
