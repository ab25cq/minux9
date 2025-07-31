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
struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
    char* class_name;
    char* sname;
    int sline;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
};
struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, int no_decrement, int no_free, void* result_obj);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);

// uniq global variable
struct mem_block* free_list=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

int gComeMallocLib=(int)0;

int gComeDebugLib=0;

int gComeGCLib=0;

int gNumAlloc=0;

int gNumFree=0;

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
    puts("AAA");
    a_2=(char*)come_calloc(1, sizeof(char)*(1*(128)), "grep.c", 34, "char*");
    strncpy(a_2,"QAB",128);
    puts(a_2);
    exit(2);
    (a_2 = come_decrement_ref_count(a_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
come_heap_final();
}

void* sbrk(long incr) {
    // まず、brk(0)を呼び出して現在のプログラムブレーク位置を取得
    char* current_brk = (char*)brk(0);
    if (current_brk == (char*)-1) {
        return (void*)-1; // 失敗
    }

    // incrが0なら、現在のブレーク位置を返すだけ
    if (incr == 0) {
        return current_brk;
    }

    // 新しいブレーク位置を設定するようカーネルに要求
    if (brk((long)(current_brk + incr)) == -1) {
        return (void*)-1; // 失敗
    }

    // 成功した場合、慣例に従い「以前の」ブレーク位置を返す
    return current_brk;
}

// メモリブロックのヘッダ
typedef struct header {
    struct header *next; // 次の空きブロックへのポインタ
    unsigned size;       // このブロックのサイズ (ヘッダ単位)
} Header;

Header base;          // 空のリストの先頭
Header *freep = 0; // 空きリストの先頭

// free関数（前方宣言）
void free(void *ap);

// sbrkを呼び出して、より多くのメモリをOSから取得する
Header *morecore(unsigned nunits) {
    char *cp;
    Header *up;

    if (nunits < 4096)
        nunits = 4096; // 最低でも4096単位を要求
    
    cp = sbrk(nunits * sizeof(Header));
    if (cp == (char *) -1) // メモリ不足
        return (void*)0;
        
    up = (Header *) cp;
    up->size = nunits;
    free((void *)(up + 1)); // 取得した領域をfreeに渡して空きリストに繋げる
    return freep;
}

// 汎用メモリアロケタ
void *malloc(unsigned nbytes) {
    Header *p, *prevp;
    unsigned nunits;

    // 必要なヘッダ数を計算（ヘッダ自身を含む）
    nunits = (nbytes + sizeof(Header) - 1) / sizeof(Header) + 1;

    if ((prevp = freep) == 0) { // 空きリストがまだない場合
        base.next = freep = prevp = &base;
        base.size = 0;
    }

    for (p = prevp->next; ; prevp = p, p = p->next) {
        if (p->size >= nunits) { // 十分な大きさのブロックが見つかった
            if (p->size == nunits) { // ちょうど同じサイズ
                prevp->next = p->next;
            } else { // 大きすぎるので、末尾を割り当てる
                p->size -= nunits;
                p += p->size;
                p->size = nunits;
            }
            freep = prevp;
            return (void *)(p + 1); // ヘッダの次のアドレスを返す
        }
        if (p == freep) { // 空きリストを一周した
            if ((p = morecore(nunits)) == 0)
                return (void*)0; // メモリ不足
        }
    }
}

// メモリブロックを空きリストに戻す
void free(void *ap) {
    Header *bp, *p;

    if(ap == 0) return;

    bp = (Header *)ap - 1; // ブロックヘッダを指す

    // 空きリストをスキャンして、bpを挿入する場所を見つける
    for (p = freep; !(bp > p && bp < p->next); p = p->next)
        if (p >= p->next && (bp > p || bp < p->next))
            break; // リストの先頭か末尾に解放されたブロックがある

    if (bp + bp->size == p->next) { // 上の隣接ブロックと結合
        bp->size += p->next->size;
        bp->next = p->next->next;
    } else {
        bp->next = p->next;
    }
    if (p + p->size == bp) { // 下の隣接ブロックと結合
        p->size += bp->size;
        p->next = bp->next;
    } else {
        p->next = bp;
    }
    freep = p;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_8;
void* __result_obj__7;
void* ptr_9;
void* __result_obj__8;
    total_size_8=nmemb*size;
    if(    total_size_8==0    ) {
        __result_obj__7 = ((void*)0);
        return __result_obj__7;
    }
    ptr_9=malloc(total_size_8);
    if(    ptr_9!=((void*)0)    ) {
        memset(ptr_9,0,total_size_8);
    }
    __result_obj__8 = ptr_9;
    return __result_obj__8;
}

char* strdup(const char* s){
char* s2_10;
unsigned long  int len_11;
char* p_12;
char* __result_obj__9;
    s2_10=s;
    len_11=strlen(s2_10)+1;
    p_12=malloc(len_11);
    if(    p_12    ) {
        memcpy(p_12,s2_10,len_11);
    }
    __result_obj__9 = p_12;
    return __result_obj__9;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__10;
char* __result_obj__11;
char* __result_obj__12;
    if(    !*needle    ) {
        __result_obj__10 = (char*)haystack;
        return __result_obj__10;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_13=haystack;
        const char* n_14=needle;
        while(        *h_13&&*n_14&&(*h_13==*n_14)        ) {
            h_13++;
            n_14++;
        }
        if(        !*n_14        ) {
            __result_obj__11 = (char*)haystack;
            return __result_obj__11;
        }
    }
    __result_obj__12 = ((void*)0);
    return __result_obj__12;
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

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_17;
const unsigned char* s2_18;
memset(&s1_17, 0, sizeof(const unsigned char*));
memset(&s2_18, 0, sizeof(const unsigned char*));
    s1_17=v1;
    s2_18=v2;
    while(    n-->0    ) {
        if(        *s1_17!=*s2_18        ) {
            return *s1_17-*s2_18;
        }
        s1_17++,s2_18++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_19;
char* d_20;
void* __result_obj__14;
void* __result_obj__15;
s_19 = (void*)0;
d_20 = (void*)0;
    if(    n==0    ) {
        __result_obj__14 = dst;
        return __result_obj__14;
    }
    s_19=src;
    d_20=dst;
    if(    s_19<d_20&&s_19+n>d_20    ) {
        s_19+=n;
        d_20+=n;
        while(        n-->0        ) {
            *--d_20=*--s_19;
        }
    }
    else {
        while(        n-->0        ) {
            *d_20++=*s_19++;
        }
    }
    __result_obj__15 = dst;
    return __result_obj__15;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__16;
    __result_obj__16 = memmove(dst,src,n);
    return __result_obj__16;
}

int strncmp(const char* p, const char* q, unsigned int n){
    while(    n>0&&*p&&*p==*q    ) {
        n--,p++,q++;
    }
    if(    n==0    ) {
        return 0;
    }
    return (unsigned char)*p-(unsigned char)*q;
}

char* strncpy(char* s, const char* t, int n){
char* os_21;
char* __result_obj__17;
os_21 = (void*)0;
    os_21=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__17 = os_21;
    return __result_obj__17;
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

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_23;
char* __result_obj__18;
    d_23=dest;
    while(    *d_23    ) {
        d_23++;
    }
    while(    n--&&*src    ) {
        *d_23++=*src++;
    }
    *d_23=0;
    __result_obj__18 = dest;
    return __result_obj__18;
}

char* strtok(char* s, const char* delim){
static char* next_24;
char* start_25;
char* p_26;
char* __result_obj__19;
int is_delim_28;
char* __result_obj__20;
int is_delim_30;
char* __result_obj__21;
next_24 = (void*)0;
start_25 = (void*)0;
p_26 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_24=s;
    }
    if(    next_24==((void*)0)    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
    }
    start_25=next_24;
    while(    *start_25!=0    ) {
        const char* d_27=delim;
        is_delim_28=0;
        while(        *d_27!=0        ) {
            if(            *start_25==*d_27            ) {
                is_delim_28=1;
                break;
            }
            d_27++;
        }
        if(        !is_delim_28        ) {
            break;
        }
        start_25++;
    }
    if(    *start_25==0    ) {
        next_24=((void*)0);
        __result_obj__20 = ((void*)0);
        return __result_obj__20;
    }
    p_26=start_25;
    while(    *p_26!=0    ) {
        const char* d_29=delim;
        is_delim_30=0;
        while(        *d_29!=0        ) {
            if(            *p_26==*d_29            ) {
                is_delim_30=1;
                break;
            }
            d_29++;
        }
        if(        is_delim_30        ) {
            break;
        }
        p_26++;
    }
    if(    *p_26==0    ) {
        next_24=((void*)0);
    }
    else {
        *p_26=0;
        next_24=p_26+1;
    }
    __result_obj__21 = start_25;
    return __result_obj__21;
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

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_37;
const char* s_38;
unsigned long  int remaining_40;
s_38 = (void*)0;
    char out2_36[512];
    memset(&out2_36, 0, sizeof(char)    *(512)    );
    p_37=out2_36;
    char buf_39[32];
    memset(&buf_39, 0, sizeof(char)    *(32)    );
    remaining_40=sizeof(out2_36);
    for(    ;    *fmt&&remaining_40>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_37++=*fmt;
            remaining_40--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_39,__builtin_va_arg(ap,int),10,1);
            s_38=buf_39;
            break;
            case 117:
            itoa(buf_39,__builtin_va_arg(ap,unsigned int),10,0);
            s_38=buf_39;
            break;
            case 120:
            itoa(buf_39,__builtin_va_arg(ap,unsigned int),16,0);
            s_38=buf_39;
            break;
            case 115:
            s_38=__builtin_va_arg(ap,const char*);
            if(            !s_38            ) {
                s_38="(null)";
            }
            break;
            case 99:
            buf_39[0]=(char)__builtin_va_arg(ap,int);
            buf_39[1]=0;
            s_38=buf_39;
            break;
            case 112:
            strncpy(buf_39,"0x",32);
            itoa(buf_39+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_38=buf_39;
            break;
            case 37:
            buf_39[0]=37;
            buf_39[1]=0;
            s_38=buf_39;
            break;
            default:
            buf_39[0]=37;
            buf_39[1]=*fmt;
            buf_39[2]=0;
            s_38=buf_39;
            break;
        }
        while(        *s_38&&remaining_40>1        ) {
            *p_37++=*s_38++;
            remaining_40--;
        }
    }
    *p_37=0;
    *out=strdup(out2_36);
    return p_37-out2_36;
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

void* alloc_from_pages(unsigned long  int size){
void* result_80;
void* __result_obj__25;
    result_80=((void*)0);
    size=(size+7&~7);
    result_80=calloc(1,size);
    __result_obj__25 = result_80;
    return __result_obj__25;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_81;
struct sMemHeader* prev_it_82;
struct sMemHeader* next_it_83;
unsigned long  int size_84;
struct sMemHeaderTiny* it_85;
struct sMemHeaderTiny* prev_it_86;
struct sMemHeaderTiny* next_it_87;
unsigned long  int size_88;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_81=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_81->allocated!=177783            ) {
                return;
            }
            it_81->allocated=0;
            prev_it_82=it_81->prev;
            next_it_83=it_81->next;
            if(            gAllocMem==it_81            ) {
                gAllocMem=next_it_83;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_82                ) {
                    prev_it_82->next=next_it_83;
                }
                if(                next_it_83                ) {
                    next_it_83->prev=prev_it_82;
                }
            }
            size_84=it_81->size;
            free(it_81);
            gNumFree++;
        }
        else {
            it_85=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_85->allocated!=177783            ) {
                return;
            }
            it_85->allocated=0;
            prev_it_86=it_85->prev;
            next_it_87=it_85->next;
            if(            gAllocMem==it_85            ) {
                gAllocMem=(struct sMemHeader*)next_it_87;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_86                ) {
                    prev_it_86->next=next_it_87;
                }
                if(                next_it_87                ) {
                    next_it_87->prev=prev_it_86;
                }
            }
            size_88=it_85->size;
            free(it_85);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_89;
