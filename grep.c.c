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
char* p1_1;
int __result_obj__1;
char* p2_2;
int __result_obj__2;
char* p3_3;
int __result_obj__3;
int __result_obj__4;
    come_heap_init(0, 0, 0);
    printf("--- Malloc Test Start ---\n");
    printf("1. Allocating 10 bytes...\n");
    p1_1=malloc(10);
    if(    p1_1==0    ) {
        printf("Failed!\n");
        __result_obj__1 = 1;
        come_heap_final();
        return __result_obj__1;
    }
    printf("OK. Got pointer: %p\n",p1_1);
    printf("2. Allocating 20 bytes...\n");
    p2_2=malloc(20);
    if(    p2_2==0    ) {
        printf("Failed!\n");
        __result_obj__2 = 1;
        come_heap_final();
        return __result_obj__2;
    }
    printf("OK. Got pointer: %p\n",p2_2);
    printf("3. Freeing first block...\n");
    free(p1_1);
    printf("OK.\n");
    printf("4. Allocating 5 bytes (should reuse block)...\n");
    p3_3=malloc(5);
    if(    p3_3==0    ) {
        printf("Failed!\n");
        __result_obj__3 = 1;
        come_heap_final();
        return __result_obj__3;
    }
    printf("OK. Got pointer: %p\n",p3_3);
    printf("--- Malloc Test Complete ---\n");
    while(    1    ) {
        ;
    }
    __result_obj__4 = 0;
    come_heap_final();
    return __result_obj__4;
}

void* sbrk(long incr){
char* current_brk_4;
void* __result_obj__5;
void* __result_obj__6;
void* __result_obj__7;
void* __result_obj__8;
    current_brk_4=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_4==(char*)-1    ) {
        __result_obj__5 = (void*)-1;
        return __result_obj__5;
    }
    if(    incr==0    ) {
        __result_obj__6 = current_brk_4;
        return __result_obj__6;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_4+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__7 = (void*)-1;
        return __result_obj__7;
    }
    __result_obj__8 = current_brk_4;
    return __result_obj__8;
}

struct header* morecore(unsigned int nunits){
char* cp_5;
struct header* up_6;
struct header* __result_obj__9;
struct header* __result_obj__10;
cp_5 = (void*)0;
up_6 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_5=sbrk(nunits*sizeof(struct header));
    if(    cp_5==(char*)-1    ) {
        __result_obj__9 = (void*)0;
        return __result_obj__9;
    }
    up_6=(struct header*)cp_5;
    up_6->size=nunits;
    free((void*)(up_6+1));
    __result_obj__10 = freep;
    return __result_obj__10;
}

void* malloc(unsigned int nbytes){
struct header* p_7;
struct header* prevp_8;
unsigned int nunits_9;
void* __result_obj__11;
void* __result_obj__12;
memset(&p_7, 0, sizeof(struct header*));
memset(&prevp_8, 0, sizeof(struct header*));
memset(&nunits_9, 0, sizeof(unsigned int));
    nunits_9=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_8=freep)==0    ) {
        base.next=freep=prevp_8=&base;
        base.size=0;
    }
    for(    p_7=prevp_8->next    ;    ;    prevp_8=p_7,p_7=p_7->next    ){
        if(        p_7->size>=nunits_9        ) {
            if(            p_7->size==nunits_9            ) {
                prevp_8->next=p_7->next;
            }
            else {
                p_7->size-=nunits_9;
                p_7+=p_7->size;
                p_7->size=nunits_9;
            }
            freep=prevp_8;
            printf("p %p\n",(void*)(p_7+1));
            __result_obj__11 = (void*)(p_7+1);
            return __result_obj__11;
        }
        if(        p_7==freep        ) {
            if(            (p_7=morecore(nunits_9))==0            ) {
                __result_obj__12 = (void*)0;
                return __result_obj__12;
            }
        }
    }
}

