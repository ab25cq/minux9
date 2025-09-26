//#include "minux9.h"

int main(){ 
    asm ("li a7, 70\nmv a0, %0\necall\n"
         , 7);
    
    return 0;
}

