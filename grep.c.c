#include "minux.h"

int printf(const char* fmt, ...);
void come_heap_final();
void* memset(void* dst, int c, unsigned int n);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void* memcpy(void* dst, const void* src, unsigned int n);
typedef __builtin_va_list __gnuc_va_list;
void puts(const char* s);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);

typedef __builtin_va_list va_list;

// uniq global variable
struct mem_block* free_list=((void*)0);

/*
char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);
*/

/*
struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

int gComeMallocLib=(int)0;
*/
int gComeDebugLib=0;

/*
int gComeGCLib=0;

int gNumAlloc=0;

int gNumFree=0;
*/

// inline function

// body function
void putchar(char c){
char d_0;
long _ret_1;
memset(&_ret_1, 0, sizeof(long));
    d_0=c;
    ({_ret_1; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&d_0);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_1=_a0; _ret_1; });
}

int main(int argc, char** argv){
void* __right_value0 = (void*)0;
char* a_2;
printf("%p\n", gComeDebugLib);
gComeDebugLib = 1;
printf("%d\n", gComeDebugLib);
while(1);
    come_heap_init(0, 0, 0);
    strncpy(a_2,"QAB",128);
    puts(a_2);
    exit(2);
come_heap_final();
}



void* memset(void* dst, int c, unsigned int n){
char* cdst_15;
int i_16;
void* __result_obj__13;
    cdst_15=(char*)dst;
    for(    i_16=0    ;    i_16<n    ;    i_16++    ){
        cdst_15[i_16]=c;
    }
    __result_obj__13 = dst;
    return __result_obj__13;
}

int strlen(const char* s){
int n_22;
memset(&n_22, 0, sizeof(int));
    for(    n_22=0    ;    s[n_22]    ;    n_22++    ){
        ;
    }
    return n_22;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_31;
int i_33;
int negative_34;
char* __result_obj__22;
int digit_35;
char* __result_obj__23;
    p_31=buf;
    char tmp_32[32];
    memset(&tmp_32, 0, sizeof(char)    *(32)    );
    i_33=0;
    negative_34=0;
    if(    base<2||base>16    ) {
        *p_31=0;
        __result_obj__22 = p_31;
        return __result_obj__22;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_34=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_35=val_%base;
        tmp_32[i_33++]=(((digit_35<10))?(48+digit_35):(97+digit_35-10));
        val_/=base;
    } while(    val_    );
    if(    negative_34    ) {
        *p_31++=45;
    }
    while(    i_33--    ) {
        *p_31++=tmp_32[i_33];
    }
    *p_31=0;
    __result_obj__23 = buf;
    return __result_obj__23;
}


int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_41;
char* p_42;
const char* s_43;
unsigned long  int remaining_45;
memset(&ap_41, 0, sizeof(va_list));
s_43 = (void*)0;
    __builtin_va_start(ap_41,fmt);
    p_42=out;
    char buf_44[32];
    memset(&buf_44, 0, sizeof(char)    *(32)    );
    remaining_45=out_size;
    if(    remaining_45==0    ) {
        __builtin_va_end(ap_41);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_45>1            ) {
                *p_42++=*fmt;
                remaining_45--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_43=__builtin_va_arg(ap_41,const char*);
            while(            *s_43&&remaining_45>1            ) {
                *p_42++=*s_43++;
                remaining_45--;
            }
            break;
            case 100:
            itoa(buf_44,__builtin_va_arg(ap_41,int),10,0);
            s_43=buf_44;
            while(            *s_43&&remaining_45>1            ) {
                *p_42++=*s_43++;
                remaining_45--;
            }
            break;
            case 120:
            itoa(buf_44,(unsigned int)__builtin_va_arg(ap_41,int),16,1);
            s_43=buf_44;
            while(            *s_43&&remaining_45>1            ) {
                *p_42++=*s_43++;
                remaining_45--;
            }
            break;
            case 99:
            if(            remaining_45>1            ) {
                *p_42++=(char)__builtin_va_arg(ap_41,int);
                remaining_45--;
            }
            break;
            case 112:
            s_43="0x";
            while(            *s_43&&remaining_45>1            ) {
                *p_42++=*s_43++;
                remaining_45--;
            }
            itoa(buf_44,(long)__builtin_va_arg(ap_41,void*),16,1);
            s_43=buf_44;
            while(            *s_43&&remaining_45>1            ) {
                *p_42++=*s_43++;
                remaining_45--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_44,__builtin_va_arg(ap_41,long),10,1);
                s_43=buf_44;
                while(                *s_43&&remaining_45>1                ) {
                    *p_42++=*s_43++;
                    remaining_45--;
                }
            }
            break;
            default:
            if(            remaining_45>1            ) {
                *p_42++=37;
                remaining_45--;
                if(                remaining_45>1                ) {
                    *p_42++=*fmt;
                    remaining_45--;
                }
            }
            break;
        }
    }
    *p_42=0;
    __builtin_va_end(ap_41);
    return p_42-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_46;
