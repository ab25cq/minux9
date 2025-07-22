# 0 "main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4

# 1 "/usr/include/stdc-predef.h" 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
# 56 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
# 0 "<command-line>" 2
# 1 "main.c"
# 1 "/usr/local/include/comelang.h" 1 3
# 22 "/usr/local/include/comelang.h" 3
///////////////////////////////////////////////////////////////////////////
// PICO 
///////////////////////////////////////////////////////////////////////////


using comelang;

typedef void*% any;
typedef char*% string;

# 1 "/usr/local/include/comelang-baremetal.h" 1 3



# 1 "./stdint.h" 1 3



// 符号付き整数型
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

// 符号なし整数型
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

// 最小幅保証整数型（任意の型に一致）
typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

// 高速整数型（最低限）
typedef int64_t int_fast8_t;
typedef int64_t int_fast16_t;
typedef int64_t int_fast32_t;
typedef int64_t int_fast64_t;

typedef uint64_t uint_fast8_t;
typedef uint64_t uint_fast16_t;
typedef uint64_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

// ポインタサイズに依存する整数型（RISC-V 64bit = 64bit）
typedef long intptr_t;
typedef unsigned long uintptr_t;

// サイズに関するマクロ
# 5 "/usr/local/include/comelang-baremetal.h" 2 3
# 1 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2025 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 60 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type,
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 90 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 6 "/usr/local/include/comelang-baremetal.h" 2 3

extern char _end[]; // first address after kernel.
                   // defined by kernel.ld.

using comelang;

typedef unsigned long size_t;
typedef long ptrdiff_t;



void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
extern void puts(const char* s);

extern char _end[]; // heap start
static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

void* sbrk(ptrdiff_t incr) {
    if (heap_end == 0)
        heap_end = (char*)&_end;

    if (heap_end + incr >= heap_limit) {
        return (void*)-1;
    }

    void* prev = heap_end;
    heap_end += incr;
    return prev;
}

typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

mem_block_t *free_list = ((void*)0);

uniq void *malloc(size_t size) {
    if (size == 0) {
        return ((void*)0);
    }

    if (size % 8 != 0) {
        size += 8 - (size % 8);
    }
    size += sizeof(mem_block_t);

    mem_block_t *current = free_list;
    mem_block_t *prev = ((void*)0);

    while (current != ((void*)0)) {
        if (current->size >= size) {
            if (prev == ((void*)0)) {
                free_list = current->next;
            } else {
                prev->next = current->next;
            }
            return (void *)(current + 1);
        }
        prev = current;
        current = current->next;
    }

    mem_block_t *new_mem = (mem_block_t *)sbrk(size);
    if (new_mem == (void *)-1) {
        return ((void*)0);
    }

    new_mem->size = size;
    new_mem->next = ((void*)0);
    return (void *)(new_mem + 1);
}

uniq void *calloc(size_t nmemb, size_t size) {
    size_t total_size = nmemb * size;
    if (total_size == 0) {
        return ((void*)0);
    }

    void *ptr = malloc(total_size);
    if (ptr != ((void*)0)) {
        memset(ptr, 0, total_size);
    }
    return ptr;
}

uniq void free(void *ptr) {
    if (ptr == ((void*)0)) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
}

uniq char* strdup(const char* s) {
    char* s2 = s;
    size_t len = strlen(s2) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s2, len);
    return p;
}

uniq int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

uniq char* strstr(const char* haystack, const char* needle) {
    if (!*needle)
        return (char*)haystack;

    for (; *haystack; haystack++) {
        const char* h = haystack;
        const char* n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n) // needle 
            return (char*)haystack;
    }

    return ((void*)0);
}

uniq void* memset(void *dst, int c, unsigned int n) {
    char *cdst = (char *) dst;
    int i;
    for(i = 0; i < n; i++){
        cdst[i] = c;
    }
    return dst;
}

uniq int memcmp(const void *v1, const void *v2, unsigned int n) {
    const unsigned char *s1, *s2;

    s1 = v1;
    s2 = v2;
    while(n-- > 0){
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++, s2++;
    }

    return 0;
}

uniq void* memmove(void *dst, const void *src, unsigned int n) {
  const char *s;
  char *d;

  if(n == 0)
    return dst;

  s = src;
  d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0)
      *--d = *--s;
  } else
    while(n-- > 0) {
      *d++ = *s++;
    }

  return dst;
}

uniq void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

uniq int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (unsigned char)*p - (unsigned char)*q;
}

uniq char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

uniq int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

uniq char* strncat(char* dest, const char* src, size_t n) {
    char* d = dest;

    // dest 
    while (*d) d++;

    //  n  src null 
    while (n-- && *src) {
        *d++ = *src++;
    }

    *d = '\0';

    return dest;
}


// 自前実装の strtok
// s が NULL でなければ、s の先頭から検索を始める。
// s が NULL の場合は、前回の呼び出し時の位置から続きのトークンを返す。
// delim に含まれるいずれかの文字で文字列を区切り、次のトークンを返す。
// トークンがなくなったら NULL を返す。
uniq char *strtok(char *s, const char *delim) {
    static char *next; // 次のトークン探索開始位置を保持
    char *start;
    char *p;

    // 呼び出し時に s が非 NULL なら、new string の検索を開始
    if (s != ((void*)0)) {
        next = s;
    }

    // 直前で末尾に達していれば NULL を返す
    if (next == ((void*)0)) {
        return ((void*)0);
    }

    // 1) 先頭の区切り文字をスキップ
    start = next;
    while (*start != '\0') {
        // delim に含まれるかどうか調べる
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*start == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (!is_delim) {
            break;
        }
        start++;
    }

    // 終端まで区切り文字しかなかった → もうトークンはない
    if (*start == '\0') {
        next = ((void*)0);
        return ((void*)0);
    }

    // 2) トークンの終端を見つける
    p = start;
    while (*p != '\0') {
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*p == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (is_delim) {
            break;
        }
        p++;
    }

    // 3) トークン終端を '\0' に置き換え、next を次回呼び出し用にセット
    if (*p == '\0') {
        // 文字列の末尾に達したので、次回以降 s=NULL にして呼べば再び NULL が返る
        next = ((void*)0);
    } else {
        // 区切り文字を '\0' に置し、次の検索開始位置を p+1 にする
        *p = '\0';
        next = p + 1;
    }

    // トークンの先頭を返す
    return start;
}

uniq void exit(int n) {
    while(1);
}

uniq char* itoa(char* buf, unsigned long val_, int base, int is_signed) {
    char* p = buf;
    char tmp[32];
    int i = 0;
    int negative = 0;

    if (base < 2 || base > 16) {
        *p = '\0';
        return p;
    }

    if (is_signed && (long)val_ < 0) {
        negative = 1;
        val_ = (unsigned long)(-(long)val_);
    }

    do {
        int digit = val_ % base;
        tmp[i++] = (digit < 10) ? '0' + digit : 'a' + digit - 10;
        val_ /= base;
    } while (val_);

    if (negative)
        *p++ = '-';

    while (i--)
        *p++ = tmp[i];
    *p = '\0';
    return buf;
}

uniq int vasprintf(char** out, const char* fmt, va_list ap) {
    char out2[512];
    char* p = out2;
    const char* s;
    char buf[32];
    unsigned long remaining = sizeof(out2);

    for (; *fmt && remaining > 1; fmt++) {
        if (*fmt != '%') {
            *p++ = *fmt;
            remaining--;
            continue;
        }

        fmt++; // skip '%'
        switch (*fmt) {
        case 'd':
            itoa(buf, __builtin_va_arg(ap,int), 10, 1);
            s = buf;
            break;
        case 'u':
            itoa(buf, __builtin_va_arg(ap,unsigned int), 10, 0);
            s = buf;
            break;
        case 'x':
            itoa(buf, __builtin_va_arg(ap,unsigned int), 16, 0);
            s = buf;
            break;
        case 's':
            s = __builtin_va_arg(ap,const char*);
            if (!s) s = "(null)";
            break;
        case 'c':
            buf[0] = (char)__builtin_va_arg(ap,int);
            buf[1] = '\0';
            s = buf;
            break;
        case 'p':
            strncpy(buf, "0x", 32);
            itoa(buf + 2, (unsigned long)(uintptr_t)__builtin_va_arg(ap,void*), 16, 0);
            s = buf;
            break;
        case '%':
            buf[0] = '%';
            buf[1] = '\0';
            s = buf;
            break;
        default:
            buf[0] = '%';
            buf[1] = *fmt;
            buf[2] = '\0';
            s = buf;
            break;
        }

        while (*s && remaining > 1) {
            *p++ = *s++;
            remaining--;
        }
    }

    *p = '\0';
    *out = strdup(out2);
    return p - out2;
}

uniq int snprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    __builtin_c23_va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        __builtin_va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = __builtin_va_arg(ap,const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, __builtin_va_arg(ap,int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)__builtin_va_arg(ap,int), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)__builtin_va_arg(ap,int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)__builtin_va_arg(ap,void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, __builtin_va_arg(ap,long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    __builtin_va_end(ap);
    return p - out;
}

uniq int vsnprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    __builtin_c23_va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        __builtin_va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = __builtin_va_arg(ap,const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, __builtin_va_arg(ap,int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)__builtin_va_arg(ap,int), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)__builtin_va_arg(ap,int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)__builtin_va_arg(ap,void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, __builtin_va_arg(ap,long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    __builtin_va_end(ap);
    return p - out;
}

// putcharは環境依存で外部定義
extern void putchar(char c);

uniq void printint(int val_, int base, int sign) {
    char buf[33];
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

uniq void printlong(unsigned long val_, int base, int sign) {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

uniq void printlonglong(unsigned long long val_, int base, int sign) {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

uniq int printf(const char* fmt, ...) {
    va_list ap;
    __builtin_c23_va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++;

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = __builtin_va_arg(ap,unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = __builtin_va_arg(ap,unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = __builtin_va_arg(ap,long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = __builtin_va_arg(ap,long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = __builtin_va_arg(ap,int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = __builtin_va_arg(ap,unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)__builtin_va_arg(ap,void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = __builtin_va_arg(ap,const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)__builtin_va_arg(ap,int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    __builtin_va_end(ap);
    return 0;
}

uniq void* alloc_from_pages(size_t size)
{
    void* result = null;



    size = (size + 7 & ~0x7);


    result = calloc(1, size);

    return result;
}

uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
{
    if(gComeDebugLib) {
        void* result = alloc_from_pages(size + sizeof(sMemHeader));

        sMemHeader* it = result;

        it->allocated = 177783;

        it->size = size + sizeof(sMemHeader);
        it->free_next = ((void*)0);

        come_push_stackframe(sname, sline, 0);

        if(gNumComeStackFrame < 16) {
            int i;
            for(i=0; i<gNumComeStackFrame; i++) {
                it.sname[i] = gComeStackFrameSName[i];
                it.sline[i] = gComeStackFrameSLine[i];
                it.id[i] = gComeStackFrameID[i];
            }
        }
        else {
            int i;
            for(i=0; i<16; i++) {
                it.sname[i] = gComeStackFrameSName[gNumComeStackFrame -1 - i];
                it.sline[i] = gComeStackFrameSLine[gNumComeStackFrame -1 - i];
                it.id[i] = gComeStackFrameID[gNumComeStackFrame -1 - i];
            }
        }

        come_pop_stackframe();

        it->next = gAllocMem;
        it->prev = null;

        it->class_name = class_name;

        if(gAllocMem) {
            gAllocMem->prev = it;
        }

        gAllocMem = it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeader);
    }
    else {
        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));

        sMemHeaderTiny* it = result;

        it->allocated = 177783;

        it->class_name = class_name;

        it->sname = sname;
        it->sline = sline;

        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = ((void*)0);

        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;

        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }

        gAllocMem = (sMemHeader*)it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeaderTiny);
    }
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

            sMemHeader* prev_it = it->prev;
            sMemHeader* next_it = it->next;

            if(gAllocMem == it) {
                gAllocMem = next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

            free(it);

            gNumFree++;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;

            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            free(it);

            gNumFree++;
        }
    }
}

////////////////////////////////////////////////////////////
// PICO 
////////////////////////////////////////////////////////////
# 1027 "/usr/local/include/comelang-baremetal.h" 3
/*
////////////////////////////////////////////////////////////
// COME MUTEX 
////////////////////////////////////////////////////////////

using comelang;

struct come_mutex<T>
{
    T value;
    mutex_t mutex;
    bool lock;
};

impl come_mutex<T>
{
    come_mutex<T>*% initialize(come_mutex<T>*% self, T value) {
        mutex_init(&self.mutex);
        self.value = value;
        return self;
    }
    
    T~ lock(come_mutex<T>* self) {
        mutex_enter_blocking(&self.mutex);
        self.lock = true;
        
        return self.value;
    }
    void unlock(come_mutex<T>* self) {
        if(self.lock) {
            mutex_exit(&self.mutex);
        }
    }
    
    void on_drop(come_mutex<T>* self) {
        self.unlock();
    }
}

uniq mutex_t gComeHeapMutex = MUTEX_INITIALIZER;

output {#include <stdatomic.h>}

typedef struct {
    _Atomic int locked;
} mutex_t;

void mutex_init(mutex_t *mutex) {
    atomic_store(&mutex->locked, 0);
}

void mutex_enter_blocking(mutex_t *mutex) {
    while (1) {
        int expected = 0;
        if (atomic_compare_exchange_weak(&mutex->locked, &expected, 1))
            break;
        __asm__ volatile("nop");  // or yield() or wfi
    }
}

void mutex_exit(mutex_t *mutex) {
    atomic_store(&mutex->locked, 0);
}

#define MUTEX_INITIALIZER { 0 }
*/

uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    inherit(sname, sline, id);
}

uniq void come_pop_stackframe() version 2
{
    inherit();
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    inherit(sname, sline);
}

uniq void stackframe() version 2
{
    inherit();
}

uniq string come_get_stackframe() version 2
{
    string result = inherit();

    return result;
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    void* result = inherit(count, size, sname, sline, class_name);

    return result;
}

uniq void come_free(void* mem) version 2
{
    inherit(mem);
}
# 33 "/usr/local/include/comelang.h" 2 3
# 71 "/usr/local/include/comelang.h" 3
//////////////////////////////
/// exception
//////////////////////////////

struct buffer
{
    char*% buf;
    int len;
    int size;
};

uniq buffer*% buffer*::initialize(buffer*% self);
uniq void buffer*::finalize(buffer* self);
uniq buffer*% buffer*::clone(buffer* self);
uniq bool buffer*::equals(buffer* left, buffer* right);
uniq buffer* buffer*::append_str(buffer* self, char* mem);
uniq buffer* buffer*::append(buffer* self, char* mem, size_t size);
uniq string xsprintf(char* msg, ...);
uniq string char*::to_string(char* self);
uniq string int::to_string(int self);
uniq unsigned int bool::get_hash_key(bool value);
uniq unsigned int _Bool::get_hash_key(bool value);
uniq unsigned int char::get_hash_key(char value);
uniq unsigned int short::get_hash_key(short int value);
uniq unsigned int int::get_hash_key(int value);
uniq unsigned int long::get_hash_key(long value);
uniq unsigned int size_t::get_hash_key(size_t value);
uniq unsigned int float::get_hash_key(float value);
uniq unsigned int double::get_hash_key(double value);
uniq unsigned int char*::get_hash_key(char* value);
uniq unsigned int string::get_hash_key(char* value);
uniq unsigned int void*::get_hash_key(void* value);
uniq string char*::substring(char* str, int head, int tail);
uniq buffer* buffer*::append_format(buffer* self, char* msg, ...);
uniq string __builtin_string(char* str);
uniq string buffer*::to_string(buffer* self);
uniq string char*::to_string(char* self);
uniq string double::to_string(double self);
uniq string float::to_string(float self);
uniq string size_t::to_string(size_t self);
uniq string long::to_string(long self);
uniq string int::to_string(int self);
uniq string short::to_string(short self);
uniq string char::to_string(char self);
uniq string bool::to_string(bool self);
uniq string _Bool::to_string(bool self);
uniq bool string::equals(char* self, char* right);


uniq char* gComeStackFrameSName[128];
uniq int gComeStackFrameSLine[128];
uniq int gComeStackFrameID[128];
uniq int gNumComeStackFrame = 0;

uniq char* gComeStackFrameBuffer = ((void*)0);

uniq void come_push_stackframe(char* sname, int sline, int id)
{
    if(gNumComeStackFrame < 128) {
        gComeStackFrameSName[gNumComeStackFrame] = sname; // const string
        gComeStackFrameSLine[gNumComeStackFrame] = sline;
        gComeStackFrameID[gNumComeStackFrame] = id;

        gNumComeStackFrame++;
    }
}

uniq void come_pop_stackframe()
{
    if(gNumComeStackFrame > 0) {
        gNumComeStackFrame--;
    }
}

uniq void come_save_stackframe(char* sname, int sline)
{
    buffer*% buf = new buffer();
    buf.append_format("%s %d\n", sname, sline);
    for(int i=gNumComeStackFrame-2; i>=0; i--) {
        buf.append_format("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }

    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer = strdup(buf.to_string());
}

uniq void stackframe()
{
    for(int i=gNumComeStackFrame-1; i>=0; i--) {
        printf("%s %d #%d\n", gComeStackFrameSName[i], gComeStackFrameSLine[i], gComeStackFrameID[i]);
    }
}

uniq string come_get_stackframe()
{
    return string(gComeStackFrameBuffer);
}

uniq void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

record uniq bool die(char* msg)
{
    perror(msg);
    stackframe();
    exit(4);

    return false;
}

//////////////////////////////
/// heap
//////////////////////////////
struct sMemHeaderTiny
{
    size_t size;
    int allocated; //ALLOCATED_MAGIC_NUM
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    size_t size;
    int allocated; /// ALLOCATED_MAGIC_NUM 
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;

    char* sname[16];
    int sline[16];
    int id[16];

    char* class_name;
};

uniq sMemHeader* gAllocMem;

uniq void* gComeResultObject = ((void*)0);
bool gComeGCLib;

uniq bool gComeMallocLib = false;
uniq bool gComeDebugLib = false;
uniq bool gComeGCLib = false;

uniq int gNumAlloc = 0;
uniq int gNumFree = 0;
# 242 "/usr/local/include/comelang.h" 3
struct sHeapPage
{
    char** mPages;
    int mSizePages;

    char* mTop;
    int mCurrentPages;

    sMemHeaderTiny* mFreeMem[4096];
};

uniq struct sHeapPage gHeapPages;

uniq void come_heap_init(int come_malloc, int come_debug, int come_gc)
{
    gComeMallocLib = come_malloc;
    gComeDebugLib = come_debug
    gComeGCLib = come_gc;

/*
#ifdef ENABLE_GC
    if(gComeGCLib) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
#endif
*/

    gComeStackFrameBuffer = ((void*)0);
    memset(gComeStackFrameSName, 0, sizeof(char*)*128);
    memset(gComeStackFrameSLine, 0, sizeof(int)*128);
    memset(gComeStackFrameID, 0, sizeof(int)*128);

    gHeapPages.mSizePages = 4;

    gHeapPages.mPages = calloc(1, sizeof(char**)*gHeapPages.mSizePages);
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        gHeapPages.mPages[i] = calloc(1, sizeof(char)*4096);
    }

    gHeapPages.mTop = gHeapPages.mPages[0];
    gHeapPages.mCurrentPages = 0;

    memset(gHeapPages.mFreeMem, 0, sizeof(sMemHeaderTiny*)*4096);

    gAllocMem = ((void*)0);
}

uniq void come_heap_final()
{
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }

    if(gComeGCLib) {
/*
#ifdef ENABLE_GC
        //GC_gcollect();
#endif
*/
    }
    else if(gComeDebugLib) {
        sMemHeader* it = gAllocMem;
        int n = 0;
        while(it) {
            n++;

            bool flag = false;
            printf("#%d ", n);
            if(it->class_name) {
                printf("%p (%s): ", (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name);
            }
            for(int i=0; i<16; i++) {
                if(it->sname[i]) {
                    printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
                    flag = true;
                }
            }
            if(flag) {
                puts("");
            }
            it = it->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n", n, gNumAlloc, gNumFree);
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)gAllocMem;
        int n = 0;
        while(it) {
            n++;
            if(it->class_name) {
                printf("#%d %p (%s) %s %d\n", n, (char*)it + sizeof(sMemHeader) + sizeof(size_t) + sizeof(size_t), it->class_name, it->sname , it->sline);
            }
            it = it->next;
        }
        if(n > 0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n", n, gNumAlloc, gNumFree);
        }
    }
    for(int i=0; i<gHeapPages.mSizePages; i++) {
        free(gHeapPages.mPages[i]);
    }
    free(gHeapPages.mPages);
}
# 507 "/usr/local/include/comelang.h" 3
uniq void* alloc_from_pages(size_t size)
{
    void* result = null;



    size = (size + 7 & ~0x7);

    result = calloc(1, size);

    return result;
}

uniq void come_free_mem_of_heap_pool(void* mem)
{
    if(mem) {
        if(gComeDebugLib) {
            sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(sMemHeader));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

            sMemHeader* prev_it = it->prev;
            sMemHeader* next_it = it->next;

            if(gAllocMem == it) {
                gAllocMem = next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

     free(it);

            gNumFree++;
        }
        else {
            sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(sMemHeaderTiny));

            if(it->allocated != 177783) {
                return;
            }

            it->allocated = 0;

            sMemHeaderTiny* prev_it = it->prev;
            sMemHeaderTiny* next_it = it->next;

            if(gAllocMem == it) {
                gAllocMem = (sMemHeader*)next_it;

                if(gAllocMem) {
                    gAllocMem->prev = null;
                }
            }
            else {
                if(prev_it) {
                    prev_it->next = next_it;
                }
                if(next_it) {
                    next_it->prev = prev_it;
                }
            }

            size_t size = it->size;

            free(it);

            gNumFree++;
        }
    }
}


uniq void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0, char* class_name="")
{
    if(gComeDebugLib) {
        void* result = alloc_from_pages(size + sizeof(sMemHeader));

        sMemHeader* it = result;

        it->allocated = 177783;

        it->size = size + sizeof(sMemHeader);
        it->free_next = ((void*)0);

        come_push_stackframe(sname, sline, 0);

        if(gNumComeStackFrame < 16) {
            int i;
            for(i=0; i<gNumComeStackFrame; i++) {
                it.sname[i] = gComeStackFrameSName[i];
                it.sline[i] = gComeStackFrameSLine[i];
                it.id[i] = gComeStackFrameID[i];
            }
        }
        else {
            int i;
            for(i=0; i<16; i++) {
                it.sname[i] = gComeStackFrameSName[gNumComeStackFrame -1 - i];
                it.sline[i] = gComeStackFrameSLine[gNumComeStackFrame -1 - i];
                it.id[i] = gComeStackFrameID[gNumComeStackFrame -1 - i];
            }
        }

        come_pop_stackframe();

        it->next = gAllocMem;
        it->prev = null;

        it->class_name = class_name;

        if(gAllocMem) {
            gAllocMem->prev = it;
        }

        gAllocMem = it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeader);
    }
    else {
        void* result = alloc_from_pages(size + sizeof(sMemHeaderTiny));

        sMemHeaderTiny* it = result;

        it->allocated = 177783;

        it->class_name = class_name;

        it->sname = sname;
        it->sline = sline;

        it->size = size + sizeof(sMemHeaderTiny);
        it->free_next = ((void*)0);

        it->next = (sMemHeaderTiny*)gAllocMem;
        it->prev = null;

        if(gAllocMem) {
            ((sMemHeaderTiny*)gAllocMem)->prev = it;
        }

        gAllocMem = (sMemHeader*)it;

        gNumAlloc++;

        return (char*)result + sizeof(sMemHeaderTiny);
    }
}


uniq char* come_dynamic_typeof(void* mem)
{
    if(gComeDebugLib) {
        sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));

        if(it->allocated != 177783) {
            printf("invalid heap object(%p)(1)\n", it);
            exit(2);
        }

        return it->class_name;
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));

        if(it->allocated != 177783) {
            printf("invalid heap object(%p)(2)\n", it);
            exit(2);
        }

        return it->class_name;
    }
}

