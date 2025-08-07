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
char* candidate_31;
long _ret_34;
int size_33;
char* p_35;
char* head_36;
char* tail_37;
long _ret_38;
long _ret_39;
void* __right_value0 = (void*)0;
memset(&_ret_34, 0, sizeof(long));
tail_37 = (void*)0;
memset(&_ret_38, 0, sizeof(long));
memset(&_ret_39, 0, sizeof(long));
    come_heap_init(0, 0, 0);
    if(    argc<=1    ) {
        ({register long _a0 asm("a0") =(long)(1);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");         while(        1        ) {
            ;
        }
        });    }
    candidate_31=argv[1];
    char buf_32[512+1];
    memset(&buf_32, 0, sizeof(char)    *(512+1)    );
    size_33=({_ret_34; register long _a0 asm("a0") =(long)(0);
; register long _a1 asm("a1") =(long)(buf_32);
; register long _a2 asm("a2") =(long)(512);
; register long _a7 asm("a7") =65;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_34=_a0; _ret_34; });
    buf_32[size_33]=0;
    p_35=buf_32;
    head_36=buf_32;
    while(    *p_35    ) {
        if(        *p_35==10        ) {
            while(            *p_35==10            ) {
                p_35++;
            }
            head_36=p_35;
        }
        else if(        memcmp(p_35,candidate_31,strlen(candidate_31))==0        ) {
            while(            *p_35!=0&&*p_35!=10            ) {
                p_35++;
                tail_37=p_35;
            }
            ({_ret_38; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(head_36);
; register long _a2 asm("a2") =(long)(tail_37-head_36);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_38=_a0; _ret_38; });
            ({_ret_39; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)("\r\n");
; register long _a2 asm("a2") =(long)(2);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_39=_a0; _ret_39; });
        }
        else {
            p_35++;
        }
    }
    puts(((char*)(__right_value0=charp_substring("AAAAABC",0,5))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    ({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");     while(    1    ) {
        ;
    }
    });come_heap_final();
}

void* sbrk(long incr){
char* current_brk_40;
void* __result_obj__1;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
    current_brk_40=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_40==(char*)-1    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    if(    incr==0    ) {
        __result_obj__2 = current_brk_40;
        return __result_obj__2;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_40+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__3 = (void*)-1;
        return __result_obj__3;
    }
    __result_obj__4 = current_brk_40;
    return __result_obj__4;
}

struct header* morecore(unsigned int nunits){
char* cp_41;
struct header* up_42;
struct header* __result_obj__5;
struct header* __result_obj__6;
cp_41 = (void*)0;
up_42 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_41=sbrk(nunits*sizeof(struct header));
    if(    cp_41==(char*)-1    ) {
        __result_obj__5 = (void*)0;
        return __result_obj__5;
    }
    up_42=(struct header*)cp_41;
    up_42->size=nunits;
    free((void*)(up_42+1));
    __result_obj__6 = freep;
    return __result_obj__6;
}

void* malloc(unsigned int nbytes){
struct header* p_43;
struct header* prevp_44;
unsigned int nunits_45;
void* __result_obj__7;
void* __result_obj__8;
memset(&p_43, 0, sizeof(struct header*));
memset(&prevp_44, 0, sizeof(struct header*));
memset(&nunits_45, 0, sizeof(unsigned int));
    nunits_45=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_44=freep)==0    ) {
        base.next=freep=prevp_44=&base;
        base.size=0;
    }
    for(    p_43=prevp_44->next    ;    ;    prevp_44=p_43,p_43=p_43->next    ){
        if(        p_43->size>=nunits_45        ) {
            if(            p_43->size==nunits_45            ) {
                prevp_44->next=p_43->next;
            }
            else {
                p_43->size-=nunits_45;
                p_43+=p_43->size;
                p_43->size=nunits_45;
            }
            freep=prevp_44;
            __result_obj__7 = (void*)(p_43+1);
            return __result_obj__7;
        }
        if(        p_43==freep        ) {
            if(            (p_43=morecore(nunits_45))==0            ) {
                __result_obj__8 = (void*)0;
                return __result_obj__8;
            }
        }
    }
}

