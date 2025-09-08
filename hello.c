#include "minux.h"

int main(int argc, char** argv)
{
    // Use a relative path so it maps to "/x.txt" in the FS
    int fd = open("x.txt", O_CREAT | O_TRUNC | O_WRONLY, 0666);
    if (fd < 0) {
        write(1, "open failed\r\n", 13);
        exit(2);
    }

    int w = write(fd, "XXX\r\n", 5);
    if (w < 0) {
        write(1, "write failed\r\n", 14);
        close(fd);
        exit(3);
    }
    close(fd);

    write(1, "ok\r\n", 4);
    exit(0);
}
