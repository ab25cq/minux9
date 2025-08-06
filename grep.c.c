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
memset(&_ret_2, 0, sizeof(long));
memset(&_ret_3, 0, sizeof(long));
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
    ({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");     while(    1    ) {
        ;
    }
    });come_heap_final();
}

void* sbrk(long incr){
char* current_brk_4;
void* __result_obj__1;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
    current_brk_4=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_4==(char*)-1    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    if(    incr==0    ) {
        __result_obj__2 = current_brk_4;
        return __result_obj__2;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_4+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__3 = (void*)-1;
        return __result_obj__3;
    }
    __result_obj__4 = current_brk_4;
    return __result_obj__4;
}

struct header* morecore(unsigned int nunits){
char* cp_5;
struct header* up_6;
struct header* __result_obj__5;
struct header* __result_obj__6;
cp_5 = (void*)0;
up_6 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_5=sbrk(nunits*sizeof(struct header));
    if(    cp_5==(char*)-1    ) {
        __result_obj__5 = (void*)0;
        return __result_obj__5;
    }
    up_6=(struct header*)cp_5;
    up_6->size=nunits;
    free((void*)(up_6+1));
    __result_obj__6 = freep;
    return __result_obj__6;
}

void* malloc(unsigned int nbytes){
struct header* p_7;
struct header* prevp_8;
unsigned int nunits_9;
void* __result_obj__7;
void* __result_obj__8;
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
            __result_obj__7 = (void*)(p_7+1);
            return __result_obj__7;
        }
        if(        p_7==freep        ) {
            if(            (p_7=morecore(nunits_9))==0            ) {
                __result_obj__8 = (void*)0;
                return __result_obj__8;
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
void* __result_obj__9;
void* ptr_13;
void* __result_obj__10;
    total_size_12=nmemb*size;
    if(    total_size_12==0    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    ptr_13=malloc(total_size_12);
    if(    ptr_13!=((void*)0)    ) {
        memset(ptr_13,0,total_size_12);
    }
    __result_obj__10 = ptr_13;
    return __result_obj__10;
}

char* strdup(const char* s){
char* s2_14;
unsigned long  int len_15;
char* p_16;
char* __result_obj__11;
    s2_14=s;
    len_15=strlen(s2_14)+1;
    p_16=malloc(len_15);
    if(    p_16    ) {
        memcpy(p_16,s2_14,len_15);
    }
    __result_obj__11 = p_16;
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
        const char* h_17=haystack;
        const char* n_18=needle;
        while(        *h_17&&*n_18&&(*h_17==*n_18)        ) {
            h_17++;
            n_18++;
        }
        if(        !*n_18        ) {
            __result_obj__13 = (char*)haystack;
            return __result_obj__13;
        }
    }
    __result_obj__14 = ((void*)0);
    return __result_obj__14;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_19;
int i_20;
void* __result_obj__15;
    cdst_19=(char*)dst;
    for(    i_20=0    ;    i_20<n    ;    i_20++    ){
        cdst_19[i_20]=c;
    }
    __result_obj__15 = dst;
    return __result_obj__15;
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
void* __result_obj__16;
void* __result_obj__17;
s_23 = (void*)0;
d_24 = (void*)0;
    if(    n==0    ) {
        __result_obj__16 = dst;
        return __result_obj__16;
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
char* os_25;
char* __result_obj__19;
os_25 = (void*)0;
    os_25=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__19 = os_25;
    return __result_obj__19;
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
char* __result_obj__20;
    d_27=dest;
    while(    *d_27    ) {
        d_27++;
    }
    while(    n--&&*src    ) {
        *d_27++=*src++;
    }
    *d_27=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

char* strtok(char* s, const char* delim){
static char* next_28;
char* start_29;
char* p_30;
char* __result_obj__21;
int is_delim_32;
char* __result_obj__22;
int is_delim_34;
char* __result_obj__23;
next_28 = (void*)0;
start_29 = (void*)0;
p_30 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_28=s;
    }
    if(    next_28==((void*)0)    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
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
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
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
    __result_obj__23 = start_29;
    return __result_obj__23;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_35;
int i_37;
int negative_38;
char* __result_obj__24;
int digit_39;
char* __result_obj__25;
    p_35=buf;
    char tmp_36[32];
    memset(&tmp_36, 0, sizeof(char)    *(32)    );
    i_37=0;
    negative_38=0;
    if(    base<2||base>16    ) {
        *p_35=0;
        __result_obj__24 = p_35;
        return __result_obj__24;
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
    __result_obj__25 = buf;
    return __result_obj__25;
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

void putchar(char c){
long _ret_55;
memset(&_ret_55, 0, sizeof(long));
    ({_ret_55; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&c);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_55=_a0; _ret_55; });
}

void printint(int val_, int base, int sign){
int i_57;
int negative_58;
unsigned int uval_59;
int digit_60;
memset(&uval_59, 0, sizeof(unsigned int));
    char buf_56[33];
    memset(&buf_56, 0, sizeof(char)    *(33)    );
    i_57=0;
    negative_58=0;
    if(    sign&&val_<0    ) {
        negative_58=1;
        uval_59=-val_;
    }
    else {
        uval_59=(unsigned int)val_;
    }
    if(    uval_59==0    ) {
        putchar(48);
        return;
    }
    while(    uval_59>0    ) {
        digit_60=uval_59%base;
        buf_56[i_57++]=((digit_60<10)?(48+digit_60):(97+(digit_60-10)));
        uval_59/=base;
    }
    if(    negative_58    ) {
        putchar(45);
    }
    while(    --i_57>=0    ) {
        putchar(buf_56[i_57]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_62;
int negative_63;
int digit_64;
    char buf_61[65];
    memset(&buf_61, 0, sizeof(char)    *(65)    );
    i_62=0;
    negative_63=0;
    if(    sign&&(long)val_<0    ) {
        negative_63=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_64=val_%base;
        buf_61[i_62++]=((digit_64<10)?(48+digit_64):(97+(digit_64-10)));
        val_/=base;
    }
    if(    negative_63    ) {
        putchar(45);
    }
    while(    --i_62>=0    ) {
        putchar(buf_61[i_62]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_66;
int negative_67;
int digit_68;
    char buf_65[65];
    memset(&buf_65, 0, sizeof(char)    *(65)    );
    i_66=0;
    negative_67=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_67=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_68=val_%base;
        buf_65[i_66++]=((digit_68<10)?(48+digit_68):(97+(digit_68-10)));
        val_/=base;
    }
    if(    negative_67    ) {
        putchar(45);
    }
    while(    --i_66>=0    ) {
        putchar(buf_65[i_66]);
    }
}

int printf(const char* fmt, ...){
va_list ap_69;
const char* p_70;
int lcount_71;
unsigned long  int val__72;
unsigned long  long val__73;
long val__74;
long long val__75;
int i_76;
int val__77;
unsigned int val__78;
unsigned long  int val__79;
char c_81;
memset(&ap_69, 0, sizeof(va_list));
p_70 = (void*)0;
    __builtin_va_start(ap_69,fmt);
    for(    p_70=fmt    ;    *p_70    ;    p_70++    ){
        if(        *p_70!=37        ) {
            putchar(*p_70);
            continue;
        }
        p_70++;
        if(        *p_70==108        ) {
            lcount_71=1;
            if(            *(p_70+1)==108            ) {
                lcount_71=2;
                p_70++;
            }
            p_70++;
            switch (            *p_70) {
                case 120:
                {
                    if(                    lcount_71==1                    ) {
                        val__72=__builtin_va_arg(ap_69,unsigned long  int);
                        printlong(val__72,16,0);
                    }
                    else {
                        val__73=__builtin_va_arg(ap_69,unsigned long  long);
                        printlonglong(val__73,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_71==1                    ) {
                        val__74=__builtin_va_arg(ap_69,long);
                        printlong(val__74,10,1);
                    }
                    else {
                        val__75=__builtin_va_arg(ap_69,long  long);
                        printlonglong(val__75,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_76=0                    ;                    i_76<lcount_71                    ;                    i_76++                    ){
                        putchar(108);
                    }
                    putchar(*p_70);
                    break;
                }
            }
        }
        else {
            switch (            *p_70) {
                case 100:
                {
                    val__77=__builtin_va_arg(ap_69,int);
                    printint(val__77,10,1);
                    break;
                }
                case 120:
                {
                    val__78=__builtin_va_arg(ap_69,unsigned int);
                    printint(val__78,16,0);
                    break;
                }
                case 112:
                {
                    val__79=(unsigned long  int)__builtin_va_arg(ap_69,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__79,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_80=__builtin_va_arg(ap_69,const char*);
                    if(                    !s_80                    ) {
                        s_80="(null)";
                    }
                    while(                    *s_80                    ) {
                        putchar(*s_80++);
                    }
                    break;
                }
                case 99:
                {
                    c_81=(char)__builtin_va_arg(ap_69,int);
                    putchar(c_81);
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
                    putchar(*p_70);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_69);
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
void* result_82;
void* __result_obj__27;
    result_82=((void*)0);
    size=(size+7&~7);
    result_82=calloc(1,size);
    __result_obj__27 = result_82;
    return __result_obj__27;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_83;
struct sMemHeaderTiny* prev_it_84;
struct sMemHeaderTiny* next_it_85;
unsigned long  int size_86;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_83=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_83->allocated!=177783            ) {
                return;
            }
            it_83->allocated=0;
            prev_it_84=it_83->prev;
            next_it_85=it_83->next;
            if(            gAllocMem==it_83            ) {
                gAllocMem=(struct sMemHeader*)next_it_85;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_84                ) {
                    prev_it_84->next=next_it_85;
                }
                if(                next_it_85                ) {
                    next_it_85->prev=prev_it_84;
                }
            }
            size_86=it_83->size;
            free(it_83);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_87;
struct sMemHeaderTiny* it_88;
void* __result_obj__28;
    if(    gComeDebugLib    ) {
    }
    else {
        result_87=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_88=result_87;
        it_88->allocated=177783;
        it_88->class_name=class_name;
        it_88->sname=sname;
        it_88->sline=sline;
        it_88->size=size+sizeof(struct sMemHeaderTiny);
        it_88->free_next=((void*)0);
        it_88->next=(struct sMemHeaderTiny*)gAllocMem;
        it_88->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_88;
        }
        gAllocMem=(struct sMemHeader*)it_88;
        gNumAlloc++;
        __result_obj__28 = (char*)result_87+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_89;
char* __result_obj__29;
struct sMemHeaderTiny* it_90;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_89=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_89->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_89);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__29 = it_89->class_name;
        return __result_obj__29;
    }
    else {
        it_90=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_90->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_90);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__30 = it_90->class_name;
        return __result_obj__30;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_91;
unsigned long  int* ref_count_92;
unsigned long  int* size2_93;
void* __result_obj__31;
    mem_91=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_92=(unsigned long  int*)mem_91;
    *ref_count_92=0;
    size2_93=(unsigned long  int*)(mem_91+sizeof(unsigned long  int));
    *size2_93=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_91+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_94;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_94=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_95;
unsigned long  int* size_p_96;
unsigned long  int size_97;
void* result_98;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_95=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_96=(unsigned long  int*)(mem_95+sizeof(unsigned long  int));
    size_97=*size_p_96-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_98=come_calloc_v2(1,size_97,sname,sline,class_name);
    memcpy(result_98,block,size_97);
    __result_obj__33 = result_98;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_99;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_99=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_99)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_100;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_100=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_100);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_101;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_101=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_101;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_102;
unsigned long  int count_103;
void (*finalizer_104)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_104, 0, sizeof(void (*)(void*)));
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
    ref_count_102=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_102)--;
    }
    count_103=*ref_count_102;
    if(    !no_free&&count_103<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_104=protocol_fun;
            finalizer_104(protocol_obj);
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
void (*finalizer_105)(void*);
void (*finalizer_106)(void*);
void (*finalizer_107)(void*);
unsigned long  int* ref_count_108;
unsigned long  int count_109;
void (*finalizer_110)(void*);
void (*finalizer_111)(void*);
void (*finalizer_112)(void*);
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_110, 0, sizeof(void (*)(void*)));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
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
                finalizer_105=protocol_fun;
                finalizer_105(protocol_obj);
            }
            finalizer_106=fun;
            finalizer_106(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_107=protocol_fun;
                finalizer_107(protocol_obj);
            }
        }
    }
    else {
        ref_count_108=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_108)--;
        }
        count_109=*ref_count_108;
        if(        !no_free&&count_109<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_110=protocol_fun;
                        finalizer_110(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_111=fun;
                        finalizer_111(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_112=protocol_fun;
                        finalizer_112(protocol_obj);
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
int len_113;
void* __right_value1 = (void*)0;
char* result_114;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_113=strlen(str)+1;
    result_114=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_113)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_114,str,len_113);
    __result_obj__43 = (char*)come_increment_ref_count(result_114);
    (result_114 = come_decrement_ref_count(result_114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct buffer* result_115;
void* __right_value6 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__48 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__48;
    }
    result_115=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_115->size=self->size;
    __dec_obj3=result_115->buf,
    result_115->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_115->len=self->len;
    memcpy(result_115->buf,self->buf,self->len);
    __result_obj__49 = (struct buffer*)come_increment_ref_count(result_115);
    come_call_finalizer(buffer_finalize, result_115, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_116;
int old_len_117;
int new_size_118;
void* __right_value10 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__52;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__51 = self;
        return __result_obj__51;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_116=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_116,self->buf,self->size);
        old_len_117=self->len;
        new_size_118=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_118)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_116,old_len_117);
        self->buf[old_len_117]=0;
        self->size=new_size_118;
        (old_buf_116 = come_decrement_ref_count(old_buf_116, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_119;
int old_len_120;
int new_size_121;
void* __right_value12 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__54;
    if(    self==((void*)0)    ) {
        __result_obj__53 = ((void*)0);
        return __result_obj__53;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_119=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_120=self->len;
        new_size_121=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_121)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_119,old_len_120);
        self->buf[old_len_120]=0;
        self->size=new_size_121;
        (old_buf_119 = come_decrement_ref_count(old_buf_119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__55;
int size_122;
void* __right_value13 = (void*)0;
char* old_buf_123;
int old_len_124;
int new_size_125;
void* __right_value14 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    size_122=strlen(mem);
    if(    self->len+size_122+1+1>=self->size    ) {
        old_buf_123=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_123,self->buf,self->size);
        old_len_124=self->len;
        new_size_125=(self->size+size_122+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_125)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_123,old_len_124);
        self->buf[old_len_124]=0;
        self->size=new_size_125;
        (old_buf_123 = come_decrement_ref_count(old_buf_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_122);
    self->len+=size_122;
    self->buf[self->len]=0;
    __result_obj__56 = self;
    return __result_obj__56;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__57;
va_list args_126;
char* result_127;
int len_128;
struct buffer* __result_obj__58;
void* __right_value15 = (void*)0;
char* mem_129;
int size_130;
void* __right_value16 = (void*)0;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* __right_value17 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__59;
result_127 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    __builtin_va_start(args_126,msg);
    len_128=vasprintf(&result_127,msg,args_126);
    __builtin_va_end(args_126);
    if(    len_128<0    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    mem_129=(char*)come_increment_ref_count(__builtin_string(result_127));
    size_130=strlen(mem_129);
    if(    self->len+size_130+1+1>=self->size    ) {
        old_buf_131=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_131,self->buf,self->size);
        old_len_132=self->len;
        new_size_133=(self->size+size_130+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_133)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
        (old_buf_131 = come_decrement_ref_count(old_buf_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_129,size_130);
    self->len+=size_130;
    self->buf[self->len]=0;
    free(result_127);
    __result_obj__59 = self;
    (mem_129 = come_decrement_ref_count(mem_129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__59;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__60;
int size_134;
void* __right_value18 = (void*)0;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value19 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__61;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    size_134=strlen(mem)+1;
    if(    self->len+size_134+1+1+1>=self->size    ) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_137)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        (old_buf_135 = come_decrement_ref_count(old_buf_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__62;
int* mem_138;
int size_139;
void* __right_value20 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value21 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_138=&value;
    size_139=sizeof(int);
    if(    self->len+size_139+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_138,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_143;
int size_144;
void* __right_value22 = (void*)0;
char* old_buf_145;
int old_len_146;
int new_size_147;
void* __right_value23 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__64;
    mem_143=&value;
    size_144=sizeof(long);
    if(    self->len+size_144+1+1>=self->size    ) {
        old_buf_145=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_145,self->buf,self->size);
        old_len_146=self->len;
        new_size_147=(self->size+size_144+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_147)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_145,old_len_146);
        self->buf[old_len_146]=0;
        self->size=new_size_147;
        (old_buf_145 = come_decrement_ref_count(old_buf_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_143,size_144);
    self->len+=size_144;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__65;
short* mem_148;
int size_149;
void* __right_value24 = (void*)0;
char* old_buf_150;
int old_len_151;
int new_size_152;
void* __right_value25 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    mem_148=&value;
    size_149=sizeof(short);
    if(    self->len+size_149+1+1>=self->size    ) {
        old_buf_150=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_150,self->buf,self->size);
        old_len_151=self->len;
        new_size_152=(self->size+size_149+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_152)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_150,old_len_151);
        self->buf[old_len_151]=0;
        self->size=new_size_152;
        (old_buf_150 = come_decrement_ref_count(old_buf_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_148,size_149);
    self->len+=size_149;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__67;
int len_153;
int new_size_154;
void* __right_value26 = (void*)0;
char* __dec_obj12;
int i_155;
struct buffer* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__67 = ((void*)0);
        return __result_obj__67;
    }
    len_153=self->len;
    len_153=(len_153+3)&~3;
    if(    len_153>=self->size    ) {
        new_size_154=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_154;
    }
    for(    i_155=self->len    ;    i_155<len_153    ;    i_155++    ){
        self->buf[i_155]=0;
    }
    self->len=len_153;
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
struct buffer* result_156;
struct buffer* __result_obj__69;
struct buffer* __result_obj__70;
    result_156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__69 = (struct buffer*)come_increment_ref_count(result_156);
        come_call_finalizer(buffer_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    buffer_append_str(result_156,self);
    __result_obj__70 = (struct buffer*)come_increment_ref_count(result_156);
    come_call_finalizer(buffer_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_157;
struct buffer* __result_obj__74;
    result_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_157,self,sizeof(char)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_157);
    come_call_finalizer(buffer_finalize, result_157, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_158;
int i_159;
struct buffer* __result_obj__75;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_159=0    ;    i_159<len    ;    i_159++    ){
        buffer_append(result_158,self[i_159],strlen(self[i_159]));
    }
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_160;
struct buffer* __result_obj__76;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_160,(char*)self,sizeof(short)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_160);
    come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__77;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_161,(char*)self,sizeof(int)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__78;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_162,(char*)self,sizeof(long)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_163;
struct buffer* __result_obj__79;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_163,(char*)self,sizeof(float)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_164;
struct buffer* __result_obj__80;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_164,(char*)self,sizeof(double)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* buffer_printable(struct buffer* self){
int len_165;
void* __right_value45 = (void*)0;
char* result_166;
int n_167;
int i_168;
unsigned char c_169;
char* __result_obj__81;
    len_165=self->len;
    result_166=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_165*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_167=0;
    for(    i_168=0    ;    i_168<len_165    ;    i_168++    ){
        c_169=self->buf[i_168];
        if(        (c_169>=0&&c_169<32)||c_169==127        ) {
            result_166[n_167++]=94;
            result_166[n_167++]=c_169+65-1;
        }
        else if(        c_169>127        ) {
            result_166[n_167++]=63;
        }
        else {
            result_166[n_167++]=c_169;
        }
    }
    result_166[n_167]=0;
    __result_obj__81 = (char*)come_increment_ref_count(result_166);
    (result_166 = come_decrement_ref_count(result_166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_170;
struct list$1char$* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0    ;    i_170<num_value    ;    i_170++    ){
        list$1char$_push_back(self,values[i_170]);
    }
    __result_obj__83 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value47 = (void*)0;
struct list_item$1char$* litem_171;
void* __right_value48 = (void*)0;
struct list_item$1char$* litem_172;
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_173;
struct list$1char$* __result_obj__82;
    if(    self->len==0    ) {
        litem_171=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value47=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1    ) {
        litem_172=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value48=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_174;
struct list_item$1char$* prev_it_175;
    it_174=self->head;
    while(    it_174!=((void*)0)    ) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_176;
struct list$1char$p* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0    ;    i_176<num_value    ;    i_176++    ){
        list$1char$p_push_back(self,values[i_176]);
    }
    __result_obj__86 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value52 = (void*)0;
struct list_item$1char$p* litem_177;
void* __right_value53 = (void*)0;
struct list_item$1char$p* litem_178;
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_179;
struct list$1char$p* __result_obj__85;
    if(    self->len==0    ) {
        litem_177=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value52=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1    ) {
        litem_178=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value53=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_179->prev=self->tail;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail->next=litem_179;
        self->tail=litem_179;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_180;
struct list_item$1char$p* prev_it_181;
    it_180=self->head;
    while(    it_180!=((void*)0)    ) {
        prev_it_181=it_180;
        it_180=it_180->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_182;
struct list$1short$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0    ;    i_182<num_value    ;    i_182++    ){
        list$1short$_push_back(self,values[i_182]);
    }
    __result_obj__89 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value57 = (void*)0;
struct list_item$1short$* litem_183;
void* __right_value58 = (void*)0;
struct list_item$1short$* litem_184;
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_185;
struct list$1short$* __result_obj__88;
    if(    self->len==0    ) {
        litem_183=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value57=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1    ) {
        litem_184=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value58=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_186;
struct list_item$1short$* prev_it_187;
    it_186=self->head;
    while(    it_186!=((void*)0)    ) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_188;
struct list$1int$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0    ;    i_188<num_value    ;    i_188++    ){
        list$1int$_push_back(self,values[i_188]);
    }
    __result_obj__92 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value62 = (void*)0;
struct list_item$1int$* litem_189;
void* __right_value63 = (void*)0;
struct list_item$1int$* litem_190;
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_191;
struct list$1int$* __result_obj__91;
    if(    self->len==0    ) {
        litem_189=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value62=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1    ) {
        litem_190=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value63=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_192;
struct list_item$1int$* prev_it_193;
    it_192=self->head;
    while(    it_192!=((void*)0)    ) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_194;
struct list$1long$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_194=0    ;    i_194<num_value    ;    i_194++    ){
        list$1long$_push_back(self,values[i_194]);
    }
    __result_obj__95 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value67 = (void*)0;
struct list_item$1long$* litem_195;
void* __right_value68 = (void*)0;
struct list_item$1long$* litem_196;
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_197;
struct list$1long$* __result_obj__94;
    if(    self->len==0    ) {
        litem_195=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value67=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_195->prev=((void*)0);
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head=litem_195;
    }
    else if(    self->len==1    ) {
        litem_196=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value68=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_196->prev=self->head;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head->next=litem_196;
    }
    else {
        litem_197=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_197->prev=self->tail;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail->next=litem_197;
        self->tail=litem_197;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_198;
struct list_item$1long$* prev_it_199;
    it_198=self->head;
    while(    it_198!=((void*)0)    ) {
        prev_it_199=it_198;
        it_198=it_198->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_200;
struct list$1float$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_200=0    ;    i_200<num_value    ;    i_200++    ){
        list$1float$_push_back(self,values[i_200]);
    }
    __result_obj__98 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value72 = (void*)0;
struct list_item$1float$* litem_201;
void* __right_value73 = (void*)0;
struct list_item$1float$* litem_202;
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_203;
struct list$1float$* __result_obj__97;
    if(    self->len==0    ) {
        litem_201=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value72=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1    ) {
        litem_202=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value73=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_204;
struct list_item$1float$* prev_it_205;
    it_204=self->head;
    while(    it_204!=((void*)0)    ) {
        prev_it_205=it_204;
        it_204=it_204->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int i_206;
struct list$1double$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_206=0    ;    i_206<num_value    ;    i_206++    ){
        list$1double$_push_back(self,values[i_206]);
    }
    __result_obj__101 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value77 = (void*)0;
struct list_item$1double$* litem_207;
void* __right_value78 = (void*)0;
struct list_item$1double$* litem_208;
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_209;
struct list$1double$* __result_obj__100;
    if(    self->len==0    ) {
        litem_207=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value77=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1    ) {
        litem_208=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value78=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_210;
struct list_item$1double$* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_212;
void* __right_value82 = (void*)0;
char* result_213;
char* __result_obj__104;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value81=__builtin_string(""))));
        (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    len_212=strlen(self)+strlen(right);
    result_213=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_212+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_213,self,len_212+1);
    strncat(result_213,right,len_212+1);
    __result_obj__104 = (char*)come_increment_ref_count(result_213);
    (result_213 = come_decrement_ref_count(result_213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* string_operator_add(char* self, char* right){
void* __right_value83 = (void*)0;
char* __result_obj__105;
int len_214;
void* __right_value84 = (void*)0;
char* result_215;
char* __result_obj__106;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    len_214=strlen(self)+strlen(right);
    result_215=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_214+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_215,self,len_214+1);
    strncat(result_215,right,len_214+1);
    __result_obj__106 = (char*)come_increment_ref_count(result_215);
    (result_215 = come_decrement_ref_count(result_215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
}

char* charp_operator_mult(char* self, int right){
void* __right_value85 = (void*)0;
char* __result_obj__107;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct buffer* buf_216;
int i_217;
void* __right_value88 = (void*)0;
char* __result_obj__108;
    if(    self==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    buf_216=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_217=0    ;    i_217<right    ;    i_217++    ){
        buffer_append_str(buf_216,self);
    }
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value88=buffer_to_string(buf_216))));
    come_call_finalizer(buffer_finalize, buf_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__109;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_218;
int i_219;
void* __right_value92 = (void*)0;
char* __result_obj__110;
    if(    self==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    buf_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_219=0    ;    i_219<right    ;    i_219++    ){
        buffer_append_str(buf_218,self);
    }
    __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_218))));
    come_call_finalizer(buffer_finalize, buf_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_220;
int i_221;
    result_220=(_Bool)0;
    for(    i_221=0    ;    i_221<len    ;    i_221++    ){
        if(        strncmp(self[i_221],str,strlen(self[i_221]))==0        ) {
            result_220=(_Bool)1;
            break;
        }
    }
    return result_220;
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
int result_222;
char* p_223;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_222=0;
    p_223=value;
    while(    *p_223    ) {
        result_222+=(*p_223);
        p_223++;
    }
    return result_222;
}

unsigned int string_get_hash_key(char* value){
int result_224;
char* p_225;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_224=0;
    p_225=value;
    while(    *p_225    ) {
        result_224+=(*p_225);
        p_225++;
    }
    return result_224;
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
_Bool result_226;
    result_226=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_226;
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
_Bool result_227;
    result_227=(c>=32&&c<=126);
    return result_227;
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
int len_228;
void* __right_value94 = (void*)0;
char* result_229;
int i_230;
char* __result_obj__112;
    if(    str==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    len_228=strlen(str);
    result_229=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_228+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_230=0    ;    i_230<len_228    ;    i_230++    ){
        result_229[i_230]=str[len_228-i_230-1];
    }
    result_229[len_228]=0;
    __result_obj__112 = (char*)come_increment_ref_count(result_229);
    (result_229 = come_decrement_ref_count(result_229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value95 = (void*)0;
char* __result_obj__113;
int len_231;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
char* __result_obj__114;
void* __right_value98 = (void*)0;
char* __result_obj__115;
void* __right_value99 = (void*)0;
char* __result_obj__116;
void* __right_value100 = (void*)0;
char* result_232;
char* __result_obj__117;
    if(    str==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    len_231=strlen(str);
    if(    head<0    ) {
        head+=len_231;
    }
    if(    tail<0    ) {
        tail+=len_231+1;
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
    if(    tail>=len_231    ) {
        tail=len_231;
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
    result_232=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_232,str+head,tail-head);
    result_232[tail-head]=0;
    __result_obj__117 = (char*)come_increment_ref_count(result_232);
    (result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__118;
int len_233;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__119;
void* __right_value104 = (void*)0;
char* __result_obj__120;
void* __right_value105 = (void*)0;
char* __result_obj__121;
void* __right_value106 = (void*)0;
char* result_234;
char* __result_obj__122;
    if(    str==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_233=strlen(str);
    if(    head<0    ) {
        head+=len_233;
    }
    if(    tail<0    ) {
        tail+=len_233+1;
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
    if(    tail>=len_233    ) {
        tail=len_233;
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
    result_234=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_234,str+head,tail-head);
    result_234[tail-head]=0;
    __result_obj__122 = (char*)come_increment_ref_count(result_234);
    (result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__123;
int len_235;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__124;
void* __right_value110 = (void*)0;
char* __result_obj__125;
void* __right_value111 = (void*)0;
char* __result_obj__126;
void* __right_value112 = (void*)0;
char* result_236;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_235=strlen(str);
    if(    head<0    ) {
        head+=len_235;
    }
    if(    tail<0    ) {
        tail+=len_235+1;
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
    if(    tail>=len_235    ) {
        tail=len_235;
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
    result_236=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_236,str+head,tail-head);
    result_236[tail-head]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* xsprintf(char* msg, ...){
void* __right_value113 = (void*)0;
char* __result_obj__128;
va_list args_237;
char* result_238;
int len_239;
void* __right_value114 = (void*)0;
char* __result_obj__129;
void* __right_value115 = (void*)0;
char* result2_240;
char* __result_obj__130;
result_238 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    __builtin_va_start(args_237,msg);
    len_239=vasprintf(&result_238,msg,args_237);
    __builtin_va_end(args_237);
    if(    len_239<0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result2_240=(char*)come_increment_ref_count(__builtin_string(result_238));
    free(result_238);
    __result_obj__130 = (char*)come_increment_ref_count(result2_240);
    (result2_240 = come_decrement_ref_count(result2_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value116 = (void*)0;
char* __result_obj__131;
int len_241;
void* __right_value117 = (void*)0;
char* __result_obj__132;
void* __right_value118 = (void*)0;
char* __result_obj__133;
void* __right_value119 = (void*)0;
char* result_242;
char* __result_obj__134;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_241=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(str))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head+=len_241;
    }
    if(    tail<0    ) {
        tail+=len_241+1;
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
    if(    tail>=len_241    ) {
        tail=len_241;
    }
    result_242=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_241-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_242,str,head);
    memcpy(result_242+head,str+tail,len_241-tail);
    result_242[len_241-(tail-head)]=0;
    __result_obj__134 = (char*)come_increment_ref_count(result_242);
    (result_242 = come_decrement_ref_count(result_242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_243;
struct list_item$1char$ph* prev_it_244;
    it_243=self->head;
    while(    it_243!=((void*)0)    ) {
        prev_it_244=it_243;
        it_243=it_243->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value126 = (void*)0;
struct list_item$1char$ph* litem_248;
char* __dec_obj13;
void* __right_value127 = (void*)0;
struct list_item$1char$ph* litem_249;
char* __dec_obj14;
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_250;
char* __dec_obj15;
struct list$1char$ph* __result_obj__137;
    if(    self->len==0    ) {
        litem_248=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value126=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_248->prev=((void*)0);
        litem_248->next=((void*)0);
        __dec_obj13=litem_248->item,
        litem_248->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_248;
        self->head=litem_248;
    }
    else if(    self->len==1    ) {
        litem_249=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value127=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_249->prev=self->head;
        litem_249->next=((void*)0);
        __dec_obj14=litem_249->item,
        litem_249->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_249;
        self->head->next=litem_249;
    }
    else {
        litem_250=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_250->prev=self->tail;
        litem_250->next=((void*)0);
        __dec_obj15=litem_250->item,
        litem_250->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_250;
        self->tail=litem_250;
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
struct list$1char$ph* result_245;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct buffer* str_246;
int i_247;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1char$ph* __result_obj__138;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value121=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value121, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__136;
    }
    result_245=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_246=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_247=0    ;    i_247<charp_length(self)    ;    i_247++    ){
        if(        self[i_247]==c        ) {
            list$1char$ph_push_back(result_245,(char*)come_increment_ref_count(__builtin_string(str_246->buf)));
            buffer_reset(str_246);
        }
        else {
            buffer_append_char(str_246,self[i_247]);
        }
    }
    if(    buffer_length(str_246)!=0    ) {
        list$1char$ph_push_back(result_245,(char*)come_increment_ref_count(__builtin_string(str_246->buf)));
    }
    __result_obj__138 = (struct list$1char$ph*)come_increment_ref_count(result_245);
    come_call_finalizer(list$1char$ph$p_finalize, result_245, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_246, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_251;
void* __right_value133 = (void*)0;
char* result_252;
int n_253;
int i_254;
char c_255;
char* __result_obj__141;
    len_251=charp_length(str);
    result_252=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_251*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_253=0;
    for(    i_254=0    ;    i_254<len_251    ;    i_254++    ){
        c_255=str[i_254];
        if(        (c_255>=0&&c_255<32)||c_255==127        ) {
            result_252[n_253++]=94;
            result_252[n_253++]=c_255+65-1;
        }
        else {
            result_252[n_253++]=c_255;
        }
    }
    result_252[n_253]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_252);
    (result_252 = come_decrement_ref_count(result_252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value134 = (void*)0;
char* __result_obj__142;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct buffer* result_256;
char* p_257;
char* p2_258;
void* __right_value137 = (void*)0;
char* __result_obj__143;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value134=__builtin_string(self))));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result_256=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_257=self;
    while(    (_Bool)1    ) {
        p2_258=strstr(p_257,str);
        if(        p2_258==((void*)0)        ) {
            p2_258=p_257;
            while(            *p2_258            ) {
                p2_258++;
            }
            buffer_append(result_256,p_257,p2_258-p_257);
            break;
        }
        buffer_append(result_256,p_257,p2_258-p_257);
        buffer_append_str(result_256,replace);
        p_257=p2_258+strlen(str);
    }
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value137=buffer_to_string(result_256))));
    come_call_finalizer(buffer_finalize, result_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* xbasename(char* path){
void* __right_value138 = (void*)0;
char* __result_obj__144;
char* p_259;
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
    p_259=path+strlen(path);
    while(    p_259>=path    ) {
        if(        *p_259==47        ) {
            break;
        }
        else {
            p_259--;
        }
    }
    if(    p_259<path    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(path))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    else {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(p_259+1))));
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
char* path2_260;
char* p_261;
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
    path2_260=(char*)come_increment_ref_count(xbasename(path));
    p_261=path2_260+strlen(path2_260);
    while(    p_261>=path2_260    ) {
        if(        *p_261==46        ) {
            break;
        }
        else {
            p_261--;
        }
    }
    if(    p_261<path2_260    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(path2_260))));
        (path2_260 = come_decrement_ref_count(path2_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value145=charp_substring(path2_260,0,p_261-path2_260))));
        (path2_260 = come_decrement_ref_count(path2_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
    (path2_260 = come_decrement_ref_count(path2_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* xextname(char* path){
void* __right_value147 = (void*)0;
char* __result_obj__152;
char* p_262;
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
    p_262=path+strlen(path);
    while(    p_262>=path    ) {
        if(        *p_262==46        ) {
            break;
        }
        else {
            p_262--;
        }
    }
    if(    p_262<path    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(p_262+1))));
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
char* msg2_263;
va_list args_264;
void* __right_value171 = (void*)0;
char* __result_obj__176;
msg2_263 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __builtin_va_start(args_264,self);
    vasprintf(&msg2_263,self,args_264);
    __builtin_va_end(args_264);
    printf("%s",msg2_263);
    free(msg2_263);
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
int i_265;
    for(    i_265=0    ;    i_265<self    ;    i_265++    ){
        block(parent,i_265);
    }
}

