long write(int fd, const void* buffer, long length);
int module_add(int left, int right);
int asm_add(int left, int right);
const char* module_message(void);

int main(void)
{
    if(module_add(19, 23) != 42) return 1;
    if(asm_add(20, 22) != 42) return 2;
    write(1, module_message(), 17);
    write(1, "PASS ASM call\n", 14);
    return 0;
}