void free(void* ap){
struct header* bp_46;
struct header* p_47;
memset(&bp_46, 0, sizeof(struct header*));
memset(&p_47, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_46=(struct header*)ap-1;
    for(    p_47=freep    ;    !(bp_46>p_47&&bp_46<p_47->next)    ;    p_47=p_47->next    ){
        if(        p_47>=p_47->next&&(bp_46>p_47||bp_46<p_47->next)        ) {
            break;
        }
    }
    if(    bp_46+bp_46->size==p_47->next    ) {
        bp_46->size+=p_47->next->size;
        bp_46->next=p_47->next->next;
    }
    else {
        bp_46->next=p_47->next;
    }
    if(    p_47+p_47->size==bp_46    ) {
        p_47->size+=bp_46->size;
        p_47->next=bp_46->next;
    }
    else {
        p_47->next=bp_46;
    }
    freep=p_47;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_48;
void* __result_obj__9;
void* ptr_49;
void* __result_obj__10;
    total_size_48=nmemb*size;
    if(    total_size_48==0    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    ptr_49=malloc(total_size_48);
    if(    ptr_49!=((void*)0)    ) {
        memset(ptr_49,0,total_size_48);
    }
    __result_obj__10 = ptr_49;
    return __result_obj__10;
}

char* strdup(const char* s){
char* s2_50;
unsigned long  int len_51;
char* p_52;
char* __result_obj__11;
    s2_50=s;
    len_51=strlen(s2_50)+1;
    p_52=malloc(len_51);
    if(    p_52    ) {
        memcpy(p_52,s2_50,len_51);
    }
    __result_obj__11 = p_52;
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
        const char* h_53=haystack;
        const char* n_54=needle;
        while(        *h_53&&*n_54&&(*h_53==*n_54)        ) {
            h_53++;
            n_54++;
        }
        if(        !*n_54        ) {
            __result_obj__13 = (char*)haystack;
            return __result_obj__13;
        }
    }
    __result_obj__14 = ((void*)0);
    return __result_obj__14;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_55;
int i_56;
void* __result_obj__15;
    cdst_55=(char*)dst;
    for(    i_56=0    ;    i_56<n    ;    i_56++    ){
        cdst_55[i_56]=c;
    }
    __result_obj__15 = dst;
    return __result_obj__15;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_57;
const unsigned char* s2_58;
memset(&s1_57, 0, sizeof(const unsigned char*));
memset(&s2_58, 0, sizeof(const unsigned char*));
    s1_57=v1;
    s2_58=v2;
    while(    n-->0    ) {
        if(        *s1_57!=*s2_58        ) {
            return *s1_57-*s2_58;
        }
        s1_57++,s2_58++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_59;
char* d_60;
void* __result_obj__16;
void* __result_obj__17;
s_59 = (void*)0;
d_60 = (void*)0;
    if(    n==0    ) {
        __result_obj__16 = dst;
        return __result_obj__16;
    }
    s_59=src;
    d_60=dst;
    if(    s_59<d_60&&s_59+n>d_60    ) {
        s_59+=n;
        d_60+=n;
        while(        n-->0        ) {
            *--d_60=*--s_59;
        }
    }
    else {
        while(        n-->0        ) {
            *d_60++=*s_59++;
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
char* os_61;
char* __result_obj__19;
os_61 = (void*)0;
    os_61=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__19 = os_61;
    return __result_obj__19;
}

int strlen(const char* s){
int n_62;
memset(&n_62, 0, sizeof(int));
    for(    n_62=0    ;    s[n_62]    ;    n_62++    ){
        ;
    }
    return n_62;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_63;
char* __result_obj__20;
    d_63=dest;
    while(    *d_63    ) {
        d_63++;
    }
    while(    n--&&*src    ) {
        *d_63++=*src++;
    }
    *d_63=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

char* strtok(char* s, const char* delim){
static char* next_64;
char* start_65;
char* p_66;
char* __result_obj__21;
int is_delim_68;
char* __result_obj__22;
int is_delim_70;
char* __result_obj__23;
next_64 = (void*)0;
start_65 = (void*)0;
p_66 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_64=s;
    }
    if(    next_64==((void*)0)    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
    }
    start_65=next_64;
    while(    *start_65!=0    ) {
        const char* d_67=delim;
        is_delim_68=0;
        while(        *d_67!=0        ) {
            if(            *start_65==*d_67            ) {
                is_delim_68=1;
                break;
            }
            d_67++;
        }
        if(        !is_delim_68        ) {
            break;
        }
        start_65++;
    }
    if(    *start_65==0    ) {
        next_64=((void*)0);
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
    }
    p_66=start_65;
    while(    *p_66!=0    ) {
        const char* d_69=delim;
        is_delim_70=0;
        while(        *d_69!=0        ) {
            if(            *p_66==*d_69            ) {
                is_delim_70=1;
                break;
            }
            d_69++;
        }
        if(        is_delim_70        ) {
            break;
        }
        p_66++;
    }
    if(    *p_66==0    ) {
        next_64=((void*)0);
    }
    else {
        *p_66=0;
        next_64=p_66+1;
    }
    __result_obj__23 = start_65;
    return __result_obj__23;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_71;
int i_73;
int negative_74;
char* __result_obj__24;
int digit_75;
char* __result_obj__25;
    p_71=buf;
    char tmp_72[32];
    memset(&tmp_72, 0, sizeof(char)    *(32)    );
    i_73=0;
    negative_74=0;
    if(    base<2||base>16    ) {
        *p_71=0;
        __result_obj__24 = p_71;
        return __result_obj__24;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_74=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_75=val_%base;
        tmp_72[i_73++]=(((digit_75<10))?(48+digit_75):(97+digit_75-10));
        val_/=base;
    } while(    val_    );
    if(    negative_74    ) {
        *p_71++=45;
    }
    while(    i_73--    ) {
        *p_71++=tmp_72[i_73];
    }
    *p_71=0;
    __result_obj__25 = buf;
    return __result_obj__25;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_77;
const char* s_78;
unsigned long  int remaining_80;
s_78 = (void*)0;
    char out2_76[512];
    memset(&out2_76, 0, sizeof(char)    *(512)    );
    p_77=out2_76;
    char buf_79[32];
    memset(&buf_79, 0, sizeof(char)    *(32)    );
    remaining_80=sizeof(out2_76);
    for(    ;    *fmt&&remaining_80>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_77++=*fmt;
            remaining_80--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_79,__builtin_va_arg(ap,int),10,1);
            s_78=buf_79;
            break;
            case 117:
            itoa(buf_79,__builtin_va_arg(ap,unsigned int),10,0);
            s_78=buf_79;
            break;
            case 120:
            itoa(buf_79,__builtin_va_arg(ap,unsigned int),16,0);
            s_78=buf_79;
            break;
            case 115:
            s_78=__builtin_va_arg(ap,const char*);
            if(            !s_78            ) {
                s_78="(null)";
            }
            break;
            case 99:
            buf_79[0]=(char)__builtin_va_arg(ap,int);
            buf_79[1]=0;
            s_78=buf_79;
            break;
            case 112:
            strncpy(buf_79,"0x",32);
            itoa(buf_79+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_78=buf_79;
            break;
            case 37:
            buf_79[0]=37;
            buf_79[1]=0;
            s_78=buf_79;
            break;
            default:
            buf_79[0]=37;
            buf_79[1]=*fmt;
            buf_79[2]=0;
            s_78=buf_79;
            break;
        }
        while(        *s_78&&remaining_80>1        ) {
            *p_77++=*s_78++;
            remaining_80--;
        }
    }
    *p_77=0;
    *out=strdup(out2_76);
    return p_77-out2_76;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_81;
char* p_82;
const char* s_83;
unsigned long  int remaining_85;
memset(&ap_81, 0, sizeof(va_list));
s_83 = (void*)0;
    __builtin_va_start(ap_81,fmt);
    p_82=out;
    char buf_84[32];
    memset(&buf_84, 0, sizeof(char)    *(32)    );
    remaining_85=out_size;
    if(    remaining_85==0    ) {
        __builtin_va_end(ap_81);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_85>1            ) {
                *p_82++=*fmt;
                remaining_85--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_83=__builtin_va_arg(ap_81,const char*);
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 100:
            itoa(buf_84,__builtin_va_arg(ap_81,int),10,0);
            s_83=buf_84;
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 120:
            itoa(buf_84,(unsigned int)__builtin_va_arg(ap_81,int),16,1);
            s_83=buf_84;
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 99:
            if(            remaining_85>1            ) {
                *p_82++=(char)__builtin_va_arg(ap_81,int);
                remaining_85--;
            }
            break;
            case 112:
            s_83="0x";
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            itoa(buf_84,(long)__builtin_va_arg(ap_81,void*),16,1);
            s_83=buf_84;
            while(            *s_83&&remaining_85>1            ) {
                *p_82++=*s_83++;
                remaining_85--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_84,__builtin_va_arg(ap_81,long),10,1);
                s_83=buf_84;
                while(                *s_83&&remaining_85>1                ) {
                    *p_82++=*s_83++;
                    remaining_85--;
                }
            }
            break;
            default:
            if(            remaining_85>1            ) {
                *p_82++=37;
                remaining_85--;
                if(                remaining_85>1                ) {
                    *p_82++=*fmt;
                    remaining_85--;
                }
            }
            break;
        }
    }
    *p_82=0;
    __builtin_va_end(ap_81);
    return p_82-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_86;
char* p_87;
const char* s_88;
unsigned long  int remaining_90;
memset(&ap_86, 0, sizeof(va_list));
s_88 = (void*)0;
    __builtin_va_start(ap_86,fmt);
    p_87=out;
    char buf_89[32];
    memset(&buf_89, 0, sizeof(char)    *(32)    );
    remaining_90=out_size;
    if(    remaining_90==0    ) {
        __builtin_va_end(ap_86);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_90>1            ) {
                *p_87++=*fmt;
                remaining_90--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_88=__builtin_va_arg(ap_86,const char*);
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 100:
            itoa(buf_89,__builtin_va_arg(ap_86,int),10,0);
            s_88=buf_89;
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 120:
            itoa(buf_89,(unsigned int)__builtin_va_arg(ap_86,int),16,1);
            s_88=buf_89;
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 99:
            if(            remaining_90>1            ) {
                *p_87++=(char)__builtin_va_arg(ap_86,int);
                remaining_90--;
            }
            break;
            case 112:
            s_88="0x";
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            itoa(buf_89,(long)__builtin_va_arg(ap_86,void*),16,1);
            s_88=buf_89;
            while(            *s_88&&remaining_90>1            ) {
                *p_87++=*s_88++;
                remaining_90--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_89,__builtin_va_arg(ap_86,long),10,1);
                s_88=buf_89;
                while(                *s_88&&remaining_90>1                ) {
                    *p_87++=*s_88++;
                    remaining_90--;
                }
            }
            break;
            default:
            if(            remaining_90>1            ) {
                *p_87++=37;
                remaining_90--;
                if(                remaining_90>1                ) {
                    *p_87++=*fmt;
                    remaining_90--;
                }
            }
            break;
        }
    }
    *p_87=0;
    __builtin_va_end(ap_86);
    return p_87-out;
}

