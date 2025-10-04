#include "minux.h"
#include <stdarg.h>
            
// hello.c
int main(int argc, char** argv) {
    if(argc == 1) {
        char buf[32] = { 0 };
        int n;
        while ((n = read(0, buf, 32)) > 0) {
            write(1, buf, n);
        }
    }
    else {
        char buf[32];
        for (int i = 1; i < argc; i++) {
            int fd = open(argv[i], 0, 0);
            if (fd < 0) {
                printf("cat: cannot open %s\n", argv[i]);
                continue;
            }

            int n;
            while ((n = read(fd, buf, sizeof(buf))) > 0) {
                write(1, buf, n);
            }

            if (n < 0) {
                printf("cat: read error %s\n", argv[i]);
            }

            close(fd);
        }

    }
    exit(0);
}
