#include <stdio.h>
#include <stdlib.h>

int ext_var = 11111;

void alloc4(int **p, int x1, int x2, int x3, int x4) {
  *p = (int *)malloc(4 * sizeof(int));

  (*p)[0] = x1;
  (*p)[1] = x2;
  (*p)[2] = x3;
  (*p)[3] = x4;
}

void func1() { printf("func1 called\n"); }

void func2(int x, int y) { printf("func2 called %d + %d = %d\n", x, y, x + y); }

void printnum(int x) { printf("printnum: %d\n", x); }
