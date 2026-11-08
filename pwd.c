#include "minux.h"
#include "user_helpers.h"

int main(int argc, char** argv)
{
    char buf[256];

    int n = getcwd_user(buf, sizeof(buf));

    if(n < 0) {
        minux_println("pwd: getcwd failed");
        exit(1);
    }

    if(n == 0 || buf[0] == '\0') {
        buf[0] = '/';
        buf[1] = '\0';
        n = 1;
    }

    minux_printn(buf, n);
    minux_print("\n");

    exit(0);
}
