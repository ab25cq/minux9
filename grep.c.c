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
static inline void exit(long status){
    __asm volatile("mv   a0, %0   \n" // status → a0
        "li   a7, %1   \n" // SYS_exit → a7
        "ecall         \n" // システムコール発行
        :
        : "r"(status), "i"(70): "a0", "a7", "memory"
    );
    while(    1    ) {
        ;
    }
    __builtin_unreachable();
}

// body function
int main(){
void* __right_value0 = (void*)0;
char* a_0;
void* __right_value1 = (void*)0;
char* b_1;
int __result_obj__1;
    come_heap_init(0, 0, 0);
    a_0=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(4)), "grep.c", 5, "char*"));
    strncpy(a_0,"ABC",4);
    puts(a_0);
    b_1=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(4)), "grep.c", 10, "char*"));
    strncpy(b_1,"QAB",4);
    puts(b_1);
    exit(1);
    __result_obj__1 = 0;
    (a_0 = come_decrement_ref_count(a_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (b_1 = come_decrement_ref_count(b_1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_heap_final();
    return __result_obj__1;
}

void* sbrk(long incr){
char* current_brk_2;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
void* __result_obj__5;
    current_brk_2=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_2==(char*)-1    ) {
        __result_obj__2 = (void*)-1;
        return __result_obj__2;
    }
    if(    incr==0    ) {
        __result_obj__3 = current_brk_2;
        return __result_obj__3;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_2+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__4 = (void*)-1;
        return __result_obj__4;
    }
    __result_obj__5 = current_brk_2;
    return __result_obj__5;
}

struct header* morecore(unsigned int nunits){
char* cp_3;
struct header* up_4;
struct header* __result_obj__6;
struct header* __result_obj__7;
cp_3 = (void*)0;
up_4 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_3=sbrk(nunits*sizeof(struct header));
    if(    cp_3==(char*)-1    ) {
        __result_obj__6 = (void*)0;
        return __result_obj__6;
    }
    up_4=(struct header*)cp_3;
    up_4->size=nunits;
    free((void*)(up_4+1));
    __result_obj__7 = freep;
    return __result_obj__7;
}

void* malloc(unsigned int nbytes){
struct header* p_5;
struct header* prevp_6;
unsigned int nunits_7;
void* __result_obj__8;
void* __result_obj__9;
memset(&p_5, 0, sizeof(struct header*));
memset(&prevp_6, 0, sizeof(struct header*));
memset(&nunits_7, 0, sizeof(unsigned int));
    nunits_7=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_6=freep)==0    ) {
        base.next=freep=prevp_6=&base;
        base.size=0;
    }
    for(    p_5=prevp_6->next    ;    ;    prevp_6=p_5,p_5=p_5->next    ){
        if(        p_5->size>=nunits_7        ) {
            if(            p_5->size==nunits_7            ) {
                prevp_6->next=p_5->next;
            }
            else {
                p_5->size-=nunits_7;
                p_5+=p_5->size;
                p_5->size=nunits_7;
            }
            freep=prevp_6;
            __result_obj__8 = (void*)(p_5+1);
            return __result_obj__8;
        }
        if(        p_5==freep        ) {
            if(            (p_5=morecore(nunits_7))==0            ) {
                __result_obj__9 = (void*)0;
                return __result_obj__9;
            }
        }
    }
}

