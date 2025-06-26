#include "minux.h"

// hello.c
int main() {
//    user_puts("H");
//    *(volatile char*)0x10000000L = 'H';
//    while (1) {
//        *(volatile char*)0x10000000L = 'H';
//        write(1, "H", 1);
        //puts("UHI");
//    }
    while(1) {
//        write(1, "H", 1);
        *(volatile char*)0x10000000L = 'H';
    }
    return 0;
}

int fun() { return 5; }
