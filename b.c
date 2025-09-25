
int main(){ 
  asm("li a7, 70\n"   // システムコール番号
    "li a0, 7\n"    // 第1引数 = 7
    "ecall");       // 呼び出し
  return 0;
}

