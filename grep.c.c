/// previous struct definition ///
/// struct definition ///
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

extern char _end[];
static char* heap_end=0;
static char* heap_limit=(char*)-2013265920;
struct mem_block
{
    unsigned long  int size;
    struct mem_block* next;
};

typedef struct mem_block mem_block_t;

extern struct mem_block* free_list;

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

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

typedef int pid_t;

// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
void putchar(char c);
int main(int argc, char** argv);
void* sbrk(long incr);
void* malloc(unsigned long  int size);
void free(void* ptr);
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
char* come_get_stackframe();
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
struct mem_block* free_list=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

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
long _ret_4;
int size_3;
memset(&_ret_4, 0, sizeof(long));
    come_heap_init(0, 0, 0);
    char buf2_2[256];
    memset(&buf2_2, 0, sizeof(char)    *(256)    );
    size_3=({_ret_4; register long _a0 asm("a0") =(long)(0);
; register long _a1 asm("a1") =(long)(buf2_2);
; register long _a2 asm("a2") =(long)(3);
; register long _a7 asm("a7") =65;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_4=_a0; _ret_4; });
    buf2_2[size_3]=0;
    puts(buf2_2);
    exit(2);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__1;
void* prev_5;
void* __result_obj__2;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    prev_5=heap_end;
    heap_end+=incr;
    __result_obj__2 = prev_5;
    return __result_obj__2;
}

void* malloc(unsigned long  int size){
void* __result_obj__3;
struct mem_block* current_6;
struct mem_block* prev_7;
void* __result_obj__4;
struct mem_block* new_mem_8;
void* __result_obj__5;
void* __result_obj__6;
    if(    size==0    ) {
        __result_obj__3 = ((void*)0);
        return __result_obj__3;
    }
    if(    size%8!=0    ) {
        size+=8-(size%8);
    }
    size+=sizeof(struct mem_block);
    current_6=free_list;
    prev_7=((void*)0);
    while(    current_6!=((void*)0)    ) {
        if(        current_6->size>=size        ) {
            if(            prev_7==((void*)0)            ) {
                free_list=current_6->next;
            }
            else {
                prev_7->next=current_6->next;
            }
            __result_obj__4 = (void*)(current_6+1);
            return __result_obj__4;
        }
        prev_7=current_6;
        current_6=current_6->next;
    }
    new_mem_8=(struct mem_block*)sbrk(size);
    if(    new_mem_8==(void*)-1    ) {
        __result_obj__5 = ((void*)0);
        return __result_obj__5;
    }
    new_mem_8->size=size;
    new_mem_8->next=((void*)0);
    __result_obj__6 = (void*)(new_mem_8+1);
    return __result_obj__6;
}

void free(void* ptr){
struct mem_block* block_9;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_9=(struct mem_block*)ptr-1;
    block_9->next=free_list;
    free_list=block_9;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_10;
void* __result_obj__7;
void* ptr_11;
void* __result_obj__8;
    total_size_10=nmemb*size;
    if(    total_size_10==0    ) {
        __result_obj__7 = ((void*)0);
        return __result_obj__7;
    }
    ptr_11=malloc(total_size_10);
    if(    ptr_11!=((void*)0)    ) {
        memset(ptr_11,0,total_size_10);
    }
    __result_obj__8 = ptr_11;
    return __result_obj__8;
}

char* strdup(const char* s){
char* s2_12;
unsigned long  int len_13;
char* p_14;
char* __result_obj__9;
    s2_12=s;
    len_13=strlen(s2_12)+1;
    p_14=malloc(len_13);
    if(    p_14    ) {
        memcpy(p_14,s2_12,len_13);
    }
    __result_obj__9 = p_14;
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
        const char* h_15=haystack;
        const char* n_16=needle;
        while(        *h_15&&*n_16&&(*h_15==*n_16)        ) {
            h_15++;
            n_16++;
        }
        if(        !*n_16        ) {
            __result_obj__11 = (char*)haystack;
            return __result_obj__11;
        }
    }
    __result_obj__12 = ((void*)0);
    return __result_obj__12;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_17;
int i_18;
void* __result_obj__13;
    cdst_17=(char*)dst;
    for(    i_18=0    ;    i_18<n    ;    i_18++    ){
        cdst_17[i_18]=c;
    }
    __result_obj__13 = dst;
    return __result_obj__13;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_19;