uniq void come_print_heap_info(void* mem)
{
    if(gComeDebugLib) {
        sMemHeader* it = (sMemHeader*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeader));

        if(it->allocated != 177783) {
            return;
        }

        printf("%p ", mem);
        if(it->class_name) {
            printf("(%s): ", it->class_name);
        }
        for(int i=0; i<16; i++) {
            if(it->sname[i]) {
                printf("%s %d #%d, ", it->sname[i], it->sline[i], it->id[i]);
            }
        }
        puts("");
    }
    else {
        sMemHeaderTiny* it = (sMemHeaderTiny*)((char*)mem - sizeof(size_t) - sizeof(size_t) - sizeof(sMemHeaderTiny));

        if(it->allocated != 177783) {
            return;
        }
        printf("%p (%s) %s %d\n", mem, it->class_name, it->sname , it->sline);
    }
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="")
{
    char* mem = come_alloc_mem_from_heap_pool(sizeof(size_t)+sizeof(size_t)+count*size, sname, sline, class_name);

    size_t* ref_count = (size_t*)mem;

    *ref_count = 0;

    size_t* size2 = (size_t*)(mem + sizeof(size_t));

    *size2 = size*count + sizeof(size_t) + sizeof(size_t);

    return mem + sizeof(size_t) + sizeof(size_t);
}

uniq void come_free(void* mem)
{
    if(mem == ((void*)0)) {
        return;
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    come_free_mem_of_heap_pool((char*)ref_count);
}

uniq void* come_memdup(void* block, char* sname=null, int sline=0, char* class_name=null)
{
    if(!block) {
        return null;
    }

    char* mem = (char*)block - sizeof(size_t) - sizeof(size_t);

    size_t* size_p = (size_t*)(mem + sizeof(size_t));

    size_t size = *size_p - sizeof(size_t) - sizeof(size_t);

    void* result = come_calloc(1, size, sname, sline, class_name);

    memcpy(result, block, size);

    return result;
}

uniq void* come_increment_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return mem;
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    (*ref_count)++;

    return mem;
}

uniq void* come_print_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return mem;
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    printf("ref_count %ld\n", *ref_count);

    return mem;
}

uniq int come_get_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return 0;
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    return *ref_count;
}

uniq void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return mem;
        }
    }
    if(mem == ((void*)0)) {
        return ((void*)0);
    }

    size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

    if(!no_decrement) {
        (*ref_count)--;
    }

    size_t count = *ref_count;
    if(!no_free && count <= 0) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);

            come_free(protocol_obj);
        }
        come_free(mem);
        return ((void*)0);
    }

    return mem;
}

uniq void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    if(result_obj) {
        if(mem == result_obj) {
            return;
        }
    }
    if(mem == ((void*)0)) {
        return;
    }

    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
        else {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
        }
    }
    else {
        size_t* ref_count = (size_t*)((char*)mem - sizeof(size_t) - sizeof(size_t));

        if(!no_decrement) {
            (*ref_count)--;
        }

        size_t count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        void (*finalizer)(void*) = fun;
                        finalizer(mem);
                    }
                }
                else {
                    if(protocol_obj && protocol_fun) {
                        void (*finalizer)(void*) = protocol_fun;
                        finalizer(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}


uniq string __builtin_string(char* str)
{
    if(str == null) {
        return null;
    }
    int len = strlen(str) + 1;

    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}


uniq void come_push_stackframe(char* sname, int sline, int id) version 2
{
    inherit(sname, sline, id);
}

uniq void come_pop_stackframe() version 2
{
    inherit();
}

uniq void come_save_stackframe(char* sname, int sline) version 2
{
    inherit(sname, sline);
}

uniq void stackframe() version 2
{
    inherit();
}

uniq string come_get_stackframe() version 2
{
    return inherit();
}

uniq void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0, char* class_name="") version 2
{
    return inherit(count, size, sname, sline, class_name);
}

uniq void come_free(void* mem) version 2
{
    inherit(mem);
}



//////////////////////////////
// list
//////////////////////////////
struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values)
    {
        self.head = null;
        self.tail = null;
        self.len = 0;

        for(int i=0; i<num_value; i++) {
            self.push_back(dummy_heap values[i]);
        }

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }
    }
    immutable list<T>*% clone(list<T>* self) {
        if(self == null) {
            return null;
        }
        var result = new list<T>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                result.add(clone it.item);
            }
            else {
                result.add(dummy_heap dupe it.item);
            }

            it = it.next;
        }

        return result;
    }
    list<T>* add(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;

        return self;
    }
    void pop_front(list<T>* self) {
        if(self.len == 1) {
            list_item<T>* litem = self.head;
            self.head = null;
            self.tail = null;

            delete borrow litem;

            self.len--;
        }
        else if(self.len == 2) {
            list_item<T>* litem = self.head;

            self.head = self.head.next;
            self.head.prev = null;
            self.head.next = null;
            self.tail = self.head;

            delete borrow litem;

            self.len--;
        }
        else if(self.len >= 3) {
            list_item<T>* litem = self.head;

            self.head = litem.next;
            self.head.prev = null;

            delete borrow litem;

            self.len--;
        }
    }
    list<T>* push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;

            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;

            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;

        return self;
    }

    immutable string to_string(list<T>* self)
    {
        buffer*% result = new buffer();

        result.append_str("[");
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            result.append_str(it.item.to_string());
            it = it.next;

            i++;

            if(i != self.length()) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    T& begin(list<T>* self) {
        if(self == null) {
            T&` result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        if(self == null || self.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }

        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }

        T&` result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self == null || self.it == null;
    }
    immutable list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*))
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }

        return self;
    }
    immutable T item(list<T>* self, int position, T& default_value)
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return dummy_heap default_value;
    }

    immutable int length(list<T>* self)
    {
        if(self == null) {
            return 0;
        }
        return self.len;
    }

    list<T>* insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        if(position == 0) {
            list_item<T>* litem = borrow gc_inc(new list_item<T>);

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;

            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow gc_inc(new list_item<T>);

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;

            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow gc_inc(new list_item<T>);

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }

        return self;
    }
    list<T>* reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;

        return self;
    }
    list<T>* remove(list<T>* self, T& item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;

            it = it.next;
        }

        return self;
    }
    list<T>* remove_by_pointer(list<T>* self, T& item) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it->item == item) {
                self.delete(it2, it2+1);
                break;
            }
            it2++;

            it = it.next;
        }

        return self;
    }
    list<T>* delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return self;
        }

        if(head == 0 && tail == self.len)
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail)
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }

        return self;
    }
    list<T>* replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }
        if(position < 0) {
            position = 0;
        }

        if(self.len == 0 || position >= self.len) {
            int len = self.len;
            for(int i=0; i<position-len; i++) {
                T` default_value;
                memset(&default_value, 0, sizeof(T));
                self.push_back(default_value);
            }
            self.push_back(item);
            return self;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }

        return self;
    }

    immutable int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;

            it = it.next;
        }

        return default_value;
    }
    immutable int find_by_pointer(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item == item) {
                return it2;
            }
            it2++;

            it = it.next;
        }

        return default_value;
    }
    immutable bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    immutable list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    void operator_store_element(list<T>* self, int position, T item) {
        self.replace(position, item);
    }
    immutable T operator_load_element(list<T>* self, int position) {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        T` default_value;
        memset(&default_value, 0, sizeof(T));
        return default_value;
    }
    immutable list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
    bool operator_equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!(it.item === it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    bool operator_not_equals(list<T>* left, list<T>* right) {
        return !left.operator_equals(right);
    }
    bool contained(list<T>* self, T& item) {
        for(var it = self.begin(); !self.end(); it = self.next()) {
            if(it.equals(item)) {
                return true;
            }
        }

        return false;
    }
    list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) {
        auto result = new list<T>.initialize();

        list_item<T>* it = left.head;
        list_item<T>* it2= right.head;

        while(true) {
            if(it && it2) {
                if(it.item == null) {
                    it = it.next;
                }
                else if(it2.item == null) {
                    it2 = it2.next;
                }
                else if(compare(it.item, it2.item) <= 0)
                {
                    if(isheap(T)) {
                        result.push_back(clone it.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it.item);
                    }

                    it = it.next;
                }
                else {
                    if(isheap(T)) {
                        result.push_back(clone it2.item);
                    }
                    else {
                        result.push_back(dummy_heap dupe it2.item);
                    }


                    it2 = it2.next;
                }
            }

            if(it == null) {
                if(it2 != null) {
                    while(it2 != null) {
                        if(isheap(T)) {
                            result.push_back(clone it2.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it2.item);
                        }

                        it2 = it2.next;
                    }
                }
                break;
            }
            else if(it2 == null) {
                if(it != null) {
                    while(it != null) {
                        if(isheap(T)) {
                            result.push_back(clone it.item);
                        }
                        else {
                            result.push_back(dummy_heap dupe it.item);
                        }

                        it = it.next;
                    }
                }
                break;
            }
        }

        return result;
    }
    list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        if(self.head == null) {
            return clone self;
        }
        if(self.head.next == null) {
            return clone self;
        }

        auto list1 = new list<T>.initialize();
        auto list2 = new list<T>.initialize();

        list_item<T>* it = self.head;

        while(true) {
            list1.push_back(dupe it.item);
            list2.push_back(dupe it.next.item);

            if(it.next.next == null) {
                break;
            }

            it = it.next.next;

            if(it.next == null) {
                if(isheap(T)) {
                    list1.push_back(clone it.item);
                }
                else {
                    list1.push_back(dummy_heap dupe it.item);
                }
                break;
            }
        }

        auto left_list = list1.merge_sort_with_lambda(compare);
        auto right_list = list2.merge_sort_with_lambda(compare);

        return left_list.merge_list_with_lambda(right_list, compare);
    }
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) {
        return self.merge_sort_with_lambda(compare);
    }
    list<T>*% sort(list<T>* self) {
        return self.merge_sort_with_lambda(int lambda(T& left, T& right) { return left.compare(right); });
    }
    template<R> immutable list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
    {
        auto result = new list<R>.initialize();

        list_item<T>* it = self.head;
        while(it != null) {
            R item = block(parent, it.item);
            result.push_back(item);

            it = it.next;
        }

        return result;
    }
    immutable list<T>*% reverse(list<T>* self) {
        list<T>%* result = new list<T>();

        list_item<T>* it = self.tail;
        while(it != null) {
            result.push_back(dupe it.item);
            it = it.prev;
        };

        return result;
    }
    immutable list<T>*% uniq(list<T>* self) {
        list<T>*% result = new list<T>.initialize();

        if(self.length() > 0) {
            T item_before = self.head.item;

            result.push_back(dupe item_before);

            list_item<T>* it = self.head;
            it = it.next;
            while(it != null) {
                if(!it.item.equals(item_before)) {
                    result.push_back(dupe it.item);
                }

                item_before = it.item;

                it = it.next;
            }
        }

        return result;
    }
    immutable list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
    {
        list<T>*% result = new list<T>();

        list_item<T>* it = self.head;
        while(it != null) {
            if(block(parent, it.item)) {
                result.push_back(dupe it.item);
            }

            it = it.next;
        }

        return result;
    }

    immutable list<T>*% operator_add(list<T>*% left, list<T>*% right) {
        list<T>*% result = new list<T>();

        list_item<T>* it = left.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        it = right.head;
        while(it != null) {
            result.push_back(dupe it.item);

            it = it.next;
        }

        return result;
    }
    list<T>*% operator_mult(list<T>* left, int right) {
        list<T>*% result = new list<T>();

        for(int i=0; i<right; i++) {
            list_item<T>* it = left.head;
            while(it != null) {
                result.push_back(dupe it.item);

                it = it.next;
            }
        }

        return result;
    }
    string join(list<T>* self, char* sep=" ") {
        buffer*% buf = new buffer();

        int n = 0;
        for(var it = self.begin(); !self.end(); it = self.next()) {
            buf.append_str(it);

            if(n < self.length()-1) {
                buf.append_str(sep);
            }

            n++;
        }

        return buf.to_string();
    }
}

//////////////////////////////
// map
//////////////////////////////
struct map<T, T2>
{
    T*& keys;
    bool* item_existance;
    T2*& items;
    int size;
    int len;

    list<T>*% key_list;

    int it;
};



impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self) {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.key_list = new list<T&>();

        self.it = 0;

        return self;
    }
    map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values)
    {
        self.keys = borrow gc_inc(new T[128]);
        self.items = borrow gc_inc(new T2[128]);
        self.item_existance = borrow gc_inc(new bool[128]);

        for(int i=0; i<128; i++)
        {
            self.item_existance[i] = false;
        }

        self.size = 128;
        self.len = 0;

        self.it = 0;

        self.key_list = new list<T&>();

        for(int i=0; i<num_keys; i++) {
            self.insert(dummy_heap keys\[i], dummy_heap values[i]);
        }

        return self;
    }
    void finalize(map<T,T2>* self) {
        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T2)) {
                    delete self.items\[i];
                }
            }
        }
        come_free((char*)self.items);

        for(int i=0; i<self.size; i++) {
            if(self.item_existance[i]) {
                if(isheap(T)) {
                    delete self.keys\[i];
                }
            }
        }
        come_free((char*)self.keys);

        delete borrow self.key_list;

        delete borrow self.item_existance;
    }
    map<T, T2>*% clone(map<T, T2>* self)
    {
        if(self == null) {
            return null;
        }

        var result = new map<T,T2>();

        result.key_list = new list<T&>();

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));

            var it2 = self.at(it, default_value);

            if(isheap(T) && isheap(T2)) {
                result.put(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.put(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.put(dummy_heap dupe it, clone it2);
            }
            else {
                result.put(dummy_heap dupe it, dummy_heap dupe it2);
            }
        }

        return result;
    }

    immutable string to_string(map<T,T2>* self)
    {
        buffer*% result = new buffer();

        result.append_str("[");

        list_item<T&>* it = self.key_list.head;
        while(it) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it.item, default_value);

            result.append_str(it.item.to_string());
            result.append_str(":");
            result.append_str(it2.to_string());

            it = it.next;

            if(it != null) {
                result.append_str(",");
            }
        }

        result.append_str("]");

        return result.to_string();
    }

    immutable T2 at(map<T, T2>* self, T& key, T2 default_value) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }
    map<T,T2>* remove(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    self.key_list.remove(self.keys\[it]);

                    self.item_existance[it] = false;
                    if(isheap(T)) {
                        delete borrow self.keys\[it];
                    }
                    self.keys\[it] = null;
                    if(isheap(T2)) {
                        delete borrow self.items\[it];
                    }
                    self.items\[it] = null;

                    self.len--;
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    break;
                }
            }
            else {
                break;
            }
        }

        return self;
    }
    immutable int length(map<T, T2>* self) {
        return self.len;
    }

    T& begin(map<T, T2>* self) {
        if(self == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.head;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(map<T, T2>* self) {
        if(self == null || self.key_list.it == null) {
            T`& result;
            memset(&result, 0, sizeof(T));
            return result;
        }
        self.key_list.it = self.key_list.it.next;

        if(self.key_list.it) {
            return self.key_list.it.item;
        }

        T`& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(map<T, T2>* self) {
        return self == null || self.key_list == null || self.key_list.it == null;
    }

    void rehash(map<T,T2>* self) {
        int size = self.size * 10;
        T&* keys = borrow gc_inc(new T[size]);
        T2&* items = borrow gc_inc(new T2[size]);
        bool* item_existance = borrow gc_inc(new bool[size]);

        int len = 0;

        for(var it = self.begin(); !self.end(); it = self.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = self.at(it, default_value);
            unsigned int hash = ((T)it).get_hash_key() % size;
            int n = hash;

            while(true) {
                if(item_existance[n])
                {
                    n++;

                    if(n >= size) {
                        n = 0;
                    }
                    else if(n == hash) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
                else {
                    item_existance[n] = true;
                    keys\[n] = it;
                    T2 default_value;
                    items\[n] = self.at(it, default_value);

                    len++;
                    break;
                }
            }
        }

        come_free((char*)self.items);
        delete borrow self.item_existance;
        come_free((char*)self.keys);

        self.keys = keys;
        self.items = items;
        self.item_existance = item_existance;

        self.size = size;
        self.len = len;
    }

    map<T,T2>* insert(map<T,T2>* self, T key, T2 item) {
        if(self.len*10 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    if(isheap(T)) {
                        self.key_list.remove(self.keys\[it]);
                        delete self.keys\[it];
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }

        return self;
    }
    map<T,T2>* put(map<T,T2>* self, T key, T2 item) {
        if(self.len*2 >= self.size) {
            self.rehash();
        }
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    if(isheap(T)) {
                        delete self.keys\[it];
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow gc_inc(key);
                    }
                    else {
                        self.key_list.remove(self.keys\[it]);
                        self.keys\[it] = borrow key;
                    }
                    if(isheap(T2)) {
                        delete self.items\[it];
                        self.items\[it] = borrow gc_inc(item);
                    }
                    else {
                        self.items\[it] = borrow item;
                    }
                    break;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                self.item_existance[it] = true;
                if(isheap(T)) {
                    self.keys\[it] = borrow gc_inc(key);
                }
                else {
                    self.keys\[it] = borrow key;
                }
                if(isheap(T2)) {
                    self.items\[it] = borrow gc_inc(item);
                }
                else {
                    self.items\[it] = item;
                }

                self.len++;

                break;
            }
        }

        bool same_key_exist = false;
        for(var it2 = self.key_list.begin(); !self.key_list.end(); it2 = self.key_list.next()) {
            if(it2.equals(key)) {
                same_key_exist = true;
            }
        }

        if(!same_key_exist) {
            self.key_list.push_back(key);
        }

        return self;
    }
    immutable T2 operator_load_element(map<T, T2>* self, T& key) {
        T2` default_value;
        memset(&default_value, 0, sizeof(T2));

        unsigned int hash = ((T)key).get_hash_key() % self.size;
        unsigned int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return dummy_heap self.items\[it];
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return default_value;
                }
            }
            else {
                return default_value;
            }
        }

        return default_value;
    }

    void operator_store_element(map<T, T2>* self, T key, T2 item) {
        self.insert(key, item);
    }

    immutable bool equals(map<T, T2>* left, map<T, T2>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);

            if(it.equals(it2)) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);

                if(!item.equals(item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }

            n++;
        }

        return result;
    }

    immutable bool operator_equals(map<T, T2>* left, map<T,T2>* right) {
        if(left.len != right.len) {
            return false;
        }

        int n = 0;
        bool result = true;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T` default_value;
            memset(&default_value, 0, sizeof(T));
            T& it2 = right.key_list.item(n, default_value);

            if(it === it2) {
                T2` default_value2;
                memset(&default_value2, 0, sizeof(T2));
                T2& item = left.at(it, default_value2);
                T2& item2 = right.at(it2, default_value2);

                if(!(item === item2)) {
                    result = false;
                }
            }
            else {
                result = false;
            }

            n++;
        }

        return result;
    }

    bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) {
        return !(left.operator_equals(right);
    }

    immutable bool find(map<T, T2>* self, T& key) {
        unsigned int hash = ((T)key).get_hash_key() % self.size;
        int it = hash;

        while(true) {
            if(self.item_existance[it])
            {
                if(self.keys\[it].equals(key))
                {
                    return true;
                }

                it++;

                if(it >= self.size) {
                    it = 0;
                }
                else if(it == hash) {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return false;
    }
    immutable map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) {
        map<T,T2>*% result = new map<T,T2>();

        int n = 0;
        for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);

            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        n=0;
        for(var it = right.key_list.begin(); !right.key_list.end(); it = right.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));
            T2& it2 = left.at(it, default_value);

            if(isheap(T) && isheap(T2)) {
                result.insert(clone it, clone it2);
            }
            else if(isheap(T)) {
                result.insert(clone it, dummy_heap dupe it2);
            }
            else if(isheap(T2)) {
                result.insert(dummy_heap dupe it, clone it2);
            }
            else {
                result.insert(dummy_heap dupe it, dummy_heap dupe it2);
            }
            n++;
        }

        return result;
    }
    immutable map<T,T2>*% operator_mult(map<T,T2>* left, int right) {
        map<T,T2>*% result = new map<T,T2>();

        for(int i=0; i<right; i++ ) {
            int n = 0;
            for(var it = left.key_list.begin(); !left.key_list.end(); it = left.key_list.next()) {
                T2` default_value;
                memset(&default_value, 0, sizeof(T2));

                T2& it2 = left.at(it, default_value);

                if(isheap(T) && isheap(T2)) {
                    result.insert(clone it, clone it2);
                }
                else if(isheap(T)) {
                    result.insert(clone it, dummy_heap dupe it2);
                }
                else if(isheap(T2)) {
                    result.insert(dummy_heap dupe it, clone it2);
                }
                else {
                    result.insert(dummy_heap dupe it, dummy_heap dupe it2);
                }
                n++;
            }
        }

        return result;
    }
    immutable list<T>*% keys(map<T, T2>* self) {
        var result = new list<T>();

        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            if(isheap(T)) {
                result.push_back(clone it);
            }
            else {
                result.push_back(dummy_heap dupe it);
            }
        }

        return result;
    }

    immutable list<T2>*% values(map<T, T2>* self) {
        var result = new list<T2>();

        for(var it = self.key_list.begin(); !self.key_list.end(); it = self.key_list.next()) {
            T2` default_value;
            memset(&default_value, 0, sizeof(T2));

            var it2 = self.at(it, default_value);

            if(isheap(T2)) {
                result.push_back(clone it2);
            }
            else {
                result.push_back(dummy_heap dupe it2);
            }
        }

        return result;
    }
}

//////////////////////////////
// tuple
//////////////////////////////
struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% initialize(tuple1<T>*% self, T v1)
    {
        self.v1 = v1;

        return self;
    }

    immutable bool equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }

        return true;
    }
    immutable bool operator_equals(tuple1<T>* self, tuple1<T>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }

        return true;
    }
    immutable bool operator_not_equals(tuple1<T>* left, tuple1<T>* right) {
        return !left.operator_equals(right);
    }

    immutable string to_string(tuple1<T>* self)
    {
        return "(" + self.v1.to_string() + ")";
    }
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T, T2>*% initialize(tuple2<T, T2>*% self, T v1, T2 v2)
    {
        self.v1 = v1;
        self.v2 = v2;

        return self;
    }

    immutable string to_string(tuple2<T, T2>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + ")";
    }
    immutable bool equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }

        return true;
    }
    immutable bool operator_equals(tuple2<T,T2>* self, tuple2<T,T2>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }

        return true;
    }
    immutable bool operator_not_equals(tuple2<T,T2>* left, tuple2<T,T2>* right) {
        return !left.operator_equals(right);
    }
}


struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T, T2, T3>*% initialize(tuple3<T, T2, T3>*% self, T v1, T2 v2, T3 v3)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;

        return self;
    }

    immutable string to_string(tuple3<T, T2, T3>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + ")";
    }
    immutable bool equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }

        return true;
    }
    immutable bool operator_equals(tuple3<T,T2,T3>* self, tuple3<T,T2,T3>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }

        return true;
    }
    immutable bool operator_not_equals(tuple3<T,T2,T3>* left, tuple3<T,T2,T3>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T, T2, T3, T4>*% initialize(tuple4<T, T2, T3, T4>*% self, T v1, T2 v2, T3 v3, T4 v4)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;

        return self;
    }

    immutable string to_string(tuple4<T, T2, T3, T4>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + ")";
    }
    immutable bool equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }

        return true;
    }
    immutable bool operator_equals(tuple4<T,T2,T3,T4>* self, tuple4<T,T2,T3,T4>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }

        return true;
    }
    immutable bool operator_not_equals(tuple4<T,T2,T3,T4>* left, tuple4<T,T2,T3,T4>* right) {
        return !left.operator_equals(right);
    }
}

struct tuple5<T, T2, T3, T4, T5>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v4;
    T5 v5;
};

impl tuple5 <T, T2, T3, T4, T5>
{
    tuple5<T, T2, T3, T4, T5>*% initialize(tuple5<T, T2, T3, T4, T5>*% self, T v1, T2 v2, T3 v3, T4 v4, T5 v5)
    {
        self.v1 = v1;
        self.v2 = v2;
        self.v3 = v3;
        self.v4 = v4;
        self.v5 = v5;

        return self;
    }

    immutable string to_string(tuple5<T, T2, T3, T4, T5>* self)
    {
        return "(" + self.v1.to_string() + "," + self.v2.to_string() + "," + self.v3.to_string() + "," + self.v4.to_string() + "," + self.v5.to_string() + ")";
    }
    immutable bool equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(!self.v1.equals(right.v1)) {
            return false;
        }
        if(!self.v2.equals(right.v2)) {
            return false;
        }
        if(!self.v3.equals(right.v3)) {
            return false;
        }
        if(!self.v4.equals(right.v4)) {
            return false;
        }
        if(!self.v5.equals(right.v5)) {
            return false;
        }

        return true;
    }
    immutable bool operator_equals(tuple5<T,T2,T3,T4,T5>* self, tuple5<T,T2,T3,T4,T5>* right)
    {
        if(!(self.v1 === right.v1)) {
            return false;
        }
        if(!(self.v2 === right.v2)) {
            return false;
        }
        if(!(self.v3 === right.v3)) {
            return false;
        }
        if(!(self.v4 === right.v4)) {
            return false;
        }
        if(!(self.v5 === right.v5)) {
            return false;
        }

        return true;
    }
    immutable bool operator_not_equals(tuple5<T,T2,T3,T4,T5>* left, tuple5<T,T2,T3,T4,T5>* right) {
        return !left.operator_equals(right);
    }
}

//////////////////////////////
// buffer
//////////////////////////////
uniq buffer*% buffer*::initialize(buffer*% self)
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

uniq buffer*% buffer*::initialize_with_value(buffer*% self, char* mem, size_t size)
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    self.append(mem, size);

    return self;
}

uniq void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

uniq immutable buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }

    var result = new buffer;

    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);

    return result;
}

uniq immutable bool buffer*::equals(buffer* left, buffer* right)
{
    if(left == null || right == null) {
        return false;
    }

    return left.to_string().equals(right.to_string());
}

uniq immutable int buffer*::length(buffer* self)
{
    if(self == null) {
        return 0;
    }
    return self.len;
}

uniq void buffer*::reset(buffer* self)
{
    if(self == null) {
        return;
    }
    self.buf[0] = '\0';
    self.len = 0;
}

uniq void buffer*::trim(buffer* self, int len)
{
    if(self == null) {
        return;
    }
    self.len -= len;
    self.buf[self.len] = '\0';
}

uniq buffer* buffer*::append(buffer* self, char* mem, size_t size)
{
    if(self == null || mem == null) {
        return self;
    }
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_char(buffer* self, char c)
{
    if(self == null) {
        return null;
    }
    if(self.len + 1 + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;

        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }

    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_format(buffer* self, char* msg, ...)
{
    if(self == null || msg == null) {
        return self;
    }
# 3060 "/usr/local/include/comelang.h" 3
    va_list` args;
    __builtin_c23_va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    __builtin_va_end(args);

    if(len < 0) {
        return self;
    }


    string mem = string(result);

    int size = strlen(mem);
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    free(result);

    return self;
}

uniq buffer* buffer*::append_nullterminated_str(buffer* self, char* mem)
{
    if(self == null || mem == null) {
        return self;
    }
    int size = strlen(mem) + 1;
    if(self.len + size + 1 + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
    self.len++;

    return self;
}

uniq buffer* buffer*::append_int(buffer* self, int value)
{
    if(self == null) {
        return null;
    }
    int* mem = &value;
    int size = sizeof(int);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_long(buffer* self, long value)
{
    long* mem = &value;
    int size = sizeof(long);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::append_short(buffer* self, short value)
{
    if(self == null) {
        return null;
    }

    short* mem = &value;
    int size = sizeof(short);

    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = new char[self.size];
        memcpy(old_buf, self.buf, self.size);
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';

    return self;
}

uniq buffer* buffer*::alignment(buffer* self)
{
    if(self == null) {
        return null;
    }

    int len = self.len;
    len = (len + 3) & ~3;

    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }

    self.len = len;

    return self;
}

uniq immutable int buffer*::compare(buffer* left, buffer* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left.buf, right.buf);
}

uniq immutable buffer*% char*::to_buffer(char* self)
{
    var result = new buffer.initialize();

    if(self == null) {
        return result;
    }

    result.append_str(self);

    return result;
}

uniq immutable string buffer*::to_string(buffer* self)
{
    if(self == null) {
        return string("");
    }

    return string(self.buf);
}

uniq immutable unsigned char* buffer*::head_pointer(buffer* self)
{
    return self.buf;
}

uniq buffer*% char[]::to_buffer(char* self, size_t len)
{
    var result = new buffer();
    result.append(self, sizeof(char)*len);
    return result;
}

uniq immutable buffer*% char*[]::to_buffer(char** self, size_t len)
{
    var result = new buffer();
    for(int i=0; i<len; i++) {
        result.append(self[i], strlen(self[i]));
    }
    return result;
}

uniq immutable buffer*% short[]::to_buffer(short* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(short)*len);
    return result;
}

uniq immutable buffer*% int[]::to_buffer(int* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(int)*len);
    return result;
}

uniq immutable buffer*% long[]::to_buffer(long* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(long)*len);
    return result;
}

uniq immutable buffer*% float[]::to_buffer(float* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(float)*len);
    return result;
}

uniq immutable buffer*% double[]::to_buffer(double* self, size_t len)
{
    var result = new buffer();
    result.append((char*)self, sizeof(double)*len);
    return result;
}

uniq immutable string buffer*::printable(buffer* self)
{
    int len = self.len;
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        unsigned char c = self.buf[i];

        if((c >= 0 && c < ' ')
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else if(c > 127) {
            result[n++] = '?';
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

impl list <T>
{
    immutable buffer*% to_buffer(list<T>* self) {
        var result = new buffer();
        for(var it = self.begin(); !self.end(); it = self.next()) {
            result.append((char*)&it, sizeof(T));
        }
        return result;
    }
}

//////////////////////////////
/// base library(primitive array)
//////////////////////////////
uniq list<char>*% char[]::to_list(char* self, size_t len)
{
    return new list<char>.initialize_with_values(len, self);
}

uniq list<char*>*% char*[]::to_list(char** self, size_t len)
{
    return new list<char*>.initialize_with_values(len, self);
}

uniq list<short>*% short[]::to_list(short* self, size_t len)
{
    return new list<short>.initialize_with_values(len, self);
}

uniq list<int>*% int[]::to_list(int* self, size_t len)
{
    return new list<int>.initialize_with_values(len, self);
}

uniq list<long>*% long[]::to_list(long* self, size_t len)
{
    return new list<long>.initialize_with_values(len, self);
}

uniq list<float>*% float[]::to_list(float* self, size_t len)
{
    return new list<float>.initialize_with_values(len, self);
}

uniq list<double>*% double[]::to_list(double* self, size_t len)
{
    return new list<double>.initialize_with_values(len, self);
}

//////////////////////////////
/// base library(equals)
//////////////////////////////
uniq immutable bool bool::equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool _Bool::equals(_Bool self, _Bool right)
{
    return self == right;
}

uniq immutable bool char::equals(char self, char right)
{
    return self == right;
}

uniq immutable bool short::equals(short self, short right)
{
    return self == right;
}

uniq immutable bool int::equals(int self, int right)
{
    return self == right;
}

uniq immutable bool long::equals(long self, long right)
{
    return self == right;
}

uniq immutable bool size_t::equals(size_t self, size_t right)
{
    return self == right;
}

uniq immutable bool float::equals(float self, float right)
{
    return self == right;
}

uniq immutable bool double::equals(double self, double right)
{
    return self == right;
}

uniq immutable bool bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool _Bool::operator_equals(bool self, bool right)
{
    return self == right;
}

uniq immutable bool char::operator_equals(char self, char right)
{
    return self == right;
}

uniq immutable bool short::operator_equals(short self, short right)
{
    return self == right;
}

uniq immutable bool int::operator_equals(int self, int right)
{
    return self == right;
}

uniq immutable bool long::operator_equals(long self, long right)
{
    return self == right;
}

uniq bool bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool _Bool::operator_not_equals(bool self, bool right)
{
    return !(self == right);
}

uniq bool char::operator_not_equals(char self, char right)
{
    return !(self == right);
}

uniq bool short::operator_not_equals(short self, short right)
{
    return !(self == right);
}

uniq bool int::operator_not_equals(int self, int right)
{
    return !(self == right);
}

uniq bool long::operator_not_equals(long self, long right)
{
    return !(self == right);
}

uniq bool char*::equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool string::equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool void*::equals(void* self, void* right)
{
    return self == right;
}

uniq bool bool*::equals(bool* self, bool* right)
{
    return *self == *right;
}

uniq bool string::operator_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool char*::operator_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return true;
    }
    else if(self == null) {
        return false;
    }
    else if(right == null) {
        return false;
    }

    return strcmp(self, right) == 0;
}

uniq bool void*::operator_equals(char* self, char* right)
{
    return self == right;
}

uniq bool void*::operator_not_equals(char* self, char* right)
{
    return !self.operator_equals(right);
}

uniq bool string::operator_not_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }

    return strcmp(self, right) != 0;
}

uniq bool char*::operator_not_equals(char* self, char* right)
{
    if(self == null && right == null) {
        return false;
    }
    else if(self == null) {
        return true;
    }
    else if(right == null) {
        return true;
    }

    return strcmp(self, right) != 0;
}


uniq string char*::operator_add(char* self, char* right)
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

uniq string string::operator_add(char* self, char* right)
{
    if(self == null || right == null) {
        return string("");
    }
    int len = strlen(self) + strlen(right);

    char*% result = new char[len+1];

    strncpy(result, self, len+1);
    strncat(result, right, len+1);

    return result;
}

uniq string char*::operator_mult(char* self, int right)
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();

    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }

    return buf.to_string();
}

uniq string string::operator_mult(char* self, int right)
{
    if(self == null) {
        return string("");
    }
    var buf = new buffer();

    for(int i=0; i<right; i++) {
        buf.append_str(self);
    }

    return buf.to_string();
}

uniq size_t char[]::length(char* self, size_t len)
{
    return len;
}

uniq bool char*[]::contained(char** self, size_t len, char* str)
{
    bool result = false;
    for(int i=0; i<len; i++) {
        if(strncmp(self[i], str, strlen(self[i])) == 0) {
            result = true;
            break;
        }
    }
    return result;
}

uniq size_t short[]::length(short* self, size_t len)
{
    return len;
}

uniq size_t int[]::length(int* self, size_t len)
{
    return len;
}

uniq size_t long[]::length(long* self, size_t len)
{
    return len;
}

uniq size_t float[]::length(float* self, size_t len)
{
    return len;
}

uniq size_t double[]::length(double* self, size_t len)
{
    return len;
}

//////////////////////////////
/// base library(get_hash key)
//////////////////////////////
uniq unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int _Bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

uniq unsigned int char::get_hash_key(char value)
{
    return value;
}

uniq unsigned int short::get_hash_key(short int value)
{
    return value;
}

uniq unsigned int int::get_hash_key(int value)
{
    return value;
}

uniq unsigned int long::get_hash_key(long value)
{
    return value;
}

uniq unsigned int size_t::get_hash_key(size_t value)
{
    return value;
}

uniq unsigned int float::get_hash_key(float value)
{
    return (unsigned int)value;
}

uniq unsigned int double::get_hash_key(double value)
{
    return (unsigned int)value;
}

