#include <stdint.h>
#include <stdarg.h>
#include "comelang-minux9.h"

void putchar(char c)
{
    write(1, &c, 1);
}

int main() {
    printf("--- Malloc Test Start ---\n");

    printf("1. Allocating 10 bytes...\n");
    char* p1 = malloc(10);
    if (p1 == 0) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n", p1);
    
    printf("2. Allocating 20 bytes...\n");
    char* p2 = malloc(20);
    if (p2 == 0) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n", p2);

    printf("3. Freeing first block...\n");
    free(p1);
    printf("OK.\n");

    printf("4. Allocating 5 bytes (should reuse block)...\n");
    char* p3 = malloc(5);
     if (p3 == 0) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n", p3);

    printf("--- Malloc Test Complete ---\n");
    while(1);

    return 0;
}

