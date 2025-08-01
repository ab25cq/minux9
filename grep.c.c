/// previous struct definition ///
/// struct definition ///
typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  long uint_least64_t;

typedef long long int_fast8_t;

typedef long long int_fast16_t;

typedef long long int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned long  long uint_fast8_t;

typedef unsigned long  long uint_fast16_t;

typedef unsigned long  long uint_fast32_t;

typedef unsigned long  long uint_fast64_t;

typedef long intptr_t;

typedef unsigned long  int uintptr_t;

typedef __builtin_va_list __gnuc_va_list;

typedef __builtin_va_list va_list;

struct header
{
    struct header* next;
    unsigned int size;
};

typedef struct header Header;

struct header base;
struct header* freep=0;
// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
int main();
void* sbrk(long incr);
struct header* morecore(unsigned int nunits);
void* malloc(unsigned int nbytes);
void free(void* ap);
void* calloc(unsigned long  int nmemb, unsigned long  int size);
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
void puts(const char* s);
char* strncat(char* dest, const char* src, unsigned long  int n);
char* strtok(char* s, const char* delim);
void exit(int n);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
int printf(const char* fmt, ...);
void putchar(char c);
// uniq global variable
// inline function

// body function
int main(){
char* p1_0;
char* p2_1;
char* p3_2;
    printf("--- Malloc Test Start ---\n");
    printf("1. Allocating 10 bytes...\n");
    p1_0=malloc(10);
    if(    p1_0==0    ) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n",p1_0);
    printf("2. Allocating 20 bytes...\n");
    p2_1=malloc(20);
    if(    p2_1==0    ) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n",p2_1);
    printf("3. Freeing first block...\n");
    free(p1_0);
    printf("OK.\n");
    printf("4. Allocating 5 bytes (should reuse block)...\n");
    p3_2=malloc(5);
    if(    p3_2==0    ) {
        printf("Failed!\n");
        return 1;
    }
    printf("OK. Got pointer: %p\n",p3_2);
    printf("--- Malloc Test Complete ---\n");
    while(    1    ) {
        ;
    }
    return 0;
}

void* sbrk(long incr){
char* current_brk_3_3;
void* __result_obj__1_4;
void* __result_obj__2_5;
void* __result_obj__3_6;
void* __result_obj__4_7;
current_brk_3_3 = (void*)0;
__result_obj__1_4 = (void*)0;
__result_obj__2_5 = (void*)0;
__result_obj__3_6 = (void*)0;
__result_obj__4_7 = (void*)0;
    current_brk_3_3=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_3_3==(char*)-1    ) {
        __result_obj__1_4=(void*)-1;
        return __result_obj__1_4;
    }
    if(    incr==0    ) {
        __result_obj__2_5=current_brk_3_3;
        return __result_obj__2_5;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_3_3+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__3_6=(void*)-1;
        return __result_obj__3_6;
    }
    __result_obj__4_7=current_brk_3_3;
    return __result_obj__4_7;
}

struct header* morecore(unsigned int nunits){
char* cp_4_8;
struct header* up_5_9;
struct header* __result_obj__5_10;
struct header* __result_obj__6_11;
cp_4_8 = (void*)0;
up_5_9 = (void*)0;
__result_obj__5_10 = (void*)0;
__result_obj__6_11 = (void*)0;
    cp_4_8=(void*)0;
    up_5_9=(void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_4_8=sbrk(nunits*sizeof(struct header));
    if(    cp_4_8==(char*)-1    ) {
        __result_obj__5_10=(void*)0;
        return __result_obj__5_10;
    }
    up_5_9=(struct header*)cp_4_8;
    up_5_9->size=nunits;
    free((void*)(up_5_9+1));
    __result_obj__6_11=freep;
    return __result_obj__6_11;
}

void* malloc(unsigned int nbytes){
struct header* p_6_12;
struct header* prevp_7_13;
unsigned int nunits_8_14;
void* __result_obj__7_15;
void* __result_obj__8_16;
p_6_12 = (void*)0;
prevp_7_13 = (void*)0;
memset(&nunits_8_14, 0, sizeof(unsigned int));
__result_obj__7_15 = (void*)0;
__result_obj__8_16 = (void*)0;
    memset(&p_6_12,0,sizeof(struct header*));
    memset(&prevp_7_13,0,sizeof(struct header*));
    memset(&nunits_8_14,0,sizeof(unsigned int));
    nunits_8_14=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_7_13=freep)==0    ) {
        base.next=freep=prevp_7_13=&base;
        base.size=0;
    }
    for(    p_6_12=prevp_7_13->next    ;    ;    prevp_7_13=p_6_12,p_6_12=p_6_12->next    ){
        if(        p_6_12->size>=nunits_8_14        ) {
            if(            p_6_12->size==nunits_8_14            ) {
                prevp_7_13->next=p_6_12->next;
            }
            else {
                p_6_12->size-=nunits_8_14;
                p_6_12+=p_6_12->size;
                p_6_12->size=nunits_8_14;
            }
            freep=prevp_7_13;
            __result_obj__7_15=(void*)(p_6_12+1);
            return __result_obj__7_15;
        }
        if(        p_6_12==freep        ) {
            if(            (p_6_12=morecore(nunits_8_14))==0            ) {
                __result_obj__8_16=(void*)0;
                return __result_obj__8_16;
            }
        }
    }
}