uniq unsigned int char*::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int string::get_hash_key(char* value)
{
    if(value == null) {
        return 0;
    }
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

uniq unsigned int void*::get_hash_key(void* value)
{
    return (((int)value).get_hash_key());
}

//////////////////////////////
/// base library(clone)
//////////////////////////////
uniq bool bool::clone(bool self)
{
    return self;
}

uniq bool _Bool::clone(bool self)
{
    return self;
}

uniq char char::clone(char self)
{
    return self;
}

uniq short int short::clone(short self)
{
    return self;
}

uniq int int::clone(int self)
{
    return self;
}

uniq long int long::clone(long self)
{
    return self;
}

uniq size_t size_t::clone(size_t self)
{
    return self;
}

uniq double double::clone(double self)
{
    return self;
}

uniq float float::clone(float self)
{
    return self;
}

//////////////////////////////
/// base library(character code)
//////////////////////////////
# 3870 "/usr/local/include/comelang.h" 3
uniq bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

uniq bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

uniq bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

uniq bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

uniq bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

uniq bool xispunct(char c) {
    return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~');
 }

//////////////////////////////
/// base library(simple string library)
//////////////////////////////
uniq int string::length(char* str)
{
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq int char*::length(char* str) {
    if(str == null) {
        return 0;
    }
    return strlen(str);
}

uniq string char*::reverse(char* str)
{
    if(str == null) {
        return string("");
    }
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

uniq string string::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::operator_load_range_element(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string char*::substring(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

uniq string xsprintf(char* msg, ...)
{
    if(msg == null) {
        return string("");
    }
    va_list` args;
    __builtin_c23_va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    __builtin_va_end(args);

    if(len < 0) {
        return string("");
    }

    string result2 = string(result);

    free(result);

    return result2;
}

uniq string char*::delete(char* str, int head, int tail)
{
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }

    if(head < 0) {
       head += len;
    }

    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }

    char*% result = new char[len-(tail-head)+1];

    memcpy(result, str, head);
    memcpy(result + head, str + tail, len-tail);

    result[len -(tail-head)] = '\0';

    return result;
}

uniq list<string>*% char*::split_char(char* self, char c)
{
    if(self == null) {
        return new list<string>();
    }

    auto result = new list<string>.initialize();

    auto str = new buffer.initialize();

    for(int i=0; i<self.length(); i++) {
        if(self[i] == c) {
            result.push_back(string(str.buf));
            str.reset();
        }
        else {
            str.append_char(self[i]);
        }
    }
    if(str.length() != 0) {
        result.push_back(string(str.buf));
    }

    return result;
}

uniq string char*::xsprintf(char* self, char* msg, ...)
{
    return xsprintf(msg, self);
}

uniq string int::xsprintf(int self, char* msg, ...)
{
    return xsprintf(msg, self);
}


uniq string char*::printable(char* str)
{
    int len = str.length();
    string result = new char[len*2+1];

    int n = 0;
    for(int i=0; i<len; i++) {
        char c = str[i];

        if((c >= 0 && c < ' ')
            || c == 127)
        {
            result[n++] = '^';
            result[n++] = c + 'A' - 1;
        }
        else {
            result[n++] = c;
        }
    }

    result[n] = '\0'

    return result;
}

uniq string char*::sub_plain(char* self, char* str, char* replace)
{
    if(str == null || replace == null) {
        return string(self);
    }

    auto result = new buffer.initialize();

    char* p = self;

    while(true) {
        char* p2 = strstr(p, str);

        if(p2 == null) {
            p2 = p;
            while(*p2) {
                p2++;
            }
            result.append(p, p2 - p);
            break;
        }

        result.append(p, p2 - p);
        result.append_str(replace);

        p = p2 + strlen(str);
    }

    return result.to_string();
}

//////////////////////////////
/// base library(path library)
//////////////////////////////
uniq string xbasename(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);

    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);
    }

    return string("");
}

uniq string xnoextname(char* path)
{
    if(path == null) {
        return string("");
    }
    string path2 = xbasename(path);

    char* p = path2 + strlen(path2);

    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }

    return string("");
}

uniq string xextname(char* path)
{
    if(path == null) {
        return string("");
    }
    char* p = path + strlen(path);

    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }

    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);
    }

    return string("");
}

//////////////////////////////
/// base library(to_string)
//////////////////////////////
uniq string bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string _Bool::to_string(bool self)
{
    if(self) {
        return string("true");
    }
    else {
        return string("false");
    }
}

uniq string char::to_string(char self)
{
    return xsprintf("%c", self);
}

uniq string short::to_string(short self)
{
    return xsprintf("%d", self);
}

uniq string int::to_string(int self)
{
    return xsprintf("%d", self);
}

uniq string long::to_string(long self)
{
    return xsprintf("%ld", self);
}

uniq string size_t::to_string(size_t self)
{
    return xsprintf("%ld", self);
}

uniq string float::to_string(float self)
{
    return xsprintf("%f", self);
}

uniq string double::to_string(double self)
{
    return xsprintf("%lf", self);
}

uniq string string::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

uniq string char*::to_string(char* self)
{
    if(self == null) {
        return string("");
    }
    return string(self);
}

//////////////////////////////
/// base library(compare)
//////////////////////////////
uniq int bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }

    return 0;
}

uniq int _Bool::compare(bool left, bool right)
{
    if(!left && right) {
        return -1;
    }
    else if(left && right) {
        return 0;
    }
    else if(!left && !right) {
        return 0;
    }
    else {
        return 1;
    }

    return 0;
}

uniq int char::compare(char left, char right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int short::compare(short left, short right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int int::compare(int left, int right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int long::compare(long left, long right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int size_t::compare(size_t left, size_t right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int float::compare(float left, float right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int double::compare(double left, double right)
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }

    return 0;
}

uniq int string::compare(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left,right);
}

uniq int char*::compare(char* left, char* right)
{
    if(left == null && right == null) {
        return 0;
    }
    else if(left == null) {
        return -1;
    }
    else if(right == null) {
        return 1;
    }

    return strcmp(left,right);
}

//////////////////////////////
/// base library(IO-FILE)
//////////////////////////////
# 4721 "/usr/local/include/comelang.h" 3
//////////////////////////////
/// base library(STDOUT, STDIN)
//////////////////////////////

uniq string char*::puts(char* self)
{
    if(self == null) {
        return string("");
    }
    puts(self);

    return string(self);
}

uniq string char*::print(char* self)
{
    if(self == null) {
        return string("");
    }
    printf("%s", self);

    return string(self);
}

uniq string char*::printf(char* self, ...)
{
    if(self == null) {
        return string("");
    }
    char* msg2;
# 4760 "/usr/local/include/comelang.h" 3
    va_list` args;
    __builtin_c23_va_start(args, self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);


    printf("%s", msg2);

    free(msg2);

    return string(self);
}

uniq int int::printf(int self, char* msg)
{
    printf(msg, self);

    return self;
}


//////////////////////////////
/// base library(assert)
//////////////////////////////
# 4799 "/usr/local/include/comelang.h" 3
//////////////////////////////
/// base library(wchar_t)
//////////////////////////////
# 4855 "/usr/local/include/comelang.h" 3
uniq void int::times(int self, void* parent, void (*block)(void* parent, int it))
{
    for(int i = 0; i < self; i++) {
        block(parent, i);
    }
}
# 2 "main.c" 2

# 1 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2025 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 4 "main.c" 2
# 1 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2025 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */
# 86 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* When modular code is enabled with macOS SDKs from version 15, the
   include guards are set in the includers of this code, rather than as
   part of it.  This means the we must unset them or the intended code
   here will be bypassed (resulting in undefined values).  */
# 107 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 126 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 160 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 172 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 229 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 256 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 299 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 326 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 344 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 411 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* A null pointer constant.  */
# 429 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */







/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
  /* _Float128 is defined as a basic type, so max_align_t must be
     sufficiently aligned for it.  This code must work in C++, so we
     use __float128 here; that is only available on some
     architectures, but only on i386 is extra alignment needed for
     __float128.  */



} max_align_t;
# 465 "/usr/lib/gcc/aarch64-redhat-linux/15/include/stddef.h" 3 4
  typedef __typeof__(nullptr) nullptr_t;
# 5 "main.c" 2
# 1 "elf.h" 1




# 4 "elf.h"
// ELFヘッダマジック


// ELFヘッダ（最初の52バイト程度）
struct elfhdr {
    uint32_t magic; // ELF_MAGIC
    uint8_t elf[12]; // ELF識別子（無視してよい）
    uint16_t type;
    uint16_t machine;
    uint32_t version;
    uint64_t entry; // エントリポイント
    uint64_t phoff; // プログラムヘッダテーブルのオフセット
    uint64_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum; // プログラムヘッダの数
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
};

// プログラムヘッダ（LOADセグメントなど）
struct proghdr {
    uint32_t type;
    uint32_t flags;
    uint64_t off; // ファイル中の位置
    uint64_t vaddr; // 仮想アドレス
    uint64_t paddr;
    uint64_t filesz; // ファイル中のサイズ
    uint64_t memsz; // メモリ上のサイズ（BSS含む）
    uint64_t align;
};

// セグメント種別


// ELF ヘッダ全体の定義（既にあるなら省略可）
typedef struct {
    unsigned char e_ident[16]; // マジック + クラス + データエンディアンなど
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry; // エントリポイント
    uint64_t e_phoff; // プログラムヘッダテーブルのファイルオフセット
    uint64_t e_shoff; // セクションヘッダテーブルのファイルオフセット
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize; // プログラムヘッダのエントリ長
    uint16_t e_phnum; // プログラムヘッダ数
    uint16_t e_shentsize; // セクションヘッダのエントリ長
    uint16_t e_shnum; // セクションヘッダ数
    uint16_t e_shstrndx; // セクション名文字列テーブルのインデックス
} Elf64_Ehdr;

/*
// プログラムヘッダ（PT_LOAD をむときに既に使っているはず）
typedef struct {
    uint32_t p_type;
    uint32_t p_flags;
    uint64_t p_offset;
    uint64_t p_vaddr;
    uint64_t p_paddr;
    uint64_t p_filesz;
    uint64_t p_memsz;
    uint64_t p_align;
} Elf64_Phdr;

// ■ ここからセクションヘッダ定義 ■
typedef struct {
    uint32_t sh_name;      // セクション名（文字列テーブル内のオフセット）
    uint32_t sh_type;      // セクションタイプ（例：SHT_PROGBITS, SHT_NOBITS…）
    uint64_t sh_flags;     // フラグ（SHF_ALLOC, SHF_WRITE, SHF_EXECINSTR…）
    uint64_t sh_addr;      // メモリ上のアドレス
    uint64_t sh_offset;    // ファイル内オフセット
    uint64_t sh_size;      // セクションのバイト数
    uint32_t sh_link;      // リンク／依存関係（例：シンボルテーブルの idx）
    uint32_t sh_info;      // その他情報
    uint64_t sh_addralign; // アライメント
    uint64_t sh_entsize;   // テーブルエンリサイズ（テーブル型セクション時）
} Elf64_Shdr;

// sh_type 用定数
#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_NOBITS   8

// sh_flags 用定数
#define SHF_WRITE     (1UL << 0)
#define SHF_ALLOC     (1UL << 1)
#define SHF_EXECINSTR (1UL << 2)
*/
# 6 "main.c" 2
# 1 "fs.h" 1





//──────────────────────────────────────────
// ファイルシステム共通定数・構造体（mkfs.c と合わせる）
//──────────────────────────────────────────
# 20 "fs.h"
// ───────────────────────────────────────────────────────────────────────
// on-disk 構造体
// ────────────────────────────────────────────────────────────────────────

// スーパーブロック (ブロック番号 1 に配置)
struct superblock {
    uint32_t size; // 全ブロック数
    uint32_t nblocks; // データブロック数
    uint32_t ninodes; // イノード数
    uint32_t nlog; // ログ領域ブロック数（未使用なら 0）
    uint32_t logstart; // ログ領域開始ブロック番号（未使用なら 0）
    uint32_t inodestart; // イノード領域開始ブロック番号
    uint32_t bmapstart; // ビットマップ開始ブロック番号
};

// on-disk i-node 構造体
struct dinode {
    uint16_t type; // 0=空き, 1=ファイル, 2=ディレクトリ
    uint16_t major; // デバイス番号（未使用時は 0）
    uint16_t minor; // デバイス番号（未使用時は 0）
    uint16_t nlink; // ハードリンク数
    uint32_t size; // ファイルサイズ（バイト）
    /* 直接ポインタ[0..NDIRECT-1], 1次インデクス=addrs[NDIRECT], 2次インデクス=addrs[NDIRECT+1] */
    uint32_t addrs[12 + 2];
};

// ディレクトリエントリ
struct dirent {
    uint16_t inum; // ファイル/ディレクトリの i-node 番号
    char name[14]; // ファイル名（固定長14バイト、ヌル終端なし）
};

//──────────────────────────────────────────
// ヘルパー関数のプロトタイプ
//──────────────────────────────────────────

// 低レイヤーのブロック読み込み（extern で実装されている想定）
// blockno: ファイルシステム上のブロック番号 (0 から始まる)
// buf:       BSIZE バイト確保されたバッファ
extern void read_block(uint32_t blockno, void *buf);

// superblock を読み込む
void read_superblock(void);

// i ノードを読み込む
// inum: iノード番号（1 から ninodes まで）
// dest: struct dinode のバッファ（呼び出し側が確保しておくこと）
void read_inode(uint32_t inum, struct dinode *dest);

// ファイル（またはディレクトリ）データをバッファに読み込む
// inode: 事前に read_inode により読み込んでおくこと
// offset, size: 読み込みたいオフセットとバイト数
// buf: 読み出し先バッファ（size バイト以上確保しておくこと）
void read_data(struct dinode *inode, uint32_t offset, uint8_t *buf, uint32_t size);

// ルートディレクトリからファイル名 lookup
// path: "/foo/bar.txt" のように絶対パスで与える
// return: 見つかったらその iノード番号、見つからなければ 0
uint32_t path_lookup(const char *path);

// ディレクトリ内でエントリを探す
// parent: 親ディレクトリの dinode 構造体
// name:    探したいファイル名（ヌル終端文字列）
// return:  iノード番号、見つからなければ 0
uint32_t dir_lookup(struct dinode *parent, const char *name);

// i ノードを読み込んで内容を出力する（デバッグ用）
void dump_inode(uint32_t inum);

// virtio ブロックデバイスを初期化
void virtio_blk_init(void);

typedef int32_t ssize_t;

int fs_open(const char *path);
ssize_t fs_read(int fd, void *buf, size_t count);
int fs_close(long fd);

// ── パイプ本体 ─────────────────────────────────────────────────────────


struct spipe {
    char data[512]; // リングバッファ
    uint32_t nread; // 読み出し済バイト数
    uint32_t nwrite; // 書き込み済バイト数
    int read_open; // 読み側 open フラグ
    int write_open; // 書き側 open フラグ
};

// ファイルテーブルエントリ
struct file {
    enum { FK_STDIN, FK_STDOUT, FK_STDERR, FK_FILE, FK_PIPE } kind;
    uint32_t inum; // inode 番号
    struct dinode din; // on-disk inode 情報
    uint32_t off; // 現在の読み込みオフセット
    int used; // 使用フラグ
    struct spipe* pipe;
};

int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);

void pipe_open(int* fd1, int* fd2);
int piperead(int fd, char *addr, int n);
int pipewrite(int fd, char *addr, int n);
void fs_dup2(int oldfd, int newfd);

struct file* fs_init();
struct file* get_current_file_table();
struct file* fs_dup_table(struct file* orig);
# 7 "main.c" 2
# 1 "userprog.h" 1
unsigned char hello_elf[] = {
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x74, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x04, 0x00, 0x40, 0x00,
  0x0a, 0x00, 0x09, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x70, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x4e, 0x55, 0x00, 0x0a, 0xd2, 0x9c, 0xeb, 0xb2, 0x21, 0x43, 0x2c,
  0x33, 0x30, 0x65, 0x63, 0x4c, 0xf9, 0x39, 0xaa, 0x6b, 0x46, 0x75, 0x54,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0xa0, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08,
  0x8d, 0x47, 0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x05, 0x45, 0x97, 0x07,
  0x00, 0x00, 0x93, 0x87, 0xa7, 0x02, 0xbe, 0x85, 0x21, 0x46, 0x93, 0x08,
  0x00, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x05, 0x45,
  0xef, 0xf0, 0xdf, 0xfa, 0x81, 0x47, 0x3e, 0x85, 0xe2, 0x60, 0x42, 0x64,
  0x05, 0x61, 0x82, 0x80, 0x48, 0x45, 0x4c, 0x4c, 0x4f, 0x31, 0x0d, 0x0a,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x7a, 0x52, 0x00, 0x01, 0x7c, 0x01, 0x01,
  0x1b, 0x0c, 0x02, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x70, 0xff, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x20,
  0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x6c, 0xff, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x10, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x46, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x10,
  0x42, 0x0e, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x58, 0xff, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x20,
  0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08, 0x00, 0x66, 0xc1, 0x42,
  0xc8, 0x0c, 0x02, 0x20, 0x42, 0x0e, 0x00, 0x00, 0x47, 0x43, 0x43, 0x3a,
  0x20, 0x28, 0x47, 0x4e, 0x55, 0x29, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e,
  0x31, 0x20, 0x32, 0x30, 0x32, 0x35, 0x30, 0x34, 0x32, 0x35, 0x20, 0x28,
  0x52, 0x65, 0x64, 0x20, 0x48, 0x61, 0x74, 0x20, 0x43, 0x72, 0x6f, 0x73,
  0x73, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e, 0x31, 0x2d, 0x31, 0x29, 0x00,
  0x41, 0x73, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x69, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0xa8, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0xb8, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x71, 0x00, 0x00, 0x00, 0x10, 0x00, 0xf1, 0xff, 0x00, 0x18, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x83, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x93, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x60, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x97, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xa3, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xaf, 0x00, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x74, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb4, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc3, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xca, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x63, 0x00, 0x24, 0x78, 0x72,
  0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30,
  0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64,
  0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63,
  0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63,
  0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31,
  0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63,
  0x61, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00,
  0x65, 0x78, 0x69, 0x74, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61,
  0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f,
  0x5f, 0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e,
  0x5f, 0x5f, 0x00, 0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53,
  0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73,
  0x5f, 0x73, 0x74, 0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00,
  0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e,
  0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65,
  0x6e, 0x64, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00,
  0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73,
  0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x6e, 0x6f, 0x74, 0x65, 0x2e,
  0x67, 0x6e, 0x75, 0x2e, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x2d, 0x69, 0x64,
  0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64, 0x61,
  0x74, 0x61, 0x00, 0x2e, 0x65, 0x68, 0x5f, 0x66, 0x72, 0x61, 0x6d, 0x65,
  0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e, 0x72,
  0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75,
  0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb8, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x46, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb0, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello_elf_len = 2144;
# 8 "main.c" 2
# 1 "userprog2.h" 1
unsigned char hello2_elf[] = {
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd0, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x04, 0x00, 0x40, 0x00,
  0x09, 0x00, 0x08, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0x78, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x4e, 0x55, 0x00, 0x3e, 0x48, 0x08, 0x2f, 0x1f, 0xcf, 0x15, 0x46,
  0xb6, 0x90, 0xd0, 0x71, 0xa1, 0x74, 0x60, 0x34, 0x02, 0xeb, 0x6f, 0x7b,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0xa0, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0x01, 0x45, 0x93, 0x07, 0x04, 0xfd, 0xbe, 0x85, 0x0d, 0x46, 0x93, 0x08,
  0x10, 0x04, 0x73, 0x00, 0x00, 0x00, 0x23, 0x34, 0xa4, 0xfe, 0x05, 0x45,
  0x93, 0x07, 0x04, 0xfd, 0xbe, 0x85, 0x0d, 0x46, 0x93, 0x08, 0x00, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x23, 0x30, 0xa4, 0xfe, 0x09, 0x45, 0xef, 0xf0,
  0xff, 0xfa, 0x81, 0x47, 0x3e, 0x85, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x41, 0x11, 0x06, 0xe4, 0x22, 0xe0, 0x00, 0x08, 0x95, 0x47,
  0x3e, 0x85, 0xa2, 0x60, 0x02, 0x64, 0x41, 0x01, 0x82, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x7a, 0x52, 0x00, 0x01, 0x7c, 0x01, 0x01, 0x1b, 0x0c, 0x02, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x68, 0xff, 0xff, 0xff,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x20, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x64, 0xff, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x30, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x78, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x30, 0x42, 0x0e, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x82, 0xff, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x10, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x46, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x10,
  0x42, 0x0e, 0x00, 0x00, 0x47, 0x43, 0x43, 0x3a, 0x20, 0x28, 0x47, 0x4e,
  0x55, 0x29, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e, 0x31, 0x20, 0x32, 0x30,
  0x32, 0x35, 0x30, 0x34, 0x32, 0x35, 0x20, 0x28, 0x52, 0x65, 0x64, 0x20,
  0x48, 0x61, 0x74, 0x20, 0x43, 0x72, 0x6f, 0x73, 0x73, 0x20, 0x31, 0x35,
  0x2e, 0x31, 0x2e, 0x31, 0x2d, 0x31, 0x29, 0x00, 0x41, 0x73, 0x00, 0x00,
  0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01, 0x69, 0x00, 0x00, 0x00,
  0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f,
  0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32,
  0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f, 0x63, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69,
  0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x6d,
  0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x61, 0x6d, 0x6f,
  0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73, 0x63, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x64,
  0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0xc0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x03, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0xa6, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x03, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x03, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x03, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x03, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x03, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x32, 0x2e, 0x63, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34,
  0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32,
  0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32,
  0x5f, 0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32,
  0x70, 0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f,
  0x7a, 0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c,
  0x72, 0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70,
  0x30, 0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00, 0x65, 0x78, 0x69,
  0x74, 0x00, 0x5f, 0x5f, 0x67, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70,
  0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x24, 0x00, 0x5f, 0x5f, 0x53, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x66, 0x75, 0x6e, 0x00, 0x5f, 0x5f, 0x42, 0x53, 0x53, 0x5f, 0x45, 0x4e,
  0x44, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74,
  0x61, 0x72, 0x74, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x5f, 0x5f, 0x44,
  0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00,
  0x5f, 0x65, 0x64, 0x61, 0x74, 0x61, 0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00,
  0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x74,
  0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74,
  0x61, 0x62, 0x00, 0x2e, 0x6e, 0x6f, 0x74, 0x65, 0x2e, 0x67, 0x6e, 0x75,
  0x2e, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x2d, 0x69, 0x64, 0x00, 0x2e, 0x74,
  0x65, 0x78, 0x74, 0x00, 0x2e, 0x65, 0x68, 0x5f, 0x66, 0x72, 0x61, 0x6d,
  0x65, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e,
  0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62,
  0x75, 0x74, 0x65, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x02, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xa0, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x05, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
unsigned int hello2_elf_len = 2064;
# 9 "main.c" 2
# 1 "child.h" 1
unsigned char child_elf[] = {
  0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf3, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0a, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x40, 0x00, 0x38, 0x00, 0x04, 0x00, 0x40, 0x00,
  0x0f, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x70, 0x04, 0x00, 0x00, 0x00,
  0xe0, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x0a, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xac, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x51, 0xe5, 0x74, 0x64, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x47, 0x4e, 0x55, 0x00, 0x4a, 0x7f, 0xb3, 0x03, 0x60, 0xe3, 0xaa, 0x22,
  0x77, 0x76, 0x48, 0xf9, 0x4b, 0xcf, 0xc4, 0x9b, 0xdb, 0x18, 0x94, 0x35,
  0x01, 0x11, 0x06, 0xec, 0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe,
  0x83, 0x37, 0x84, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x60, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x01, 0xa0, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0, 0x00, 0x18,
  0xaa, 0x87, 0xa3, 0x0f, 0xf4, 0xfc, 0x83, 0x47, 0xf4, 0xfd, 0x23, 0x00,
  0xf4, 0xfe, 0xa3, 0x00, 0x04, 0xfe, 0x05, 0x45, 0x93, 0x07, 0x04, 0xfe,
  0xbe, 0x85, 0x05, 0x46, 0x93, 0x08, 0x00, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x23, 0x34, 0xa4, 0xfe, 0x01, 0x00, 0xa2, 0x70, 0x02, 0x74, 0x45, 0x61,
  0x82, 0x80, 0x1d, 0x71, 0x86, 0xec, 0xa2, 0xe8, 0x80, 0x10, 0xaa, 0x87,
  0xae, 0x86, 0x32, 0x87, 0x23, 0x26, 0xf4, 0xfa, 0xb6, 0x87, 0x23, 0x24,
  0xf4, 0xfa, 0xba, 0x87, 0x23, 0x22, 0xf4, 0xfa, 0x23, 0x26, 0x04, 0xfe,
  0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x44, 0xfa, 0x81, 0x27, 0x8d, 0xc3,
  0x83, 0x27, 0xc4, 0xfa, 0x81, 0x27, 0x63, 0xdd, 0x07, 0x00, 0x85, 0x47,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfa, 0xbb, 0x07, 0xf0, 0x40,
  0x81, 0x27, 0x23, 0x22, 0xf4, 0xfe, 0x29, 0xa0, 0x83, 0x27, 0xc4, 0xfa,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x81, 0x27, 0xad, 0xeb,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x5f, 0xf6, 0x65, 0xa0, 0x83, 0x27,
  0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x77, 0xf7, 0x02, 0x81, 0x27,
  0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8,
  0x83, 0x27, 0x04, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05,
  0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00,
  0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97, 0x23, 0x04, 0xf7, 0xfc,
  0x83, 0x27, 0x84, 0xfa, 0x03, 0x27, 0x44, 0xfe, 0xbb, 0x57, 0xf7, 0x02,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe, 0x81, 0x27, 0xd1, 0xfb,
  0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05, 0xd0, 0x02,
  0xef, 0xf0, 0x5f, 0xee, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe, 0xc1, 0x17,
  0xa2, 0x97, 0x83, 0xc7, 0x87, 0xfc, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xed,
  0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27,
  0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xe6, 0x60, 0x46, 0x64,
  0x25, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0, 0x80, 0x18,
  0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87, 0x23, 0x2a, 0xf4, 0xf8,
  0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe, 0x23, 0x24,
  0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf, 0x83, 0x37,
  0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24, 0xf4, 0xfe,
  0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c, 0xf4, 0xf8,
  0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03, 0xef, 0xf0,
  0x3f, 0xe6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9,
  0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27, 0x44, 0xfe,
  0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00, 0x83, 0x27,
  0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03, 0x93, 0xf7,
  0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f,
  0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27, 0xc4, 0xfe,
  0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17, 0x22, 0x97,
  0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37, 0x84, 0xf9,
  0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9,
  0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf, 0x13, 0x05,
  0xd0, 0x02, 0xef, 0xf0, 0x7f, 0xde, 0x11, 0xa8, 0x83, 0x27, 0xc4, 0xfe,
  0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85, 0xef, 0xf0,
  0x3f, 0xdd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26, 0xf4, 0xfe,
  0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc, 0xa6, 0x70,
  0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x59, 0x71, 0x86, 0xf4, 0xa2, 0xf0,
  0x80, 0x18, 0x23, 0x3c, 0xa4, 0xf8, 0xae, 0x87, 0x32, 0x87, 0x23, 0x2a,
  0xf4, 0xf8, 0xba, 0x87, 0x23, 0x28, 0xf4, 0xf8, 0x23, 0x26, 0x04, 0xfe,
  0x23, 0x24, 0x04, 0xfe, 0x83, 0x27, 0x04, 0xf9, 0x81, 0x27, 0x91, 0xcf,
  0x83, 0x37, 0x84, 0xf9, 0x63, 0xdb, 0x07, 0x00, 0x85, 0x47, 0x23, 0x24,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xf9, 0xb3, 0x07, 0xf0, 0x40, 0x23, 0x3c,
  0xf4, 0xf8, 0x83, 0x37, 0x84, 0xf9, 0xa5, 0xeb, 0x13, 0x05, 0x00, 0x03,
  0xef, 0xf0, 0x5f, 0xd6, 0x55, 0xa0, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37,
  0x84, 0xf9, 0xb3, 0x77, 0xf7, 0x02, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0xa5, 0x47, 0x63, 0xcb, 0xe7, 0x00,
  0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7, 0xf7, 0x0f, 0x9b, 0x87, 0x07, 0x03,
  0x93, 0xf7, 0xf7, 0x0f, 0x09, 0xa8, 0x83, 0x27, 0x44, 0xfe, 0x93, 0xf7,
  0xf7, 0x0f, 0x9b, 0x87, 0x77, 0x05, 0x93, 0xf7, 0xf7, 0x0f, 0x03, 0x27,
  0xc4, 0xfe, 0x9b, 0x06, 0x17, 0x00, 0x23, 0x26, 0xd4, 0xfe, 0x41, 0x17,
  0x22, 0x97, 0x23, 0x08, 0xf7, 0xfa, 0x83, 0x27, 0x44, 0xf9, 0x03, 0x37,
  0x84, 0xf9, 0xb3, 0x57, 0xf7, 0x02, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37,
  0x84, 0xf9, 0xc1, 0xff, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x99, 0xcf,
  0x13, 0x05, 0xd0, 0x02, 0xef, 0xf0, 0x9f, 0xce, 0x11, 0xa8, 0x83, 0x27,
  0xc4, 0xfe, 0xc1, 0x17, 0xa2, 0x97, 0x83, 0xc7, 0x07, 0xfb, 0x3e, 0x85,
  0xef, 0xf0, 0x5f, 0xcd, 0x83, 0x27, 0xc4, 0xfe, 0xfd, 0x37, 0x23, 0x26,
  0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27, 0xe3, 0xdf, 0x07, 0xfc,
  0xa6, 0x70, 0x06, 0x74, 0x65, 0x61, 0x82, 0x80, 0x31, 0x71, 0x86, 0xfc,
  0xa2, 0xf8, 0x00, 0x01, 0x23, 0x34, 0xa4, 0xf8, 0x0c, 0xe4, 0x10, 0xe8,
  0x14, 0xec, 0x18, 0xf0, 0x1c, 0xf4, 0x23, 0x38, 0x04, 0x03, 0x23, 0x3c,
  0x14, 0x03, 0x93, 0x07, 0x04, 0x04, 0x23, 0x30, 0xf4, 0xf8, 0x83, 0x37,
  0x04, 0xf8, 0x93, 0x87, 0x87, 0xfc, 0x23, 0x3c, 0xf4, 0xf8, 0x83, 0x37,
  0x84, 0xf8, 0x23, 0x34, 0xf4, 0xfe, 0xc9, 0xac, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0x50, 0x02, 0x63, 0x0a,
  0xf7, 0x00, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85,
  0xef, 0xf0, 0xdf, 0xc5, 0x5d, 0xa4, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x12, 0x85, 0x47,
  0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x87, 0x93, 0x07, 0xc0, 0x06, 0x63, 0x1a, 0xf7, 0x00,
  0x89, 0x47, 0x23, 0x22, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07,
  0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x85, 0x07, 0x23, 0x34,
  0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x81, 0x27,
  0x13, 0x07, 0x40, 0x06, 0x63, 0x8d, 0xe7, 0x04, 0x13, 0x07, 0x80, 0x07,
  0x63, 0x92, 0xe7, 0x0a, 0x83, 0x27, 0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00,
  0x85, 0x47, 0x63, 0x12, 0xf7, 0x02, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x38, 0xf4, 0xfa,
  0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x04, 0xfb, 0xef, 0xf0, 0x5f, 0xd1,
  0x39, 0xa4, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c,
  0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfa, 0x01, 0x46, 0xc1, 0x45,
  0x03, 0x35, 0x84, 0xfb, 0xef, 0xf0, 0x3f, 0xdf, 0xfd, 0xa2, 0x83, 0x27,
  0x44, 0xfe, 0x1b, 0x87, 0x07, 0x00, 0x85, 0x47, 0x63, 0x13, 0xf7, 0x02,
  0x83, 0x37, 0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8,
  0x9c, 0x63, 0x23, 0x30, 0xf4, 0xfa, 0x83, 0x37, 0x04, 0xfa, 0x05, 0x46,
  0xa9, 0x45, 0x3e, 0x85, 0xef, 0xf0, 0x5f, 0xcc, 0x7d, 0xaa, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63,
  0x23, 0x34, 0xf4, 0xfa, 0x83, 0x37, 0x84, 0xfa, 0x05, 0x46, 0xa9, 0x45,
  0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xda, 0x71, 0xaa, 0x13, 0x05, 0x50, 0x02,
  0xef, 0xf0, 0x9f, 0xb4, 0x23, 0x20, 0x04, 0xfe, 0x11, 0xa8, 0x13, 0x05,
  0xc0, 0x06, 0xef, 0xf0, 0xbf, 0xb3, 0x83, 0x27, 0x04, 0xfe, 0x85, 0x27,
  0x23, 0x20, 0xf4, 0xfe, 0x83, 0x27, 0x04, 0xfe, 0x3e, 0x87, 0x83, 0x27,
  0x44, 0xfe, 0x01, 0x27, 0x81, 0x27, 0xe3, 0x40, 0xf7, 0xfe, 0x83, 0x37,
  0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0xb1,
  0xa9, 0xaa, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7, 0x07, 0x00, 0x81, 0x27,
  0x13, 0x07, 0x80, 0x07, 0x63, 0x88, 0xe7, 0x06, 0x13, 0x07, 0x80, 0x07,
  0x63, 0x45, 0xf7, 0x12, 0x13, 0x07, 0x30, 0x07, 0x63, 0x89, 0xe7, 0x0a,
  0x13, 0x07, 0x30, 0x07, 0x63, 0x4d, 0xf7, 0x10, 0x13, 0x07, 0x00, 0x07,
  0x63, 0x89, 0xe7, 0x06, 0x13, 0x07, 0x00, 0x07, 0x63, 0x45, 0xf7, 0x10,
  0x13, 0x07, 0x40, 0x06, 0x63, 0x8f, 0xe7, 0x00, 0x13, 0x07, 0x40, 0x06,
  0x63, 0x4d, 0xf7, 0x0e, 0x13, 0x07, 0x50, 0x02, 0x63, 0x84, 0xe7, 0x0e,
  0x13, 0x07, 0x30, 0x06, 0x63, 0x81, 0xe7, 0x0c, 0xdd, 0xa0, 0x83, 0x37,
  0x84, 0xf9, 0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43,
  0x23, 0x22, 0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfc, 0x05, 0x46, 0xa9, 0x45,
  0x3e, 0x85, 0xef, 0xf0, 0xdf, 0xac, 0xf1, 0xa8, 0x83, 0x37, 0x84, 0xf9,
  0x13, 0x87, 0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0x23, 0x2a,
  0xf4, 0xfc, 0x83, 0x27, 0x44, 0xfd, 0x01, 0x46, 0xc1, 0x45, 0x3e, 0x85,
  0xef, 0xf0, 0xbf, 0xaa, 0x6d, 0xa8, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x34, 0xf4, 0xfc,
  0x13, 0x05, 0x00, 0x03, 0xef, 0xf0, 0x5f, 0xa5, 0x13, 0x05, 0x80, 0x07,
  0xef, 0xf0, 0xdf, 0xa4, 0x01, 0x46, 0xc1, 0x45, 0x03, 0x35, 0x84, 0xfc,
  0xef, 0xf0, 0x1f, 0xb9, 0x69, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x63, 0x23, 0x3c, 0xf4, 0xfc,
  0x83, 0x37, 0x84, 0xfd, 0x9d, 0xe3, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0x27, 0x1f, 0x23, 0x3c, 0xf4, 0xfc, 0x21, 0xa8, 0x83, 0x37, 0x84, 0xfd,
  0x13, 0x87, 0x17, 0x00, 0x23, 0x3c, 0xe4, 0xfc, 0x83, 0xc7, 0x07, 0x00,
  0x3e, 0x85, 0xef, 0xf0, 0x3f, 0xa0, 0x83, 0x37, 0x84, 0xfd, 0x83, 0xc7,
  0x07, 0x00, 0xed, 0xf3, 0x89, 0xa0, 0x83, 0x37, 0x84, 0xf9, 0x13, 0x87,
  0x87, 0x00, 0x23, 0x3c, 0xe4, 0xf8, 0x9c, 0x43, 0xa3, 0x01, 0xf4, 0xfc,
  0x83, 0x47, 0x34, 0xfc, 0x3e, 0x85, 0xef, 0xf0, 0xbf, 0x9d, 0x15, 0xa0,
  0x13, 0x05, 0x50, 0x02, 0xef, 0xf0, 0x1f, 0x9d, 0x29, 0xa8, 0x13, 0x05,
  0x50, 0x02, 0xef, 0xf0, 0x7f, 0x9c, 0x83, 0x37, 0x84, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x9f, 0x9b, 0x01, 0x00, 0x83, 0x37,
  0x84, 0xfe, 0x85, 0x07, 0x23, 0x34, 0xf4, 0xfe, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0xe3, 0x94, 0x07, 0xd2, 0x81, 0x47, 0x3e, 0x85,
  0xe6, 0x70, 0x46, 0x74, 0x29, 0x61, 0x82, 0x80, 0x01, 0x11, 0x06, 0xec,
  0x22, 0xe8, 0x00, 0x10, 0x23, 0x34, 0xa4, 0xfe, 0x21, 0xa8, 0x83, 0x37,
  0x84, 0xfe, 0x13, 0x87, 0x17, 0x00, 0x23, 0x34, 0xe4, 0xfe, 0x83, 0xc7,
  0x07, 0x00, 0x3e, 0x85, 0xef, 0xf0, 0x1f, 0x97, 0x83, 0x37, 0x84, 0xfe,
  0x83, 0xc7, 0x07, 0x00, 0xed, 0xf3, 0x01, 0x00, 0x01, 0x00, 0xe2, 0x60,
  0x42, 0x64, 0x05, 0x61, 0x82, 0x80, 0x79, 0x71, 0x06, 0xf4, 0x22, 0xf0,
  0x00, 0x18, 0x93, 0x07, 0x04, 0xfe, 0x3e, 0x85, 0x93, 0x08, 0x90, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00,
  0xaa, 0x87, 0x23, 0x26, 0xf4, 0xfe, 0x83, 0x27, 0xc4, 0xfe, 0x81, 0x27,
  0x95, 0xe7, 0x83, 0x27, 0x44, 0xfe, 0x3e, 0x85, 0x85, 0x45, 0x93, 0x08,
  0x80, 0x04, 0x73, 0x00, 0x00, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87,
  0x27, 0x0f, 0x3e, 0x85, 0x81, 0x45, 0x93, 0x08, 0x50, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x19, 0x45, 0xef, 0xf0, 0x9f, 0x8e, 0x23, 0x2a, 0x04, 0xfc,
  0x93, 0x07, 0x44, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00,
  0x00, 0x00, 0x93, 0x08, 0x40, 0x04, 0x73, 0x00, 0x00, 0x00, 0xaa, 0x87,
  0x23, 0x24, 0xf4, 0xfe, 0x83, 0x27, 0x84, 0xfe, 0x81, 0x27, 0x95, 0xe7,
  0x83, 0x27, 0x04, 0xfe, 0x3e, 0x85, 0x81, 0x45, 0x93, 0x08, 0x80, 0x04,
  0x73, 0x00, 0x00, 0x00, 0x97, 0x07, 0x00, 0x00, 0x93, 0x87, 0x07, 0x0b,
  0x3e, 0x85, 0x81, 0x45, 0x93, 0x08, 0x50, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x19, 0x45, 0xef, 0xf0, 0x7f, 0x89, 0x23, 0x2a, 0x04, 0xfc, 0x93, 0x07,
  0x44, 0xfd, 0x3e, 0x85, 0x93, 0x08, 0x70, 0x04, 0x73, 0x00, 0x00, 0x00,
  0x17, 0x05, 0x00, 0x00, 0x13, 0x05, 0x45, 0x09, 0xef, 0xf0, 0x5f, 0xf0,
  0x01, 0xa0, 0x00, 0x00, 0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00,
  0x13, 0x05, 0x04, 0x00, 0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00,
  0xef, 0xf0, 0x9f, 0x9c, 0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0x1f, 0x87,
  0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00,
  0x13, 0x01, 0x01, 0xff, 0x23, 0x34, 0x11, 0x00, 0x83, 0x32, 0x84, 0xfd,
  0x13, 0x85, 0x02, 0x00, 0x93, 0x05, 0x00, 0x01, 0x13, 0x06, 0x00, 0x00,
  0xef, 0xf0, 0x9f, 0x99, 0x13, 0x05, 0xa0, 0x00, 0xef, 0xf0, 0x1f, 0x84,
  0x83, 0x30, 0x81, 0x00, 0x13, 0x01, 0x01, 0x01, 0x67, 0x80, 0x00, 0x00,
  0x28, 0x6e, 0x75, 0x6c, 0x6c, 0x29, 0x00, 0x00, 0x2f, 0x68, 0x65, 0x6c,
  0x6c, 0x6f, 0x2e, 0x65, 0x6c, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2f, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x32, 0x2e, 0x65, 0x6c, 0x66, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x45, 0x4e, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7a, 0x52, 0x00,
  0x01, 0x7c, 0x01, 0x01, 0x1b, 0x0c, 0x02, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0xc8, 0xf7, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x20, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0xc4, 0xf7, 0xff, 0xff, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x30,
  0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08, 0x00, 0x6c, 0xc1, 0x42,
  0xc8, 0x0c, 0x02, 0x30, 0x42, 0x0e, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0xd6, 0xf7, 0xff, 0xff, 0x16, 0x01, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x60, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x03, 0x08, 0x01, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x60, 0x42, 0x0e,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00,
  0xc0, 0xf8, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x70,
  0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08, 0x00, 0x02, 0xf0, 0xc1,
  0x42, 0xc8, 0x0c, 0x02, 0x70, 0x42, 0x0e, 0x00, 0x24, 0x00, 0x00, 0x00,
  0xb4, 0x00, 0x00, 0x00, 0x96, 0xf9, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x70, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x02, 0xf0, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x70, 0x42, 0x0e, 0x00,
  0x28, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x6c, 0xfa, 0xff, 0xff,
  0x24, 0x03, 0x00, 0x00, 0x00, 0x42, 0x0e, 0xc0, 0x01, 0x44, 0x81, 0x12,
  0x88, 0x14, 0x42, 0x0c, 0x08, 0x40, 0x03, 0x16, 0x03, 0xc1, 0x42, 0xc8,
  0x0c, 0x02, 0xc0, 0x01, 0x42, 0x0e, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x08, 0x01, 0x00, 0x00, 0x64, 0xfd, 0xff, 0xff, 0x3a, 0x00, 0x00, 0x00,
  0x00, 0x42, 0x0e, 0x20, 0x44, 0x81, 0x02, 0x88, 0x04, 0x42, 0x0c, 0x08,
  0x00, 0x6c, 0xc1, 0x42, 0xc8, 0x0c, 0x02, 0x20, 0x42, 0x0e, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x76, 0xfd, 0xff, 0xff,
  0xc8, 0x00, 0x00, 0x00, 0x00, 0x42, 0x0e, 0x30, 0x44, 0x81, 0x02, 0x88,
  0x04, 0x42, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x47, 0x43, 0x43, 0x3a,
  0x20, 0x28, 0x47, 0x4e, 0x55, 0x29, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e,
  0x31, 0x20, 0x32, 0x30, 0x32, 0x35, 0x30, 0x34, 0x32, 0x35, 0x20, 0x28,
  0x52, 0x65, 0x64, 0x20, 0x48, 0x61, 0x74, 0x20, 0x43, 0x72, 0x6f, 0x73,
  0x73, 0x20, 0x31, 0x35, 0x2e, 0x31, 0x2e, 0x31, 0x2d, 0x31, 0x29, 0x00,
  0x41, 0x73, 0x00, 0x00, 0x00, 0x72, 0x69, 0x73, 0x63, 0x76, 0x00, 0x01,
  0x69, 0x00, 0x00, 0x00, 0x04, 0x10, 0x05, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd4, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00,
  0xd4, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0x11, 0x00, 0x10, 0x06, 0x11,
  0x01, 0x12, 0x01, 0x03, 0x0e, 0x1b, 0x0e, 0x25, 0x0e, 0x13, 0x05, 0x00,
  0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x01, 0x01, 0xfb, 0x0e, 0x0a, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0xd4, 0x08, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x0c, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x07, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x03, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x03, 0x09, 0x04, 0x00, 0x01, 0x03, 0x01, 0x09, 0x04, 0x00, 0x01, 0x03,
  0x01, 0x09, 0x04, 0x00, 0x01, 0x09, 0x04, 0x00, 0x00, 0x01, 0x01, 0x6d,
  0x69, 0x6e, 0x75, 0x78, 0x2e, 0x53, 0x00, 0x2f, 0x72, 0x6f, 0x6f, 0x74,
  0x2f, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x39, 0x00, 0x47, 0x4e, 0x55, 0x20,
  0x41, 0x53, 0x20, 0x32, 0x2e, 0x34, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x01, 0x00, 0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x03, 0x00, 0x30, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x04, 0x00, 0x60, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x02, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00,
  0x04, 0x00, 0xf1, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x00, 0xd4, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0x60, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0xac, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x24, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
  0x10, 0x00, 0xf1, 0xff, 0x00, 0x18, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xea, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0xd4, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0xd0, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0xae, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x02, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0x0a, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0x9a, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x16, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x01, 0x00, 0x00,
  0x10, 0x00, 0x04, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x01, 0x00, 0x00,
  0x12, 0x00, 0x02, 0x00, 0xb0, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x68, 0x69,
  0x6c, 0x64, 0x2e, 0x63, 0x00, 0x24, 0x78, 0x72, 0x76, 0x36, 0x34, 0x69,
  0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30, 0x5f, 0x61, 0x32, 0x70,
  0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64, 0x32, 0x70, 0x32, 0x5f,
  0x63, 0x32, 0x70, 0x30, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70,
  0x30, 0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a,
  0x61, 0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72,
  0x73, 0x63, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x63, 0x61, 0x31, 0x70, 0x30,
  0x5f, 0x7a, 0x63, 0x64, 0x31, 0x70, 0x30, 0x00, 0x65, 0x78, 0x69, 0x74,
  0x00, 0x6d, 0x69, 0x6e, 0x75, 0x78, 0x2e, 0x6f, 0x00, 0x24, 0x78, 0x72,
  0x76, 0x36, 0x34, 0x69, 0x32, 0x70, 0x31, 0x5f, 0x6d, 0x32, 0x70, 0x30,
  0x5f, 0x61, 0x32, 0x70, 0x31, 0x5f, 0x66, 0x32, 0x70, 0x32, 0x5f, 0x64,
  0x32, 0x70, 0x32, 0x5f, 0x7a, 0x69, 0x63, 0x73, 0x72, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x69, 0x66, 0x65, 0x6e, 0x63, 0x65, 0x69, 0x32, 0x70, 0x30,
  0x5f, 0x7a, 0x6d, 0x6d, 0x75, 0x6c, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61,
  0x61, 0x6d, 0x6f, 0x31, 0x70, 0x30, 0x5f, 0x7a, 0x61, 0x6c, 0x72, 0x73,
  0x63, 0x31, 0x70, 0x30, 0x00, 0x70, 0x75, 0x74, 0x63, 0x68, 0x61, 0x72,
  0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x66, 0x00, 0x5f, 0x5f, 0x67, 0x6c,
  0x6f, 0x62, 0x61, 0x6c, 0x5f, 0x70, 0x6f, 0x69, 0x6e, 0x74, 0x65, 0x72,
  0x24, 0x00, 0x64, 0x75, 0x6d, 0x70, 0x5f, 0x73, 0x30, 0x00, 0x5f, 0x5f,
  0x53, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x5f,
  0x5f, 0x00, 0x70, 0x75, 0x74, 0x73, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74,
  0x6c, 0x6f, 0x6e, 0x67, 0x6c, 0x6f, 0x6e, 0x67, 0x00, 0x5f, 0x5f, 0x42,
  0x53, 0x53, 0x5f, 0x45, 0x4e, 0x44, 0x5f, 0x5f, 0x00, 0x64, 0x75, 0x6d,
  0x70, 0x5f, 0x73, 0x30, 0x5f, 0x6d, 0x69, 0x6e, 0x75, 0x73, 0x34, 0x30,
  0x00, 0x5f, 0x5f, 0x62, 0x73, 0x73, 0x5f, 0x73, 0x74, 0x61, 0x72, 0x74,
  0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x69,
  0x6e, 0x74, 0x00, 0x5f, 0x5f, 0x44, 0x41, 0x54, 0x41, 0x5f, 0x42, 0x45,
  0x47, 0x49, 0x4e, 0x5f, 0x5f, 0x00, 0x5f, 0x65, 0x64, 0x61, 0x74, 0x61,
  0x00, 0x5f, 0x65, 0x6e, 0x64, 0x00, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x6c,
  0x6f, 0x6e, 0x67, 0x00, 0x00, 0x2e, 0x73, 0x79, 0x6d, 0x74, 0x61, 0x62,
  0x00, 0x2e, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x73, 0x68,
  0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x6e, 0x6f, 0x74, 0x65,
  0x2e, 0x67, 0x6e, 0x75, 0x2e, 0x62, 0x75, 0x69, 0x6c, 0x64, 0x2d, 0x69,
  0x64, 0x00, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 0x64,
  0x61, 0x74, 0x61, 0x00, 0x2e, 0x65, 0x68, 0x5f, 0x66, 0x72, 0x61, 0x6d,
  0x65, 0x00, 0x2e, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x2e,
  0x72, 0x69, 0x73, 0x63, 0x76, 0x2e, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62,
  0x75, 0x74, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62, 0x75, 0x67, 0x5f,
  0x61, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x73, 0x00, 0x2e, 0x64, 0x65, 0x62,
  0x75, 0x67, 0x5f, 0x69, 0x6e, 0x66, 0x6f, 0x00, 0x2e, 0x64, 0x65, 0x62,
  0x75, 0x67, 0x5f, 0x61, 0x62, 0x62, 0x72, 0x65, 0x76, 0x00, 0x2e, 0x64,
  0x65, 0x62, 0x75, 0x67, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x00, 0x2e, 0x64,
  0x65, 0x62, 0x75, 0x67, 0x5f, 0x73, 0x74, 0x72, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x20, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x44, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0x07, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x09, 0x01, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x60, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x46, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xac, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe0, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0b, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x90, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbe, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd2, 0x0b, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x96, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x8f, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb0, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x38, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};
unsigned int child_elf_len = 5536;
# 10 "main.c" 2
no_output {
# 1 "minux.h" 1



typedef int pid_t;
# 36 "minux.h"
/*
static inline long read(long fd, void *buf, long size) {
    long ret;
    asm volatile(
        "mv   a0, %2    \n"  // fd → a0
        "mv   a1, %3    \n"  // buf → a1
        "mv   a2, %4    \n"  // size → a2
        "li   a7, %5    \n"  // SYS_read → a7
        "ecall          \n"  // システムコール発行
        "mv   %0, a0    \n"  // 戻り値 a0 → ret
        : "=r"(ret)         // %0 = 出力オペランド
        : "0"(ret),         // %1 = 同じレジスタ（ダミー）
          "r"(fd),          // %2 = fd
          "r"(buf),         // %3 = buf
          "r"(size),        // %4 = size
          "i"(SYS_read)     // %5 = システムコール番号
        : "a0", "a1", "a2", "a7", "memory"
    );
    return ret;
}
*/
# 111 "minux.h"
static inline void exit(long status) {
    asm volatile(
        "mv   a0, %0   \n" // status → a0
        "li   a7, %1   \n" // SYS_exit → a7
        "ecall         \n" // システムコール発行
        :
        : "r"(status), "i"(70)
        : "a0", "a7", "memory"
    );

    while(1);
    __builtin_unreachable(); // exit 後は戻らないのでコンパイラに通知
}
# 158 "minux.h"
// 戻り値を取るバージョン
# 12 "main.c" 2
}
output {


}

typedef unsigned long size_t;
typedef long ptrdiff_t;



extern char _end[]; // heap start
static char* heap_end = 0;
static char* heap_limit = (char*)0x88000000;

// MMIO アドレス定義





void putc(char c);
void puts(const char *s);

void* memset(void *dst, int c, unsigned int n);
void* memmove(void *dst, const void *src, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
void *calloc(size_t nmemb, size_t size);
char* strdup(const char* s1);

// machine-mode cycle counter
static inline uint64_t r_time()
{
    uint64_t x;
    asm volatile("csrr %0, time" : "=r" (x) );
    return x;
}

static inline void w_stimecmp(uint64_t x)
{
  asm volatile("csrw 0x14d, %0" : : "r" (x));
}

typedef unsigned long size_t;
typedef long ptrdiff_t;



extern char _end2[]; // provided by linker 
extern char _end3[]; // kernel page start
# 72 "main.c"
static void *kalloc_page(uint64_t bump) {
    void *p = (void*)bump;
    bump = (bump + 4095) & ~4095UL;
    bump += 4096;
    return p;
}

void *kalloc_pages(size_t npages) {
    uint64_t bump = (uint64_t)_end2;
    void *base = ((void*)0);
    for(size_t i=0;i<npages;i++){
        void *pg = kalloc_page(bump);
        if(i==0) base = pg;
    }
    return base;
}


void perror(char* str) {
    puts(str);
}

void panic(char* str)
{
    puts(str);
    puts("panic!");
}

struct context_t {
    uint64_t ra;
    uint64_t sp;
    uint64_t gp;
    uint64_t tp;
    uint64_t t0;
    uint64_t t1;
    uint64_t t2;
    uint64_t t3;
    uint64_t t4;
    uint64_t t5;
    uint64_t t6;
    uint64_t a0;
    uint64_t a1;
    uint64_t a2;
    uint64_t a3;
    uint64_t a4;
    uint64_t a5;
    uint64_t a6;
    uint64_t a7;
    uint64_t s0;
    uint64_t s1;
    uint64_t s2;
    uint64_t s3;
    uint64_t s4;
    uint64_t s5;
    uint64_t s6;
    uint64_t s7;
    uint64_t s8;
    uint64_t s9;
    uint64_t s10;
    uint64_t s11;
    uint64_t mepc;
};


typedef uint64_t pte_t;
typedef uint64_t pde_t;
typedef pte_t* pagetable_t; // 512

pagetable_t kernel_pagetable;

uint64_t make_satp(pagetable_t pagetable);

struct proc {
    context_t trapframe;

    context_t context; // swtch() here to run process
    proc *parent; // Parent process
//    char* stack;
    char* stack_top;
    uint64_t vaddr;

    int zombie;

    pagetable_t pagetable;

    char* program;
    int xstatus; // exit

    map<void*, tuple2<void*,long>*%>*% mapping_values;

    file* file_table;
};

struct cpu {
    proc *proc; // The process running on this cpu, or null.
    context_t context; // swtch() here to enter scheduler().
    int noff; // Depth of push_off() nesting.
    int intena; // Were interrupts enabled before push_off()?
};

struct cpu gCPU;

struct cpu* mycpu() {
    return &gCPU;
}


/// プロセスのユーザー空間を完全に解放
void free_proc(proc *p) {
    free_pagetable(p->pagetable, 2);
    kfree(p->pagetable);
}




list<proc*%>*% gProc;
int gActiveProc;

void kfree(void *pa);
void freerange(void *pa_start, void *pa_end);
# 219 "main.c"
struct run {
    struct run *next;
};

static inline uint64_t r_mstatus() {
    uint64_t x;
    asm volatile("csrr %0, mstatus" : "=r" (x));
    return x;
}

static inline uint64_t r_sstatus() {
    uint64_t x;
    asm volatile("csrr %0, sstatus" : "=r" (x) );
    return x;
}

static inline void w_sstatus(uint64_t x) {
    asm volatile("csrw sstatus, %0" : : "r"(x));
}
# 247 "main.c"
// Mutual exclusion lock.
struct spinlock {
  uint32_t locked; // Is the lock held?

  // For debugging:
  char *name; // Name of lock.
  struct cpu *cpu; // The cpu holding the lock.
};

static inline void intr_on(void) {
    unsigned long x = r_sstatus();
    x |= (1L << 1);
    w_sstatus(x);
}

// disable device interrupts
static inline void intr_off() {
  w_sstatus(r_sstatus() & ~(1L << 1));
}

static inline void intr_off_direct(void) {
    // sstatusレジスタのSIEビットをクリアする
    asm volatile("csrc sstatus, %0" : : "r"((1L << 1)));
}

static inline void intr_on_direct(void) {
    // sstatusレジスタのSIEビットをセットする
    asm volatile("csrs sstatus, %0" : : "r"((1L << 1)));
}

// are device interrupts enabled?
static inline int intr_get() {
  uint64_t x = r_sstatus();
  return (x & (1L << 1)) != 0;
}

int holding(struct spinlock *lk);
void pop_off(void);
void push_off(void);

// Mutual exclusion spin locks.
void initlock(struct spinlock *lk, char *name)
{
    lk->name = name;
    lk->locked = 0;
    lk->cpu = 0;
}

// Acquire the lock.
// Loops (spins) until the lock is acquired.
void acquire(struct spinlock *lk)
{
    push_off(); // disable interrupts to avoid deadlock.
    if(holding(lk))
        panic("acquire");

     // On RISC-V, sync_lock_test_and_set turns into an atomic swap:
     //   a5 = 1
     //   s1 = &lk->locked
     //   amoswap.w.aq a5, a5, (s1)
     while(__sync_lock_test_and_set(&lk->locked, 1) != 0)
    ;

     // Tell the C compiler and the processor to not move loads or stores
     // past this point, to ensure that the critical section's memory
     // references happen strictly after the lock is acquired.
     // On RISC-V, this emits a fence instruction.
     __sync_synchronize();

     // Record info about lock acquisition for holding() and debugging.
     lk->cpu = mycpu();
}

// Release the lock.
void release(struct spinlock *lk)
{
    if(!holding(lk))
        panic("release");

    lk->cpu = 0;

    // Tell the C compiler and the CPU to not move loads or stores
    // past this point, to ensure that all the stores in the critical
    // section are visible to other CPUs before the lock is released,
    // and that loads in the critical section occur strictly before
    // the lock is released.
    // On RISC-V, this emits a fence instruction.
     __sync_synchronize();

    // Release the lock, equivalent to lk->locked = 0.
    // This code doesn't use a C assignment, since the C standard
    // implies that an assignment might be implemented with
    // multiple store instructions.
    // On RISC-V, sync_lock_release turns into an atomic swap:
    //   s1 = &lk->locked
    //   amoswap.w zero, zero, (s1)
    __sync_lock_release(&lk->locked);

    pop_off();
}

// Check whether this cpu is holding the lock.
// Interrupts must be off.
int holding(struct spinlock *lk) {
    int r;
    r = (lk->locked && lk->cpu == mycpu());
    return r;
}

// push_off/pop_off are like intr_off()/intr_on() except that they are matched:
// it takes two pop_off()s to undo two push_off()s.  Also, if interrupts
// are initially off, then push_off, pop_off leaves them off.

void push_off(void)
{
    int old = intr_get();

    intr_off();
    if(mycpu()->noff == 0)
        mycpu()->intena = old;
    mycpu()->noff += 1;
}

void pop_off(void)
{
    struct cpu *c = mycpu();
    if(intr_get())
        panic("pop_off - interruptible");
    if(c->noff < 1)
        panic("pop_off");
    c->noff -= 1;
    if(c->noff == 0 && c->intena)
        intr_on();
}

struct {
  struct spinlock lock;
    struct run *freelist;
} kmem;

void kinit() {
    initlock(&kmem.lock, "kmem");
    freerange(_end3, (void*)0x81000000UL);
}

void freerange(void *pa_start, void *pa_end) {
    char *p;
    p = (char*)((((uint64_t)pa_start)+4096 -1) & ~(4096 -1));
    for(; p + 4096 <= (char*)pa_end; p += 4096)
        kfree(p);
}

// Free the page of physical memory pointed at by pa,
// which normally should have been returned by a
// call to kalloc().  (The exception is when
// initializing the allocator; see kinit above.)
void kfree(void *pa) {
    struct run *r;

    if(((uint64_t)pa % 4096) != 0 || (char*)pa < _end3 || (uint64_t)pa >= 0x81000000UL) {
        while(1) puts("kfree panic");
    }

    // Fill with junk to catch dangling refs.
    memset(pa, 1, 4096);

    r = (struct run*)pa;

    acquire(&kmem.lock);
    r->next = kmem.freelist;
    kmem.freelist = r;
    release(&kmem.lock);
}

void * kalloc(void) {
    struct run *r;

    acquire(&kmem.lock);
    r = kmem.freelist;
    if(r)
        kmem.freelist = r->next;
    release(&kmem.lock);

    if(r) {
        memset((char*)r, 5, 4096); // fill with junk
    }

    return (void*)r;
}

pte_t * walk(pagetable_t pagetable, uint64_t va, int alloc) {
/*
    if(va >= MAXVA)
        puts("walk");
*/

    for(int level = 2; level > 0; level--) {
        pte_t *pte = (pte_t*)&pagetable[((((uint64_t) (va)) >> (12 +(9*(level)))) & 0x1FF)];
        if(*pte & (1L << 0)) {
            pagetable = (pagetable_t)(((*pte) >> 10) << 12);
        } else {
            if(!alloc || (pagetable = (pagetable_t)kalloc()) == 0)
                return (void*)0;
            memset(pagetable, 0, 4096);
            *pte = ((((uint64_t)pagetable) >> 12) << 10) | (1L << 0);
        }
    }
    return (pte_t*)&pagetable[((((uint64_t) (va)) >> (12 +(9*(0)))) & 0x1FF)];
}

int mappages(pagetable_t pagetable, uint64_t va, uint64_t size, uint64_t pa, int perm) {
    uint64_t a, last;
    pte_t *pte;

    if((va % 4096) != 0)
        puts("mappages: va not aligned");

    if((size % 4096) != 0)
        puts("mappages: size not aligned");

    if(size == 0)
        puts("mappages: size");

    a = va;
    last = va + size - 4096;
    for(;;){
        if((pte = walk(pagetable, a, 1)) == 0) {
            return -1;
        }
        if(*pte & (1L << 0)) {
            printf("mappages: remap detected at va %p, existing pte flags 0x%lx, new perm 0x%x\n", va, *pte & 0x3FF, perm);
        }

        *pte = ((((uint64_t)pa) >> 12) << 10) | perm | (1L << 0);
        if(a == last)
            break;
        a += 4096;
        pa += 4096;
    }
    return 0;
}

void dump_physical_memory(uint64_t pa, int count) {
    volatile uint32_t* ptr = (volatile uint32_t*)pa;

    for (int i = 0; i < count; i++) {
        if (i % 4 == 0)
            printf("%p: ", (uint64_t)(ptr + i));

        printf("%p ", ptr[i]);

        if (i % 4 == 3)
            puts("");
    }

    if (count % 4 != 0)
        puts("");
}

void vmprint_rec(pagetable_t pagetable, uint64_t va, int level) {
    for (int i = 0; i < 512; i++) {
        pte_t pte = pagetable[i];
        if (pte & (1L << 0)) {
            uint64_t pa = (((pte) >> 10) << 12);
            uint64_t child_va = va | ((uint64_t)i << (12 + 9 * (2 - level))); // va

            for (int j = 0; j < level; j++)
                puts("\n.. ");
            printf("VA %p -> PA %p  (pte[%d]) (level %d)\n", child_va, pa, i, level);

            if ((pte & ((1L << 1) | (1L << 2) | (1L << 3))) != 0) {
                printf(" [leaf]");
            }

            printf(" flags: ");
            if (pte & (1L << 1)) printf(" R");
            if (pte & (1L << 2)) printf(" W");
            if (pte & (1L << 3)) printf(" X");
            if (pte & (1L << 4)) printf(" U");
            if (pte & (1L << 0)) printf(" V");
            puts("");

            if ((pte & ((1L << 1) | (1L << 2) | (1L << 3))) == 0) {
                vmprint_rec((pagetable_t)pa, child_va, level + 1);
            }
        }
    }
}

void vmprint(pagetable_t pagetable) {
    puts("page table:\n");
    vmprint_rec(pagetable, 0, 0);
}





void enable_mmu(pagetable_t kernel_pagetable) {
    uint64_t satp = ((8L << 60) | (((uint64_t)kernel_pagetable) >> 12));

    asm volatile("csrw satp, %0" :: "r"(satp));

    asm volatile("sfence.vma zero, zero");
}




extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
extern char COMMON2[];
uint64_t kernel_sp __attribute__((section(".common")));
uint64_t user_sp __attribute__((section(".common")));

void *common_kalloc(size_t size) {
    static size_t offset = 0;
    const uintptr_t base = (uintptr_t)COMMON2;
    const size_t align = 8;

    // offset を align の倍数に丸め
    offset = (offset + (align - 1)) & ~(align - 1);

    void *r = (void*)(base + offset);
    offset += size;
    return r;
}

uint64_t kernel_satp __attribute__((section(".common"))); // trap.S から参照する
uint64_t user_satp __attribute__((section(".common")));

// uart.c (Supervisor モード用)
// === UART RX 割り込みでキーを受け取る簡単な例 ===

// UART デバイスのアドレス
# 594 "main.c"
// Supervisor‐mode CSR ビット定義



// PLIC 側で UART IRQ を Supervisor にルーティングする
extern void plic_enable(int irq);


char uart_getc();
size_t uart_readline(char *buf, size_t maxlen);
size_t uart_readn(char *buf, size_t len) ;

volatile char last_key = 0;

// UART 受信割り込みハンドラ。trap ハンドラ内からこれを呼びます。
void uart_rx_handler(void) {
    last_key = *(((volatile uint32_t*)(0x10000000UL + 0x00)));
}

// Supervisor モードでの初期化
void uart_init(void) {
    // 1) UART デバイス側の RX 割り込みを有効化
    *((volatile uint8_t *)(0x10000000UL + 0x01)) |= 0x01;

    // 2) PLIC 側で UART_IRQ を Supervisor モードに有効化
    plic_enable(10);

    // 3) Supervisor‐mode 外部割り込みを受け付ける
    asm volatile("csrs sie, %0" :: "r"((1UL << 9)));

    // 4) Supervisor モード全体の割り込みを有効化
    asm volatile("csrs sstatus, %0" :: "r"((1UL << 1)));
}

// 1 文字送信 (FIFO 空きを待ってから)
void putc(char c) {
    while (!(*((volatile uint8_t *)(0x10000000UL + 0x05)) & 0x20)) {
        asm volatile("wfi"); // 割り込みが来るまで低消費で停止
    };
    *((volatile uint8_t *)(0x10000000UL + 0x00)) = c;
}
void putchar(char c) {
    putc(c);
}

void mmu_init() {
    kernel_pagetable = (pagetable_t)kalloc();
    memset(kernel_pagetable, 0, 4096);

    // 0x80000000
    for (uint64_t addr = 0x80000000UL; addr < 0x81000000UL; addr += 4096) {
        mappages(kernel_pagetable, addr, 4096, addr, (1L << 1) | (1L << 2) | (1L << 3) | (1L << 0));
    }

    // UART
    mappages(kernel_pagetable, 0x10000000, 4096, 0x10000000, (1L << 1) | (1L << 2) | (1L << 0));
    mappages(kernel_pagetable, 0x10001000L, 4096, 0x10001000L, (1L << 1) | (1L << 2) | (1L << 0));

    // PLIC
    mappages(kernel_pagetable, 0x02000000, 0x00020000, 0x02000000, (1L << 0)|(1L << 1)|(1L << 2));

    mappages(kernel_pagetable, 0x0C000000, 0x00400000, 0x0C000000, (1L << 0)|(1L << 1)|(1L << 2));

    /// VIRTIO ///
    for (int i = 0; i < 8; i++) {
        uint64_t va = 0x10001000UL + i * 0x00001000UL;
        uint64_t pa = va; // QEMU virt では VA=PA の identity map

        mappages(kernel_pagetable, va, 0x00001000UL, pa, (1L << 0) | (1L << 1) | (1L << 2));
    }
    mappages(kernel_pagetable, 0x0200BFF8UL, 4096, 0x0200BFF8UL, (1L << 1)|(1L << 2)|(1L << 0));
    mappages(kernel_pagetable, 0x02004000UL, 4096, 0x02004000UL, (1L << 1)|(1L << 2)|(1L << 0));

    asm volatile("sfence.vma zero, zero");

    kernel_satp = ((8L << 60) | (((uint64_t)kernel_pagetable) >> 12));

    enable_mmu(kernel_pagetable);
}

void* walkaddr(pagetable_t pagetable, uint64_t va) {
    pte_t *pte = walk(pagetable, va, 0);
    if (pte == 0)
        return (void*)0;
    if ((*pte & (1L << 0)) == 0)
        return (void*)0;
    if ((*pte & (1L << 4)) == 0)
        return (void*)0;
    uint64_t pa = (((*pte) >> 10) << 12);
    return (void*)(pa + (va & (4096 - 1)));
}

int copyout(pagetable_t pagetable, uint64_t dstva, void *src, uint64_t len) {
    uint64_t va0 = (((dstva)) & ~(4096 -1));
    uint64_t off = dstva - va0;
    char *pa;

    while (len > 0) {
        if ((pa = walkaddr(pagetable, va0)) == 0)
            return -1;
        uint64_t n = 4096 - off;
        if (n > len) n = len;

        memcpy(pa + off, src, n);
        len -= n;
        src += n;
        va0 += 4096;
        off = 0;
    }
    return 0;
}

int copyin(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t len)
{
  uint64_t n, va0, pa0;

  while(len > 0){
    va0 = (((srcva)) & ~(4096 -1));
    pa0 = (uint64_t)walkaddr(pagetable, va0);
    if(pa0 == 0)
      return -1;
    n = 4096 - (srcva - va0);
    if(n > len)
      n = len;
    memmove(dst, (void *)(pa0 + (srcva - va0)), n);

    len -= n;
    dst += n;
    srcva = va0 + 4096;
  }
  return 0;
}

// Copy a null-terminated string from user to kernel.
// Copy bytes to dst from virtual address srcva in a given page table,
// until a '\0', or max.
// Return 0 on success, -1 on error.
int copyinstr(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t max)
{
  uint64_t n, va0, pa0;
  int got_null = 0;

  char* dst2 = dst;

  while(got_null == 0 && max > 0){
    va0 = (((srcva)) & ~(4096 -1));
    pa0 = (uint64_t)walkaddr(pagetable, va0);
    if(pa0 == 0) {
      return -1;
    }
    n = 4096 - (srcva - va0);
    if(n > max)
      n = max;

    char *p = (char *) (pa0 + (srcva - va0));
    while(n > 0){
      if(*p == '\0'){
        *dst2 = '\0';
        got_null = dst2 - dst;
        break;
      } else {
        *dst2 = *p;
      }
      --n;
      --max;
      p++;
      dst2++;
    }

    srcva = va0 + 4096;
  }
  if(got_null){
    dst2[got_null] = '\0';
    return got_null;
  } else {
    return -1;
  }
}




//#include "userprog.h"
//#include "userprog2.h"
//uint8_t elf_program[5096+1];
//uint8_t elf_program2[5048+1];

// ↑main.c の先頭あたりに追加

void setting_user_pagetable(proc* proc, pagetable_t pagetable)
{
    mappages(pagetable, (uint64_t)TRAMPOLINE, 4096, (uint64_t)TRAMPOLINE, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 3));
    mappages(pagetable, (uint64_t)TRAPFRAME, 4096, (uint64_t)TRAPFRAME, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 4) | (1L << 3));
    mappages(pagetable, (uint64_t)TRAPFRAME2, 4096, (uint64_t)TRAPFRAME2, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 4) | (1L << 3));
    for(int i=0; i<8; i++) {
        mappages(pagetable, (uint64_t)COMMON + i*4096, 4096, (uint64_t)COMMON + i*4096, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 3) | (1L << 4));
    }
    for(int i=0; i<8; i++) {
        mappages(pagetable, (uint64_t)COMMON2 + i*4096, 4096, (uint64_t)COMMON2 + i*4096, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 3) | (1L << 4));
    }

    // UART
    mappages(pagetable, 0x10000000, 4096, 0x10000000, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 4));
    mappages(pagetable, 0x10001000L, 4096, 0x10001000L, (1L << 1) | (1L << 2) | (1L << 0) | (1L << 4));

    asm volatile("sfence.vma zero, zero");
}

