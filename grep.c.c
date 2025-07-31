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

extern char _end[];
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
struct header base;

struct header* freep=0;

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

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
    a_2=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(128)), "grep.c", 33, "char*"));
    strncpy(a_2,"QAB",128);
    puts(a_2);
    exit(2);
    (a_2 = come_decrement_ref_count(a_2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
come_heap_final();
}

void* sbrk(long incr){
char* current_brk_3;
void* __result_obj__1;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
    current_brk_3=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_3==(char*)-1    ) {
        __result_obj__1 = (void*)-1;
        return __result_obj__1;
    }
    if(    incr==0    ) {
        __result_obj__2 = current_brk_3;
        return __result_obj__2;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_3+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__3 = (void*)-1;
        return __result_obj__3;
    }
    __result_obj__4 = current_brk_3;
    return __result_obj__4;
}

struct header* morecore(unsigned int nunits){
char* cp_4;
struct header* up_5;
struct header* __result_obj__5;
struct header* __result_obj__6;
cp_4 = (void*)0;
up_5 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_4=sbrk(nunits*sizeof(struct header));
    if(    cp_4==(char*)-1    ) {
        __result_obj__5 = (void*)0;
        return __result_obj__5;
    }
    up_5=(struct header*)cp_4;
    up_5->size=nunits;
    free((void*)(up_5+1));
    __result_obj__6 = freep;
    return __result_obj__6;
}

void* malloc(unsigned int nbytes){
struct header* p_6;
struct header* prevp_7;
unsigned int nunits_8;
void* __result_obj__7;
void* __result_obj__8;
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
            __result_obj__7 = (void*)(p_6+1);
            return __result_obj__7;
        }
        if(        p_6==freep        ) {
            if(            (p_6=morecore(nunits_8))==0            ) {
                __result_obj__8 = (void*)0;
                return __result_obj__8;
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
void* __result_obj__9;
void* ptr_12;
void* __result_obj__10;
    total_size_11=nmemb*size;
    if(    total_size_11==0    ) {
        __result_obj__9 = ((void*)0);
        return __result_obj__9;
    }
    ptr_12=malloc(total_size_11);
printf("gComeDebugLib %d\n", gComeDebugLib);
while(1);
    if(    ptr_12!=((void*)0)    ) {
        memset(ptr_12,0,total_size_11);
    }
    __result_obj__10 = ptr_12;
    return __result_obj__10;
}

char* strdup(const char* s){
char* s2_13;
unsigned long  int len_14;
char* p_15;
char* __result_obj__11;
    s2_13=s;
    len_14=strlen(s2_13)+1;
    p_15=malloc(len_14);
    if(    p_15    ) {
        memcpy(p_15,s2_13,len_14);
    }
    __result_obj__11 = p_15;
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
        const char* h_16=haystack;
        const char* n_17=needle;
        while(        *h_16&&*n_17&&(*h_16==*n_17)        ) {
            h_16++;
            n_17++;
        }
        if(        !*n_17        ) {
            __result_obj__13 = (char*)haystack;
            return __result_obj__13;
        }
    }
    __result_obj__14 = ((void*)0);
    return __result_obj__14;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_18;
int i_19;
void* __result_obj__15;
    cdst_18=(char*)dst;
    for(    i_19=0    ;    i_19<n    ;    i_19++    ){
        cdst_18[i_19]=c;
    }
    __result_obj__15 = dst;
    return __result_obj__15;
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
void* __result_obj__16;
void* __result_obj__17;
s_22 = (void*)0;
d_23 = (void*)0;
    if(    n==0    ) {
        __result_obj__16 = dst;
        return __result_obj__16;
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
char* os_24;
char* __result_obj__19;
os_24 = (void*)0;
    os_24=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__19 = os_24;
    return __result_obj__19;
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
char* __result_obj__20;
    d_26=dest;
    while(    *d_26    ) {
        d_26++;
    }
    while(    n--&&*src    ) {
        *d_26++=*src++;
    }
    *d_26=0;
    __result_obj__20 = dest;
    return __result_obj__20;
}

char* strtok(char* s, const char* delim){
static char* next_27;
char* start_28;
char* p_29;
char* __result_obj__21;
int is_delim_31;
char* __result_obj__22;
int is_delim_33;
char* __result_obj__23;
next_27 = (void*)0;
start_28 = (void*)0;
p_29 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_27=s;
    }
    if(    next_27==((void*)0)    ) {
        __result_obj__21 = ((void*)0);
        return __result_obj__21;
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
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
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
    __result_obj__23 = start_28;
    return __result_obj__23;
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
char* __result_obj__24;
int digit_38;
char* __result_obj__25;
    p_34=buf;
    char tmp_35[32];
    memset(&tmp_35, 0, sizeof(char)    *(32)    );
    i_36=0;
    negative_37=0;
    if(    base<2||base>16    ) {
        *p_34=0;
        __result_obj__24 = p_34;
        return __result_obj__24;
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
    __result_obj__25 = buf;
    return __result_obj__25;
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
struct buffer* buf_80;
int i_81;
void* __right_value3 = (void*)0;
    buf_80=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 133, "struct buffer*"))));
    buffer_append_format(buf_80,"%s %d\n",sname,sline);
    for(    i_81=gNumComeStackFrame-2    ;    i_81>=0    ;    i_81--    ){
        buffer_append_format(buf_80,"%s %d #%d\n",gComeStackFrameSName[i_81],gComeStackFrameSLine[i_81],gComeStackFrameID[i_81]);
    }
    if(    gComeStackFrameBuffer    ) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value3=buffer_to_string(buf_80))));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(buffer_finalize, buf_80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
}

void stackframe(){
int i_82;
    for(    i_82=gNumComeStackFrame-1    ;    i_82>=0    ;    i_82--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_82],gComeStackFrameSLine[i_82],gComeStackFrameID[i_82]);
    }
}