void free(void* ap){
struct header* bp_9_17;
struct header* p_10_18;
bp_9_17 = (void*)0;
p_10_18 = (void*)0;
    memset(&bp_9_17,0,sizeof(struct header*));
    memset(&p_10_18,0,sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_9_17=(struct header*)ap-1;
    for(    p_10_18=freep    ;    !(bp_9_17>p_10_18&&bp_9_17<p_10_18->next)    ;    p_10_18=p_10_18->next    ){
        if(        p_10_18>=p_10_18->next&&(bp_9_17>p_10_18||bp_9_17<p_10_18->next)        ) {
            break;
        }
    }
    if(    bp_9_17+bp_9_17->size==p_10_18->next    ) {
        bp_9_17->size+=p_10_18->next->size;
        bp_9_17->next=p_10_18->next->next;
    }
    else {
        bp_9_17->next=p_10_18->next;
    }
    if(    p_10_18+p_10_18->size==bp_9_17    ) {
        p_10_18->size+=bp_9_17->size;
        p_10_18->next=bp_9_17->next;
    }
    else {
        p_10_18->next=bp_9_17;
    }
    freep=p_10_18;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_11_19;
void* __result_obj__9_20;
void* ptr_12_21;
void* __result_obj__10_22;
memset(&total_size_11_19, 0, sizeof(unsigned long  int));
__result_obj__9_20 = (void*)0;
ptr_12_21 = (void*)0;
__result_obj__10_22 = (void*)0;
    total_size_11_19=nmemb*size;
    if(    total_size_11_19==0    ) {
        __result_obj__9_20=((void*)0);
        return __result_obj__9_20;
    }
    ptr_12_21=malloc(total_size_11_19);
    if(    ptr_12_21!=((void*)0)    ) {
        memset(ptr_12_21,0,total_size_11_19);
    }
    __result_obj__10_22=ptr_12_21;
    return __result_obj__10_22;
}

char* strdup(const char* s){
char* s2_13_23;
unsigned long  int len_14_24;
char* p_15_25;
char* __result_obj__11_26;
s2_13_23 = (void*)0;
memset(&len_14_24, 0, sizeof(unsigned long  int));
p_15_25 = (void*)0;
__result_obj__11_26 = (void*)0;
    s2_13_23=s;
    len_14_24=strlen(s2_13_23)+1;
    p_15_25=malloc(len_14_24);
    if(    p_15_25    ) {
        memcpy(p_15_25,s2_13_23,len_14_24);
    }
    __result_obj__11_26=p_15_25;
    return __result_obj__11_26;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__12_27;
char* __result_obj__13_28;
char* __result_obj__14_29;
__result_obj__12_27 = (void*)0;
__result_obj__13_28 = (void*)0;
__result_obj__14_29 = (void*)0;
    if(    !*needle    ) {
        __result_obj__12_27=(char*)haystack;
        return __result_obj__12_27;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_16_30=haystack;
        const char* n_17_31=needle;
        while(        *h_16_30&&*n_17_31&&(*h_16_30==*n_17_31)        ) {
            h_16_30++;
            n_17_31++;
        }
        if(        !*n_17_31        ) {
            __result_obj__13_28=(char*)haystack;
            return __result_obj__13_28;
        }
    }
    __result_obj__14_29=((void*)0);
    return __result_obj__14_29;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_18_32;
int i_19_33;
void* __result_obj__15_34;
cdst_18_32 = (void*)0;
__result_obj__15_34 = (void*)0;
    cdst_18_32=(char*)dst;
    for(    i_19_33=0    ;    i_19_33<n    ;    i_19_33++    ){
        cdst_18_32[i_19_33]=c;
    }
    __result_obj__15_34=dst;
    return __result_obj__15_34;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_20_35;
const unsigned char* s2_21_36;
s1_20_35 = (void*)0;
s2_21_36 = (void*)0;
    memset(&s1_20_35,0,sizeof(const unsigned char*));
    memset(&s2_21_36,0,sizeof(const unsigned char*));
    s1_20_35=v1;
    s2_21_36=v2;
    while(    n-->0    ) {
        if(        *s1_20_35!=*s2_21_36        ) {
            return *s1_20_35-*s2_21_36;
        }
        s1_20_35++,s2_21_36++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_22_37;
char* d_23_38;
void* __result_obj__16_39;
void* __result_obj__17_40;
s_22_37 = (void*)0;
d_23_38 = (void*)0;
__result_obj__16_39 = (void*)0;
__result_obj__17_40 = (void*)0;
    s_22_37=(void*)0;
    d_23_38=(void*)0;
    if(    n==0    ) {
        __result_obj__16_39=dst;
        return __result_obj__16_39;
    }
    s_22_37=src;
    d_23_38=dst;
    if(    s_22_37<d_23_38&&s_22_37+n>d_23_38    ) {
        s_22_37+=n;
        d_23_38+=n;
        while(        n-->0        ) {
            *--d_23_38=*--s_22_37;
        }
    }
    else {
        while(        n-->0        ) {
            *d_23_38++=*s_22_37++;
        }
    }
    __result_obj__17_40=dst;
    return __result_obj__17_40;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__18_41;
__result_obj__18_41 = (void*)0;
    __result_obj__18_41=memmove(dst,src,n);
    return __result_obj__18_41;
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
char* os_24_42;
char* __result_obj__19_43;
os_24_42 = (void*)0;
__result_obj__19_43 = (void*)0;
    os_24_42=(void*)0;
    os_24_42=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__19_43=os_24_42;
    return __result_obj__19_43;
}

int strlen(const char* s){
int n_25_44;
memset(&n_25_44, 0, sizeof(int));
    memset(&n_25_44,0,sizeof(int));
    for(    n_25_44=0    ;    s[n_25_44]    ;    n_25_44++    ){
    }
    return n_25_44;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_26_45;
char* __result_obj__20_46;
d_26_45 = (void*)0;
__result_obj__20_46 = (void*)0;
    d_26_45=dest;
    while(    *d_26_45    ) {
        d_26_45++;
    }
    while(    n--&&*src    ) {
        *d_26_45++=*src++;
    }
    *d_26_45=0;
    __result_obj__20_46=dest;
    return __result_obj__20_46;
}

char* strtok(char* s, const char* delim){
static char* next_27_47;
char* start_28_48;
char* p_29_49;
char* __result_obj__21_50;
int is_delim_31_51;
char* __result_obj__22_52;
int is_delim_33_53;
char* __result_obj__23_54;
next_27_47 = (void*)0;
start_28_48 = (void*)0;
p_29_49 = (void*)0;
__result_obj__21_50 = (void*)0;
memset(&is_delim_31_51, 0, sizeof(int));
__result_obj__22_52 = (void*)0;
memset(&is_delim_33_53, 0, sizeof(int));
__result_obj__23_54 = (void*)0;
    next_27_47=(void*)0;
    start_28_48=(void*)0;
    p_29_49=(void*)0;
    if(    s!=((void*)0)    ) {
        next_27_47=s;
    }
    if(    next_27_47==((void*)0)    ) {
        __result_obj__21_50=((void*)0);
        return __result_obj__21_50;
    }
    start_28_48=next_27_47;
    while(    *start_28_48!=0    ) {
        const char* d_30_55=delim;
        is_delim_31_51=0;
        while(        *d_30_55!=0        ) {
            if(            *start_28_48==*d_30_55            ) {
                is_delim_31_51=1;
                break;
            }
            d_30_55++;
        }
        if(        !is_delim_31_51        ) {
            break;
        }
        start_28_48++;
    }
    if(    *start_28_48==0    ) {
        next_27_47=((void*)0);
        __result_obj__22_52=((void*)0);
        return __result_obj__22_52;
    }
    p_29_49=start_28_48;
    while(    *p_29_49!=0    ) {
        const char* d_32_56=delim;
        is_delim_33_53=0;
        while(        *d_32_56!=0        ) {
            if(            *p_29_49==*d_32_56            ) {
                is_delim_33_53=1;
                break;
            }
            d_32_56++;
        }
        if(        is_delim_33_53        ) {
            break;
        }
        p_29_49++;
    }
    if(    *p_29_49==0    ) {
        next_27_47=((void*)0);
    }
    else {
        *p_29_49=0;
        next_27_47=p_29_49+1;
    }
    __result_obj__23_54=start_28_48;
    return __result_obj__23_54;
}

void exit(int n){
    while(    1    ) {
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_34_57;
int i_36_58;
int negative_37_59;
char* __result_obj__24_60;
int digit_38_61;
char* __result_obj__25_62;
p_34_57 = (void*)0;
memset(&i_36_58, 0, sizeof(int));
memset(&negative_37_59, 0, sizeof(int));
__result_obj__24_60 = (void*)0;
memset(&digit_38_61, 0, sizeof(int));
__result_obj__25_62 = (void*)0;
    p_34_57=buf;
    char tmp_35_63[32];
    memset(&tmp_35_63, 0, sizeof(char)    *(32)    );
    memset(&tmp_35_63,0,sizeof(char)*(32));
    i_36_58=0;
    negative_37_59=0;
    if(    base<2||base>16    ) {
        *p_34_57=0;
        __result_obj__24_60=p_34_57;
        return __result_obj__24_60;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_37_59=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_38_61=val_%base;
        tmp_35_63[i_36_58++]=(((((digit_38_61<10)))?((48+digit_38_61)):((97+digit_38_61-10))));
        val_/=base;
    } while(    val_    );
    if(    negative_37_59    ) {
        *p_34_57++=45;
    }
    while(    i_36_58--    ) {
        *p_34_57++=tmp_35_63[i_36_58];
    }
    *p_34_57=0;
    __result_obj__25_62=buf;
    return __result_obj__25_62;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_40_64;
const char* s_41_65;
unsigned long  int remaining_43_66;
p_40_64 = (void*)0;
s_41_65 = (void*)0;
memset(&remaining_43_66, 0, sizeof(unsigned long  int));
    s_41_65=(void*)0;
    char out2_39_67[512];
    memset(&out2_39_67, 0, sizeof(char)    *(512)    );
    memset(&out2_39_67,0,sizeof(char)*(512));
    p_40_64=out2_39_67;
    char buf_42_68[32];
    memset(&buf_42_68, 0, sizeof(char)    *(32)    );
    memset(&buf_42_68,0,sizeof(char)*(32));
    remaining_43_66=sizeof(out2_39_67);
    for(    ;    *fmt&&remaining_43_66>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_40_64++=*fmt;
            remaining_43_66--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_42_68,__builtin_va_arg(ap,int),10,1);
            s_41_65=buf_42_68;
            break;
            case 117:
            itoa(buf_42_68,__builtin_va_arg(ap,unsigned int),10,0);
            s_41_65=buf_42_68;
            break;
            case 120:
            itoa(buf_42_68,__builtin_va_arg(ap,unsigned int),16,0);
            s_41_65=buf_42_68;
            break;
            case 115:
            s_41_65=__builtin_va_arg(ap,const char*);
            if(            !s_41_65            ) {
                s_41_65="(null)";
            }
            break;
            case 99:
            buf_42_68[0]=(char)__builtin_va_arg(ap,int);
            buf_42_68[1]=0;
            s_41_65=buf_42_68;
            break;
            case 112:
            strncpy(buf_42_68,"0x",32);
            itoa(buf_42_68+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_41_65=buf_42_68;
            break;
            case 37:
            buf_42_68[0]=37;
            buf_42_68[1]=0;
            s_41_65=buf_42_68;
            break;
            default:
            buf_42_68[0]=37;
            buf_42_68[1]=*fmt;
            buf_42_68[2]=0;
            s_41_65=buf_42_68;
            break;
        }
        while(        *s_41_65&&remaining_43_66>1        ) {
            *p_40_64++=*s_41_65++;
            remaining_43_66--;
        }
    }
    *p_40_64=0;
    *out=strdup(out2_39_67);
    return p_40_64-out2_39_67;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_44_69;
char* p_45_70;
const char* s_46_71;
unsigned long  int remaining_48_72;
memset(&ap_44_69, 0, sizeof(va_list));
p_45_70 = (void*)0;
s_46_71 = (void*)0;
memset(&remaining_48_72, 0, sizeof(unsigned long  int));
    memset(&ap_44_69,0,sizeof(va_list));
    s_46_71=(void*)0;
    __builtin_va_start(ap_44_69,fmt);
    p_45_70=out;
    char buf_47_73[32];
    memset(&buf_47_73, 0, sizeof(char)    *(32)    );
    memset(&buf_47_73,0,sizeof(char)*(32));
    remaining_48_72=out_size;
    if(    remaining_48_72==0    ) {
        __builtin_va_end(ap_44_69);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_48_72>1            ) {
                *p_45_70++=*fmt;
                remaining_48_72--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_46_71=__builtin_va_arg(ap_44_69,const char*);
            while(            *s_46_71&&remaining_48_72>1            ) {
                *p_45_70++=*s_46_71++;
                remaining_48_72--;
            }
            break;
            case 100:
            itoa(buf_47_73,__builtin_va_arg(ap_44_69,int),10,0);
            s_46_71=buf_47_73;
            while(            *s_46_71&&remaining_48_72>1            ) {
                *p_45_70++=*s_46_71++;
                remaining_48_72--;
            }
            break;
            case 120:
            itoa(buf_47_73,(unsigned int)__builtin_va_arg(ap_44_69,int),16,1);
            s_46_71=buf_47_73;
            while(            *s_46_71&&remaining_48_72>1            ) {
                *p_45_70++=*s_46_71++;
                remaining_48_72--;
            }
            break;
            case 99:
            if(            remaining_48_72>1            ) {
                *p_45_70++=(char)__builtin_va_arg(ap_44_69,int);
                remaining_48_72--;
            }
            break;
            case 112:
            s_46_71="0x";
            while(            *s_46_71&&remaining_48_72>1            ) {
                *p_45_70++=*s_46_71++;
                remaining_48_72--;
            }
            itoa(buf_47_73,(long)__builtin_va_arg(ap_44_69,void*),16,1);
            s_46_71=buf_47_73;
            while(            *s_46_71&&remaining_48_72>1            ) {
                *p_45_70++=*s_46_71++;
                remaining_48_72--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_47_73,__builtin_va_arg(ap_44_69,long),10,1);
                s_46_71=buf_47_73;
                while(                *s_46_71&&remaining_48_72>1                ) {
                    *p_45_70++=*s_46_71++;
                    remaining_48_72--;
                }
            }
            break;
            default:
            if(            remaining_48_72>1            ) {
                *p_45_70++=37;
                remaining_48_72--;
                if(                remaining_48_72>1                ) {
                    *p_45_70++=*fmt;
                    remaining_48_72--;
                }
            }
            break;
        }
    }
    *p_45_70=0;
    __builtin_va_end(ap_44_69);
    return p_45_70-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_49_74;
char* p_50_75;
const char* s_51_76;
unsigned long  int remaining_53_77;
memset(&ap_49_74, 0, sizeof(va_list));
p_50_75 = (void*)0;
s_51_76 = (void*)0;
memset(&remaining_53_77, 0, sizeof(unsigned long  int));
    memset(&ap_49_74,0,sizeof(va_list));
    s_51_76=(void*)0;
    __builtin_va_start(ap_49_74,fmt);
    p_50_75=out;
    char buf_52_78[32];
    memset(&buf_52_78, 0, sizeof(char)    *(32)    );
    memset(&buf_52_78,0,sizeof(char)*(32));
    remaining_53_77=out_size;
    if(    remaining_53_77==0    ) {
        __builtin_va_end(ap_49_74);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_53_77>1            ) {
                *p_50_75++=*fmt;
                remaining_53_77--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_51_76=__builtin_va_arg(ap_49_74,const char*);
            while(            *s_51_76&&remaining_53_77>1            ) {
                *p_50_75++=*s_51_76++;
                remaining_53_77--;
            }
            break;
            case 100:
            itoa(buf_52_78,__builtin_va_arg(ap_49_74,int),10,0);
            s_51_76=buf_52_78;
            while(            *s_51_76&&remaining_53_77>1            ) {
                *p_50_75++=*s_51_76++;
                remaining_53_77--;
            }
            break;
            case 120:
            itoa(buf_52_78,(unsigned int)__builtin_va_arg(ap_49_74,int),16,1);
            s_51_76=buf_52_78;
            while(            *s_51_76&&remaining_53_77>1            ) {
                *p_50_75++=*s_51_76++;
                remaining_53_77--;
            }
            break;
            case 99:
            if(            remaining_53_77>1            ) {
                *p_50_75++=(char)__builtin_va_arg(ap_49_74,int);
                remaining_53_77--;
            }
            break;
            case 112:
            s_51_76="0x";
            while(            *s_51_76&&remaining_53_77>1            ) {
                *p_50_75++=*s_51_76++;
                remaining_53_77--;
            }
            itoa(buf_52_78,(long)__builtin_va_arg(ap_49_74,void*),16,1);
            s_51_76=buf_52_78;
            while(            *s_51_76&&remaining_53_77>1            ) {
                *p_50_75++=*s_51_76++;
                remaining_53_77--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_52_78,__builtin_va_arg(ap_49_74,long),10,1);
                s_51_76=buf_52_78;
                while(                *s_51_76&&remaining_53_77>1                ) {
                    *p_50_75++=*s_51_76++;
                    remaining_53_77--;
                }
            }
            break;
            default:
            if(            remaining_53_77>1            ) {
                *p_50_75++=37;
                remaining_53_77--;
                if(                remaining_53_77>1                ) {
                    *p_50_75++=*fmt;
                    remaining_53_77--;
                }
            }
            break;
        }
    }
    *p_50_75=0;
    __builtin_va_end(ap_49_74);
    return p_50_75-out;
}

