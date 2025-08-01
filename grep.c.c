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

typedef int pid_t;

typedef unsigned long  int size_t;

typedef long ptrdiff_t;

typedef char* string;

struct header
{
    struct header* next;
    unsigned int size;
};

typedef struct header Header;

extern struct header base;

extern struct header* freep;

struct buffer
{
    char* buf;
    int len;
    int size;
};

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
    char* class_name;
};

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern int gComeMallocLib;

extern int gComeDebugLib;

extern int gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void putchar(char c);
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
void come_get_stackframe();
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
_Bool buffer_equals(struct buffer* left, struct buffer* right);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
_Bool bool_equals(_Bool self, _Bool right);
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool bool_clone(_Bool self);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
struct list$1char$ph* charp_split_char(char* self, char c);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
char* charp_printable(char* str);
char* charp_sub_plain(char* self, char* str, char* replace);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* _Bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
void int_times(int self, void* parent, void (*block)(void*,int));
// uniq global variable
struct header base;

struct header* freep=0;

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

int gComeMallocLib=0;

int gComeDebugLib=0;

int gComeGCLib=0;

int gNumAlloc=0;

int gNumFree=0;

// inline function

// body function
void putchar(char c){
long _ret_0;
memset(&_ret_0, 0, sizeof(long));
    ({_ret_0; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&c);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_0=_a0; _ret_0; });
}

int main(){
void* __right_value0 = (void*)0;
char* a_1;
void* __right_value1 = (void*)0;
char* b_2;
int __result_obj__1;
    come_heap_init(0, 0, 0);
    a_1=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(4)), "grep.c", 11, "char*"));
    strncpy(a_1,"ABC",4);
    puts(a_1);
    b_2=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(4)), "grep.c", 16, "char*"));
    strncpy(b_2,"ABC",4);
    puts(b_2);
    exit(1);
    __result_obj__1 = 0;
    (a_1 = come_decrement_ref_count(a_1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (b_2 = come_decrement_ref_count(b_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_heap_final();
    return __result_obj__1;
}

void* sbrk(long incr){
char* current_brk_3;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
void* __result_obj__5;
    current_brk_3=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_3==(char*)-1    ) {
        __result_obj__2 = (void*)-1;
        return __result_obj__2;
    }
    if(    incr==0    ) {
        __result_obj__3 = current_brk_3;
        return __result_obj__3;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_3+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__4 = (void*)-1;
        return __result_obj__4;
    }
    __result_obj__5 = current_brk_3;
    return __result_obj__5;
}

struct header* morecore(unsigned int nunits){
char* cp_4;
struct header* up_5;
struct header* __result_obj__6;
struct header* __result_obj__7;
cp_4 = (void*)0;
up_5 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_4=sbrk(nunits*sizeof(struct header));
    if(    cp_4==(char*)-1    ) {
        __result_obj__6 = (void*)0;
        return __result_obj__6;
    }
    up_5=(struct header*)cp_4;
    up_5->size=nunits;
    free((void*)(up_5+1));
    __result_obj__7 = freep;
    return __result_obj__7;
}

void* malloc(unsigned int nbytes){
struct header* p_6;
struct header* prevp_7;
unsigned int nunits_8;
void* __result_obj__8;
void* __result_obj__9;
memset(&p_6, 0, sizeof(struct header*));
memset(&prevp_7, 0, sizeof(struct header*));
memset(&nunits_8, 0, sizeof(unsigned int));
    nunits_8=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_7=freep)==0    ) {
        base.next=freep=prevp_7=&base;
        base.size=0;
    }
    for(    p_6=prevp_7->next    ;    ;    prevp_7=p_6,p_6=p_6->next    ){
        if(        p_6->size>=nunits_8        ) {
            if(            p_6->size==nunits_8            ) {
                prevp_7->next=p_6->next;
            }
            else {
                p_6->size-=nunits_8;
                p_6+=p_6->size;
                p_6->size=nunits_8;
            }
            freep=prevp_7;
            printf("p %p\n",(void*)(p_6+1));
            __result_obj__8 = (void*)(p_6+1);
            return __result_obj__8;
        }
        if(        p_6==freep        ) {
            if(            (p_6=morecore(nunits_8))==0            ) {
                __result_obj__9 = (void*)0;
                return __result_obj__9;
            }
        }
    }
}