const unsigned char* s2_20;
memset(&s1_19, 0, sizeof(const unsigned char*));
memset(&s2_20, 0, sizeof(const unsigned char*));
    s1_19=v1;
    s2_20=v2;
    while(    n-->0    ) {
        if(        *s1_19!=*s2_20        ) {
            return *s1_19-*s2_20;
        }
        s1_19++,s2_20++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_21;
char* d_22;
void* __result_obj__14;
void* __result_obj__15;
s_21 = (void*)0;
d_22 = (void*)0;
    if(    n==0    ) {
        __result_obj__14 = dst;
        return __result_obj__14;
    }
    s_21=src;
    d_22=dst;
    if(    s_21<d_22&&s_21+n>d_22    ) {
        s_21+=n;
        d_22+=n;
        while(        n-->0        ) {
            *--d_22=*--s_21;
        }
    }
    else {
        while(        n-->0        ) {
            *d_22++=*s_21++;
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
char* os_23;
char* __result_obj__17;
os_23 = (void*)0;
    os_23=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__17 = os_23;
    return __result_obj__17;
}

int strlen(const char* s){
int n_24;
memset(&n_24, 0, sizeof(int));
    for(    n_24=0    ;    s[n_24]    ;    n_24++    ){
        ;
    }
    return n_24;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_25;
char* __result_obj__18;
    d_25=dest;
    while(    *d_25    ) {
        d_25++;
    }
    while(    n--&&*src    ) {
        *d_25++=*src++;
    }
    *d_25=0;
    __result_obj__18 = dest;
    return __result_obj__18;
}

char* strtok(char* s, const char* delim){
static char* next_26;
char* start_27;
char* p_28;
char* __result_obj__19;
int is_delim_30;
char* __result_obj__20;
int is_delim_32;
char* __result_obj__21;
next_26 = (void*)0;
start_27 = (void*)0;
p_28 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_26=s;
    }
    if(    next_26==((void*)0)    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
    }
    start_27=next_26;
    while(    *start_27!=0    ) {
        const char* d_29=delim;
        is_delim_30=0;
        while(        *d_29!=0        ) {
            if(            *start_27==*d_29            ) {
                is_delim_30=1;
                break;
            }
            d_29++;
        }
        if(        !is_delim_30        ) {
            break;
        }
        start_27++;
    }
    if(    *start_27==0    ) {
        next_26=((void*)0);
        __result_obj__20 = ((void*)0);
        return __result_obj__20;
    }
    p_28=start_27;
    while(    *p_28!=0    ) {
        const char* d_31=delim;
        is_delim_32=0;
        while(        *d_31!=0        ) {
            if(            *p_28==*d_31            ) {
                is_delim_32=1;
                break;
            }
            d_31++;
        }
        if(        is_delim_32        ) {
            break;
        }
        p_28++;
    }
    if(    *p_28==0    ) {
        next_26=((void*)0);
    }
    else {
        *p_28=0;
        next_26=p_28+1;
    }
    __result_obj__21 = start_27;
    return __result_obj__21;
}

void exit(int n){
    while(    1    ) {
        ;
    }
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_33;
int i_35;
int negative_36;
char* __result_obj__22;
int digit_37;
char* __result_obj__23;
    p_33=buf;
    char tmp_34[32];
    memset(&tmp_34, 0, sizeof(char)    *(32)    );
    i_35=0;
    negative_36=0;
    if(    base<2||base>16    ) {
        *p_33=0;
        __result_obj__22 = p_33;
        return __result_obj__22;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_36=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_37=val_%base;
        tmp_34[i_35++]=(((digit_37<10))?(48+digit_37):(97+digit_37-10));
        val_/=base;
    } while(    val_    );
    if(    negative_36    ) {
        *p_33++=45;
    }
    while(    i_35--    ) {
        *p_33++=tmp_34[i_35];
    }
    *p_33=0;
    __result_obj__23 = buf;
    return __result_obj__23;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_39;
const char* s_40;
unsigned long  int remaining_42;
s_40 = (void*)0;
    char out2_38[512];
    memset(&out2_38, 0, sizeof(char)    *(512)    );
    p_39=out2_38;
    char buf_41[32];
    memset(&buf_41, 0, sizeof(char)    *(32)    );
    remaining_42=sizeof(out2_38);
    for(    ;    *fmt&&remaining_42>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_39++=*fmt;
            remaining_42--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_41,__builtin_va_arg(ap,int),10,1);
            s_40=buf_41;
            break;
            case 117:
            itoa(buf_41,__builtin_va_arg(ap,unsigned int),10,0);
            s_40=buf_41;
            break;
            case 120:
            itoa(buf_41,__builtin_va_arg(ap,unsigned int),16,0);
            s_40=buf_41;
            break;
            case 115:
            s_40=__builtin_va_arg(ap,const char*);
            if(            !s_40            ) {
                s_40="(null)";
            }
            break;
            case 99:
            buf_41[0]=(char)__builtin_va_arg(ap,int);
            buf_41[1]=0;
            s_40=buf_41;
            break;
            case 112:
            strncpy(buf_41,"0x",32);
            itoa(buf_41+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_40=buf_41;
            break;
            case 37:
            buf_41[0]=37;
            buf_41[1]=0;
            s_40=buf_41;
            break;
            default:
            buf_41[0]=37;
            buf_41[1]=*fmt;
            buf_41[2]=0;
            s_40=buf_41;
            break;
        }
        while(        *s_40&&remaining_42>1        ) {
            *p_39++=*s_40++;
            remaining_42--;
        }
    }
    *p_39=0;
    *out=strdup(out2_38);
    return p_39-out2_38;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_43;
char* p_44;
const char* s_45;
unsigned long  int remaining_47;
memset(&ap_43, 0, sizeof(va_list));
s_45 = (void*)0;
    __builtin_va_start(ap_43,fmt);
    p_44=out;
    char buf_46[32];
    memset(&buf_46, 0, sizeof(char)    *(32)    );
    remaining_47=out_size;
    if(    remaining_47==0    ) {
        __builtin_va_end(ap_43);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_47>1            ) {
                *p_44++=*fmt;
                remaining_47--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_45=__builtin_va_arg(ap_43,const char*);
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 100:
            itoa(buf_46,__builtin_va_arg(ap_43,int),10,0);
            s_45=buf_46;
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 120:
            itoa(buf_46,(unsigned int)__builtin_va_arg(ap_43,int),16,1);
            s_45=buf_46;
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 99:
            if(            remaining_47>1            ) {
                *p_44++=(char)__builtin_va_arg(ap_43,int);
                remaining_47--;
            }
            break;
            case 112:
            s_45="0x";
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            itoa(buf_46,(long)__builtin_va_arg(ap_43,void*),16,1);
            s_45=buf_46;
            while(            *s_45&&remaining_47>1            ) {
                *p_44++=*s_45++;
                remaining_47--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_46,__builtin_va_arg(ap_43,long),10,1);
                s_45=buf_46;
                while(                *s_45&&remaining_47>1                ) {
                    *p_44++=*s_45++;
                    remaining_47--;
                }
            }
            break;
            default:
            if(            remaining_47>1            ) {
                *p_44++=37;
                remaining_47--;
                if(                remaining_47>1                ) {
                    *p_44++=*fmt;
                    remaining_47--;
                }
            }
            break;
        }
    }
    *p_44=0;
    __builtin_va_end(ap_43);
    return p_44-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_48;
char* p_49;
const char* s_50;
unsigned long  int remaining_52;
memset(&ap_48, 0, sizeof(va_list));
s_50 = (void*)0;
    __builtin_va_start(ap_48,fmt);
    p_49=out;
    char buf_51[32];
    memset(&buf_51, 0, sizeof(char)    *(32)    );
    remaining_52=out_size;
    if(    remaining_52==0    ) {
        __builtin_va_end(ap_48);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_52>1            ) {
                *p_49++=*fmt;
                remaining_52--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_50=__builtin_va_arg(ap_48,const char*);
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 100:
            itoa(buf_51,__builtin_va_arg(ap_48,int),10,0);
            s_50=buf_51;
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 120:
            itoa(buf_51,(unsigned int)__builtin_va_arg(ap_48,int),16,1);
            s_50=buf_51;
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 99:
            if(            remaining_52>1            ) {
                *p_49++=(char)__builtin_va_arg(ap_48,int);
                remaining_52--;
            }
            break;
            case 112:
            s_50="0x";
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            itoa(buf_51,(long)__builtin_va_arg(ap_48,void*),16,1);
            s_50=buf_51;
            while(            *s_50&&remaining_52>1            ) {
                *p_49++=*s_50++;
                remaining_52--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_51,__builtin_va_arg(ap_48,long),10,1);
                s_50=buf_51;
                while(                *s_50&&remaining_52>1                ) {
                    *p_49++=*s_50++;
                    remaining_52--;
                }
            }
            break;
            default:
            if(            remaining_52>1            ) {
                *p_49++=37;
                remaining_52--;
                if(                remaining_52>1                ) {
                    *p_49++=*fmt;
                    remaining_52--;
                }
            }
            break;
        }
    }
    *p_49=0;
    __builtin_va_end(ap_48);
    return p_49-out;
}

