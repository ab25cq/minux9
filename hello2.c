#include "minux.h"

// hello.c
int main() {
    char buf[16];
    read(0, buf, 6);
    write(1, buf, 6);
    write(1, "!", 1);
    exit(2);
}

int fun() { return 5; }