void free(void* ap){
struct header* bp_9;
struct header* p_10;
memset(&bp_9, 0, sizeof(struct header*));
memset(&p_10, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_9=(struct header*)ap-1;
    for(    p_10=freep    ;    !(bp_9>p_10&&bp_9<p_10->next)    ;    p_10=p_10->next    ){
        if(        p_10>=p_10->next&&(bp_9>p_10||bp_9<p_10->next)        ) {
            break;
        }
    }
    if(    bp_9+bp_9->size==p_10->next    ) {
        bp_9->size+=p_10->next->size;
        bp_9->next=p_10->next->next;
    }
    else {
        bp_9->next=p_10->next;
    }
    if(    p_10+p_10->size==bp_9    ) {
        p_10->size+=bp_9->size;
        p_10->next=bp_9->next;
    }
    else {
        p_10->next=bp_9;
    }
    freep=p_10;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_11;
void* __result_obj__10;
void* ptr_12;
void* __result_obj__11;
    total_size_11=nmemb*size;
    if(    total_size_11==0    ) {
        __result_obj__10 = ((void*)0);
        return __result_obj__10;
    }
    ptr_12=malloc(total_size_11);
    if(    ptr_12!=((void*)0)    ) {
        memset(ptr_12,0,total_size_11);
    }
    __result_obj__11 = ptr_12;
    return __result_obj__11;
}

char* strdup(const char* s){
char* s2_13;
unsigned long  int len_14;
char* p_15;
char* __result_obj__12;
    s2_13=s;
    len_14=strlen(s2_13)+1;
    p_15=malloc(len_14);
    if(    p_15    ) {
        memcpy(p_15,s2_13,len_14);
    }
    __result_obj__12 = p_15;
    return __result_obj__12;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__13;
char* __result_obj__14;
char* __result_obj__15;
    if(    !*needle    ) {
        __result_obj__13 = (char*)haystack;
        return __result_obj__13;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_16=haystack;
        const char* n_17=needle;
        while(        *h_16&&*n_17&&(*h_16==*n_17)        ) {
            h_16++;
            n_17++;
        }
        if(        !*n_17        ) {
            __result_obj__14 = (char*)haystack;
            return __result_obj__14;
        }
    }
    __result_obj__15 = ((void*)0);
    return __result_obj__15;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_18;
int i_19;
void* __result_obj__16;
    cdst_18=(char*)dst;
    for(    i_19=0    ;    i_19<n    ;    i_19++    ){
        cdst_18[i_19]=c;
    }
    __result_obj__16 = dst;
    return __result_obj__16;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_20;
const unsigned char* s2_21;
memset(&s1_20, 0, sizeof(const unsigned char*));
memset(&s2_21, 0, sizeof(const unsigned char*));
    s1_20=v1;
    s2_21=v2;
    while(    n-->0    ) {
        if(        *s1_20!=*s2_21        ) {
            return *s1_20-*s2_21;
        }
        s1_20++,s2_21++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_22;
char* d_23;
void* __result_obj__17;
void* __result_obj__18;
s_22 = (void*)0;
d_23 = (void*)0;
    if(    n==0    ) {
        __result_obj__17 = dst;
        return __result_obj__17;
    }
    s_22=src;
    d_23=dst;
    if(    s_22<d_23&&s_22+n>d_23    ) {
        s_22+=n;
        d_23+=n;
        while(        n-->0        ) {
            *--d_23=*--s_22;
        }
    }
    else {
        while(        n-->0        ) {
            *d_23++=*s_22++;
        }
    }
    __result_obj__18 = dst;
    return __result_obj__18;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__19;
    __result_obj__19 = memmove(dst,src,n);
    return __result_obj__19;
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
char* os_24;
char* __result_obj__20;
os_24 = (void*)0;
    os_24=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__20 = os_24;
    return __result_obj__20;
}

int strlen(const char* s){
int n_25;
memset(&n_25, 0, sizeof(int));
    for(    n_25=0    ;    s[n_25]    ;    n_25++    ){
        ;
    }
    return n_25;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_26;
char* __result_obj__21;
    d_26=dest;
    while(    *d_26    ) {
        d_26++;
    }
    while(    n--&&*src    ) {
        *d_26++=*src++;
    }
    *d_26=0;
    __result_obj__21 = dest;
    return __result_obj__21;
}

char* strtok(char* s, const char* delim){
static char* next_27;
char* start_28;
char* p_29;
char* __result_obj__22;
int is_delim_31;
char* __result_obj__23;
int is_delim_33;
char* __result_obj__24;
next_27 = (void*)0;
start_28 = (void*)0;
p_29 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_27=s;
    }
    if(    next_27==((void*)0)    ) {
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
    }
    start_28=next_27;
    while(    *start_28!=0    ) {
        const char* d_30=delim;
        is_delim_31=0;
        while(        *d_30!=0        ) {
            if(            *start_28==*d_30            ) {
                is_delim_31=1;
                break;
            }
            d_30++;
        }
        if(        !is_delim_31        ) {
            break;
        }
        start_28++;
    }
    if(    *start_28==0    ) {
        next_27=((void*)0);
        __result_obj__23 = ((void*)0);
        return __result_obj__23;
    }
    p_29=start_28;
    while(    *p_29!=0    ) {
        const char* d_32=delim;
        is_delim_33=0;
        while(        *d_32!=0        ) {
            if(            *p_29==*d_32            ) {
                is_delim_33=1;
                break;
            }
            d_32++;
        }
        if(        is_delim_33        ) {
            break;
        }
        p_29++;
    }
    if(    *p_29==0    ) {
        next_27=((void*)0);
    }
    else {
        *p_29=0;
        next_27=p_29+1;
    }
    __result_obj__24 = start_28;
    return __result_obj__24;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_34;
int i_36;
int negative_37;
char* __result_obj__25;
int digit_38;
char* __result_obj__26;
    p_34=buf;
    char tmp_35[32];
    memset(&tmp_35, 0, sizeof(char)    *(32)    );
    i_36=0;
    negative_37=0;
    if(    base<2||base>16    ) {
        *p_34=0;
        __result_obj__25 = p_34;
        return __result_obj__25;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_37=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_38=val_%base;
        tmp_35[i_36++]=(((digit_38<10))?(48+digit_38):(97+digit_38-10));
        val_/=base;
    } while(    val_    );
    if(    negative_37    ) {
        *p_34++=45;
    }
    while(    i_36--    ) {
        *p_34++=tmp_35[i_36];
    }
    *p_34=0;
    __result_obj__26 = buf;
    return __result_obj__26;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_40;
const char* s_41;
unsigned long  int remaining_43;
s_41 = (void*)0;
    char out2_39[512];
    memset(&out2_39, 0, sizeof(char)    *(512)    );
    p_40=out2_39;
    char buf_42[32];
    memset(&buf_42, 0, sizeof(char)    *(32)    );
    remaining_43=sizeof(out2_39);
    for(    ;    *fmt&&remaining_43>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_40++=*fmt;
            remaining_43--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_42,__builtin_va_arg(ap,int),10,1);
            s_41=buf_42;
            break;
            case 117:
            itoa(buf_42,__builtin_va_arg(ap,unsigned int),10,0);
            s_41=buf_42;
            break;
            case 120:
            itoa(buf_42,__builtin_va_arg(ap,unsigned int),16,0);
            s_41=buf_42;
            break;
            case 115:
            s_41=__builtin_va_arg(ap,const char*);
            if(            !s_41            ) {
                s_41="(null)";
            }
            break;
            case 99:
            buf_42[0]=(char)__builtin_va_arg(ap,int);
            buf_42[1]=0;
            s_41=buf_42;
            break;
            case 112:
            strncpy(buf_42,"0x",32);
            itoa(buf_42+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_41=buf_42;
            break;
            case 37:
            buf_42[0]=37;
            buf_42[1]=0;
            s_41=buf_42;
            break;
            default:
            buf_42[0]=37;
            buf_42[1]=*fmt;
            buf_42[2]=0;
            s_41=buf_42;
            break;
        }
        while(        *s_41&&remaining_43>1        ) {
            *p_40++=*s_41++;
            remaining_43--;
        }
    }
    *p_40=0;
    *out=strdup(out2_39);
    return p_40-out2_39;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_44;
char* p_45;
const char* s_46;
unsigned long  int remaining_48;
memset(&ap_44, 0, sizeof(va_list));
s_46 = (void*)0;
    __builtin_va_start(ap_44,fmt);
    p_45=out;
    char buf_47[32];
    memset(&buf_47, 0, sizeof(char)    *(32)    );
    remaining_48=out_size;
    if(    remaining_48==0    ) {
        __builtin_va_end(ap_44);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_48>1            ) {
                *p_45++=*fmt;
                remaining_48--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_46=__builtin_va_arg(ap_44,const char*);
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 100:
            itoa(buf_47,__builtin_va_arg(ap_44,int),10,0);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 120:
            itoa(buf_47,(unsigned int)__builtin_va_arg(ap_44,int),16,1);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 99:
            if(            remaining_48>1            ) {
                *p_45++=(char)__builtin_va_arg(ap_44,int);
                remaining_48--;
            }
            break;
            case 112:
            s_46="0x";
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            itoa(buf_47,(long)__builtin_va_arg(ap_44,void*),16,1);
            s_46=buf_47;
            while(            *s_46&&remaining_48>1            ) {
                *p_45++=*s_46++;
                remaining_48--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_47,__builtin_va_arg(ap_44,long),10,1);
                s_46=buf_47;
                while(                *s_46&&remaining_48>1                ) {
                    *p_45++=*s_46++;
                    remaining_48--;
                }
            }
            break;
            default:
            if(            remaining_48>1            ) {
                *p_45++=37;
                remaining_48--;
                if(                remaining_48>1                ) {
                    *p_45++=*fmt;
                    remaining_48--;
                }
            }
            break;
        }
    }
    *p_45=0;
    __builtin_va_end(ap_44);
    return p_45-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_49;
