#ifndef USER_HELPERS_H
#define USER_HELPERS_H
#include "minux.h"
static int minux_strlen(const char* s)
{
    int n = 0;

    if(!s) {
        return 0;
    }

    while(s[n]) {
        n++;
    }

    return n;
}

static bool minux_string_is_empty(const char* s)
{
    return !s || s[0] == '\0';
}

static bool minux_streq(const char* left, const char* right)
{
    int i = 0;

    if(!left || !right) {
        return left == right;
    }

    while(left[i] && right[i]) {
        if(left[i] != right[i]) {
            return false;
        }

        i++;
    }

    return left[i] == right[i];
}

static void minux_print(const char* s)
{
    int len = minux_strlen(s);
    write(1, s, len);
}

static void minux_printn(const char* s, int len)
{
    if(s && len > 0) {
        write(1, s, len);
    }
}

static void minux_println(const char* s)
{
    minux_print(s);
    write(1, "\n", 1);
}

static bool minux_is_short_option(const char* arg, char option)
{
    return arg && arg[0] == '-' && arg[1] == option && arg[2] == '\0';
}

static int minux_dirent_name_len(struct dirent* ent)
{
    int len = DIRSIZ;

    while(len > 0 && ent->name[len-1] == '\0') {
        len--;
    }

    return len;
}

#endif