void alloc_prog(char* hello_elf, int fork_flag, int exec_flag) {
    proc*% result = new proc;

    result->program = hello_elf;

    if(fork_flag || exec_flag) {
        proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得

        result->mapping_values = clone parent->mapping_values;
    }
    else {
        result->mapping_values = new map<void*, tuple2<void*,long>*%>();
    }

    pagetable_t pagetable = (pagetable_t)kalloc();
    memset(pagetable, 0, 4096);

    setting_user_pagetable(result, pagetable);

    result->pagetable = pagetable;

    struct elfhdr *eh = (struct elfhdr *)hello_elf;

    if (eh->magic != 0x464C457F) {
        while(1) puts("panic");
    }

    struct proghdr *ph = (struct proghdr *)(hello_elf + eh->phoff);

    uint64_t size = ph->filesz;

    result->vaddr = (((ph->vaddr)) & ~(4096 -1));

    uint64_t va = 0;
    for (int i = 0; i < eh->phnum; i++, ph++) {
        if (ph->type != 1)
            continue;

        for (va = (((ph->vaddr)) & ~(4096 -1)); va < ph->vaddr + ph->memsz; va += 4096) {
            void *pa = kalloc();
            if (!pa) panic("kalloc");
            memset(pa, 0, 4096);
            mappages(result->pagetable, va, 4096, (uint64_t)pa,
                     (1L << 4) | (1L << 1) | (1L << 2) | (1L << 3) | (1L << 0));
            asm volatile("sfence.vma zero, zero");
        }


        if (copyout(result->pagetable, ph->vaddr, hello_elf + ph->off, ph->filesz) < 0) {
            panic("copyout");
        }
        asm volatile("sfence.vma zero, zero");
    }




    if(fork_flag) {
        proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得

        uint64_t parent_current = parent->context.sp;
        uint64_t parent_stack_top = (uint64_t)parent->stack_top;

        uint64_t stack_base = 0x40000000UL - 16*4096;
        for (int i = 0; i < 16; i++) {
            char *pa = kalloc();

            char *src = walkaddr(parent->pagetable, parent_stack_top+i*4096);
            if(src) {
                memmove(pa, (void*)src, 4096);
            }

            mappages(result->pagetable,
             stack_base + i*4096,
             4096,
             (uint64_t)pa,
             (1L << 4)|(1L << 1)|(1L << 2)|(1L << 0));
        }
        asm volatile("sfence.vma zero, zero");

        result->stack_top = (char*)stack_base;
        result->context.sp = stack_base + 16*4096;

        
# 885 "main.c" 3
       for(var o2_saved = (
# 885 "main.c"
       parent->mapping_values
# 885 "main.c" 3
       ), var 
# 885 "main.c"
       it 
# 885 "main.c" 3
       = (o2_saved).begin(); !(o2_saved).end(); 
# 885 "main.c"
       it 
# 885 "main.c" 3
       = (o2_saved).next()) 
# 885 "main.c"
                                           {
            var pa, size = parent->mapping_values[it];

            if (copyout(result->pagetable, (uint64_t)it, pa, size) < 0) {
                panic("copyout");
            }
        }
        result->file_table = fs_dup_table(parent->file_table);
    }
    else {
        proc *parent = gProc[gActiveProc]; // 現在のプロセスを取得
        uint64_t stack_base = 0x40000000UL - 16*4096;
        for (int i = 0; i < 16; i++) {
            char *pa = kalloc();

            mappages(result->pagetable,
             stack_base + i*4096,
             4096,
             (uint64_t)pa,
             (1L << 4)|(1L << 1)|(1L << 2)|(1L << 0));
        }
        asm volatile("sfence.vma zero, zero");

        result->stack_top = (char*)stack_base;
        result->context.sp = stack_base + 16*4096;

        asm volatile("sfence.vma zero, zero");

        if(exec_flag) {
            
# 914 "main.c" 3
           for(var o2_saved = (
# 914 "main.c"
           parent->mapping_values
# 914 "main.c" 3
           ), var 
# 914 "main.c"
           it 
# 914 "main.c" 3
           = (o2_saved).begin(); !(o2_saved).end(); 
# 914 "main.c"
           it 
# 914 "main.c" 3
           = (o2_saved).next()) 
# 914 "main.c"
                                               {
                var pa, size = parent->mapping_values[it];

                if (copyout(result->pagetable, (uint64_t)it, pa, size) < 0) {
                    panic("copyout");
                }
            }
            result->file_table = fs_dup_table(parent->file_table);
        }
        else {
            result->file_table = fs_init();
        }
    }

    /// USER PROGRAM
    result->context.mepc = eh->entry;

    if(exec_flag) {
        gProc.replace(gActiveProc, result);
        user_satp = ((8L << 60) | (((uint64_t)result->pagetable) >> 12));
        user_sp = result->context.sp;
    }
    else {
        gProc.add(result);
    }
}

