#!/bin/bash

MOCC=${MOCC:-./mocc}
riscv_cc=riscv64-$RISCV_HOST-gcc

test_count=0

$riscv_cc -c test/helper.c -o test/helper.o

ok() {
  echo "ok - $*"
}

not_ok() {
  echo "not ok - $*"
  if [ "$TAP_BAIL" = 1 ]; then
    exit 1
  fi
}

compile_program() {
  input="$1"

  $MOCC - <<<"$input" > tmp.s || return $?
  $riscv_cc -static tmp.s test/helper.o -o tmp
}

run_program() {
  input="$1"

  if ! compile_program "$input"; then
    echo "# could not compile $input"
    return 255
  fi

  spike "$RISCV/riscv64-$RISCV_HOST/bin/pk" ./tmp | perl -ne 'print unless $.==1 && /^bbl loader\r$/'
  return "${PIPESTATUS[0]}"
}

assert_program_lives() {
  input="$1"
  run_program "$input"
  # 255 は segmentation fault とかなので
  if [ "$?" -eq 255 ]; then
    (( test_count++ ))
    not_ok "Program exited with 255"
  fi
}

assert_compile_error() {
  error="$1"
  input="$2"

  compile_program "$input" 2> tmp.err

  if [ "$?" -eq 0 ]; then
    (( test_count++ ))
    not_ok "$input -> compile error $error expected, but unexpectedly succeeded"
    return
  fi

  if grep --silent "$error" tmp.err; then
    (( test_count++ ))
    ok "$input -> compile error $error"
  else
    (( test_count++ ))
    not_ok "$input -> compile error $error expected, but got $(cat tmp.err)"
  fi
}

assert_program() {
  expected="$1"
  input="$2"

  run_program "$2"
  actual="$?"

  if [ "$actual" = "$expected" ]; then
    (( test_count++ ))
    ok "$input => $actual"
  else
    (( test_count++ ))
    not_ok "$input => $expected expected, but got $actual"
  fi
}

assert_program_output() {
  string="$1"
  input="$2"

  output=$(run_program "$input")

  if [ $? -ne 0 ]; then
    not_ok "program '$input' unexpectedly failed: $output"
    return
  fi

  if echo "$output" | grep --silent "$string"; then
    (( test_count++ ))
    ok "$input => has output '$string': $output"
  else
    (( test_count++ ))
    not_ok "$input => output '$string' expected, but got '$output'"
  fi
}

assert_expr() {
  assert_program "$1" "int main() { return $2 }"
}

assert() {
  assert_program "$1" "int main() { $2 }"
}

assert_compile_error "variable not found: 'x'" 'int foo() { int x; } int main() { return x; }'

assert_compile_error "variable not found: 'a'" 'int main() { return a; }'
assert_compile_error "variable not found: 'a'" 'int main() { a = a + 1; int a; }'
assert_compile_error "variable already defined: 'x'" 'int main() { int x; int x; }'
# assert_compile_error "variable already defined: 'num'" 'int foo(int num) { int num; }' # FIXME

assert_compile_error "too many elements in array initializer" 'int a[3] = {1, 2, 3, 4};'
assert_compile_error "global initializer not supported" 'int n = {1, 2, 3, 4};'

assert_compile_error "not in while or for loop" 'int main() { continue; }'

assert_compile_error "either struct name nor members not" 'struct;'
assert_compile_error "empty struct" 'struct A { int a; }; int main() { struct Z a; }'
assert_compile_error "already defined" 'struct A { int a; }; struct A { int b; }; int main() {}'
assert_compile_error "not a valid type" 'void a;'
assert_compile_error "must return value" 'int f() { return; }'

assert_program_output "func1 called" "void func1(); int main() { func1(); }"
assert_program_output "func2 called 42 + 999 = 1041" "void func2(); int main() { func2(42, 990+9); }"
assert_program_output "func2 called 9 + 81 = 90" "void func2(); int main() { int a; a = 9; func2(a, a*a); }"

echo
echo "1..$test_count"
