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

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[4096];
};

extern struct sHeapPage gHeapPages;

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
void* calloc(unsigned long  int nmemb, unsigned long  int size);
void free(void* ptr);
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
static void va_list_finalize(va_list self);
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

struct sHeapPage gHeapPages;

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
char* word_2;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_3;
long _ret_6;
int size_5;
void* __right_value2 = (void*)0;
memset(&_ret_6, 0, sizeof(long));
    come_heap_init(0, 0, 0);
    if(    argc<2    ) {
        exit(2);
    }
    word_2=argv[1];
    buf_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "grep.c", 21, "struct buffer*"))));
    while(    1    ) {
        char buf2_4[256];
        memset(&buf2_4, 0, sizeof(char)        *(256)        );
        size_5=({_ret_6; register long _a0 asm("a0") =(long)(0);
; register long _a1 asm("a1") =(long)(buf2_4);
; register long _a2 asm("a2") =(long)(256);
; register long _a7 asm("a7") =65;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_6=_a0; _ret_6; });
        buf2_4[size_5]=0;
        if(        size_5<=0        ) {
            break;
        }
        buffer_append_str(buf_3,buf2_4);
    }
    puts(((char*)(__right_value2=buffer_to_string(buf_3))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    exit(2);
    come_call_finalizer(buffer_finalize, buf_3, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__1;
void* prev_7;
void* __result_obj__2;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    prev_7=heap_end;
    heap_end+=incr;
    __result_obj__2 = prev_7;
    return __result_obj__2;
}

void* malloc(unsigned long  int size){
void* __result_obj__3;
struct mem_block* current_8;
struct mem_block* prev_9;
void* __result_obj__4;
struct mem_block* new_mem_10;
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
    current_8=free_list;
    prev_9=((void*)0);
    while(    current_8!=((void*)0)    ) {
        if(        current_8->size>=size        ) {
            if(            prev_9==((void*)0)            ) {
                free_list=current_8->next;
            }
            else {
                prev_9->next=current_8->next;
            }
            __result_obj__4 = (void*)(current_8+1);
            return __result_obj__4;
        }
        prev_9=current_8;
        current_8=current_8->next;
    }
    new_mem_10=(struct mem_block*)sbrk(size);
    if(    new_mem_10==(void*)-1    ) {
        __result_obj__5 = ((void*)0);
        return __result_obj__5;
    }
    new_mem_10->size=size;
    new_mem_10->next=((void*)0);
    __result_obj__6 = (void*)(new_mem_10+1);
    return __result_obj__6;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_11;
void* __result_obj__7;
void* ptr_12;
void* __result_obj__8;
    total_size_11=nmemb*size;
    if(    total_size_11==0    ) {
        __result_obj__7 = ((void*)0);
        return __result_obj__7;
    }
    ptr_12=malloc(total_size_11);
    if(    ptr_12!=((void*)0)    ) {
        memset(ptr_12,0,total_size_11);
    }
    __result_obj__8 = ptr_12;
    return __result_obj__8;
}

void free(void* ptr){
struct mem_block* block_13;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_13=(struct mem_block*)ptr-1;
    block_13->next=free_list;
    free_list=block_13;
}

char* strdup(const char* s){
char* s2_14;
unsigned long  int len_15;
char* p_16;
char* __result_obj__9;
    s2_14=s;
    len_15=strlen(s2_14)+1;
    p_16=malloc(len_15);
    if(    p_16    ) {
        memcpy(p_16,s2_14,len_15);
    }
    __result_obj__9 = p_16;
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
        const char* h_17=haystack;
        const char* n_18=needle;
        while(        *h_17&&*n_18&&(*h_17==*n_18)        ) {
            h_17++;
            n_18++;
        }
        if(        !*n_18        ) {
            __result_obj__11 = (char*)haystack;
            return __result_obj__11;
        }
    }
    __result_obj__12 = ((void*)0);
    return __result_obj__12;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_19;
int i_20;
void* __result_obj__13;
    cdst_19=(char*)dst;
    for(    i_20=0    ;    i_20<n    ;    i_20++    ){
        cdst_19[i_20]=c;
    }
    __result_obj__13 = dst;
    return __result_obj__13;
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
void* __result_obj__14;
void* __result_obj__15;
s_23 = (void*)0;
d_24 = (void*)0;
    if(    n==0    ) {
        __result_obj__14 = dst;
        return __result_obj__14;
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
char* os_25;
char* __result_obj__17;
os_25 = (void*)0;
    os_25=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__17 = os_25;
    return __result_obj__17;
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
char* __result_obj__18;
    d_27=dest;
    while(    *d_27    ) {
        d_27++;
    }
    while(    n--&&*src    ) {
        *d_27++=*src++;
    }
    *d_27=0;
    __result_obj__18 = dest;
    return __result_obj__18;
}

char* strtok(char* s, const char* delim){
static char* next_28;
char* start_29;
char* p_30;
char* __result_obj__19;
int is_delim_32;
char* __result_obj__20;
int is_delim_34;
char* __result_obj__21;
next_28 = (void*)0;
start_29 = (void*)0;
p_30 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_28=s;
    }
    if(    next_28==((void*)0)    ) {
        __result_obj__19 = ((void*)0);
        return __result_obj__19;
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
        __result_obj__20 = ((void*)0);
        return __result_obj__20;
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
    __result_obj__21 = start_29;
    return __result_obj__21;
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
char* __result_obj__22;
int digit_39;
char* __result_obj__23;
    p_35=buf;
    char tmp_36[32];
    memset(&tmp_36, 0, sizeof(char)    *(32)    );
    i_37=0;
    negative_38=0;
    if(    base<2||base>16    ) {
        *p_35=0;
        __result_obj__22 = p_35;
        return __result_obj__22;
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
    __result_obj__23 = buf;
    return __result_obj__23;
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

static void va_list_finalize(va_list self){
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_45;
char* p_46;
const char* s_47;
unsigned long  int remaining_49;
int __result_obj__24;
int __result_obj__25;
memset(&ap_45, 0, sizeof(va_list));
s_47 = (void*)0;
    __builtin_c23_va_start(ap_45,fmt);
    p_46=out;
    char buf_48[32];
    memset(&buf_48, 0, sizeof(char)    *(32)    );
    remaining_49=out_size;
    if(    remaining_49==0    ) {
        __builtin_va_end(ap_45);
        __result_obj__24 = 0;
        come_call_finalizer(va_list_finalize, (&ap_45), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__24;
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
    __result_obj__25 = p_46-out;
    come_call_finalizer(va_list_finalize, (&ap_45), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__25;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_50;
char* p_51;
const char* s_52;
unsigned long  int remaining_54;
int __result_obj__26;
int __result_obj__27;
memset(&ap_50, 0, sizeof(va_list));
s_52 = (void*)0;
    __builtin_c23_va_start(ap_50,fmt);
    p_51=out;
    char buf_53[32];
    memset(&buf_53, 0, sizeof(char)    *(32)    );
    remaining_54=out_size;
    if(    remaining_54==0    ) {
        __builtin_va_end(ap_50);
        __result_obj__26 = 0;
        come_call_finalizer(va_list_finalize, (&ap_50), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
        return __result_obj__26;
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
    __result_obj__27 = p_51-out;
    come_call_finalizer(va_list_finalize, (&ap_50), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__27;
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
int __result_obj__28;
memset(&ap_68, 0, sizeof(va_list));
p_69 = (void*)0;
    __builtin_c23_va_start(ap_68,fmt);
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
    __result_obj__28 = 0;
    come_call_finalizer(va_list_finalize, (&ap_68), (void*)0, (void*)0, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    return __result_obj__28;
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
void* __right_value3 = (void*)0;
void* __right_value4 = (void*)0;
struct buffer* buf_81;
int i_82;
void* __right_value5 = (void*)0;
    buf_81=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_81,"%s %d\n",sname,sline);
    for(    i_82=gNumComeStackFrame-2    ;    i_82>=0    ;    i_82--    ){
        buffer_append_format(buf_81,"%s %d #%d\n",gComeStackFrameSName[i_82],gComeStackFrameSLine[i_82],gComeStackFrameID[i_82]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value5=buffer_to_string(buf_81))));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_83;
    for(    i_83=gNumComeStackFrame-1    ;    i_83>=0    ;    i_83--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_83],gComeStackFrameSLine[i_83],gComeStackFrameID[i_83]);
    }
}

char* come_get_stackframe(){
void* __right_value6 = (void*)0;
char* __result_obj__29;
    __result_obj__29 = (char*)come_increment_ref_count(((char*)(__right_value6=__builtin_string(gComeStackFrameBuffer))));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__29 = come_decrement_ref_count(__result_obj__29, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__29;
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
int i_84;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_84=0    ;    i_84<gHeapPages.mSizePages    ;    i_84++    ){
        gHeapPages.mPages[i_84]=calloc(1,sizeof(char)*4096);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*4096);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_85;
int n_86;
_Bool flag_87;
int i_88;
struct sMemHeaderTiny* it_89;
int n_90;
int i_91;
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib    ) {
    }
    else if(    gComeDebugLib    ) {
        it_85=gAllocMem;
        n_86=0;
        while(        it_85        ) {
            n_86++;
            flag_87=(_Bool)0;
            printf("#%d ",n_86);
            if(            it_85->class_name            ) {
                printf("%p (%s): ",(char*)it_85+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_85->class_name);
            }
            for(            i_88=0            ;            i_88<16            ;            i_88++            ){
                if(                it_85->sname[i_88]                ) {
                    printf("%s %d #%d, ",it_85->sname[i_88],it_85->sline[i_88],it_85->id[i_88]);
                    flag_87=(_Bool)1;
                }
            }
            if(            flag_87            ) {
                puts("");
            }
            it_85=it_85->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_86,gNumAlloc,gNumFree);
    }
    else {
        it_89=(struct sMemHeaderTiny*)gAllocMem;
        n_90=0;
        while(        it_89        ) {
            n_90++;
            if(            it_89->class_name            ) {
                printf("#%d %p (%s) %s %d\n",n_90,(char*)it_89+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_89->class_name,it_89->sname,it_89->sline);
            }
            it_89=it_89->next;
        }
        if(        n_90>0        ) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_90,gNumAlloc,gNumFree);
        }
    }
    for(    i_91=0    ;    i_91<gHeapPages.mSizePages    ;    i_91++    ){
        free(gHeapPages.mPages[i_91]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* result_92;
void* __result_obj__30;
    result_92=((void*)0);
    size=(size+7&~7);
    result_92=calloc(1,size);
    __result_obj__30 = result_92;
    return __result_obj__30;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_93;
struct sMemHeader* prev_it_94;
struct sMemHeader* next_it_95;
unsigned long  int size_96;
struct sMemHeaderTiny* it_97;
struct sMemHeaderTiny* prev_it_98;
struct sMemHeaderTiny* next_it_99;
unsigned long  int size_100;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_93=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_93->allocated!=177783            ) {
                return;
            }
            it_93->allocated=0;
            prev_it_94=it_93->prev;
            next_it_95=it_93->next;
            if(            gAllocMem==it_93            ) {
                gAllocMem=next_it_95;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_94                ) {
                    prev_it_94->next=next_it_95;
                }
                if(                next_it_95                ) {
                    next_it_95->prev=prev_it_94;
                }
            }
            size_96=it_93->size;
            free(it_93);
            gNumFree++;
        }
        else {
            it_97=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_97->allocated!=177783            ) {
                return;
            }
            it_97->allocated=0;
            prev_it_98=it_97->prev;
            next_it_99=it_97->next;
            if(            gAllocMem==it_97            ) {
                gAllocMem=(struct sMemHeader*)next_it_99;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_98                ) {
                    prev_it_98->next=next_it_99;
                }
                if(                next_it_99                ) {
                    next_it_99->prev=prev_it_98;
                }
            }
            size_100=it_97->size;
            free(it_97);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_101;
struct sMemHeader* it_102;
int i_103;
int i_104;
void* __result_obj__31;
void* result_105;
struct sMemHeaderTiny* it_106;
void* __result_obj__32;
memset(&i_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_101=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_102=result_101;
        it_102->allocated=177783;
        it_102->size=size+sizeof(struct sMemHeader);
        it_102->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_103=0            ;            i_103<gNumComeStackFrame            ;            i_103++            ){
                it_102->sname[i_103]=gComeStackFrameSName[i_103];
                it_102->sline[i_103]=gComeStackFrameSLine[i_103];
                it_102->id[i_103]=gComeStackFrameID[i_103];
            }
        }
        else {
            for(            i_104=0            ;            i_104<16            ;            i_104++            ){
                it_102->sname[i_104]=gComeStackFrameSName[gNumComeStackFrame-1-i_104];
                it_102->sline[i_104]=gComeStackFrameSLine[gNumComeStackFrame-1-i_104];
                it_102->id[i_104]=gComeStackFrameID[gNumComeStackFrame-1-i_104];
            }
        }
        come_pop_stackframe_v2();
        it_102->next=gAllocMem;
        it_102->prev=((void*)0);
        it_102->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_102;
        }
        gAllocMem=it_102;
        gNumAlloc++;
        __result_obj__31 = (char*)result_101+sizeof(struct sMemHeader);
        return __result_obj__31;
    }
    else {
        result_105=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_106=result_105;
        it_106->allocated=177783;
        it_106->class_name=class_name;
        it_106->sname=sname;
        it_106->sline=sline;
        it_106->size=size+sizeof(struct sMemHeaderTiny);
        it_106->free_next=((void*)0);
        it_106->next=(struct sMemHeaderTiny*)gAllocMem;
        it_106->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_106;
        }
        gAllocMem=(struct sMemHeader*)it_106;
        gNumAlloc++;
        __result_obj__32 = (char*)result_105+sizeof(struct sMemHeaderTiny);
        return __result_obj__32;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_107;