void free(void* ap){
struct header* bp_10;
struct header* p_11;
memset(&bp_10, 0, sizeof(struct header*));
memset(&p_11, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_10=(struct header*)ap-1;
    for(    p_11=freep    ;    !(bp_10>p_11&&bp_10<p_11->next)    ;    p_11=p_11->next    ){
        if(        p_11>=p_11->next&&(bp_10>p_11||bp_10<p_11->next)        ) {
            break;
        }
    }
    if(    bp_10+bp_10->size==p_11->next    ) {
        bp_10->size+=p_11->next->size;
        bp_10->next=p_11->next->next;
    }
    else {
        bp_10->next=p_11->next;
    }
    if(    p_11+p_11->size==bp_10    ) {
        p_11->size+=bp_10->size;
        p_11->next=bp_10->next;
    }
    else {
        p_11->next=bp_10;
    }
    freep=p_11;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_12;
void* __result_obj__13;
void* ptr_13;
void* __result_obj__14;
    total_size_12=nmemb*size;
    if(    total_size_12==0    ) {
        __result_obj__13 = ((void*)0);
        return __result_obj__13;
    }
    ptr_13=malloc(total_size_12);
    if(    ptr_13!=((void*)0)    ) {
        memset(ptr_13,0,total_size_12);
    }
    __result_obj__14 = ptr_13;
    return __result_obj__14;
}

char* strdup(const char* s){
char* s2_14;
unsigned long  int len_15;
char* p_16;
char* __result_obj__15;
    s2_14=s;
    len_15=strlen(s2_14)+1;
    p_16=malloc(len_15);
    if(    p_16    ) {
        memcpy(p_16,s2_14,len_15);
    }
    __result_obj__15 = p_16;
    return __result_obj__15;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__16;
char* __result_obj__17;
char* __result_obj__18;
    if(    !*needle    ) {
        __result_obj__16 = (char*)haystack;
        return __result_obj__16;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_17=haystack;
        const char* n_18=needle;
        while(        *h_17&&*n_18&&(*h_17==*n_18)        ) {
            h_17++;
            n_18++;
        }
        if(        !*n_18        ) {
            __result_obj__17 = (char*)haystack;
            return __result_obj__17;
        }
    }
    __result_obj__18 = ((void*)0);
    return __result_obj__18;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_19;
int i_20;
void* __result_obj__19;
    cdst_19=(char*)dst;
    for(    i_20=0    ;    i_20<n    ;    i_20++    ){
        cdst_19[i_20]=c;
    }
    __result_obj__19 = dst;
    return __result_obj__19;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_21;
const unsigned char* s2_22;
memset(&s1_21, 0, sizeof(const unsigned char*));
memset(&s2_22, 0, sizeof(const unsigned char*));
    s1_21=v1;
    s2_22=v2;
    while(    n-->0    ) {
        if(        *s1_21!=*s2_22        ) {
            return *s1_21-*s2_22;
        }
        s1_21++,s2_22++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_23;
char* d_24;
void* __result_obj__20;
void* __result_obj__21;
s_23 = (void*)0;
d_24 = (void*)0;
    if(    n==0    ) {
        __result_obj__20 = dst;
        return __result_obj__20;
    }
    s_23=src;
    d_24=dst;
    if(    s_23<d_24&&s_23+n>d_24    ) {
        s_23+=n;
        d_24+=n;
        while(        n-->0        ) {
            *--d_24=*--s_23;
        }
    }
    else {
        while(        n-->0        ) {
            *d_24++=*s_23++;
        }
    }
    __result_obj__21 = dst;
    return __result_obj__21;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__22;
    __result_obj__22 = memmove(dst,src,n);
    return __result_obj__22;
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
char* os_25;
char* __result_obj__23;
os_25 = (void*)0;
    os_25=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__23 = os_25;
    return __result_obj__23;
}

int strlen(const char* s){
int n_26;
memset(&n_26, 0, sizeof(int));
    for(    n_26=0    ;    s[n_26]    ;    n_26++    ){
        ;
    }
    return n_26;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_27;
char* __result_obj__24;
    d_27=dest;
    while(    *d_27    ) {
        d_27++;
    }
    while(    n--&&*src    ) {
        *d_27++=*src++;
    }
    *d_27=0;
    __result_obj__24 = dest;
    return __result_obj__24;
}

char* strtok(char* s, const char* delim){
static char* next_28;
char* start_29;
char* p_30;
char* __result_obj__25;
int is_delim_32;
char* __result_obj__26;
int is_delim_34;
char* __result_obj__27;
next_28 = (void*)0;
start_29 = (void*)0;
p_30 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_28=s;
    }
    if(    next_28==((void*)0)    ) {
        __result_obj__25 = ((void*)0);
        return __result_obj__25;
    }
    start_29=next_28;
    while(    *start_29!=0    ) {
        const char* d_31=delim;
        is_delim_32=0;
        while(        *d_31!=0        ) {
            if(            *start_29==*d_31            ) {
                is_delim_32=1;
                break;
            }
            d_31++;
        }
        if(        !is_delim_32        ) {
            break;
        }
        start_29++;
    }
    if(    *start_29==0    ) {
        next_28=((void*)0);
        __result_obj__26 = ((void*)0);
        return __result_obj__26;
    }
    p_30=start_29;
    while(    *p_30!=0    ) {
        const char* d_33=delim;
        is_delim_34=0;
        while(        *d_33!=0        ) {
            if(            *p_30==*d_33            ) {
                is_delim_34=1;
                break;
            }
            d_33++;
        }
        if(        is_delim_34        ) {
            break;
        }
        p_30++;
    }
    if(    *p_30==0    ) {
        next_28=((void*)0);
    }
    else {
        *p_30=0;
        next_28=p_30+1;
    }
    __result_obj__27 = start_29;
    return __result_obj__27;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_35;
int i_37;
int negative_38;
char* __result_obj__28;
int digit_39;
char* __result_obj__29;
    p_35=buf;
    char tmp_36[32];
    memset(&tmp_36, 0, sizeof(char)    *(32)    );
    i_37=0;
    negative_38=0;
    if(    base<2||base>16    ) {
        *p_35=0;
        __result_obj__28 = p_35;
        return __result_obj__28;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_38=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_39=val_%base;
        tmp_36[i_37++]=(((digit_39<10))?(48+digit_39):(97+digit_39-10));
        val_/=base;
    } while(    val_    );
    if(    negative_38    ) {
        *p_35++=45;
    }
    while(    i_37--    ) {
        *p_35++=tmp_36[i_37];
    }
    *p_35=0;
    __result_obj__29 = buf;
    return __result_obj__29;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_41;
const char* s_42;
unsigned long  int remaining_44;
s_42 = (void*)0;
    char out2_40[512];
    memset(&out2_40, 0, sizeof(char)    *(512)    );
    p_41=out2_40;
    char buf_43[32];
    memset(&buf_43, 0, sizeof(char)    *(32)    );
    remaining_44=sizeof(out2_40);
    for(    ;    *fmt&&remaining_44>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_41++=*fmt;
            remaining_44--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_43,__builtin_va_arg(ap,int),10,1);
            s_42=buf_43;
            break;
            case 117:
            itoa(buf_43,__builtin_va_arg(ap,unsigned int),10,0);
            s_42=buf_43;
            break;
            case 120:
            itoa(buf_43,__builtin_va_arg(ap,unsigned int),16,0);
            s_42=buf_43;
            break;
            case 115:
            s_42=__builtin_va_arg(ap,const char*);
            if(            !s_42            ) {
                s_42="(null)";
            }
            break;
            case 99:
            buf_43[0]=(char)__builtin_va_arg(ap,int);
            buf_43[1]=0;
            s_42=buf_43;
            break;
            case 112:
            strncpy(buf_43,"0x",32);
            itoa(buf_43+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_42=buf_43;
            break;
            case 37:
            buf_43[0]=37;
            buf_43[1]=0;
            s_42=buf_43;
            break;
            default:
            buf_43[0]=37;
            buf_43[1]=*fmt;
            buf_43[2]=0;
            s_42=buf_43;
            break;
        }
        while(        *s_42&&remaining_44>1        ) {
            *p_41++=*s_42++;
            remaining_44--;
        }
    }
    *p_41=0;
    *out=strdup(out2_40);
    return p_41-out2_40;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_45;
char* p_46;
const char* s_47;
unsigned long  int remaining_49;
memset(&ap_45, 0, sizeof(va_list));
s_47 = (void*)0;
    __builtin_va_start(ap_45,fmt);
    p_46=out;
    char buf_48[32];
    memset(&buf_48, 0, sizeof(char)    *(32)    );
    remaining_49=out_size;
    if(    remaining_49==0    ) {
        __builtin_va_end(ap_45);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_49>1            ) {
                *p_46++=*fmt;
                remaining_49--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_47=__builtin_va_arg(ap_45,const char*);
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 100:
            itoa(buf_48,__builtin_va_arg(ap_45,int),10,0);
            s_47=buf_48;
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 120:
            itoa(buf_48,(unsigned int)__builtin_va_arg(ap_45,int),16,1);
            s_47=buf_48;
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 99:
            if(            remaining_49>1            ) {
                *p_46++=(char)__builtin_va_arg(ap_45,int);
                remaining_49--;
            }
            break;
            case 112:
            s_47="0x";
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            itoa(buf_48,(long)__builtin_va_arg(ap_45,void*),16,1);
            s_47=buf_48;
            while(            *s_47&&remaining_49>1            ) {
                *p_46++=*s_47++;
                remaining_49--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_48,__builtin_va_arg(ap_45,long),10,1);
                s_47=buf_48;
                while(                *s_47&&remaining_49>1                ) {
                    *p_46++=*s_47++;
                    remaining_49--;
                }
            }
            break;
            default:
            if(            remaining_49>1            ) {
                *p_46++=37;
                remaining_49--;
                if(                remaining_49>1                ) {
                    *p_46++=*fmt;
                    remaining_49--;
                }
            }
            break;
        }
    }
    *p_46=0;
    __builtin_va_end(ap_45);
    return p_46-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_50;