void printint(int val_, int base, int sign){
int i_54;
int negative_55;
unsigned int uval_56;
int digit_57;
memset(&uval_56, 0, sizeof(unsigned int));
    char buf_53[33];
    memset(&buf_53, 0, sizeof(char)    *(33)    );
    i_54=0;
    negative_55=0;
    if(    sign&&val_<0    ) {
        negative_55=1;
        uval_56=-val_;
    }
    else {
        uval_56=(unsigned int)val_;
    }
    if(    uval_56==0    ) {
        putchar(48);
        return;
    }
    while(    uval_56>0    ) {
        digit_57=uval_56%base;
        buf_53[i_54++]=((digit_57<10)?(48+digit_57):(97+(digit_57-10)));
        uval_56/=base;
    }
    if(    negative_55    ) {
        putchar(45);
    }
    while(    --i_54>=0    ) {
        putchar(buf_53[i_54]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_59;
int negative_60;
int digit_61;
    char buf_58[65];
    memset(&buf_58, 0, sizeof(char)    *(65)    );
    i_59=0;
    negative_60=0;
    if(    sign&&(long)val_<0    ) {
        negative_60=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_61=val_%base;
        buf_58[i_59++]=((digit_61<10)?(48+digit_61):(97+(digit_61-10)));
        val_/=base;
    }
    if(    negative_60    ) {
        putchar(45);
    }
    while(    --i_59>=0    ) {
        putchar(buf_58[i_59]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_63;
int negative_64;
int digit_65;
    char buf_62[65];
    memset(&buf_62, 0, sizeof(char)    *(65)    );
    i_63=0;
    negative_64=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_64=1;
        val_=-(long  long)val_;
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

int printf(const char* fmt, ...){
va_list ap_66;
const char* p_67;
int lcount_68;
unsigned long  int val__69;
unsigned long  long val__70;
long val__71;
long long val__72;
int i_73;
int val__74;
unsigned int val__75;
unsigned long  int val__76;
char c_78;
memset(&ap_66, 0, sizeof(va_list));
p_67 = (void*)0;
    __builtin_va_start(ap_66,fmt);
    for(    p_67=fmt    ;    *p_67    ;    p_67++    ){
        if(        *p_67!=37        ) {
            putchar(*p_67);
            continue;
        }
        p_67++;
        if(        *p_67==108        ) {
            lcount_68=1;
            if(            *(p_67+1)==108            ) {
                lcount_68=2;
                p_67++;
            }
            p_67++;
            switch (            *p_67) {
                case 120:
                {
                    if(                    lcount_68==1                    ) {
                        val__69=__builtin_va_arg(ap_66,unsigned long  int);
                        printlong(val__69,16,0);
                    }
                    else {
                        val__70=__builtin_va_arg(ap_66,unsigned long  long);
                        printlonglong(val__70,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_68==1                    ) {
                        val__71=__builtin_va_arg(ap_66,long);
                        printlong(val__71,10,1);
                    }
                    else {
                        val__72=__builtin_va_arg(ap_66,long  long);
                        printlonglong(val__72,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_73=0                    ;                    i_73<lcount_68                    ;                    i_73++                    ){
                        putchar(108);
                    }
                    putchar(*p_67);
                    break;
                }
            }
        }
        else {
            switch (            *p_67) {
                case 100:
                {
                    val__74=__builtin_va_arg(ap_66,int);
                    printint(val__74,10,1);
                    break;
                }
                case 120:
                {
                    val__75=__builtin_va_arg(ap_66,unsigned int);
                    printint(val__75,16,0);
                    break;
                }
                case 112:
                {
                    val__76=(unsigned long  int)__builtin_va_arg(ap_66,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__76,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_77=__builtin_va_arg(ap_66,const char*);
                    if(                    !s_77                    ) {
                        s_77="(null)";
                    }
                    while(                    *s_77                    ) {
                        putchar(*s_77++);
                    }
                    break;
                }
                case 99:
                {
                    c_78=(char)__builtin_va_arg(ap_66,int);
                    putchar(c_78);
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
                    putchar(*p_67);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_66);
    return 0;
}

void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128    ) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0    ) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_79;
int i_80;
void* __right_value2 = (void*)0;
    buf_79=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_79,"%s %d\n",sname,sline);
    for(    i_80=gNumComeStackFrame-2    ;    i_80>=0    ;    i_80--    ){
        buffer_append_format(buf_79,"%s %d #%d\n",gComeStackFrameSName[i_80],gComeStackFrameSLine[i_80],gComeStackFrameID[i_80]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_79))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_81;
    for(    i_81=gNumComeStackFrame-1    ;    i_81>=0    ;    i_81--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_81],gComeStackFrameSLine[i_81],gComeStackFrameID[i_81]);
    }
}

char* come_get_stackframe(){
void* __right_value3 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__24;
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
void* result_82;
void* __result_obj__25;
    result_82=((void*)0);
    size=(size+7&~7);
    result_82=calloc(1,size);
    __result_obj__25 = result_82;
    return __result_obj__25;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_83;
struct sMemHeader* prev_it_84;
struct sMemHeader* next_it_85;
unsigned long  int size_86;
struct sMemHeaderTiny* it_87;
struct sMemHeaderTiny* prev_it_88;
struct sMemHeaderTiny* next_it_89;
unsigned long  int size_90;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_83=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_83->allocated!=177783            ) {
                return;
            }
            it_83->allocated=0;
            prev_it_84=it_83->prev;
            next_it_85=it_83->next;
            if(            gAllocMem==it_83            ) {
                gAllocMem=next_it_85;
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
        else {
            it_87=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_87->allocated!=177783            ) {
                return;
            }
            it_87->allocated=0;
            prev_it_88=it_87->prev;
            next_it_89=it_87->next;
            if(            gAllocMem==it_87            ) {
                gAllocMem=(struct sMemHeader*)next_it_89;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_88                ) {
                    prev_it_88->next=next_it_89;
                }
                if(                next_it_89                ) {
                    next_it_89->prev=prev_it_88;
                }
            }
            size_90=it_87->size;
            free(it_87);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_91;
struct sMemHeader* it_92;
int i_93;
int i_94;
void* __result_obj__26;
void* result_95;
struct sMemHeaderTiny* it_96;
void* __result_obj__27;
memset(&i_93, 0, sizeof(int));
memset(&i_94, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_91=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_92=result_91;
        it_92->allocated=177783;
        it_92->size=size+sizeof(struct sMemHeader);
        it_92->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_93=0            ;            i_93<gNumComeStackFrame            ;            i_93++            ){
                it_92->sname[i_93]=gComeStackFrameSName[i_93];
                it_92->sline[i_93]=gComeStackFrameSLine[i_93];
                it_92->id[i_93]=gComeStackFrameID[i_93];
            }
        }
        else {
            for(            i_94=0            ;            i_94<16            ;            i_94++            ){
                it_92->sname[i_94]=gComeStackFrameSName[gNumComeStackFrame-1-i_94];
                it_92->sline[i_94]=gComeStackFrameSLine[gNumComeStackFrame-1-i_94];
                it_92->id[i_94]=gComeStackFrameID[gNumComeStackFrame-1-i_94];
            }
        }
        come_pop_stackframe_v2();
        it_92->next=gAllocMem;
        it_92->prev=((void*)0);
        it_92->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_92;
        }
        gAllocMem=it_92;
        gNumAlloc++;
        __result_obj__26 = (char*)result_91+sizeof(struct sMemHeader);
        return __result_obj__26;
    }
    else {
        result_95=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_96=result_95;
        it_96->allocated=177783;
        it_96->class_name=class_name;
        it_96->sname=sname;
        it_96->sline=sline;
        it_96->size=size+sizeof(struct sMemHeaderTiny);
        it_96->free_next=((void*)0);
        it_96->next=(struct sMemHeaderTiny*)gAllocMem;
        it_96->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_96;
        }
        gAllocMem=(struct sMemHeader*)it_96;
        gNumAlloc++;
        __result_obj__27 = (char*)result_95+sizeof(struct sMemHeaderTiny);
        return __result_obj__27;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_97;
char* __result_obj__28;
struct sMemHeaderTiny* it_98;
char* __result_obj__29;
    if(    gComeDebugLib    ) {
        it_97=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_97->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_97);
            exit(2);
        }
        __result_obj__28 = it_97->class_name;
        return __result_obj__28;
    }
    else {
        it_98=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_98->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_98);
            exit(2);
        }
        __result_obj__29 = it_98->class_name;
        return __result_obj__29;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_99;