char* __result_obj__33;
struct sMemHeaderTiny* it_108;
char* __result_obj__34;
    if(    gComeDebugLib    ) {
        it_107=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_107->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_107);
            exit(2);
        }
        __result_obj__33 = it_107->class_name;
        return __result_obj__33;
    }
    else {
        it_108=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_108->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_108);
            exit(2);
        }
        __result_obj__34 = it_108->class_name;
        return __result_obj__34;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_109;
int i_110;
struct sMemHeaderTiny* it_111;
    if(    gComeDebugLib    ) {
        it_109=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_109->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_109->class_name        ) {
            printf("(%s): ",it_109->class_name);
        }
        for(        i_110=0        ;        i_110<16        ;        i_110++        ){
            if(            it_109->sname[i_110]            ) {
                printf("%s %d #%d, ",it_109->sname[i_110],it_109->sline[i_110],it_109->id[i_110]);
            }
        }
        puts("");
    }
    else {
        it_111=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_111->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_111->class_name,it_111->sname,it_111->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_112;
unsigned long  int* ref_count_113;
unsigned long  int* size2_114;
void* __result_obj__35;
    mem_112=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_113=(unsigned long  int*)mem_112;
    *ref_count_113=0;
    size2_114=(unsigned long  int*)(mem_112+sizeof(unsigned long  int));
    *size2_114=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__35 = mem_112+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__35;
}

