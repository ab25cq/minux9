#include "minux.h"
#include <comelang.h>
            
int main(int argc, char** argv) {
    char buf[16];
    int size = read(0, buf, 3);
    write(1, buf, 3);
    
    exit(0);
}

