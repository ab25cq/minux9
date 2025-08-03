#include "minux.h"
#include "comelang.h"

int main() {
    char*% a = new char[4];
    strncpy(a, "ABC", 4);
    
    puts(a);
    
    char*% b = new char[4];
    strncpy(b, "QAB", 4);
    
    puts(b);
    
    exit(1);

    return 0;
}