char* p_51;
const char* s_52;
unsigned long  int remaining_54;
memset(&ap_50, 0, sizeof(va_list));
s_52 = (void*)0;
    __builtin_va_start(ap_50,fmt);
    p_51=out;
    char buf_53[32];
    memset(&buf_53, 0, sizeof(char)    *(32)    );
    remaining_54=out_size;
    if(    remaining_54==0    ) {
        __builtin_va_end(ap_50);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_54>1            ) {
                *p_51++=*fmt;
                remaining_54--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_52=__builtin_va_arg(ap_50,const char*);
            while(            *s_52&&remaining_54>1            ) {
                *p_51++=*s_52++;
                remaining_54--;
            }
            break;
            case 100:
            itoa(buf_53,__builtin_va_arg(ap_50,int),10,0);
            s_52=buf_53;
            while(            *s_52&&remaining_54>1            ) {
                *p_51++=*s_52++;
                remaining_54--;
            }
            break;
            case 120:
            itoa(buf_53,(unsigned int)__builtin_va_arg(ap_50,int),16,1);
            s_52=buf_53;
            while(            *s_52&&remaining_54>1            ) {
                *p_51++=*s_52++;
                remaining_54--;
            }
            break;
            case 99:
            if(            remaining_54>1            ) {
                *p_51++=(char)__builtin_va_arg(ap_50,int);
                remaining_54--;
            }
            break;
            case 112:
            s_52="0x";
            while(            *s_52&&remaining_54>1            ) {
                *p_51++=*s_52++;
                remaining_54--;
            }
            itoa(buf_53,(long)__builtin_va_arg(ap_50,void*),16,1);
            s_52=buf_53;
            while(            *s_52&&remaining_54>1            ) {
                *p_51++=*s_52++;
                remaining_54--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_53,__builtin_va_arg(ap_50,long),10,1);
                s_52=buf_53;
                while(                *s_52&&remaining_54>1                ) {
                    *p_51++=*s_52++;
                    remaining_54--;
                }
            }
            break;
            default:
            if(            remaining_54>1            ) {
                *p_51++=37;
                remaining_54--;
                if(                remaining_54>1                ) {
                    *p_51++=*fmt;
                    remaining_54--;
                }
            }
            break;
        }
    }
    *p_51=0;
    __builtin_va_end(ap_50);
    return p_51-out;
}

void printint(int val_, int base, int sign){
int i_56;
int negative_57;
unsigned int uval_58;
int digit_59;
memset(&uval_58, 0, sizeof(unsigned int));
    char buf_55[33];
    memset(&buf_55, 0, sizeof(char)    *(33)    );
    i_56=0;
    negative_57=0;
    if(    sign&&val_<0    ) {
        negative_57=1;
        uval_58=-val_;
    }
    else {
        uval_58=(unsigned int)val_;
    }
    if(    uval_58==0    ) {
        putchar(48);
        return;
    }
    while(    uval_58>0    ) {
        digit_59=uval_58%base;
        buf_55[i_56++]=((digit_59<10)?(48+digit_59):(97+(digit_59-10)));
        uval_58/=base;
    }
    if(    negative_57    ) {
        putchar(45);
    }
    while(    --i_56>=0    ) {
        putchar(buf_55[i_56]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_61;
int negative_62;
int digit_63;
    char buf_60[65];
    memset(&buf_60, 0, sizeof(char)    *(65)    );
    i_61=0;
    negative_62=0;
    if(    sign&&(long)val_<0    ) {
        negative_62=1;
        val_=-(long)val_;
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

void printlonglong(unsigned long  long val_, int base, int sign){
int i_65;
int negative_66;
int digit_67;
    char buf_64[65];
    memset(&buf_64, 0, sizeof(char)    *(65)    );
    i_65=0;
    negative_66=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_66=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_67=val_%base;
        buf_64[i_65++]=((digit_67<10)?(48+digit_67):(97+(digit_67-10)));
        val_/=base;
    }
    if(    negative_66    ) {
        putchar(45);
    }
    while(    --i_65>=0    ) {
        putchar(buf_64[i_65]);
    }
}

int printf(const char* fmt, ...){
va_list ap_68;
const char* p_69;
int lcount_70;
unsigned long  int val__71;
unsigned long  long val__72;
long val__73;
long long val__74;
int i_75;
int val__76;
unsigned int val__77;
unsigned long  int val__78;
char c_80;
memset(&ap_68, 0, sizeof(va_list));
p_69 = (void*)0;
    __builtin_va_start(ap_68,fmt);
    for(    p_69=fmt    ;    *p_69    ;    p_69++    ){
        if(        *p_69!=37        ) {
            putchar(*p_69);
            continue;
        }
        p_69++;
        if(        *p_69==108        ) {
            lcount_70=1;
            if(            *(p_69+1)==108            ) {
                lcount_70=2;
                p_69++;
            }
            p_69++;
            switch (            *p_69) {
                case 120:
                {
                    if(                    lcount_70==1                    ) {
                        val__71=__builtin_va_arg(ap_68,unsigned long  int);
                        printlong(val__71,16,0);
                    }
                    else {
                        val__72=__builtin_va_arg(ap_68,unsigned long  long);
                        printlonglong(val__72,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_70==1                    ) {
                        val__73=__builtin_va_arg(ap_68,long);
                        printlong(val__73,10,1);
                    }
                    else {
                        val__74=__builtin_va_arg(ap_68,long  long);
                        printlonglong(val__74,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_75=0                    ;                    i_75<lcount_70                    ;                    i_75++                    ){
                        putchar(108);
                    }
                    putchar(*p_69);
                    break;
                }
            }
        }
        else {
            switch (            *p_69) {
                case 100:
                {
                    val__76=__builtin_va_arg(ap_68,int);
                    printint(val__76,10,1);
                    break;
                }
                case 120:
                {
                    val__77=__builtin_va_arg(ap_68,unsigned int);
                    printint(val__77,16,0);
                    break;
                }
                case 112:
                {
                    val__78=(unsigned long  int)__builtin_va_arg(ap_68,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__78,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_79=__builtin_va_arg(ap_68,const char*);
                    if(                    !s_79                    ) {
                        s_79="(null)";
                    }
                    while(                    *s_79                    ) {
                        putchar(*s_79++);
                    }
                    break;
                }
                case 99:
                {
                    c_80=(char)__builtin_va_arg(ap_68,int);
                    putchar(c_80);
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
                    putchar(*p_69);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_68);
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
void* result_81;
void* __result_obj__30;
    result_81=((void*)0);
    size=(size+7&~7);
    result_81=calloc(1,size);
    __result_obj__30 = result_81;
    return __result_obj__30;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_82;
struct sMemHeader* prev_it_83;
struct sMemHeader* next_it_84;
unsigned long  int size_85;
struct sMemHeaderTiny* it_86;
struct sMemHeaderTiny* prev_it_87;
struct sMemHeaderTiny* next_it_88;
unsigned long  int size_89;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_82=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_82->allocated!=177783            ) {
                return;
            }
            it_82->allocated=0;
            prev_it_83=it_82->prev;
            next_it_84=it_82->next;
            if(            gAllocMem==it_82            ) {
                gAllocMem=next_it_84;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_83                ) {
                    prev_it_83->next=next_it_84;
                }
                if(                next_it_84                ) {
                    next_it_84->prev=prev_it_83;
                }
            }
            size_85=it_82->size;
            free(it_82);
            gNumFree++;
        }
        else {
            it_86=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_86->allocated!=177783            ) {
                return;
            }
            it_86->allocated=0;
            prev_it_87=it_86->prev;
            next_it_88=it_86->next;
            if(            gAllocMem==it_86            ) {
                gAllocMem=(struct sMemHeader*)next_it_88;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_87                ) {
                    prev_it_87->next=next_it_88;
                }
                if(                next_it_88                ) {
                    next_it_88->prev=prev_it_87;
                }
            }
            size_89=it_86->size;
            free(it_86);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_90;
struct sMemHeaderTiny* it_91;
void* __result_obj__31;
    if(    gComeDebugLib    ) {
    }
    else {
        result_90=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_91=result_90;
        it_91->allocated=177783;
        it_91->class_name=class_name;
        it_91->sname=sname;
        it_91->sline=sline;
        it_91->size=size+sizeof(struct sMemHeaderTiny);
        it_91->free_next=((void*)0);
        it_91->next=(struct sMemHeaderTiny*)gAllocMem;
        it_91->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_91;
        }
        gAllocMem=(struct sMemHeader*)it_91;
        gNumAlloc++;
        __result_obj__31 = (char*)result_90+sizeof(struct sMemHeaderTiny);
        return __result_obj__31;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_92;
char* __result_obj__32;
struct sMemHeaderTiny* it_93;
char* __result_obj__33;
    if(    gComeDebugLib    ) {
        it_92=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_92->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_92);
            exit(2);
        }
        __result_obj__32 = it_92->class_name;
        return __result_obj__32;
    }
    else {
        it_93=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_93->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_93);
            exit(2);
        }
        __result_obj__33 = it_93->class_name;
        return __result_obj__33;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_94;
struct sMemHeaderTiny* it_95;
    if(    gComeDebugLib    ) {
        it_94=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_94->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_94->class_name        ) {
            printf("(%s): ",it_94->class_name);
        }
        puts("");
    }
    else {
        it_95=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_95->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_95->class_name,it_95->sname,it_95->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_96;
unsigned long  int* ref_count_97;
unsigned long  int* size2_98;
void* __result_obj__34;
    mem_96=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_97=(unsigned long  int*)mem_96;
    *ref_count_97=0;
    size2_98=(unsigned long  int*)(mem_96+sizeof(unsigned long  int));
    *size2_98=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__34 = mem_96+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__34;
}

void come_free(void* mem){
unsigned long  int* ref_count_99;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_99=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_99);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__35;
char* mem_100;
unsigned long  int* size_p_101;
unsigned long  int size_102;
void* result_103;
void* __result_obj__36;
    if(    !block    ) {
        __result_obj__35 = ((void*)0);
        return __result_obj__35;
    }
    mem_100=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_101=(unsigned long  int*)(mem_100+sizeof(unsigned long  int));
    size_102=*size_p_101-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_103=come_calloc(1,size_102,sname,sline,class_name);
    memcpy(result_103,block,size_102);
    __result_obj__36 = result_103;
    return __result_obj__36;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__37;
unsigned long  int* ref_count_104;
void* __result_obj__38;
    if(    mem==((void*)0)    ) {
        __result_obj__37 = mem;
        return __result_obj__37;
    }
    ref_count_104=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_104)++;
    __result_obj__38 = mem;
    return __result_obj__38;
}

