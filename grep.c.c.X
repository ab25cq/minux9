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
void* __right_value0 = (void*)0;
char* a_2;
    come_heap_init(0, 0, 0);
    puts("AAA");
    a_2=(char*)come_calloc(1, sizeof(char)*(1*(128)), "grep.c", 34, "char*");
    strncpy(a_2,"QAB",128);
    puts(a_2);
    exit(2);
    (a_2 = come_decrement_ref_count(a_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
come_heap_final();
}

void* sbrk(long incr){
void* __result_obj__1;
void* prev_3;
void* __result_obj__2;
    if(    heap_end==0    ) {
        heap_end=(char*)&_end;
    }
    if(    heap_end+incr>=heap_limit    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    prev_3=heap_end;
    heap_end+=incr;
    __result_obj__2 = prev_3;
    return __result_obj__2;
}

void* malloc(unsigned long  int size){
void* __result_obj__3;
struct mem_block* current_4;
struct mem_block* prev_5;
void* __result_obj__4;
struct mem_block* new_mem_6;
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
    current_4=free_list;
    prev_5=((void*)0);
    while(    current_4!=((void*)0)    ) {
        if(        current_4->size>=size        ) {
            if(            prev_5==((void*)0)            ) {
                free_list=current_4->next;
            }
            else {
                prev_5->next=current_4->next;
            }
            __result_obj__4 = (void*)(current_4+1);
            return __result_obj__4;
        }
        prev_5=current_4;
        current_4=current_4->next;
    }
    new_mem_6=(struct mem_block*)sbrk(size);
    if(    new_mem_6==(void*)-1    ) {
        __result_obj__5 = ((void*)0);
        return __result_obj__5;
    }
    new_mem_6->size=size;
    new_mem_6->next=((void*)0);
    __result_obj__6 = (void*)(new_mem_6+1);
    return __result_obj__6;
}

void free(void* ptr){
struct mem_block* block_7;
    if(    ptr==((void*)0)    ) {
        return;
    }
    block_7=(struct mem_block*)ptr-1;
    block_7->next=free_list;
    free_list=block_7;
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

void exit(int n){
    while(    1    ) {
        ;
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
void* __right_value1 = (void*)0;
void* __right_value2 = (void*)0;
struct buffer* buf_77;
int i_78;
void* __right_value3 = (void*)0;
    buf_77=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_77,"%s %d\n",sname,sline);
    for(    i_78=gNumComeStackFrame-2    ;    i_78>=0    ;    i_78--    ){
        buffer_append_format(buf_77,"%s %d #%d\n",gComeStackFrameSName[i_78],gComeStackFrameSLine[i_78],gComeStackFrameID[i_78]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value3=buffer_to_string(buf_77))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_79;
    for(    i_79=gNumComeStackFrame-1    ;    i_79>=0    ;    i_79--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_79],gComeStackFrameSLine[i_79],gComeStackFrameID[i_79]);
    }
}

char* come_get_stackframe(){
void* __right_value4 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value4=__builtin_string(gComeStackFrameBuffer))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
while(1);
        result_89=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_90=result_89;
        it_90->allocated=177783;
        it_90->size=size+sizeof(struct sMemHeader);
        it_90->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
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
        come_pop_stackframe_v2();
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
while(1);
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
    result_107=come_calloc_v2(1,size_106,sname,sline,class_name);
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

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
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
                        come_free_v2(protocol_obj);
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
    result_123=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_122)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_123,str,len_122);
    __result_obj__42 = (char*)come_increment_ref_count(result_123);
    (result_123 = come_decrement_ref_count(result_123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value6 = (void*)0;
char* __result_obj__43;
    __result_obj__43 = (char*)come_increment_ref_count(((char*)(__right_value6=come_get_stackframe())));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value7 = (void*)0;
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
void* __right_value8 = (void*)0;
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
void* __right_value9 = (void*)0;
struct buffer* result_124;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__48;
    if(    self==((void*)0)    ) {
        __result_obj__47 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__47;
    }
    result_124=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2915, "struct buffer*"));
    result_124->size=self->size;
    __dec_obj3=result_124->buf,
    result_124->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2918, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_124->len=self->len;
    memcpy(result_124->buf,self->buf,self->len);
    __result_obj__48 = (struct buffer*)come_increment_ref_count(result_124);
    come_call_finalizer(buffer_finalize, result_124, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__48;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
_Bool __result_obj__49;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__49 = string_equals(((char*)(__right_value11=buffer_to_string(left))),((char*)(__right_value12=buffer_to_string(right))));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value13 = (void*)0;
char* old_buf_125;
int old_len_126;
int new_size_127;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__51;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__50 = self;
        return __result_obj__50;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_125=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2966, "char*"));
        memcpy(old_buf_125,self->buf,self->size);
        old_len_126=self->len;
        new_size_127=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_127)), "/usr/local/include/comelang.h", 2970, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_125,old_len_126);
        self->buf[old_len_126]=0;
        self->size=new_size_127;
        (old_buf_125 = come_decrement_ref_count(old_buf_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__51 = self;
    return __result_obj__51;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__52;
void* __right_value15 = (void*)0;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__53;
    if(    self==((void*)0)    ) {
        __result_obj__52 = ((void*)0);
        return __result_obj__52;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_128=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2989, "char*"));
        old_len_129=self->len;
        new_size_130=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_130)), "/usr/local/include/comelang.h", 2993, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
        (old_buf_128 = come_decrement_ref_count(old_buf_128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__54;
int size_131;
void* __right_value17 = (void*)0;
char* old_buf_132;
int old_len_133;
int new_size_134;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__55;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__54 = self;
        return __result_obj__54;
    }
    size_131=strlen(mem);
    if(    self->len+size_131+1+1>=self->size    ) {
        old_buf_132=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3015, "char*"));
        memcpy(old_buf_132,self->buf,self->size);
        old_len_133=self->len;
        new_size_134=(self->size+size_131+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_134)), "/usr/local/include/comelang.h", 3019, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_132,old_len_133);
        self->buf[old_len_133]=0;
        self->size=new_size_134;
        (old_buf_132 = come_decrement_ref_count(old_buf_132, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_131);
    self->len+=size_131;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__56;
va_list args_135;
char* result_136;
int len_137;
struct buffer* __result_obj__57;
void* __right_value19 = (void*)0;
char* mem_138;
int size_139;
void* __right_value20 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__58;
result_136 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    __builtin_va_start(args_135,msg);
    len_137=vasprintf(&result_136,msg,args_135);
    __builtin_va_end(args_135);
    if(    len_137<0    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    mem_138=(char*)come_increment_ref_count(__builtin_string(result_136));
    size_139=strlen(mem_138);
    if(    self->len+size_139+1+1>=self->size    ) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3063, "char*"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_142)), "/usr/local/include/comelang.h", 3067, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        (old_buf_140 = come_decrement_ref_count(old_buf_140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_138,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    free(result_136);
    __result_obj__58 = self;
    (mem_138 = come_decrement_ref_count(mem_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__58;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__59;
int size_143;
void* __right_value22 = (void*)0;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__60;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__59 = self;
        return __result_obj__59;
    }
    size_143=strlen(mem)+1;
    if(    self->len+size_143+1+1+1>=self->size    ) {
        old_buf_144=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3089, "char*"));
        memcpy(old_buf_144,self->buf,self->size);
        old_len_145=self->len;
        new_size_146=(self->size+size_143+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_146)), "/usr/local/include/comelang.h", 3093, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        (old_buf_144 = come_decrement_ref_count(old_buf_144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_143);
    self->len+=size_143;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__60 = self;
    return __result_obj__60;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__61;
int* mem_147;
int size_148;
void* __right_value24 = (void*)0;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__62;
    if(    self==((void*)0)    ) {
        __result_obj__61 = ((void*)0);
        return __result_obj__61;
    }
    mem_147=&value;
    size_148=sizeof(int);
    if(    self->len+size_148+1+1>=self->size    ) {
        old_buf_149=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3116, "char*"));
        memcpy(old_buf_149,self->buf,self->size);
        old_len_150=self->len;
        new_size_151=(self->size+size_148+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_151)), "/usr/local/include/comelang.h", 3120, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_149,old_len_150);
        self->buf[old_len_150]=0;
        self->size=new_size_151;
        (old_buf_149 = come_decrement_ref_count(old_buf_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_147,size_148);
    self->len+=size_148;
    self->buf[self->len]=0;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_152;
int size_153;
void* __right_value26 = (void*)0;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__63;
    mem_152=&value;
    size_153=sizeof(long);
    if(    self->len+size_153+1+1>=self->size    ) {
        old_buf_154=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3139, "char*"));
        memcpy(old_buf_154,self->buf,self->size);
        old_len_155=self->len;
        new_size_156=(self->size+size_153+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_156)), "/usr/local/include/comelang.h", 3143, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
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

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__64;
short* mem_157;
int size_158;
void* __right_value28 = (void*)0;
char* old_buf_159;
int old_len_160;
int new_size_161;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__65;
    if(    self==((void*)0)    ) {
        __result_obj__64 = ((void*)0);
        return __result_obj__64;
    }
    mem_157=&value;
    size_158=sizeof(short);
    if(    self->len+size_158+1+1>=self->size    ) {
        old_buf_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3166, "char*"));
        memcpy(old_buf_159,self->buf,self->size);
        old_len_160=self->len;
        new_size_161=(self->size+size_158+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_161)), "/usr/local/include/comelang.h", 3170, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_159,old_len_160);
        self->buf[old_len_160]=0;
        self->size=new_size_161;
        (old_buf_159 = come_decrement_ref_count(old_buf_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_157,size_158);
    self->len+=size_158;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__66;
int len_162;
int new_size_163;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_164;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    len_162=self->len;
    len_162=(len_162+3)&~3;
    if(    len_162>=self->size    ) {
        new_size_163=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_163)), "/usr/local/include/comelang.h", 3194, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_163;
    }
    for(    i_164=self->len    ;    i_164<len_162    ;    i_164++    ){
        self->buf[i_164]=0;
    }
    self->len=len_162;
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
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_165;
struct buffer* __result_obj__68;
struct buffer* __result_obj__69;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3224, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__68 = (struct buffer*)come_increment_ref_count(result_165);
        come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__68, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__68;
    }
    buffer_append_str(result_165,self);
    __result_obj__69 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__69;
}

