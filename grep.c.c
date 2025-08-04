/// previous struct definition ///
/// struct definition ///
typedef int pid_t;

typedef char* string;

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

typedef unsigned long  int size_t;

typedef long ptrdiff_t;

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
int main(int argc, char** argv);
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
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, va_list ap);
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void putchar(char c);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
int printf(const char* fmt, ...);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
void stackframe();
char* come_get_stackframe();
void xassert(char* msg, _Bool test);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_print_heap_info(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
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
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
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
int main(int argc, char** argv){
long _ret_2;
int size_1;
long _ret_3;
long _ret_4;
memset(&_ret_2, 0, sizeof(long));
memset(&_ret_3, 0, sizeof(long));
memset(&_ret_4, 0, sizeof(long));
    come_heap_init(0, 0, 0);
    char buf_0[16];
    memset(&buf_0, 0, sizeof(char)    *(16)    );
    size_1=({_ret_2; register long _a0 asm("a0") =(long)(0);
; register long _a1 asm("a1") =(long)(buf_0);
; register long _a2 asm("a2") =(long)(3);
; register long _a7 asm("a7") =65;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_2=_a0; _ret_2; });
    ({_ret_3; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(buf_0);
; register long _a2 asm("a2") =(long)(3);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_3=_a0; _ret_3; });
    ({_ret_4; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)("\r\n");
; register long _a2 asm("a2") =(long)(2);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_4=_a0; _ret_4; });
    ({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");     while(    1    ) {
        ;
    }
    });come_heap_final();
}

void* sbrk(long incr){
char* current_brk_5;
void* __result_obj__1;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
    current_brk_5=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_5==(char*)-1    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    if(    incr==0    ) {
        __result_obj__2 = current_brk_5;
        return __result_obj__2;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_5+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__3 = (void*)-1;
        return __result_obj__3;
    }
    __result_obj__4 = current_brk_5;
    return __result_obj__4;
}

struct header* morecore(unsigned int nunits){
char* cp_6;
struct header* up_7;
struct header* __result_obj__5;
struct header* __result_obj__6;
cp_6 = (void*)0;
up_7 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_6=sbrk(nunits*sizeof(struct header));
    if(    cp_6==(char*)-1    ) {
        __result_obj__5 = (void*)0;
        return __result_obj__5;
    }
    up_7=(struct header*)cp_6;
    up_7->size=nunits;
    free((void*)(up_7+1));
    __result_obj__6 = freep;
    return __result_obj__6;
}

void* malloc(unsigned int nbytes){
struct header* p_8;
struct header* prevp_9;
unsigned int nunits_10;
void* __result_obj__7;
void* __result_obj__8;
memset(&p_8, 0, sizeof(struct header*));
memset(&prevp_9, 0, sizeof(struct header*));
memset(&nunits_10, 0, sizeof(unsigned int));
    nunits_10=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_9=freep)==0    ) {
        base.next=freep=prevp_9=&base;
        base.size=0;
    }
    for(    p_8=prevp_9->next    ;    ;    prevp_9=p_8,p_8=p_8->next    ){
        if(        p_8->size>=nunits_10        ) {
            if(            p_8->size==nunits_10            ) {
                prevp_9->next=p_8->next;
            }
            else {
                p_8->size-=nunits_10;
                p_8+=p_8->size;
                p_8->size=nunits_10;
            }
            freep=prevp_9;
            __result_obj__7 = (void*)(p_8+1);
            return __result_obj__7;
        }
        if(        p_8==freep        ) {
            if(            (p_8=morecore(nunits_10))==0            ) {
                __result_obj__8 = (void*)0;
                return __result_obj__8;
            }
        }
    }
}

