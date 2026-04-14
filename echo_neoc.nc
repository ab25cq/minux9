#include "minux_neoc.h"

int main(int argc, char** argv)
{
    if(argc == 2) {
        var arg = argv[1];

        minux_write(1, arg, strlen(arg));
        minux_write(1, "\r\n", 2);
    }

    minux_exit(0);
}