char* buffer_to_string(struct buffer* self){
void* __right_value33 = (void*)0;
char* __result_obj__70;
void* __right_value34 = (void*)0;
char* __result_obj__71;
    if(    self==((void*)0)    ) {
        __result_obj__70 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(""))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__70 = come_decrement_ref_count(__result_obj__70, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__70;
    }
    __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value34=__builtin_string(self->buf))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__71;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__72;
    __result_obj__72 = self->buf;
    return __result_obj__72;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_166;
struct buffer* __result_obj__73;
    result_166=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3251, "struct buffer*"))));
    buffer_append(result_166,self,sizeof(char)*len);
    __result_obj__73 = (struct buffer*)come_increment_ref_count(result_166);
    come_call_finalizer(buffer_finalize, result_166, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__73, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__73;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_167;
int i_168;
struct buffer* __result_obj__74;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3258, "struct buffer*"))));
    for(    i_168=0    ;    i_168<len    ;    i_168++    ){
        buffer_append(result_167,self[i_168],strlen(self[i_168]));
    }
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_169;
struct buffer* __result_obj__75;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_169,(char*)self,sizeof(short)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_170;
struct buffer* __result_obj__76;
    result_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_170,(char*)self,sizeof(int)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_170);
    come_call_finalizer(buffer_finalize, result_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_171;
struct buffer* __result_obj__77;
    result_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_171,(char*)self,sizeof(long)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_171);
    come_call_finalizer(buffer_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_172;
struct buffer* __result_obj__78;
    result_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    buffer_append(result_172,(char*)self,sizeof(float)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_172);
    come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_173;
struct buffer* __result_obj__79;
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3295, "struct buffer*"))));
    buffer_append(result_173,(char*)self,sizeof(double)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

char* buffer_printable(struct buffer* self){
int len_174;
void* __right_value49 = (void*)0;
char* result_175;
int n_176;
int i_177;
unsigned char c_178;
char* __result_obj__80;
    len_174=self->len;
    result_175=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_174*2+1)), "/usr/local/include/comelang.h", 3303, "char*"));
    n_176=0;
    for(    i_177=0    ;    i_177<len_174    ;    i_177++    ){
        c_178=self->buf[i_177];
        if(        (c_178>=0&&c_178<32)||c_178==127        ) {
            result_175[n_176++]=94;
            result_175[n_176++]=c_178+65-1;
        }
        else if(        c_178>127        ) {
            result_175[n_176++]=63;
        }
        else {
            result_175[n_176++]=c_178;
        }
    }
    result_175[n_176]=0;
    __result_obj__80 = (char*)come_increment_ref_count(result_175);
    (result_175 = come_decrement_ref_count(result_175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__80 = come_decrement_ref_count(__result_obj__80, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__80;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_179;
struct list$1char$* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_179=0    ;    i_179<num_value    ;    i_179++    ){
        list$1char$_push_back(self,values[i_179]);
    }
    __result_obj__82 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__82, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__82;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_180;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_182;
struct list$1char$* __result_obj__81;
    if(    self->len==0    ) {
        litem_180=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$*"))));
        litem_180->prev=((void*)0);
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head=litem_180;
    }
    else if(    self->len==1    ) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$*"))));
        litem_181->prev=self->head;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head->next=litem_181;
    }
    else {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$*"))));
        litem_182->prev=self->tail;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail->next=litem_182;
        self->tail=litem_182;
    }
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_183;
struct list_item$1char$* prev_it_184;
    it_183=self->head;
    while(    it_183!=((void*)0)    ) {
        prev_it_184=it_183;
        it_183=it_183->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_184, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__83;
    __result_obj__83 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_185;
struct list$1char$p* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_185=0    ;    i_185<num_value    ;    i_185++    ){
        list$1char$p_push_back(self,values[i_185]);
    }
    __result_obj__85 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_186;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_188;
struct list$1char$p* __result_obj__84;
    if(    self->len==0    ) {
        litem_186=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$p*"))));
        litem_186->prev=((void*)0);
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head=litem_186;
    }
    else if(    self->len==1    ) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$p*"))));
        litem_187->prev=self->head;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head->next=litem_187;
    }
    else {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_188->prev=self->tail;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail->next=litem_188;
        self->tail=litem_188;
    }
    self->len++;
    __result_obj__84 = self;
    return __result_obj__84;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_189;