void free(void* ap){
struct header* bp_11;
struct header* p_12;
memset(&bp_11, 0, sizeof(struct header*));
memset(&p_12, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_11=(struct header*)ap-1;
    for(    p_12=freep    ;    !(bp_11>p_12&&bp_11<p_12->next)    ;    p_12=p_12->next    ){
        if(        p_12>=p_12->next&&(bp_11>p_12||bp_11<p_12->next)        ) {
            break;
        }
    }
    if(    bp_11+bp_11->size==p_12->next    ) {
        bp_11->size+=p_12->next->size;
        bp_11->next=p_12->next->next;
    }
    else {
        bp_11->next=p_12->next;
    }
    if(    p_12+p_12->size==bp_11    ) {
        p_12->size+=bp_11->size;
        p_12->next=bp_11->next;
    }
    else {
        p_12->next=bp_11;
    }
    freep=p_12;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_13;
void* __result_obj__9;
void* ptr_14;
void* __result_obj__10;
    total_size_13=nmemb*size;
    if(    total_size_13==0    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    ptr_14=malloc(total_size_13);
    if(    ptr_14!=((void*)0)    ) {
        memset(ptr_14,0,total_size_13);
    }
    __result_obj__10 = ptr_14;
    return __result_obj__10;
}

char* strdup(const char* s){
char* s2_15;
unsigned long  int len_16;
char* p_17;
char* __result_obj__11;
    s2_15=s;
    len_16=strlen(s2_15)+1;
    p_17=malloc(len_16);
    if(    p_17    ) {
        memcpy(p_17,s2_15,len_16);
    }
    __result_obj__11 = p_17;
    return __result_obj__11;
}

int strcmp(const char* s1, const char* s2){
    while(    *s1&&(*s1==*s2)    ) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1-(unsigned char)*s2;
}

char* strstr(const char* haystack, const char* needle){
char* __result_obj__12;
char* __result_obj__13;
char* __result_obj__14;
    if(    !*needle    ) {
        __result_obj__12 = (char*)haystack;
        return __result_obj__12;
    }
    for(    ;    *haystack    ;    haystack++    ){
        const char* h_18=haystack;
        const char* n_19=needle;
        while(        *h_18&&*n_19&&(*h_18==*n_19)        ) {
            h_18++;
            n_19++;
        }
        if(        !*n_19        ) {
            __result_obj__13 = (char*)haystack;
            return __result_obj__13;
        }
    }
    __result_obj__14 = ((void*)0);
    return __result_obj__14;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_20;
int i_21;
void* __result_obj__15;
    cdst_20=(char*)dst;
    for(    i_21=0    ;    i_21<n    ;    i_21++    ){
        cdst_20[i_21]=c;
    }
    __result_obj__15 = dst;
    return __result_obj__15;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_22;
const unsigned char* s2_23;
memset(&s1_22, 0, sizeof(const unsigned char*));
memset(&s2_23, 0, sizeof(const unsigned char*));
    s1_22=v1;
    s2_23=v2;
    while(    n-->0    ) {
        if(        *s1_22!=*s2_23        ) {
            return *s1_22-*s2_23;
        }
        s1_22++,s2_23++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_24;
char* d_25;
void* __result_obj__16;
void* __result_obj__17;
s_24 = (void*)0;
d_25 = (void*)0;
    if(    n==0    ) {
        __result_obj__16 = dst;
        return __result_obj__16;
    }
    s_24=src;
    d_25=dst;
    if(    s_24<d_25&&s_24+n>d_25    ) {
        s_24+=n;
        d_25+=n;
        while(        n-->0        ) {
            *--d_25=*--s_24;
        }
    }
    else {
        while(        n-->0        ) {
            *d_25++=*s_24++;
        }
    }
    __result_obj__17 = dst;
    return __result_obj__17;
}

void* memcpy(void* dst, const void* src, unsigned int n){
void* __result_obj__18;
    __result_obj__18 = memmove(dst,src,n);
    return __result_obj__18;
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
char* os_26;
char* __result_obj__19;
os_26 = (void*)0;
    os_26=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__19 = os_26;
    return __result_obj__19;
}

int strlen(const char* s){
int n_27;
memset(&n_27, 0, sizeof(int));
    for(    n_27=0    ;    s[n_27]    ;    n_27++    ){
        ;
    }
    return n_27;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_28;
char* __result_obj__20;
    d_28=dest;
    while(    *d_28    ) {
        d_28++;
    }
    while(    n--&&*src    ) {
        *d_28++=*src++;
    }
    *d_28=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

char* strtok(char* s, const char* delim){
static char* next_29;
char* start_30;
char* p_31;
char* __result_obj__21;
int is_delim_33;
char* __result_obj__22;
int is_delim_35;
char* __result_obj__23;
next_29 = (void*)0;
start_30 = (void*)0;
p_31 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_29=s;
    }
    if(    next_29==((void*)0)    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
    }
    start_30=next_29;
    while(    *start_30!=0    ) {
        const char* d_32=delim;
        is_delim_33=0;
        while(        *d_32!=0        ) {
            if(            *start_30==*d_32            ) {
                is_delim_33=1;
                break;
            }
            d_32++;
        }
        if(        !is_delim_33        ) {
            break;
        }
        start_30++;
    }
    if(    *start_30==0    ) {
        next_29=((void*)0);
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
    }
    p_31=start_30;
    while(    *p_31!=0    ) {
        const char* d_34=delim;
        is_delim_35=0;
        while(        *d_34!=0        ) {
            if(            *p_31==*d_34            ) {
                is_delim_35=1;
                break;
            }
            d_34++;
        }
        if(        is_delim_35        ) {
            break;
        }
        p_31++;
    }
    if(    *p_31==0    ) {
        next_29=((void*)0);
    }
    else {
        *p_31=0;
        next_29=p_31+1;
    }
    __result_obj__23 = start_30;
    return __result_obj__23;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_36;
int i_38;
int negative_39;
char* __result_obj__24;
int digit_40;
char* __result_obj__25;
    p_36=buf;
    char tmp_37[32];
    memset(&tmp_37, 0, sizeof(char)    *(32)    );
    i_38=0;
    negative_39=0;
    if(    base<2||base>16    ) {
        *p_36=0;
        __result_obj__24 = p_36;
        return __result_obj__24;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_39=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_40=val_%base;
        tmp_37[i_38++]=(((digit_40<10))?(48+digit_40):(97+digit_40-10));
        val_/=base;
    } while(    val_    );
    if(    negative_39    ) {
        *p_36++=45;
    }
    while(    i_38--    ) {
        *p_36++=tmp_37[i_38];
    }
    *p_36=0;
    __result_obj__25 = buf;
    return __result_obj__25;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_42;
const char* s_43;
unsigned long  int remaining_45;
s_43 = (void*)0;
    char out2_41[512];
    memset(&out2_41, 0, sizeof(char)    *(512)    );
    p_42=out2_41;
    char buf_44[32];
    memset(&buf_44, 0, sizeof(char)    *(32)    );
    remaining_45=sizeof(out2_41);
    for(    ;    *fmt&&remaining_45>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_42++=*fmt;
            remaining_45--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_44,__builtin_va_arg(ap,int),10,1);
            s_43=buf_44;
            break;
            case 117:
            itoa(buf_44,__builtin_va_arg(ap,unsigned int),10,0);
            s_43=buf_44;
            break;
            case 120:
            itoa(buf_44,__builtin_va_arg(ap,unsigned int),16,0);
            s_43=buf_44;
            break;
            case 115:
            s_43=__builtin_va_arg(ap,const char*);
            if(            !s_43            ) {
                s_43="(null)";
            }
            break;
            case 99:
            buf_44[0]=(char)__builtin_va_arg(ap,int);
            buf_44[1]=0;
            s_43=buf_44;
            break;
            case 112:
            strncpy(buf_44,"0x",32);
            itoa(buf_44+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_43=buf_44;
            break;
            case 37:
            buf_44[0]=37;
            buf_44[1]=0;
            s_43=buf_44;
            break;
            default:
            buf_44[0]=37;
            buf_44[1]=*fmt;
            buf_44[2]=0;
            s_43=buf_44;
            break;
        }
        while(        *s_43&&remaining_45>1        ) {
            *p_42++=*s_43++;
            remaining_45--;
        }
    }
    *p_42=0;
    *out=strdup(out2_41);
    return p_42-out2_41;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
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

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_51;
char* p_52;
const char* s_53;
unsigned long  int remaining_55;
memset(&ap_51, 0, sizeof(va_list));
s_53 = (void*)0;
    __builtin_va_start(ap_51,fmt);
    p_52=out;
    char buf_54[32];
    memset(&buf_54, 0, sizeof(char)    *(32)    );
    remaining_55=out_size;
    if(    remaining_55==0    ) {
        __builtin_va_end(ap_51);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_55>1            ) {
                *p_52++=*fmt;
                remaining_55--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_53=__builtin_va_arg(ap_51,const char*);
            while(            *s_53&&remaining_55>1            ) {
                *p_52++=*s_53++;
                remaining_55--;
            }
            break;
            case 100:
            itoa(buf_54,__builtin_va_arg(ap_51,int),10,0);
            s_53=buf_54;
            while(            *s_53&&remaining_55>1            ) {
                *p_52++=*s_53++;
                remaining_55--;
            }
            break;
            case 120:
            itoa(buf_54,(unsigned int)__builtin_va_arg(ap_51,int),16,1);
            s_53=buf_54;
            while(            *s_53&&remaining_55>1            ) {
                *p_52++=*s_53++;
                remaining_55--;
            }
            break;
            case 99:
            if(            remaining_55>1            ) {
                *p_52++=(char)__builtin_va_arg(ap_51,int);
                remaining_55--;
            }
            break;
            case 112:
            s_53="0x";
            while(            *s_53&&remaining_55>1            ) {
                *p_52++=*s_53++;
                remaining_55--;
            }
            itoa(buf_54,(long)__builtin_va_arg(ap_51,void*),16,1);
            s_53=buf_54;
            while(            *s_53&&remaining_55>1            ) {
                *p_52++=*s_53++;
                remaining_55--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_54,__builtin_va_arg(ap_51,long),10,1);
                s_53=buf_54;
                while(                *s_53&&remaining_55>1                ) {
                    *p_52++=*s_53++;
                    remaining_55--;
                }
            }
            break;
            default:
            if(            remaining_55>1            ) {
                *p_52++=37;
                remaining_55--;
                if(                remaining_55>1                ) {
                    *p_52++=*fmt;
                    remaining_55--;
                }
            }
            break;
        }
    }
    *p_52=0;
    __builtin_va_end(ap_51);
    return p_52-out;
}