struct sMemHeader* it_90;
int i_91;
int i_92;
void* __result_obj__26;
void* result_93;
struct sMemHeaderTiny* it_94;
void* __result_obj__27;
memset(&i_91, 0, sizeof(int));
memset(&i_92, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_89=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_90=result_89;
        it_90->allocated=177783;
        it_90->size=size+sizeof(struct sMemHeader);
        it_90->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_91=0            ;            i_91<gNumComeStackFrame            ;            i_91++            ){
                it_90->sname[i_91]=gComeStackFrameSName[i_91];
                it_90->sline[i_91]=gComeStackFrameSLine[i_91];
                it_90->id[i_91]=gComeStackFrameID[i_91];
            }
        }
        else {
            for(            i_92=0            ;            i_92<16            ;            i_92++            ){
                it_90->sname[i_92]=gComeStackFrameSName[gNumComeStackFrame-1-i_92];
                it_90->sline[i_92]=gComeStackFrameSLine[gNumComeStackFrame-1-i_92];
                it_90->id[i_92]=gComeStackFrameID[gNumComeStackFrame-1-i_92];
            }
        }
        come_pop_stackframe();
        it_90->next=gAllocMem;
        it_90->prev=((void*)0);
        it_90->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_90;
        }
        gAllocMem=it_90;
        gNumAlloc++;
        __result_obj__26 = (char*)result_89+sizeof(struct sMemHeader);
        return __result_obj__26;
    }
    else {
        result_93=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_94=result_93;
        it_94->allocated=177783;
        it_94->class_name=class_name;
        it_94->sname=sname;
        it_94->sline=sline;
        it_94->size=size+sizeof(struct sMemHeaderTiny);
        it_94->free_next=((void*)0);
        it_94->next=(struct sMemHeaderTiny*)gAllocMem;
        it_94->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_94;
        }
        gAllocMem=(struct sMemHeader*)it_94;
        gNumAlloc++;
        __result_obj__27 = (char*)result_93+sizeof(struct sMemHeaderTiny);
        return __result_obj__27;
    }
}



