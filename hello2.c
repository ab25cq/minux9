#include "minux.h"

// hello.c
int main() {
//   *(volatile char*)0x10000000L = '3';
while(1);
    while(1);
    while(1) {
       //write(1, "O", 1);
       *(volatile char*)0x10000000L = 'O';
    }
    return 0;
}

int fun() { return 5; }