char* p_50;
const char* s_51;
unsigned long  int remaining_53;
memset(&ap_49, 0, sizeof(va_list));
s_51 = (void*)0;
    __builtin_va_start(ap_49,fmt);
    p_50=out;
    char buf_52[32];
    memset(&buf_52, 0, sizeof(char)    *(32)    );
    remaining_53=out_size;
    if(    remaining_53==0    ) {
        __builtin_va_end(ap_49);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_53>1            ) {
                *p_50++=*fmt;
                remaining_53--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_51=__builtin_va_arg(ap_49,const char*);
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 100:
            itoa(buf_52,__builtin_va_arg(ap_49,int),10,0);
            s_51=buf_52;
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 120:
            itoa(buf_52,(unsigned int)__builtin_va_arg(ap_49,int),16,1);
            s_51=buf_52;
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 99:
            if(            remaining_53>1            ) {
                *p_50++=(char)__builtin_va_arg(ap_49,int);
                remaining_53--;
            }
            break;
            case 112:
            s_51="0x";
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            itoa(buf_52,(long)__builtin_va_arg(ap_49,void*),16,1);
            s_51=buf_52;
            while(            *s_51&&remaining_53>1            ) {
                *p_50++=*s_51++;
                remaining_53--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_52,__builtin_va_arg(ap_49,long),10,1);
                s_51=buf_52;
                while(                *s_51&&remaining_53>1                ) {
                    *p_50++=*s_51++;
                    remaining_53--;
                }
            }
            break;
            default:
            if(            remaining_53>1            ) {
                *p_50++=37;
                remaining_53--;
                if(                remaining_53>1                ) {
                    *p_50++=*fmt;
                    remaining_53--;
                }
            }
            break;
        }
    }
    *p_50=0;
    __builtin_va_end(ap_49);
    return p_50-out;
}