void come_free(void* mem){
unsigned long  int* ref_count_115;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_115=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_115);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__36;
char* mem_116;
unsigned long  int* size_p_117;
unsigned long  int size_118;
void* result_119;
void* __result_obj__37;
    if(    !block    ) {
        __result_obj__36 = ((void*)0);
        return __result_obj__36;
    }
    mem_116=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_117=(unsigned long  int*)(mem_116+sizeof(unsigned long  int));
    size_118=*size_p_117-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_119=come_calloc_v2(1,size_118,sname,sline,class_name);
    memcpy(result_119,block,size_118);
    __result_obj__37 = result_119;
    return __result_obj__37;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__38;
unsigned long  int* ref_count_120;
void* __result_obj__39;
    if(    mem==((void*)0)    ) {
        __result_obj__38 = mem;
        return __result_obj__38;
    }
    ref_count_120=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_120)++;
    __result_obj__39 = mem;
    return __result_obj__39;
}

void* come_print_ref_count(void* mem){
void* __result_obj__40;
unsigned long  int* ref_count_121;
void* __result_obj__41;
    if(    mem==((void*)0)    ) {
        __result_obj__40 = mem;
        return __result_obj__40;
    }
    ref_count_121=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_121);
    __result_obj__41 = mem;
    return __result_obj__41;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_122;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_122=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_122;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__42;
void* __result_obj__43;
unsigned long  int* ref_count_123;
unsigned long  int count_124;
void (*finalizer_125)(void*);
void* __result_obj__44;
void* __result_obj__45;
memset(&finalizer_125, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__42 = mem;
            return __result_obj__42;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__43 = ((void*)0);
        return __result_obj__43;
    }
    ref_count_123=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_123)--;
    }
    count_124=*ref_count_123;
    if(    !no_free&&count_124<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_125=protocol_fun;
            finalizer_125(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__44 = ((void*)0);
        return __result_obj__44;
    }
    __result_obj__45 = mem;
    return __result_obj__45;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_126)(void*);
