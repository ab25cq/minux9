//#include "minux9.h"

#define write(fd, buf, len) ({ asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n", fd, buf, len); len; })

void exit(long status);

int main(int argc, char** argv) {
    write(1, "HELLO WORLD\r\n", 13);
    asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n"
         
         , 1, "HELLO WORLD\r\n", 13);
    exit(8);
}

