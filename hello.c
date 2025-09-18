#include "minux_syscall.h"

int main()
{
    write(1, "HELLO WORLD!!\r\n", 15);
    exit(0);
}