int i_100;
struct sMemHeaderTiny* it_101;
    if(    gComeDebugLib    ) {
        it_99=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_99->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_99->class_name        ) {
            printf("(%s): ",it_99->class_name);
        }
        for(        i_100=0        ;        i_100<16        ;        i_100++        ){
            if(            it_99->sname[i_100]            ) {
                printf("%s %d #%d, ",it_99->sname[i_100],it_99->sline[i_100],it_99->id[i_100]);
            }
        }
        puts("");
    }
    else {
        it_101=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_101->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_101->class_name,it_101->sname,it_101->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_102;
unsigned long  int* ref_count_103;
unsigned long  int* size2_104;
void* __result_obj__30;
    mem_102=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_103=(unsigned long  int*)mem_102;
    *ref_count_103=0;
    size2_104=(unsigned long  int*)(mem_102+sizeof(unsigned long  int));
    *size2_104=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__30 = mem_102+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__30;
}

void come_free(void* mem){
unsigned long  int* ref_count_105;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_105=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_105);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__31;
char* mem_106;
unsigned long  int* size_p_107;
unsigned long  int size_108;
void* result_109;
void* __result_obj__32;
    if(    !block    ) {
        __result_obj__31 = ((void*)0);
        return __result_obj__31;
    }
    mem_106=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_107=(unsigned long  int*)(mem_106+sizeof(unsigned long  int));
    size_108=*size_p_107-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_109=come_calloc_v2(1,size_108,sname,sline,class_name);
    memcpy(result_109,block,size_108);
    __result_obj__32 = result_109;
    return __result_obj__32;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__33;
unsigned long  int* ref_count_110;
void* __result_obj__34;
    if(    mem==((void*)0)    ) {
        __result_obj__33 = mem;
        return __result_obj__33;
    }
    ref_count_110=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_110)++;
    __result_obj__34 = mem;
    return __result_obj__34;
}

void* come_print_ref_count(void* mem){
void* __result_obj__35;
unsigned long  int* ref_count_111;
void* __result_obj__36;
    if(    mem==((void*)0)    ) {
        __result_obj__35 = mem;
        return __result_obj__35;
    }
    ref_count_111=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_111);
    __result_obj__36 = mem;
    return __result_obj__36;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_112;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_112=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_112;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__37;
void* __result_obj__38;
unsigned long  int* ref_count_113;
unsigned long  int count_114;
void (*finalizer_115)(void*);
void* __result_obj__39;
void* __result_obj__40;
memset(&finalizer_115, 0, sizeof(void (*)(void*)));
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
    ref_count_113=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_113)--;
    }
    count_114=*ref_count_113;
    if(    !no_free&&count_114<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_115=protocol_fun;
            finalizer_115(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__39 = ((void*)0);
        return __result_obj__39;
    }
    __result_obj__40 = mem;
    return __result_obj__40;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_116)(void*);
