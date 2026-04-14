#include "minux_neoc.h"

int main(int argc, char** argv)
{
    char buf[256];

    var n = minux_getcwd_user(buf, sizeof(buf));

    if(n < 0) {
        var msg = "pwd: getcwd failed\n";
        minux_write(1, msg, strlen(msg));
        minux_exit(1);
    }

    if(n == 0 || buf[0] == '\0') {
        buf[0] = '/';
        buf[1] = '\0';
        n = 1;
    }

    minux_write(1, buf, n);
    minux_write(1, "\n", 1);

    minux_exit(0);
}