char* p_47;
const char* s_48;
unsigned long  int remaining_50;
memset(&ap_46, 0, sizeof(va_list));
s_48 = (void*)0;
    __builtin_va_start(ap_46,fmt);
    p_47=out;
    char buf_49[32];
    memset(&buf_49, 0, sizeof(char)    *(32)    );
    remaining_50=out_size;
    if(    remaining_50==0    ) {
        __builtin_va_end(ap_46);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_50>1            ) {
                *p_47++=*fmt;
                remaining_50--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_48=__builtin_va_arg(ap_46,const char*);
            while(            *s_48&&remaining_50>1            ) {
                *p_47++=*s_48++;
                remaining_50--;
            }
            break;
            case 100:
            itoa(buf_49,__builtin_va_arg(ap_46,int),10,0);
            s_48=buf_49;
            while(            *s_48&&remaining_50>1            ) {
                *p_47++=*s_48++;
                remaining_50--;
            }
            break;
            case 120:
            itoa(buf_49,(unsigned int)__builtin_va_arg(ap_46,int),16,1);
            s_48=buf_49;
            while(            *s_48&&remaining_50>1            ) {
                *p_47++=*s_48++;
                remaining_50--;
            }
            break;
            case 99:
            if(            remaining_50>1            ) {
                *p_47++=(char)__builtin_va_arg(ap_46,int);
                remaining_50--;
            }
            break;
            case 112:
            s_48="0x";
            while(            *s_48&&remaining_50>1            ) {
                *p_47++=*s_48++;
                remaining_50--;
            }
            itoa(buf_49,(long)__builtin_va_arg(ap_46,void*),16,1);
            s_48=buf_49;
            while(            *s_48&&remaining_50>1            ) {
                *p_47++=*s_48++;
                remaining_50--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_49,__builtin_va_arg(ap_46,long),10,1);
                s_48=buf_49;
                while(                *s_48&&remaining_50>1                ) {
                    *p_47++=*s_48++;
                    remaining_50--;
                }
            }
            break;
            default:
            if(            remaining_50>1            ) {
                *p_47++=37;
                remaining_50--;
                if(                remaining_50>1                ) {
                    *p_47++=*fmt;
                    remaining_50--;
                }
            }
            break;
        }
    }
    *p_47=0;
    __builtin_va_end(ap_46);
    return p_47-out;
}

