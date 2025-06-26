#include "minux.h"

// hello.c
int main() {
    while(1) {
        write(1, "HELLO WORLDX", 12);
    }
    return 0;
}

int fun() { return 5; }