char* come_get_stackframe(){
void* __right_value4 = (void*)0;
char* __result_obj__26;
    __result_obj__26 = (char*)come_increment_ref_count(((char*)(__right_value4=__builtin_string(gComeStackFrameBuffer))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__26 = come_decrement_ref_count(__result_obj__26, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__26;
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
    gNumComeStackFrame=0;
    gComeStackFrameBuffer=((void*)0);

    gComeResultObject=((void*)0);

    gComeMallocLib=0;

    gComeDebugLib=0;

    gComeGCLib=0;

    gNumAlloc=0;

    gNumFree=0;
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
struct sMemHeader* it_84;
struct sMemHeader* prev_it_85;
struct sMemHeader* next_it_86;
unsigned long  int size_87;
struct sMemHeaderTiny* it_88;
struct sMemHeaderTiny* prev_it_89;
struct sMemHeaderTiny* next_it_90;
unsigned long  int size_91;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
            it_84=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_84->allocated!=177783            ) {
                return;
            }
            it_84->allocated=0;
            prev_it_85=it_84->prev;
            next_it_86=it_84->next;
            if(            gAllocMem==it_84            ) {
                gAllocMem=next_it_86;
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
        else {
            it_88=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_88->allocated!=177783            ) {
                return;
            }
            it_88->allocated=0;
            prev_it_89=it_88->prev;
            next_it_90=it_88->next;
            if(            gAllocMem==it_88            ) {
                gAllocMem=(struct sMemHeader*)next_it_90;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_89                ) {
                    prev_it_89->next=next_it_90;
                }
                if(                next_it_90                ) {
                    next_it_90->prev=prev_it_89;
                }
            }
            size_91=it_88->size;
            free(it_88);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_92;
struct sMemHeader* it_93;
int i_94;
int i_95;
void* __result_obj__28;
void* result_96;
struct sMemHeaderTiny* it_97;
void* __result_obj__29;
memset(&i_94, 0, sizeof(int));
memset(&i_95, 0, sizeof(int));
    if(    gComeDebugLib    ) {
        result_92=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_93=result_92;
        it_93->allocated=177783;
        it_93->size=size+sizeof(struct sMemHeader);
        it_93->free_next=((void*)0);
        come_push_stackframe_v2(sname,sline,0);
        if(        gNumComeStackFrame<16        ) {
            for(            i_94=0            ;            i_94<gNumComeStackFrame            ;            i_94++            ){
                it_93->sname[i_94]=gComeStackFrameSName[i_94];
                it_93->sline[i_94]=gComeStackFrameSLine[i_94];
                it_93->id[i_94]=gComeStackFrameID[i_94];
            }
        }
        else {
            for(            i_95=0            ;            i_95<16            ;            i_95++            ){
                it_93->sname[i_95]=gComeStackFrameSName[gNumComeStackFrame-1-i_95];
                it_93->sline[i_95]=gComeStackFrameSLine[gNumComeStackFrame-1-i_95];
                it_93->id[i_95]=gComeStackFrameID[gNumComeStackFrame-1-i_95];
            }
        }
        come_pop_stackframe_v2();
        it_93->next=gAllocMem;
        it_93->prev=((void*)0);
        it_93->class_name=class_name;
        if(        gAllocMem        ) {
            gAllocMem->prev=it_93;
        }
        gAllocMem=it_93;
        gNumAlloc++;
        __result_obj__28 = (char*)result_92+sizeof(struct sMemHeader);
        return __result_obj__28;
    }
    else {
        result_96=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_97=result_96;
        it_97->allocated=177783;
        it_97->class_name=class_name;
        it_97->sname=sname;
        it_97->sline=sline;
        it_97->size=size+sizeof(struct sMemHeaderTiny);
        it_97->free_next=((void*)0);
        it_97->next=(struct sMemHeaderTiny*)gAllocMem;
        it_97->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_97;
        }
        gAllocMem=(struct sMemHeader*)it_97;
        gNumAlloc++;
        __result_obj__29 = (char*)result_96+sizeof(struct sMemHeaderTiny);
        return __result_obj__29;
    }
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_98;
char* __result_obj__30;
struct sMemHeaderTiny* it_99;
char* __result_obj__31;
    if(    gComeDebugLib    ) {
        it_98=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_98->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_98);
            exit(2);
        }
        __result_obj__30 = it_98->class_name;
        return __result_obj__30;
    }
    else {
        it_99=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_99->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_99);
            exit(2);
        }
        __result_obj__31 = it_99->class_name;
        return __result_obj__31;
    }
}

void come_print_heap_info(void* mem){
struct sMemHeader* it_100;
int i_101;
struct sMemHeaderTiny* it_102;
    if(    gComeDebugLib    ) {
        it_100=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_100->allocated!=177783        ) {
            return;
        }
        printf("%p ",mem);
        if(        it_100->class_name        ) {
            printf("(%s): ",it_100->class_name);
        }
        for(        i_101=0        ;        i_101<16        ;        i_101++        ){
            if(            it_100->sname[i_101]            ) {
                printf("%s %d #%d, ",it_100->sname[i_101],it_100->sline[i_101],it_100->id[i_101]);
            }
        }
        puts("");
    }
    else {
        it_102=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_102->allocated!=177783        ) {
            return;
        }
        printf("%p (%s) %s %d\n",mem,it_102->class_name,it_102->sname,it_102->sline);
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_103;
unsigned long  int* ref_count_104;
unsigned long  int* size2_105;
void* __result_obj__32;
    mem_103=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_104=(unsigned long  int*)mem_103;
    *ref_count_104=0;
    size2_105=(unsigned long  int*)(mem_103+sizeof(unsigned long  int));
    *size2_105=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__32 = mem_103+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__32;
}

void come_free(void* mem){
unsigned long  int* ref_count_106;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_106=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_106);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__33;
char* mem_107;
unsigned long  int* size_p_108;
unsigned long  int size_109;
void* result_110;
void* __result_obj__34;
    if(    !block    ) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    mem_107=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_108=(unsigned long  int*)(mem_107+sizeof(unsigned long  int));
    size_109=*size_p_108-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_110=come_calloc_v2(1,size_109,sname,sline,class_name);
    memcpy(result_110,block,size_109);
    __result_obj__34 = result_110;
    return __result_obj__34;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__35;
unsigned long  int* ref_count_111;
void* __result_obj__36;
    if(    mem==((void*)0)    ) {
        __result_obj__35 = mem;
        return __result_obj__35;
    }
    ref_count_111=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_111)++;
    __result_obj__36 = mem;
    return __result_obj__36;
}

void* come_print_ref_count(void* mem){
void* __result_obj__37;
unsigned long  int* ref_count_112;
void* __result_obj__38;
    if(    mem==((void*)0)    ) {
        __result_obj__37 = mem;
        return __result_obj__37;
    }
    ref_count_112=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_112);
    __result_obj__38 = mem;
    return __result_obj__38;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_113;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_113=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_113;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__39;
