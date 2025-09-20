/*
 * mocc でコンパイルして実行されるテスト
 */

typedef char *va_list;

int printf(char *fmt, ...);
int strcmp(char *s1, char *s2);
int vsnprintf(char *buf, int size, char *fmt, va_list ap);

int test_count = 0;
int fail_count = 0;

int ok(int ok, char *message);

int is(int expected, int actual, char *message) {
  if (ok(actual == expected, message) == 0) {
    printf("# expected %d but got %d\n", expected, actual);
  }
}

int ok(int ok, char *message) {
  test_count = test_count + 1;
  if (ok) {
    printf("ok - %s\n", message);
    return 1;
  } else {
    printf("not ok - %s\n", message);
    fail_count = fail_count + 1;
    return 0;
  }
}

void test_arithmetic() {
  printf("# arithmetic\n");
  is(1, 1, "1");
  is(36, 4 * 9, "4 * 9");
  is(-3, 1 - 6 * 2 / 3, "1 - 6 * 2 / 3");
  is(0, 0, "0");
  is(42, 42, "42");
  is(21, 5 + 20 - 4, "5+20-4");
  is(41, 12 + 34 - 5, " 12 + 34 - 5 ");
  is(77, (77), "(77)");
  is(6, 1 + (2 + 3), "1+(2+3)");
  is(0, 3 - (2 + 1), "3-(2+1)");
  is(12, 3 * 4, "3*4");
  is(33, (3 + 8) * 3, "(3+8)*3");
  is(47, 5 + 6 * 7, "5+6*7");
  is(15, 5 * (9 - 6), "5*(9-6)");
  is(4, (3 + 5) / 2, "(3+5)/2");
  is(5, (-3 * +5) + 20, "(-3*+5)+20");
  is(1, 1 < (11 * 9), "1<(11*9)");
  is(0, 13 < 13, "13<13");
  is(1, (1 + 1) > 1, "(1+1)>1");
  is(0, 13 > 13, "13 > 13");
  is(1, 13 >= 13, "13 >= 13");
  is(1, 13 <= 13, "13 <= 13");
  is(0, 42 >= 43, "42 >= 43");
  is(1, 123 == 123, "123 == 123");
  is(0, 123 == 321, "123 == 321");
  is(0, 123 != 123, "123 != 123");
  is(1, 123 != 321, "123 != 321");

  is(0, 65536 * 65536, "65536 * 65536 overflows");

  is(0, !42, "!42");
  is(1, !!42, "!!42");

  is(555, 1 == 1 ? 555 : 666, "1 == 1 ? 555 : 666");
  is(666, 1 < 0 ? 555 : 666, "1 < 0 ? 555 : 666");

  is(1, 123 || 123, "123 || 123");
  is(1, 123 && 123, "123 && 123");
  is(1, 0 || 123, "0 || 123");
  is(0, 0 && 123, "0 && 123");
  is(1, 123 || 0, "123 || 0");
  is(0, 123 && 0, "123 && 0");
  is(1, 1 && 2, "1 && 2");
  is(1, 2 || 2, "2 || 2");

  int a = 1;
  is(1, a++, "a = 1; a++");
  is(2, a++, "a++");
  is(3, a, "a");
  is(3, a--, "a--");
  is(2, a--, "a--");
  is(1, a, "a");

  is(2, ++a, "++a");
  is(3, ++a, "++a");
  is(2, --a, "--a");
  is(1, --a, "--a");

  a += 100;
  is(101, a, "a += 100");
  a -= 99;
  is(2, a, "a -= 99");
  a *= 1000;
  is(2000, a, "a *= 1000");
}

void test_switch() {
  int a = 1;
  switch (a) {
  case 1:
    ok(1, "switch 1");
    break;
  default:
    ok(0, "switch 1");
  }

  int i = 0;
  for (; i < 10; i++) {
    switch (i) {
    case 5:
      break;
    }
  }

  is(10, i, "switch break");
}

int fact(int n) {
  if (n == 1 || n == 0)
    return 1;
  return n * fact(n - 1);
}

int fib(int n) {
  if (n == 1 || n == 0)
    return 1;
  return fib(n - 2) + fib(n - 1);
}

int add(int x, int y) {
  return x + y;
}

int f_if(int b, int x, int y) {
  if (b) {
    return x;
  } else {
    return y;
  }
}

int f_return_return(int val) {
  return val * 2;
  return val;
}

int f_comment() {
  return 1 + /* 2 + */ 3 // ;
                 * 4;
}

void f_empty_return() {
  return;
}

