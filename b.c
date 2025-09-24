
int main(){ 
    asm("li a7, 70\n"   // システムコール番号
      "li a0, 3\n"    // 第1引数 = 3
      "ecall");       // 呼び出し
}