void* __result_obj__40;
unsigned long  int* ref_count_114;
unsigned long  int count_115;
void (*finalizer_116)(void*);
void* __result_obj__41;
void* __result_obj__42;
memset(&finalizer_116, 0, sizeof(void (*)(void*)));
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
    ref_count_114=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_114)--;
    }
    count_115=*ref_count_114;
    if(    !no_free&&count_115<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_116=protocol_fun;
            finalizer_116(protocol_obj);
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
void (*finalizer_117)(void*);
void (*finalizer_118)(void*);
void (*finalizer_119)(void*);
unsigned long  int* ref_count_120;
unsigned long  int count_121;
void (*finalizer_122)(void*);
void (*finalizer_123)(void*);
void (*finalizer_124)(void*);
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
memset(&finalizer_123, 0, sizeof(void (*)(void*)));
memset(&finalizer_124, 0, sizeof(void (*)(void*)));
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
                finalizer_117=protocol_fun;
                finalizer_117(protocol_obj);
            }
            finalizer_118=fun;
            finalizer_118(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_119=protocol_fun;
                finalizer_119(protocol_obj);
            }
        }
    }
    else {
        ref_count_120=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_120)--;
        }
        count_121=*ref_count_120;
        if(        !no_free&&count_121<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_122=protocol_fun;
                        finalizer_122(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_123=fun;
                        finalizer_123(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_124=protocol_fun;
                        finalizer_124(protocol_obj);
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
int len_125;
void* __right_value5 = (void*)0;
char* result_126;
char* __result_obj__44;
    if(    str==((void*)0)    ) {
        __result_obj__43 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__43;
    }
    len_125=strlen(str)+1;
    result_126=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_125)), "/usr/local/include/comelang.h", 899, "char*"));
    strncpy(result_126,str,len_125);
    __result_obj__44 = (char*)come_increment_ref_count(result_126);
    (result_126 = come_decrement_ref_count(result_126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value6 = (void*)0;
char* __result_obj__45;
    __result_obj__45 = (char*)come_increment_ref_count(((char*)(__right_value6=come_get_stackframe())));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value7 = (void*)0;
char* __dec_obj1;
struct buffer* __result_obj__47;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2885, "char*"));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result_obj__47 = (struct buffer*)come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__47, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__47;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __right_value8 = (void*)0;
char* __dec_obj2;
struct buffer* __result_obj__48;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2895, "char*"));
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
void* __right_value9 = (void*)0;
struct buffer* result_127;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__50;
    if(    self==((void*)0)    ) {
        __result_obj__49 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__49;
    }
    result_127=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2915, "struct buffer*"));
    result_127->size=self->size;
    __dec_obj3=result_127->buf,
    result_127->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2918, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_127->len=self->len;
    memcpy(result_127->buf,self->buf,self->len);
    __result_obj__50 = (struct buffer*)come_increment_ref_count(result_127);
    come_call_finalizer(buffer_finalize, result_127, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__50, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__50;
}

_Bool buffer_equals(struct buffer* left, struct buffer* right){
void* __right_value11 = (void*)0;
void* __right_value12 = (void*)0;
_Bool __result_obj__51;
    if(    left==((void*)0)||right==((void*)0)    ) {
        return (_Bool)0;
    }
    __result_obj__51 = string_equals(((char*)(__right_value11=buffer_to_string(left))),((char*)(__right_value12=buffer_to_string(right))));
    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value13 = (void*)0;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__53;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__52 = self;
        return __result_obj__52;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_128=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2966, "char*"));
        memcpy(old_buf_128,self->buf,self->size);
        old_len_129=self->len;
        new_size_130=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_130)), "/usr/local/include/comelang.h", 2970, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
        (old_buf_128 = come_decrement_ref_count(old_buf_128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result_obj__53 = self;
    return __result_obj__53;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
struct buffer* __result_obj__54;
void* __right_value15 = (void*)0;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__55;
    if(    self==((void*)0)    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_131=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 2989, "char*"));
        old_len_132=self->len;
        new_size_133=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_133)), "/usr/local/include/comelang.h", 2993, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
        (old_buf_131 = come_decrement_ref_count(old_buf_131, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__56;
int size_134;
void* __right_value17 = (void*)0;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    size_134=strlen(mem);
    if(    self->len+size_134+1+1>=self->size    ) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3015, "char*"));
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_137)), "/usr/local/include/comelang.h", 3019, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        (old_buf_135 = come_decrement_ref_count(old_buf_135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__58;
va_list args_138;
char* result_139;
int len_140;
struct buffer* __result_obj__59;
void* __right_value19 = (void*)0;
char* mem_141;
int size_142;
void* __right_value20 = (void*)0;
char* old_buf_143;
int old_len_144;
int new_size_145;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__60;
result_139 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    __builtin_va_start(args_138,msg);
    len_140=vasprintf(&result_139,msg,args_138);
    __builtin_va_end(args_138);
    if(    len_140<0    ) {
        __result_obj__59 = self;
        return __result_obj__59;
    }
    mem_141=(char*)come_increment_ref_count(__builtin_string(result_139));
    size_142=strlen(mem_141);
    if(    self->len+size_142+1+1>=self->size    ) {
        old_buf_143=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3063, "char*"));
        memcpy(old_buf_143,self->buf,self->size);
        old_len_144=self->len;
        new_size_145=(self->size+size_142+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_145)), "/usr/local/include/comelang.h", 3067, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_143,old_len_144);
        self->buf[old_len_144]=0;
        self->size=new_size_145;
        (old_buf_143 = come_decrement_ref_count(old_buf_143, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_141,size_142);
    self->len+=size_142;
    self->buf[self->len]=0;
    free(result_139);
    __result_obj__60 = self;
    (mem_141 = come_decrement_ref_count(mem_141, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__60;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__61;
int size_146;
void* __right_value22 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__62;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    size_146=strlen(mem)+1;
    if(    self->len+size_146+1+1+1>=self->size    ) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3089, "char*"));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_149)), "/usr/local/include/comelang.h", 3093, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        (old_buf_147 = come_decrement_ref_count(old_buf_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__63;
int* mem_150;
int size_151;
void* __right_value24 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    mem_150=&value;
    size_151=sizeof(int);
    if(    self->len+size_151+1+1>=self->size    ) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3116, "char*"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3120, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_150,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_155;
int size_156;
void* __right_value26 = (void*)0;
char* old_buf_157;
int old_len_158;
int new_size_159;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__65;
    mem_155=&value;
    size_156=sizeof(long);
    if(    self->len+size_156+1+1>=self->size    ) {
        old_buf_157=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3139, "char*"));
        memcpy(old_buf_157,self->buf,self->size);
        old_len_158=self->len;
        new_size_159=(self->size+size_156+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_159)), "/usr/local/include/comelang.h", 3143, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_157,old_len_158);
        self->buf[old_len_158]=0;
        self->size=new_size_159;
        (old_buf_157 = come_decrement_ref_count(old_buf_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_155,size_156);
    self->len+=size_156;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__66;
short* mem_160;
int size_161;
void* __right_value28 = (void*)0;
char* old_buf_162;
int old_len_163;
int new_size_164;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    mem_160=&value;
    size_161=sizeof(short);
    if(    self->len+size_161+1+1>=self->size    ) {
        old_buf_162=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3166, "char*"));
        memcpy(old_buf_162,self->buf,self->size);
        old_len_163=self->len;
        new_size_164=(self->size+size_161+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_164)), "/usr/local/include/comelang.h", 3170, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_162,old_len_163);
        self->buf[old_len_163]=0;
        self->size=new_size_164;
        (old_buf_162 = come_decrement_ref_count(old_buf_162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_160,size_161);
    self->len+=size_161;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__68;
int len_165;
int new_size_166;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_167;
struct buffer* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    len_165=self->len;
    len_165=(len_165+3)&~3;
    if(    len_165>=self->size    ) {
        new_size_166=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_166)), "/usr/local/include/comelang.h", 3194, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_166;
    }
    for(    i_167=self->len    ;    i_167<len_165    ;    i_167++    ){
        self->buf[i_167]=0;
    }
    self->len=len_165;
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
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__70;
struct buffer* __result_obj__71;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3224, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__70 = (struct buffer*)come_increment_ref_count(result_168);
        come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__70;
    }
    buffer_append_str(result_168,self);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_168);
    come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__71, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__71;
}

