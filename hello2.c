#include "minux.h"

// hello.c
int main() {
    char buf[16];
/*
    buf[0] = 'O';
    buf[1] = 'K';
    buf[2] = '!';
*/
    read(0, buf, 6);
    write(1, buf, 6);
    exit(2);
}

int fun() { return 5; }