void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_100;
unsigned long  int* ref_count_101;
unsigned long  int* size2_102;
void* __result_obj__30;
    mem_100=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_101=(unsigned long  int*)mem_100;
    *ref_count_101=0;
    size2_102=(unsigned long  int*)(mem_100+sizeof(unsigned long  int));
    *size2_102=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__30 = mem_100+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__30;
}

void come_free(void* mem){
unsigned long  int* ref_count_103;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_103=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_103);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__31;
char* mem_104;
unsigned long  int* size_p_105;
unsigned long  int size_106;
void* result_107;
void* __result_obj__32;
    if(    !block    ) {
        __result_obj__31 = ((void*)0);
        return __result_obj__31;
    }
    mem_104=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_105=(unsigned long  int*)(mem_104+sizeof(unsigned long  int));
    size_106=*size_p_105-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_107=come_calloc(1,size_106,sname,sline,class_name);
    memcpy(result_107,block,size_106);
    __result_obj__32 = result_107;
    return __result_obj__32;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__33;
unsigned long  int* ref_count_108;
void* __result_obj__34;
    if(    mem==((void*)0)    ) {
        __result_obj__33 = mem;
        return __result_obj__33;
    }
    ref_count_108=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_108)++;
    __result_obj__34 = mem;
    return __result_obj__34;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_110;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_110=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_110;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, int no_decrement, int no_free, void* result_obj){
void* __result_obj__37;
void* __result_obj__38;
unsigned long  int* ref_count_111;
unsigned long  int count_112;
void (*finalizer_113)(void*);
void* __result_obj__39;
void* __result_obj__40;
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__37 = mem;
            return __result_obj__37;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__38 = ((void*)0);
        return __result_obj__38;
    }
    ref_count_111=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_111)--;
    }
    count_112=*ref_count_111;
    if(    !no_free&&count_112<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_113=protocol_fun;
            finalizer_113(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    __result_obj__40 = mem;
    return __result_obj__40;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_114)(void*);
void (*finalizer_115)(void*);
void (*finalizer_116)(void*);
unsigned long  int* ref_count_117;
unsigned long  int count_118;
void (*finalizer_119)(void*);
void (*finalizer_120)(void*);
void (*finalizer_121)(void*);
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&finalizer_120, 0, sizeof(void (*)(void*)));
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            return;
        }
    }
    if(    mem==((void*)0)    ) {
        return;
    }
    if(    call_finalizer_only    ) {
        if(        fun        ) {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_114=protocol_fun;
                finalizer_114(protocol_obj);
            }
            finalizer_115=fun;
            finalizer_115(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_116=protocol_fun;
                finalizer_116(protocol_obj);
            }
        }
    }
    else {
        ref_count_117=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_117)--;
        }
        count_118=*ref_count_117;
        if(        !no_free&&count_118<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_119=protocol_fun;
                        finalizer_119(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_120=fun;
                        finalizer_120(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_121=protocol_fun;
                        finalizer_121(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__41;
int len_122;
void* __right_value5 = (void*)0;
char* result_123;
char* __result_obj__42;
    if(    str==((void*)0)    ) {
        __result_obj__41 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__41;
    }
    len_122=strlen(str)+1;
    result_123=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_122)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_123,str,len_122);
    __result_obj__42 = (char*)come_increment_ref_count(result_123);
    (result_123 = come_decrement_ref_count(result_123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__42;
}

