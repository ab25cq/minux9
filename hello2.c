#include "minux.h"

// hello.c
int main() {
    write(1, "HELLO2\r\n", 8);
    exit(2);
}

int fun() { return 5; }