void* come_print_ref_count(void* mem){
void* __result_obj__39;
unsigned long  int* ref_count_105;
void* __result_obj__40;
    if(    mem==((void*)0)    ) {
        __result_obj__39 = mem;
        return __result_obj__39;
    }
    ref_count_105=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_105);
    __result_obj__40 = mem;
    return __result_obj__40;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_106;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_106=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_106;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__41;
void* __result_obj__42;
unsigned long  int* ref_count_107;
unsigned long  int count_108;
void (*finalizer_109)(void*);
void* __result_obj__43;
void* __result_obj__44;
memset(&finalizer_109, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__41 = mem;
            return __result_obj__41;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__42 = ((void*)0);
        return __result_obj__42;
    }
    ref_count_107=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_107)--;
    }
    count_108=*ref_count_107;
    if(    !no_free&&count_108<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_109=protocol_fun;
            finalizer_109(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
        __result_obj__43 = ((void*)0);
        return __result_obj__43;
    }
    __result_obj__44 = mem;
    return __result_obj__44;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_110)(void*);
void (*finalizer_111)(void*);
void (*finalizer_112)(void*);
unsigned long  int* ref_count_113;
unsigned long  int count_114;
void (*finalizer_115)(void*);
void (*finalizer_116)(void*);
void (*finalizer_117)(void*);
memset(&finalizer_110, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
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
                finalizer_110=protocol_fun;
                finalizer_110(protocol_obj);
            }
            finalizer_111=fun;
            finalizer_111(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_112=protocol_fun;
                finalizer_112(protocol_obj);
            }
        }
    }
    else {
        ref_count_113=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_113)--;
        }
        count_114=*ref_count_113;
        if(        !no_free&&count_114<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_115=protocol_fun;
                        finalizer_115(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_116=fun;
                        finalizer_116(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_117=protocol_fun;
                        finalizer_117(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__45;
int len_118;
void* __right_value0 = (void*)0;
char* result_119;
char* __result_obj__46;
    if(    str==((void*)0)    ) {
        __result_obj__45 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__45;
    }
    len_118=strlen(str)+1;
    result_119=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_118)), "./comelang-minux9.h", 1361, "char*"));
    strncpy(result_119,str,len_118);
    __result_obj__46 = (char*)come_increment_ref_count(result_119);
    (result_119 = come_decrement_ref_count(result_119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__46;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value1 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__47;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3309, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__47 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value2 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__48;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3319, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__48 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__49;
void* __right_value3 = (void*)0;
struct buffer* result_120;
void* __right_value4 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__50;
    if(    self==((void*)0)    ) {
        __result_obj__49 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__49;
    }
    result_120=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3339, "struct buffer*"));
    result_120->size=self->size;
    __dec_obj3=result_120->buf,
    result_120->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3342, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_120->len=self->len;
    memcpy(result_120->buf,self->buf,self->len);
    __result_obj__50 = (struct buffer*)come_increment_ref_count(result_120);
    come_call_finalizer(buffer_finalize, result_120, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
_Bool __result_obj__51;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__51 = string_equals(((char*)(__right_value5=buffer_to_string(left))),((char*)(__right_value6=buffer_to_string(right))));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__51;
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
struct buffer* __result_obj__52;
void* __right_value7 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value8 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__53;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__52 = self;
        return __result_obj__52;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3390, "char*"));
        memcpy(old_buf_121,self->buf,self->size);
        old_len_122=self->len;
        new_size_123=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_123)), "./comelang-minux9.h", 3394, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_121,old_len_122);
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        (old_buf_121 = come_decrement_ref_count(old_buf_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__54;
void* __right_value9 = (void*)0;
char* old_buf_124;
int old_len_125;
int new_size_126;
void* __right_value10 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__55;
    if(    self==((void*)0)    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_124=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang-minux9.h", 3413, "char*"));
        old_len_125=self->len;
        new_size_126=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_126)), "./comelang-minux9.h", 3417, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_124,old_len_125);
        self->buf[old_len_125]=0;
        self->size=new_size_126;
        (old_buf_124 = come_decrement_ref_count(old_buf_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__56;
int size_127;
void* __right_value11 = (void*)0;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* __right_value12 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    size_127=strlen(mem);
    if(    self->len+size_127+1+1>=self->size    ) {
        old_buf_128=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3439, "char*"));
        memcpy(old_buf_128,self->buf,self->size);
        old_len_129=self->len;
        new_size_130=(self->size+size_127+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "./comelang-minux9.h", 3443, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
        (old_buf_128 = come_decrement_ref_count(old_buf_128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_127);
    self->len+=size_127;
    self->buf[self->len]=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__58;
va_list args_132;
int len_133;
void* __right_value13 = (void*)0;
char* mem_134;
int size_135;
void* __right_value14 = (void*)0;
char* old_buf_136;
int old_len_137;
int new_size_138;
void* __right_value15 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__59;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    char result_131[128];
    memset(&result_131, 0, sizeof(char)    *(128)    );
    __builtin_va_start(args_132,msg);
    snprintf(result_131,128,args_132);
    __builtin_va_end(args_132);
    len_133=strlen(result_131);
    mem_134=(char*)come_increment_ref_count(__builtin_string(result_131));
    size_135=strlen(mem_134);
    if(    self->len+size_135+1+1>=self->size    ) {
        old_buf_136=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3475, "char*"));
        memcpy(old_buf_136,self->buf,self->size);
        old_len_137=self->len;
        new_size_138=(self->size+size_135+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_138)), "./comelang-minux9.h", 3479, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_136,old_len_137);
        self->buf[old_len_137]=0;
        self->size=new_size_138;
        (old_buf_136 = come_decrement_ref_count(old_buf_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_134,size_135);
    self->len+=size_135;
    self->buf[self->len]=0;
    free(result_131);
    __result_obj__59 = self;
    (mem_134 = come_decrement_ref_count(mem_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__59;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__60;
int size_139;
void* __right_value16 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value17 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__61;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    size_139=strlen(mem)+1;
    if(    self->len+size_139+1+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3501, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_142)), "./comelang-minux9.h", 3505, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__62;
int* mem_143;
int size_144;
void* __right_value18 = (void*)0;
char* old_buf_145;
int old_len_146;
int new_size_147;
void* __right_value19 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_143=&value;
    size_144=sizeof(int);
    if(    self->len+size_144+1+1>=self->size    ) {
        old_buf_145=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3528, "char*"));
        memcpy(old_buf_145,self->buf,self->size);
        old_len_146=self->len;
        new_size_147=(self->size+size_144+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_147)), "./comelang-minux9.h", 3532, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_145,old_len_146);
        self->buf[old_len_146]=0;
        self->size=new_size_147;
        (old_buf_145 = come_decrement_ref_count(old_buf_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_143,size_144);
    self->len+=size_144;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_148;
int size_149;
void* __right_value20 = (void*)0;
char* old_buf_150;
int old_len_151;
int new_size_152;
void* __right_value21 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__64;
    mem_148=&value;
    size_149=sizeof(long);
    if(    self->len+size_149+1+1>=self->size    ) {
        old_buf_150=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3551, "char*"));
        memcpy(old_buf_150,self->buf,self->size);
        old_len_151=self->len;
        new_size_152=(self->size+size_149+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_152)), "./comelang-minux9.h", 3555, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_150,old_len_151);
        self->buf[old_len_151]=0;
        self->size=new_size_152;
        (old_buf_150 = come_decrement_ref_count(old_buf_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_148,size_149);
    self->len+=size_149;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__65;
short* mem_153;
int size_154;
void* __right_value22 = (void*)0;
char* old_buf_155;
int old_len_156;
int new_size_157;
void* __right_value23 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    mem_153=&value;
    size_154=sizeof(short);
    if(    self->len+size_154+1+1>=self->size    ) {
        old_buf_155=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang-minux9.h", 3578, "char*"));
        memcpy(old_buf_155,self->buf,self->size);
        old_len_156=self->len;
        new_size_157=(self->size+size_154+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_157)), "./comelang-minux9.h", 3582, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_155,old_len_156);
        self->buf[old_len_156]=0;
        self->size=new_size_157;
        (old_buf_155 = come_decrement_ref_count(old_buf_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_153,size_154);
    self->len+=size_154;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__67;
int len_158;
int new_size_159;
void* __right_value24 = (void*)0;
char* __dec_obj12;
int i_160;
struct buffer* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__67 = ((void*)0);
        return __result_obj__67;
    }
    len_158=self->len;
    len_158=(len_158+3)&~3;
    if(    len_158>=self->size    ) {
        new_size_159=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_159)), "./comelang-minux9.h", 3606, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_159;
    }
    for(    i_160=self->len    ;    i_160<len_158    ;    i_160++    ){
        self->buf[i_160]=0;
    }
    self->len=len_158;
    __result_obj__68 = self;
    return __result_obj__68;
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
void* __right_value25 = (void*)0;
void* __right_value26 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__69;
struct buffer* __result_obj__70;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3636, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__69 = (struct buffer*)come_increment_ref_count(result_161);
        come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    buffer_append_str(result_161,self);
    __result_obj__70 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

