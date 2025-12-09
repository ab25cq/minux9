
void putchar(char c)
{
    write(1, &c, 1);
}

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}