void printint(int val_, int base, int sign){
int i_55_79;
int negative_56_80;
unsigned int uval_57_81;
int digit_58_82;
memset(&i_55_79, 0, sizeof(int));
memset(&negative_56_80, 0, sizeof(int));
memset(&uval_57_81, 0, sizeof(unsigned int));
memset(&digit_58_82, 0, sizeof(int));
    memset(&uval_57_81,0,sizeof(unsigned int));
    char buf_54_83[33];
    memset(&buf_54_83, 0, sizeof(char)    *(33)    );
    memset(&buf_54_83,0,sizeof(char)*(33));
    i_55_79=0;
    negative_56_80=0;
    if(    sign&&val_<0    ) {
        negative_56_80=1;
        uval_57_81=-val_;
    }
    else {
        uval_57_81=(unsigned int)val_;
    }
    if(    uval_57_81==0    ) {
        putchar(48);
        return;
    }
    while(    uval_57_81>0    ) {
        digit_58_82=uval_57_81%base;
        buf_54_83[i_55_79++]=((((digit_58_82<10))?((48+digit_58_82)):((97+(digit_58_82-10)))));
        uval_57_81/=base;
    }
    if(    negative_56_80    ) {
        putchar(45);
    }
    while(    --i_55_79>=0    ) {
        putchar(buf_54_83[i_55_79]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_60_84;
int negative_61_85;
int digit_62_86;
memset(&i_60_84, 0, sizeof(int));
memset(&negative_61_85, 0, sizeof(int));
memset(&digit_62_86, 0, sizeof(int));
    char buf_59_87[65];
    memset(&buf_59_87, 0, sizeof(char)    *(65)    );
    memset(&buf_59_87,0,sizeof(char)*(65));
    i_60_84=0;
    negative_61_85=0;
    if(    sign&&(long)val_<0    ) {
        negative_61_85=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_62_86=val_%base;
        buf_59_87[i_60_84++]=((((digit_62_86<10))?((48+digit_62_86)):((97+(digit_62_86-10)))));
        val_/=base;
    }
    if(    negative_61_85    ) {
        putchar(45);
    }
    while(    --i_60_84>=0    ) {
        putchar(buf_59_87[i_60_84]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_64_88;
int negative_65_89;
int digit_66_90;
memset(&i_64_88, 0, sizeof(int));
memset(&negative_65_89, 0, sizeof(int));
memset(&digit_66_90, 0, sizeof(int));
    char buf_63_91[65];
    memset(&buf_63_91, 0, sizeof(char)    *(65)    );
    memset(&buf_63_91,0,sizeof(char)*(65));
    i_64_88=0;
    negative_65_89=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_65_89=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_66_90=val_%base;
        buf_63_91[i_64_88++]=((((digit_66_90<10))?((48+digit_66_90)):((97+(digit_66_90-10)))));
        val_/=base;
    }
    if(    negative_65_89    ) {
        putchar(45);
    }
    while(    --i_64_88>=0    ) {
        putchar(buf_63_91[i_64_88]);
    }
}

int printf(const char* fmt, ...){
va_list ap_67_92;
const char* p_68_93;
int lcount_69_94;
unsigned long  int val__70_95;
unsigned long  long val__71_96;
long val__72_97;
long long val__73_98;
int i_74_99;
int val__75_100;
unsigned int val__76_101;
unsigned long  int val__77_102;
char c_79_103;
memset(&ap_67_92, 0, sizeof(va_list));
p_68_93 = (void*)0;
memset(&lcount_69_94, 0, sizeof(int));
memset(&val__70_95, 0, sizeof(unsigned long  int));
memset(&val__71_96, 0, sizeof(unsigned long  long));
memset(&val__72_97, 0, sizeof(long));
memset(&val__73_98, 0, sizeof(long long));
memset(&i_74_99, 0, sizeof(int));
memset(&val__75_100, 0, sizeof(int));
memset(&val__76_101, 0, sizeof(unsigned int));
memset(&val__77_102, 0, sizeof(unsigned long  int));
memset(&c_79_103, 0, sizeof(char));
    memset(&ap_67_92,0,sizeof(va_list));
    p_68_93=(void*)0;
    __builtin_va_start(ap_67_92,fmt);
    for(    p_68_93=fmt    ;    *p_68_93    ;    p_68_93++    ){
        if(        *p_68_93!=37        ) {
            putchar(*p_68_93);
            continue;
        }
        p_68_93++;
        if(        *p_68_93==108        ) {
            lcount_69_94=1;
            if(            *(p_68_93+1)==108            ) {
                lcount_69_94=2;
                p_68_93++;
            }
            p_68_93++;
            switch (            *p_68_93) {
                case 120:
                {
                    if(                    lcount_69_94==1                    ) {
                        val__70_95=__builtin_va_arg(ap_67_92,unsigned long  int);
                        printlong(val__70_95,16,0);
                    }
                    else {
                        val__71_96=__builtin_va_arg(ap_67_92,unsigned long  long);
                        printlonglong(val__71_96,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_69_94==1                    ) {
                        val__72_97=__builtin_va_arg(ap_67_92,long);
                        printlong(val__72_97,10,1);
                    }
                    else {
                        val__73_98=__builtin_va_arg(ap_67_92,long  long);
                        printlonglong(val__73_98,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_74_99=0                    ;                    i_74_99<lcount_69_94                    ;                    i_74_99++                    ){
                        putchar(108);
                    }
                    putchar(*p_68_93);
                    break;
                }
            }
        }
        else {
            switch (            *p_68_93) {
                case 100:
                {
                    val__75_100=__builtin_va_arg(ap_67_92,int);
                    printint(val__75_100,10,1);
                    break;
                }
                case 120:
                {
                    val__76_101=__builtin_va_arg(ap_67_92,unsigned int);
                    printint(val__76_101,16,0);
                    break;
                }
                case 112:
                {
                    val__77_102=(unsigned long  int)__builtin_va_arg(ap_67_92,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__77_102,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_78_104=__builtin_va_arg(ap_67_92,const char*);
                    if(                    !s_78_104                    ) {
                        s_78_104="(null)";
                    }
                    while(                    *s_78_104                    ) {
                        putchar(*s_78_104++);
                    }
                    break;
                }
                case 99:
                {
                    c_79_103=(char)__builtin_va_arg(ap_67_92,int);
                    putchar(c_79_103);
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
                    putchar(*p_68_93);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_67_92);
    return 0;
}

void putchar(char c){
char d_0_105;
long _ret_1_106;
memset(&d_0_105, 0, sizeof(char));
memset(&_ret_1_106, 0, sizeof(long));
    memset(&_ret_1_106,0,sizeof(long));
    d_0_105=c;
    ({_ret_1_106; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&d_0_105);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_1_106=_a0; _ret_1_106; });
}