char* buffer_to_string(struct buffer* self){
void* __right_value27 = (void*)0;
char* __result_obj__71;
void* __right_value28 = (void*)0;
char* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value27=__builtin_string(""))));
        (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value28=__builtin_string(self->buf))));
    (__right_value28 = come_decrement_ref_count(__right_value28, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__73;
    __result_obj__73 = self->buf;
    return __result_obj__73;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__74;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3663, "struct buffer*"))));
    buffer_append(result_162,self,sizeof(char)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_163;
int i_164;
struct buffer* __result_obj__75;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3670, "struct buffer*"))));
    for(    i_164=0    ;    i_164<len    ;    i_164++    ){
        buffer_append(result_163,self[i_164],strlen(self[i_164]));
    }
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__76;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3679, "struct buffer*"))));
    buffer_append(result_165,(char*)self,sizeof(short)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_166;
struct buffer* __result_obj__77;
    result_166=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3686, "struct buffer*"))));
    buffer_append(result_166,(char*)self,sizeof(int)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_166);
    come_call_finalizer(buffer_finalize, result_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_167;
struct buffer* __result_obj__78;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3693, "struct buffer*"))));
    buffer_append(result_167,(char*)self,sizeof(long)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__79;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3700, "struct buffer*"))));
    buffer_append(result_168,(char*)self,sizeof(float)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_168);
    come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_169;