void printint(int val_, int base, int sign){
int i_55;
int negative_56;
unsigned int uval_57;
int digit_58;
memset(&uval_57, 0, sizeof(unsigned int));
    char buf_54[33];
    memset(&buf_54, 0, sizeof(char)    *(33)    );
    i_55=0;
    negative_56=0;
    if(    sign&&val_<0    ) {
        negative_56=1;
        uval_57=-val_;
    }
    else {
        uval_57=(unsigned int)val_;
    }
    if(    uval_57==0    ) {
        putchar(48);
        return;
    }
    while(    uval_57>0    ) {
        digit_58=uval_57%base;
        buf_54[i_55++]=((digit_58<10)?(48+digit_58):(97+(digit_58-10)));
        uval_57/=base;
    }
    if(    negative_56    ) {
        putchar(45);
    }
    while(    --i_55>=0    ) {
        putchar(buf_54[i_55]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_60;
int negative_61;
int digit_62;
    char buf_59[65];
    memset(&buf_59, 0, sizeof(char)    *(65)    );
    i_60=0;
    negative_61=0;
    if(    sign&&(long)val_<0    ) {
        negative_61=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_62=val_%base;
        buf_59[i_60++]=((digit_62<10)?(48+digit_62):(97+(digit_62-10)));
        val_/=base;
    }
    if(    negative_61    ) {
        putchar(45);
    }
    while(    --i_60>=0    ) {
        putchar(buf_59[i_60]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_64;
int negative_65;
int digit_66;
    char buf_63[65];
    memset(&buf_63, 0, sizeof(char)    *(65)    );
    i_64=0;
    negative_65=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_65=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_66=val_%base;
        buf_63[i_64++]=((digit_66<10)?(48+digit_66):(97+(digit_66-10)));
        val_/=base;
    }
    if(    negative_65    ) {
        putchar(45);
    }
    while(    --i_64>=0    ) {
        putchar(buf_63[i_64]);
    }
}

int printf(const char* fmt, ...){
va_list ap_67;
const char* p_68;
int lcount_69;
unsigned long  int val__70;
unsigned long  long val__71;
long val__72;
long long val__73;
int i_74;
int val__75;
unsigned int val__76;
unsigned long  int val__77;
char c_79;
memset(&ap_67, 0, sizeof(va_list));
p_68 = (void*)0;
    __builtin_va_start(ap_67,fmt);
    for(    p_68=fmt    ;    *p_68    ;    p_68++    ){
        if(        *p_68!=37        ) {
            putchar(*p_68);
            continue;
        }
        p_68++;
        if(        *p_68==108        ) {
            lcount_69=1;
            if(            *(p_68+1)==108            ) {
                lcount_69=2;
                p_68++;
            }
            p_68++;
            switch (            *p_68) {
                case 120:
                {
                    if(                    lcount_69==1                    ) {
                        val__70=__builtin_va_arg(ap_67,unsigned long  int);
                        printlong(val__70,16,0);
                    }
                    else {
                        val__71=__builtin_va_arg(ap_67,unsigned long  long);
                        printlonglong(val__71,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_69==1                    ) {
                        val__72=__builtin_va_arg(ap_67,long);
                        printlong(val__72,10,1);
                    }
                    else {
                        val__73=__builtin_va_arg(ap_67,long  long);
                        printlonglong(val__73,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_74=0                    ;                    i_74<lcount_69                    ;                    i_74++                    ){
                        putchar(108);
                    }
                    putchar(*p_68);
                    break;
                }
            }
        }
        else {
            switch (            *p_68) {
                case 100:
                {
                    val__75=__builtin_va_arg(ap_67,int);
                    printint(val__75,10,1);
                    break;
                }
                case 120:
                {
                    val__76=__builtin_va_arg(ap_67,unsigned int);
                    printint(val__76,16,0);
                    break;
                }
                case 112:
                {
                    val__77=(unsigned long  int)__builtin_va_arg(ap_67,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__77,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_78=__builtin_va_arg(ap_67,const char*);
                    if(                    !s_78                    ) {
                        s_78="(null)";
                    }
                    while(                    *s_78                    ) {
                        putchar(*s_78++);
                    }
                    break;
                }
                case 99:
                {
                    c_79=(char)__builtin_va_arg(ap_67,int);
                    putchar(c_79);
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
                    putchar(*p_68);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_67);
    return 0;
}

void come_push_stackframe(char* sname, int sline, int id){
}

void come_pop_stackframe(){
}

void come_save_stackframe(char* sname, int sline){
}

void stackframe(){
}

void come_get_stackframe(){
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
}

void come_heap_final(){
}

void* alloc_from_pages(unsigned long  int size){
void* result_80;
void* __result_obj__27;
    result_80=((void*)0);
    size=(size+7&~7);
    result_80=calloc(1,size);
    __result_obj__27 = result_80;
    return __result_obj__27;
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
struct sMemHeaderTiny* it_90;
void* __result_obj__28;
    if(    gComeDebugLib    ) {
    }
    else {
        result_89=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_90=result_89;
        it_90->allocated=177783;
        it_90->class_name=class_name;
        it_90->sname=sname;
        it_90->sline=sline;
        it_90->size=size+sizeof(struct sMemHeaderTiny);
        it_90->free_next=((void*)0);
        it_90->next=(struct sMemHeaderTiny*)gAllocMem;
        it_90->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_90;
        }
        gAllocMem=(struct sMemHeader*)it_90;
        gNumAlloc++;
        __result_obj__28 = (char*)result_89+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_91;
char* __result_obj__29;
struct sMemHeaderTiny* it_92;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_91=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_91->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_91);
            exit(2);
        }
        __result_obj__29 = it_91->class_name;
        return __result_obj__29;
    }
    else {
        it_92=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_92->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_92);
            exit(2);
        }
        __result_obj__30 = it_92->class_name;
        return __result_obj__30;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_93;
struct sMemHeaderTiny* it_94;
    if(    gComeDebugLib    ) {
        it_93=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_93->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_93->class_name        ) {
            printf("(%s): ",it_93->class_name);
        }
        puts("");
    }
    else {
        it_94=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_94->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_94->class_name,it_94->sname,it_94->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_95;
unsigned long  int* ref_count_96;
unsigned long  int* size2_97;
void* __result_obj__31;
    mem_95=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_96=(unsigned long  int*)mem_95;
    *ref_count_96=0;
    size2_97=(unsigned long  int*)(mem_95+sizeof(unsigned long  int));
    *size2_97=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_95+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_98;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_98=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_98);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_99;
unsigned long  int* size_p_100;
unsigned long  int size_101;
void* result_102;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_99=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_100=(unsigned long  int*)(mem_99+sizeof(unsigned long  int));
    size_101=*size_p_100-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_102=come_calloc(1,size_101,sname,sline,class_name);
    memcpy(result_102,block,size_101);
    __result_obj__33 = result_102;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_103;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_103=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_103)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_104;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_104=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_104);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_105;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_105=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_105;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_106;
unsigned long  int count_107;
void (*finalizer_108)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__38 = mem;
            return __result_obj__38;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    ref_count_106=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_106)--;
    }
    count_107=*ref_count_106;
    if(    !no_free&&count_107<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_108=protocol_fun;
            finalizer_108(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    __result_obj__41 = mem;
    return __result_obj__41;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_109)(void*);
void (*finalizer_110)(void*);
void (*finalizer_111)(void*);
unsigned long  int* ref_count_112;
unsigned long  int count_113;
void (*finalizer_114)(void*);
void (*finalizer_115)(void*);
void (*finalizer_116)(void*);
memset(&finalizer_109, 0, sizeof(void (*)(void*)));
memset(&finalizer_110, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
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
                finalizer_109=protocol_fun;
                finalizer_109(protocol_obj);
            }
            finalizer_110=fun;
            finalizer_110(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_111=protocol_fun;
                finalizer_111(protocol_obj);
            }
        }
    }
    else {
        ref_count_112=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_112)--;
        }
        count_113=*ref_count_112;
        if(        !no_free&&count_113<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_114=protocol_fun;
                        finalizer_114(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_115=fun;
                        finalizer_115(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_116=protocol_fun;
                        finalizer_116(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__42;
int len_117;
void* __right_value2 = (void*)0;
char* result_118;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_117=strlen(str)+1;
    result_118=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_117)), "./comelang-minux9.h", 1361, "char*"));
    strncpy(result_118,str,len_117);
    __result_obj__43 = (char*)come_increment_ref_count(result_118);
    (result_118 = come_decrement_ref_count(result_118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value3 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__44;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3309, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__44 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__44, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__44;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value4 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__45;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3319, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__45 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__46;
void* __right_value5 = (void*)0;
struct buffer* result_119;
void* __right_value6 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__47;
    if(    self==((void*)0)    ) {
        __result_obj__46 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__46;
    }
    result_119=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3339, "struct buffer*"));
    result_119->size=self->size;
    __dec_obj3=result_119->buf,
    result_119->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3342, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_119->len=self->len;
    memcpy(result_119->buf,self->buf,self->len);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(result_119);
    come_call_finalizer(buffer_finalize, result_119, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
_Bool __result_obj__48;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__48 = string_equals(((char*)(__right_value7=buffer_to_string(left))),((char*)(__right_value8=buffer_to_string(right))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__48;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)    ) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)    ) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)    ) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
struct buffer* __result_obj__49;
void* __right_value9 = (void*)0;
char* old_buf_120;
int old_len_121;
int new_size_122;
void* __right_value10 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__50;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__49 = self;
        return __result_obj__49;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_120=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3390, "char*"));
        memcpy(old_buf_120,self->buf,self->size);
        old_len_121=self->len;
        new_size_122=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_122)), "./comelang-minux9.h", 3394, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_120,old_len_121);
        self->buf[old_len_121]=0;
        self->size=new_size_122;
        (old_buf_120 = come_decrement_ref_count(old_buf_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__50 = self;
    return __result_obj__50;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__51;
void* __right_value11 = (void*)0;
char* old_buf_123;
int old_len_124;
int new_size_125;
void* __right_value12 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__52;
    if(    self==((void*)0)    ) {
        __result_obj__51 = ((void*)0);
        return __result_obj__51;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_123=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang-minux9.h", 3413, "char*"));
        old_len_124=self->len;
        new_size_125=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_125)), "./comelang-minux9.h", 3417, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_123,old_len_124);
        self->buf[old_len_124]=0;
        self->size=new_size_125;
        (old_buf_123 = come_decrement_ref_count(old_buf_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__53;
int size_126;
void* __right_value13 = (void*)0;
char* old_buf_127;
int old_len_128;
int new_size_129;
void* __right_value14 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__54;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__53 = self;
        return __result_obj__53;
    }
    size_126=strlen(mem);
    if(    self->len+size_126+1+1>=self->size    ) {
        old_buf_127=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3439, "char*"));
        memcpy(old_buf_127,self->buf,self->size);
        old_len_128=self->len;
        new_size_129=(self->size+size_126+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_129)), "./comelang-minux9.h", 3443, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_127,old_len_128);
        self->buf[old_len_128]=0;
        self->size=new_size_129;
        (old_buf_127 = come_decrement_ref_count(old_buf_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_126);
    self->len+=size_126;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__55;
va_list args_131;
int len_132;
void* __right_value15 = (void*)0;
char* mem_133;
int size_134;
void* __right_value16 = (void*)0;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value17 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    char result_130[128];
    memset(&result_130, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_131,msg);
    snprintf(result_130,128,args_131);
    __builtin_va_end(args_131);
    len_132=strlen(result_130);
    mem_133=(char*)come_increment_ref_count(__builtin_string(result_130));
    size_134=strlen(mem_133);
    if(    self->len+size_134+1+1>=self->size    ) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3475, "char*"));
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "./comelang-minux9.h", 3479, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        (old_buf_135 = come_decrement_ref_count(old_buf_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_133,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    free(result_130);
    __result_obj__56 = self;
    (mem_133 = come_decrement_ref_count(mem_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__56;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__57;
int size_138;
void* __right_value18 = (void*)0;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* __right_value19 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__58;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    size_138=strlen(mem)+1;
    if(    self->len+size_138+1+1+1>=self->size    ) {
        old_buf_139=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3501, "char*"));
        memcpy(old_buf_139,self->buf,self->size);
        old_len_140=self->len;
        new_size_141=(self->size+size_138+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "./comelang-minux9.h", 3505, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_139,old_len_140);
        self->buf[old_len_140]=0;
        self->size=new_size_141;
        (old_buf_139 = come_decrement_ref_count(old_buf_139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_138);
    self->len+=size_138;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__59;
int* mem_142;
int size_143;
void* __right_value20 = (void*)0;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* __right_value21 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__60;
    if(    self==((void*)0)    ) {
        __result_obj__59 = ((void*)0);
        return __result_obj__59;
    }
    mem_142=&value;
    size_143=sizeof(int);
    if(    self->len+size_143+1+1>=self->size    ) {
        old_buf_144=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3528, "char*"));
        memcpy(old_buf_144,self->buf,self->size);
        old_len_145=self->len;
        new_size_146=(self->size+size_143+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_146)), "./comelang-minux9.h", 3532, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        (old_buf_144 = come_decrement_ref_count(old_buf_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_142,size_143);
    self->len+=size_143;
    self->buf[self->len]=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_147;
int size_148;
void* __right_value22 = (void*)0;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* __right_value23 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__61;
    mem_147=&value;
    size_148=sizeof(long);
    if(    self->len+size_148+1+1>=self->size    ) {
        old_buf_149=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3551, "char*"));
        memcpy(old_buf_149,self->buf,self->size);
        old_len_150=self->len;
        new_size_151=(self->size+size_148+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_151)), "./comelang-minux9.h", 3555, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_149,old_len_150);
        self->buf[old_len_150]=0;
        self->size=new_size_151;
        (old_buf_149 = come_decrement_ref_count(old_buf_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_147,size_148);
    self->len+=size_148;
    self->buf[self->len]=0;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__62;
short* mem_152;
int size_153;
void* __right_value24 = (void*)0;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* __right_value25 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_152=&value;
    size_153=sizeof(short);
    if(    self->len+size_153+1+1>=self->size    ) {
        old_buf_154=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3578, "char*"));
        memcpy(old_buf_154,self->buf,self->size);
        old_len_155=self->len;
        new_size_156=(self->size+size_153+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_156)), "./comelang-minux9.h", 3582, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_154,old_len_155);
        self->buf[old_len_155]=0;
        self->size=new_size_156;
        (old_buf_154 = come_decrement_ref_count(old_buf_154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_152,size_153);
    self->len+=size_153;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__64;
int len_157;
int new_size_158;
void* __right_value26 = (void*)0;
char* __dec_obj12;
int i_159;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    len_157=self->len;
    len_157=(len_157+3)&~3;
    if(    len_157>=self->size    ) {
        new_size_158=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_158)), "./comelang-minux9.h", 3606, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_158;
    }
    for(    i_159=self->len    ;    i_159<len_157    ;    i_159++    ){
        self->buf[i_159]=0;
    }
    self->len=len_157;
    __result_obj__65 = self;
    return __result_obj__65;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* result_160;