char* buffer_to_string(struct buffer* self){
void* __right_value33 = (void*)0;
char* __result_obj__72;
void* __right_value34 = (void*)0;
char* __result_obj__73;
    if(    self==((void*)0)    ) {
        __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value33=__builtin_string(""))));
        (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__72;
    }
    __result_obj__73 = (char*)come_increment_ref_count(((char*)(__right_value34=__builtin_string(self->buf))));
    (__right_value34 = come_decrement_ref_count(__right_value34, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__73 = come_decrement_ref_count(__result_obj__73, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__73;
}

unsigned char* buffer_head_pointer(struct buffer* self){
unsigned char* __result_obj__74;
    __result_obj__74 = self->buf;
    return __result_obj__74;
}

struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_169;
struct buffer* __result_obj__75;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3251, "struct buffer*"))));
    buffer_append(result_169,self,sizeof(char)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_170;
int i_171;
struct buffer* __result_obj__76;
    result_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3258, "struct buffer*"))));
    for(    i_171=0    ;    i_171<len    ;    i_171++    ){
        buffer_append(result_170,self[i_171],strlen(self[i_171]));
    }
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_170);
    come_call_finalizer(buffer_finalize, result_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_172;
struct buffer* __result_obj__77;
    result_172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3267, "struct buffer*"))));
    buffer_append(result_172,(char*)self,sizeof(short)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_172);
    come_call_finalizer(buffer_finalize, result_172, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_173;
struct buffer* __result_obj__78;
    result_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3274, "struct buffer*"))));
    buffer_append(result_173,(char*)self,sizeof(int)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_173);
    come_call_finalizer(buffer_finalize, result_173, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_174;
struct buffer* __result_obj__79;
    result_174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_174,(char*)self,sizeof(long)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_174);
    come_call_finalizer(buffer_finalize, result_174, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_175;
struct buffer* __result_obj__80;
    result_175=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    buffer_append(result_175,(char*)self,sizeof(float)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_175);
    come_call_finalizer(buffer_finalize, result_175, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_176;
struct buffer* __result_obj__81;
    result_176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3295, "struct buffer*"))));
    buffer_append(result_176,(char*)self,sizeof(double)*len);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_176);
    come_call_finalizer(buffer_finalize, result_176, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

char* buffer_printable(struct buffer* self){
int len_177;
void* __right_value49 = (void*)0;
char* result_178;
int n_179;
int i_180;
unsigned char c_181;
char* __result_obj__82;
    len_177=self->len;
    result_178=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_177*2+1)), "/usr/local/include/comelang.h", 3303, "char*"));
    n_179=0;
    for(    i_180=0    ;    i_180<len_177    ;    i_180++    ){
        c_181=self->buf[i_180];
        if(        (c_181>=0&&c_181<32)||c_181==127        ) {
            result_178[n_179++]=94;
            result_178[n_179++]=c_181+65-1;
        }
        else if(        c_181>127        ) {
            result_178[n_179++]=63;
        }
        else {
            result_178[n_179++]=c_181;
        }
    }
    result_178[n_179]=0;
    __result_obj__82 = (char*)come_increment_ref_count(result_178);
    (result_178 = come_decrement_ref_count(result_178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_182;
struct list$1char$* __result_obj__84;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0    ;    i_182<num_value    ;    i_182++    ){
        list$1char$_push_back(self,values[i_182]);
    }
    __result_obj__84 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_183;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_184;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_185;
struct list$1char$* __result_obj__83;
    if(    self->len==0    ) {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$*"))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1    ) {
        litem_184=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$*"))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$*"))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result_obj__83 = self;
    return __result_obj__83;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_186;
struct list_item$1char$* prev_it_187;
    it_186=self->head;
    while(    it_186!=((void*)0)    ) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_187, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__85;
    __result_obj__85 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3344, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_188;
struct list$1char$p* __result_obj__87;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0    ;    i_188<num_value    ;    i_188++    ){
        list$1char$p_push_back(self,values[i_188]);
    }
    __result_obj__87 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_189;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_190;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_191;
struct list$1char$p* __result_obj__86;
    if(    self->len==0    ) {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$p*"))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1    ) {
        litem_190=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$p*"))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result_obj__86 = self;
    return __result_obj__86;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_192;
struct list_item$1char$p* prev_it_193;
    it_192=self->head;
    while(    it_192!=((void*)0)    ) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_193, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__88;
    __result_obj__88 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3349, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_194;
struct list$1short$* __result_obj__90;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_194=0    ;    i_194<num_value    ;    i_194++    ){
        list$1short$_push_back(self,values[i_194]);
    }
    __result_obj__90 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_195;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_196;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_197;
