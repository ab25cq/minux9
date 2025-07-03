#include "minux.h"

int main(int argc, char** argv)
{
    char buf[128];
    int fd = open("/d.txt", 0);
    read(fd, buf, 13);
    close(fd);
    char c = buf[0];
    write(1, &c, 13);
    while(1);
}