struct buffer* __result_obj__66;
struct buffer* __result_obj__67;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3636, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__66 = (struct buffer*)come_increment_ref_count(result_160);
        come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__66, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__66;
    }
    buffer_append_str(result_160,self);
    __result_obj__67 = (struct buffer*)come_increment_ref_count(result_160);
    come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__67, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__67;
}

char* buffer_to_string(struct buffer* self){
void* __right_value29 = (void*)0;
char* __result_obj__68;
void* __right_value30 = (void*)0;
char* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value29=__builtin_string(""))));
        (__right_value29 = come_decrement_ref_count(__right_value29, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__68;
    }
    __result_obj__69 = (char*)come_increment_ref_count(((char*)(__right_value30=__builtin_string(self->buf))));
    (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__69 = come_decrement_ref_count(__result_obj__69, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__69;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__70;
    __result_obj__70 = self->buf;
    return __result_obj__70;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__71;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3663, "struct buffer*"))));
    buffer_append(result_161,self,sizeof(char)*len);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_162;
int i_163;
struct buffer* __result_obj__72;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3670, "struct buffer*"))));
    for(    i_163=0    ;    i_163<len    ;    i_163++    ){
        buffer_append(result_162,self[i_163],strlen(self[i_163]));
    }
    __result_obj__72 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__72, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__72;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__73;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3679, "struct buffer*"))));
    buffer_append(result_164,(char*)self,sizeof(short)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__74;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3686, "struct buffer*"))));
    buffer_append(result_165,(char*)self,sizeof(int)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_166;
struct buffer* __result_obj__75;
    result_166=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3693, "struct buffer*"))));
    buffer_append(result_166,(char*)self,sizeof(long)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_166);
    come_call_finalizer(buffer_finalize, result_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_167;
struct buffer* __result_obj__76;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3700, "struct buffer*"))));
    buffer_append(result_167,(char*)self,sizeof(float)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__77;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3707, "struct buffer*"))));
    buffer_append(result_168,(char*)self,sizeof(double)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_168);
    come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

char* buffer_printable(struct buffer* self){
int len_169;
void* __right_value45 = (void*)0;
char* result_170;
int n_171;
int i_172;
unsigned char c_173;
char* __result_obj__78;
    len_169=self->len;
    result_170=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_169*2+1)), "./comelang-minux9.h", 3715, "char*"));
    n_171=0;
    for(    i_172=0    ;    i_172<len_169    ;    i_172++    ){
        c_173=self->buf[i_172];
        if(        (c_173>=0&&c_173<32)||c_173==127        ) {
            result_170[n_171++]=94;
            result_170[n_171++]=c_173+65-1;
        }
        else if(        c_173>127        ) {
            result_170[n_171++]=63;
        }
        else {
            result_170[n_171++]=c_173;
        }
    }
    result_170[n_171]=0;
    __result_obj__78 = (char*)come_increment_ref_count(result_170);
    (result_170 = come_decrement_ref_count(result_170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__78 = come_decrement_ref_count(__result_obj__78, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__78;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_174;
struct list$1char$* __result_obj__80;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_174=0    ;    i_174<num_value    ;    i_174++    ){
        list$1char$_push_back(self,values[i_174]);
    }
    __result_obj__80 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value47 = (void*)0;
struct list_item$1char$* litem_175;
void* __right_value48 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_177;
struct list$1char$* __result_obj__79;
    if(    self->len==0    ) {
        litem_175=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value47=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1char$*"))));
        litem_175->prev=((void*)0);
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail=litem_175;
        self->head=litem_175;
    }
    else if(    self->len==1    ) {
        litem_176=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value48=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1char$*"))));
        litem_176->prev=self->head;
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head->next=litem_176;
    }
    else {
        litem_177=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1char$*"))));
        litem_177->prev=self->tail;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail->next=litem_177;
        self->tail=litem_177;
    }
    self->len++;
    __result_obj__79 = self;
    return __result_obj__79;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_178;
struct list_item$1char$* prev_it_179;
    it_178=self->head;
    while(    it_178!=((void*)0)    ) {
        prev_it_179=it_178;
        it_178=it_178->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char$* __result_obj__81;
    __result_obj__81 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value50=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./comelang-minux9.h", 3756, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_180;
struct list$1char$p* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0    ;    i_180<num_value    ;    i_180++    ){
        list$1char$p_push_back(self,values[i_180]);
    }
    __result_obj__83 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value52 = (void*)0;
struct list_item$1char$p* litem_181;
void* __right_value53 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_183;
struct list$1char$p* __result_obj__82;
    if(    self->len==0    ) {
        litem_181=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value52=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang-minux9.h", 1509, "struct list_item$1char$p*"))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1    ) {
        litem_182=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value53=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang-minux9.h", 1519, "struct list_item$1char$p*"))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang-minux9.h", 1529, "struct list_item$1char$p*"))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_184;
struct list_item$1char$p* prev_it_185;
    it_184=self->head;
    while(    it_184!=((void*)0)    ) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1char$p* __result_obj__84;
    __result_obj__84 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value55=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang-minux9.h", 3761, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_186;
struct list$1short$* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0    ;    i_186<num_value    ;    i_186++    ){
        list$1short$_push_back(self,values[i_186]);
    }
    __result_obj__86 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value57 = (void*)0;
