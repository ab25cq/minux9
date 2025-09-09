#include "minux.h"

static int ustrlen(const char* s) { int n=0; if(!s) return 0; while(s[n]) n++; return n; }

int main(int argc, char** argv) {
    char buf[256];

    int n = getcwd_user(buf, sizeof(buf));
    if (n < 0) {
        const char* msg = "pwd: getcwd failed\n";
        write(1, msg, ustrlen(msg));
        exit(1);
    }
    if (n == 0 || buf[0] == '\0') {
        buf[0] = '/';
        buf[1] = '\0';
    }

    write(1, buf, ustrlen(buf));
    write(1, "\n", 1);
    exit(0);
}