void putchar(char c){
long _ret_56;
memset(&_ret_56, 0, sizeof(long));
    ({_ret_56; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&c);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_56=_a0; _ret_56; });
}

void printint(int val_, int base, int sign){
int i_58;
int negative_59;
unsigned int uval_60;
int digit_61;
memset(&uval_60, 0, sizeof(unsigned int));
    char buf_57[33];
    memset(&buf_57, 0, sizeof(char)    *(33)    );
    i_58=0;
    negative_59=0;
    if(    sign&&val_<0    ) {
        negative_59=1;
        uval_60=-val_;
    }
    else {
        uval_60=(unsigned int)val_;
    }
    if(    uval_60==0    ) {
        putchar(48);
        return;
    }
    while(    uval_60>0    ) {
        digit_61=uval_60%base;
        buf_57[i_58++]=((digit_61<10)?(48+digit_61):(97+(digit_61-10)));
        uval_60/=base;
    }
    if(    negative_59    ) {
        putchar(45);
    }
    while(    --i_58>=0    ) {
        putchar(buf_57[i_58]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_63;
int negative_64;
int digit_65;
    char buf_62[65];
    memset(&buf_62, 0, sizeof(char)    *(65)    );
    i_63=0;
    negative_64=0;
    if(    sign&&(long)val_<0    ) {
        negative_64=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_65=val_%base;
        buf_62[i_63++]=((digit_65<10)?(48+digit_65):(97+(digit_65-10)));
        val_/=base;
    }
    if(    negative_64    ) {
        putchar(45);
    }
    while(    --i_63>=0    ) {
        putchar(buf_62[i_63]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_67;
int negative_68;
int digit_69;
    char buf_66[65];
    memset(&buf_66, 0, sizeof(char)    *(65)    );
    i_67=0;
    negative_68=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_68=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_69=val_%base;
        buf_66[i_67++]=((digit_69<10)?(48+digit_69):(97+(digit_69-10)));
        val_/=base;
    }
    if(    negative_68    ) {
        putchar(45);
    }
    while(    --i_67>=0    ) {
        putchar(buf_66[i_67]);
    }
}

int printf(const char* fmt, ...){
va_list ap_70;
const char* p_71;
int lcount_72;
unsigned long  int val__73;
unsigned long  long val__74;
long val__75;
long long val__76;
int i_77;
int val__78;
unsigned int val__79;
unsigned long  int val__80;
char c_82;
memset(&ap_70, 0, sizeof(va_list));
p_71 = (void*)0;
    __builtin_va_start(ap_70,fmt);
    for(    p_71=fmt    ;    *p_71    ;    p_71++    ){
        if(        *p_71!=37        ) {
            putchar(*p_71);
            continue;
        }
        p_71++;
        if(        *p_71==108        ) {
            lcount_72=1;
            if(            *(p_71+1)==108            ) {
                lcount_72=2;
                p_71++;
            }
            p_71++;
            switch (            *p_71) {
                case 120:
                {
                    if(                    lcount_72==1                    ) {
                        val__73=__builtin_va_arg(ap_70,unsigned long  int);
                        printlong(val__73,16,0);
                    }
                    else {
                        val__74=__builtin_va_arg(ap_70,unsigned long  long);
                        printlonglong(val__74,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_72==1                    ) {
                        val__75=__builtin_va_arg(ap_70,long);
                        printlong(val__75,10,1);
                    }
                    else {
                        val__76=__builtin_va_arg(ap_70,long  long);
                        printlonglong(val__76,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_77=0                    ;                    i_77<lcount_72                    ;                    i_77++                    ){
                        putchar(108);
                    }
                    putchar(*p_71);
                    break;
                }
            }
        }
        else {
            switch (            *p_71) {
                case 100:
                {
                    val__78=__builtin_va_arg(ap_70,int);
                    printint(val__78,10,1);
                    break;
                }
                case 120:
                {
                    val__79=__builtin_va_arg(ap_70,unsigned int);
                    printint(val__79,16,0);
                    break;
                }
                case 112:
                {
                    val__80=(unsigned long  int)__builtin_va_arg(ap_70,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__80,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_81=__builtin_va_arg(ap_70,const char*);
                    if(                    !s_81                    ) {
                        s_81="(null)";
                    }
                    while(                    *s_81                    ) {
                        putchar(*s_81++);
                    }
                    break;
                }
                case 99:
                {
                    c_82=(char)__builtin_va_arg(ap_70,int);
                    putchar(c_82);
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
                    putchar(*p_71);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_70);
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

char* come_get_stackframe(){
void* __right_value0 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__26 = come_decrement_ref_count(__result_obj__26, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__26;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test    ) {
        puts("false");
        ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");         while(        1        ) {
            ;
        }
        });    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
}

void come_heap_final(){
}

void* alloc_from_pages(unsigned long  int size){
void* result_83;
void* __result_obj__27;
    result_83=((void*)0);
    size=(size+7&~7);
    result_83=calloc(1,size);
    __result_obj__27 = result_83;
    return __result_obj__27;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_84;
struct sMemHeaderTiny* prev_it_85;
struct sMemHeaderTiny* next_it_86;
unsigned long  int size_87;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_84=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_84->allocated!=177783            ) {
                return;
            }
            it_84->allocated=0;
            prev_it_85=it_84->prev;
            next_it_86=it_84->next;
            if(            gAllocMem==it_84            ) {
                gAllocMem=(struct sMemHeader*)next_it_86;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_85                ) {
                    prev_it_85->next=next_it_86;
                }
                if(                next_it_86                ) {
                    next_it_86->prev=prev_it_85;
                }
            }
            size_87=it_84->size;
            free(it_84);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_88;
struct sMemHeaderTiny* it_89;
void* __result_obj__28;
    if(    gComeDebugLib    ) {
    }
    else {
        result_88=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_89=result_88;
        it_89->allocated=177783;
        it_89->class_name=class_name;
        it_89->sname=sname;
        it_89->sline=sline;
        it_89->size=size+sizeof(struct sMemHeaderTiny);
        it_89->free_next=((void*)0);
        it_89->next=(struct sMemHeaderTiny*)gAllocMem;
        it_89->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_89;
        }
        gAllocMem=(struct sMemHeader*)it_89;
        gNumAlloc++;
        __result_obj__28 = (char*)result_88+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_90;
char* __result_obj__29;
struct sMemHeaderTiny* it_91;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_90=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_90->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_90);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__29 = it_90->class_name;
        return __result_obj__29;
    }
    else {
        it_91=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_91->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_91);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__30 = it_91->class_name;
        return __result_obj__30;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_92;
unsigned long  int* ref_count_93;
unsigned long  int* size2_94;
void* __result_obj__31;
    mem_92=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_93=(unsigned long  int*)mem_92;
    *ref_count_93=0;
    size2_94=(unsigned long  int*)(mem_92+sizeof(unsigned long  int));
    *size2_94=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_92+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_95;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_95=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_95);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_96;
unsigned long  int* size_p_97;
unsigned long  int size_98;
void* result_99;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_96=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_97=(unsigned long  int*)(mem_96+sizeof(unsigned long  int));
    size_98=*size_p_97-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_99=come_calloc_v2(1,size_98,sname,sline,class_name);
    memcpy(result_99,block,size_98);
    __result_obj__33 = result_99;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_100;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_100=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_100)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_101;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_101=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_101);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_102;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_102=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_102;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_103;
unsigned long  int count_104;
void (*finalizer_105)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
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
    ref_count_103=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_103)--;
    }
    count_104=*ref_count_103;
    if(    !no_free&&count_104<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_105=protocol_fun;
            finalizer_105(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    __result_obj__41 = mem;
    return __result_obj__41;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_106)(void*);
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
unsigned long  int* ref_count_109;
unsigned long  int count_110;
void (*finalizer_111)(void*);
void (*finalizer_112)(void*);
void (*finalizer_113)(void*);
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
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
                finalizer_106=protocol_fun;
                finalizer_106(protocol_obj);
            }
            finalizer_107=fun;
            finalizer_107(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_108=protocol_fun;
                finalizer_108(protocol_obj);
            }
        }
    }
    else {
        ref_count_109=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_109)--;
        }
        count_110=*ref_count_109;
        if(        !no_free&&count_110<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_111=protocol_fun;
                        finalizer_111(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_112=fun;
                        finalizer_112(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_113=protocol_fun;
                        finalizer_113(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__42;
int len_114;
void* __right_value1 = (void*)0;
char* result_115;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_114=strlen(str)+1;
    result_115=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_114)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_115,str,len_114);
    __result_obj__43 = (char*)come_increment_ref_count(result_115);
    (result_115 = come_decrement_ref_count(result_115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

void come_push_stackframe_v2(char* sname, int sline, int id){
    come_push_stackframe(sname,sline,id);
}

void come_pop_stackframe_v2(){
    come_pop_stackframe();
}

void come_save_stackframe_v2(char* sname, int sline){
    come_save_stackframe(sname,sline);
}

void stackframe_v2(){
    stackframe();
}

char* come_get_stackframe_v2(){
void* __right_value2 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value2=come_get_stackframe())));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__45;
    __result_obj__45 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__45;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value3 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__46;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2915, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__46 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value4 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__47;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2925, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__47 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__48;
void* __right_value5 = (void*)0;
struct buffer* result_116;
void* __right_value6 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__48 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__48;
    }
    result_116=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_116->size=self->size;
    __dec_obj3=result_116->buf,
    result_116->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_116->len=self->len;
    memcpy(result_116->buf,self->buf,self->len);
    __result_obj__49 = (struct buffer*)come_increment_ref_count(result_116);
    come_call_finalizer(buffer_finalize, result_116, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value7 = (void*)0;
void* __right_value8 = (void*)0;
_Bool __result_obj__50;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__50 = string_equals(((char*)(__right_value7=buffer_to_string(left))),((char*)(__right_value8=buffer_to_string(right))));
    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__50;
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
struct buffer* __result_obj__51;
void* __right_value9 = (void*)0;
char* old_buf_117;
int old_len_118;
int new_size_119;
void* __right_value10 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__52;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__51 = self;
        return __result_obj__51;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_117=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_117,self->buf,self->size);
        old_len_118=self->len;
        new_size_119=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_119)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_117,old_len_118);
        self->buf[old_len_118]=0;
        self->size=new_size_119;
        (old_buf_117 = come_decrement_ref_count(old_buf_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__53;
void* __right_value11 = (void*)0;
char* old_buf_120;
int old_len_121;
int new_size_122;
void* __right_value12 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__54;
    if(    self==((void*)0)    ) {
        __result_obj__53 = ((void*)0);
        return __result_obj__53;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_120=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_121=self->len;
        new_size_122=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_122)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_120,old_len_121);
        self->buf[old_len_121]=0;
        self->size=new_size_122;
        (old_buf_120 = come_decrement_ref_count(old_buf_120, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__55;
int size_123;
void* __right_value13 = (void*)0;
char* old_buf_124;
int old_len_125;
int new_size_126;
void* __right_value14 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    size_123=strlen(mem);
    if(    self->len+size_123+1+1>=self->size    ) {
        old_buf_124=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_124,self->buf,self->size);
        old_len_125=self->len;
        new_size_126=(self->size+size_123+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_126)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_124,old_len_125);
        self->buf[old_len_125]=0;
        self->size=new_size_126;
        (old_buf_124 = come_decrement_ref_count(old_buf_124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_123);
    self->len+=size_123;
    self->buf[self->len]=0;
    __result_obj__56 = self;
    return __result_obj__56;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__57;
va_list args_127;
char* result_128;
int len_129;
struct buffer* __result_obj__58;
void* __right_value15 = (void*)0;
char* mem_130;
int size_131;
void* __right_value16 = (void*)0;
char* old_buf_132;
int old_len_133;
int new_size_134;
void* __right_value17 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__59;
result_128 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    __builtin_va_start(args_127,msg);
    len_129=vasprintf(&result_128,msg,args_127);
    __builtin_va_end(args_127);
    if(    len_129<0    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    mem_130=(char*)come_increment_ref_count(__builtin_string(result_128));
    size_131=strlen(mem_130);
    if(    self->len+size_131+1+1>=self->size    ) {
        old_buf_132=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_132,self->buf,self->size);
        old_len_133=self->len;
        new_size_134=(self->size+size_131+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_134)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_132,old_len_133);
        self->buf[old_len_133]=0;
        self->size=new_size_134;
        (old_buf_132 = come_decrement_ref_count(old_buf_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_130,size_131);
    self->len+=size_131;
    self->buf[self->len]=0;
    free(result_128);
    __result_obj__59 = self;
    (mem_130 = come_decrement_ref_count(mem_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__59;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__60;
int size_135;
void* __right_value18 = (void*)0;
char* old_buf_136;
int old_len_137;
int new_size_138;
void* __right_value19 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__61;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    size_135=strlen(mem)+1;
    if(    self->len+size_135+1+1+1>=self->size    ) {
        old_buf_136=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_136,self->buf,self->size);
        old_len_137=self->len;
        new_size_138=(self->size+size_135+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_138)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_136,old_len_137);
        self->buf[old_len_137]=0;
        self->size=new_size_138;
        (old_buf_136 = come_decrement_ref_count(old_buf_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_135);
    self->len+=size_135;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__62;
int* mem_139;
int size_140;
void* __right_value20 = (void*)0;
char* old_buf_141;
int old_len_142;
int new_size_143;
void* __right_value21 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_139=&value;
    size_140=sizeof(int);
    if(    self->len+size_140+1+1>=self->size    ) {
        old_buf_141=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_141,self->buf,self->size);
        old_len_142=self->len;
        new_size_143=(self->size+size_140+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_143)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_141,old_len_142);
        self->buf[old_len_142]=0;
        self->size=new_size_143;
        (old_buf_141 = come_decrement_ref_count(old_buf_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_139,size_140);
    self->len+=size_140;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_144;
int size_145;
void* __right_value22 = (void*)0;
char* old_buf_146;
int old_len_147;
int new_size_148;
void* __right_value23 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__64;
    mem_144=&value;
    size_145=sizeof(long);
    if(    self->len+size_145+1+1>=self->size    ) {
        old_buf_146=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_146,self->buf,self->size);
        old_len_147=self->len;
        new_size_148=(self->size+size_145+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_148)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_146,old_len_147);
        self->buf[old_len_147]=0;
        self->size=new_size_148;
        (old_buf_146 = come_decrement_ref_count(old_buf_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_144,size_145);
    self->len+=size_145;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__65;
short* mem_149;
int size_150;
void* __right_value24 = (void*)0;
char* old_buf_151;
int old_len_152;
int new_size_153;
void* __right_value25 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    mem_149=&value;
    size_150=sizeof(short);
    if(    self->len+size_150+1+1>=self->size    ) {
        old_buf_151=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_151,self->buf,self->size);
        old_len_152=self->len;
        new_size_153=(self->size+size_150+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_153)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_151,old_len_152);
        self->buf[old_len_152]=0;
        self->size=new_size_153;
        (old_buf_151 = come_decrement_ref_count(old_buf_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_149,size_150);
    self->len+=size_150;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__67;
int len_154;
int new_size_155;
void* __right_value26 = (void*)0;
char* __dec_obj12;
int i_156;
struct buffer* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__67 = ((void*)0);
        return __result_obj__67;
    }
    len_154=self->len;
    len_154=(len_154+3)&~3;
    if(    len_154>=self->size    ) {
        new_size_155=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_155)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_155;
    }
    for(    i_156=self->len    ;    i_156<len_154    ;    i_156++    ){
        self->buf[i_156]=0;
    }
    self->len=len_154;
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
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* result_157;
struct buffer* __result_obj__69;
struct buffer* __result_obj__70;
    result_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__69 = (struct buffer*)come_increment_ref_count(result_157);
        come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    buffer_append_str(result_157,self);
    __result_obj__70 = (struct buffer*)come_increment_ref_count(result_157);
    come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

char* buffer_to_string(struct buffer* self){
void* __right_value29 = (void*)0;
char* __result_obj__71;
void* __right_value30 = (void*)0;
char* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value29=__builtin_string(""))));
        (__right_value29 = come_decrement_ref_count(__right_value29, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value30=__builtin_string(self->buf))));
    (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__73;
    __result_obj__73 = self->buf;
    return __result_obj__73;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_158;
struct buffer* __result_obj__74;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_158,self,sizeof(char)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_159;
int i_160;
struct buffer* __result_obj__75;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_160=0    ;    i_160<len    ;    i_160++    ){
        buffer_append(result_159,self[i_160],strlen(self[i_160]));
    }
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_159);
    come_call_finalizer(buffer_finalize, result_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__76;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_161,(char*)self,sizeof(short)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__77;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_162,(char*)self,sizeof(int)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_163;
struct buffer* __result_obj__78;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_163,(char*)self,sizeof(long)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__79;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_164,(char*)self,sizeof(float)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__80;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_165,(char*)self,sizeof(double)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* buffer_printable(struct buffer* self){
int len_166;
void* __right_value45 = (void*)0;
char* result_167;
int n_168;
int i_169;
unsigned char c_170;
char* __result_obj__81;
    len_166=self->len;
    result_167=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_166*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_168=0;
    for(    i_169=0    ;    i_169<len_166    ;    i_169++    ){
        c_170=self->buf[i_169];
        if(        (c_170>=0&&c_170<32)||c_170==127        ) {
            result_167[n_168++]=94;
            result_167[n_168++]=c_170+65-1;
        }
        else if(        c_170>127        ) {
            result_167[n_168++]=63;
        }
        else {
            result_167[n_168++]=c_170;
        }
    }
    result_167[n_168]=0;
    __result_obj__81 = (char*)come_increment_ref_count(result_167);
    (result_167 = come_decrement_ref_count(result_167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_171;
struct list$1char$* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_171=0    ;    i_171<num_value    ;    i_171++    ){
        list$1char$_push_back(self,values[i_171]);
    }
    __result_obj__83 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value47 = (void*)0;
struct list_item$1char$* litem_172;
void* __right_value48 = (void*)0;
struct list_item$1char$* litem_173;
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_174;
struct list$1char$* __result_obj__82;
    if(    self->len==0    ) {
        litem_172=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value47=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_172->prev=((void*)0);
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head=litem_172;
    }
    else if(    self->len==1    ) {
        litem_173=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value48=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_173->prev=self->head;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head->next=litem_173;
    }
    else {
        litem_174=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_174->prev=self->tail;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail->next=litem_174;
        self->tail=litem_174;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_175;
struct list_item$1char$* prev_it_176;
    it_175=self->head;
    while(    it_175!=((void*)0)    ) {
        prev_it_176=it_175;
        it_175=it_175->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char$* __result_obj__84;
    __result_obj__84 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value50=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value50, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_177;
struct list$1char$p* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_177=0    ;    i_177<num_value    ;    i_177++    ){
        list$1char$p_push_back(self,values[i_177]);
    }
    __result_obj__86 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value52 = (void*)0;
struct list_item$1char$p* litem_178;
void* __right_value53 = (void*)0;
struct list_item$1char$p* litem_179;
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_180;
struct list$1char$p* __result_obj__85;
    if(    self->len==0    ) {
        litem_178=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value52=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_178->prev=((void*)0);
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head=litem_178;
    }
    else if(    self->len==1    ) {
        litem_179=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value53=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_179->prev=self->head;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head->next=litem_179;
    }
    else {
        litem_180=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_180->prev=self->tail;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail->next=litem_180;
        self->tail=litem_180;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_181;
struct list_item$1char$p* prev_it_182;
    it_181=self->head;
    while(    it_181!=((void*)0)    ) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1char$p* __result_obj__87;
    __result_obj__87 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value55=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value55, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_183;
struct list$1short$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_183=0    ;    i_183<num_value    ;    i_183++    ){
        list$1short$_push_back(self,values[i_183]);
    }
    __result_obj__89 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value57 = (void*)0;
struct list_item$1short$* litem_184;
void* __right_value58 = (void*)0;
struct list_item$1short$* litem_185;
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_186;
struct list$1short$* __result_obj__88;
    if(    self->len==0    ) {
        litem_184=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value57=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1    ) {
        litem_185=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value58=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_187;
struct list_item$1short$* prev_it_188;
    it_187=self->head;
    while(    it_187!=((void*)0)    ) {
        prev_it_188=it_187;
        it_187=it_187->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1short$* __result_obj__90;
    __result_obj__90 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value60=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value60, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_189;
struct list$1int$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_189=0    ;    i_189<num_value    ;    i_189++    ){
        list$1int$_push_back(self,values[i_189]);
    }
    __result_obj__92 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value62 = (void*)0;
struct list_item$1int$* litem_190;
void* __right_value63 = (void*)0;
struct list_item$1int$* litem_191;
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_192;
struct list$1int$* __result_obj__91;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value62=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value63=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_193;
struct list_item$1int$* prev_it_194;
    it_193=self->head;
    while(    it_193!=((void*)0)    ) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1int$* __result_obj__93;
    __result_obj__93 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value65=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value65, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_195;
struct list$1long$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0    ;    i_195<num_value    ;    i_195++    ){
        list$1long$_push_back(self,values[i_195]);
    }
    __result_obj__95 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value67 = (void*)0;
struct list_item$1long$* litem_196;
void* __right_value68 = (void*)0;
struct list_item$1long$* litem_197;
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_198;
struct list$1long$* __result_obj__94;
    if(    self->len==0    ) {
        litem_196=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value67=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1    ) {
        litem_197=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value68=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_199;
struct list_item$1long$* prev_it_200;
    it_199=self->head;
    while(    it_199!=((void*)0)    ) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1long$* __result_obj__96;
    __result_obj__96 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value70=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value70, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_201;
struct list$1float$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0    ;    i_201<num_value    ;    i_201++    ){
        list$1float$_push_back(self,values[i_201]);
    }
    __result_obj__98 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value72 = (void*)0;
struct list_item$1float$* litem_202;
void* __right_value73 = (void*)0;
struct list_item$1float$* litem_203;
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_204;
struct list$1float$* __result_obj__97;
    if(    self->len==0    ) {
        litem_202=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value72=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1    ) {
        litem_203=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value73=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_205;
struct list_item$1float$* prev_it_206;
    it_205=self->head;
    while(    it_205!=((void*)0)    ) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1float$* __result_obj__99;
    __result_obj__99 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value75=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value75, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_207;
struct list$1double$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_207=0    ;    i_207<num_value    ;    i_207++    ){
        list$1double$_push_back(self,values[i_207]);
    }
    __result_obj__101 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value77 = (void*)0;
struct list_item$1double$* litem_208;
void* __right_value78 = (void*)0;
struct list_item$1double$* litem_209;
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_210;
struct list$1double$* __result_obj__100;
    if(    self->len==0    ) {
        litem_208=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value77=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head=litem_208;
    }
    else if(    self->len==1    ) {
        litem_209=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value78=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        litem_210=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_211;
struct list_item$1double$* prev_it_212;
    it_211=self->head;
    while(    it_211!=((void*)0)    ) {
        prev_it_212=it_211;
        it_211=it_211->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value76 = (void*)0;
void* __right_value80 = (void*)0;
struct list$1double$* __result_obj__102;
    __result_obj__102 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value80=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value80, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value81 = (void*)0;
char* __result_obj__103;
int len_213;
void* __right_value82 = (void*)0;
char* result_214;
char* __result_obj__104;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    len_213=strlen(self)+strlen(right);
    result_214=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_213+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_214,self,len_213+1);
    strncat(result_214,right,len_213+1);
    __result_obj__104 = (char*)come_increment_ref_count(result_214);
    (result_214 = come_decrement_ref_count(result_214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* string_operator_add(char* self, char* right){
void* __right_value83 = (void*)0;
char* __result_obj__105;
int len_215;
void* __right_value84 = (void*)0;
char* result_216;
char* __result_obj__106;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    len_215=strlen(self)+strlen(right);
    result_216=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_215+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_216,self,len_215+1);
    strncat(result_216,right,len_215+1);
    __result_obj__106 = (char*)come_increment_ref_count(result_216);
    (result_216 = come_decrement_ref_count(result_216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
}

char* charp_operator_mult(char* self, int right){
void* __right_value85 = (void*)0;
char* __result_obj__107;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct buffer* buf_217;
int i_218;
void* __right_value88 = (void*)0;
char* __result_obj__108;
    if(    self==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    buf_217=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_218=0    ;    i_218<right    ;    i_218++    ){
        buffer_append_str(buf_217,self);
    }
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value88=buffer_to_string(buf_217))));
    come_call_finalizer(buffer_finalize, buf_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__109;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_219;
int i_220;
void* __right_value92 = (void*)0;
char* __result_obj__110;
    if(    self==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    buf_219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_220=0    ;    i_220<right    ;    i_220++    ){
        buffer_append_str(buf_219,self);
    }
    __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_219))));
    come_call_finalizer(buffer_finalize, buf_219, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_221;
int i_222;
    result_221=(_Bool)0;
    for(    i_222=0    ;    i_222<len    ;    i_222++    ){
        if(        strncmp(self[i_222],str,strlen(self[i_222]))==0        ) {
            result_221=(_Bool)1;
            break;
        }
    }
    return result_221;
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
int result_223;
char* p_224;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_223=0;
    p_224=value;
    while(    *p_224    ) {
        result_223+=(*p_224);
        p_224++;
    }
    return result_223;
}

unsigned int string_get_hash_key(char* value){
int result_225;
char* p_226;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_225=0;
    p_226=value;
    while(    *p_226    ) {
        result_225+=(*p_226);
        p_226++;
    }
    return result_225;
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
_Bool result_227;
    result_227=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_227;
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
_Bool result_228;
    result_228=(c>=32&&c<=126);
    return result_228;
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
char* __result_obj__111;
int len_229;
void* __right_value94 = (void*)0;
char* result_230;
int i_231;
char* __result_obj__112;
    if(    str==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    len_229=strlen(str);
    result_230=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_229+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_231=0    ;    i_231<len_229    ;    i_231++    ){
        result_230[i_231]=str[len_229-i_231-1];
    }
    result_230[len_229]=0;
    __result_obj__112 = (char*)come_increment_ref_count(result_230);
    (result_230 = come_decrement_ref_count(result_230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value95 = (void*)0;
char* __result_obj__113;
int len_232;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
char* __result_obj__114;
void* __right_value98 = (void*)0;
char* __result_obj__115;
void* __right_value99 = (void*)0;
char* __result_obj__116;
void* __right_value100 = (void*)0;
char* result_233;
char* __result_obj__117;
    if(    str==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    len_232=strlen(str);
    if(    head<0    ) {
        head+=len_232;
    }
    if(    tail<0    ) {
        tail+=len_232+1;
    }
    if(    head>tail    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value97=charp_reverse(((char*)(__right_value96=charp_substring(str,tail,head)))))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_232    ) {
        tail=len_232;
    }
    if(    head==tail    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    tail-head+1<1    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    result_233=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_233,str+head,tail-head);
    result_233[tail-head]=0;
    __result_obj__117 = (char*)come_increment_ref_count(result_233);
    (result_233 = come_decrement_ref_count(result_233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__118;
int len_234;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__119;
void* __right_value104 = (void*)0;
char* __result_obj__120;
void* __right_value105 = (void*)0;
char* __result_obj__121;
void* __right_value106 = (void*)0;
char* result_235;
char* __result_obj__122;
    if(    str==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_234=strlen(str);
    if(    head<0    ) {
        head+=len_234;
    }
    if(    tail<0    ) {
        tail+=len_234+1;
    }
    if(    head>tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_234    ) {
        tail=len_234;
    }
    if(    head==tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    tail-head+1<1    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    result_235=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_235,str+head,tail-head);
    result_235[tail-head]=0;
    __result_obj__122 = (char*)come_increment_ref_count(result_235);
    (result_235 = come_decrement_ref_count(result_235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__123;
int len_236;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__124;
void* __right_value110 = (void*)0;
char* __result_obj__125;
void* __right_value111 = (void*)0;
char* __result_obj__126;
void* __right_value112 = (void*)0;
char* result_237;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_236=strlen(str);
    if(    head<0    ) {
        head+=len_236;
    }
    if(    tail<0    ) {
        tail+=len_236+1;
    }
    if(    head>tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_236    ) {
        tail=len_236;
    }
    if(    head==tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    tail-head+1<1    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result_237=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_237,str+head,tail-head);
    result_237[tail-head]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_237);
    (result_237 = come_decrement_ref_count(result_237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* xsprintf(char* msg, ...){
void* __right_value113 = (void*)0;
char* __result_obj__128;
va_list args_238;
char* result_239;
int len_240;
void* __right_value114 = (void*)0;
char* __result_obj__129;
void* __right_value115 = (void*)0;
char* result2_241;
char* __result_obj__130;
result_239 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    __builtin_va_start(args_238,msg);
    len_240=vasprintf(&result_239,msg,args_238);
    __builtin_va_end(args_238);
    if(    len_240<0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result2_241=(char*)come_increment_ref_count(__builtin_string(result_239));
    free(result_239);
    __result_obj__130 = (char*)come_increment_ref_count(result2_241);
    (result2_241 = come_decrement_ref_count(result2_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value116 = (void*)0;
char* __result_obj__131;
int len_242;
void* __right_value117 = (void*)0;
char* __result_obj__132;
void* __right_value118 = (void*)0;
char* __result_obj__133;
void* __right_value119 = (void*)0;
char* result_243;
char* __result_obj__134;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_242=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(str))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(str))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    tail>=len_242    ) {
        tail=len_242;
    }
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_242-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_243,str,head);
    memcpy(result_243+head,str+tail,len_242-tail);
    result_243[len_242-(tail-head)]=0;
    __result_obj__134 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_244;
struct list_item$1char$ph* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)    ) {
        prev_it_245=it_244;
        it_244=it_244->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value126 = (void*)0;
struct list_item$1char$ph* litem_249;
char* __dec_obj13;
void* __right_value127 = (void*)0;
struct list_item$1char$ph* litem_250;
char* __dec_obj14;
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_251;
char* __dec_obj15;
struct list$1char$ph* __result_obj__137;
    if(    self->len==0    ) {
        litem_249=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value126=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        __dec_obj13=litem_249->item,
        litem_249->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1    ) {
        litem_250=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value127=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        __dec_obj14=litem_250->item,
        litem_250->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        __dec_obj15=litem_251->item,
        litem_251->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result_obj__137 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__137;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct list$1char$ph* __result_obj__136;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1char$ph* result_246;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct buffer* str_247;
int i_248;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1char$ph* __result_obj__138;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value121=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value121, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__136;
    }
    result_246=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_248=0    ;    i_248<charp_length(self)    ;    i_248++    ){
        if(        self[i_248]==c        ) {
            list$1char$ph_push_back(result_246,(char*)come_increment_ref_count(__builtin_string(str_247->buf)));
            buffer_reset(str_247);
        }
        else {
            buffer_append_char(str_247,self[i_248]);
        }
    }
    if(    buffer_length(str_247)!=0    ) {
        list$1char$ph_push_back(result_246,(char*)come_increment_ref_count(__builtin_string(str_247->buf)));
    }
    __result_obj__138 = (struct list$1char$ph*)come_increment_ref_count(result_246);
    come_call_finalizer(list$1char$ph$p_finalize, result_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value131 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value131=xsprintf(msg,self))));
    (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value132 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value132=xsprintf(msg,self))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_printable(char* str){
int len_252;
void* __right_value133 = (void*)0;
char* result_253;
int n_254;
int i_255;
char c_256;
char* __result_obj__141;
    len_252=charp_length(str);
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_252*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_254=0;
    for(    i_255=0    ;    i_255<len_252    ;    i_255++    ){
        c_256=str[i_255];
        if(        (c_256>=0&&c_256<32)||c_256==127        ) {
            result_253[n_254++]=94;
            result_253[n_254++]=c_256+65-1;
        }
        else {
            result_253[n_254++]=c_256;
        }
    }
    result_253[n_254]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value134 = (void*)0;
char* __result_obj__142;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct buffer* result_257;
char* p_258;
char* p2_259;
void* __right_value137 = (void*)0;
char* __result_obj__143;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(self))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_258=self;
    while(    (_Bool)1    ) {
        p2_259=strstr(p_258,str);
        if(        p2_259==((void*)0)        ) {
            p2_259=p_258;
            while(            *p2_259            ) {
                p2_259++;
            }
            buffer_append(result_257,p_258,p2_259-p_258);
            break;
        }
        buffer_append(result_257,p_258,p2_259-p_258);
        buffer_append_str(result_257,replace);
        p_258=p2_259+strlen(str);
    }
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value137=buffer_to_string(result_257))));
    come_call_finalizer(buffer_finalize, result_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* xbasename(char* path){
void* __right_value138 = (void*)0;
char* __result_obj__144;
char* p_260;
void* __right_value139 = (void*)0;
char* __result_obj__145;
void* __right_value140 = (void*)0;
char* __result_obj__146;
void* __right_value141 = (void*)0;
char* __result_obj__147;
    if(    path==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(""))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    p_260=path+strlen(path);
    while(    p_260>=path    ) {
        if(        *p_260==47        ) {
            break;
        }
        else {
            p_260--;
        }
    }
    if(    p_260<path    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(path))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    else {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(p_260+1))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xnoextname(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__148;
void* __right_value143 = (void*)0;
char* path2_261;
char* p_262;
void* __right_value144 = (void*)0;
char* __result_obj__149;
void* __right_value145 = (void*)0;
char* __result_obj__150;
void* __right_value146 = (void*)0;
char* __result_obj__151;
    if(    path==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    path2_261=(char*)come_increment_ref_count(xbasename(path));
    p_262=path2_261+strlen(path2_261);
    while(    p_262>=path2_261    ) {
        if(        *p_262==46        ) {
            break;
        }
        else {
            p_262--;
        }
    }
    if(    p_262<path2_261    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(path2_261))));
        (path2_261 = come_decrement_ref_count(path2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value145=charp_substring(path2_261,0,p_262-path2_261))));
        (path2_261 = come_decrement_ref_count(path2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
    (path2_261 = come_decrement_ref_count(path2_261, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* xextname(char* path){
void* __right_value147 = (void*)0;
char* __result_obj__152;
char* p_263;
void* __right_value148 = (void*)0;
char* __result_obj__153;
void* __right_value149 = (void*)0;
char* __result_obj__154;
void* __right_value150 = (void*)0;
char* __result_obj__155;
    if(    path==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    p_263=path+strlen(path);
    while(    p_263>=path    ) {
        if(        *p_263==46        ) {
            break;
        }
        else {
            p_263--;
        }
    }
    if(    p_263<path    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(p_263+1))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* bool_to_string(_Bool self){
void* __right_value151 = (void*)0;
char* __result_obj__156;
void* __right_value152 = (void*)0;
char* __result_obj__157;
    if(    self    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string("true"))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    else {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string("false"))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value153 = (void*)0;
char* __result_obj__158;
void* __right_value154 = (void*)0;
char* __result_obj__159;
    if(    self    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("true"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("false"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
}

char* char_to_string(char self){
void* __right_value155 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value155=xsprintf("%c",self))));
    (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* short_to_string(short self){
void* __right_value156 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf("%d",self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* int_to_string(int self){
void* __right_value157 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%d",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* long_to_string(long self){
void* __right_value158 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%ld",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value159 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%ld",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* float_to_string(float self){
void* __right_value160 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%f",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* double_to_string(double self){
void* __right_value161 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%lf",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* string_to_string(char* self){
void* __right_value162 = (void*)0;
char* __result_obj__167;
void* __right_value163 = (void*)0;
char* __result_obj__168;
    if(    self==((void*)0)    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value162=__builtin_string(""))));
        (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* charp_to_string(char* self){
void* __right_value164 = (void*)0;
char* __result_obj__169;
void* __right_value165 = (void*)0;
char* __result_obj__170;
    if(    self==((void*)0)    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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

char* charp_puts(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__171;
void* __right_value167 = (void*)0;
char* __result_obj__172;
    if(    self==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    puts(self);
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_print(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__173;
void* __right_value169 = (void*)0;
char* __result_obj__174;
    if(    self==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    printf("%s",self);
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* charp_printf(char* self, ...){
void* __right_value170 = (void*)0;
char* __result_obj__175;
char* msg2_264;
va_list args_265;
void* __right_value171 = (void*)0;
char* __result_obj__176;
msg2_264 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __builtin_va_start(args_265,self);
    vasprintf(&msg2_264,self,args_265);
    __builtin_va_end(args_265);
    printf("%s",msg2_264);
    free(msg2_264);
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_266;
    for(    i_266=0    ;    i_266<self    ;    i_266++    ){
        block(parent,i_266);
    }
}

