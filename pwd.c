#include "minux.h"

static int ustrlen(const char* s) { int n=0; if(!s) return 0; while(s[n]) n++; return n; }

int main(int argc, char** argv) {
    char buf[128];
    int n = getcwd_user(buf, sizeof(buf));
    if (n < 0) {
        const char* msg = "pwd: getcwd failed\n";
        write(1, msg, ustrlen(msg));
        exit(1);
    }
    // Fallback: if buffer is empty (some older kernels may not fill it),
    // try realpath(".") to resolve from the VFS.
    if (n == 0 || buf[0] == '\0') {
        char rbuf[256];
        if (realpath_user(".", rbuf, sizeof(rbuf)) == 0 && rbuf[0]) {
            // copy back to buf for unified printing
            int i=0; while (rbuf[i] && i < (int)sizeof(buf)-1) { buf[i]=rbuf[i]; i++; }
            buf[i] = '\0';
        } else {
            buf[0] = '/';
            buf[1] = '\0';
        }
    }
    write(1, buf, ustrlen(buf));
    write(1, "\r\n", 2);
    exit(0);
}