void printint(int val_, int base, int sign){
int i_52;
int negative_53;
unsigned int uval_54;
int digit_55;
memset(&uval_54, 0, sizeof(unsigned int));
    char buf_51[33];
    memset(&buf_51, 0, sizeof(char)    *(33)    );
    i_52=0;
    negative_53=0;
    if(    sign&&val_<0    ) {
        negative_53=1;
        uval_54=-val_;
    }
    else {
        uval_54=(unsigned int)val_;
    }
    if(    uval_54==0    ) {
        putchar(48);
        return;
    }
    while(    uval_54>0    ) {
        digit_55=uval_54%base;
        buf_51[i_52++]=((digit_55<10)?(48+digit_55):(97+(digit_55-10)));
        uval_54/=base;
    }
    if(    negative_53    ) {
        putchar(45);
    }
    while(    --i_52>=0    ) {
        putchar(buf_51[i_52]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_57;
int negative_58;
int digit_59;
    char buf_56[65];
    memset(&buf_56, 0, sizeof(char)    *(65)    );
    i_57=0;
    negative_58=0;
    if(    sign&&(long)val_<0    ) {
        negative_58=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_59=val_%base;
        buf_56[i_57++]=((digit_59<10)?(48+digit_59):(97+(digit_59-10)));
        val_/=base;
    }
    if(    negative_58    ) {
        putchar(45);
    }
    while(    --i_57>=0    ) {
        putchar(buf_56[i_57]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_61;
int negative_62;
int digit_63;
    char buf_60[65];
    memset(&buf_60, 0, sizeof(char)    *(65)    );
    i_61=0;
    negative_62=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_62=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_63=val_%base;
        buf_60[i_61++]=((digit_63<10)?(48+digit_63):(97+(digit_63-10)));
        val_/=base;
    }
    if(    negative_62    ) {
        putchar(45);
    }
    while(    --i_61>=0    ) {
        putchar(buf_60[i_61]);
    }
}

int printf(const char* fmt, ...){
va_list ap_64;
const char* p_65;
int lcount_66;
unsigned long  int val__67;
unsigned long  long val__68;
long val__69;
long long val__70;
int i_71;
int val__72;
unsigned int val__73;
unsigned long  int val__74;
char c_76;
memset(&ap_64, 0, sizeof(va_list));
p_65 = (void*)0;
    __builtin_va_start(ap_64,fmt);
    for(    p_65=fmt    ;    *p_65    ;    p_65++    ){
        if(        *p_65!=37        ) {
            putchar(*p_65);
            continue;
        }
        p_65++;
        if(        *p_65==108        ) {
            lcount_66=1;
            if(            *(p_65+1)==108            ) {
                lcount_66=2;
                p_65++;
            }
            p_65++;
            switch (            *p_65) {
                case 120:
                {
                    if(                    lcount_66==1                    ) {
                        val__67=__builtin_va_arg(ap_64,unsigned long  int);
                        printlong(val__67,16,0);
                    }
                    else {
                        val__68=__builtin_va_arg(ap_64,unsigned long  long);
                        printlonglong(val__68,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_66==1                    ) {
                        val__69=__builtin_va_arg(ap_64,long);
                        printlong(val__69,10,1);
                    }
                    else {
                        val__70=__builtin_va_arg(ap_64,long  long);
                        printlonglong(val__70,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_71=0                    ;                    i_71<lcount_66                    ;                    i_71++                    ){
                        putchar(108);
                    }
                    putchar(*p_65);
                    break;
                }
            }
        }
        else {
            switch (            *p_65) {
                case 100:
                {
                    val__72=__builtin_va_arg(ap_64,int);
                    printint(val__72,10,1);
                    break;
                }
                case 120:
                {
                    val__73=__builtin_va_arg(ap_64,unsigned int);
                    printint(val__73,16,0);
                    break;
                }
                case 112:
                {
                    val__74=(unsigned long  int)__builtin_va_arg(ap_64,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__74,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_75=__builtin_va_arg(ap_64,const char*);
                    if(                    !s_75                    ) {
                        s_75="(null)";
                    }
                    while(                    *s_75                    ) {
                        putchar(*s_75++);
                    }
                    break;
                }
                case 99:
                {
                    c_76=(char)__builtin_va_arg(ap_64,int);
                    putchar(c_76);
                    break;
                }
                case 37:
                {
                    putchar(37);
                    break;
                }
                default:
                {
                    putchar(37);
                    putchar(*p_65);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_64);
    return 0;
}

void come_push_stackframe(char* sname, int sline, int id){
}

void come_pop_stackframe(){
}

void come_save_stackframe(char* sname, int sline){
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct buffer* buf_77;
int i_78;
void* __right_value3 = (void*)0;
}

void stackframe(){
}

char* come_get_stackframe(){
}


void come_heap_init(int come_malloc, int come_debug, int come_gc){
}

void come_heap_final(){
}