void (*finalizer_127)(void*);
void (*finalizer_128)(void*);
unsigned long  int* ref_count_129;
unsigned long  int count_130;
void (*finalizer_131)(void*);
void (*finalizer_132)(void*);
void (*finalizer_133)(void*);
memset(&finalizer_126, 0, sizeof(void (*)(void*)));
memset(&finalizer_127, 0, sizeof(void (*)(void*)));
memset(&finalizer_128, 0, sizeof(void (*)(void*)));
memset(&finalizer_131, 0, sizeof(void (*)(void*)));
memset(&finalizer_132, 0, sizeof(void (*)(void*)));
memset(&finalizer_133, 0, sizeof(void (*)(void*)));
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
                finalizer_126=protocol_fun;
                finalizer_126(protocol_obj);
            }
            finalizer_127=fun;
            finalizer_127(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_128=protocol_fun;
                finalizer_128(protocol_obj);
            }
        }
    }
    else {
        ref_count_129=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_129)--;
        }
        count_130=*ref_count_129;
        if(        !no_free&&count_130<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_131=protocol_fun;
                        finalizer_131(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_132=fun;
                        finalizer_132(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_133=protocol_fun;
                        finalizer_133(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__46;
int len_134;
void* __right_value7 = (void*)0;
char* result_135;
char* __result_obj__47;
    if(    str==((void*)0)    ) {
        __result_obj__46 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__46 = come_decrement_ref_count(__result_obj__46, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__46;
    }
    len_134=strlen(str)+1;
    result_135=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_134)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_135,str,len_134);
    __result_obj__47 = (char*)come_increment_ref_count(result_135);
    (result_135 = come_decrement_ref_count(result_135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__47 = come_decrement_ref_count(__result_obj__47, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__47;
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
void* __right_value8 = (void*)0;
char* __result_obj__48;
    __result_obj__48 = (char*)come_increment_ref_count(((char*)(__right_value8=come_get_stackframe())));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__48 = come_decrement_ref_count(__result_obj__48, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__48;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__49;
    __result_obj__49 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__49;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value9 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__50;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2885, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__50 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value10 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__51;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2895, "char*"));
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result_obj__51 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__51, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__51;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf    ) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

struct buffer* buffer_clone(struct buffer* self){
struct buffer* __result_obj__52;
void* __right_value11 = (void*)0;
struct buffer* result_136;
void* __right_value12 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__53;
    if(    self==((void*)0)    ) {
        __result_obj__52 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__52, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__52;
    }
    result_136=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2915, "struct buffer*"));
    result_136->size=self->size;
    __dec_obj3=result_136->buf,
    result_136->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2918, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_136->len=self->len;
    memcpy(result_136->buf,self->buf,self->len);
    __result_obj__53 = (struct buffer*)come_increment_ref_count(result_136);
    come_call_finalizer(buffer_finalize, result_136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__53, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__53;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
_Bool __result_obj__54;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__54 = string_equals(((char*)(__right_value13=buffer_to_string(left))),((char*)(__right_value14=buffer_to_string(right))));
    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__54;
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
struct buffer* __result_obj__55;
void* __right_value15 = (void*)0;
char* old_buf_137;
int old_len_138;
int new_size_139;
void* __right_value16 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_137=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2966, "char*"));
        memcpy(old_buf_137,self->buf,self->size);
        old_len_138=self->len;
        new_size_139=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_139)), "/usr/local/include/comelang.h", 2970, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_137,old_len_138);
        self->buf[old_len_138]=0;
        self->size=new_size_139;
        (old_buf_137 = come_decrement_ref_count(old_buf_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__56 = self;
    return __result_obj__56;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__57;
void* __right_value17 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value18 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__58;
    if(    self==((void*)0)    ) {
        __result_obj__57 = ((void*)0);
        return __result_obj__57;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2989, "char*"));
        old_len_141=self->len;
        new_size_142=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 2993, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__58 = self;
    return __result_obj__58;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__59;
int size_143;
void* __right_value19 = (void*)0;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* __right_value20 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__60;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__59 = self;
        return __result_obj__59;
    }
    size_143=strlen(mem);
    if(    self->len+size_143+1+1>=self->size    ) {
        old_buf_144=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3015, "char*"));
        memcpy(old_buf_144,self->buf,self->size);
        old_len_145=self->len;
        new_size_146=(self->size+size_143+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_146)), "/usr/local/include/comelang.h", 3019, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        (old_buf_144 = come_decrement_ref_count(old_buf_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_143);
    self->len+=size_143;
    self->buf[self->len]=0;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__61;
va_list args_147;
char* result_148;
int len_149;
struct buffer* __result_obj__62;
void* __right_value21 = (void*)0;
char* mem_150;
int size_151;
void* __right_value22 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value23 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__63;
result_148 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    __builtin_c23_va_start(args_147,msg);
    len_149=vasprintf(&result_148,msg,args_147);
    __builtin_va_end(args_147);
    if(    len_149<0    ) {
        __result_obj__62 = self;
        return __result_obj__62;
    }
    mem_150=(char*)come_increment_ref_count(__builtin_string(result_148));
    size_151=strlen(mem_150);
    if(    self->len+size_151+1+1>=self->size    ) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3063, "char*"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3067, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_150,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    free(result_148);
    __result_obj__63 = self;
    (mem_150 = come_decrement_ref_count(mem_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__63;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__64;
int size_155;
void* __right_value24 = (void*)0;
char* old_buf_156;
int old_len_157;
int new_size_158;
void* __right_value25 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__65;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__64 = self;
        return __result_obj__64;
    }
    size_155=strlen(mem)+1;
    if(    self->len+size_155+1+1+1>=self->size    ) {
        old_buf_156=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3089, "char*"));
        memcpy(old_buf_156,self->buf,self->size);
        old_len_157=self->len;
        new_size_158=(self->size+size_155+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_158)), "/usr/local/include/comelang.h", 3093, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_156,old_len_157);
        self->buf[old_len_157]=0;
        self->size=new_size_158;
        (old_buf_156 = come_decrement_ref_count(old_buf_156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_155);
    self->len+=size_155;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__66;
int* mem_159;
int size_160;
void* __right_value26 = (void*)0;
char* old_buf_161;
int old_len_162;
int new_size_163;
void* __right_value27 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    mem_159=&value;
    size_160=sizeof(int);
    if(    self->len+size_160+1+1>=self->size    ) {
        old_buf_161=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3116, "char*"));
        memcpy(old_buf_161,self->buf,self->size);
        old_len_162=self->len;
        new_size_163=(self->size+size_160+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3120, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_161,old_len_162);
        self->buf[old_len_162]=0;
        self->size=new_size_163;
        (old_buf_161 = come_decrement_ref_count(old_buf_161, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_159,size_160);
    self->len+=size_160;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_164;
int size_165;
void* __right_value28 = (void*)0;
char* old_buf_166;
int old_len_167;
int new_size_168;
void* __right_value29 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__68;
    mem_164=&value;
    size_165=sizeof(long);
    if(    self->len+size_165+1+1>=self->size    ) {
        old_buf_166=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3139, "char*"));
        memcpy(old_buf_166,self->buf,self->size);
        old_len_167=self->len;
        new_size_168=(self->size+size_165+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_168)), "/usr/local/include/comelang.h", 3143, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_166,old_len_167);
        self->buf[old_len_167]=0;
        self->size=new_size_168;
        (old_buf_166 = come_decrement_ref_count(old_buf_166, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_164,size_165);
    self->len+=size_165;
    self->buf[self->len]=0;
    __result_obj__68 = self;
    return __result_obj__68;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__69;
short* mem_169;
int size_170;
void* __right_value30 = (void*)0;
char* old_buf_171;
int old_len_172;
int new_size_173;
void* __right_value31 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__70;
    if(    self==((void*)0)    ) {
        __result_obj__69 = ((void*)0);
        return __result_obj__69;
    }
    mem_169=&value;
    size_170=sizeof(short);
    if(    self->len+size_170+1+1>=self->size    ) {
        old_buf_171=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3166, "char*"));
        memcpy(old_buf_171,self->buf,self->size);
        old_len_172=self->len;
        new_size_173=(self->size+size_170+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_173)), "/usr/local/include/comelang.h", 3170, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_171,old_len_172);
        self->buf[old_len_172]=0;
        self->size=new_size_173;
        (old_buf_171 = come_decrement_ref_count(old_buf_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_169,size_170);
    self->len+=size_170;
    self->buf[self->len]=0;
    __result_obj__70 = self;
    return __result_obj__70;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__71;
int len_174;
int new_size_175;
void* __right_value32 = (void*)0;
char* __dec_obj12;
int i_176;
struct buffer* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = ((void*)0);
        return __result_obj__71;
    }
    len_174=self->len;
    len_174=(len_174+3)&~3;
    if(    len_174>=self->size    ) {
        new_size_175=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_175)), "/usr/local/include/comelang.h", 3194, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_175;
    }
    for(    i_176=self->len    ;    i_176<len_174    ;    i_176++    ){
        self->buf[i_176]=0;
    }
    self->len=len_174;
    __result_obj__72 = self;
    return __result_obj__72;
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
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_177;
struct buffer* __result_obj__73;
struct buffer* __result_obj__74;
    result_177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3224, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__73 = (struct buffer*)come_increment_ref_count(result_177);
        come_call_finalizer(buffer_finalize, result_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__73;
    }
    buffer_append_str(result_177,self);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_177);
    come_call_finalizer(buffer_finalize, result_177, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

char* buffer_to_string(struct buffer* self){
void* __right_value35 = (void*)0;
char* __result_obj__75;
void* __right_value36 = (void*)0;
char* __result_obj__76;
    if(    self==((void*)0)    ) {
        __result_obj__75 = (char*)come_increment_ref_count(((char*)(__right_value35=__builtin_string(""))));
        (__right_value35 = come_decrement_ref_count(__right_value35, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__75 = come_decrement_ref_count(__result_obj__75, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__75;
    }
    __result_obj__76 = (char*)come_increment_ref_count(((char*)(__right_value36=__builtin_string(self->buf))));
    (__right_value36 = come_decrement_ref_count(__right_value36, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__76 = come_decrement_ref_count(__result_obj__76, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__76;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__77;
    __result_obj__77 = self->buf;
    return __result_obj__77;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_178;
struct buffer* __result_obj__78;
    result_178=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3251, "struct buffer*"))));
    buffer_append(result_178,self,sizeof(char)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_178);
    come_call_finalizer(buffer_finalize, result_178, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_179;
int i_180;
struct buffer* __result_obj__79;
    result_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3258, "struct buffer*"))));
    for(    i_180=0    ;    i_180<len    ;    i_180++    ){
        buffer_append(result_179,self[i_180],strlen(self[i_180]));
    }
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_179);
    come_call_finalizer(buffer_finalize, result_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_181;
struct buffer* __result_obj__80;
    result_181=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_181,(char*)self,sizeof(short)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_181);
    come_call_finalizer(buffer_finalize, result_181, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_182;
struct buffer* __result_obj__81;
    result_182=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_182,(char*)self,sizeof(int)*len);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_182);
    come_call_finalizer(buffer_finalize, result_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_183;
struct buffer* __result_obj__82;
    result_183=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_183,(char*)self,sizeof(long)*len);
    __result_obj__82 = (struct buffer*)come_increment_ref_count(result_183);
    come_call_finalizer(buffer_finalize, result_183, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_184;
struct buffer* __result_obj__83;
    result_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    buffer_append(result_184,(char*)self,sizeof(float)*len);
    __result_obj__83 = (struct buffer*)come_increment_ref_count(result_184);
    come_call_finalizer(buffer_finalize, result_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* result_185;
struct buffer* __result_obj__84;
    result_185=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3295, "struct buffer*"))));
    buffer_append(result_185,(char*)self,sizeof(double)*len);
    __result_obj__84 = (struct buffer*)come_increment_ref_count(result_185);
    come_call_finalizer(buffer_finalize, result_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

char* buffer_printable(struct buffer* self){
int len_186;
void* __right_value51 = (void*)0;
char* result_187;
int n_188;
int i_189;
unsigned char c_190;
char* __result_obj__85;
    len_186=self->len;
    result_187=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_186*2+1)), "/usr/local/include/comelang.h", 3303, "char*"));
    n_188=0;
    for(    i_189=0    ;    i_189<len_186    ;    i_189++    ){
        c_190=self->buf[i_189];
        if(        (c_190>=0&&c_190<32)||c_190==127        ) {
            result_187[n_188++]=94;
            result_187[n_188++]=c_190+65-1;
        }
        else if(        c_190>127        ) {
            result_187[n_188++]=63;
        }
        else {
            result_187[n_188++]=c_190;
        }
    }
    result_187[n_188]=0;
    __result_obj__85 = (char*)come_increment_ref_count(result_187);
    (result_187 = come_decrement_ref_count(result_187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__85 = come_decrement_ref_count(__result_obj__85, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__85;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_191;
struct list$1char$* __result_obj__87;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_191=0    ;    i_191<num_value    ;    i_191++    ){
        list$1char$_push_back(self,values[i_191]);
    }
    __result_obj__87 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_192;
void* __right_value54 = (void*)0;
struct list_item$1char$* litem_193;
void* __right_value55 = (void*)0;
struct list_item$1char$* litem_194;
struct list$1char$* __result_obj__86;
    if(    self->len==0    ) {
        litem_192=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$*"))));
        litem_192->prev=((void*)0);
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head=litem_192;
    }
    else if(    self->len==1    ) {
        litem_193=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value54=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$*"))));
        litem_193->prev=self->head;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head->next=litem_193;
    }
    else {
        litem_194=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value55=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$*"))));
        litem_194->prev=self->tail;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail->next=litem_194;
        self->tail=litem_194;
    }
    self->len++;
    __result_obj__86 = self;
    return __result_obj__86;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_195;
struct list_item$1char$* prev_it_196;
    it_195=self->head;
    while(    it_195!=((void*)0)    ) {
        prev_it_196=it_195;
        it_195=it_195->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value52 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1char$* __result_obj__88;
    __result_obj__88 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value56=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_197;
struct list$1char$p* __result_obj__90;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_197=0    ;    i_197<num_value    ;    i_197++    ){
        list$1char$p_push_back(self,values[i_197]);
    }
    __result_obj__90 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_198;
void* __right_value59 = (void*)0;
struct list_item$1char$p* litem_199;
void* __right_value60 = (void*)0;
struct list_item$1char$p* litem_200;
struct list$1char$p* __result_obj__89;
    if(    self->len==0    ) {
        litem_198=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$p*"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head=litem_198;
    }
    else if(    self->len==1    ) {
        litem_199=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value59=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$p*"))));
        litem_199->prev=self->head;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head->next=litem_199;
    }
    else {
        litem_200=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value60=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_200->prev=self->tail;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail->next=litem_200;
        self->tail=litem_200;
    }
    self->len++;
    __result_obj__89 = self;
    return __result_obj__89;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_201;
struct list_item$1char$p* prev_it_202;
    it_201=self->head;
    while(    it_201!=((void*)0)    ) {
        prev_it_202=it_201;
        it_201=it_201->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char$p* __result_obj__91;
    __result_obj__91 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value61=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_203;
struct list$1short$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_203=0    ;    i_203<num_value    ;    i_203++    ){
        list$1short$_push_back(self,values[i_203]);
    }
    __result_obj__93 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_204;
void* __right_value64 = (void*)0;
struct list_item$1short$* litem_205;
void* __right_value65 = (void*)0;
struct list_item$1short$* litem_206;
struct list$1short$* __result_obj__92;
    if(    self->len==0    ) {
        litem_204=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1short$*"))));
        litem_204->prev=((void*)0);
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head=litem_204;
    }
    else if(    self->len==1    ) {
        litem_205=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value64=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1short$*"))));
        litem_205->prev=self->head;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head->next=litem_205;
    }
    else {
        litem_206=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value65=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1short$*"))));
        litem_206->prev=self->tail;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail->next=litem_206;
        self->tail=litem_206;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_207;
struct list_item$1short$* prev_it_208;
    it_207=self->head;
    while(    it_207!=((void*)0)    ) {
        prev_it_208=it_207;
        it_207=it_207->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1short$* __result_obj__94;
    __result_obj__94 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value66=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3354, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_209;
struct list$1int$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_209=0    ;    i_209<num_value    ;    i_209++    ){
        list$1int$_push_back(self,values[i_209]);
    }
    __result_obj__96 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_210;
void* __right_value69 = (void*)0;
struct list_item$1int$* litem_211;
void* __right_value70 = (void*)0;
struct list_item$1int$* litem_212;
struct list$1int$* __result_obj__95;
    if(    self->len==0    ) {
        litem_210=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1int$*"))));
        litem_210->prev=((void*)0);
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head=litem_210;
    }
    else if(    self->len==1    ) {
        litem_211=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value69=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1int$*"))));
        litem_211->prev=self->head;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head->next=litem_211;
    }
    else {
        litem_212=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value70=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1int$*"))));
        litem_212->prev=self->tail;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail->next=litem_212;
        self->tail=litem_212;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_213;
struct list_item$1int$* prev_it_214;
    it_213=self->head;
    while(    it_213!=((void*)0)    ) {
        prev_it_214=it_213;
        it_213=it_213->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1int$* __result_obj__97;
    __result_obj__97 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value71=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3359, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_215;
struct list$1long$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_215=0    ;    i_215<num_value    ;    i_215++    ){
        list$1long$_push_back(self,values[i_215]);
    }
    __result_obj__99 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_216;
void* __right_value74 = (void*)0;
struct list_item$1long$* litem_217;
void* __right_value75 = (void*)0;
struct list_item$1long$* litem_218;
struct list$1long$* __result_obj__98;
    if(    self->len==0    ) {
        litem_216=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1long$*"))));
        litem_216->prev=((void*)0);
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head=litem_216;
    }
    else if(    self->len==1    ) {
        litem_217=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value74=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1long$*"))));
        litem_217->prev=self->head;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head->next=litem_217;
    }
    else {
        litem_218=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value75=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1long$*"))));
        litem_218->prev=self->tail;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail->next=litem_218;
        self->tail=litem_218;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_219;
struct list_item$1long$* prev_it_220;
    it_219=self->head;
    while(    it_219!=((void*)0)    ) {
        prev_it_220=it_219;
        it_219=it_219->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1long$* __result_obj__100;
    __result_obj__100 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value76=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3364, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_221;
struct list$1float$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_221=0    ;    i_221<num_value    ;    i_221++    ){
        list$1float$_push_back(self,values[i_221]);
    }
    __result_obj__102 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_222;
void* __right_value79 = (void*)0;
struct list_item$1float$* litem_223;
void* __right_value80 = (void*)0;
struct list_item$1float$* litem_224;
struct list$1float$* __result_obj__101;
    if(    self->len==0    ) {
        litem_222=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1float$*"))));
        litem_222->prev=((void*)0);
        litem_222->next=((void*)0);
        litem_222->item=item;
        self->tail=litem_222;
        self->head=litem_222;
    }
    else if(    self->len==1    ) {
        litem_223=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value79=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1float$*"))));
        litem_223->prev=self->head;
        litem_223->next=((void*)0);
        litem_223->item=item;
        self->tail=litem_223;
        self->head->next=litem_223;
    }
    else {
        litem_224=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value80=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1float$*"))));
        litem_224->prev=self->tail;
        litem_224->next=((void*)0);
        litem_224->item=item;
        self->tail->next=litem_224;
        self->tail=litem_224;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_225;
struct list_item$1float$* prev_it_226;
    it_225=self->head;
    while(    it_225!=((void*)0)    ) {
        prev_it_226=it_225;
        it_225=it_225->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_226, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1float$* __result_obj__103;
    __result_obj__103 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value81=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3369, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_227;
struct list$1double$* __result_obj__105;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_227=0    ;    i_227<num_value    ;    i_227++    ){
        list$1double$_push_back(self,values[i_227]);
    }
    __result_obj__105 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__105, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__105;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_228;
void* __right_value84 = (void*)0;
struct list_item$1double$* litem_229;
void* __right_value85 = (void*)0;
struct list_item$1double$* litem_230;
struct list$1double$* __result_obj__104;
    if(    self->len==0    ) {
        litem_228=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1double$*"))));
        litem_228->prev=((void*)0);
        litem_228->next=((void*)0);
        litem_228->item=item;
        self->tail=litem_228;
        self->head=litem_228;
    }
    else if(    self->len==1    ) {
        litem_229=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value84=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1double$*"))));
        litem_229->prev=self->head;
        litem_229->next=((void*)0);
        litem_229->item=item;
        self->tail=litem_229;
        self->head->next=litem_229;
    }
    else {
        litem_230=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value85=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1double$*"))));
        litem_230->prev=self->tail;
        litem_230->next=((void*)0);
        litem_230->item=item;
        self->tail->next=litem_230;
        self->tail=litem_230;
    }
    self->len++;
    __result_obj__104 = self;
    return __result_obj__104;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_231;
struct list_item$1double$* prev_it_232;
    it_231=self->head;
    while(    it_231!=((void*)0)    ) {
        prev_it_232=it_231;
        it_231=it_231->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_232, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1double$* __result_obj__106;
    __result_obj__106 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value86=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value86, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__106, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__106;
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
void* __right_value87 = (void*)0;
char* __result_obj__107;
int len_233;
void* __right_value88 = (void*)0;
char* result_234;
char* __result_obj__108;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    len_233=strlen(self)+strlen(right);
    result_234=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_233+1)), "/usr/local/include/comelang.h", 3603, "char*"));
    strncpy(result_234,self,len_233+1);
    strncat(result_234,right,len_233+1);
    __result_obj__108 = (char*)come_increment_ref_count(result_234);
    (result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_add(char* self, char* right){
void* __right_value89 = (void*)0;
char* __result_obj__109;
int len_235;
void* __right_value90 = (void*)0;
char* result_236;
char* __result_obj__110;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    len_235=strlen(self)+strlen(right);
    result_236=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_235+1)), "/usr/local/include/comelang.h", 3618, "char*"));
    strncpy(result_236,self,len_235+1);
    strncat(result_236,right,len_235+1);
    __result_obj__110 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

char* charp_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__111;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_237;
int i_238;
void* __right_value94 = (void*)0;
char* __result_obj__112;
    if(    self==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    buf_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_238=0    ;    i_238<right    ;    i_238++    ){
        buffer_append_str(buf_237,self);
    }
    __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_237))));
    come_call_finalizer(buffer_finalize, buf_237, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* string_operator_mult(char* self, int right){
void* __right_value95 = (void*)0;
char* __result_obj__113;
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct buffer* buf_239;
int i_240;
void* __right_value98 = (void*)0;
char* __result_obj__114;
    if(    self==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    buf_239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3645, "struct buffer*"))));
    for(    i_240=0    ;    i_240<right    ;    i_240++    ){
        buffer_append_str(buf_239,self);
    }
    __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value98=buffer_to_string(buf_239))));
    come_call_finalizer(buffer_finalize, buf_239, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__114;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_241;
int i_242;
    result_241=(_Bool)0;
    for(    i_242=0    ;    i_242<len    ;    i_242++    ){
        if(        strncmp(self[i_242],str,strlen(self[i_242]))==0        ) {
            result_241=(_Bool)1;
            break;
        }
    }
    return result_241;
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
int result_243;
char* p_244;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_243=0;
    p_244=value;
    while(    *p_244    ) {
        result_243+=(*p_244);
        p_244++;
    }
    return result_243;
}