void (*finalizer_117)(void*);
void (*finalizer_118)(void*);
unsigned long  int* ref_count_119;
unsigned long  int count_120;
void (*finalizer_121)(void*);
void (*finalizer_122)(void*);
void (*finalizer_123)(void*);
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
memset(&finalizer_121, 0, sizeof(void (*)(void*)));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
memset(&finalizer_123, 0, sizeof(void (*)(void*)));
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
                finalizer_116=protocol_fun;
                finalizer_116(protocol_obj);
            }
            finalizer_117=fun;
            finalizer_117(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_118=protocol_fun;
                finalizer_118(protocol_obj);
            }
        }
    }
    else {
        ref_count_119=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_119)--;
        }
        count_120=*ref_count_119;
        if(        !no_free&&count_120<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_121=protocol_fun;
                        finalizer_121(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_122=fun;
                        finalizer_122(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_123=protocol_fun;
                        finalizer_123(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__41;
int len_124;
void* __right_value4 = (void*)0;
char* result_125;
char* __result_obj__42;
    if(    str==((void*)0)    ) {
        __result_obj__41 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__41 = come_decrement_ref_count(__result_obj__41, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__41;
    }
    len_124=strlen(str)+1;
    result_125=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_124)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_125,str,len_124);
    __result_obj__42 = (char*)come_increment_ref_count(result_125);
    (result_125 = come_decrement_ref_count(result_125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__42;
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
void* __right_value5 = (void*)0;
char* __result_obj__43;
    __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value5=come_get_stackframe())));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__43;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__44;
    __result_obj__44 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__44;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value6 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__45;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2885, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__45 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__45, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__45;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value7 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__46;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2895, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__46 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__46, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__46;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__47;
void* __right_value8 = (void*)0;
struct buffer* result_126;
void* __right_value9 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__48;
    if(    self==((void*)0)    ) {
        __result_obj__47 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__47;
    }
    result_126=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2915, "struct buffer*"));
    result_126->size=self->size;
    __dec_obj3=result_126->buf,
    result_126->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2918, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_126->len=self->len;
    memcpy(result_126->buf,self->buf,self->len);
    __result_obj__48 = (struct buffer*)come_increment_ref_count(result_126);
    come_call_finalizer(buffer_finalize, result_126, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
_Bool __result_obj__49;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__49 = string_equals(((char*)(__right_value10=buffer_to_string(left))),((char*)(__right_value11=buffer_to_string(right))));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__49;
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
struct buffer* __result_obj__50;
void* __right_value12 = (void*)0;
char* old_buf_127;
int old_len_128;
int new_size_129;
void* __right_value13 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__51;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__50 = self;
        return __result_obj__50;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_127=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2966, "char*"));
        memcpy(old_buf_127,self->buf,self->size);
        old_len_128=self->len;
        new_size_129=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_129)), "/usr/local/include/comelang.h", 2970, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_127,old_len_128);
        self->buf[old_len_128]=0;
        self->size=new_size_129;
        (old_buf_127 = come_decrement_ref_count(old_buf_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__51 = self;
    return __result_obj__51;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__52;
void* __right_value14 = (void*)0;
char* old_buf_130;
int old_len_131;
int new_size_132;
void* __right_value15 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__53;
    if(    self==((void*)0)    ) {
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_130=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2989, "char*"));
        old_len_131=self->len;
        new_size_132=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_132)), "/usr/local/include/comelang.h", 2993, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_130,old_len_131);
        self->buf[old_len_131]=0;
        self->size=new_size_132;
        (old_buf_130 = come_decrement_ref_count(old_buf_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__54;
int size_133;
void* __right_value16 = (void*)0;
char* old_buf_134;
int old_len_135;
int new_size_136;
void* __right_value17 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__55;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__54 = self;
        return __result_obj__54;
    }
    size_133=strlen(mem);
    if(    self->len+size_133+1+1>=self->size    ) {
        old_buf_134=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3015, "char*"));
        memcpy(old_buf_134,self->buf,self->size);
        old_len_135=self->len;
        new_size_136=(self->size+size_133+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_136)), "/usr/local/include/comelang.h", 3019, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_134,old_len_135);
        self->buf[old_len_135]=0;
        self->size=new_size_136;
        (old_buf_134 = come_decrement_ref_count(old_buf_134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_133);
    self->len+=size_133;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__56;
va_list args_137;
char* result_138;
int len_139;
struct buffer* __result_obj__57;
void* __right_value18 = (void*)0;
char* mem_140;
int size_141;
void* __right_value19 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value20 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__58;
result_138 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    __builtin_va_start(args_137,msg);
    len_139=vasprintf(&result_138,msg,args_137);
    __builtin_va_end(args_137);
    if(    len_139<0    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    mem_140=(char*)come_increment_ref_count(__builtin_string(result_138));
    size_141=strlen(mem_140);
    if(    self->len+size_141+1+1>=self->size    ) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3063, "char*"));
        memcpy(old_buf_142,self->buf,self->size);
        old_len_143=self->len;
        new_size_144=(self->size+size_141+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_144)), "/usr/local/include/comelang.h", 3067, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        (old_buf_142 = come_decrement_ref_count(old_buf_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_140,size_141);
    self->len+=size_141;
    self->buf[self->len]=0;
    free(result_138);
    __result_obj__58 = self;
    (mem_140 = come_decrement_ref_count(mem_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__58;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__59;
int size_145;
void* __right_value21 = (void*)0;
char* old_buf_146;
int old_len_147;
int new_size_148;
void* __right_value22 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__60;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__59 = self;
        return __result_obj__59;
    }
    size_145=strlen(mem)+1;
    if(    self->len+size_145+1+1+1>=self->size    ) {
        old_buf_146=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3089, "char*"));
        memcpy(old_buf_146,self->buf,self->size);
        old_len_147=self->len;
        new_size_148=(self->size+size_145+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_148)), "/usr/local/include/comelang.h", 3093, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_146,old_len_147);
        self->buf[old_len_147]=0;
        self->size=new_size_148;
        (old_buf_146 = come_decrement_ref_count(old_buf_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_145);
    self->len+=size_145;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__61;
int* mem_149;
int size_150;
void* __right_value23 = (void*)0;
char* old_buf_151;
int old_len_152;
int new_size_153;
void* __right_value24 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_149=&value;
    size_150=sizeof(int);
    if(    self->len+size_150+1+1>=self->size    ) {
        old_buf_151=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3116, "char*"));
        memcpy(old_buf_151,self->buf,self->size);
        old_len_152=self->len;
        new_size_153=(self->size+size_150+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_153)), "/usr/local/include/comelang.h", 3120, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_151,old_len_152);
        self->buf[old_len_152]=0;
        self->size=new_size_153;
        (old_buf_151 = come_decrement_ref_count(old_buf_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_149,size_150);
    self->len+=size_150;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_154;
int size_155;
void* __right_value25 = (void*)0;
char* old_buf_156;
int old_len_157;
int new_size_158;
void* __right_value26 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__63;
    mem_154=&value;
    size_155=sizeof(long);
    if(    self->len+size_155+1+1>=self->size    ) {
        old_buf_156=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3139, "char*"));
        memcpy(old_buf_156,self->buf,self->size);
        old_len_157=self->len;
        new_size_158=(self->size+size_155+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_158)), "/usr/local/include/comelang.h", 3143, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_156,old_len_157);
        self->buf[old_len_157]=0;
        self->size=new_size_158;
        (old_buf_156 = come_decrement_ref_count(old_buf_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_154,size_155);
    self->len+=size_155;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__64;
short* mem_159;
int size_160;
void* __right_value27 = (void*)0;
char* old_buf_161;
int old_len_162;
int new_size_163;
void* __right_value28 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    mem_159=&value;
    size_160=sizeof(short);
    if(    self->len+size_160+1+1>=self->size    ) {
        old_buf_161=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3166, "char*"));
        memcpy(old_buf_161,self->buf,self->size);
        old_len_162=self->len;
        new_size_163=(self->size+size_160+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3170, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_161,old_len_162);
        self->buf[old_len_162]=0;
        self->size=new_size_163;
        (old_buf_161 = come_decrement_ref_count(old_buf_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_159,size_160);
    self->len+=size_160;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__66;
int len_164;
int new_size_165;
void* __right_value29 = (void*)0;
char* __dec_obj12;
int i_166;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    len_164=self->len;
    len_164=(len_164+3)&~3;
    if(    len_164>=self->size    ) {
        new_size_165=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_165)), "/usr/local/include/comelang.h", 3194, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_165;
    }
    for(    i_166=self->len    ;    i_166<len_164    ;    i_166++    ){
        self->buf[i_166]=0;
    }
    self->len=len_164;
    __result_obj__67 = self;
    return __result_obj__67;
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
void* __right_value30 = (void*)0;
void* __right_value31 = (void*)0;
struct buffer* result_167;
struct buffer* __result_obj__68;
struct buffer* __result_obj__69;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3224, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__68 = (struct buffer*)come_increment_ref_count(result_167);
        come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__68;
    }
    buffer_append_str(result_167,self);
    __result_obj__69 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

char* buffer_to_string(struct buffer* self){
void* __right_value32 = (void*)0;
char* __result_obj__70;
void* __right_value33 = (void*)0;
char* __result_obj__71;
    if(    self==((void*)0)    ) {
        __result_obj__70 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(""))));
        (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__70;
    }
    __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(self->buf))));
    (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__71;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__72;
    __result_obj__72 = self->buf;
    return __result_obj__72;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__73;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3251, "struct buffer*"))));
    buffer_append(result_168,self,sizeof(char)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_168);
    come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_169;
int i_170;
struct buffer* __result_obj__74;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3258, "struct buffer*"))));
    for(    i_170=0    ;    i_170<len    ;    i_170++    ){
        buffer_append(result_169,self[i_170],strlen(self[i_170]));
    }
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_171;
struct buffer* __result_obj__75;
    result_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_171,(char*)self,sizeof(short)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_171);
    come_call_finalizer(buffer_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_172;
struct buffer* __result_obj__76;
    result_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_172,(char*)self,sizeof(int)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_172);
    come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_173;
struct buffer* __result_obj__77;
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_173,(char*)self,sizeof(long)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_174;
struct buffer* __result_obj__78;
    result_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    buffer_append(result_174,(char*)self,sizeof(float)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_174);
    come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