pagetable_t uvmcreate()
{
    pagetable_t pagetable;
    pagetable = (pagetable_t) kalloc();
    if(pagetable == 0) {
        return (pagetable_t)0;
    }

    memset(pagetable, 0, 4096);
    return pagetable;
}


// pagetable_t copyuvm(pagetable_t old, uint64_t sz);
// sz はユーザ空間全体のサイズ（スタックも含む）
pagetable_t copyuvm(pagetable_t old, uint64_t sz)
{
    pagetable_t new_;
    new_ = uvmcreate();
    if(new_ == 0)
        return (pagetable_t)0;

    // 0 ～ sz まで PGSIZE ごとにループ
    for(uint64_t addr = 0; addr < sz; addr += 4096){
        pte_t *pte = walk(old, addr, 0);
        if(!pte || !(*pte & (1L << 0)))
            continue;
        uint64_t pa = (((*pte) >> 10) << 12);
        uint32_t flags = ((*pte) & 0x3FF);
        // 新しい物理ページを確保
        char *mem = kalloc();
        if(mem == 0)
            panic("coypuvm");
        // 親のページ内容をコピー（スタックもここでコピーされる）
        memmove(mem, (char*)pa, 4096);
        // 子のページテーブルにマッピング
        if(mappages(new_, addr, 4096, ((((uint64_t)mem) >> 12) << 10), (1L << 4) | (1L << 1) |(1L << 2) | (1L << 3) | (1L << 0)) < 0){
            kfree(mem);
            panic("copyuvm");
        }
    }
    return new_;
}