unsigned int string_get_hash_key(char* value){
int result_245;
char* p_246;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_245=0;
    p_246=value;
    while(    *p_246    ) {
        result_245+=(*p_246);
        p_246++;
    }
    return result_245;
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
_Bool result_247;
    result_247=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_247;
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
_Bool result_248;
    result_248=(c>=32&&c<=126);
    return result_248;
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
void* __right_value99 = (void*)0;
char* __result_obj__115;
int len_249;
void* __right_value100 = (void*)0;
char* result_250;
int i_251;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    len_249=strlen(str);
    result_250=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_249+1)), "/usr/local/include/comelang.h", 3913, "char*"));
    for(    i_251=0    ;    i_251<len_249    ;    i_251++    ){
        result_250[i_251]=str[len_249-i_251-1];
    }
    result_250[len_249]=0;
    __result_obj__116 = (char*)come_increment_ref_count(result_250);
    (result_250 = come_decrement_ref_count(result_250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value101 = (void*)0;
char* __result_obj__117;
int len_252;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
char* __result_obj__118;
void* __right_value104 = (void*)0;
char* __result_obj__119;
void* __right_value105 = (void*)0;
char* __result_obj__120;
void* __right_value106 = (void*)0;
char* result_253;
char* __result_obj__121;
    if(    str==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    len_252=strlen(str);
    if(    head<0    ) {
        head+=len_252;
    }
    if(    tail<0    ) {
        tail+=len_252+1;
    }
    if(    head>tail    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value103=charp_reverse(((char*)(__right_value102=charp_substring(str,tail,head)))))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_252    ) {
        tail=len_252;
    }
    if(    head==tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value104=__builtin_string(""))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    tail-head+1<1    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    result_253=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3959, "char*"));
    memcpy(result_253,str+head,tail-head);
    result_253[tail-head]=0;
    __result_obj__121 = (char*)come_increment_ref_count(result_253);
    (result_253 = come_decrement_ref_count(result_253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value107 = (void*)0;
char* __result_obj__122;
int len_254;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
char* __result_obj__123;
void* __right_value110 = (void*)0;
char* __result_obj__124;
void* __right_value111 = (void*)0;
char* __result_obj__125;
void* __right_value112 = (void*)0;
char* result_255;
char* __result_obj__126;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_254=strlen(str);
    if(    head<0    ) {
        head+=len_254;
    }
    if(    tail<0    ) {
        tail+=len_254+1;
    }
    if(    head>tail    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value109=charp_reverse(((char*)(__right_value108=charp_substring(str,tail,head)))))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_254    ) {
        tail=len_254;
    }
    if(    head==tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value110=__builtin_string(""))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    tail-head+1<1    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result_255=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4002, "char*"));
    memcpy(result_255,str+head,tail-head);
    result_255[tail-head]=0;
    __result_obj__126 = (char*)come_increment_ref_count(result_255);
    (result_255 = come_decrement_ref_count(result_255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value113 = (void*)0;
char* __result_obj__127;
int len_256;
void* __right_value114 = (void*)0;
void* __right_value115 = (void*)0;
char* __result_obj__128;
void* __right_value116 = (void*)0;
char* __result_obj__129;
void* __right_value117 = (void*)0;
char* __result_obj__130;
void* __right_value118 = (void*)0;
char* result_257;
char* __result_obj__131;
    if(    str==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    len_256=strlen(str);
    if(    head<0    ) {
        head+=len_256;
    }
    if(    tail<0    ) {
        tail+=len_256+1;
    }
    if(    head>tail    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value115=charp_reverse(((char*)(__right_value114=charp_substring(str,tail,head)))))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_256    ) {
        tail=len_256;
    }
    if(    head==tail    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    if(    tail-head+1<1    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    result_257=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4045, "char*"));
    memcpy(result_257,str+head,tail-head);
    result_257[tail-head]=0;
    __result_obj__131 = (char*)come_increment_ref_count(result_257);
    (result_257 = come_decrement_ref_count(result_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

char* xsprintf(char* msg, ...){
void* __right_value119 = (void*)0;
char* __result_obj__132;
va_list args_258;
char* result_259;
int len_260;
void* __right_value120 = (void*)0;
char* __result_obj__133;
void* __right_value121 = (void*)0;
char* result2_261;
char* __result_obj__134;
result_259 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(""))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    __builtin_c23_va_start(args_258,msg);
    len_260=vasprintf(&result_259,msg,args_258);
    __builtin_va_end(args_258);
    if(    len_260<0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    result2_261=(char*)come_increment_ref_count(__builtin_string(result_259));
    free(result_259);
    __result_obj__134 = (char*)come_increment_ref_count(result2_261);
    (result2_261 = come_decrement_ref_count(result2_261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__134;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value122 = (void*)0;
char* __result_obj__135;
int len_262;
void* __right_value123 = (void*)0;
char* __result_obj__136;
void* __right_value124 = (void*)0;
char* __result_obj__137;
void* __right_value125 = (void*)0;
char* result_263;
char* __result_obj__138;
    if(    str==((void*)0)    ) {
        __result_obj__135 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(""))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__135;
    }
    len_262=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(str))));
        (__right_value123 = come_decrement_ref_count(__right_value123, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__136;
    }
    if(    head<0    ) {
        head+=len_262;
    }
    if(    tail<0    ) {
        tail+=len_262+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__137 = (char*)come_increment_ref_count(((char*)(__right_value124=__builtin_string(str))));
        (__right_value124 = come_decrement_ref_count(__right_value124, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__137 = come_decrement_ref_count(__result_obj__137, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__137;
    }
    if(    tail>=len_262    ) {
        tail=len_262;
    }
    result_263=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_262-(tail-head)+1)), "/usr/local/include/comelang.h", 4107, "char*"));
    memcpy(result_263,str,head);
    memcpy(result_263+head,str+tail,len_262-tail);
    result_263[len_262-(tail-head)]=0;
    __result_obj__138 = (char*)come_increment_ref_count(result_263);
    (result_263 = come_decrement_ref_count(result_263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__139;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__139 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_264;
struct list_item$1char$ph* prev_it_265;
    it_264=self->head;
    while(    it_264!=((void*)0)    ) {
        prev_it_265=it_264;
        it_264=it_264->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_269;
char* __dec_obj13;
void* __right_value133 = (void*)0;
struct list_item$1char$ph* litem_270;
char* __dec_obj14;
void* __right_value134 = (void*)0;
struct list_item$1char$ph* litem_271;
char* __dec_obj15;
struct list$1char$ph* __result_obj__141;
    if(    self->len==0    ) {
        litem_269=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_269->prev=((void*)0);
        litem_269->next=((void*)0);
        __dec_obj13=litem_269->item,
        litem_269->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_269;
        self->head=litem_269;
    }
    else if(    self->len==1    ) {
        litem_270=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value133=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_270->prev=self->head;
        litem_270->next=((void*)0);
        __dec_obj14=litem_270->item,
        litem_270->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_270;
        self->head->next=litem_270;
    }
    else {
        litem_271=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value134=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_271->prev=self->tail;
        litem_271->next=((void*)0);
        __dec_obj15=litem_271->item,
        litem_271->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_271;
        self->tail=litem_271;
    }
    self->len++;
    __result_obj__141 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__141;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* __result_obj__140;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct list$1char$ph* result_266;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct buffer* str_267;
int i_268;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1char$ph* __result_obj__142;
    if(    self==((void*)0)    ) {
        __result_obj__140 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value127=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4120, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value127, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__140, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__140;
    }
    result_266=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4123, "struct list$1char$ph*"))));
    str_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4125, "struct buffer*"))));
    for(    i_268=0    ;    i_268<charp_length(self)    ;    i_268++    ){
        if(        self[i_268]==c        ) {
            list$1char$ph_push_back(result_266,(char*)come_increment_ref_count(__builtin_string(str_267->buf)));
            buffer_reset(str_267);
        }
        else {
            buffer_append_char(str_267,self[i_268]);
        }
    }
    if(    buffer_length(str_267)!=0    ) {
        list$1char$ph_push_back(result_266,(char*)come_increment_ref_count(__builtin_string(str_267->buf)));
    }
    __result_obj__142 = (struct list$1char$ph*)come_increment_ref_count(result_266);
    come_call_finalizer(list$1char$ph$p_finalize, result_266, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_267, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__142, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__142;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value137 = (void*)0;
char* __result_obj__143;
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value137=xsprintf(msg,self))));
    (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value138 = (void*)0;
char* __result_obj__144;
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value138=xsprintf(msg,self))));
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* charp_printable(char* str){
int len_272;
void* __right_value139 = (void*)0;
char* result_273;
int n_274;
int i_275;
char c_276;
char* __result_obj__145;
    len_272=charp_length(str);
    result_273=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_272*2+1)), "/usr/local/include/comelang.h", 4157, "char*"));
    n_274=0;
    for(    i_275=0    ;    i_275<len_272    ;    i_275++    ){
        c_276=str[i_275];
        if(        (c_276>=0&&c_276<32)||c_276==127        ) {
            result_273[n_274++]=94;
            result_273[n_274++]=c_276+65-1;
        }
        else {
            result_273[n_274++]=c_276;
        }
    }
    result_273[n_274]=0;
    __result_obj__145 = (char*)come_increment_ref_count(result_273);
    (result_273 = come_decrement_ref_count(result_273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__145;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value140 = (void*)0;
char* __result_obj__146;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct buffer* result_277;
char* p_278;
char* p2_279;
void* __right_value143 = (void*)0;
char* __result_obj__147;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(self))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    result_277=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4185, "struct buffer*"))));
    p_278=self;
    while(    (_Bool)1    ) {
        p2_279=strstr(p_278,str);
        if(        p2_279==((void*)0)        ) {
            p2_279=p_278;
            while(            *p2_279            ) {
                p2_279++;
            }
            buffer_append(result_277,p_278,p2_279-p_278);
            break;
        }
        buffer_append(result_277,p_278,p2_279-p_278);
        buffer_append_str(result_277,replace);
        p_278=p2_279+strlen(str);
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value143=buffer_to_string(result_277))));
    come_call_finalizer(buffer_finalize, result_277, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xbasename(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__148;
char* p_280;
void* __right_value145 = (void*)0;
char* __result_obj__149;
void* __right_value146 = (void*)0;
char* __result_obj__150;
void* __right_value147 = (void*)0;
char* __result_obj__151;
    if(    path==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    p_280=path+strlen(path);
    while(    p_280>=path    ) {
        if(        *p_280==47        ) {
            break;
        }
        else {
            p_280--;
        }
    }
    if(    p_280<path    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(path))));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(p_280+1))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* xnoextname(char* path){
void* __right_value148 = (void*)0;
char* __result_obj__152;
void* __right_value149 = (void*)0;
char* path2_281;
char* p_282;
void* __right_value150 = (void*)0;
char* __result_obj__153;
void* __right_value151 = (void*)0;
char* __result_obj__154;
void* __right_value152 = (void*)0;
char* __result_obj__155;
    if(    path==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    path2_281=(char*)come_increment_ref_count(xbasename(path));
    p_282=path2_281+strlen(path2_281);
    while(    p_282>=path2_281    ) {
        if(        *p_282==46        ) {
            break;
        }
        else {
            p_282--;
        }
    }
    if(    p_282<path2_281    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(path2_281))));
        (path2_281 = come_decrement_ref_count(path2_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value151=charp_substring(path2_281,0,p_282-path2_281))));
        (path2_281 = come_decrement_ref_count(path2_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (path2_281 = come_decrement_ref_count(path2_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* xextname(char* path){
void* __right_value153 = (void*)0;
char* __result_obj__156;
char* p_283;
void* __right_value154 = (void*)0;
char* __result_obj__157;
void* __right_value155 = (void*)0;
char* __result_obj__158;
void* __right_value156 = (void*)0;
char* __result_obj__159;
    if(    path==((void*)0)    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(""))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    p_283=path+strlen(path);
    while(    p_283>=path    ) {
        if(        *p_283==46        ) {
            break;
        }
        else {
            p_283--;
        }
    }
    if(    p_283<path    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(path))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string(p_283+1))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(""))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__160;
void* __right_value158 = (void*)0;
char* __result_obj__161;
    if(    self    ) {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
    else {
        __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__161;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value159 = (void*)0;
char* __result_obj__162;
void* __right_value160 = (void*)0;
char* __result_obj__163;
    if(    self    ) {
        __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value159=__builtin_string("true"))));
        (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__162;
    }
    else {
        __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string("false"))));
        (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__163;
    }
}