void test_func() {
  printf("# func\n");
  is(1, fact(0), "fact(0)");
  is(120, fact(5), "fact(5)");
  is(3628800, fact(10), "fact(10)");

  is(1, fib(1), "fib(1)");
  is(2, fib(2), "fib(2)");
  is(3, fib(3), "fib(3)");
  is(89, fib(10), "fib(10)");

  is(66666, add(33333, 33333), "add(33333, 33333)");
  is(-66666, add(33333, -99999), "add(33333, -99999)");

  is(50000, f_if(1, 50000, 60000), "f_if(1, 50000, 60000)");
  is(60000, f_if(0, 50000, 60000), "f_if(1, 50000, 60000)");

  is(2, f_return_return(1), "f_return_return(1)");

  is(13, f_comment(), "f_comment()");
}

void test_array() {
  printf("# array\n");

  int a[100];

  a[49] = 99;
  a[50] = 999;
  a[51] = 9999;
  is(999, a[50], "a[50] = 999; a[50]");
  is(999, *(a + 50), "a[50] = 999; *(a+50)");

  *a = 12345;
  is(12345, a[0], "*a = 12345; a[0]");
  is(12345, *a, "*a = 12345; *a");

  int *p = a;
  is(12345, *p, "int *p = a; *p");
  is(999, *(p + 50), "int *p = a; *(p+50)");

  int mat[11][13];
  mat[9][11] = 4567;
  is(4567, mat[9][11], "mat[9][11] = 4567; mat[9][11]");
  is(4567, *(mat[9] + 11), "mat[9][11] = 4567; *(mat[9]+11)");
  is(4567, *(*(mat + 9) + 11), "mat[9][11] = 4567; *(*(mat+9)+11)");

  *(*(mat + 5) + 7) = 8901;
  is(8901, mat[5][7], "*(*(mat+5)+7) = 8901; mat[5][7]");
  is(8901, *(mat[5] + 7), "*(*(mat+5)+7) = 8901; *(mat[5]+7)");
  is(8901, *(*(mat + 5) + 7), "*(*(mat+5)+7) = 8901; *(*(mat+5)+7)");

  (*(mat + 2))[4] = 1111;
  is(1111, mat[2][4], "(*(mat+2)[4]) = 1111; mat[2][4]");

  *(mat[8] + 12) = 9999;
  is(9999, mat[8][12], "*(mat[8]+12) = 9999; mat[8][12]");
}

void test_string_literal() {
  printf("# string literal\n");

  char *s = "Hello,\nworld!";

  is('H', s[0], "s[0] == 'H'");
  is('\0', s[13], "s[13] == '\\0'");
  is('\n', s[6], "s[6] == '\\n'");

  char c1 = 'a';
  char c2 = '\'';
  is(97, c1, "'a' == 97");
  is(88, 'X', "'X' == 97");
  is(39, c2, "'\\'' == 39");
}

void test_for_while() {
  printf("# for while\n");

  int sum = 0;
  for (int n = 1; n <= 10; n = n + 1) {
    sum = sum + n;
  }
  is(55, sum, "for 1+..+10");

  int x = 1;
  for (; x < 1000;)
    x = x * 2;
  is(1024, x, "for(;x<1000;) x=x*2;");

  sum = 0;
  for (int n = 1; n < 10; n = n + 1) {
    sum = sum + n;
    if (sum > 10)
      break;
  }
  is(15, sum, "for 1+..+9, break at > 10");

  sum = 0;
  int n = 1;
  printf("# sum=%d n=%d\n", sum, n);
  while (n <= 10) {
    sum = sum + n;
    n = n + 1;
    printf("# sum=%d n=%d\n", sum, n);
  }
  is(55, sum, "while 1+..+10");

  sum = 0;
  n = 1;
  while (n <= 10) {
    sum = sum + n;
    n = n + 1;
    if (n == 10)
      break;
  }
  is(45, sum, "while 1+..+10, break at n == 10");

  sum = 0;
  for (n = 1; n < 10; n = n + 1) {
    if (n == 3)
      continue;
    sum = sum + n;
  }
  is(42, sum, "for 1+..+9, skip 3");

  int i = 0;
  for (;;) {
    i = i + 1;
    if (i == 5)
      break;
  }
  is(5, i, "for(;;) break at 5");
}

void test_pointer() {
  int x;
  int *p = &x;
  int **pp = &p;

  *p = 5656;
  is(5656, x, "*p = 5656; x");

  **pp = 8989;
  is(8989, x, "**pp = 8989; x");

  x = 7777;
  is(7777, *p, "x = 7777; *p");
  is(7777, **pp, "x = 7777; **pp");

  ok(&x > 0, "&x > 0");

  void *vp;
  is(8, sizeof(vp), "void *vp; sizeof(vp)");
}

void test_var() {
  int a = 2;
  int b = a * 3;
  is(2, a, "int a = 2");
  is(6, b, "int b = a * 3");
}