struct buffer* result_175;
struct buffer* __result_obj__79;
    result_175=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3295, "struct buffer*"))));
    buffer_append(result_175,(char*)self,sizeof(double)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_175);
    come_call_finalizer(buffer_finalize, result_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

char* buffer_printable(struct buffer* self){
int len_176;
void* __right_value48 = (void*)0;
char* result_177;
int n_178;
int i_179;
unsigned char c_180;
char* __result_obj__80;
    len_176=self->len;
    result_177=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_176*2+1)), "/usr/local/include/comelang.h", 3303, "char*"));
    n_178=0;
    for(    i_179=0    ;    i_179<len_176    ;    i_179++    ){
        c_180=self->buf[i_179];
        if(        (c_180>=0&&c_180<32)||c_180==127        ) {
            result_177[n_178++]=94;
            result_177[n_178++]=c_180+65-1;
        }
        else if(        c_180>127        ) {
            result_177[n_178++]=63;
        }
        else {
            result_177[n_178++]=c_180;
        }
    }
    result_177[n_178]=0;
    __result_obj__80 = (char*)come_increment_ref_count(result_177);
    (result_177 = come_decrement_ref_count(result_177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__80;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_181;
struct list$1char$* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0    ;    i_181<num_value    ;    i_181++    ){
        list$1char$_push_back(self,values[i_181]);
    }
    __result_obj__82 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_183;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_184;
struct list$1char$* __result_obj__81;
    if(    self->len==0    ) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$*"))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1    ) {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$*"))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$*"))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_185;
struct list_item$1char$* prev_it_186;
    it_185=self->head;
    while(    it_185!=((void*)0)    ) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_186, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value53 = (void*)0;
struct list$1char$* __result_obj__83;
    __result_obj__83 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value53=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value53, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_187;
struct list$1char$p* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0    ;    i_187<num_value    ;    i_187++    ){
        list$1char$p_push_back(self,values[i_187]);
    }
    __result_obj__85 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_189;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_190;
struct list$1char$p* __result_obj__84;
    if(    self->len==0    ) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$p*"))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1    ) {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$p*"))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result_obj__84 = self;
    return __result_obj__84;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_191;
struct list_item$1char$p* prev_it_192;
    it_191=self->head;
    while(    it_191!=((void*)0)    ) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value54 = (void*)0;
void* __right_value58 = (void*)0;
struct list$1char$p* __result_obj__86;
    __result_obj__86 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value58=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value58, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_193;
struct list$1short$* __result_obj__88;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0    ;    i_193<num_value    ;    i_193++    ){
        list$1short$_push_back(self,values[i_193]);
    }
    __result_obj__88 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_195;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_196;
struct list$1short$* __result_obj__87;
    if(    self->len==0    ) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1short$*"))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1    ) {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1short$*"))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1short$*"))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__87 = self;
    return __result_obj__87;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_197;
struct list_item$1short$* prev_it_198;
    it_197=self->head;
    while(    it_197!=((void*)0)    ) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value59 = (void*)0;
void* __right_value63 = (void*)0;
struct list$1short$* __result_obj__89;
    __result_obj__89 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value63=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3354, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value63, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_199;
struct list$1int$* __result_obj__91;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0    ;    i_199<num_value    ;    i_199++    ){
        list$1int$_push_back(self,values[i_199]);
    }
    __result_obj__91 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_201;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_202;
struct list$1int$* __result_obj__90;
    if(    self->len==0    ) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1int$*"))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1    ) {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1int$*"))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1int$*"))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_203;
struct list_item$1int$* prev_it_204;
    it_203=self->head;
    while(    it_203!=((void*)0)    ) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_204, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value64 = (void*)0;
void* __right_value68 = (void*)0;
struct list$1int$* __result_obj__92;
    __result_obj__92 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value68=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3359, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value68, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_205;
struct list$1long$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0    ;    i_205<num_value    ;    i_205++    ){
        list$1long$_push_back(self,values[i_205]);
    }
    __result_obj__94 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_207;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_208;
struct list$1long$* __result_obj__93;
    if(    self->len==0    ) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1long$*"))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1    ) {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1long$*"))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1long$*"))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_209;
struct list_item$1long$* prev_it_210;
    it_209=self->head;
    while(    it_209!=((void*)0)    ) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_210, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value69 = (void*)0;
void* __right_value73 = (void*)0;
struct list$1long$* __result_obj__95;
    __result_obj__95 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value73=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3364, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value73, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_211;
struct list$1float$* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0    ;    i_211<num_value    ;    i_211++    ){
        list$1float$_push_back(self,values[i_211]);
    }
    __result_obj__97 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_213;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_214;
struct list$1float$* __result_obj__96;
    if(    self->len==0    ) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1float$*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1    ) {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1float$*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1float$*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_215;
struct list_item$1float$* prev_it_216;
    it_215=self->head;
    while(    it_215!=((void*)0)    ) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value74 = (void*)0;
void* __right_value78 = (void*)0;
struct list$1float$* __result_obj__98;
    __result_obj__98 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value78=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3369, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value78, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_217;
struct list$1double$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_217=0    ;    i_217<num_value    ;    i_217++    ){
        list$1double$_push_back(self,values[i_217]);
    }
    __result_obj__100 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_219;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_220;
struct list$1double$* __result_obj__99;
    if(    self->len==0    ) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1double$*"))));
        litem_218->prev=((void*)0);
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head=litem_218;
    }
    else if(    self->len==1    ) {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1double$*"))));
        litem_219->prev=self->head;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head->next=litem_219;
    }
    else {
        litem_220=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1double$*"))));
        litem_220->prev=self->tail;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail->next=litem_220;
        self->tail=litem_220;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_221;
struct list_item$1double$* prev_it_222;
    it_221=self->head;
    while(    it_221!=((void*)0)    ) {
        prev_it_222=it_221;
        it_221=it_221->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_222, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value79 = (void*)0;
void* __right_value83 = (void*)0;
struct list$1double$* __result_obj__101;
    __result_obj__101 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value83=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value83, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
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
void* __right_value84 = (void*)0;
char* __result_obj__102;
int len_223;
void* __right_value85 = (void*)0;
char* result_224;
char* __result_obj__103;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    len_223=strlen(self)+strlen(right);
    result_224=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_223+1)), "/usr/local/include/comelang.h", 3603, "char*"));
    strncpy(result_224,self,len_223+1);
    strncat(result_224,right,len_223+1);
    __result_obj__103 = (char*)come_increment_ref_count(result_224);
    (result_224 = come_decrement_ref_count(result_224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

char* string_operator_add(char* self, char* right){
void* __right_value86 = (void*)0;
char* __result_obj__104;
int len_225;
void* __right_value87 = (void*)0;
char* result_226;
char* __result_obj__105;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    len_225=strlen(self)+strlen(right);
    result_226=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_225+1)), "/usr/local/include/comelang.h", 3618, "char*"));
    strncpy(result_226,self,len_225+1);
    strncat(result_226,right,len_225+1);
    __result_obj__105 = (char*)come_increment_ref_count(result_226);
    (result_226 = come_decrement_ref_count(result_226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* charp_operator_mult(char* self, int right){
void* __right_value88 = (void*)0;
char* __result_obj__106;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct buffer* buf_227;
int i_228;
void* __right_value91 = (void*)0;
char* __result_obj__107;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value88=__builtin_string(""))));
        (__right_value88 = come_decrement_ref_count(__right_value88, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_228=0    ;    i_228<right    ;    i_228++    ){
        buffer_append_str(buf_227,self);
    }
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value91=buffer_to_string(buf_227))));
    come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