struct list_item$1char$p* prev_it_190;
    it_189=self->head;
    while(    it_189!=((void*)0)    ) {
        prev_it_190=it_189;
        it_189=it_189->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_190, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__86;
    __result_obj__86 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_191;
struct list$1short$* __result_obj__88;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_191=0    ;    i_191<num_value    ;    i_191++    ){
        list$1short$_push_back(self,values[i_191]);
    }
    __result_obj__88 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_192;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_194;
struct list$1short$* __result_obj__87;
    if(    self->len==0    ) {
        litem_192=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1short$*"))));
        litem_192->prev=((void*)0);
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head=litem_192;
    }
    else if(    self->len==1    ) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1short$*"))));
        litem_193->prev=self->head;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head->next=litem_193;
    }
    else {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1short$*"))));
        litem_194->prev=self->tail;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail->next=litem_194;
        self->tail=litem_194;
    }
    self->len++;
    __result_obj__87 = self;
    return __result_obj__87;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_195;
struct list_item$1short$* prev_it_196;
    it_195=self->head;
    while(    it_195!=((void*)0)    ) {
        prev_it_196=it_195;
        it_195=it_195->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__89;
    __result_obj__89 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3354, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_197;
struct list$1int$* __result_obj__91;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_197=0    ;    i_197<num_value    ;    i_197++    ){
        list$1int$_push_back(self,values[i_197]);
    }
    __result_obj__91 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_198;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_200;