/// 解放用ユーティリティ：Sv39 ページテーブルを再帰的に破棄
static void free_pagetable(pagetable_t pagetable, int level) {
    for(int i = 0; i < 512; i++) {
        pte_t pte = pagetable[i];
        if(!(pte & (1L << 0)))
            continue;
        uint64_t pa = (((pte) >> 10) << 12);
        // リーフかどうか (R/W/X フラグがあるならファイルデータページ)
        if(pte & ((1L << 1) | (1L << 2) | (1L << 3))) {
            if(level > 0) {
                kfree((void*)pa);
            }
        } else if(level > 0) {
            // 中間ノード
            pagetable_t child = (pagetable_t)pa;
            free_pagetable(child, level - 1);
            kfree(child);
        }
    }
}

struct file* get_current_file_table()
{
    return gProc[gActiveProc].file_table;
}

void reset_watchdog();

void plic_init();
void trap_init();
void uart_rx_init();



void plic_enable(int irq);

static inline void w_mstatus(uint64_t x) {
  asm volatile("csrw mstatus, %0" : : "r" (x));
}

static inline uint64_t r_sie() {
    uint64_t x;
    asm volatile("csrr %0, sie" : "=r"(x));
    return x;
}

static inline void w_sie(uint64_t x) {
    asm volatile("csrw sie, %0" : : "r"(x));
}

static inline void w_stvec(uint64_t x) {
    asm volatile("csrw stvec, %0" : : "r"(x));
}





extern void trapvec();

void my_intr_off()
{
    w_sstatus(r_sstatus() & ~(1UL << 1));
    w_sie(r_sie() & ~(1UL << 5));
}
void my_intr_on()
{
    w_sstatus(r_sstatus() | (1UL << 1));
    w_sie(r_sie() | (1UL << 5));
}

static inline uint64_t read_mtime() {
    return *(volatile uint64_t*)0x0200BFF8UL;
}

// CLINT に MTIMECMP を書く
static inline void write_mtimecmp(uint64_t v) {
    *(volatile uint64_t*)0x02004000UL = v;
}

// Supervisor-mode タイマー割り込みを有効化
void enable_timer_interrupts(void) {
    unsigned long x;

    // STIE = 1
    x = r_sie();
    x |= (1UL << 5);
    w_sie(x);

    // SIE = 1
    x = r_sstatus();
    x |= (1UL << 1);
    w_sstatus(x);
}

// Supervisor-mode タイマー割り込みを無効化
void disable_timer_interrupts(void) {
    w_sstatus(r_sstatus() & ~(1UL << 1));
    w_sie(r_sie() & ~(1UL << 5));
}

extern void swtch(context_t *new_);

void timer_reset() {
    uint64_t next = r_time() + 10000UL;
    w_stimecmp(next);
}

extern char stack_top[];

void yield();

char* yield_stack;



struct sKernelState
{
    context_t gYieldContext;
    context_t gYieldReturnContext;
    char gYieldStack[0x64000];

    uint64_t gYieldUserSatp;
    uint64_t gYieldUserSP;
    uint64_t gYieldUserActiveProc;
};

sKernelState gKernelState[16];
int gNumKernelState = 0;

int gKernelStateHead = 0;
int gKernelStateTail = 0;

