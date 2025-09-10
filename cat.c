#include "minux.h"
#include <stdarg.h>
            

static int cat_fd(int fd)
{
    char buf[4096];
    for (;;) {
        int n = read(fd, buf, sizeof(buf));
        if (n < 0) {
            return -1;           // read error
        }
        if (n == 0) {
            break;               // EOF
        }
        // handle partial writes
        int off = 0;
        while (off < n) {
            int w = write(1, buf + off, n - off);
            if (w <= 0) return -1;
            off += w;
        }
    }
    return 0;
}

int main(int argc, char** argv)
{
    if (argc == 1) {
        // no args: read from stdin
        (void)cat_fd(0);
        exit(0);
    }

    // cat each file in order
    for (int i = 1; i < argc; i++) {
        int fd = open(argv[i], 0, 0);
        if (fd < 0) {
            // optional: print error to stderr (fd=2)
            // const char* msg = "cat: cannot open file\n";
            // write(2, msg, 24);
            continue;
        }
        (void)cat_fd(fd);
        close(fd);
    }
    exit(0);
}