struct list$1int$* __result_obj__90;
    if(    self->len==0    ) {
        litem_198=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1int$*"))));
        litem_198->prev=((void*)0);
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head=litem_198;
    }
    else if(    self->len==1    ) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1int$*"))));
        litem_199->prev=self->head;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head->next=litem_199;
    }
    else {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1int$*"))));
        litem_200->prev=self->tail;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail->next=litem_200;
        self->tail=litem_200;
    }
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_201;
struct list_item$1int$* prev_it_202;
    it_201=self->head;
    while(    it_201!=((void*)0)    ) {
        prev_it_202=it_201;
        it_201=it_201->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_202, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__92;
    __result_obj__92 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3359, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_203;
struct list$1long$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_203=0    ;    i_203<num_value    ;    i_203++    ){
        list$1long$_push_back(self,values[i_203]);
    }
    __result_obj__94 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_204;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_206;
struct list$1long$* __result_obj__93;
    if(    self->len==0    ) {
        litem_204=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1long$*"))));
        litem_204->prev=((void*)0);
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head=litem_204;
    }
    else if(    self->len==1    ) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1long$*"))));
        litem_205->prev=self->head;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head->next=litem_205;
    }
    else {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1long$*"))));
        litem_206->prev=self->tail;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail->next=litem_206;
        self->tail=litem_206;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_207;
struct list_item$1long$* prev_it_208;
    it_207=self->head;
    while(    it_207!=((void*)0)    ) {
        prev_it_208=it_207;
        it_207=it_207->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_208, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__95;
    __result_obj__95 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3364, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_209;
struct list$1float$* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_209=0    ;    i_209<num_value    ;    i_209++    ){
        list$1float$_push_back(self,values[i_209]);
    }
    __result_obj__97 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_210;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_212;
struct list$1float$* __result_obj__96;
    if(    self->len==0    ) {
        litem_210=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1float$*"))));
        litem_210->prev=((void*)0);
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail=litem_210;
        self->head=litem_210;
    }
    else if(    self->len==1    ) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1float$*"))));
        litem_211->prev=self->head;
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head->next=litem_211;
    }
    else {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1float$*"))));
        litem_212->prev=self->tail;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail->next=litem_212;
        self->tail=litem_212;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_213;
struct list_item$1float$* prev_it_214;
    it_213=self->head;
    while(    it_213!=((void*)0)    ) {
        prev_it_214=it_213;
        it_213=it_213->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__98;
    __result_obj__98 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3369, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_215;
struct list$1double$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_215=0    ;    i_215<num_value    ;    i_215++    ){
        list$1double$_push_back(self,values[i_215]);
    }
    __result_obj__100 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_216;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_218;
struct list$1double$* __result_obj__99;
    if(    self->len==0    ) {
        litem_216=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1double$*"))));
        litem_216->prev=((void*)0);
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail=litem_216;
        self->head=litem_216;
    }
    else if(    self->len==1    ) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1double$*"))));
        litem_217->prev=self->head;
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head->next=litem_217;
    }
    else {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1double$*"))));
        litem_218->prev=self->tail;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail->next=litem_218;
        self->tail=litem_218;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_219;
struct list_item$1double$* prev_it_220;
    it_219=self->head;
    while(    it_219!=((void*)0)    ) {
        prev_it_220=it_219;
        it_219=it_219->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_220, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__101;
    __result_obj__101 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value85 = (void*)0;
char* __result_obj__102;
int len_221;
void* __right_value86 = (void*)0;
char* result_222;
char* __result_obj__103;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__102;
    }
    len_221=strlen(self)+strlen(right);
    result_222=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_221+1)), "/usr/local/include/comelang.h", 3603, "char*"));
    strncpy(result_222,self,len_221+1);
    strncat(result_222,right,len_221+1);
    __result_obj__103 = (char*)come_increment_ref_count(result_222);
    (result_222 = come_decrement_ref_count(result_222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__103;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__104;
int len_223;
void* __right_value88 = (void*)0;
char* result_224;
char* __result_obj__105;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    len_223=strlen(self)+strlen(right);
    result_224=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_223+1)), "/usr/local/include/comelang.h", 3618, "char*"));
    strncpy(result_224,self,len_223+1);
    strncat(result_224,right,len_223+1);
    __result_obj__105 = (char*)come_increment_ref_count(result_224);
    (result_224 = come_decrement_ref_count(result_224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__106;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_225;
int i_226;
void* __right_value92 = (void*)0;
char* __result_obj__107;
    if(    self==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    buf_225=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_226=0    ;    i_226<right    ;    i_226++    ){
        buffer_append_str(buf_225,self);
    }
    __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_225))));
    come_call_finalizer(buffer_finalize, buf_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__108;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_227;
int i_228;
void* __right_value96 = (void*)0;
char* __result_obj__109;
    if(    self==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    buf_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3645, "struct buffer*"))));
    for(    i_228=0    ;    i_228<right    ;    i_228++    ){
        buffer_append_str(buf_227,self);
    }
    __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_227))));
    come_call_finalizer(buffer_finalize, buf_227, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_229;
int i_230;
    result_229=(_Bool)0;
    for(    i_230=0    ;    i_230<len    ;    i_230++    ){
        if(        strncmp(self[i_230],str,strlen(self[i_230]))==0        ) {
            result_229=(_Bool)1;
            break;
        }
    }
    return result_229;
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
int result_231;
char* p_232;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_231=0;
    p_232=value;
    while(    *p_232    ) {
        result_231+=(*p_232);
        p_232++;
    }
    return result_231;
}