enum A { A1, A2, A3 };
typedef enum {
  B1,
  B2,
  B3,
} B;

struct Struct1 {
  int a;
  int b;
  char *s;
};

struct Struct2;

struct Struct2 {
  char c;
};

struct Struct3 {
  enum A a;
  B b;
};

void test_struct() {
  struct Struct1 s1;
  struct Struct1 *sp = &s1;
  struct Struct2 s2;
  s1.a = 100;
  is(100, s1.a, "s1.a = 100; s1.a");
  s1.s = "foobar";
  is(98, s1.s[3], "s1.s = 'foobar'; s1.s[3]");
  is(100, sp->a, "sp->a");

  char *p = s1.s;
  is(111, p[1], "p = s1.s; p[1]");

  struct Struct1 s3 = {1, 2, "hello"};
  is(1, s3.a, "struct Struct1 s3 = {1, 2, 'hello'}; s3.a");
  is(2, s3.b, "struct Struct1 s3 = {1, 2, 'hello'}; s3.b");
  is(0, strcmp("hello", s3.s), "struct Struct1 s3 = {1, 2, 'hello'}; s3.s");

  struct Struct1 s4 = {9999};
  is(9999, s4.a, "struct Struct1 s4 = {9999}; s4.a");
  is(0, s4.b, "struct Struct1 s4 = {9999}; s4.b");
  is(0, s4.s, "struct Struct1 s4 = {9999}; s4.s");
}

void test_enum() {
  is(0, A1, "enum A { A1, A2, A3 }; A1");
  is(1, A2, "enum A { A1, A2, A3 }; A2");
  is(2, B3, "B2");

  enum A a;
  B b;
}

typedef struct Struct2 S2;
typedef enum A A;

void test_typedef() {
  S2 s;
  s.c = 123;
  is(123, s.c, "typedef struct Struct2 S2; S2 s; s.c = 123; s.c");
}

A return_typedef_type() {
  A a;
  return a;
}

void test_sizeof() {
  printf("# sizeof\n");

  int x;
  char c;
  int a[10];
  int *p;
  int mat[10][10];

  is(4, sizeof x, "sizeof x");
  is(1, sizeof(c), "sizeof(c)");
  is(40, sizeof((a)), "sizeof((a))");
  is(8, sizeof(p), "sizeof(p)");
  is(400, sizeof(mat), "sizeof(mat)");
  is(40, sizeof(mat[0]), "sizeof(mat[0])");
  is(8, sizeof(&mat), "sizeof(mat&)");

  is(4, sizeof(int), "sizeof(int)");
  is(8, sizeof(void *), "sizeof(void *)");
  is(16, sizeof(struct Struct1), "sizeof(struct Struct1)");
  is(1, sizeof(struct Struct2), "sizeof(struct Struct2)");
  is(1, sizeof(S2), "sizeof(S2)");
  is(16, sizeof(struct {
       char c;
       void *p;
     }),
     "sizeof(struct { char c; void *p; })");
}

void test_vaargs_sub(char *expect, char *fmt, ...) {
  char string[80];
  va_list ap;
  va_start(ap, fmt);
  vsnprintf(string, 80, fmt, ap);
  ok(strcmp(expect, string) == 0, string);
}

void test_varargs() {
  test_vaargs_sub("hello va_list! x and 8888", "hello va_list! %c and %d", 'x',
                  8888);
}

int gvar_1 = 42;
int gvar_2 = -1;
int gvar_3; // 初期化子なし
int gvar_4[5] = {1, 2, 3};
struct Struct1 gvar_5 = {98765};

extern int ext_var;

void test_global_var() {
  is(42, gvar_1, "gvar_1 = 42");
  is(-1, gvar_2, "gvar_2 = -1");
  is(0, gvar_3, "gvar_3");
  is(1, gvar_4[0], "gvar_4 = {1, 2, 3}; gvar_4[0]");
  is(0, gvar_4[4], "gvar_4 = {1, 2, 3}; gvar_4[4]");
  is(11111, ext_var, "extern int ext_var");
  is(98765, gvar_5.a, "struct Struct1 gvar_5 = {98765}; gvar_5.a");
  is(0, gvar_5.b, "struct Struct1 gvar_5 = {98765}; gvar_5.b");
}

struct Struct1 *f_ptr_struct() {
  return &gvar_5;
}

void test_func_type() {
  is(98765, f_ptr_struct()->a, "f_ptr_struct()->a");
}

int main() {
  test_arithmetic();
  test_func();
  test_array();
  test_string_literal();
  test_for_while();
  test_pointer();
  test_global_var();
  test_var();
  test_struct();
  test_sizeof();
  test_enum();
  test_typedef();
  test_varargs();
  test_switch();

  printf("1..%d\n", test_count);

  return fail_count;
}
