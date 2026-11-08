long write(int fd, const void* buffer, long length);

int main(void)
{
    write(1, "Hello World (C)\n", 16);
    return 0;
}
