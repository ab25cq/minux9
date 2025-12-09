#define write(fd, buf, len) ({ asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n", fd, buf, len); len; })

void exit(long status) {
    asm ("li a7, 70\nmv a0, %0\necall\n", status);
}

void putchar(char c)
{
    write(1, &c, 1);
}

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}