char* string_operator_mult(char* self, int right){
void* __right_value92 = (void*)0;
char* __result_obj__108;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct buffer* buf_229;
int i_230;
void* __right_value95 = (void*)0;
char* __result_obj__109;
    if(    self==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value92=__builtin_string(""))));
        (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    buf_229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3645, "struct buffer*"))));
    for(    i_230=0    ;    i_230<right    ;    i_230++    ){
        buffer_append_str(buf_229,self);
    }
    __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value95=buffer_to_string(buf_229))));
    come_call_finalizer(buffer_finalize, buf_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_231;
int i_232;
    result_231=(_Bool)0;
    for(    i_232=0    ;    i_232<len    ;    i_232++    ){
        if(        strncmp(self[i_232],str,strlen(self[i_232]))==0        ) {
            result_231=(_Bool)1;
            break;
        }
    }
    return result_231;
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
int result_233;
char* p_234;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_233=0;
    p_234=value;
    while(    *p_234    ) {
        result_233+=(*p_234);
        p_234++;
    }
    return result_233;
}

unsigned int string_get_hash_key(char* value){
int result_235;
char* p_236;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_235=0;
    p_236=value;
    while(    *p_236    ) {
        result_235+=(*p_236);
        p_236++;
    }
    return result_235;
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
_Bool result_237;
    result_237=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_237;
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
_Bool result_238;
    result_238=(c>=32&&c<=126);
    return result_238;
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
void* __right_value96 = (void*)0;
char* __result_obj__110;
int len_239;
void* __right_value97 = (void*)0;
char* result_240;
int i_241;
char* __result_obj__111;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_239=strlen(str);
    result_240=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_239+1)), "/usr/local/include/comelang.h", 3913, "char*"));
    for(    i_241=0    ;    i_241<len_239    ;    i_241++    ){
        result_240[i_241]=str[len_239-i_241-1];
    }
    result_240[len_239]=0;
    __result_obj__111 = (char*)come_increment_ref_count(result_240);
    (result_240 = come_decrement_ref_count(result_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value98 = (void*)0;
char* __result_obj__112;
int len_242;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
char* __result_obj__113;
void* __right_value101 = (void*)0;
char* __result_obj__114;
void* __right_value102 = (void*)0;
char* __result_obj__115;
void* __right_value103 = (void*)0;
char* result_243;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value98=__builtin_string(""))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    len_242=strlen(str);
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
    }
    if(    head>tail    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value100=charp_reverse(((char*)(__right_value99=charp_substring(str,tail,head)))))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_242    ) {
        tail=len_242;
    }
    if(    head==tail    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    if(    tail-head+1<1    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3959, "char*"));
    memcpy(result_243,str+head,tail-head);
    result_243[tail-head]=0;
    __result_obj__116 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value104 = (void*)0;