void kernel_yield() {
    if(((gKernelStateTail + 1) % 16) == gKernelStateHead) {
        panic("kernel state queue max");
    }
    gKernelState[gKernelStateTail].gYieldReturnContext = *(context_t*)TRAPFRAME;
    gKernelState[gKernelStateTail].gYieldUserSatp = user_satp;
    gKernelState[gKernelStateTail].gYieldUserSP = user_sp;
    gKernelState[gKernelStateTail].gYieldUserActiveProc = gActiveProc;
    gKernelState[gKernelStateTail].gYieldContext = *(context_t*)TRAPFRAME2;

    yield_stack = gKernelState[gKernelStateTail].gYieldStack;

    gKernelStateTail = (gKernelStateTail + 1) % 16;

    gNumKernelState++

    timer_handler();
}

void yield_return();

void kernel_yield_return() {
    gNumKernelState--;

    user_satp = gKernelState[gKernelStateHead].gYieldUserSatp;
    user_sp = gKernelState[gKernelStateHead].gYieldUserSP;

    gActiveProc = gKernelState[gKernelStateHead].gYieldUserActiveProc;
    context_t* trapframe = (context_t*)TRAPFRAME2;

    *trapframe = gKernelState[gKernelStateHead].gYieldContext;

    trapframe = (context_t*)TRAPFRAME;
    *trapframe = gKernelState[gKernelStateHead].gYieldReturnContext;

    yield_stack = gKernelState[gKernelStateHead].gYieldStack;

    gKernelStateHead = (gKernelStateHead + 1) % 16;

    yield_return();
}

void timer_handler() {
    disable_timer_interrupts();
    struct proc *p = gProc[gActiveProc];

    context_t *tf = (context_t*)TRAPFRAME;
    p->context = *tf;

    timer_reset();

    int old_active_proc = gActiveProc;
    struct proc *old = gProc[gActiveProc];
    gActiveProc++;

    if(gActiveProc >= gProc.length()) {
        if(gNumKernelState > 0) {
            gActiveProc = 0;
            kernel_yield_return();
        }
        else {
            gActiveProc = 0;
        }
    }

    struct proc* new_ = gProc[gActiveProc];

    if (new_ != old && new_->zombie == 0) {
        user_sp = new_->context.sp;
        user_satp = ((8L << 60) | (((uint64_t)new_->pagetable) >> 12));
        old->context = *(context_t*)TRAPFRAME;
        //gCPU.proc = new_;
        uint64_t a0 = new_->context.a0;
        asm volatile("csrw sscratch, %0" : "=r" (a0));
        swtch(&new_->context);
    }
    else {
        gActiveProc = old_active_proc;
    }
}

// コンソール用スピンロック
static struct spinlock console_lock;

// 起動時に一度だけ呼び出す
void console_init(void) {
    initlock(&console_lock, "console");
}

// コンソール用スピンロック
static struct spinlock console_lock;

// カーネル側の puts (UART 等に文字列を出力)
void puts(const char *s) {
    acquire(&console_lock);
    while (*s) {
        putchar(*s++);
    }
    release(&console_lock);
}

int Sys_write()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    int fd = arg0;

    char kernel_buf[256];
    uint64_t user_va = arg1;
    int len = arg2;

    memset(kernel_buf, 0, 256);

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    int ret = copyin(p->pagetable, kernel_buf, user_va, len);

    if(ret < 0) {
        panic("copyinstr1");
    }

    if(is_pipe(fd)) {
        pipewrite(fd, kernel_buf, len);
    }
    else if(is_stdout(fd)) {
        for(int i=0; i<len; i++) {
            putchar(kernel_buf[i]);
        }
    }
    else {
        panic("write");
    }

struct file* f = get_current_file_table();
    return 0;
}

int Sys_exit()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    p->xstatus = arg0;
    p->zombie = 1;

    return 0;
}

int Sys_wait()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    int* status_va = (int*)arg0;

    int exit_status = 0;
    pid_t child_pid = -1;
    while(child_pid == -1) {

/*
uint64_t sp_val;
asm volatile(
    "mv %0, sp\n"     // sp レジスタの値を出力オペランド %0 に
    : "=r"(sp_val)    // %0 は r• レジスタに出力
    :                 // 入力オペランドなし
    :                 // 破壊するレジスタなし
);
printf("sp_val %x\n", sp_val);

char* p = (char*)sp_val;
for(int i= 0; i<10; i++) {
printf("call %d\n", *(p+i));
}
*/

        yield(); //timer_handler();

/*
uint64_t sp_val;
asm volatile(
    "mv %0, sp\n"     // sp レジスタの値を出力オペランド %0 に
    : "=r"(sp_val)    // %0 は r• レジスタに出力
    :                 // 入力オペランドなし
    :                 // 破壊するレジスタなし
);
printf("sp_val %x\n", sp_val);

char* p = (char*)sp_val;
for(int i= 0; i<10; i++) {
printf("return %d\n", *(p+i));
}
*/
        int n = 0;
        
# 1340 "main.c" 3
       for(var o2_saved = (
# 1340 "main.c"
       gProc
# 1340 "main.c" 3
       ), var 
# 1340 "main.c"
       it 
# 1340 "main.c" 3
       = (o2_saved).begin(); !(o2_saved).end(); 
# 1340 "main.c"
       it 
# 1340 "main.c" 3
       = (o2_saved).next()) 
# 1340 "main.c"
                           {
            if(it->zombie) {
                free(it->file_table);
                free_proc(it);
                exit_status = it->xstatus;
                child_pid = n;
                gProc.remove_by_pointer(it);
                break;
            }

            n++;
        }
    }

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    if (copyout(p->pagetable, (uint64_t)status_va, (void*)&exit_status, sizeof(int)) < 0) {
        panic("read: copyout failed");
    }

    return child_pid;
}

int Sys_open()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    char kernel_buf[256];
    uint64_t user_va = arg0;

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    copyinstr(p->pagetable, kernel_buf, user_va, 256);

    int result = fs_open(kernel_buf);

    return result;
}

int Sys_fork()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    int fork_flag;
    alloc_prog((char*)p->program, fork_flag=1, exec_flag:0);

    struct proc* child = gProc[gProc.length()-1];

    uint64_t sp = child->context.sp;

    child->context = *trapframe;
    child->context.mepc = child->context.mepc + 4;
    child->context.sp = sp;
    child->context.a0 = 0;

    int result = gProc.length()-1;

    return result;
}

int Sys_execv()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    int argc = arg2;

    /// path ///
    char kernel_buf[256];
    uint64_t user_va = arg0;

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得
    copyinstr(p->pagetable, kernel_buf, user_va, 256);

    char* path = kernel_buf;

/*
    /// argv ////
    uintptr_t user_argv_ptr = arg1;
    // ユーザー sepc＋レジスタ a1 とかで渡ってくる argv のアドレス
    
    char* kargv[128];
    
    if (copyin(p->pagetable, (char*)kargv, user_argv_ptr, sizeof(uintptr_t) * (argc+1)) < 0) {
        return -1;  // EFAULT 等
    }
            
    for (int i = 0; i < argc; i++) {
        char buf[128];
        if (copyinstr(p->pagetable, buf, (uint64_t)kargv[i], sizeof(buf)) < 0) {
            return -1;
        }
        kargv[i] = strdup(buf);
    }
    kargv[argc] = NULL;
*/

    char hello_elf[4096];

    int fd = fs_open(path);
    int ret = fs_read(fd, hello_elf, 4096);
    if (ret < 0) {
        trapframe->a0 = -1;
        return 0;
    }

    alloc_prog(hello_elf, fork_flag:0, exec_flag:1);

    struct proc* result = gProc[gActiveProc];

    trapframe->mepc = result->context.mepc + 4;
    trapframe->sp = result->context.sp;

    return 0;
}

int Sys_dup2(void)
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    int oldfd = arg0;
    int newfd = arg1;

    fs_dup2(oldfd, newfd);

    return 0;
}

int Sys_pipe(void)
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    char* kernel_buf;
    uint64_t user_va = arg0;

    int* fd = common_kalloc(sizeof(int)*2);

    pipe_open(&fd[0], &fd[1]);

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    if(copyout(p->pagetable, (uint64_t)user_va, (char*)fd, sizeof(int)*2) < 0)
    {
        panic("copyout");
    }

    p->mapping_values.insert((void*)user_va, ((void*)fd, sizeof(int)*2));

    return 0;
}


int Sys_read()
{
    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    int fd = arg0;
    uint64_t destva = arg1;
    size_t n = arg2;

    char kernel_buf[256];
    int ret;

    if(is_stdin(fd)) {
        ret = uart_readn(kernel_buf, n);
    }
    else if(is_pipe(fd)) {
        ret = piperead(fd, kernel_buf, n);
    }
    else {
        ret = fs_read(fd, kernel_buf, n);
        if (ret < 0) {
            trapframe->a0 = ret;
            return 0;
        }
        kernel_buf[ret] = '\0';
    }

    struct proc *p = gProc[gActiveProc]; // 現在のプロセスを取得

    /* copyout を使ってまとめてコピー */
    if (copyout(p->pagetable, destva, kernel_buf, ret) < 0) {
        panic("read: copyout failed");
    }

    return ret;
}

uintptr_t syscall_handler()
{
    disable_timer_interrupts();

    context_t* trapframe = (context_t*)TRAPFRAME;

    uintptr_t arg0 = trapframe->a0;
    uintptr_t arg1 = trapframe->a1;
    uintptr_t arg2 = trapframe->a2;
    uintptr_t arg3 = trapframe->a3;
    uintptr_t arg4 = trapframe->a4;
    uintptr_t arg5 = trapframe->a5;
    uintptr_t arg6 = trapframe->a6;
    uintptr_t arg_syscall_no = trapframe->a7;

    uint64_t result = 0;

//printf("ARG SYSCALL %d\n", arg_syscall_no);

    switch(arg_syscall_no) {
        case 64: {
            result = Sys_write();
            }
            break;

        case 73: {
            result = Sys_pipe();
            }
            break;

        case 72: {
            result = Sys_dup2();
            }
            break;

        case 70: {
            result = Sys_exit();
            }
            break;

        case 71: {
            result = Sys_wait();
            }
            break;

        case 66: {
            result = Sys_open();
            }
            break;

        case 65: {
            result = Sys_read();
            }
            break;

        case 67: {
            long fd = arg0;

            int ret = fs_close(fd);

            result = ret;
            }
            break;

        case 68: {
            result = Sys_fork();
            }
            break;

        case 69: {
            result = Sys_execv();
            }
            break;

        default:
            panic("invalid syscall");
    }

    trapframe->a0 = result;

    return result;
}






void enter_user(uintptr_t, uintptr_t, uintptr_t, uint64_t);



static inline uint64_t r_sip()
{
  uint64_t x;
  asm volatile("csrr %0, sip" : "=r" (x) );
  return x;
}

static inline uint64_t read_s_sp(void) {
    uint64_t sp_val;
    asm volatile(
        "mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(sp_val) // %0 は r• レジスタに出力
        : // 入力オペランドなし
        : // 破壊するレジスタなし
    );

    return sp_val;
}

static inline void sfence_vma()
{
  asm volatile("sfence.vma zero, zero");
}

static inline void w_satp(uint64_t x)
{
  asm volatile("csrw satp, %0" : : "r" (x));
}

static inline void w_sepc(uint64_t x)
{
  asm volatile("csrw sepc, %0" : : "r" (x));
}

void timerinit()
{
    w_stvec((uint64_t)trapvec & ~0x03);
    w_stimecmp(r_time() + 10000000);

    w_sstatus(r_sstatus() | (1UL << 1));
    w_sie(r_sie() | (1UL << 5));
}


/*
void* sbrk(ptrdiff_t incr) {
    if (heap_end == 0)
        heap_end = (char*)&_end;

    if (heap_end + incr >= heap_limit) {
        return (void*)-1;
    }

    void* prev = heap_end;
    heap_end += incr;
    return prev;
}

typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

mem_block_t *free_list = NULL;

void *malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    if (size % 8 != 0) {
        size += 8 - (size % 8);
    }
    size += sizeof(mem_block_t); 

    mem_block_t *current = free_list;
    mem_block_t *prev = NULL;

    while (current != NULL) {
        if (current->size >= size) {
            if (prev == NULL) {
                free_list = current->next;
            } else {
                prev->next = current->next;
            }
            return (void *)(current + 1); 
        }
        prev = current;
        current = current->next;
    }

    mem_block_t *new_mem = (mem_block_t *)sbrk(size);
    if (new_mem == (void *)-1) {
        return NULL; 
    }

    new_mem->size = size;
    new_mem->next = NULL;
    return (void *)(new_mem + 1); 
}

void *calloc(size_t nmemb, size_t size) {
    size_t total_size = nmemb * size;
    if (total_size == 0) {
        return NULL;
    }

    void *ptr = malloc(total_size);
    if (ptr != NULL) {
        memset(ptr, 0, total_size);
    }
    return ptr;
}

void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
}


int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

char* strdup(const char* s1) {
    char* result = calloc(1, strlen(s1)+1);
    memcpy(result, s1, strlen(s1)+1);
    return result;
}
                            
char* strstr(const char* haystack, const char* needle) {
    if (!*needle)
        return (char*)haystack;

    for (; *haystack; haystack++) {
        const char* h = haystack;
        const char* n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n)  // needle 
            return (char*)haystack;
    }

    return NULL;  
}

void* memset(void *dst, int c, unsigned int n) {
    char *cdst = (char *) dst;
    int i;
    for(i = 0; i < n; i++){
        cdst[i] = c;
    }
    return dst;
}

int memcmp(const void *v1, const void *v2, unsigned int n) {
    const unsigned char *s1, *s2;

    s1 = v1;
    s2 = v2;
    while(n-- > 0){
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++, s2++;
    }

    return 0;
}

void* memmove(void *dst, const void *src, unsigned int n) {
  const char *s;
  char *d;

  if(n == 0)
    return dst;
  
  s = src;
  d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0)
      *--d = *--s;
  } else
    while(n-- > 0) {
      *d++ = *s++;
    }

  return dst;
}

void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (unsigned char)*p - (unsigned char)*q;
}

char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}

int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}

char* strncat(char* dest, const char* src, size_t n) {
    char* d = dest;

    // dest 
    while (*d) d++;

    //  n  src null 
    while (n-- && *src) {
        *d++ = *src++;
    }

    *d = '\0';

    return dest;
}


// 自前実装の strtok
// s が NULL でなければ、s の先頭から検索を始める。
// s が NULL の場合は、前回の呼び出し時の位置から続きのトークンを返す。
// delim に含まれるいずれかの文字で文字列を区切り、次のトークンを返す。
// トークンがなくなったら NULL を返す。
char *strtok(char *s, const char *delim) {
    static char *next;    // 次のトークン探索開始位置を保持
    char *start;
    char *p;

    // 呼び出し時に s が非 NULL なら、new string の検索を開始
    if (s != NULL) {
        next = s;
    }

    // 直前で末尾に達していれば NULL を返す
    if (next == NULL) {
        return NULL;
    }

    // 1) 先頭の区切り文字をスキップ
    start = next;
    while (*start != '\0') {
        // delim に含まれるかどうか調べる
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*start == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (!is_delim) {
            break;
        }
        start++;
    }

    // 終端まで区切り文字しかなかった → もうトークンはない
    if (*start == '\0') {
        next = NULL;
        return NULL;
    }

    // 2) トークンの終端を見つける
    p = start;
    while (*p != '\0') {
        const char *d = delim;
        int is_delim = 0;
        while (*d != '\0') {
            if (*p == *d) {
                is_delim = 1;
                break;
            }
            d++;
        }
        if (is_delim) {
            break;
        }
        p++;
    }

    // 3) トークン終端を '\0' に置き換え、next を次回呼び出し用にセット
    if (*p == '\0') {
        // 文字列の末尾に達したので、次回以降 s=NULL にして呼べば再び NULL が返る
        next = NULL;
    } else {
        // 区切り文字を '\0' に置し、次の検索開始位置を p+1 にする
        *p = '\0';
        next = p + 1;
    }

    // トークンの先頭を返す
    return start;
}

char* itoa(char* buf, unsigned long val_, int base, int is_signed) {
    char* p = buf;
    char tmp[32];
    int i = 0;
    int negative = 0;

    if (base < 2 || base > 16) {
        *p = '\0';
        return p;
    }

    if (is_signed && (long)val_ < 0) {
        negative = 1;
        val_ = (unsigned long)(-(long)val_);
    }

    do {
        int digit = val_ % base;
        tmp[i++] = (digit < 10) ? '0' + digit : 'a' + digit - 10;
        val_ /= base;
    } while (val_);

    if (negative)
        *p++ = '-';

    while (i--)
        *p++ = tmp[i];
    *p = '\0';
    return buf;
}

int vasprintf(char** out, const char* fmt, va_list ap) {
    char out2[512];
    char* p = out2;
    const char* s;
    char buf[32];
    unsigned long remaining = sizeof(out2);

    for (; *fmt && remaining > 1; fmt++) {
        if (*fmt != '%') {
            *p++ = *fmt;
            remaining--;
            continue;
        }

        fmt++;  // skip '%'
        switch (*fmt) {
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 1);
            s = buf;
            break;
        case 'u':
            itoa(buf, va_arg(ap, unsigned int), 10, 0);
            s = buf;
            break;
        case 'x':
            itoa(buf, va_arg(ap, unsigned int), 16, 0);
            s = buf;
            break;
        case 's':
            s = va_arg(ap, const char*);
            if (!s) s = "(null)";
            break;
        case 'c':
            buf[0] = (char)va_arg(ap, int);  
            buf[1] = '\0';
            s = buf;
            break;
        case 'p':
            strncpy(buf, "0x", 32);
            itoa(buf + 2, (unsigned long)(uintptr_t)va_arg(ap, void*), 16, 0);
            s = buf;
            break;
        case '%':
            buf[0] = '%';
            buf[1] = '\0';
            s = buf;
            break;
        default:
            buf[0] = '%';
            buf[1] = *fmt;
            buf[2] = '\0';
            s = buf;
            break;
        }

        while (*s && remaining > 1) {
            *p++ = *s++;
            remaining--;
        }
    }

    *p = '\0';
    *out = strdup(out2);
    return p - out2;
}

int snprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = va_arg(ap, const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)va_arg(ap, int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)va_arg(ap, void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, va_arg(ap, long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    va_end(ap);
    return p - out;
}

int vsnprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = va_arg(ap, const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)va_arg(ap, int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)va_arg(ap, void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, va_arg(ap, long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    va_end(ap);
    return p - out;
}


void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}
*/

struct proc* get_current_proc()
{
    return gProc[gActiveProc];
}

void append_mapping_values(void* user_va, void* pa, size_t size)
{
    struct proc* c = get_current_proc();

    c.mapping_values.insert(user_va, (pa, (long)size));
}

void global_init()
{
    gProc = new list<proc*%>();
}

int main()
{
    timerinit();
    trap_init();
    plic_init();
    plic_enable(10);

    w_stimecmp(r_time() + 10000000);

    uart_init();
    kinit();
    console_init();
    mmu_init();
    virtio_blk_init();
    read_superblock();

    global_init();

    w_stimecmp(r_time() + 10000000);

    int fork_flag;
    alloc_prog((char*)child_elf, fork_flag=0, exec_flag:0);
//    alloc_prog((char*)hello_elf, fork_flag=0);
//    alloc_prog((char*)hello2_elf, fork_flag=0);

    /// カーネルページからユーザープロセスをアクセス可能にする
    asm volatile("csrs sstatus, %0" : : "r"((1UL << 18)));


    /// ユーザープロセスへ降りる
    w_stimecmp(r_time() + 10000000);

    struct proc* p = gProc[0];

    uintptr_t usersp = (uint64_t)(p->context.sp);
    uint64_t usersatp = ((8L << 60) | (((uint64_t)p->pagetable) >> 12));
    uintptr_t entry = p->context.mepc;

    w_stimecmp(r_time() + 100000);

    gCPU.proc = p;

    //kernel_sp = read_s_sp();
    asm volatile(
        "mv %0, sp\n" // sp レジスタの値を出力オペランド %0 に
        : "=r"(kernel_sp) // %0 は r• レジスタに出力
        : // 入力オペランドなし
        : // 破壊するレジスタなし
    );
    enter_user(entry, usersp, usersatp, 10000UL);

    while (1);
}
