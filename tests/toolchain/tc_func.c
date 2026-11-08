static int module_bias = 7;

int module_add(int left, int right)
{
    return left + right + module_bias - 7;
}

const char* module_message(void)
{
    return "PASS module call\n";
}