char* char_to_string(char self){
void* __right_value161 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%c",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* short_to_string(short self){
void* __right_value162 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%d",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* int_to_string(int self){
void* __right_value163 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%d",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* long_to_string(long self){
void* __right_value164 = (void*)0;
char* __result_obj__167;
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%ld",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value165 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%ld",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* float_to_string(float self){
void* __right_value166 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value166=xsprintf("%f",self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* double_to_string(double self){
void* __right_value167 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value167=xsprintf("%lf",self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__170;
}

char* string_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__171;
void* __right_value169 = (void*)0;
char* __result_obj__172;
    if(    self==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_to_string(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__173;
void* __right_value171 = (void*)0;
char* __result_obj__174;
    if(    self==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
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
void* __right_value172 = (void*)0;
char* __result_obj__175;
void* __right_value173 = (void*)0;
char* __result_obj__176;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    puts(self);
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

char* charp_print(char* self){
void* __right_value174 = (void*)0;
char* __result_obj__177;
void* __right_value175 = (void*)0;
char* __result_obj__178;
    if(    self==((void*)0)    ) {
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__177;
    }
    printf("%s",self);
    __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__178;
}

char* charp_printf(char* self, ...){
void* __right_value176 = (void*)0;
char* __result_obj__179;
char* msg2_284;
va_list args_285;
void* __right_value177 = (void*)0;
char* __result_obj__180;
msg2_284 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value176=__builtin_string(""))));
        (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__179;
    }
    __builtin_c23_va_start(args_285,self);
    vasprintf(&msg2_284,self,args_285);
    __builtin_va_end(args_285);
    printf("%s",msg2_284);
    free(msg2_284);
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(self))));
    (__right_value177 = come_decrement_ref_count(__right_value177, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__180;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_286;
    for(    i_286=0    ;    i_286<self    ;    i_286++    ){
        block(parent,i_286);
    }
}