void putchar(char c){
long _ret_91;
memset(&_ret_91, 0, sizeof(long));
    ({_ret_91; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&c);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_91=_a0; _ret_91; });
}

void printint(int val_, int base, int sign){
int i_93;
int negative_94;
unsigned int uval_95;
int digit_96;
memset(&uval_95, 0, sizeof(unsigned int));
    char buf_92[33];
    memset(&buf_92, 0, sizeof(char)    *(33)    );
    i_93=0;
    negative_94=0;
    if(    sign&&val_<0    ) {
        negative_94=1;
        uval_95=-val_;
    }
    else {
        uval_95=(unsigned int)val_;
    }
    if(    uval_95==0    ) {
        putchar(48);
        return;
    }
    while(    uval_95>0    ) {
        digit_96=uval_95%base;
        buf_92[i_93++]=((digit_96<10)?(48+digit_96):(97+(digit_96-10)));
        uval_95/=base;
    }
    if(    negative_94    ) {
        putchar(45);
    }
    while(    --i_93>=0    ) {
        putchar(buf_92[i_93]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_98;
int negative_99;
int digit_100;
    char buf_97[65];
    memset(&buf_97, 0, sizeof(char)    *(65)    );
    i_98=0;
    negative_99=0;
    if(    sign&&(long)val_<0    ) {
        negative_99=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_100=val_%base;
        buf_97[i_98++]=((digit_100<10)?(48+digit_100):(97+(digit_100-10)));
        val_/=base;
    }
    if(    negative_99    ) {
        putchar(45);
    }
    while(    --i_98>=0    ) {
        putchar(buf_97[i_98]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_102;
int negative_103;
int digit_104;
    char buf_101[65];
    memset(&buf_101, 0, sizeof(char)    *(65)    );
    i_102=0;
    negative_103=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_103=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_104=val_%base;
        buf_101[i_102++]=((digit_104<10)?(48+digit_104):(97+(digit_104-10)));
        val_/=base;
    }
    if(    negative_103    ) {
        putchar(45);
    }
    while(    --i_102>=0    ) {
        putchar(buf_101[i_102]);
    }
}

int printf(const char* fmt, ...){
va_list ap_105;
const char* p_106;
int lcount_107;
unsigned long  int val__108;
unsigned long  long val__109;
long val__110;
long long val__111;
int i_112;
int val__113;
unsigned int val__114;
unsigned long  int val__115;
char c_117;
memset(&ap_105, 0, sizeof(va_list));
p_106 = (void*)0;
    __builtin_va_start(ap_105,fmt);
    for(    p_106=fmt    ;    *p_106    ;    p_106++    ){
        if(        *p_106!=37        ) {
            putchar(*p_106);
            continue;
        }
        p_106++;
        if(        *p_106==108        ) {
            lcount_107=1;
            if(            *(p_106+1)==108            ) {
                lcount_107=2;
                p_106++;
            }
            p_106++;
            switch (            *p_106) {
                case 120:
                {
                    if(                    lcount_107==1                    ) {
                        val__108=__builtin_va_arg(ap_105,unsigned long  int);
                        printlong(val__108,16,0);
                    }
                    else {
                        val__109=__builtin_va_arg(ap_105,unsigned long  long);
                        printlonglong(val__109,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_107==1                    ) {
                        val__110=__builtin_va_arg(ap_105,long);
                        printlong(val__110,10,1);
                    }
                    else {
                        val__111=__builtin_va_arg(ap_105,long  long);
                        printlonglong(val__111,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_112=0                    ;                    i_112<lcount_107                    ;                    i_112++                    ){
                        putchar(108);
                    }
                    putchar(*p_106);
                    break;
                }
            }
        }
        else {
            switch (            *p_106) {
                case 100:
                {
                    val__113=__builtin_va_arg(ap_105,int);
                    printint(val__113,10,1);
                    break;
                }
                case 120:
                {
                    val__114=__builtin_va_arg(ap_105,unsigned int);
                    printint(val__114,16,0);
                    break;
                }
                case 112:
                {
                    val__115=(unsigned long  int)__builtin_va_arg(ap_105,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__115,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_116=__builtin_va_arg(ap_105,const char*);
                    if(                    !s_116                    ) {
                        s_116="(null)";
                    }
                    while(                    *s_116                    ) {
                        putchar(*s_116++);
                    }
                    break;
                }
                case 99:
                {
                    c_117=(char)__builtin_va_arg(ap_105,int);
                    putchar(c_117);
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
                    putchar(*p_106);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_105);
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
void* __right_value1 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value1=__builtin_string(""))));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* result_118;
void* __result_obj__27;
    result_118=((void*)0);
    size=(size+7&~7);
    result_118=calloc(1,size);
    __result_obj__27 = result_118;
    return __result_obj__27;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_119;
struct sMemHeaderTiny* prev_it_120;
struct sMemHeaderTiny* next_it_121;
unsigned long  int size_122;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_119=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_119->allocated!=177783            ) {
                return;
            }
            it_119->allocated=0;
            prev_it_120=it_119->prev;
            next_it_121=it_119->next;
            if(            gAllocMem==it_119            ) {
                gAllocMem=(struct sMemHeader*)next_it_121;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_120                ) {
                    prev_it_120->next=next_it_121;
                }
                if(                next_it_121                ) {
                    next_it_121->prev=prev_it_120;
                }
            }
            size_122=it_119->size;
            free(it_119);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_123;
struct sMemHeaderTiny* it_124;
void* __result_obj__28;
    if(    gComeDebugLib    ) {
    }
    else {
        result_123=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_124=result_123;
        it_124->allocated=177783;
        it_124->class_name=class_name;
        it_124->sname=sname;
        it_124->sline=sline;
        it_124->size=size+sizeof(struct sMemHeaderTiny);
        it_124->free_next=((void*)0);
        it_124->next=(struct sMemHeaderTiny*)gAllocMem;
        it_124->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_124;
        }
        gAllocMem=(struct sMemHeader*)it_124;
        gNumAlloc++;
        __result_obj__28 = (char*)result_123+sizeof(struct sMemHeaderTiny);
        return __result_obj__28;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_125;
char* __result_obj__29;
struct sMemHeaderTiny* it_126;
char* __result_obj__30;
    if(    gComeDebugLib    ) {
        it_125=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_125->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_125);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__29 = it_125->class_name;
        return __result_obj__29;
    }
    else {
        it_126=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_126->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_126);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__30 = it_126->class_name;
        return __result_obj__30;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_127;
unsigned long  int* ref_count_128;
unsigned long  int* size2_129;
void* __result_obj__31;
    mem_127=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_128=(unsigned long  int*)mem_127;
    *ref_count_128=0;
    size2_129=(unsigned long  int*)(mem_127+sizeof(unsigned long  int));
    *size2_129=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__31 = mem_127+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__31;
}

void come_free(void* mem){
unsigned long  int* ref_count_130;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_130=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_130);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__32;
char* mem_131;
unsigned long  int* size_p_132;
unsigned long  int size_133;
void* result_134;
void* __result_obj__33;
    if(    !block    ) {
        __result_obj__32 = ((void*)0);
        return __result_obj__32;
    }
    mem_131=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_132=(unsigned long  int*)(mem_131+sizeof(unsigned long  int));
    size_133=*size_p_132-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_134=come_calloc_v2(1,size_133,sname,sline,class_name);
    memcpy(result_134,block,size_133);
    __result_obj__33 = result_134;
    return __result_obj__33;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__34;
unsigned long  int* ref_count_135;
void* __result_obj__35;
    if(    mem==((void*)0)    ) {
        __result_obj__34 = mem;
        return __result_obj__34;
    }
    ref_count_135=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_135)++;
    __result_obj__35 = mem;
    return __result_obj__35;
}

void* come_print_ref_count(void* mem){
void* __result_obj__36;
unsigned long  int* ref_count_136;
void* __result_obj__37;
    if(    mem==((void*)0)    ) {
        __result_obj__36 = mem;
        return __result_obj__36;
    }
    ref_count_136=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_136);
    __result_obj__37 = mem;
    return __result_obj__37;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_137;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_137=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_137;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__38;
void* __result_obj__39;
unsigned long  int* ref_count_138;
unsigned long  int count_139;
void (*finalizer_140)(void*);
void* __result_obj__40;
void* __result_obj__41;
memset(&finalizer_140, 0, sizeof(void (*)(void*)));
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
    ref_count_138=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_138)--;
    }
    count_139=*ref_count_138;
    if(    !no_free&&count_139<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_140=protocol_fun;
            finalizer_140(protocol_obj);
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
void (*finalizer_141)(void*);
void (*finalizer_142)(void*);
void (*finalizer_143)(void*);
unsigned long  int* ref_count_144;
unsigned long  int count_145;
void (*finalizer_146)(void*);
void (*finalizer_147)(void*);
void (*finalizer_148)(void*);
memset(&finalizer_141, 0, sizeof(void (*)(void*)));
memset(&finalizer_142, 0, sizeof(void (*)(void*)));
memset(&finalizer_143, 0, sizeof(void (*)(void*)));
memset(&finalizer_146, 0, sizeof(void (*)(void*)));
memset(&finalizer_147, 0, sizeof(void (*)(void*)));
memset(&finalizer_148, 0, sizeof(void (*)(void*)));
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
                finalizer_141=protocol_fun;
                finalizer_141(protocol_obj);
            }
            finalizer_142=fun;
            finalizer_142(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_143=protocol_fun;
                finalizer_143(protocol_obj);
            }
        }
    }
    else {
        ref_count_144=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_144)--;
        }
        count_145=*ref_count_144;
        if(        !no_free&&count_145<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_146=protocol_fun;
                        finalizer_146(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_147=fun;
                        finalizer_147(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_148=protocol_fun;
                        finalizer_148(protocol_obj);
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
int len_149;
void* __right_value2 = (void*)0;
char* result_150;
char* __result_obj__43;
    if(    str==((void*)0)    ) {
        __result_obj__42 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__42 = come_decrement_ref_count(__result_obj__42, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__42;
    }
    len_149=strlen(str)+1;
    result_150=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_149)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_150,str,len_149);
    __result_obj__43 = (char*)come_increment_ref_count(result_150);
    (result_150 = come_decrement_ref_count(result_150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value3 = (void*)0;
char* __result_obj__44;
    __result_obj__44 = (char*)come_increment_ref_count(((char*)(__right_value3=come_get_stackframe())));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value4 = (void*)0;
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
void* __right_value5 = (void*)0;
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
void* __right_value6 = (void*)0;
struct buffer* result_151;
void* __right_value7 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__49;
    if(    self==((void*)0)    ) {
        __result_obj__48 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__48, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__48;
    }
    result_151=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_151->size=self->size;
    __dec_obj3=result_151->buf,
    result_151->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_151->len=self->len;
    memcpy(result_151->buf,self->buf,self->len);
    __result_obj__49 = (struct buffer*)come_increment_ref_count(result_151);
    come_call_finalizer(buffer_finalize, result_151, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__49;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
_Bool __result_obj__50;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__50 = string_equals(((char*)(__right_value8=buffer_to_string(left))),((char*)(__right_value9=buffer_to_string(right))));
    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value10 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value11 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__52;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__51 = self;
        return __result_obj__51;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__52 = self;
    return __result_obj__52;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__53;
void* __right_value12 = (void*)0;
char* old_buf_155;
int old_len_156;
int new_size_157;
void* __right_value13 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__54;
    if(    self==((void*)0)    ) {
        __result_obj__53 = ((void*)0);
        return __result_obj__53;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_155=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_156=self->len;
        new_size_157=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_157)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_155,old_len_156);
        self->buf[old_len_156]=0;
        self->size=new_size_157;
        (old_buf_155 = come_decrement_ref_count(old_buf_155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__54 = self;
    return __result_obj__54;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__55;
int size_158;
void* __right_value14 = (void*)0;
char* old_buf_159;
int old_len_160;
int new_size_161;
void* __right_value15 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__56;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__55 = self;
        return __result_obj__55;
    }
    size_158=strlen(mem);
    if(    self->len+size_158+1+1>=self->size    ) {
        old_buf_159=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_159,self->buf,self->size);
        old_len_160=self->len;
        new_size_161=(self->size+size_158+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_161)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_159,old_len_160);
        self->buf[old_len_160]=0;
        self->size=new_size_161;
        (old_buf_159 = come_decrement_ref_count(old_buf_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_158);
    self->len+=size_158;
    self->buf[self->len]=0;
    __result_obj__56 = self;
    return __result_obj__56;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__57;
va_list args_162;
char* result_163;
int len_164;
struct buffer* __result_obj__58;
void* __right_value16 = (void*)0;
char* mem_165;
int size_166;
void* __right_value17 = (void*)0;
char* old_buf_167;
int old_len_168;
int new_size_169;
void* __right_value18 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__59;
result_163 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__57 = self;
        return __result_obj__57;
    }
    __builtin_va_start(args_162,msg);
    len_164=vasprintf(&result_163,msg,args_162);
    __builtin_va_end(args_162);
    if(    len_164<0    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    mem_165=(char*)come_increment_ref_count(__builtin_string(result_163));
    size_166=strlen(mem_165);
    if(    self->len+size_166+1+1>=self->size    ) {
        old_buf_167=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_167,self->buf,self->size);
        old_len_168=self->len;
        new_size_169=(self->size+size_166+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_169)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_167,old_len_168);
        self->buf[old_len_168]=0;
        self->size=new_size_169;
        (old_buf_167 = come_decrement_ref_count(old_buf_167, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_165,size_166);
    self->len+=size_166;
    self->buf[self->len]=0;
    free(result_163);
    __result_obj__59 = self;
    (mem_165 = come_decrement_ref_count(mem_165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__59;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__60;
int size_170;
void* __right_value19 = (void*)0;
char* old_buf_171;
int old_len_172;
int new_size_173;
void* __right_value20 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__61;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__60 = self;
        return __result_obj__60;
    }
    size_170=strlen(mem)+1;
    if(    self->len+size_170+1+1+1>=self->size    ) {
        old_buf_171=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_171,self->buf,self->size);
        old_len_172=self->len;
        new_size_173=(self->size+size_170+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_173)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_171,old_len_172);
        self->buf[old_len_172]=0;
        self->size=new_size_173;
        (old_buf_171 = come_decrement_ref_count(old_buf_171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_170);
    self->len+=size_170;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__62;
int* mem_174;
int size_175;
void* __right_value21 = (void*)0;
char* old_buf_176;
int old_len_177;
int new_size_178;
void* __right_value22 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__63;
    if(    self==((void*)0)    ) {
        __result_obj__62 = ((void*)0);
        return __result_obj__62;
    }
    mem_174=&value;
    size_175=sizeof(int);
    if(    self->len+size_175+1+1>=self->size    ) {
        old_buf_176=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_176,self->buf,self->size);
        old_len_177=self->len;
        new_size_178=(self->size+size_175+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_178)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_176,old_len_177);
        self->buf[old_len_177]=0;
        self->size=new_size_178;
        (old_buf_176 = come_decrement_ref_count(old_buf_176, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_174,size_175);
    self->len+=size_175;
    self->buf[self->len]=0;
    __result_obj__63 = self;
    return __result_obj__63;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_179;
int size_180;
void* __right_value23 = (void*)0;
char* old_buf_181;
int old_len_182;
int new_size_183;
void* __right_value24 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__64;
    mem_179=&value;
    size_180=sizeof(long);
    if(    self->len+size_180+1+1>=self->size    ) {
        old_buf_181=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_181,self->buf,self->size);
        old_len_182=self->len;
        new_size_183=(self->size+size_180+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_183)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_181,old_len_182);
        self->buf[old_len_182]=0;
        self->size=new_size_183;
        (old_buf_181 = come_decrement_ref_count(old_buf_181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_179,size_180);
    self->len+=size_180;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__65;
short* mem_184;
int size_185;
void* __right_value25 = (void*)0;
char* old_buf_186;
int old_len_187;
int new_size_188;
void* __right_value26 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__66;
    if(    self==((void*)0)    ) {
        __result_obj__65 = ((void*)0);
        return __result_obj__65;
    }
    mem_184=&value;
    size_185=sizeof(short);
    if(    self->len+size_185+1+1>=self->size    ) {
        old_buf_186=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_186,self->buf,self->size);
        old_len_187=self->len;
        new_size_188=(self->size+size_185+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_188)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_186,old_len_187);
        self->buf[old_len_187]=0;
        self->size=new_size_188;
        (old_buf_186 = come_decrement_ref_count(old_buf_186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_184,size_185);
    self->len+=size_185;
    self->buf[self->len]=0;
    __result_obj__66 = self;
    return __result_obj__66;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__67;
int len_189;
int new_size_190;
void* __right_value27 = (void*)0;
char* __dec_obj12;
int i_191;
struct buffer* __result_obj__68;
    if(    self==((void*)0)    ) {
        __result_obj__67 = ((void*)0);
        return __result_obj__67;
    }
    len_189=self->len;
    len_189=(len_189+3)&~3;
    if(    len_189>=self->size    ) {
        new_size_190=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_190)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_190;
    }
    for(    i_191=self->len    ;    i_191<len_189    ;    i_191++    ){
        self->buf[i_191]=0;
    }
    self->len=len_189;
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
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct buffer* result_192;
struct buffer* __result_obj__69;
struct buffer* __result_obj__70;
    result_192=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__69 = (struct buffer*)come_increment_ref_count(result_192);
        come_call_finalizer(buffer_finalize, result_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__69, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__69;
    }
    buffer_append_str(result_192,self);
    __result_obj__70 = (struct buffer*)come_increment_ref_count(result_192);
    come_call_finalizer(buffer_finalize, result_192, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__70;
}

char* buffer_to_string(struct buffer* self){
void* __right_value30 = (void*)0;
char* __result_obj__71;
void* __right_value31 = (void*)0;
char* __result_obj__72;
    if(    self==((void*)0)    ) {
        __result_obj__71 = (char*)come_increment_ref_count(((char*)(__right_value30=__builtin_string(""))));
        (__right_value30 = come_decrement_ref_count(__right_value30, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__71 = come_decrement_ref_count(__result_obj__71, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__71;
    }
    __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value31=__builtin_string(self->buf))));
    (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__72;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__73;
    __result_obj__73 = self->buf;
    return __result_obj__73;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value32 = (void*)0;
void* __right_value33 = (void*)0;
struct buffer* result_193;
struct buffer* __result_obj__74;
    result_193=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_193,self,sizeof(char)*len);
    __result_obj__74 = (struct buffer*)come_increment_ref_count(result_193);
    come_call_finalizer(buffer_finalize, result_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__74, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__74;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value34 = (void*)0;
void* __right_value35 = (void*)0;
struct buffer* result_194;
int i_195;
struct buffer* __result_obj__75;
    result_194=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_195=0    ;    i_195<len    ;    i_195++    ){
        buffer_append(result_194,self[i_195],strlen(self[i_195]));
    }
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_194);
    come_call_finalizer(buffer_finalize, result_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct buffer* result_196;
struct buffer* __result_obj__76;
    result_196=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_196,(char*)self,sizeof(short)*len);
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_196);
    come_call_finalizer(buffer_finalize, result_196, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct buffer* result_197;
struct buffer* __result_obj__77;
    result_197=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_197,(char*)self,sizeof(int)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_197);
    come_call_finalizer(buffer_finalize, result_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value40 = (void*)0;
void* __right_value41 = (void*)0;
struct buffer* result_198;
struct buffer* __result_obj__78;
    result_198=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_198,(char*)self,sizeof(long)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_198);
    come_call_finalizer(buffer_finalize, result_198, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct buffer* result_199;
struct buffer* __result_obj__79;
    result_199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_199,(char*)self,sizeof(float)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_199);
    come_call_finalizer(buffer_finalize, result_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value44 = (void*)0;
void* __right_value45 = (void*)0;
struct buffer* result_200;
struct buffer* __result_obj__80;
    result_200=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_200,(char*)self,sizeof(double)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_200);
    come_call_finalizer(buffer_finalize, result_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

char* buffer_printable(struct buffer* self){
int len_201;
void* __right_value46 = (void*)0;
char* result_202;
int n_203;
int i_204;
unsigned char c_205;
char* __result_obj__81;
    len_201=self->len;
    result_202=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_201*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_203=0;
    for(    i_204=0    ;    i_204<len_201    ;    i_204++    ){
        c_205=self->buf[i_204];
        if(        (c_205>=0&&c_205<32)||c_205==127        ) {
            result_202[n_203++]=94;
            result_202[n_203++]=c_205+65-1;
        }
        else if(        c_205>127        ) {
            result_202[n_203++]=63;
        }
        else {
            result_202[n_203++]=c_205;
        }
    }
    result_202[n_203]=0;
    __result_obj__81 = (char*)come_increment_ref_count(result_202);
    (result_202 = come_decrement_ref_count(result_202, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__81 = come_decrement_ref_count(__result_obj__81, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__81;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_206;
struct list$1char$* __result_obj__83;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_206=0    ;    i_206<num_value    ;    i_206++    ){
        list$1char$_push_back(self,values[i_206]);
    }
    __result_obj__83 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__83, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__83;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value48 = (void*)0;
struct list_item$1char$* litem_207;
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_208;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_209;
struct list$1char$* __result_obj__82;
    if(    self->len==0    ) {
        litem_207=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value48=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1    ) {
        litem_208=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result_obj__82 = self;
    return __result_obj__82;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_210;
struct list_item$1char$* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value51 = (void*)0;
struct list$1char$* __result_obj__84;
    __result_obj__84 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value51=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value51, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_212;
struct list$1char$p* __result_obj__86;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_212=0    ;    i_212<num_value    ;    i_212++    ){
        list$1char$p_push_back(self,values[i_212]);
    }
    __result_obj__86 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__86, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__86;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value53 = (void*)0;
struct list_item$1char$p* litem_213;
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_214;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_215;
struct list$1char$p* __result_obj__85;
    if(    self->len==0    ) {
        litem_213=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value53=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1    ) {
        litem_214=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result_obj__85 = self;
    return __result_obj__85;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_216;
struct list_item$1char$p* prev_it_217;
    it_216=self->head;
    while(    it_216!=((void*)0)    ) {
        prev_it_217=it_216;
        it_216=it_216->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value52 = (void*)0;
void* __right_value56 = (void*)0;
struct list$1char$p* __result_obj__87;
    __result_obj__87 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value56=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value56, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_218;
struct list$1short$* __result_obj__89;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_218=0    ;    i_218<num_value    ;    i_218++    ){
        list$1short$_push_back(self,values[i_218]);
    }
    __result_obj__89 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__89, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__89;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value58 = (void*)0;
struct list_item$1short$* litem_219;
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_220;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_221;
struct list$1short$* __result_obj__88;
    if(    self->len==0    ) {
        litem_219=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value58=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1    ) {
        litem_220=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__88 = self;
    return __result_obj__88;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_222;
struct list_item$1short$* prev_it_223;
    it_222=self->head;
    while(    it_222!=((void*)0)    ) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1short$* __result_obj__90;
    __result_obj__90 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value61=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value61, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_224;
struct list$1int$* __result_obj__92;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_224=0    ;    i_224<num_value    ;    i_224++    ){
        list$1int$_push_back(self,values[i_224]);
    }
    __result_obj__92 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__92, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__92;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value63 = (void*)0;
struct list_item$1int$* litem_225;
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_226;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_227;
struct list$1int$* __result_obj__91;
    if(    self->len==0    ) {
        litem_225=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value63=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_225->prev=((void*)0);
        litem_225->next=((void*)0);
        litem_225->item=item;
        self->tail=litem_225;
        self->head=litem_225;
    }
    else if(    self->len==1    ) {
        litem_226=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_226->prev=self->head;
        litem_226->next=((void*)0);
        litem_226->item=item;
        self->tail=litem_226;
        self->head->next=litem_226;
    }
    else {
        litem_227=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_227->prev=self->tail;
        litem_227->next=((void*)0);
        litem_227->item=item;
        self->tail->next=litem_227;
        self->tail=litem_227;
    }
    self->len++;
    __result_obj__91 = self;
    return __result_obj__91;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_228;
struct list_item$1int$* prev_it_229;
    it_228=self->head;
    while(    it_228!=((void*)0)    ) {
        prev_it_229=it_228;
        it_228=it_228->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_229, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1int$* __result_obj__93;
    __result_obj__93 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value66=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value66, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_230;
struct list$1long$* __result_obj__95;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_230=0    ;    i_230<num_value    ;    i_230++    ){
        list$1long$_push_back(self,values[i_230]);
    }
    __result_obj__95 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__95, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__95;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value68 = (void*)0;
struct list_item$1long$* litem_231;
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_232;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_233;
struct list$1long$* __result_obj__94;
    if(    self->len==0    ) {
        litem_231=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value68=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_231->prev=((void*)0);
        litem_231->next=((void*)0);
        litem_231->item=item;
        self->tail=litem_231;
        self->head=litem_231;
    }
    else if(    self->len==1    ) {
        litem_232=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_232->prev=self->head;
        litem_232->next=((void*)0);
        litem_232->item=item;
        self->tail=litem_232;
        self->head->next=litem_232;
    }
    else {
        litem_233=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_233->prev=self->tail;
        litem_233->next=((void*)0);
        litem_233->item=item;
        self->tail->next=litem_233;
        self->tail=litem_233;
    }
    self->len++;
    __result_obj__94 = self;
    return __result_obj__94;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_234;
struct list_item$1long$* prev_it_235;
    it_234=self->head;
    while(    it_234!=((void*)0)    ) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_235, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1long$* __result_obj__96;
    __result_obj__96 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value71=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value71, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_236;
struct list$1float$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_236=0    ;    i_236<num_value    ;    i_236++    ){
        list$1float$_push_back(self,values[i_236]);
    }
    __result_obj__98 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__98, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__98;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value73 = (void*)0;
struct list_item$1float$* litem_237;
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_238;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_239;
struct list$1float$* __result_obj__97;
    if(    self->len==0    ) {
        litem_237=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value73=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        litem_237->item=item;
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1    ) {
        litem_238=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        litem_238->item=item;
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        litem_239->item=item;
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_240;
struct list_item$1float$* prev_it_241;
    it_240=self->head;
    while(    it_240!=((void*)0)    ) {
        prev_it_241=it_240;
        it_240=it_240->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_241, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1float$* __result_obj__99;
    __result_obj__99 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value76=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value76, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_242;
struct list$1double$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_242=0    ;    i_242<num_value    ;    i_242++    ){
        list$1double$_push_back(self,values[i_242]);
    }
    __result_obj__101 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__101, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__101;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value78 = (void*)0;
struct list_item$1double$* litem_243;
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_244;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_245;
struct list$1double$* __result_obj__100;
    if(    self->len==0    ) {
        litem_243=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value78=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        litem_243->item=item;
        self->tail=litem_243;
        self->head=litem_243;
    }
    else if(    self->len==1    ) {
        litem_244=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_244->prev=self->head;
        litem_244->next=((void*)0);
        litem_244->item=item;
        self->tail=litem_244;
        self->head->next=litem_244;
    }
    else {
        litem_245=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_245->prev=self->tail;
        litem_245->next=((void*)0);
        litem_245->item=item;
        self->tail->next=litem_245;
        self->tail=litem_245;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_246;
struct list_item$1double$* prev_it_247;
    it_246=self->head;
    while(    it_246!=((void*)0)    ) {
        prev_it_247=it_246;
        it_246=it_246->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_247, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1double$* __result_obj__102;
    __result_obj__102 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value81=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value81, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value82 = (void*)0;
char* __result_obj__103;
int len_248;
void* __right_value83 = (void*)0;
char* result_249;
char* __result_obj__104;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__103 = (char*)come_increment_ref_count(((char*)(__right_value82=__builtin_string(""))));
        (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__103 = come_decrement_ref_count(__result_obj__103, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__103;
    }
    len_248=strlen(self)+strlen(right);
    result_249=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_248+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_249,self,len_248+1);
    strncat(result_249,right,len_248+1);
    __result_obj__104 = (char*)come_increment_ref_count(result_249);
    (result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__104;
}

char* string_operator_add(char* self, char* right){
void* __right_value84 = (void*)0;
char* __result_obj__105;
int len_250;
void* __right_value85 = (void*)0;
char* result_251;
char* __result_obj__106;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__105 = (char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(""))));
        (__right_value84 = come_decrement_ref_count(__right_value84, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__105;
    }
    len_250=strlen(self)+strlen(right);
    result_251=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_250+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_251,self,len_250+1);
    strncat(result_251,right,len_250+1);
    __result_obj__106 = (char*)come_increment_ref_count(result_251);
    (result_251 = come_decrement_ref_count(result_251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__106;
}

char* charp_operator_mult(char* self, int right){
void* __right_value86 = (void*)0;
char* __result_obj__107;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_252;
int i_253;
void* __right_value89 = (void*)0;
char* __result_obj__108;
    if(    self==((void*)0)    ) {
        __result_obj__107 = (char*)come_increment_ref_count(((char*)(__right_value86=__builtin_string(""))));
        (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__107;
    }
    buf_252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_253=0    ;    i_253<right    ;    i_253++    ){
        buffer_append_str(buf_252,self);
    }
    __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value89=buffer_to_string(buf_252))));
    come_call_finalizer(buffer_finalize, buf_252, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__108;
}

char* string_operator_mult(char* self, int right){
void* __right_value90 = (void*)0;
char* __result_obj__109;
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct buffer* buf_254;
int i_255;
void* __right_value93 = (void*)0;
char* __result_obj__110;
    if(    self==((void*)0)    ) {
        __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value90=__builtin_string(""))));
        (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__109;
    }
    buf_254=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_255=0    ;    i_255<right    ;    i_255++    ){
        buffer_append_str(buf_254,self);
    }
    __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value93=buffer_to_string(buf_254))));
    come_call_finalizer(buffer_finalize, buf_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__110;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_256;
int i_257;
    result_256=(_Bool)0;
    for(    i_257=0    ;    i_257<len    ;    i_257++    ){
        if(        strncmp(self[i_257],str,strlen(self[i_257]))==0        ) {
            result_256=(_Bool)1;
            break;
        }
    }
    return result_256;
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
int result_258;
char* p_259;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_258=0;
    p_259=value;
    while(    *p_259    ) {
        result_258+=(*p_259);
        p_259++;
    }
    return result_258;
}

unsigned int string_get_hash_key(char* value){
int result_260;
char* p_261;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_260=0;
    p_261=value;
    while(    *p_261    ) {
        result_260+=(*p_261);
        p_261++;
    }
    return result_260;
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
_Bool result_262;
    result_262=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_262;
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
_Bool result_263;
    result_263=(c>=32&&c<=126);
    return result_263;
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
void* __right_value94 = (void*)0;
char* __result_obj__111;
int len_264;
void* __right_value95 = (void*)0;
char* result_265;
int i_266;
char* __result_obj__112;
    if(    str==((void*)0)    ) {
        __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value94=__builtin_string(""))));
        (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__111;
    }
    len_264=strlen(str);
    result_265=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_264+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_266=0    ;    i_266<len_264    ;    i_266++    ){
        result_265[i_266]=str[len_264-i_266-1];
    }
    result_265[len_264]=0;
    __result_obj__112 = (char*)come_increment_ref_count(result_265);
    (result_265 = come_decrement_ref_count(result_265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__112;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value96 = (void*)0;
char* __result_obj__113;
int len_267;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
char* __result_obj__114;
void* __right_value99 = (void*)0;
char* __result_obj__115;
void* __right_value100 = (void*)0;
char* __result_obj__116;
void* __right_value101 = (void*)0;
char* result_268;
char* __result_obj__117;
    if(    str==((void*)0)    ) {
        __result_obj__113 = (char*)come_increment_ref_count(((char*)(__right_value96=__builtin_string(""))));
        (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__113;
    }
    len_267=strlen(str);
    if(    head<0    ) {
        head+=len_267;
    }
    if(    tail<0    ) {
        tail+=len_267+1;
    }
    if(    head>tail    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value98=charp_reverse(((char*)(__right_value97=charp_substring(str,tail,head)))))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_267    ) {
        tail=len_267;
    }
    if(    head==tail    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    tail-head+1<1    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    result_268=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_268,str+head,tail-head);
    result_268[tail-head]=0;
    __result_obj__117 = (char*)come_increment_ref_count(result_268);
    (result_268 = come_decrement_ref_count(result_268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__117;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value102 = (void*)0;
char* __result_obj__118;
int len_269;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
char* __result_obj__119;
void* __right_value105 = (void*)0;
char* __result_obj__120;
void* __right_value106 = (void*)0;
char* __result_obj__121;
void* __right_value107 = (void*)0;
char* result_270;
char* __result_obj__122;
    if(    str==((void*)0)    ) {
        __result_obj__118 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__118;
    }
    len_269=strlen(str);
    if(    head<0    ) {
        head+=len_269;
    }
    if(    tail<0    ) {
        tail+=len_269+1;
    }
    if(    head>tail    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value104=charp_reverse(((char*)(__right_value103=charp_substring(str,tail,head)))))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_269    ) {
        tail=len_269;
    }
    if(    head==tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    tail-head+1<1    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    result_270=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_270,str+head,tail-head);
    result_270[tail-head]=0;
    __result_obj__122 = (char*)come_increment_ref_count(result_270);
    (result_270 = come_decrement_ref_count(result_270, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__122;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value108 = (void*)0;
char* __result_obj__123;
int len_271;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
char* __result_obj__124;
void* __right_value111 = (void*)0;
char* __result_obj__125;
void* __right_value112 = (void*)0;
char* __result_obj__126;
void* __right_value113 = (void*)0;
char* result_272;
char* __result_obj__127;
    if(    str==((void*)0)    ) {
        __result_obj__123 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__123;
    }
    len_271=strlen(str);
    if(    head<0    ) {
        head+=len_271;
    }
    if(    tail<0    ) {
        tail+=len_271+1;
    }
    if(    head>tail    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value110=charp_reverse(((char*)(__right_value109=charp_substring(str,tail,head)))))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_271    ) {
        tail=len_271;
    }
    if(    head==tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    tail-head+1<1    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    result_272=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_272,str+head,tail-head);
    result_272[tail-head]=0;
    __result_obj__127 = (char*)come_increment_ref_count(result_272);
    (result_272 = come_decrement_ref_count(result_272, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__127;
}

char* xsprintf(char* msg, ...){
void* __right_value114 = (void*)0;
char* __result_obj__128;
va_list args_273;
char* result_274;
int len_275;
void* __right_value115 = (void*)0;
char* __result_obj__129;
void* __right_value116 = (void*)0;
char* result2_276;
char* __result_obj__130;
result_274 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__128;
    }
    __builtin_va_start(args_273,msg);
    len_275=vasprintf(&result_274,msg,args_273);
    __builtin_va_end(args_273);
    if(    len_275<0    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    result2_276=(char*)come_increment_ref_count(__builtin_string(result_274));
    free(result_274);
    __result_obj__130 = (char*)come_increment_ref_count(result2_276);
    (result2_276 = come_decrement_ref_count(result2_276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__130;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value117 = (void*)0;
char* __result_obj__131;
int len_277;
void* __right_value118 = (void*)0;
char* __result_obj__132;
void* __right_value119 = (void*)0;
char* __result_obj__133;
void* __right_value120 = (void*)0;
char* result_278;
char* __result_obj__134;
    if(    str==((void*)0)    ) {
        __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__131;
    }
    len_277=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(str))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    if(    head<0    ) {
        head+=len_277;
    }
    if(    tail<0    ) {
        tail+=len_277+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(str))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    tail>=len_277    ) {
        tail=len_277;
    }
    result_278=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_277-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_278,str,head);
    memcpy(result_278+head,str+tail,len_277-tail);
    result_278[len_277-(tail-head)]=0;
    __result_obj__134 = (char*)come_increment_ref_count(result_278);
    (result_278 = come_decrement_ref_count(result_278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_279;
struct list_item$1char$ph* prev_it_280;
    it_279=self->head;
    while(    it_279!=((void*)0)    ) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_280, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value127 = (void*)0;
struct list_item$1char$ph* litem_284;
char* __dec_obj13;
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_285;
char* __dec_obj14;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_286;
char* __dec_obj15;
struct list$1char$ph* __result_obj__137;
    if(    self->len==0    ) {
        litem_284=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value127=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_284->prev=((void*)0);
        litem_284->next=((void*)0);
        __dec_obj13=litem_284->item,
        litem_284->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_284;
        self->head=litem_284;
    }
    else if(    self->len==1    ) {
        litem_285=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_285->prev=self->head;
        litem_285->next=((void*)0);
        __dec_obj14=litem_285->item,
        litem_285->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_285;
        self->head->next=litem_285;
    }
    else {
        litem_286=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_286->prev=self->tail;
        litem_286->next=((void*)0);
        __dec_obj15=litem_286->item,
        litem_286->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_286;
        self->tail=litem_286;
    }
    self->len++;
    __result_obj__137 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__137;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct list$1char$ph* __result_obj__136;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1char$ph* result_281;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct buffer* str_282;
int i_283;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1char$ph* __result_obj__138;
    if(    self==((void*)0)    ) {
        __result_obj__136 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value122=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value122, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__136;
    }
    result_281=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_282=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_283=0    ;    i_283<charp_length(self)    ;    i_283++    ){
        if(        self[i_283]==c        ) {
            list$1char$ph_push_back(result_281,(char*)come_increment_ref_count(__builtin_string(str_282->buf)));
            buffer_reset(str_282);
        }
        else {
            buffer_append_char(str_282,self[i_283]);
        }
    }
    if(    buffer_length(str_282)!=0    ) {
        list$1char$ph_push_back(result_281,(char*)come_increment_ref_count(__builtin_string(str_282->buf)));
    }
    __result_obj__138 = (struct list$1char$ph*)come_increment_ref_count(result_281);
    come_call_finalizer(list$1char$ph$p_finalize, result_281, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_282, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__138, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__138;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value132 = (void*)0;
char* __result_obj__139;
    __result_obj__139 = (char*)come_increment_ref_count(((char*)(__right_value132=xsprintf(msg,self))));
    (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__139 = come_decrement_ref_count(__result_obj__139, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__139;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value133 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value133=xsprintf(msg,self))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* charp_printable(char* str){
int len_287;
void* __right_value134 = (void*)0;
char* result_288;
int n_289;
int i_290;
char c_291;
char* __result_obj__141;
    len_287=charp_length(str);
    result_288=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_287*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_289=0;
    for(    i_290=0    ;    i_290<len_287    ;    i_290++    ){
        c_291=str[i_290];
        if(        (c_291>=0&&c_291<32)||c_291==127        ) {
            result_288[n_289++]=94;
            result_288[n_289++]=c_291+65-1;
        }
        else {
            result_288[n_289++]=c_291;
        }
    }
    result_288[n_289]=0;
    __result_obj__141 = (char*)come_increment_ref_count(result_288);
    (result_288 = come_decrement_ref_count(result_288, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value135 = (void*)0;
char* __result_obj__142;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct buffer* result_292;
char* p_293;
char* p2_294;
void* __right_value138 = (void*)0;
char* __result_obj__143;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__142 = (char*)come_increment_ref_count(((char*)(__right_value135=__builtin_string(self))));
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__142;
    }
    result_292=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_293=self;
    while(    (_Bool)1    ) {
        p2_294=strstr(p_293,str);
        if(        p2_294==((void*)0)        ) {
            p2_294=p_293;
            while(            *p2_294            ) {
                p2_294++;
            }
            buffer_append(result_292,p_293,p2_294-p_293);
            break;
        }
        buffer_append(result_292,p_293,p2_294-p_293);
        buffer_append_str(result_292,replace);
        p_293=p2_294+strlen(str);
    }
    __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value138=buffer_to_string(result_292))));
    come_call_finalizer(buffer_finalize, result_292, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__143;
}

char* xbasename(char* path){
void* __right_value139 = (void*)0;
char* __result_obj__144;
char* p_295;
void* __right_value140 = (void*)0;
char* __result_obj__145;
void* __right_value141 = (void*)0;
char* __result_obj__146;
void* __right_value142 = (void*)0;
char* __result_obj__147;
    if(    path==((void*)0)    ) {
        __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(""))));
        (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__144;
    }
    p_295=path+strlen(path);
    while(    p_295>=path    ) {
        if(        *p_295==47        ) {
            break;
        }
        else {
            p_295--;
        }
    }
    if(    p_295<path    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(path))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    else {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(p_295+1))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
    (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__147;
}

char* xnoextname(char* path){
void* __right_value143 = (void*)0;
char* __result_obj__148;
void* __right_value144 = (void*)0;
char* path2_296;
char* p_297;
void* __right_value145 = (void*)0;
char* __result_obj__149;
void* __right_value146 = (void*)0;
char* __result_obj__150;
void* __right_value147 = (void*)0;
char* __result_obj__151;
    if(    path==((void*)0)    ) {
        __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__148;
    }
    path2_296=(char*)come_increment_ref_count(xbasename(path));
    p_297=path2_296+strlen(path2_296);
    while(    p_297>=path2_296    ) {
        if(        *p_297==46        ) {
            break;
        }
        else {
            p_297--;
        }
    }
    if(    p_297<path2_296    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(path2_296))));
        (path2_296 = come_decrement_ref_count(path2_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    else {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value146=charp_substring(path2_296,0,p_297-path2_296))));
        (path2_296 = come_decrement_ref_count(path2_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string(""))));
    (path2_296 = come_decrement_ref_count(path2_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__151;
}

char* xextname(char* path){
void* __right_value148 = (void*)0;
char* __result_obj__152;
char* p_298;
void* __right_value149 = (void*)0;
char* __result_obj__153;
void* __right_value150 = (void*)0;
char* __result_obj__154;
void* __right_value151 = (void*)0;
char* __result_obj__155;
    if(    path==((void*)0)    ) {
        __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__152;
    }
    p_298=path+strlen(path);
    while(    p_298>=path    ) {
        if(        *p_298==46        ) {
            break;
        }
        else {
            p_298--;
        }
    }
    if(    p_298<path    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(path))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    else {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(p_298+1))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
    (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__155;
}

char* bool_to_string(_Bool self){
void* __right_value152 = (void*)0;
char* __result_obj__156;
void* __right_value153 = (void*)0;
char* __result_obj__157;
    if(    self    ) {
        __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string("true"))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__156;
    }
    else {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("false"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value154 = (void*)0;
char* __result_obj__158;
void* __right_value155 = (void*)0;
char* __result_obj__159;
    if(    self    ) {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("true"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
    else {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("false"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
}

char* char_to_string(char self){
void* __right_value156 = (void*)0;
char* __result_obj__160;
    __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value156=xsprintf("%c",self))));
    (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__160;
}

char* short_to_string(short self){
void* __right_value157 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%d",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* int_to_string(int self){
void* __right_value158 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%d",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* long_to_string(long self){
void* __right_value159 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%ld",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value160 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%ld",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* float_to_string(float self){
void* __right_value161 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%f",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* double_to_string(double self){
void* __right_value162 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%lf",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* string_to_string(char* self){
void* __right_value163 = (void*)0;
char* __result_obj__167;
void* __right_value164 = (void*)0;
char* __result_obj__168;
    if(    self==((void*)0)    ) {
        __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string(""))));
        (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__167;
    }
    __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__168;
}

char* charp_to_string(char* self){
void* __right_value165 = (void*)0;
char* __result_obj__169;
void* __right_value166 = (void*)0;
char* __result_obj__170;
    if(    self==((void*)0)    ) {
        __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(""))));
        (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__169;
    }
    __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(self))));
    (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value167 = (void*)0;
char* __result_obj__171;
void* __right_value168 = (void*)0;
char* __result_obj__172;
    if(    self==((void*)0)    ) {
        __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(""))));
        (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__171;
    }
    puts(self);
    __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(self))));
    (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__172;
}

char* charp_print(char* self){
void* __right_value169 = (void*)0;
char* __result_obj__173;
void* __right_value170 = (void*)0;
char* __result_obj__174;
    if(    self==((void*)0)    ) {
        __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(""))));
        (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__173;
    }
    printf("%s",self);
    __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(self))));
    (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__174;
}

char* charp_printf(char* self, ...){
void* __right_value171 = (void*)0;
char* __result_obj__175;
char* msg2_299;
va_list args_300;
void* __right_value172 = (void*)0;
char* __result_obj__176;
msg2_299 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(""))));
        (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__175;
    }
    __builtin_va_start(args_300,self);
    vasprintf(&msg2_299,self,args_300);
    __builtin_va_end(args_300);
    printf("%s",msg2_299);
    free(msg2_299);
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(self))));
    (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__176;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_301;
    for(    i_301=0    ;    i_301<self    ;    i_301++    ){
        block(parent,i_301);
    }
}