char* __result_obj__117;
int len_244;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
char* __result_obj__118;
void* __right_value107 = (void*)0;
char* __result_obj__119;
void* __right_value108 = (void*)0;
char* __result_obj__120;
void* __right_value109 = (void*)0;
char* result_245;
char* __result_obj__121;
    if(    str==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    len_244=strlen(str);
    if(    head<0    ) {
        head+=len_244;
    }
    if(    tail<0    ) {
        tail+=len_244+1;
    }
    if(    head>tail    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value106=charp_reverse(((char*)(__right_value105=charp_substring(str,tail,head)))))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_244    ) {
        tail=len_244;
    }
    if(    head==tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    tail-head+1<1    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    result_245=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4002, "char*"));
    memcpy(result_245,str+head,tail-head);
    result_245[tail-head]=0;
    __result_obj__121 = (char*)come_increment_ref_count(result_245);
    (result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value110 = (void*)0;
char* __result_obj__122;
int len_246;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
char* __result_obj__123;
void* __right_value113 = (void*)0;
char* __result_obj__124;
void* __right_value114 = (void*)0;
char* __result_obj__125;
void* __right_value115 = (void*)0;
char* result_247;
char* __result_obj__126;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_246=strlen(str);
    if(    head<0    ) {
        head+=len_246;
    }
    if(    tail<0    ) {
        tail+=len_246+1;
    }
    if(    head>tail    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value112=charp_reverse(((char*)(__right_value111=charp_substring(str,tail,head)))))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_246    ) {
        tail=len_246;
    }
    if(    head==tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    tail-head+1<1    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result_247=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4045, "char*"));
    memcpy(result_247,str+head,tail-head);
    result_247[tail-head]=0;
    __result_obj__126 = (char*)come_increment_ref_count(result_247);
    (result_247 = come_decrement_ref_count(result_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* xsprintf(char* msg, ...){
void* __right_value116 = (void*)0;
char* __result_obj__127;
va_list args_248;
char* result_249;
int len_250;
void* __right_value117 = (void*)0;
char* __result_obj__128;
void* __right_value118 = (void*)0;
char* result2_251;
char* __result_obj__129;
result_249 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    __builtin_va_start(args_248,msg);
    len_250=vasprintf(&result_249,msg,args_248);
    __builtin_va_end(args_248);
    if(    len_250<0    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    result2_251=(char*)come_increment_ref_count(__builtin_string(result_249));
    free(result_249);
    __result_obj__129 = (char*)come_increment_ref_count(result2_251);
    (result2_251 = come_decrement_ref_count(result2_251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__129;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value119 = (void*)0;
char* __result_obj__130;
int len_252;
void* __right_value120 = (void*)0;
char* __result_obj__131;
void* __right_value121 = (void*)0;
char* __result_obj__132;
void* __right_value122 = (void*)0;
char* result_253;
char* __result_obj__133;
    if(    str==((void*)0)    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    len_252=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    head<0    ) {
        head+=len_252;
    }
    if(    tail<0    ) {
        tail+=len_252+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    tail>=len_252    ) {
        tail=len_252;
    }
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_252-(tail-head)+1)), "/usr/local/include/comelang.h", 4107, "char*"));
    memcpy(result_253,str,head);
    memcpy(result_253+head,str+tail,len_252-tail);
    result_253[len_252-(tail-head)]=0;
    __result_obj__133 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__133;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__134;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__134 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__134, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__134;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_254;
struct list_item$1char$ph* prev_it_255;
    it_254=self->head;
    while(    it_254!=((void*)0)    ) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_259;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_260;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_261;
char* __dec_obj15;
struct list$1char$ph* __result_obj__136;
    if(    self->len==0    ) {
        litem_259=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_259->prev=((void*)0);
        litem_259->next=((void*)0);
        __dec_obj13=litem_259->item,
        litem_259->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_259;
        self->head=litem_259;
    }
    else if(    self->len==1    ) {
        litem_260=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_260->prev=self->head;
        litem_260->next=((void*)0);
        __dec_obj14=litem_260->item,
        litem_260->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_260;
        self->head->next=litem_260;
    }
    else {
        litem_261=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_261->prev=self->tail;
        litem_261->next=((void*)0);
        __dec_obj15=litem_261->item,
        litem_261->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_261;
        self->tail=litem_261;
    }
    self->len++;
    __result_obj__136 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__136;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* __result_obj__135;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1char$ph* result_256;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct buffer* str_257;
int i_258;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1char$ph* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value124=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4120, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value124, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__135;
    }
    result_256=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4123, "struct list$1char$ph*"))));
    str_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4125, "struct buffer*"))));
    for(    i_258=0    ;    i_258<charp_length(self)    ;    i_258++    ){
        if(        self[i_258]==c        ) {
            list$1char$ph_push_back(result_256,(char*)come_increment_ref_count(__builtin_string(str_257->buf)));
            buffer_reset(str_257);
        }
        else {
            buffer_append_char(str_257,self[i_258]);
        }
    }
    if(    buffer_length(str_257)!=0    ) {
        list$1char$ph_push_back(result_256,(char*)come_increment_ref_count(__builtin_string(str_257->buf)));
    }
    __result_obj__137 = (struct list$1char$ph*)come_increment_ref_count(result_256);
    come_call_finalizer(list$1char$ph$p_finalize, result_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* charp_printable(char* str){
int len_262;
void* __right_value136 = (void*)0;
char* result_263;
int n_264;
int i_265;
char c_266;
char* __result_obj__140;
    len_262=charp_length(str);
    result_263=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_262*2+1)), "/usr/local/include/comelang.h", 4157, "char*"));
    n_264=0;
    for(    i_265=0    ;    i_265<len_262    ;    i_265++    ){
        c_266=str[i_265];
        if(        (c_266>=0&&c_266<32)||c_266==127        ) {
            result_263[n_264++]=94;
            result_263[n_264++]=c_266+65-1;
        }
        else {
            result_263[n_264++]=c_266;
        }
    }
    result_263[n_264]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_263);
    (result_263 = come_decrement_ref_count(result_263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value137 = (void*)0;
char* __result_obj__141;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct buffer* result_267;
char* p_268;
char* p2_269;
void* __right_value140 = (void*)0;
char* __result_obj__142;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value137=__builtin_string(self))));
        (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    result_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4185, "struct buffer*"))));
    p_268=self;
    while(    (_Bool)1    ) {
        p2_269=strstr(p_268,str);
        if(        p2_269==((void*)0)        ) {
            p2_269=p_268;
            while(            *p2_269            ) {
                p2_269++;
            }
            buffer_append(result_267,p_268,p2_269-p_268);
            break;
        }
        buffer_append(result_267,p_268,p2_269-p_268);
        buffer_append_str(result_267,replace);
        p_268=p2_269+strlen(str);
    }
    __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value140=buffer_to_string(result_267))));
    come_call_finalizer(buffer_finalize, result_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* xbasename(char* path){
void* __right_value141 = (void*)0;
char* __result_obj__143;
char* p_270;
void* __right_value142 = (void*)0;
char* __result_obj__144;
void* __right_value143 = (void*)0;
char* __result_obj__145;
void* __right_value144 = (void*)0;
char* __result_obj__146;
    if(    path==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(""))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    p_270=path+strlen(path);
    while(    p_270>=path    ) {
        if(        *p_270==47        ) {
            break;
        }
        else {
            p_270--;
        }
    }
    if(    p_270<path    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(path))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    else {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(p_270+1))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* xnoextname(char* path){
void* __right_value145 = (void*)0;
char* __result_obj__147;
void* __right_value146 = (void*)0;
char* path2_271;
char* p_272;
void* __right_value147 = (void*)0;
char* __result_obj__148;
void* __right_value148 = (void*)0;
char* __result_obj__149;
void* __right_value149 = (void*)0;
char* __result_obj__150;
    if(    path==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    path2_271=(char*)come_increment_ref_count(xbasename(path));
    p_272=path2_271+strlen(path2_271);
    while(    p_272>=path2_271    ) {
        if(        *p_272==46        ) {
            break;
        }
        else {
            p_272--;
        }
    }
    if(    p_272<path2_271    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(path2_271))));
        (path2_271 = come_decrement_ref_count(path2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    else {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value148=charp_substring(path2_271,0,p_272-path2_271))));
        (path2_271 = come_decrement_ref_count(path2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
    (path2_271 = come_decrement_ref_count(path2_271, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* xextname(char* path){
void* __right_value150 = (void*)0;
char* __result_obj__151;
char* p_273;
void* __right_value151 = (void*)0;
char* __result_obj__152;
void* __right_value152 = (void*)0;
char* __result_obj__153;
void* __right_value153 = (void*)0;
char* __result_obj__154;
    if(    path==((void*)0)    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    p_273=path+strlen(path);
    while(    p_273>=path    ) {
        if(        *p_273==46        ) {
            break;
        }
        else {
            p_273--;
        }
    }
    if(    p_273<path    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(path))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    else {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(p_273+1))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
    (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__155;
void* __right_value155 = (void*)0;
char* __result_obj__156;
    if(    self    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value156 = (void*)0;
char* __result_obj__157;
void* __right_value157 = (void*)0;
char* __result_obj__158;
    if(    self    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("true"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("false"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
}

char* char_to_string(char self){
void* __right_value158 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%c",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* short_to_string(short self){
void* __right_value159 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* int_to_string(int self){
void* __right_value160 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* long_to_string(long self){
void* __right_value161 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value162 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* float_to_string(float self){
void* __right_value163 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%f",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* double_to_string(double self){
void* __right_value164 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%lf",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* string_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__166;
void* __right_value166 = (void*)0;
char* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* charp_to_string(char* self){
void* __right_value167 = (void*)0;
char* __result_obj__168;
void* __right_value168 = (void*)0;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
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
void* __right_value169 = (void*)0;
char* __result_obj__170;
void* __right_value170 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    puts(self);
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* charp_print(char* self){
void* __right_value171 = (void*)0;
char* __result_obj__172;
void* __right_value172 = (void*)0;
char* __result_obj__173;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    printf("%s",self);
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* charp_printf(char* self, ...){
void* __right_value173 = (void*)0;
char* __result_obj__174;
char* msg2_274;
va_list args_275;
void* __right_value174 = (void*)0;
char* __result_obj__175;
msg2_274 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(""))));
        (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    __builtin_va_start(args_275,self);
    vasprintf(&msg2_274,self,args_275);
    __builtin_va_end(args_275);
    printf("%s",msg2_274);
    free(msg2_274);
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(self))));
    (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_276;
    for(    i_276=0    ;    i_276<self    ;    i_276++    ){
        block(parent,i_276);
    }
}