struct buffer* __result_obj__80;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 3707, "struct buffer*"))));
    buffer_append(result_169,(char*)self,sizeof(double)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* buffer_printable(struct buffer* self){
int len_170;
void* __right_value43 = (void*)0;
char* result_171;
int n_172;
int i_173;
unsigned char c_174;
char* __result_obj__81;
    len_170=self->len;
    result_171=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_170*2+1)), "./comelang-minux9.h", 3715, "char*"));
    n_172=0;
    for(    i_173=0    ;    i_173<len_170    ;    i_173++    ){
        c_174=self->buf[i_173];
        if(        (c_174>=0&&c_174<32)||c_174==127        ) {
            result_171[n_172++]=94;
            result_171[n_172++]=c_174+65-1;
        }
        else if(        c_174>127        ) {
            result_171[n_172++]=63;
        }
        else {
            result_171[n_172++]=c_174;
        }
    }
    result_171[n_172]=0;
    __result_obj__81 = (char*)come_increment_ref_count(result_171);
    (result_171 = come_decrement_ref_count(result_171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_175;
struct list$1char$* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0    ;    i_175<num_value    ;    i_175++    ){
        list$1char$_push_back(self,values[i_175]);
    }
    __result_obj__83 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value45 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value46 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value47 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result_obj__82;
    if(    self->len==0    ) {
        litem_176=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value45=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1char$*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1    ) {
        litem_177=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value46=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1char$*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value47=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1char$*"))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_179;
struct list_item$1char$* prev_it_180;
    it_179=self->head;
    while(    it_179!=((void*)0)    ) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_180, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value48 = (void*)0;
struct list$1char$* __result_obj__84;
    __result_obj__84 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value48=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./comelang-minux9.h", 3756, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value48, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_181;
struct list$1char$p* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0    ;    i_181<num_value    ;    i_181++    ){
        list$1char$p_push_back(self,values[i_181]);
    }
    __result_obj__86 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value50 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value51 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value52 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result_obj__85;
    if(    self->len==0    ) {
        litem_182=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value50=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang-minux9.h", 1509, "struct list_item$1char$p*"))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1    ) {
        litem_183=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value51=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang-minux9.h", 1519, "struct list_item$1char$p*"))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value52=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang-minux9.h", 1529, "struct list_item$1char$p*"))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_185;
struct list_item$1char$p* prev_it_186;
    it_185=self->head;
    while(    it_185!=((void*)0)    ) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$p* __result_obj__87;
    __result_obj__87 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value53=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang-minux9.h", 3761, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_187;
struct list$1short$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0    ;    i_187<num_value    ;    i_187++    ){
        list$1short$_push_back(self,values[i_187]);
    }
    __result_obj__89 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value55 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value56 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value57 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result_obj__88;
    if(    self->len==0    ) {
        litem_188=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value55=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1short$*"))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1    ) {
        litem_189=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value56=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1short$*"))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value57=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1short$*"))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_191;
struct list_item$1short$* prev_it_192;
    it_191=self->head;
    while(    it_191!=((void*)0)    ) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1short$* __result_obj__90;
    __result_obj__90 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value58=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./comelang-minux9.h", 3766, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_193;
struct list$1int$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0    ;    i_193<num_value    ;    i_193++    ){
        list$1int$_push_back(self,values[i_193]);
    }
    __result_obj__92 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value60 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value61 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value62 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result_obj__91;
    if(    self->len==0    ) {
        litem_194=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value60=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1int$*"))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1    ) {
        litem_195=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value61=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1int$*"))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value62=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1int$*"))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_197;
struct list_item$1int$* prev_it_198;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1int$* __result_obj__93;
    __result_obj__93 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value63=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./comelang-minux9.h", 3771, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_199;
struct list$1long$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0    ;    i_199<num_value    ;    i_199++    ){
        list$1long$_push_back(self,values[i_199]);
    }
    __result_obj__95 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value65 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value66 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value67 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result_obj__94;
    if(    self->len==0    ) {
        litem_200=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value65=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1long$*"))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1    ) {
        litem_201=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value66=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1long$*"))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value67=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1long$*"))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_203;
struct list_item$1long$* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1long$* __result_obj__96;
    __result_obj__96 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value68=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./comelang-minux9.h", 3776, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_205;
struct list$1float$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0    ;    i_205<num_value    ;    i_205++    ){
        list$1float$_push_back(self,values[i_205]);
    }
    __result_obj__98 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value70 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value71 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value72 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result_obj__97;
    if(    self->len==0    ) {
        litem_206=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value70=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1float$*"))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1    ) {
        litem_207=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value71=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1float$*"))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value72=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1float$*"))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_209;
struct list_item$1float$* prev_it_210;
    it_209=self->head;
    while(    it_209!=((void*)0)    ) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1float$* __result_obj__99;
    __result_obj__99 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value73=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./comelang-minux9.h", 3781, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_211;
struct list$1double$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0    ;    i_211<num_value    ;    i_211++    ){
        list$1double$_push_back(self,values[i_211]);
    }
    __result_obj__101 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value75 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value76 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value77 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result_obj__100;
    if(    self->len==0    ) {
        litem_212=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value75=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang-minux9.h", 1509, "struct list_item$1double$*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1    ) {
        litem_213=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value76=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang-minux9.h", 1519, "struct list_item$1double$*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value77=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang-minux9.h", 1529, "struct list_item$1double$*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_215;
struct list_item$1double$* prev_it_216;
    it_215=self->head;
    while(    it_215!=((void*)0)    ) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1double$* __result_obj__102;
    __result_obj__102 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value78=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./comelang-minux9.h", 3786, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
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
void* __right_value79 = (void*)0;
char* __result_obj__103;
int len_217;
void* __right_value80 = (void*)0;
char* result_218;
char* __result_obj__104;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value79=__builtin_string(""))));
        (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    len_217=strlen(self)+strlen(right);
    result_218=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_217+1)), "./comelang-minux9.h", 4015, "char*"));
    strncpy(result_218,self,len_217+1);
    strncat(result_218,right,len_217+1);
    __result_obj__104 = (char*)come_increment_ref_count(result_218);
    (result_218 = come_decrement_ref_count(result_218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* string_operator_add(char* self, char* right){
void* __right_value81 = (void*)0;
char* __result_obj__105;
int len_219;
void* __right_value82 = (void*)0;
char* result_220;
char* __result_obj__106;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    len_219=strlen(self)+strlen(right);
    result_220=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_219+1)), "./comelang-minux9.h", 4030, "char*"));
    strncpy(result_220,self,len_219+1);
    strncat(result_220,right,len_219+1);
    __result_obj__106 = (char*)come_increment_ref_count(result_220);
    (result_220 = come_decrement_ref_count(result_220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
}

char* charp_operator_mult(char* self, int right){
void* __right_value83 = (void*)0;
char* __result_obj__107;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct buffer* buf_221;
int i_222;
void* __right_value86 = (void*)0;
char* __result_obj__108;
    if(    self==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    buf_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4043, "struct buffer*"))));
    for(    i_222=0    ;    i_222<right    ;    i_222++    ){
        buffer_append_str(buf_221,self);
    }
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value86=buffer_to_string(buf_221))));
    come_call_finalizer(buffer_finalize, buf_221, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_mult(char* self, int right){
void* __right_value87 = (void*)0;
char* __result_obj__109;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct buffer* buf_223;
int i_224;
void* __right_value90 = (void*)0;
char* __result_obj__110;
    if(    self==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    buf_223=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4057, "struct buffer*"))));
    for(    i_224=0    ;    i_224<right    ;    i_224++    ){
        buffer_append_str(buf_223,self);
    }
    __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value90=buffer_to_string(buf_223))));
    come_call_finalizer(buffer_finalize, buf_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_225;
int i_226;
    result_225=(_Bool)0;
    for(    i_226=0    ;    i_226<len    ;    i_226++    ){
        if(        strncmp(self[i_226],str,strlen(self[i_226]))==0        ) {
            result_225=(_Bool)1;
            break;
        }
    }
    return result_225;
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
int result_227;
char* p_228;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_227=0;
    p_228=value;
    while(    *p_228    ) {
        result_227+=(*p_228);
        p_228++;
    }
    return result_227;
}