void free(void* ap){
struct header* bp_8;
struct header* p_9;
memset(&bp_8, 0, sizeof(struct header*));
memset(&p_9, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_8=(struct header*)ap-1;
    for(    p_9=freep    ;    !(bp_8>p_9&&bp_8<p_9->next)    ;    p_9=p_9->next    ){
        if(        p_9>=p_9->next&&(bp_8>p_9||bp_8<p_9->next)        ) {
            break;
        }
    }
    if(    bp_8+bp_8->size==p_9->next    ) {
        bp_8->size+=p_9->next->size;
        bp_8->next=p_9->next->next;
    }
    else {
        bp_8->next=p_9->next;
    }
    if(    p_9+p_9->size==bp_8    ) {
        p_9->size+=bp_8->size;
        p_9->next=bp_8->next;
    }
    else {
        p_9->next=bp_8;
    }
    freep=p_9;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_10;
void* __result_obj__10;
void* ptr_11;
void* __result_obj__11;
    total_size_10=nmemb*size;
    if(    total_size_10==0    ) {
        __result_obj__10 = ((void*)0);
        return __result_obj__10;
    }
    ptr_11=malloc(total_size_10);
    if(    ptr_11!=((void*)0)    ) {
        memset(ptr_11,0,total_size_10);
    }
    __result_obj__11 = ptr_11;
    return __result_obj__11;
}

char* strdup(const char* s){
char* s2_12;
unsigned long  int len_13;
char* p_14;
char* __result_obj__12;
    s2_12=s;
    len_13=strlen(s2_12)+1;
    p_14=malloc(len_13);
    if(    p_14    ) {
        memcpy(p_14,s2_12,len_13);
    }
    __result_obj__12 = p_14;
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
        const char* h_15=haystack;
        const char* n_16=needle;
        while(        *h_15&&*n_16&&(*h_15==*n_16)        ) {
            h_15++;
            n_16++;
        }
        if(        !*n_16        ) {
            __result_obj__14 = (char*)haystack;
            return __result_obj__14;
        }
    }
    __result_obj__15 = ((void*)0);
    return __result_obj__15;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_17;
int i_18;
void* __result_obj__16;
    cdst_17=(char*)dst;
    for(    i_18=0    ;    i_18<n    ;    i_18++    ){
        cdst_17[i_18]=c;
    }
    __result_obj__16 = dst;
    return __result_obj__16;
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
void* __result_obj__17;
void* __result_obj__18;
s_21 = (void*)0;
d_22 = (void*)0;
    if(    n==0    ) {
        __result_obj__17 = dst;
        return __result_obj__17;
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
char* os_23;
char* __result_obj__20;
os_23 = (void*)0;
    os_23=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__20 = os_23;
    return __result_obj__20;
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
char* __result_obj__21;
    d_25=dest;
    while(    *d_25    ) {
        d_25++;
    }
    while(    n--&&*src    ) {
        *d_25++=*src++;
    }
    *d_25=0;
    __result_obj__21 = dest;
    return __result_obj__21;
}

char* strtok(char* s, const char* delim){
static char* next_26;
char* start_27;
char* p_28;
char* __result_obj__22;
int is_delim_30;
char* __result_obj__23;
int is_delim_32;
char* __result_obj__24;
next_26 = (void*)0;
start_27 = (void*)0;
p_28 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_26=s;
    }
    if(    next_26==((void*)0)    ) {
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
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
        __result_obj__23 = ((void*)0);
        return __result_obj__23;
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
    __result_obj__24 = start_27;
    return __result_obj__24;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_33;
int i_35;
int negative_36;
char* __result_obj__25;
int digit_37;
char* __result_obj__26;
    p_33=buf;
    char tmp_34[32];
    memset(&tmp_34, 0, sizeof(char)    *(32)    );
    i_35=0;
    negative_36=0;
    if(    base<2||base>16    ) {
        *p_33=0;
        __result_obj__25 = p_33;
        return __result_obj__25;
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
    __result_obj__26 = buf;
    return __result_obj__26;
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

void putchar(char c){
long _ret_53;
memset(&_ret_53, 0, sizeof(long));
    ({_ret_53; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&c);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_53=_a0; _ret_53; });
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

char* come_get_stackframe(){
void* __right_value2 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value2=__builtin_string(""))));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__27;
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
void* __result_obj__28;
    result_80=((void*)0);
    size=(size+7&~7);
    result_80=calloc(1,size);
    __result_obj__28 = result_80;
    return __result_obj__28;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_81;
struct sMemHeaderTiny* prev_it_82;
struct sMemHeaderTiny* next_it_83;
unsigned long  int size_84;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_81=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_81->allocated!=177783            ) {
                return;
            }
            it_81->allocated=0;
            prev_it_82=it_81->prev;
            next_it_83=it_81->next;
            if(            gAllocMem==it_81            ) {
                gAllocMem=(struct sMemHeader*)next_it_83;
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
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_85;
struct sMemHeaderTiny* it_86;
void* __result_obj__29;
    if(    gComeDebugLib    ) {
    }
    else {
        result_85=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_86=result_85;
        it_86->allocated=177783;
        it_86->class_name=class_name;
        it_86->sname=sname;
        it_86->sline=sline;
        it_86->size=size+sizeof(struct sMemHeaderTiny);
        it_86->free_next=((void*)0);
        it_86->next=(struct sMemHeaderTiny*)gAllocMem;
        it_86->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_86;
        }
        gAllocMem=(struct sMemHeader*)it_86;
        gNumAlloc++;
        __result_obj__29 = (char*)result_85+sizeof(struct sMemHeaderTiny);
        return __result_obj__29;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_87;
char* __result_obj__30;
struct sMemHeaderTiny* it_88;
char* __result_obj__31;
    if(    gComeDebugLib    ) {
        it_87=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_87->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_87);
            exit(2);
        }
        __result_obj__30 = it_87->class_name;
        return __result_obj__30;
    }
    else {
        it_88=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_88->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_88);
            exit(2);
        }
        __result_obj__31 = it_88->class_name;
        return __result_obj__31;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_89;
unsigned long  int* ref_count_90;
unsigned long  int* size2_91;
void* __result_obj__32;
    mem_89=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_90=(unsigned long  int*)mem_89;
    *ref_count_90=0;
    size2_91=(unsigned long  int*)(mem_89+sizeof(unsigned long  int));
    *size2_91=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__32 = mem_89+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__32;
}

void come_free(void* mem){
unsigned long  int* ref_count_92;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_92=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_92);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__33;
char* mem_93;
unsigned long  int* size_p_94;
unsigned long  int size_95;
void* result_96;
void* __result_obj__34;
    if(    !block    ) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    mem_93=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_94=(unsigned long  int*)(mem_93+sizeof(unsigned long  int));
    size_95=*size_p_94-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_96=come_calloc_v2(1,size_95,sname,sline,class_name);
    memcpy(result_96,block,size_95);
    __result_obj__34 = result_96;
    return __result_obj__34;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__35;
unsigned long  int* ref_count_97;
void* __result_obj__36;
    if(    mem==((void*)0)    ) {
        __result_obj__35 = mem;
        return __result_obj__35;
    }
    ref_count_97=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_97)++;
    __result_obj__36 = mem;
    return __result_obj__36;
}

void* come_print_ref_count(void* mem){
void* __result_obj__37;
unsigned long  int* ref_count_98;
void* __result_obj__38;
    if(    mem==((void*)0)    ) {
        __result_obj__37 = mem;
        return __result_obj__37;
    }
    ref_count_98=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_98);
    __result_obj__38 = mem;
    return __result_obj__38;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_99;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_99=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_99;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__39;
