
void fun();

int main(){ 
    fun();
    asm ("li a7, 70\nmv a0, %0\necall\n"
         , 8);
         
    return 0;
}