unsigned int string_get_hash_key(char* value){
int result_229;
char* p_230;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_229=0;
    p_230=value;
    while(    *p_230    ) {
        result_229+=(*p_230);
        p_230++;
    }
    return result_229;
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
_Bool result_231;
    result_231=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_231;
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
_Bool result_232;
    result_232=(c>=32&&c<=126);
    return result_232;
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
void* __right_value91 = (void*)0;
char* __result_obj__111;
int len_233;
void* __right_value92 = (void*)0;
char* result_234;
int i_235;
char* __result_obj__112;
    if(    str==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    len_233=strlen(str);
    result_234=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_233+1)), "./comelang-minux9.h", 4295, "char*"));
    for(    i_235=0    ;    i_235<len_233    ;    i_235++    ){
        result_234[i_235]=str[len_233-i_235-1];
    }
    result_234[len_233]=0;
    __result_obj__112 = (char*)come_increment_ref_count(result_234);
    (result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value93 = (void*)0;
char* __result_obj__113;
int len_236;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
char* __result_obj__114;
void* __right_value96 = (void*)0;
char* __result_obj__115;
void* __right_value97 = (void*)0;
char* __result_obj__116;
void* __right_value98 = (void*)0;
char* result_237;
char* __result_obj__117;
    if(    str==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    len_236=strlen(str);
    if(    head<0    ) {
        head+=len_236;
    }
    if(    tail<0    ) {
        tail+=len_236+1;
    }
    if(    head>tail    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value95=charp_reverse(((char*)(__right_value94=charp_substring(str,tail,head)))))));
        (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_236    ) {
        tail=len_236;
    }
    if(    head==tail    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    tail-head+1<1    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    result_237=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang-minux9.h", 4341, "char*"));
    memcpy(result_237,str+head,tail-head);
    result_237[tail-head]=0;
    __result_obj__117 = (char*)come_increment_ref_count(result_237);
    (result_237 = come_decrement_ref_count(result_237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__118;
int len_238;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__119;
void* __right_value102 = (void*)0;
char* __result_obj__120;
void* __right_value103 = (void*)0;
char* __result_obj__121;
void* __right_value104 = (void*)0;
char* result_239;
char* __result_obj__122;
    if(    str==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_238=strlen(str);
    if(    head<0    ) {
        head+=len_238;
    }
    if(    tail<0    ) {
        tail+=len_238+1;
    }
    if(    head>tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_238    ) {
        tail=len_238;
    }
    if(    head==tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    tail-head+1<1    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    result_239=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang-minux9.h", 4384, "char*"));
    memcpy(result_239,str+head,tail-head);
    result_239[tail-head]=0;
    __result_obj__122 = (char*)come_increment_ref_count(result_239);
    (result_239 = come_decrement_ref_count(result_239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__123;
int len_240;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__124;
void* __right_value108 = (void*)0;
char* __result_obj__125;
void* __right_value109 = (void*)0;
char* __result_obj__126;
void* __right_value110 = (void*)0;
char* result_241;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_240=strlen(str);
    if(    head<0    ) {
        head+=len_240;
    }
    if(    tail<0    ) {
        tail+=len_240+1;
    }
    if(    head>tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_240    ) {
        tail=len_240;
    }
    if(    head==tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    tail-head+1<1    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result_241=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang-minux9.h", 4427, "char*"));
    memcpy(result_241,str+head,tail-head);
    result_241[tail-head]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_241);
    (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* xsprintf(char* msg, ...){
void* __right_value111 = (void*)0;
char* __result_obj__128;
va_list args_242;
char* result_243;
int len_244;
void* __right_value112 = (void*)0;
char* __result_obj__129;
void* __right_value113 = (void*)0;
char* result2_245;
char* __result_obj__130;
result_243 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    __builtin_va_start(args_242,msg);
    len_244=vasprintf(&result_243,msg,args_242);
    __builtin_va_end(args_242);
    if(    len_244<0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result2_245=(char*)come_increment_ref_count(__builtin_string(result_243));
    free(result_243);
    __result_obj__130 = (char*)come_increment_ref_count(result2_245);
    (result2_245 = come_decrement_ref_count(result2_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value114 = (void*)0;
char* __result_obj__131;
int len_246;
void* __right_value115 = (void*)0;
char* __result_obj__132;
void* __right_value116 = (void*)0;
char* __result_obj__133;
void* __right_value117 = (void*)0;
char* result_247;
char* __result_obj__134;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_246=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(str))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head+=len_246;
    }
    if(    tail<0    ) {
        tail+=len_246+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(str))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    tail>=len_246    ) {
        tail=len_246;
    }
    result_247=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_246-(tail-head)+1)), "./comelang-minux9.h", 4489, "char*"));
    memcpy(result_247,str,head);
    memcpy(result_247+head,str+tail,len_246-tail);
    result_247[len_246-(tail-head)]=0;
    __result_obj__134 = (char*)come_increment_ref_count(result_247);
    (result_247 = come_decrement_ref_count(result_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__134;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__135;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__135;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_248;
struct list_item$1char$ph* prev_it_249;
    it_248=self->head;
    while(    it_248!=((void*)0)    ) {
        prev_it_249=it_248;
        it_248=it_248->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_249, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value124 = (void*)0;
struct list_item$1char$ph* litem_253;
char* __dec_obj13;
void* __right_value125 = (void*)0;
struct list_item$1char$ph* litem_254;
char* __dec_obj14;
void* __right_value126 = (void*)0;
struct list_item$1char$ph* litem_255;
char* __dec_obj15;
struct list$1char$ph* __result_obj__137;
    if(    self->len==0    ) {
        litem_253=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value124=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang-minux9.h", 1509, "struct list_item$1char$ph*"))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj13=litem_253->item,
        litem_253->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1    ) {
        litem_254=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value125=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang-minux9.h", 1519, "struct list_item$1char$ph*"))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj14=litem_254->item,
        litem_254->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value126=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang-minux9.h", 1529, "struct list_item$1char$ph*"))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj15=litem_255->item,
        litem_255->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result_obj__137 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__137;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct list$1char$ph* __result_obj__136;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1char$ph* result_250;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct buffer* str_251;
int i_252;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct list$1char$ph* __result_obj__138;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value119=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang-minux9.h", 4502, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value119, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__136;
    }
    result_250=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang-minux9.h", 4505, "struct list$1char$ph*"))));
    str_251=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4507, "struct buffer*"))));
    for(    i_252=0    ;    i_252<charp_length(self)    ;    i_252++    ){
        if(        self[i_252]==c        ) {
            list$1char$ph_push_back(result_250,(char*)come_increment_ref_count(__builtin_string(str_251->buf)));
            buffer_reset(str_251);
        }
        else {
            buffer_append_char(str_251,self[i_252]);
        }
    }
    if(    buffer_length(str_251)!=0    ) {
        list$1char$ph_push_back(result_250,(char*)come_increment_ref_count(__builtin_string(str_251->buf)));
    }
    __result_obj__138 = (struct list$1char$ph*)come_increment_ref_count(result_250);
    come_call_finalizer(list$1char$ph$p_finalize, result_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value129 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value129=xsprintf(msg,self))));
    (__right_value129 = come_decrement_ref_count(__right_value129, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value130 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value130=xsprintf(msg,self))));
    (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_printable(char* str){
int len_256;
void* __right_value131 = (void*)0;
char* result_257;
int n_258;
int i_259;
char c_260;
char* __result_obj__141;
    len_256=charp_length(str);
    result_257=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_256*2+1)), "./comelang-minux9.h", 4539, "char*"));
    n_258=0;
    for(    i_259=0    ;    i_259<len_256    ;    i_259++    ){
        c_260=str[i_259];
        if(        (c_260>=0&&c_260<32)||c_260==127        ) {
            result_257[n_258++]=94;
            result_257[n_258++]=c_260+65-1;
        }
        else {
            result_257[n_258++]=c_260;
        }
    }
    result_257[n_258]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_257);
    (result_257 = come_decrement_ref_count(result_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value132 = (void*)0;
char* __result_obj__142;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct buffer* result_261;
char* p_262;
char* p2_263;
void* __right_value135 = (void*)0;
char* __result_obj__143;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value132=__builtin_string(self))));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang-minux9.h", 4567, "struct buffer*"))));
    p_262=self;
    while(    (_Bool)1    ) {
        p2_263=strstr(p_262,str);
        if(        p2_263==((void*)0)        ) {
            p2_263=p_262;
            while(            *p2_263            ) {
                p2_263++;
            }
            buffer_append(result_261,p_262,p2_263-p_262);
            break;
        }
        buffer_append(result_261,p_262,p2_263-p_262);
        buffer_append_str(result_261,replace);
        p_262=p2_263+strlen(str);
    }
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value135=buffer_to_string(result_261))));
    come_call_finalizer(buffer_finalize, result_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* xbasename(char* path){
void* __right_value136 = (void*)0;
char* __result_obj__144;
char* p_264;
void* __right_value137 = (void*)0;
char* __result_obj__145;
void* __right_value138 = (void*)0;
char* __result_obj__146;
void* __right_value139 = (void*)0;
char* __result_obj__147;
    if(    path==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value136=__builtin_string(""))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    p_264=path+strlen(path);
    while(    p_264>=path    ) {
        if(        *p_264==47        ) {
            break;
        }
        else {
            p_264--;
        }
    }
    if(    p_264<path    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(path))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    else {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(p_264+1))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(""))));
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xnoextname(char* path){
void* __right_value140 = (void*)0;
char* __result_obj__148;
void* __right_value141 = (void*)0;
char* path2_265;
char* p_266;
void* __right_value142 = (void*)0;
char* __result_obj__149;
void* __right_value143 = (void*)0;
char* __result_obj__150;
void* __right_value144 = (void*)0;
char* __result_obj__151;
    if(    path==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    path2_265=(char*)come_increment_ref_count(xbasename(path));
    p_266=path2_265+strlen(path2_265);
    while(    p_266>=path2_265    ) {
        if(        *p_266==46        ) {
            break;
        }
        else {
            p_266--;
        }
    }
    if(    p_266<path2_265    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path2_265))));
        (path2_265 = come_decrement_ref_count(path2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value143=charp_substring(path2_265,0,p_266-path2_265))));
        (path2_265 = come_decrement_ref_count(path2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (path2_265 = come_decrement_ref_count(path2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* xextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__152;
char* p_267;
void* __right_value146 = (void*)0;
char* __result_obj__153;
void* __right_value147 = (void*)0;
char* __result_obj__154;
void* __right_value148 = (void*)0;
char* __result_obj__155;
    if(    path==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    p_267=path+strlen(path);
    while(    p_267>=path    ) {
        if(        *p_267==46        ) {
            break;
        }
        else {
            p_267--;
        }
    }
    if(    p_267<path    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(path))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(p_267+1))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* bool_to_string(_Bool self){
void* __right_value149 = (void*)0;
char* __result_obj__156;
void* __right_value150 = (void*)0;
char* __result_obj__157;
    if(    self    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string("true"))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    else {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string("false"))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value151 = (void*)0;
char* __result_obj__158;
void* __right_value152 = (void*)0;
char* __result_obj__159;
    if(    self    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string("true"))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string("false"))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
}

char* char_to_string(char self){
void* __right_value153 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value153=xsprintf("%c",self))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* short_to_string(short self){
void* __right_value154 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value154=xsprintf("%d",self))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* int_to_string(int self){
void* __right_value155 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value155=xsprintf("%d",self))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* long_to_string(long self){
void* __right_value156 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf("%ld",self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value157 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%ld",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* float_to_string(float self){
void* __right_value158 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%f",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* double_to_string(double self){
void* __right_value159 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%lf",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* string_to_string(char* self){
void* __right_value160 = (void*)0;
char* __result_obj__167;
void* __right_value161 = (void*)0;
char* __result_obj__168;
    if(    self==((void*)0)    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string(""))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value161=__builtin_string(self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* charp_to_string(char* self){
void* __right_value162 = (void*)0;
char* __result_obj__169;
void* __right_value163 = (void*)0;
char* __result_obj__170;
    if(    self==((void*)0)    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
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
int i_268;
    for(    i_268=0    ;    i_268<self    ;    i_268++    ){
        block(parent,i_268);
    }
}

