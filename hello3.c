#include "minux.h"

int main(int argc, char** argv)
{
    char buf[128];
    int fd = open("/d.txt", 0);
    read(fd, buf, 13);
    close(fd);
    write(1, buf, 13);
    while(1);
}