struct list$1short$* __result_obj__89;
    if(    self->len==0    ) {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1short$*"))));
        litem_195->prev=((void*)0);
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head=litem_195;
    }
    else if(    self->len==1    ) {
        litem_196=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1short$*"))));
        litem_196->prev=self->head;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head->next=litem_196;
    }
    else {
        litem_197=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1short$*"))));
        litem_197->prev=self->tail;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail->next=litem_197;
        self->tail=litem_197;
    }
    self->len++;
    __result_obj__89 = self;
    return __result_obj__89;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_198;
struct list_item$1short$* prev_it_199;
    it_198=self->head;
    while(    it_198!=((void*)0)    ) {
        prev_it_199=it_198;
        it_198=it_198->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_199, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__91;
    __result_obj__91 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3354, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_200;
struct list$1int$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_200=0    ;    i_200<num_value    ;    i_200++    ){
        list$1int$_push_back(self,values[i_200]);
    }
    __result_obj__93 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_201;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_202;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_203;
struct list$1int$* __result_obj__92;
    if(    self->len==0    ) {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1int$*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1    ) {
        litem_202=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1int$*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1int$*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_204;
struct list_item$1int$* prev_it_205;
    it_204=self->head;
    while(    it_204!=((void*)0)    ) {
        prev_it_205=it_204;
        it_204=it_204->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_205, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__94;
    __result_obj__94 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3359, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_206;
struct list$1long$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_206=0    ;    i_206<num_value    ;    i_206++    ){
        list$1long$_push_back(self,values[i_206]);
    }
    __result_obj__96 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_207;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_208;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_209;
struct list$1long$* __result_obj__95;
    if(    self->len==0    ) {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1long$*"))));
        litem_207->prev=((void*)0);
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head=litem_207;
    }
    else if(    self->len==1    ) {
        litem_208=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1long$*"))));
        litem_208->prev=self->head;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head->next=litem_208;
    }
    else {
        litem_209=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1long$*"))));
        litem_209->prev=self->tail;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail->next=litem_209;
        self->tail=litem_209;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_210;
struct list_item$1long$* prev_it_211;
    it_210=self->head;
    while(    it_210!=((void*)0)    ) {
        prev_it_211=it_210;
        it_210=it_210->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_211, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__97;
    __result_obj__97 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3364, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_212;
struct list$1float$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_212=0    ;    i_212<num_value    ;    i_212++    ){
        list$1float$_push_back(self,values[i_212]);
    }
    __result_obj__99 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_213;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_214;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_215;
struct list$1float$* __result_obj__98;
    if(    self->len==0    ) {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1float$*"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1    ) {
        litem_214=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1float$*"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1float$*"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_216;
struct list_item$1float$* prev_it_217;
    it_216=self->head;
    while(    it_216!=((void*)0)    ) {
        prev_it_217=it_216;
        it_216=it_216->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_217, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__100;
    __result_obj__100 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3369, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_218;
struct list$1double$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_218=0    ;    i_218<num_value    ;    i_218++    ){
        list$1double$_push_back(self,values[i_218]);
    }
    __result_obj__102 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_219;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_220;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_221;
struct list$1double$* __result_obj__101;
    if(    self->len==0    ) {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1double$*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1    ) {
        litem_220=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1double$*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        litem_220->item=item;
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1double$*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        litem_221->item=item;
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_222;
struct list_item$1double$* prev_it_223;
    it_222=self->head;
    while(    it_222!=((void*)0)    ) {
        prev_it_223=it_222;
        it_222=it_222->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__103;
    __result_obj__103 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1double$*")),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value84, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
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
void* __right_value85 = (void*)0;
char* __result_obj__104;
int len_224;
void* __right_value86 = (void*)0;
char* result_225;
char* __result_obj__105;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    len_224=strlen(self)+strlen(right);
    result_225=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_224+1)), "/usr/local/include/comelang.h", 3603, "char*"));
    strncpy(result_225,self,len_224+1);
    strncat(result_225,right,len_224+1);
    __result_obj__105 = (char*)come_increment_ref_count(result_225);
    (result_225 = come_decrement_ref_count(result_225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__106;
int len_226;
void* __right_value88 = (void*)0;
char* result_227;
char* __result_obj__107;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    len_226=strlen(self)+strlen(right);
    result_227=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_226+1)), "/usr/local/include/comelang.h", 3618, "char*"));
    strncpy(result_227,self,len_226+1);
    strncat(result_227,right,len_226+1);
    __result_obj__107 = (char*)come_increment_ref_count(result_227);
    (result_227 = come_decrement_ref_count(result_227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__108;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_228;
int i_229;
void* __right_value92 = (void*)0;
char* __result_obj__109;
    if(    self==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    buf_228=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3631, "struct buffer*"))));
    for(    i_229=0    ;    i_229<right    ;    i_229++    ){
        buffer_append_str(buf_228,self);
    }
    __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_228))));
    come_call_finalizer(buffer_finalize, buf_228, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__110;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_230;
int i_231;
void* __right_value96 = (void*)0;
char* __result_obj__111;
    if(    self==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    buf_230=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3645, "struct buffer*"))));
    for(    i_231=0    ;    i_231<right    ;    i_231++    ){
        buffer_append_str(buf_230,self);
    }
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_230))));
    come_call_finalizer(buffer_finalize, buf_230, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_232;
int i_233;
    result_232=(_Bool)0;
    for(    i_233=0    ;    i_233<len    ;    i_233++    ){
        if(        strncmp(self[i_233],str,strlen(self[i_233]))==0        ) {
            result_232=(_Bool)1;
            break;
        }
    }
    return result_232;
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
int result_234;
char* p_235;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_234=0;
    p_235=value;
    while(    *p_235    ) {
        result_234+=(*p_235);
        p_235++;
    }
    return result_234;
}

