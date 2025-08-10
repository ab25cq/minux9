#include "minux.h"
#include <stdarg.h>

int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}
            
// hello.c
int main(int argc, char** argv) {
    if(argc == 2) {
        write(1, argv[1], strlen(argv[1]));
        write(1, "\r\n", 2);
    
        exit(0);
    }
    else {
        exit(0);
    }
}