struct list_item$1short$* litem_187;
void* __right_value58 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_189;
struct list$1short$* __result_obj__85;
    if(    self->len==0    ) {
        litem_187=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value57=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1short$*"))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1    ) {
        litem_188=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value58=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1short$*"))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1short$*"))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_190;
struct list_item$1short$* prev_it_191;
    it_190=self->head;
    while(    it_190!=((void*)0)    ) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1short$* __result_obj__87;
    __result_obj__87 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value60=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./comelang-minux9.h", 3766, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_192;
struct list$1int$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0    ;    i_192<num_value    ;    i_192++    ){
        list$1int$_push_back(self,values[i_192]);
    }
    __result_obj__89 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value62 = (void*)0;
struct list_item$1int$* litem_193;
void* __right_value63 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_195;
struct list$1int$* __result_obj__88;
    if(    self->len==0    ) {
        litem_193=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value62=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1int$*"))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1    ) {
        litem_194=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value63=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1int$*"))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1int$*"))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_196;
struct list_item$1int$* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)    ) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1int$* __result_obj__90;
    __result_obj__90 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value65=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./comelang-minux9.h", 3771, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_198;
struct list$1long$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0    ;    i_198<num_value    ;    i_198++    ){
        list$1long$_push_back(self,values[i_198]);
    }
    __result_obj__92 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value67 = (void*)0;
struct list_item$1long$* litem_199;
void* __right_value68 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_201;
struct list$1long$* __result_obj__91;
    if(    self->len==0    ) {
        litem_199=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value67=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1long$*"))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1    ) {
        litem_200=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value68=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1long$*"))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1long$*"))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_202;
struct list_item$1long$* prev_it_203;
    it_202=self->head;
    while(    it_202!=((void*)0)    ) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1long$* __result_obj__93;
    __result_obj__93 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value70=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./comelang-minux9.h", 3776, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_204;
struct list$1float$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0    ;    i_204<num_value    ;    i_204++    ){
        list$1float$_push_back(self,values[i_204]);
    }
    __result_obj__95 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value72 = (void*)0;
struct list_item$1float$* litem_205;
void* __right_value73 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_207;
struct list$1float$* __result_obj__94;
    if(    self->len==0    ) {
        litem_205=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value72=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1float$*"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1    ) {
        litem_206=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value73=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1float$*"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1float$*"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_208;
struct list_item$1float$* prev_it_209;
    it_208=self->head;
    while(    it_208!=((void*)0)    ) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1float$* __result_obj__96;
    __result_obj__96 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value75=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./comelang-minux9.h", 3781, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_210;
struct list$1double$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0    ;    i_210<num_value    ;    i_210++    ){
        list$1double$_push_back(self,values[i_210]);
    }
    __result_obj__98 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value77 = (void*)0;
struct list_item$1double$* litem_211;
void* __right_value78 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_213;
struct list$1double$* __result_obj__97;
    if(    self->len==0    ) {
        litem_211=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value77=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1double$*"))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1    ) {
        litem_212=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value78=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1double$*"))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1double$*"))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_214;
struct list_item$1double$* prev_it_215;
    it_214=self->head;
    while(    it_214!=((void*)0)    ) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_215, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value76 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1double$* __result_obj__99;
    __result_obj__99 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value80=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./comelang-minux9.h", 3786, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool boolp_equals(_Bool* self, _Bool* right){
    return *self==*right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)    ) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)    ) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)    ) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __right_value81 = (void*)0;
char* __result_obj__100;
int len_216;
void* __right_value82 = (void*)0;
char* result_217;
char* __result_obj__101;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__100 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__100 = come_decrement_ref_count(__result_obj__100, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__100;
    }
    len_216=strlen(self)+strlen(right);
    result_217=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_216+1)), "./comelang-minux9.h", 4015, "char*"));
    strncpy(result_217,self,len_216+1);
    strncat(result_217,right,len_216+1);
    __result_obj__101 = (char*)come_increment_ref_count(result_217);
    (result_217 = come_decrement_ref_count(result_217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__101 = come_decrement_ref_count(__result_obj__101, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__101;
}

char* string_operator_add(char* self, char* right){
void* __right_value83 = (void*)0;
char* __result_obj__102;
int len_218;
void* __right_value84 = (void*)0;
char* result_219;
char* __result_obj__103;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    len_218=strlen(self)+strlen(right);
    result_219=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_218+1)), "./comelang-minux9.h", 4030, "char*"));
    strncpy(result_219,self,len_218+1);
    strncat(result_219,right,len_218+1);
    __result_obj__103 = (char*)come_increment_ref_count(result_219);
    (result_219 = come_decrement_ref_count(result_219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

char* charp_operator_mult(char* self, int right){
void* __right_value85 = (void*)0;
char* __result_obj__104;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct buffer* buf_220;
int i_221;
void* __right_value88 = (void*)0;
char* __result_obj__105;
    if(    self==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    buf_220=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4043, "struct buffer*"))));
    for(    i_221=0    ;    i_221<right    ;    i_221++    ){
        buffer_append_str(buf_220,self);
    }
    __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value88=buffer_to_string(buf_220))));
    come_call_finalizer(buffer_finalize, buf_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__106;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_222;
int i_223;
void* __right_value92 = (void*)0;
char* __result_obj__107;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    buf_222=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4057, "struct buffer*"))));
    for(    i_223=0    ;    i_223<right    ;    i_223++    ){
        buffer_append_str(buf_222,self);
    }
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_222))));
    come_call_finalizer(buffer_finalize, buf_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_224;
int i_225;
    result_224=(_Bool)0;
    for(    i_225=0    ;    i_225<len    ;    i_225++    ){
        if(        strncmp(self[i_225],str,strlen(self[i_225]))==0        ) {
            result_224=(_Bool)1;
            break;
        }
    }
    return result_224;
}

unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}

unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}

unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}

unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}

unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int _Bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_226;
char* p_227;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_226=0;
    p_227=value;
    while(    *p_227    ) {
        result_226+=(*p_227);
        p_227++;
    }
    return result_226;
}

unsigned int string_get_hash_key(char* value){
int result_228;
char* p_229;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_228=0;
    p_229=value;
    while(    *p_229    ) {
        result_228+=(*p_229);
        p_229++;
    }
    return result_228;
}

unsigned int voidp_get_hash_key(void* value){
    return (int_get_hash_key(((int)value)));
}

_Bool bool_clone(_Bool self){
    return self;
}

_Bool _Bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

_Bool xisalpha(char c){
_Bool result_230;
    result_230=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_230;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_231;
    result_231=(c>=32&&c<=126);
    return result_231;
}

_Bool xispunct(char c){
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
}

int string_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)    ) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __right_value93 = (void*)0;
char* __result_obj__108;
int len_232;
void* __right_value94 = (void*)0;
char* result_233;
int i_234;
char* __result_obj__109;
    if(    str==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    len_232=strlen(str);
    result_233=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_232+1)), "./comelang-minux9.h", 4295, "char*"));
    for(    i_234=0    ;    i_234<len_232    ;    i_234++    ){
        result_233[i_234]=str[len_232-i_234-1];
    }
    result_233[len_232]=0;
    __result_obj__109 = (char*)come_increment_ref_count(result_233);
    (result_233 = come_decrement_ref_count(result_233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value95 = (void*)0;
char* __result_obj__110;
int len_235;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
char* __result_obj__111;
void* __right_value98 = (void*)0;
char* __result_obj__112;
void* __right_value99 = (void*)0;
char* __result_obj__113;
void* __right_value100 = (void*)0;
char* result_236;
char* __result_obj__114;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_235=strlen(str);
    if(    head<0    ) {
        head+=len_235;
    }
    if(    tail<0    ) {
        tail+=len_235+1;
    }
    if(    head>tail    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value97=charp_reverse(((char*)(__right_value96=charp_substring(str,tail,head)))))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_235    ) {
        tail=len_235;
    }
    if(    head==tail    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    if(    tail-head+1<1    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    result_236=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang-minux9.h", 4341, "char*"));
    memcpy(result_236,str+head,tail-head);
    result_236[tail-head]=0;
    __result_obj__114 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__115;
int len_237;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__116;
void* __right_value104 = (void*)0;
char* __result_obj__117;
void* __right_value105 = (void*)0;
char* __result_obj__118;
void* __right_value106 = (void*)0;
char* result_238;
char* __result_obj__119;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_237=strlen(str);
    if(    head<0    ) {
        head+=len_237;
    }
    if(    tail<0    ) {
        tail+=len_237+1;
    }
    if(    head>tail    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_237    ) {
        tail=len_237;
    }
    if(    head==tail    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    if(    tail-head+1<1    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    result_238=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang-minux9.h", 4384, "char*"));
    memcpy(result_238,str+head,tail-head);
    result_238[tail-head]=0;
    __result_obj__119 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__119;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__120;
int len_239;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__121;
void* __right_value110 = (void*)0;
char* __result_obj__122;
void* __right_value111 = (void*)0;
char* __result_obj__123;
void* __right_value112 = (void*)0;
char* result_240;
char* __result_obj__124;
    if(    str==((void*)0)    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    len_239=strlen(str);
    if(    head<0    ) {
        head+=len_239;
    }
    if(    tail<0    ) {
        tail+=len_239+1;
    }
    if(    head>tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_239    ) {
        tail=len_239;
    }
    if(    head==tail    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    if(    tail-head+1<1    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    result_240=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang-minux9.h", 4427, "char*"));
    memcpy(result_240,str+head,tail-head);
    result_240[tail-head]=0;
    __result_obj__124 = (char*)come_increment_ref_count(result_240);
    (result_240 = come_decrement_ref_count(result_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__124;
}

char* xsprintf(char* msg, ...){
void* __right_value113 = (void*)0;
char* __result_obj__125;
va_list args_241;
char* result_242;
int len_243;
void* __right_value114 = (void*)0;
char* __result_obj__126;
void* __right_value115 = (void*)0;
char* result2_244;
char* __result_obj__127;
result_242 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    __builtin_va_start(args_241,msg);
    len_243=vasprintf(&result_242,msg,args_241);
    __builtin_va_end(args_241);
    if(    len_243<0    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result2_244=(char*)come_increment_ref_count(__builtin_string(result_242));
    free(result_242);
    __result_obj__127 = (char*)come_increment_ref_count(result2_244);
    (result2_244 = come_decrement_ref_count(result2_244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value116 = (void*)0;
char* __result_obj__128;
int len_245;
void* __right_value117 = (void*)0;
char* __result_obj__129;
void* __right_value118 = (void*)0;
char* __result_obj__130;
void* __right_value119 = (void*)0;
char* result_246;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    len_245=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(str))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    head<0    ) {
        head+=len_245;
    }
    if(    tail<0    ) {
        tail+=len_245+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(str))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    if(    tail>=len_245    ) {
        tail=len_245;
    }
    result_246=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_245-(tail-head)+1)), "./comelang-minux9.h", 4489, "char*"));
    memcpy(result_246,str,head);
    memcpy(result_246+head,str+tail,len_245-tail);
    result_246[len_245-(tail-head)]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_246);
    (result_246 = come_decrement_ref_count(result_246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__132;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__132 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__132, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__132;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_247;
struct list_item$1char$ph* prev_it_248;
    it_247=self->head;
    while(    it_247!=((void*)0)    ) {
        prev_it_248=it_247;
        it_247=it_247->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_248, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value126 = (void*)0;
struct list_item$1char$ph* litem_252;
char* __dec_obj13;
void* __right_value127 = (void*)0;
struct list_item$1char$ph* litem_253;
char* __dec_obj14;
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_254;
char* __dec_obj15;
struct list$1char$ph* __result_obj__134;
    if(    self->len==0    ) {
        litem_252=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value126=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang-minux9.h", 1509, "struct list_item$1char$ph*"))));
        litem_252->prev=((void*)0);
        litem_252->next=((void*)0);
        __dec_obj13=litem_252->item,
        litem_252->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_252;
        self->head=litem_252;
    }
    else if(    self->len==1    ) {
        litem_253=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value127=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang-minux9.h", 1519, "struct list_item$1char$ph*"))));
        litem_253->prev=self->head;
        litem_253->next=((void*)0);
        __dec_obj14=litem_253->item,
        litem_253->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_253;
        self->head->next=litem_253;
    }
    else {
        litem_254=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang-minux9.h", 1529, "struct list_item$1char$ph*"))));
        litem_254->prev=self->tail;
        litem_254->next=((void*)0);
        __dec_obj15=litem_254->item,
        litem_254->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_254;
        self->tail=litem_254;
    }
    self->len++;
    __result_obj__134 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__134;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1char$ph* __result_obj__133;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1char$ph* result_249;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct buffer* str_250;
int i_251;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1char$ph* __result_obj__135;
    if(    self==((void*)0)    ) {
        __result_obj__133 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value121=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang-minux9.h", 4502, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value121, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__133, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__133;
    }
    result_249=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang-minux9.h", 4505, "struct list$1char$ph*"))));
    str_250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4507, "struct buffer*"))));
    for(    i_251=0    ;    i_251<charp_length(self)    ;    i_251++    ){
        if(        self[i_251]==c        ) {
            list$1char$ph_push_back(result_249,(char*)come_increment_ref_count(__builtin_string(str_250->buf)));
            buffer_reset(str_250);
        }
        else {
            buffer_append_char(str_250,self[i_251]);
        }
    }
    if(    buffer_length(str_250)!=0    ) {
        list$1char$ph_push_back(result_249,(char*)come_increment_ref_count(__builtin_string(str_250->buf)));
    }
    __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(result_249);
    come_call_finalizer(list$1char$ph$p_finalize, result_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value131 = (void*)0;
char* __result_obj__136;
    __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value131=xsprintf(msg,self))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__136;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value132 = (void*)0;
char* __result_obj__137;
    __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value132=xsprintf(msg,self))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__137;
}

char* charp_printable(char* str){
int len_255;
void* __right_value133 = (void*)0;
char* result_256;
int n_257;
int i_258;
char c_259;
char* __result_obj__138;
    len_255=charp_length(str);
    result_256=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_255*2+1)), "./comelang-minux9.h", 4539, "char*"));
    n_257=0;
    for(    i_258=0    ;    i_258<len_255    ;    i_258++    ){
        c_259=str[i_258];
        if(        (c_259>=0&&c_259<32)||c_259==127        ) {
            result_256[n_257++]=94;
            result_256[n_257++]=c_259+65-1;
        }
        else {
            result_256[n_257++]=c_259;
        }
    }
    result_256[n_257]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_256);
    (result_256 = come_decrement_ref_count(result_256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value134 = (void*)0;
char* __result_obj__139;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct buffer* result_260;
char* p_261;
char* p2_262;
void* __right_value137 = (void*)0;
char* __result_obj__140;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(self))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__139;
    }
    result_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4567, "struct buffer*"))));
    p_261=self;
    while(    (_Bool)1    ) {
        p2_262=strstr(p_261,str);
        if(        p2_262==((void*)0)        ) {
            p2_262=p_261;
            while(            *p2_262            ) {
                p2_262++;
            }
            buffer_append(result_260,p_261,p2_262-p_261);
            break;
        }
        buffer_append(result_260,p_261,p2_262-p_261);
        buffer_append_str(result_260,replace);
        p_261=p2_262+strlen(str);
    }
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value137=buffer_to_string(result_260))));
    come_call_finalizer(buffer_finalize, result_260, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* xbasename(char* path){
void* __right_value138 = (void*)0;
char* __result_obj__141;
char* p_263;
void* __right_value139 = (void*)0;
char* __result_obj__142;
void* __right_value140 = (void*)0;
char* __result_obj__143;
void* __right_value141 = (void*)0;
char* __result_obj__144;
    if(    path==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    p_263=path+strlen(path);
    while(    p_263>=path    ) {
        if(        *p_263==47        ) {
            break;
        }
        else {
            p_263--;
        }
    }
    if(    p_263<path    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(path))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    else {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(p_263+1))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* xnoextname(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__145;
void* __right_value143 = (void*)0;
char* path2_264;
char* p_265;
void* __right_value144 = (void*)0;
char* __result_obj__146;
void* __right_value145 = (void*)0;
char* __result_obj__147;
void* __right_value146 = (void*)0;
char* __result_obj__148;
    if(    path==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    path2_264=(char*)come_increment_ref_count(xbasename(path));
    p_265=path2_264+strlen(path2_264);
    while(    p_265>=path2_264    ) {
        if(        *p_265==46        ) {
            break;
        }
        else {
            p_265--;
        }
    }
    if(    p_265<path2_264    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(path2_264))));
        (path2_264 = come_decrement_ref_count(path2_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value145=charp_substring(path2_264,0,p_265-path2_264))));
        (path2_264 = come_decrement_ref_count(path2_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
    (path2_264 = come_decrement_ref_count(path2_264, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xextname(char* path){
void* __right_value147 = (void*)0;
char* __result_obj__149;
char* p_266;
void* __right_value148 = (void*)0;
char* __result_obj__150;
void* __right_value149 = (void*)0;
char* __result_obj__151;
void* __right_value150 = (void*)0;
char* __result_obj__152;
    if(    path==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    p_266=path+strlen(path);
    while(    p_266>=path    ) {
        if(        *p_266==46        ) {
            break;
        }
        else {
            p_266--;
        }
    }
    if(    p_266<path    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(p_266+1))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* bool_to_string(_Bool self){
void* __right_value151 = (void*)0;
char* __result_obj__153;
void* __right_value152 = (void*)0;
char* __result_obj__154;
    if(    self    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string("true"))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string("false"))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value153 = (void*)0;
char* __result_obj__155;
void* __right_value154 = (void*)0;
char* __result_obj__156;
    if(    self    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("true"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("false"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
}

char* char_to_string(char self){
void* __right_value155 = (void*)0;
char* __result_obj__157;
    __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value155=xsprintf("%c",self))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__157;
}

char* short_to_string(short self){
void* __right_value156 = (void*)0;
char* __result_obj__158;
    __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf("%d",self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__158;
}

char* int_to_string(int self){
void* __right_value157 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%d",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* long_to_string(long self){
void* __right_value158 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%ld",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value159 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%ld",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* float_to_string(float self){
void* __right_value160 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%f",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* double_to_string(double self){
void* __right_value161 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%lf",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* string_to_string(char* self){
void* __right_value162 = (void*)0;
char* __result_obj__164;
void* __right_value163 = (void*)0;
char* __result_obj__165;
    if(    self==((void*)0)    ) {
        __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__164;
    }
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* charp_to_string(char* self){
void* __right_value164 = (void*)0;
char* __result_obj__166;
void* __right_value165 = (void*)0;
char* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int _Bool_compare(_Bool left, _Bool right){
    if(    !left&&right    ) {
        return -1;
    }
    else if(    left&&right    ) {
        return 0;
    }
    else if(    !left&&!right    ) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right    ) {
        return -1;
    }
    else if(    left>right    ) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)    ) {
        return 0;
    }
    else if(    left==((void*)0)    ) {
        return -1;
    }
    else if(    right==((void*)0)    ) {
        return 1;
    }
    return strcmp(left,right);
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_267;
    for(    i_267=0    ;    i_267<self    ;    i_267++    ){
        block(parent,i_267);
    }
}