void* __result_obj__40;
unsigned long  int* ref_count_100;
unsigned long  int count_101;
void (*finalizer_102)(void*);
void* __result_obj__41;
void* __result_obj__42;
memset(&finalizer_102, 0, sizeof(void (*)(void*)));
    if(    result_obj    ) {
        if(        mem==result_obj        ) {
            __result_obj__39 = mem;
            return __result_obj__39;
        }
    }
    if(    mem==((void*)0)    ) {
        __result_obj__40 = ((void*)0);
        return __result_obj__40;
    }
    ref_count_100=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_100)--;
    }
    count_101=*ref_count_100;
    if(    !no_free&&count_101<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_102=protocol_fun;
            finalizer_102(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
        __result_obj__41 = ((void*)0);
        return __result_obj__41;
    }
    __result_obj__42 = mem;
    return __result_obj__42;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj){
void (*finalizer_103)(void*);
void (*finalizer_104)(void*);
void (*finalizer_105)(void*);
unsigned long  int* ref_count_106;
unsigned long  int count_107;
void (*finalizer_108)(void*);
void (*finalizer_109)(void*);
void (*finalizer_110)(void*);
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
memset(&finalizer_104, 0, sizeof(void (*)(void*)));
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&finalizer_109, 0, sizeof(void (*)(void*)));
memset(&finalizer_110, 0, sizeof(void (*)(void*)));
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
                finalizer_103=protocol_fun;
                finalizer_103(protocol_obj);
            }
            finalizer_104=fun;
            finalizer_104(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_105=protocol_fun;
                finalizer_105(protocol_obj);
            }
        }
    }
    else {
        ref_count_106=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_106)--;
        }
        count_107=*ref_count_106;
        if(        !no_free&&count_107<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_108=protocol_fun;
                        finalizer_108(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_109=fun;
                        finalizer_109(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_110=protocol_fun;
                        finalizer_110(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
char* __result_obj__43;
int len_111;
void* __right_value3 = (void*)0;
char* result_112;
char* __result_obj__44;
    if(    str==((void*)0)    ) {
        __result_obj__43 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__43;
    }
    len_111=strlen(str)+1;
    result_112=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_111)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_112,str,len_111);
    __result_obj__44 = (char*)come_increment_ref_count(result_112);
    (result_112 = come_decrement_ref_count(result_112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__44 = come_decrement_ref_count(__result_obj__44, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__44;
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
void* __right_value4 = (void*)0;
char* __result_obj__45;
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value4=come_get_stackframe())));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__45 = come_decrement_ref_count(__result_obj__45, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__45;
}

void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__46;
    __result_obj__46 = come_calloc(count,size,sname,sline,class_name);
    return __result_obj__46;
}

void come_free_v2(void* mem){
    come_free(mem);
}

struct buffer* buffer_initialize(struct buffer* self){
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__47;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2915, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__47 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__48;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2925, "char*"));
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
void* __right_value7 = (void*)0;
struct buffer* result_113;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__50;
    if(    self==((void*)0)    ) {
        __result_obj__49 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__49;
    }
    result_113=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_113->size=self->size;
    __dec_obj3=result_113->buf,
    result_113->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_113->len=self->len;
    memcpy(result_113->buf,self->buf,self->len);
    __result_obj__50 = (struct buffer*)come_increment_ref_count(result_113);
    come_call_finalizer(buffer_finalize, result_113, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value9 = (void*)0;
void* __right_value10 = (void*)0;
_Bool __result_obj__51;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__51 = string_equals(((char*)(__right_value9=buffer_to_string(left))),((char*)(__right_value10=buffer_to_string(right))));
    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value11 = (void*)0;
char* old_buf_114;
int old_len_115;
int new_size_116;
void* __right_value12 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__53;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__52 = self;
        return __result_obj__52;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_114=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_114,self->buf,self->size);
        old_len_115=self->len;
        new_size_116=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_116)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_114,old_len_115);
        self->buf[old_len_115]=0;
        self->size=new_size_116;
        (old_buf_114 = come_decrement_ref_count(old_buf_114, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__54;
void* __right_value13 = (void*)0;
char* old_buf_117;
int old_len_118;
int new_size_119;
void* __right_value14 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__55;
    if(    self==((void*)0)    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_117=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_118=self->len;
        new_size_119=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_119)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_117,old_len_118);
        self->buf[old_len_118]=0;
        self->size=new_size_119;
        (old_buf_117 = come_decrement_ref_count(old_buf_117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__56;
int size_120;
void* __right_value15 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value16 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    size_120=strlen(mem);
    if(    self->len+size_120+1+1>=self->size    ) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_121,self->buf,self->size);
        old_len_122=self->len;
        new_size_123=(self->size+size_120+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_123)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_121,old_len_122);
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        (old_buf_121 = come_decrement_ref_count(old_buf_121, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_120);
    self->len+=size_120;
    self->buf[self->len]=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__58;
va_list args_124;
char* result_125;
int len_126;
struct buffer* __result_obj__59;
void* __right_value17 = (void*)0;
char* mem_127;
int size_128;
void* __right_value18 = (void*)0;
char* old_buf_129;
int old_len_130;
int new_size_131;
void* __right_value19 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__60;
result_125 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    __builtin_va_start(args_124,msg);
    len_126=vasprintf(&result_125,msg,args_124);
    __builtin_va_end(args_124);
    if(    len_126<0    ) {
        __result_obj__59 = self;
        return __result_obj__59;
    }
    mem_127=(char*)come_increment_ref_count(__builtin_string(result_125));
    size_128=strlen(mem_127);
    if(    self->len+size_128+1+1>=self->size    ) {
        old_buf_129=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_129,self->buf,self->size);
        old_len_130=self->len;
        new_size_131=(self->size+size_128+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_131)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_129,old_len_130);
        self->buf[old_len_130]=0;
        self->size=new_size_131;
        (old_buf_129 = come_decrement_ref_count(old_buf_129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_127,size_128);
    self->len+=size_128;
    self->buf[self->len]=0;
    free(result_125);
    __result_obj__60 = self;
    (mem_127 = come_decrement_ref_count(mem_127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__60;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__61;
int size_132;
void* __right_value20 = (void*)0;
char* old_buf_133;
int old_len_134;
int new_size_135;
void* __right_value21 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__62;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    size_132=strlen(mem)+1;
    if(    self->len+size_132+1+1+1>=self->size    ) {
        old_buf_133=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_133,self->buf,self->size);
        old_len_134=self->len;
        new_size_135=(self->size+size_132+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_135)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_133,old_len_134);
        self->buf[old_len_134]=0;
        self->size=new_size_135;
        (old_buf_133 = come_decrement_ref_count(old_buf_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_132);
    self->len+=size_132;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__63;
int* mem_136;
int size_137;
void* __right_value22 = (void*)0;
char* old_buf_138;
int old_len_139;
int new_size_140;
void* __right_value23 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    mem_136=&value;
    size_137=sizeof(int);
    if(    self->len+size_137+1+1>=self->size    ) {
        old_buf_138=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_140)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
        (old_buf_138 = come_decrement_ref_count(old_buf_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_136,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_141;
int size_142;
void* __right_value24 = (void*)0;
char* old_buf_143;
int old_len_144;
int new_size_145;
void* __right_value25 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__65;
    mem_141=&value;
    size_142=sizeof(long);
    if(    self->len+size_142+1+1>=self->size    ) {
        old_buf_143=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_143,self->buf,self->size);
        old_len_144=self->len;
        new_size_145=(self->size+size_142+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_145)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_143,old_len_144);
        self->buf[old_len_144]=0;
        self->size=new_size_145;
        (old_buf_143 = come_decrement_ref_count(old_buf_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_141,size_142);
    self->len+=size_142;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__66;
short* mem_146;
int size_147;
void* __right_value26 = (void*)0;
char* old_buf_148;
int old_len_149;
int new_size_150;
void* __right_value27 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    mem_146=&value;
    size_147=sizeof(short);
    if(    self->len+size_147+1+1>=self->size    ) {
        old_buf_148=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_148,self->buf,self->size);
        old_len_149=self->len;
        new_size_150=(self->size+size_147+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_150)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_148,old_len_149);
        self->buf[old_len_149]=0;
        self->size=new_size_150;
        (old_buf_148 = come_decrement_ref_count(old_buf_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_146,size_147);
    self->len+=size_147;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__68;
int len_151;
int new_size_152;
void* __right_value28 = (void*)0;
char* __dec_obj12;
int i_153;
struct buffer* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    len_151=self->len;
    len_151=(len_151+3)&~3;
    if(    len_151>=self->size    ) {
        new_size_152=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_152)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_152;
    }
    for(    i_153=self->len    ;    i_153<len_151    ;    i_153++    ){
        self->buf[i_153]=0;
    }
    self->len=len_151;
    __result_obj__69 = self;
    return __result_obj__69;
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
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* result_154;
struct buffer* __result_obj__70;
struct buffer* __result_obj__71;
    result_154=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__70 = (struct buffer*)come_increment_ref_count(result_154);
        come_call_finalizer(buffer_finalize, result_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__70;
    }
    buffer_append_str(result_154,self);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_154);
    come_call_finalizer(buffer_finalize, result_154, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

char* buffer_to_string(struct buffer* self){
void* __right_value31 = (void*)0;
char* __result_obj__72;
void* __right_value32 = (void*)0;
char* __result_obj__73;
    if(    self==((void*)0)    ) {
        __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value31=__builtin_string(""))));
        (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__72;
    }
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value32=__builtin_string(self->buf))));
    (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__73;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__74;
    __result_obj__74 = self->buf;
    return __result_obj__74;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_155;
struct buffer* __result_obj__75;
    result_155=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_155,self,sizeof(char)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_155);
    come_call_finalizer(buffer_finalize, result_155, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_156;
int i_157;
struct buffer* __result_obj__76;
    result_156=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_157=0    ;    i_157<len    ;    i_157++    ){
        buffer_append(result_156,self[i_157],strlen(self[i_157]));
    }
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_156);
    come_call_finalizer(buffer_finalize, result_156, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_158;
struct buffer* __result_obj__77;
    result_158=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_158,(char*)self,sizeof(short)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_158);
    come_call_finalizer(buffer_finalize, result_158, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_159;
struct buffer* __result_obj__78;
    result_159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_159,(char*)self,sizeof(int)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_159);
    come_call_finalizer(buffer_finalize, result_159, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_160;
struct buffer* __result_obj__79;
    result_160=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_160,(char*)self,sizeof(long)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_160);
    come_call_finalizer(buffer_finalize, result_160, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_161;
struct buffer* __result_obj__80;
    result_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_161,(char*)self,sizeof(float)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_161);
    come_call_finalizer(buffer_finalize, result_161, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_162;
struct buffer* __result_obj__81;
    result_162=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_162,(char*)self,sizeof(double)*len);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_162);
    come_call_finalizer(buffer_finalize, result_162, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

char* buffer_printable(struct buffer* self){
int len_163;
void* __right_value47 = (void*)0;
char* result_164;
int n_165;
int i_166;
unsigned char c_167;
char* __result_obj__82;
    len_163=self->len;
    result_164=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_163*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_165=0;
    for(    i_166=0    ;    i_166<len_163    ;    i_166++    ){
        c_167=self->buf[i_166];
        if(        (c_167>=0&&c_167<32)||c_167==127        ) {
            result_164[n_165++]=94;
            result_164[n_165++]=c_167+65-1;
        }
        else if(        c_167>127        ) {
            result_164[n_165++]=63;
        }
        else {
            result_164[n_165++]=c_167;
        }
    }
    result_164[n_165]=0;
    __result_obj__82 = (char*)come_increment_ref_count(result_164);
    (result_164 = come_decrement_ref_count(result_164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_168;
struct list$1char$* __result_obj__84;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_168=0    ;    i_168<num_value    ;    i_168++    ){
        list$1char$_push_back(self,values[i_168]);
    }
    __result_obj__84 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_169;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_170;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_171;
struct list$1char$* __result_obj__83;
    if(    self->len==0    ) {
        litem_169=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_169->prev=((void*)0);
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail=litem_169;
        self->head=litem_169;
    }
    else if(    self->len==1    ) {
        litem_170=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_170->prev=self->head;
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head->next=litem_170;
    }
    else {
        litem_171=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_171->prev=self->tail;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail->next=litem_171;
        self->tail=litem_171;
    }
    self->len++;
    __result_obj__83 = self;
    return __result_obj__83;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_172;
struct list_item$1char$* prev_it_173;
    it_172=self->head;
    while(    it_172!=((void*)0)    ) {
        prev_it_173=it_172;
        it_172=it_172->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value48 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1char$* __result_obj__85;
    __result_obj__85 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value52=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value52, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_174;
struct list$1char$p* __result_obj__87;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_174=0    ;    i_174<num_value    ;    i_174++    ){
        list$1char$p_push_back(self,values[i_174]);
    }
    __result_obj__87 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_175;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_176;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_177;
struct list$1char$p* __result_obj__86;
    if(    self->len==0    ) {
        litem_175=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_175->prev=((void*)0);
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail=litem_175;
        self->head=litem_175;
    }
    else if(    self->len==1    ) {
        litem_176=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_176->prev=self->head;
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head->next=litem_176;
    }
    else {
        litem_177=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_177->prev=self->tail;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail->next=litem_177;
        self->tail=litem_177;
    }
    self->len++;
    __result_obj__86 = self;
    return __result_obj__86;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_178;
struct list_item$1char$p* prev_it_179;
    it_178=self->head;
    while(    it_178!=((void*)0)    ) {
        prev_it_179=it_178;
        it_178=it_178->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_179, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value53 = (void*)0;
void* __right_value57 = (void*)0;
struct list$1char$p* __result_obj__88;
    __result_obj__88 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value57=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value57, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_180;
struct list$1short$* __result_obj__90;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0    ;    i_180<num_value    ;    i_180++    ){
        list$1short$_push_back(self,values[i_180]);
    }
    __result_obj__90 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_181;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_182;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_183;
struct list$1short$* __result_obj__89;
    if(    self->len==0    ) {
        litem_181=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1    ) {
        litem_182=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__89 = self;
    return __result_obj__89;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_184;
struct list_item$1short$* prev_it_185;
    it_184=self->head;
    while(    it_184!=((void*)0)    ) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_185, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value58 = (void*)0;
void* __right_value62 = (void*)0;
struct list$1short$* __result_obj__91;
    __result_obj__91 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value62=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value62, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_186;
struct list$1int$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0    ;    i_186<num_value    ;    i_186++    ){
        list$1int$_push_back(self,values[i_186]);
    }
    __result_obj__93 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_187;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_188;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_189;
struct list$1int$* __result_obj__92;
    if(    self->len==0    ) {
        litem_187=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1    ) {
        litem_188=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_190;
struct list_item$1int$* prev_it_191;
    it_190=self->head;
    while(    it_190!=((void*)0)    ) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_191, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value63 = (void*)0;
void* __right_value67 = (void*)0;
struct list$1int$* __result_obj__94;
    __result_obj__94 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value67=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value67, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_192;
struct list$1long$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0    ;    i_192<num_value    ;    i_192++    ){
        list$1long$_push_back(self,values[i_192]);
    }
    __result_obj__96 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_193;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_194;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_195;
struct list$1long$* __result_obj__95;
    if(    self->len==0    ) {
        litem_193=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1    ) {
        litem_194=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_196;
struct list_item$1long$* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)    ) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_197, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value68 = (void*)0;
void* __right_value72 = (void*)0;
struct list$1long$* __result_obj__97;
    __result_obj__97 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value72=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value72, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_198;
struct list$1float$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0    ;    i_198<num_value    ;    i_198++    ){
        list$1float$_push_back(self,values[i_198]);
    }
    __result_obj__99 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_199;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_200;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_201;
struct list$1float$* __result_obj__98;
    if(    self->len==0    ) {
        litem_199=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1    ) {
        litem_200=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_202;
struct list_item$1float$* prev_it_203;
    it_202=self->head;
    while(    it_202!=((void*)0)    ) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_203, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value73 = (void*)0;
void* __right_value77 = (void*)0;
struct list$1float$* __result_obj__100;
    __result_obj__100 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value77=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value77, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_204;
struct list$1double$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0    ;    i_204<num_value    ;    i_204++    ){
        list$1double$_push_back(self,values[i_204]);
    }
    __result_obj__102 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_205;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_206;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_207;
struct list$1double$* __result_obj__101;
    if(    self->len==0    ) {
        litem_205=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1    ) {
        litem_206=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_208;
struct list_item$1double$* prev_it_209;
    it_208=self->head;
    while(    it_208!=((void*)0)    ) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_209, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value78 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1double$* __result_obj__103;
    __result_obj__103 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value82=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value82, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__103, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__103;
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
void* __right_value83 = (void*)0;
char* __result_obj__104;
int len_210;
void* __right_value84 = (void*)0;
char* result_211;
char* __result_obj__105;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value83=__builtin_string(""))));
        (__right_value83 = come_decrement_ref_count(__right_value83, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    len_210=strlen(self)+strlen(right);
    result_211=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_210+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_211,self,len_210+1);
    strncat(result_211,right,len_210+1);
    __result_obj__105 = (char*)come_increment_ref_count(result_211);
    (result_211 = come_decrement_ref_count(result_211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_add(char* self, char* right){
void* __right_value85 = (void*)0;
char* __result_obj__106;
int len_212;
void* __right_value86 = (void*)0;
char* result_213;
char* __result_obj__107;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    len_212=strlen(self)+strlen(right);
    result_213=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_212+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_213,self,len_212+1);
    strncat(result_213,right,len_212+1);
    __result_obj__107 = (char*)come_increment_ref_count(result_213);
    (result_213 = come_decrement_ref_count(result_213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

char* charp_operator_mult(char* self, int right){
void* __right_value87 = (void*)0;
char* __result_obj__108;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct buffer* buf_214;
int i_215;
void* __right_value90 = (void*)0;
char* __result_obj__109;
    if(    self==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    buf_214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_215=0    ;    i_215<right    ;    i_215++    ){
        buffer_append_str(buf_214,self);
    }
    __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value90=buffer_to_string(buf_214))));
    come_call_finalizer(buffer_finalize, buf_214, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value90 = come_decrement_ref_count(__right_value90, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_mult(char* self, int right){
void* __right_value91 = (void*)0;
char* __result_obj__110;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct buffer* buf_216;
int i_217;
void* __right_value94 = (void*)0;
char* __result_obj__111;
    if(    self==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value91=__builtin_string(""))));
        (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    buf_216=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_217=0    ;    i_217<right    ;    i_217++    ){
        buffer_append_str(buf_216,self);
    }
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value94=buffer_to_string(buf_216))));
    come_call_finalizer(buffer_finalize, buf_216, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_218;
int i_219;
    result_218=(_Bool)0;
    for(    i_219=0    ;    i_219<len    ;    i_219++    ){
        if(        strncmp(self[i_219],str,strlen(self[i_219]))==0        ) {
            result_218=(_Bool)1;
            break;
        }
    }
    return result_218;
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
int result_220;
char* p_221;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_220=0;
    p_221=value;
    while(    *p_221    ) {
        result_220+=(*p_221);
        p_221++;
    }
    return result_220;
}

unsigned int string_get_hash_key(char* value){
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
_Bool result_224;
    result_224=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_224;
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
_Bool result_225;
    result_225=(c>=32&&c<=126);
    return result_225;
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
void* __right_value95 = (void*)0;
char* __result_obj__112;
int len_226;
void* __right_value96 = (void*)0;
char* result_227;
int i_228;
char* __result_obj__113;
    if(    str==((void*)0)    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value95=__builtin_string(""))));
        (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    len_226=strlen(str);
    result_227=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_226+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_228=0    ;    i_228<len_226    ;    i_228++    ){
        result_227[i_228]=str[len_226-i_228-1];
    }
    result_227[len_226]=0;
    __result_obj__113 = (char*)come_increment_ref_count(result_227);
    (result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value97 = (void*)0;
char* __result_obj__114;
int len_229;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
char* __result_obj__115;
void* __right_value100 = (void*)0;
char* __result_obj__116;
void* __right_value101 = (void*)0;
char* __result_obj__117;
void* __right_value102 = (void*)0;
char* result_230;
char* __result_obj__118;
    if(    str==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_229=strlen(str);
    if(    head<0    ) {
        head+=len_229;
    }
    if(    tail<0    ) {
        tail+=len_229+1;
    }
    if(    head>tail    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value99=charp_reverse(((char*)(__right_value98=charp_substring(str,tail,head)))))));
        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_229    ) {
        tail=len_229;
    }
    if(    head==tail    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value100=__builtin_string(""))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    tail-head+1<1    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value101=__builtin_string(""))));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    result_230=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_230,str+head,tail-head);
    result_230[tail-head]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result_230);
    (result_230 = come_decrement_ref_count(result_230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value103 = (void*)0;
char* __result_obj__119;
int len_231;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
char* __result_obj__120;
void* __right_value106 = (void*)0;
char* __result_obj__121;
void* __right_value107 = (void*)0;
char* __result_obj__122;
void* __right_value108 = (void*)0;
char* result_232;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    len_231=strlen(str);
    if(    head<0    ) {
        head+=len_231;
    }
    if(    tail<0    ) {
        tail+=len_231+1;
    }
    if(    head>tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value105=charp_reverse(((char*)(__right_value104=charp_substring(str,tail,head)))))));
        (__right_value104 = come_decrement_ref_count(__right_value104, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_231    ) {
        tail=len_231;
    }
    if(    head==tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value106=__builtin_string(""))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    tail-head+1<1    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string(""))));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    result_232=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_232,str+head,tail-head);
    result_232[tail-head]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_232);
    (result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value109 = (void*)0;
char* __result_obj__124;
int len_233;
void* __right_value110 = (void*)0;
void* __right_value111 = (void*)0;
char* __result_obj__125;
void* __right_value112 = (void*)0;
char* __result_obj__126;
void* __right_value113 = (void*)0;
char* __result_obj__127;
void* __right_value114 = (void*)0;
char* result_234;
char* __result_obj__128;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_233=strlen(str);
    if(    head<0    ) {
        head+=len_233;
    }
    if(    tail<0    ) {
        tail+=len_233+1;
    }
    if(    head>tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value111=charp_reverse(((char*)(__right_value110=charp_substring(str,tail,head)))))));
        (__right_value110 = come_decrement_ref_count(__right_value110, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_233    ) {
        tail=len_233;
    }
    if(    head==tail    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value112=__builtin_string(""))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    if(    tail-head+1<1    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value113=__builtin_string(""))));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    result_234=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_234,str+head,tail-head);
    result_234[tail-head]=0;
    __result_obj__128 = (char*)come_increment_ref_count(result_234);
    (result_234 = come_decrement_ref_count(result_234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* xsprintf(char* msg, ...){
void* __right_value115 = (void*)0;
char* __result_obj__129;
va_list args_235;
char* result_236;
int len_237;
void* __right_value116 = (void*)0;
char* __result_obj__130;
void* __right_value117 = (void*)0;
char* result2_238;
char* __result_obj__131;
result_236 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    __builtin_va_start(args_235,msg);
    len_237=vasprintf(&result_236,msg,args_235);
    __builtin_va_end(args_235);
    if(    len_237<0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value116=__builtin_string(""))));
        (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    result2_238=(char*)come_increment_ref_count(__builtin_string(result_236));
    free(result_236);
    __result_obj__131 = (char*)come_increment_ref_count(result2_238);
    (result2_238 = come_decrement_ref_count(result2_238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value118 = (void*)0;
char* __result_obj__132;
int len_239;
void* __right_value119 = (void*)0;
char* __result_obj__133;
void* __right_value120 = (void*)0;
char* __result_obj__134;
void* __right_value121 = (void*)0;
char* result_240;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_239=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(str))));
        (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    head<0    ) {
        head+=len_239;
    }
    if(    tail<0    ) {
        tail+=len_239+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(str))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    tail>=len_239    ) {
        tail=len_239;
    }
    result_240=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_239-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_240,str,head);
    memcpy(result_240+head,str+tail,len_239-tail);
    result_240[len_239-(tail-head)]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_240);
    (result_240 = come_decrement_ref_count(result_240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__135 = come_decrement_ref_count(__result_obj__135, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__135;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__136;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__136 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__136, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__136;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_241;
struct list_item$1char$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)    ) {
        prev_it_242=it_241;
        it_241=it_241->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_242, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_246;
char* __dec_obj13;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_247;
char* __dec_obj14;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_248;
char* __dec_obj15;
struct list$1char$ph* __result_obj__138;
    if(    self->len==0    ) {
        litem_246=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_246->prev=((void*)0);
        litem_246->next=((void*)0);
        __dec_obj13=litem_246->item,
        litem_246->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_246;
        self->head=litem_246;
    }
    else if(    self->len==1    ) {
        litem_247=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_247->prev=self->head;
        litem_247->next=((void*)0);
        __dec_obj14=litem_247->item,
        litem_247->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_247;
        self->head->next=litem_247;
    }
    else {
        litem_248=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_248->prev=self->tail;
        litem_248->next=((void*)0);
        __dec_obj15=litem_248->item,
        litem_248->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_248;
        self->tail=litem_248;
    }
    self->len++;
    __result_obj__138 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__138;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1char$ph* __result_obj__137;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* result_243;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct buffer* str_244;
int i_245;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1char$ph* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__137 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value123=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value123, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__137;
    }
    result_243=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_244=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
    for(    i_245=0    ;    i_245<charp_length(self)    ;    i_245++    ){
        if(        self[i_245]==c        ) {
            list$1char$ph_push_back(result_243,(char*)come_increment_ref_count(__builtin_string(str_244->buf)));
            buffer_reset(str_244);
        }
        else {
            buffer_append_char(str_244,self[i_245]);
        }
    }
    if(    buffer_length(str_244)!=0    ) {
        list$1char$ph_push_back(result_243,(char*)come_increment_ref_count(__builtin_string(str_244->buf)));
    }
    __result_obj__139 = (struct list$1char$ph*)come_increment_ref_count(result_243);
    come_call_finalizer(list$1char$ph$p_finalize, result_243, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_244, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value133 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value133=xsprintf(msg,self))));
    (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value134 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value134=xsprintf(msg,self))));
    (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_printable(char* str){
int len_249;
void* __right_value135 = (void*)0;
char* result_250;
int n_251;
int i_252;
char c_253;
char* __result_obj__142;
    len_249=charp_length(str);
    result_250=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_249*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
    n_251=0;
    for(    i_252=0    ;    i_252<len_249    ;    i_252++    ){
        c_253=str[i_252];
        if(        (c_253>=0&&c_253<32)||c_253==127        ) {
            result_250[n_251++]=94;
            result_250[n_251++]=c_253+65-1;
        }
        else {
            result_250[n_251++]=c_253;
        }
    }
    result_250[n_251]=0;
    __result_obj__142 = (char*)come_increment_ref_count(result_250);
    (result_250 = come_decrement_ref_count(result_250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value136 = (void*)0;
char* __result_obj__143;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
struct buffer* result_254;
char* p_255;
char* p2_256;
void* __right_value139 = (void*)0;
char* __result_obj__144;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value136=__builtin_string(self))));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    result_254=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
    p_255=self;
    while(    (_Bool)1    ) {
        p2_256=strstr(p_255,str);
        if(        p2_256==((void*)0)        ) {
            p2_256=p_255;
            while(            *p2_256            ) {
                p2_256++;
            }
            buffer_append(result_254,p_255,p2_256-p_255);
            break;
        }
        buffer_append(result_254,p_255,p2_256-p_255);
        buffer_append_str(result_254,replace);
        p_255=p2_256+strlen(str);
    }
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value139=buffer_to_string(result_254))));
    come_call_finalizer(buffer_finalize, result_254, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value139 = come_decrement_ref_count(__right_value139, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* xbasename(char* path){
void* __right_value140 = (void*)0;
char* __result_obj__145;
char* p_257;
void* __right_value141 = (void*)0;
char* __result_obj__146;
void* __right_value142 = (void*)0;
char* __result_obj__147;
void* __right_value143 = (void*)0;
char* __result_obj__148;
    if(    path==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value140=__builtin_string(""))));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    p_257=path+strlen(path);
    while(    p_257>=path    ) {
        if(        *p_257==47        ) {
            break;
        }
        else {
            p_257--;
        }
    }
    if(    p_257<path    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value141=__builtin_string(path))));
        (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(p_257+1))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(""))));
    (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xnoextname(char* path){
void* __right_value144 = (void*)0;
char* __result_obj__149;
void* __right_value145 = (void*)0;
char* path2_258;
char* p_259;
void* __right_value146 = (void*)0;
char* __result_obj__150;
void* __right_value147 = (void*)0;
char* __result_obj__151;
void* __right_value148 = (void*)0;
char* __result_obj__152;
    if(    path==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(""))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    path2_258=(char*)come_increment_ref_count(xbasename(path));
    p_259=path2_258+strlen(path2_258);
    while(    p_259>=path2_258    ) {
        if(        *p_259==46        ) {
            break;
        }
        else {
            p_259--;
        }
    }
    if(    p_259<path2_258    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(path2_258))));
        (path2_258 = come_decrement_ref_count(path2_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value147=charp_substring(path2_258,0,p_259-path2_258))));
        (path2_258 = come_decrement_ref_count(path2_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value147 = come_decrement_ref_count(__right_value147, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(""))));
    (path2_258 = come_decrement_ref_count(path2_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* xextname(char* path){
void* __right_value149 = (void*)0;
char* __result_obj__153;
char* p_260;
void* __right_value150 = (void*)0;
char* __result_obj__154;
void* __right_value151 = (void*)0;
char* __result_obj__155;
void* __right_value152 = (void*)0;
char* __result_obj__156;
    if(    path==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(""))));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    p_260=path+strlen(path);
    while(    p_260>=path    ) {
        if(        *p_260==46        ) {
            break;
        }
        else {
            p_260--;
        }
    }
    if(    p_260<path    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(path))));
        (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    else {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(p_260+1))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(""))));
    (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* bool_to_string(_Bool self){
void* __right_value153 = (void*)0;
char* __result_obj__157;
void* __right_value154 = (void*)0;
char* __result_obj__158;
    if(    self    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string("true"))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string("false"))));
        (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__159;
void* __right_value156 = (void*)0;
char* __result_obj__160;
    if(    self    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    else {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
}

char* char_to_string(char self){
void* __right_value157 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value157=xsprintf("%c",self))));
    (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* short_to_string(short self){
void* __right_value158 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value158=xsprintf("%d",self))));
    (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* int_to_string(int self){
void* __right_value159 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%d",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* long_to_string(long self){
void* __right_value160 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%ld",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value161 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%ld",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* float_to_string(float self){
void* __right_value162 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%f",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* double_to_string(double self){
void* __right_value163 = (void*)0;
char* __result_obj__167;
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%lf",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* string_to_string(char* self){
void* __right_value164 = (void*)0;
char* __result_obj__168;
void* __right_value165 = (void*)0;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value164=__builtin_string(""))));
        (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value165=__builtin_string(self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__170;
void* __right_value167 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__171;
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
void* __right_value168 = (void*)0;
char* __result_obj__172;
void* __right_value169 = (void*)0;
char* __result_obj__173;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    puts(self);
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* charp_print(char* self){
void* __right_value170 = (void*)0;
char* __result_obj__174;
void* __right_value171 = (void*)0;
char* __result_obj__175;
    if(    self==((void*)0)    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    printf("%s",self);
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* charp_printf(char* self, ...){
void* __right_value172 = (void*)0;
char* __result_obj__176;
char* msg2_261;
va_list args_262;
void* __right_value173 = (void*)0;
char* __result_obj__177;
msg2_261 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    __builtin_va_start(args_262,self);
    vasprintf(&msg2_261,self,args_262);
    __builtin_va_end(args_262);
    printf("%s",msg2_261);
    free(msg2_261);
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_263;
    for(    i_263=0    ;    i_263<self    ;    i_263++    ){
        block(parent,i_263);
    }
}