unsigned int string_get_hash_key(char* value){
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
_Bool result_235;
    result_235=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_235;
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
_Bool result_236;
    result_236=(c>=32&&c<=126);
    return result_236;
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
void* __right_value97 = (void*)0;
char* __result_obj__110;
int len_237;
void* __right_value98 = (void*)0;
char* result_238;
int i_239;
char* __result_obj__111;
    if(    str==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    len_237=strlen(str);
    result_238=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_237+1)), "/usr/local/include/comelang.h", 3913, "char*"));
    for(    i_239=0    ;    i_239<len_237    ;    i_239++    ){
        result_238[i_239]=str[len_237-i_239-1];
    }
    result_238[len_237]=0;
    __result_obj__111 = (char*)come_increment_ref_count(result_238);
    (result_238 = come_decrement_ref_count(result_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__112;
int len_240;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__113;
void* __right_value102 = (void*)0;
char* __result_obj__114;
void* __right_value103 = (void*)0;
char* __result_obj__115;
void* __right_value104 = (void*)0;
char* result_241;
char* __result_obj__116;
    if(    str==((void*)0)    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    len_240=strlen(str);
    if(    head<0    ) {
        head+=len_240;
    }
    if(    tail<0    ) {
        tail+=len_240+1;
    }
    if(    head>tail    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_240    ) {
        tail=len_240;
    }
    if(    head==tail    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    if(    tail-head+1<1    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    result_241=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3959, "char*"));
    memcpy(result_241,str+head,tail-head);
    result_241[tail-head]=0;
    __result_obj__116 = (char*)come_increment_ref_count(result_241);
    (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__116;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__117;
int len_242;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__118;
void* __right_value108 = (void*)0;
char* __result_obj__119;
void* __right_value109 = (void*)0;
char* __result_obj__120;
void* __right_value110 = (void*)0;
char* result_243;
char* __result_obj__121;
    if(    str==((void*)0)    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    len_242=strlen(str);
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
    }
    if(    head>tail    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_242    ) {
        tail=len_242;
    }
    if(    head==tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    tail-head+1<1    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4002, "char*"));
    memcpy(result_243,str+head,tail-head);
    result_243[tail-head]=0;
    __result_obj__121 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__121;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__122;
int len_244;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__123;
void* __right_value114 = (void*)0;
char* __result_obj__124;
void* __right_value115 = (void*)0;
char* __result_obj__125;
void* __right_value116 = (void*)0;
char* result_245;
char* __result_obj__126;
    if(    str==((void*)0)    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    len_244=strlen(str);
    if(    head<0    ) {
        head+=len_244;
    }
    if(    tail<0    ) {
        tail+=len_244+1;
    }
    if(    head>tail    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value113=charp_reverse(((char*)(__right_value112=charp_substring(str,tail,head)))))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_244    ) {
        tail=len_244;
    }
    if(    head==tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    tail-head+1<1    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    result_245=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4045, "char*"));
    memcpy(result_245,str+head,tail-head);
    result_245[tail-head]=0;
    __result_obj__126 = (char*)come_increment_ref_count(result_245);
    (result_245 = come_decrement_ref_count(result_245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__126;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__127;
va_list args_246;
char* result_247;
int len_248;
void* __right_value118 = (void*)0;
char* __result_obj__128;
void* __right_value119 = (void*)0;
char* result2_249;
char* __result_obj__129;
result_247 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    __builtin_va_start(args_246,msg);
    len_248=vasprintf(&result_247,msg,args_246);
    __builtin_va_end(args_246);
    if(    len_248<0    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    result2_249=(char*)come_increment_ref_count(__builtin_string(result_247));
    free(result_247);
    __result_obj__129 = (char*)come_increment_ref_count(result2_249);
    (result2_249 = come_decrement_ref_count(result2_249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__129;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__130;
int len_250;
void* __right_value121 = (void*)0;
char* __result_obj__131;
void* __right_value122 = (void*)0;
char* __result_obj__132;
void* __right_value123 = (void*)0;
char* result_251;
char* __result_obj__133;
    if(    str==((void*)0)    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    len_250=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    if(    head<0    ) {
        head+=len_250;
    }
    if(    tail<0    ) {
        tail+=len_250+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(str))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    tail>=len_250    ) {
        tail=len_250;
    }
    result_251=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_250-(tail-head)+1)), "/usr/local/include/comelang.h", 4107, "char*"));
    memcpy(result_251,str,head);
    memcpy(result_251+head,str+tail,len_250-tail);
    result_251[len_250-(tail-head)]=0;
    __result_obj__133 = (char*)come_increment_ref_count(result_251);
    (result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_252;
struct list_item$1char$ph* prev_it_253;
    it_252=self->head;
    while(    it_252!=((void*)0)    ) {
        prev_it_253=it_252;
        it_252=it_252->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_253, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_257;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_258;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_259;
char* __dec_obj15;
struct list$1char$ph* __result_obj__136;
    if(    self->len==0    ) {
        litem_257=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        __dec_obj13=litem_257->item,
        litem_257->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1    ) {
        litem_258=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        __dec_obj14=litem_258->item,
        litem_258->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        __dec_obj15=litem_259->item,
        litem_259->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__136 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__136;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* __result_obj__135;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* result_254;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_255;
int i_256;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__137;
    if(    self==((void*)0)    ) {
        __result_obj__135 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4120, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__135, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__135;
    }
    result_254=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4123, "struct list$1char$ph*"))));
    str_255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4125, "struct buffer*"))));
    for(    i_256=0    ;    i_256<charp_length(self)    ;    i_256++    ){
        if(        self[i_256]==c        ) {
            list$1char$ph_push_back(result_254,(char*)come_increment_ref_count(__builtin_string(str_255->buf)));
            buffer_reset(str_255);
        }
        else {
            buffer_append_char(str_255,self[i_256]);
        }
    }
    if(    buffer_length(str_255)!=0    ) {
        list$1char$ph_push_back(result_254,(char*)come_increment_ref_count(__builtin_string(str_255->buf)));
    }
    __result_obj__137 = (struct list$1char$ph*)come_increment_ref_count(result_254);
    come_call_finalizer(list$1char$ph$p_finalize, result_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_255, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__137;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__138;
    __result_obj__138 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__138 = come_decrement_ref_count(__result_obj__138, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__138;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value136 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value136=xsprintf(msg,self))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* charp_printable(char* str){
int len_260;
void* __right_value137 = (void*)0;
char* result_261;
int n_262;
int i_263;
char c_264;
char* __result_obj__140;
    len_260=charp_length(str);
    result_261=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_260*2+1)), "/usr/local/include/comelang.h", 4157, "char*"));
    n_262=0;
    for(    i_263=0    ;    i_263<len_260    ;    i_263++    ){
        c_264=str[i_263];
        if(        (c_264>=0&&c_264<32)||c_264==127        ) {
            result_261[n_262++]=94;
            result_261[n_262++]=c_264+65-1;
        }
        else {
            result_261[n_262++]=c_264;
        }
    }
    result_261[n_262]=0;
    __result_obj__140 = (char*)come_increment_ref_count(result_261);
    (result_261 = come_decrement_ref_count(result_261, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__141;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_265;
char* p_266;
char* p2_267;
void* __right_value141 = (void*)0;
char* __result_obj__142;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__141;
    }
    result_265=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4185, "struct buffer*"))));
    p_266=self;
    while(    (_Bool)1    ) {
        p2_267=strstr(p_266,str);
        if(        p2_267==((void*)0)        ) {
            p2_267=p_266;
            while(            *p2_267            ) {
                p2_267++;
            }
            buffer_append(result_265,p_266,p2_267-p_266);
            break;
        }
        buffer_append(result_265,p_266,p2_267-p_266);
        buffer_append_str(result_265,replace);
        p_266=p2_267+strlen(str);
    }
    __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_265))));
    come_call_finalizer(buffer_finalize, result_265, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__143;
char* p_268;
void* __right_value143 = (void*)0;
char* __result_obj__144;
void* __right_value144 = (void*)0;
char* __result_obj__145;
void* __right_value145 = (void*)0;
char* __result_obj__146;
    if(    path==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    p_268=path+strlen(path);
    while(    p_268>=path    ) {
        if(        *p_268==47        ) {
            break;
        }
        else {
            p_268--;
        }
    }
    if(    p_268<path    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    else {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_268+1))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__146;
}

char* xnoextname(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__147;
void* __right_value147 = (void*)0;
char* path2_269;
char* p_270;
void* __right_value148 = (void*)0;
char* __result_obj__148;
void* __right_value149 = (void*)0;
char* __result_obj__149;
void* __right_value150 = (void*)0;
char* __result_obj__150;
    if(    path==((void*)0)    ) {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    path2_269=(char*)come_increment_ref_count(xbasename(path));
    p_270=path2_269+strlen(path2_269);
    while(    p_270>=path2_269    ) {
        if(        *p_270==46        ) {
            break;
        }
        else {
            p_270--;
        }
    }
    if(    p_270<path2_269    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_269))));
        (path2_269 = come_decrement_ref_count(path2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    else {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_269,0,p_270-path2_269))));
        (path2_269 = come_decrement_ref_count(path2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_269 = come_decrement_ref_count(path2_269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__150;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__151;
char* p_271;
void* __right_value152 = (void*)0;
char* __result_obj__152;
void* __right_value153 = (void*)0;
char* __result_obj__153;
void* __right_value154 = (void*)0;
char* __result_obj__154;
    if(    path==((void*)0)    ) {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    p_271=path+strlen(path);
    while(    p_271>=path    ) {
        if(        *p_271==46        ) {
            break;
        }
        else {
            p_271--;
        }
    }
    if(    p_271<path    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    else {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_271+1))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__154;
}

char* bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__155;
void* __right_value156 = (void*)0;
char* __result_obj__156;
    if(    self    ) {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    else {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__157;
void* __right_value158 = (void*)0;
char* __result_obj__158;
    if(    self    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
}

char* char_to_string(char self){
void* __right_value159 = (void*)0;
char* __result_obj__159;
    __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%c",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__159;
}

char* short_to_string(short self){
void* __right_value160 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* int_to_string(int self){
void* __right_value161 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%d",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* long_to_string(long self){
void* __right_value162 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value163 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%ld",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* float_to_string(float self){
void* __right_value164 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%f",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* double_to_string(double self){
void* __right_value165 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%lf",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* string_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__166;
void* __right_value167 = (void*)0;
char* __result_obj__167;
    if(    self==((void*)0)    ) {
        __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__166;
    }
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* charp_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__168;
void* __right_value169 = (void*)0;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value170 = (void*)0;
char* __result_obj__170;
void* __right_value171 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    puts(self);
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
}

char* charp_print(char* self){
void* __right_value172 = (void*)0;
char* __result_obj__172;
void* __right_value173 = (void*)0;
char* __result_obj__173;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    printf("%s",self);
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* charp_printf(char* self, ...){
void* __right_value174 = (void*)0;
char* __result_obj__174;
char* msg2_272;
va_list args_273;
void* __right_value175 = (void*)0;
char* __result_obj__175;
msg2_272 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    __builtin_va_start(args_273,self);
    vasprintf(&msg2_272,self,args_273);
    __builtin_va_end(args_273);
    printf("%s",msg2_272);
    free(msg2_272);
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_274;
    for(    i_274=0    ;    i_274<self    ;    i_274++    ){
        block(parent,i_274);
    }
}