unsigned int string_get_hash_key(char* value){
int result_236;
char* p_237;
    if(    value==((void*)0)    ) {
        return 0;
    }
    result_236=0;
    p_237=value;
    while(    *p_237    ) {
        result_236+=(*p_237);
        p_237++;
    }
    return result_236;
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
_Bool result_238;
    result_238=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_238;
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
_Bool result_239;
    result_239=(c>=32&&c<=126);
    return result_239;
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
char* __result_obj__112;
int len_240;
void* __right_value98 = (void*)0;
char* result_241;
int i_242;
char* __result_obj__113;
    if(    str==((void*)0)    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    len_240=strlen(str);
    result_241=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_240+1)), "/usr/local/include/comelang.h", 3913, "char*"));
    for(    i_242=0    ;    i_242<len_240    ;    i_242++    ){
        result_241[i_242]=str[len_240-i_242-1];
    }
    result_241[len_240]=0;
    __result_obj__113 = (char*)come_increment_ref_count(result_241);
    (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__114;
int len_243;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__115;
void* __right_value102 = (void*)0;
char* __result_obj__116;
void* __right_value103 = (void*)0;
char* __result_obj__117;
void* __right_value104 = (void*)0;
char* result_244;
char* __result_obj__118;
    if(    str==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_243=strlen(str);
    if(    head<0    ) {
        head+=len_243;
    }
    if(    tail<0    ) {
        tail+=len_243+1;
    }
    if(    head>tail    ) {
        __result_obj__115 = (char*)come_increment_ref_count(((char*)(__right_value101=charp_reverse(((char*)(__right_value100=charp_substring(str,tail,head)))))));
        (__right_value100 = come_decrement_ref_count(__right_value100, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__115 = come_decrement_ref_count(__result_obj__115, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__115;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_243    ) {
        tail=len_243;
    }
    if(    head==tail    ) {
        __result_obj__116 = (char*)come_increment_ref_count(((char*)(__right_value102=__builtin_string(""))));
        (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__116 = come_decrement_ref_count(__result_obj__116, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__116;
    }
    if(    tail-head+1<1    ) {
        __result_obj__117 = (char*)come_increment_ref_count(((char*)(__right_value103=__builtin_string(""))));
        (__right_value103 = come_decrement_ref_count(__right_value103, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__117 = come_decrement_ref_count(__result_obj__117, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__117;
    }
    result_244=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3959, "char*"));
    memcpy(result_244,str+head,tail-head);
    result_244[tail-head]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result_244);
    (result_244 = come_decrement_ref_count(result_244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__119;
int len_245;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__120;
void* __right_value108 = (void*)0;
char* __result_obj__121;
void* __right_value109 = (void*)0;
char* __result_obj__122;
void* __right_value110 = (void*)0;
char* result_246;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    len_245=strlen(str);
    if(    head<0    ) {
        head+=len_245;
    }
    if(    tail<0    ) {
        tail+=len_245+1;
    }
    if(    head>tail    ) {
        __result_obj__120 = (char*)come_increment_ref_count(((char*)(__right_value107=charp_reverse(((char*)(__right_value106=charp_substring(str,tail,head)))))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__120 = come_decrement_ref_count(__result_obj__120, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__120;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_245    ) {
        tail=len_245;
    }
    if(    head==tail    ) {
        __result_obj__121 = (char*)come_increment_ref_count(((char*)(__right_value108=__builtin_string(""))));
        (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__121 = come_decrement_ref_count(__result_obj__121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__121;
    }
    if(    tail-head+1<1    ) {
        __result_obj__122 = (char*)come_increment_ref_count(((char*)(__right_value109=__builtin_string(""))));
        (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__122 = come_decrement_ref_count(__result_obj__122, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__122;
    }
    result_246=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4002, "char*"));
    memcpy(result_246,str+head,tail-head);
    result_246[tail-head]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_246);
    (result_246 = come_decrement_ref_count(result_246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__124;
int len_247;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__125;
void* __right_value114 = (void*)0;
char* __result_obj__126;
void* __right_value115 = (void*)0;
char* __result_obj__127;
void* __right_value116 = (void*)0;
char* result_248;
char* __result_obj__128;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_247=strlen(str);
    if(    head<0    ) {
        head+=len_247;
    }
    if(    tail<0    ) {
        tail+=len_247+1;
    }
    if(    head>tail    ) {
        __result_obj__125 = (char*)come_increment_ref_count(((char*)(__right_value113=charp_reverse(((char*)(__right_value112=charp_substring(str,tail,head)))))));
        (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__125 = come_decrement_ref_count(__result_obj__125, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__125;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail>=len_247    ) {
        tail=len_247;
    }
    if(    head==tail    ) {
        __result_obj__126 = (char*)come_increment_ref_count(((char*)(__right_value114=__builtin_string(""))));
        (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__126 = come_decrement_ref_count(__result_obj__126, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__126;
    }
    if(    tail-head+1<1    ) {
        __result_obj__127 = (char*)come_increment_ref_count(((char*)(__right_value115=__builtin_string(""))));
        (__right_value115 = come_decrement_ref_count(__right_value115, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__127 = come_decrement_ref_count(__result_obj__127, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__127;
    }
    result_248=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4045, "char*"));
    memcpy(result_248,str+head,tail-head);
    result_248[tail-head]=0;
    __result_obj__128 = (char*)come_increment_ref_count(result_248);
    (result_248 = come_decrement_ref_count(result_248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__129;
va_list args_249;
char* result_250;
int len_251;
void* __right_value118 = (void*)0;
char* __result_obj__130;
void* __right_value119 = (void*)0;
char* result2_252;
char* __result_obj__131;
result_250 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    __builtin_va_start(args_249,msg);
    len_251=vasprintf(&result_250,msg,args_249);
    __builtin_va_end(args_249);
    if(    len_251<0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    result2_252=(char*)come_increment_ref_count(__builtin_string(result_250));
    free(result_250);
    __result_obj__131 = (char*)come_increment_ref_count(result2_252);
    (result2_252 = come_decrement_ref_count(result2_252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__132;
int len_253;
void* __right_value121 = (void*)0;
char* __result_obj__133;
void* __right_value122 = (void*)0;
char* __result_obj__134;
void* __right_value123 = (void*)0;
char* result_254;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_253=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    head<0    ) {
        head+=len_253;
    }
    if(    tail<0    ) {
        tail+=len_253+1;
    }
    if(    head<0    ) {
        head=0;
    }
    if(    tail<0    ) {
        __result_obj__134 = (char*)come_increment_ref_count(((char*)(__right_value122=__builtin_string(str))));
        (__right_value122 = come_decrement_ref_count(__right_value122, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__134 = come_decrement_ref_count(__result_obj__134, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__134;
    }
    if(    tail>=len_253    ) {
        tail=len_253;
    }
    result_254=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_253-(tail-head)+1)), "/usr/local/include/comelang.h", 4107, "char*"));
    memcpy(result_254,str,head);
    memcpy(result_254+head,str+tail,len_253-tail);
    result_254[len_253-(tail-head)]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_254);
    (result_254 = come_decrement_ref_count(result_254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
struct list_item$1char$ph* it_255;
struct list_item$1char$ph* prev_it_256;
    it_255=self->head;
    while(    it_255!=((void*)0)    ) {
        prev_it_256=it_255;
        it_255=it_255->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_256, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_260;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_261;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_262;
char* __dec_obj15;
struct list$1char$ph* __result_obj__138;
    if(    self->len==0    ) {
        litem_260=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1085, "struct list_item$1char$ph*"))));
        litem_260->prev=((void*)0);
        litem_260->next=((void*)0);
        __dec_obj13=litem_260->item,
        litem_260->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_260;
        self->head=litem_260;
    }
    else if(    self->len==1    ) {
        litem_261=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1095, "struct list_item$1char$ph*"))));
        litem_261->prev=self->head;
        litem_261->next=((void*)0);
        __dec_obj14=litem_261->item,
        litem_261->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_261;
        self->head->next=litem_261;
    }
    else {
        litem_262=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_262->prev=self->tail;
        litem_262->next=((void*)0);
        __dec_obj15=litem_262->item,
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_262;
        self->tail=litem_262;
    }
    self->len++;
    __result_obj__138 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__138;
}

struct list$1char$ph* charp_split_char(char* self, char c){
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1char$ph* __result_obj__137;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1char$ph* result_257;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_258;
int i_259;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__137 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4120, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__137;
    }
    result_257=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4123, "struct list$1char$ph*"))));
    str_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4125, "struct buffer*"))));
    for(    i_259=0    ;    i_259<charp_length(self)    ;    i_259++    ){
        if(        self[i_259]==c        ) {
            list$1char$ph_push_back(result_257,(char*)come_increment_ref_count(__builtin_string(str_258->buf)));
            buffer_reset(str_258);
        }
        else {
            buffer_append_char(str_258,self[i_259]);
        }
    }
    if(    buffer_length(str_258)!=0    ) {
        list$1char$ph_push_back(result_257,(char*)come_increment_ref_count(__builtin_string(str_258->buf)));
    }
    __result_obj__139 = (struct list$1char$ph*)come_increment_ref_count(result_257);
    come_call_finalizer(list$1char$ph$p_finalize, result_257, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_258, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__139, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__139;
}

char* charp_xsprintf(char* self, char* msg, ...){
void* __right_value135 = (void*)0;
char* __result_obj__140;
    __result_obj__140 = (char*)come_increment_ref_count(((char*)(__right_value135=xsprintf(msg,self))));
    (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__140 = come_decrement_ref_count(__result_obj__140, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__140;
}

char* int_xsprintf(int self, char* msg, ...){
void* __right_value136 = (void*)0;
char* __result_obj__141;
    __result_obj__141 = (char*)come_increment_ref_count(((char*)(__right_value136=xsprintf(msg,self))));
    (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__141 = come_decrement_ref_count(__result_obj__141, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__141;
}

char* charp_printable(char* str){
int len_263;
void* __right_value137 = (void*)0;
char* result_264;
int n_265;
int i_266;
char c_267;
char* __result_obj__142;
    len_263=charp_length(str);
    result_264=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_263*2+1)), "/usr/local/include/comelang.h", 4157, "char*"));
    n_265=0;
    for(    i_266=0    ;    i_266<len_263    ;    i_266++    ){
        c_267=str[i_266];
        if(        (c_267>=0&&c_267<32)||c_267==127        ) {
            result_264[n_265++]=94;
            result_264[n_265++]=c_267+65-1;
        }
        else {
            result_264[n_265++]=c_267;
        }
    }
    result_264[n_265]=0;
    __result_obj__142 = (char*)come_increment_ref_count(result_264);
    (result_264 = come_decrement_ref_count(result_264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__143;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_268;
char* p_269;
char* p2_270;
void* __right_value141 = (void*)0;
char* __result_obj__144;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    result_268=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4185, "struct buffer*"))));
    p_269=self;
    while(    (_Bool)1    ) {
        p2_270=strstr(p_269,str);
        if(        p2_270==((void*)0)        ) {
            p2_270=p_269;
            while(            *p2_270            ) {
                p2_270++;
            }
            buffer_append(result_268,p_269,p2_270-p_269);
            break;
        }
        buffer_append(result_268,p_269,p2_270-p_269);
        buffer_append_str(result_268,replace);
        p_269=p2_270+strlen(str);
    }
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_268))));
    come_call_finalizer(buffer_finalize, result_268, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__145;
char* p_271;
void* __right_value143 = (void*)0;
char* __result_obj__146;
void* __right_value144 = (void*)0;
char* __result_obj__147;
void* __right_value145 = (void*)0;
char* __result_obj__148;
    if(    path==((void*)0)    ) {
        __result_obj__145 = (char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(""))));
        (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__145 = come_decrement_ref_count(__result_obj__145, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__145;
    }
    p_271=path+strlen(path);
    while(    p_271>=path    ) {
        if(        *p_271==47        ) {
            break;
        }
        else {
            p_271--;
        }
    }
    if(    p_271<path    ) {
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_271+1))));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__147 = come_decrement_ref_count(__result_obj__147, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__147;
    }
    __result_obj__148 = (char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string(""))));
    (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__148 = come_decrement_ref_count(__result_obj__148, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__148;
}

char* xnoextname(char* path){
void* __right_value146 = (void*)0;
char* __result_obj__149;
void* __right_value147 = (void*)0;
char* path2_272;
char* p_273;
void* __right_value148 = (void*)0;
char* __result_obj__150;
void* __right_value149 = (void*)0;
char* __result_obj__151;
void* __right_value150 = (void*)0;
char* __result_obj__152;
    if(    path==((void*)0)    ) {
        __result_obj__149 = (char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string(""))));
        (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__149 = come_decrement_ref_count(__result_obj__149, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__149;
    }
    path2_272=(char*)come_increment_ref_count(xbasename(path));
    p_273=path2_272+strlen(path2_272);
    while(    p_273>=path2_272    ) {
        if(        *p_273==46        ) {
            break;
        }
        else {
            p_273--;
        }
    }
    if(    p_273<path2_272    ) {
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_272))));
        (path2_272 = come_decrement_ref_count(path2_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_272,0,p_273-path2_272))));
        (path2_272 = come_decrement_ref_count(path2_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_272 = come_decrement_ref_count(path2_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__153;
char* p_274;
void* __right_value152 = (void*)0;
char* __result_obj__154;
void* __right_value153 = (void*)0;
char* __result_obj__155;
void* __right_value154 = (void*)0;
char* __result_obj__156;
    if(    path==((void*)0)    ) {
        __result_obj__153 = (char*)come_increment_ref_count(((char*)(__right_value151=__builtin_string(""))));
        (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__153 = come_decrement_ref_count(__result_obj__153, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__153;
    }
    p_274=path+strlen(path);
    while(    p_274>=path    ) {
        if(        *p_274==46        ) {
            break;
        }
        else {
            p_274--;
        }
    }
    if(    p_274<path    ) {
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    else {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_274+1))));
        (__right_value153 = come_decrement_ref_count(__right_value153, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__155 = come_decrement_ref_count(__result_obj__155, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__155;
    }
    __result_obj__156 = (char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(""))));
    (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__156 = come_decrement_ref_count(__result_obj__156, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__156;
}

char* bool_to_string(_Bool self){
void* __right_value155 = (void*)0;
char* __result_obj__157;
void* __right_value156 = (void*)0;
char* __result_obj__158;
    if(    self    ) {
        __result_obj__157 = (char*)come_increment_ref_count(((char*)(__right_value155=__builtin_string("true"))));
        (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__157 = come_decrement_ref_count(__result_obj__157, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__157;
    }
    else {
        __result_obj__158 = (char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string("false"))));
        (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__158 = come_decrement_ref_count(__result_obj__158, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__158;
    }
}

char* _Bool_to_string(_Bool self){
void* __right_value157 = (void*)0;
char* __result_obj__159;
void* __right_value158 = (void*)0;
char* __result_obj__160;
    if(    self    ) {
        __result_obj__159 = (char*)come_increment_ref_count(((char*)(__right_value157=__builtin_string("true"))));
        (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__159 = come_decrement_ref_count(__result_obj__159, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__159;
    }
    else {
        __result_obj__160 = (char*)come_increment_ref_count(((char*)(__right_value158=__builtin_string("false"))));
        (__right_value158 = come_decrement_ref_count(__right_value158, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__160 = come_decrement_ref_count(__result_obj__160, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__160;
    }
}

char* char_to_string(char self){
void* __right_value159 = (void*)0;
char* __result_obj__161;
    __result_obj__161 = (char*)come_increment_ref_count(((char*)(__right_value159=xsprintf("%c",self))));
    (__right_value159 = come_decrement_ref_count(__right_value159, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__161 = come_decrement_ref_count(__result_obj__161, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__161;
}

char* short_to_string(short self){
void* __right_value160 = (void*)0;
char* __result_obj__162;
    __result_obj__162 = (char*)come_increment_ref_count(((char*)(__right_value160=xsprintf("%d",self))));
    (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__162 = come_decrement_ref_count(__result_obj__162, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__162;
}

char* int_to_string(int self){
void* __right_value161 = (void*)0;
char* __result_obj__163;
    __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%d",self))));
    (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__163;
}

char* long_to_string(long self){
void* __right_value162 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%ld",self))));
    (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__164;
}

char* size_t_to_string(unsigned long  int self){
void* __right_value163 = (void*)0;
char* __result_obj__165;
    __result_obj__165 = (char*)come_increment_ref_count(((char*)(__right_value163=xsprintf("%ld",self))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__165 = come_decrement_ref_count(__result_obj__165, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__165;
}

char* float_to_string(float self){
void* __right_value164 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("%f",self))));
    (__right_value164 = come_decrement_ref_count(__right_value164, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__166;
}

char* double_to_string(double self){
void* __right_value165 = (void*)0;
char* __result_obj__167;
    __result_obj__167 = (char*)come_increment_ref_count(((char*)(__right_value165=xsprintf("%lf",self))));
    (__right_value165 = come_decrement_ref_count(__right_value165, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__167 = come_decrement_ref_count(__result_obj__167, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__167;
}

char* string_to_string(char* self){
void* __right_value166 = (void*)0;
char* __result_obj__168;
void* __right_value167 = (void*)0;
char* __result_obj__169;
    if(    self==((void*)0)    ) {
        __result_obj__168 = (char*)come_increment_ref_count(((char*)(__right_value166=__builtin_string(""))));
        (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__168;
    }
    __result_obj__169 = (char*)come_increment_ref_count(((char*)(__right_value167=__builtin_string(self))));
    (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__169;
}

char* charp_to_string(char* self){
void* __right_value168 = (void*)0;
char* __result_obj__170;
void* __right_value169 = (void*)0;
char* __result_obj__171;
    if(    self==((void*)0)    ) {
        __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value168=__builtin_string(""))));
        (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__170;
    }
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value169=__builtin_string(self))));
    (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
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
void* __right_value170 = (void*)0;
char* __result_obj__172;
void* __right_value171 = (void*)0;
char* __result_obj__173;
    if(    self==((void*)0)    ) {
        __result_obj__172 = (char*)come_increment_ref_count(((char*)(__right_value170=__builtin_string(""))));
        (__right_value170 = come_decrement_ref_count(__right_value170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__172 = come_decrement_ref_count(__result_obj__172, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__172;
    }
    puts(self);
    __result_obj__173 = (char*)come_increment_ref_count(((char*)(__right_value171=__builtin_string(self))));
    (__right_value171 = come_decrement_ref_count(__right_value171, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__173 = come_decrement_ref_count(__result_obj__173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__173;
}

char* charp_print(char* self){
void* __right_value172 = (void*)0;
char* __result_obj__174;
void* __right_value173 = (void*)0;
char* __result_obj__175;
    if(    self==((void*)0)    ) {
        __result_obj__174 = (char*)come_increment_ref_count(((char*)(__right_value172=__builtin_string(""))));
        (__right_value172 = come_decrement_ref_count(__right_value172, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__174 = come_decrement_ref_count(__result_obj__174, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__174;
    }
    printf("%s",self);
    __result_obj__175 = (char*)come_increment_ref_count(((char*)(__right_value173=__builtin_string(self))));
    (__right_value173 = come_decrement_ref_count(__right_value173, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__175 = come_decrement_ref_count(__result_obj__175, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__175;
}

char* charp_printf(char* self, ...){
void* __right_value174 = (void*)0;
char* __result_obj__176;
char* msg2_275;
va_list args_276;
void* __right_value175 = (void*)0;
char* __result_obj__177;
msg2_275 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    __builtin_va_start(args_276,self);
    vasprintf(&msg2_275,self,args_276);
    __builtin_va_end(args_276);
    printf("%s",msg2_275);
    free(msg2_275);
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(self))));
    (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__177;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_277;
    for(    i_277=0    ;    i_277<self    ;    i_277++    ){
        block(parent,i_277);
    }
}

