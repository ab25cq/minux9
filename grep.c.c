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

struct __current_stack1__
{
    int* argc;
    char*** argv;
    char** search_0;
    struct buffer** input_2;
};

// source head

// header function
long strtol(char* arg1, char** arg2, int arg3, ...);
unsigned long strtoul(char* arg1, char** arg2, int arg3, ...);
unsigned long  long strtoull(char* arg1, char** arg2, int arg3, ...);
long  long strtoll(char* arg1, char** arg2, int arg3, ...);
int main(int argc, char** argv);
static struct list$1char$ph* list$1char$ph_each(struct list$1char$ph* self, void* parent, void (*block)(void*,char*,int,_Bool*));
void method_block1_grepc(struct __current_stack1__* parent, char* it, int it2, _Bool* it3);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
char* search_0;
int i_1;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* input_2;
long _ret_5;
int size_4;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct __current_stack1__ __current_stack1__;
memset(&_ret_5, 0, sizeof(long));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    come_heap_init(0, 0, 0);
    puts("GREP 1\r\n");
    search_0=((void*)0);
    for(    i_1=1    ;    i_1<argc    ;    i_1++    ){
        search_0=argv[i_1];
    }
    puts("GREP 2\r\n");
    if(    search_0==((void*)0)    ) {
        puts("grep: serach word panic\r\n");
        ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");         while(        1        ) {
            ;
        }
        });    }
    puts("GREP 3\r\n");
    input_2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "grep.c", 18, "struct buffer*"))));
    while(    1    ) {
        puts("GREP 4\r\n");
        char buf_3[256+1];
        memset(&buf_3, 0, sizeof(char)        *(256+1)        );
        size_4=({_ret_5; register long _a0 asm("a0") =(long)(0);
; register long _a1 asm("a1") =(long)(buf_3);
; register long _a2 asm("a2") =(long)(256);
; register long _a7 asm("a7") =65;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_5=_a0; _ret_5; });
        puts("GREP 5\r\n");
        if(        size_4<0        ) {
            puts("grep: read panic\r\n");
            ({register long _a0 asm("a0") =(long)(1);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        if(        size_4<256        ) {
            buffer_append(input_2,buf_3,size_4);
            break;
        }
        else {
            buffer_append(input_2,buf_3,256);
        }
        puts("GREP 6\r\n");
    }
    puts("GREP 7\r\n");
    __current_stack1__.argc = &argc;
    __current_stack1__.argv = &argv;
    __current_stack1__.search_0 = &search_0;
    __current_stack1__.input_2 = &input_2;
    list$1char$ph_each(((struct list$1char$ph*)(__right_value3=charp_split_char(((char*)(__right_value2=buffer_to_string(input_2))),10))),&__current_stack1__,(void*)method_block1_grepc);
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    puts("\r\n");
    ({register long _a0 asm("a0") =(long)(1);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");     while(    1    ) {
        ;
    }
    });    come_call_finalizer(buffer_finalize, input_2, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
come_heap_final();
}

static struct list$1char$ph* list$1char$ph_each(struct list$1char$ph* self, void* parent, void (*block)(void*,char*,int,_Bool*)){
struct list_item$1char$ph* it_6;
int i_7;
_Bool end_flag_8;
struct list$1char$ph* __result_obj__1;
    it_6=self->head;
    i_7=0;
    while(    it_6!=((void*)0)    ) {
        end_flag_8=(_Bool)0;
        block(parent,it_6->item,i_7,&end_flag_8);
        if(        end_flag_8==(_Bool)1        ) {
            break;
        }
        it_6=it_6->next;
        i_7++;
    }
    __result_obj__1 = self;
    return __result_obj__1;
}

void method_block1_grepc(struct __current_stack1__* parent, char* it, int it2, _Bool* it3){
    puts("GREP 8\r\n");
    if(    strstr(it,(*(parent->search_0)))    ) {
        puts(it);
        puts("\r\n");
    }
    puts("GREP 9\r\n");
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_9;
struct list_item$1char$ph* prev_it_10;
    it_9=self->head;
    while(    it_9!=((void*)0)    ) {
        prev_it_10=it_9;
        it_9=it_9->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_10, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)    ) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
}

void* sbrk(long incr){
char* current_brk_11;
void* __result_obj__2;
void* __result_obj__3;
void* __result_obj__4;
void* __result_obj__5;
    current_brk_11=(char*)({register long _a0 asm("a0") =(long)(0);
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; });
    if(    current_brk_11==(char*)-1    ) {
        __result_obj__2 = (void*)-1;
        return __result_obj__2;
    }
    if(    incr==0    ) {
        __result_obj__3 = current_brk_11;
        return __result_obj__3;
    }
    if(    ({register long _a0 asm("a0") =(long)((long)(current_brk_11+incr));
; register long _a7 asm("a7") =74;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory"); (int)_a0; })==-1    ) {
        __result_obj__4 = (void*)-1;
        return __result_obj__4;
    }
    __result_obj__5 = current_brk_11;
    return __result_obj__5;
}

struct header* morecore(unsigned int nunits){
char* cp_12;
struct header* up_13;
struct header* __result_obj__6;
struct header* __result_obj__7;
cp_12 = (void*)0;
up_13 = (void*)0;
    if(    nunits<4096    ) {
        nunits=4096;
    }
    cp_12=sbrk(nunits*sizeof(struct header));
    if(    cp_12==(char*)-1    ) {
        __result_obj__6 = (void*)0;
        return __result_obj__6;
    }
    up_13=(struct header*)cp_12;
    up_13->size=nunits;
    free((void*)(up_13+1));
    __result_obj__7 = freep;
    return __result_obj__7;
}

void* malloc(unsigned int nbytes){
struct header* p_14;
struct header* prevp_15;
unsigned int nunits_16;
void* __result_obj__8;
void* __result_obj__9;
memset(&p_14, 0, sizeof(struct header*));
memset(&prevp_15, 0, sizeof(struct header*));
memset(&nunits_16, 0, sizeof(unsigned int));
    nunits_16=(nbytes+sizeof(struct header)-1)/sizeof(struct header)+1;
    if(    (prevp_15=freep)==0    ) {
        base.next=freep=prevp_15=&base;
        base.size=0;
    }
    for(    p_14=prevp_15->next    ;    ;    prevp_15=p_14,p_14=p_14->next    ){
        if(        p_14->size>=nunits_16        ) {
            if(            p_14->size==nunits_16            ) {
                prevp_15->next=p_14->next;
            }
            else {
                p_14->size-=nunits_16;
                p_14+=p_14->size;
                p_14->size=nunits_16;
            }
            freep=prevp_15;
            __result_obj__8 = (void*)(p_14+1);
            return __result_obj__8;
        }
        if(        p_14==freep        ) {
            if(            (p_14=morecore(nunits_16))==0            ) {
                __result_obj__9 = (void*)0;
                return __result_obj__9;
            }
        }
    }
}

void free(void* ap){
struct header* bp_17;
struct header* p_18;
memset(&bp_17, 0, sizeof(struct header*));
memset(&p_18, 0, sizeof(struct header*));
    if(    ap==0    ) {
        return;
    }
    bp_17=(struct header*)ap-1;
    for(    p_18=freep    ;    !(bp_17>p_18&&bp_17<p_18->next)    ;    p_18=p_18->next    ){
        if(        p_18>=p_18->next&&(bp_17>p_18||bp_17<p_18->next)        ) {
            break;
        }
    }
    if(    bp_17+bp_17->size==p_18->next    ) {
        bp_17->size+=p_18->next->size;
        bp_17->next=p_18->next->next;
    }
    else {
        bp_17->next=p_18->next;
    }
    if(    p_18+p_18->size==bp_17    ) {
        p_18->size+=bp_17->size;
        p_18->next=bp_17->next;
    }
    else {
        p_18->next=bp_17;
    }
    freep=p_18;
}

void* calloc(unsigned long  int nmemb, unsigned long  int size){
unsigned long  int total_size_19;
void* __result_obj__10;
void* ptr_20;
void* __result_obj__11;
    total_size_19=nmemb*size;
    if(    total_size_19==0    ) {
        __result_obj__10 = ((void*)0);
        return __result_obj__10;
    }
    ptr_20=malloc(total_size_19);
    if(    ptr_20!=((void*)0)    ) {
        memset(ptr_20,0,total_size_19);
    }
    __result_obj__11 = ptr_20;
    return __result_obj__11;
}

char* strdup(const char* s){
char* s2_21;
unsigned long  int len_22;
char* p_23;
char* __result_obj__12;
    s2_21=s;
    len_22=strlen(s2_21)+1;
    p_23=malloc(len_22);
    if(    p_23    ) {
        memcpy(p_23,s2_21,len_22);
    }
    __result_obj__12 = p_23;
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
        const char* h_24=haystack;
        const char* n_25=needle;
        while(        *h_24&&*n_25&&(*h_24==*n_25)        ) {
            h_24++;
            n_25++;
        }
        if(        !*n_25        ) {
            __result_obj__14 = (char*)haystack;
            return __result_obj__14;
        }
    }
    __result_obj__15 = ((void*)0);
    return __result_obj__15;
}

void* memset(void* dst, int c, unsigned int n){
char* cdst_26;
int i_27;
void* __result_obj__16;
    cdst_26=(char*)dst;
    for(    i_27=0    ;    i_27<n    ;    i_27++    ){
        cdst_26[i_27]=c;
    }
    __result_obj__16 = dst;
    return __result_obj__16;
}

int memcmp(const void* v1, const void* v2, unsigned int n){
const unsigned char* s1_28;
const unsigned char* s2_29;
memset(&s1_28, 0, sizeof(const unsigned char*));
memset(&s2_29, 0, sizeof(const unsigned char*));
    s1_28=v1;
    s2_29=v2;
    while(    n-->0    ) {
        if(        *s1_28!=*s2_29        ) {
            return *s1_28-*s2_29;
        }
        s1_28++,s2_29++;
    }
    return 0;
}

void* memmove(void* dst, const void* src, unsigned int n){
const char* s_30;
char* d_31;
void* __result_obj__17;
void* __result_obj__18;
s_30 = (void*)0;
d_31 = (void*)0;
    if(    n==0    ) {
        __result_obj__17 = dst;
        return __result_obj__17;
    }
    s_30=src;
    d_31=dst;
    if(    s_30<d_31&&s_30+n>d_31    ) {
        s_30+=n;
        d_31+=n;
        while(        n-->0        ) {
            *--d_31=*--s_30;
        }
    }
    else {
        while(        n-->0        ) {
            *d_31++=*s_30++;
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
char* os_32;
char* __result_obj__20;
os_32 = (void*)0;
    os_32=s;
    while(    n-->0&&(*s++=*t++)!=0    ) {
        ;
    }
    while(    n-->0    ) {
        *s++=0;
    }
    __result_obj__20 = os_32;
    return __result_obj__20;
}

int strlen(const char* s){
int n_33;
memset(&n_33, 0, sizeof(int));
    for(    n_33=0    ;    s[n_33]    ;    n_33++    ){
        ;
    }
    return n_33;
}

void puts(const char* s){
    while(    *s    ) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, unsigned long  int n){
char* d_34;
char* __result_obj__21;
    d_34=dest;
    while(    *d_34    ) {
        d_34++;
    }
    while(    n--&&*src    ) {
        *d_34++=*src++;
    }
    *d_34=0;
    __result_obj__21 = dest;
    return __result_obj__21;
}

char* strtok(char* s, const char* delim){
static char* next_35;
char* start_36;
char* p_37;
char* __result_obj__22;
int is_delim_39;
char* __result_obj__23;
int is_delim_41;
char* __result_obj__24;
next_35 = (void*)0;
start_36 = (void*)0;
p_37 = (void*)0;
    if(    s!=((void*)0)    ) {
        next_35=s;
    }
    if(    next_35==((void*)0)    ) {
        __result_obj__22 = ((void*)0);
        return __result_obj__22;
    }
    start_36=next_35;
    while(    *start_36!=0    ) {
        const char* d_38=delim;
        is_delim_39=0;
        while(        *d_38!=0        ) {
            if(            *start_36==*d_38            ) {
                is_delim_39=1;
                break;
            }
            d_38++;
        }
        if(        !is_delim_39        ) {
            break;
        }
        start_36++;
    }
    if(    *start_36==0    ) {
        next_35=((void*)0);
        __result_obj__23 = ((void*)0);
        return __result_obj__23;
    }
    p_37=start_36;
    while(    *p_37!=0    ) {
        const char* d_40=delim;
        is_delim_41=0;
        while(        *d_40!=0        ) {
            if(            *p_37==*d_40            ) {
                is_delim_41=1;
                break;
            }
            d_40++;
        }
        if(        is_delim_41        ) {
            break;
        }
        p_37++;
    }
    if(    *p_37==0    ) {
        next_35=((void*)0);
    }
    else {
        *p_37=0;
        next_35=p_37+1;
    }
    __result_obj__24 = start_36;
    return __result_obj__24;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed){
char* p_42;
int i_44;
int negative_45;
char* __result_obj__25;
int digit_46;
char* __result_obj__26;
    p_42=buf;
    char tmp_43[32];
    memset(&tmp_43, 0, sizeof(char)    *(32)    );
    i_44=0;
    negative_45=0;
    if(    base<2||base>16    ) {
        *p_42=0;
        __result_obj__25 = p_42;
        return __result_obj__25;
    }
    if(    is_signed&&(long)val_<0    ) {
        negative_45=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit_46=val_%base;
        tmp_43[i_44++]=(((digit_46<10))?(48+digit_46):(97+digit_46-10));
        val_/=base;
    } while(    val_    );
    if(    negative_45    ) {
        *p_42++=45;
    }
    while(    i_44--    ) {
        *p_42++=tmp_43[i_44];
    }
    *p_42=0;
    __result_obj__26 = buf;
    return __result_obj__26;
}

int vasprintf(char** out, const char* fmt, va_list ap){
char* p_48;
const char* s_49;
unsigned long  int remaining_51;
s_49 = (void*)0;
    char out2_47[512];
    memset(&out2_47, 0, sizeof(char)    *(512)    );
    p_48=out2_47;
    char buf_50[32];
    memset(&buf_50, 0, sizeof(char)    *(32)    );
    remaining_51=sizeof(out2_47);
    for(    ;    *fmt&&remaining_51>1    ;    fmt++    ){
        if(        *fmt!=37        ) {
            *p_48++=*fmt;
            remaining_51--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf_50,__builtin_va_arg(ap,int),10,1);
            s_49=buf_50;
            break;
            case 117:
            itoa(buf_50,__builtin_va_arg(ap,unsigned int),10,0);
            s_49=buf_50;
            break;
            case 120:
            itoa(buf_50,__builtin_va_arg(ap,unsigned int),16,0);
            s_49=buf_50;
            break;
            case 115:
            s_49=__builtin_va_arg(ap,const char*);
            if(            !s_49            ) {
                s_49="(null)";
            }
            break;
            case 99:
            buf_50[0]=(char)__builtin_va_arg(ap,int);
            buf_50[1]=0;
            s_49=buf_50;
            break;
            case 112:
            strncpy(buf_50,"0x",32);
            itoa(buf_50+2,(unsigned long  int)(unsigned long  int)__builtin_va_arg(ap,void*),16,0);
            s_49=buf_50;
            break;
            case 37:
            buf_50[0]=37;
            buf_50[1]=0;
            s_49=buf_50;
            break;
            default:
            buf_50[0]=37;
            buf_50[1]=*fmt;
            buf_50[2]=0;
            s_49=buf_50;
            break;
        }
        while(        *s_49&&remaining_51>1        ) {
            *p_48++=*s_49++;
            remaining_51--;
        }
    }
    *p_48=0;
    *out=strdup(out2_47);
    return p_48-out2_47;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_52;
char* p_53;
const char* s_54;
unsigned long  int remaining_56;
memset(&ap_52, 0, sizeof(va_list));
s_54 = (void*)0;
    __builtin_va_start(ap_52,fmt);
    p_53=out;
    char buf_55[32];
    memset(&buf_55, 0, sizeof(char)    *(32)    );
    remaining_56=out_size;
    if(    remaining_56==0    ) {
        __builtin_va_end(ap_52);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_56>1            ) {
                *p_53++=*fmt;
                remaining_56--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_54=__builtin_va_arg(ap_52,const char*);
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 100:
            itoa(buf_55,__builtin_va_arg(ap_52,int),10,0);
            s_54=buf_55;
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 120:
            itoa(buf_55,(unsigned int)__builtin_va_arg(ap_52,int),16,1);
            s_54=buf_55;
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 99:
            if(            remaining_56>1            ) {
                *p_53++=(char)__builtin_va_arg(ap_52,int);
                remaining_56--;
            }
            break;
            case 112:
            s_54="0x";
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            itoa(buf_55,(long)__builtin_va_arg(ap_52,void*),16,1);
            s_54=buf_55;
            while(            *s_54&&remaining_56>1            ) {
                *p_53++=*s_54++;
                remaining_56--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_55,__builtin_va_arg(ap_52,long),10,1);
                s_54=buf_55;
                while(                *s_54&&remaining_56>1                ) {
                    *p_53++=*s_54++;
                    remaining_56--;
                }
            }
            break;
            default:
            if(            remaining_56>1            ) {
                *p_53++=37;
                remaining_56--;
                if(                remaining_56>1                ) {
                    *p_53++=*fmt;
                    remaining_56--;
                }
            }
            break;
        }
    }
    *p_53=0;
    __builtin_va_end(ap_52);
    return p_53-out;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, ...){
va_list ap_57;
char* p_58;
const char* s_59;
unsigned long  int remaining_61;
memset(&ap_57, 0, sizeof(va_list));
s_59 = (void*)0;
    __builtin_va_start(ap_57,fmt);
    p_58=out;
    char buf_60[32];
    memset(&buf_60, 0, sizeof(char)    *(32)    );
    remaining_61=out_size;
    if(    remaining_61==0    ) {
        __builtin_va_end(ap_57);
        return 0;
    }
    for(    ;    *fmt    ;    fmt++    ){
        if(        *fmt!=37        ) {
            if(            remaining_61>1            ) {
                *p_58++=*fmt;
                remaining_61--;
            }
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 115:
            s_59=__builtin_va_arg(ap_57,const char*);
            while(            *s_59&&remaining_61>1            ) {
                *p_58++=*s_59++;
                remaining_61--;
            }
            break;
            case 100:
            itoa(buf_60,__builtin_va_arg(ap_57,int),10,0);
            s_59=buf_60;
            while(            *s_59&&remaining_61>1            ) {
                *p_58++=*s_59++;
                remaining_61--;
            }
            break;
            case 120:
            itoa(buf_60,(unsigned int)__builtin_va_arg(ap_57,int),16,1);
            s_59=buf_60;
            while(            *s_59&&remaining_61>1            ) {
                *p_58++=*s_59++;
                remaining_61--;
            }
            break;
            case 99:
            if(            remaining_61>1            ) {
                *p_58++=(char)__builtin_va_arg(ap_57,int);
                remaining_61--;
            }
            break;
            case 112:
            s_59="0x";
            while(            *s_59&&remaining_61>1            ) {
                *p_58++=*s_59++;
                remaining_61--;
            }
            itoa(buf_60,(long)__builtin_va_arg(ap_57,void*),16,1);
            s_59=buf_60;
            while(            *s_59&&remaining_61>1            ) {
                *p_58++=*s_59++;
                remaining_61--;
            }
            break;
            case 108:
            if(            *(fmt+1)==117            ) {
                fmt++;
                itoa(buf_60,__builtin_va_arg(ap_57,long),10,1);
                s_59=buf_60;
                while(                *s_59&&remaining_61>1                ) {
                    *p_58++=*s_59++;
                    remaining_61--;
                }
            }
            break;
            default:
            if(            remaining_61>1            ) {
                *p_58++=37;
                remaining_61--;
                if(                remaining_61>1                ) {
                    *p_58++=*fmt;
                    remaining_61--;
                }
            }
            break;
        }
    }
    *p_58=0;
    __builtin_va_end(ap_57);
    return p_58-out;
}

void putchar(char c){
long _ret_62;
memset(&_ret_62, 0, sizeof(long));
    ({_ret_62; register long _a0 asm("a0") =(long)(1);
; register long _a1 asm("a1") =(long)(&c);
; register long _a2 asm("a2") =(long)(1);
; register long _a7 asm("a7") =64;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a1), "r"(_a2), "r"(_a7): "memory"); _ret_62=_a0; _ret_62; });
}

void printint(int val_, int base, int sign){
int i_64;
int negative_65;
unsigned int uval_66;
int digit_67;
memset(&uval_66, 0, sizeof(unsigned int));
    char buf_63[33];
    memset(&buf_63, 0, sizeof(char)    *(33)    );
    i_64=0;
    negative_65=0;
    if(    sign&&val_<0    ) {
        negative_65=1;
        uval_66=-val_;
    }
    else {
        uval_66=(unsigned int)val_;
    }
    if(    uval_66==0    ) {
        putchar(48);
        return;
    }
    while(    uval_66>0    ) {
        digit_67=uval_66%base;
        buf_63[i_64++]=((digit_67<10)?(48+digit_67):(97+(digit_67-10)));
        uval_66/=base;
    }
    if(    negative_65    ) {
        putchar(45);
    }
    while(    --i_64>=0    ) {
        putchar(buf_63[i_64]);
    }
}

void printlong(unsigned long  int val_, int base, int sign){
int i_69;
int negative_70;
int digit_71;
    char buf_68[65];
    memset(&buf_68, 0, sizeof(char)    *(65)    );
    i_69=0;
    negative_70=0;
    if(    sign&&(long)val_<0    ) {
        negative_70=1;
        val_=-(long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_71=val_%base;
        buf_68[i_69++]=((digit_71<10)?(48+digit_71):(97+(digit_71-10)));
        val_/=base;
    }
    if(    negative_70    ) {
        putchar(45);
    }
    while(    --i_69>=0    ) {
        putchar(buf_68[i_69]);
    }
}

void printlonglong(unsigned long  long val_, int base, int sign){
int i_73;
int negative_74;
int digit_75;
    char buf_72[65];
    memset(&buf_72, 0, sizeof(char)    *(65)    );
    i_73=0;
    negative_74=0;
    if(    sign&&(long  long)val_<0    ) {
        negative_74=1;
        val_=-(long  long)val_;
    }
    if(    val_==0    ) {
        putchar(48);
        return;
    }
    while(    val_>0    ) {
        digit_75=val_%base;
        buf_72[i_73++]=((digit_75<10)?(48+digit_75):(97+(digit_75-10)));
        val_/=base;
    }
    if(    negative_74    ) {
        putchar(45);
    }
    while(    --i_73>=0    ) {
        putchar(buf_72[i_73]);
    }
}

int printf(const char* fmt, ...){
va_list ap_76;
const char* p_77;
int lcount_78;
unsigned long  int val__79;
unsigned long  long val__80;
long val__81;
long long val__82;
int i_83;
int val__84;
unsigned int val__85;
unsigned long  int val__86;
char c_88;
memset(&ap_76, 0, sizeof(va_list));
p_77 = (void*)0;
    __builtin_va_start(ap_76,fmt);
    for(    p_77=fmt    ;    *p_77    ;    p_77++    ){
        if(        *p_77!=37        ) {
            putchar(*p_77);
            continue;
        }
        p_77++;
        if(        *p_77==108        ) {
            lcount_78=1;
            if(            *(p_77+1)==108            ) {
                lcount_78=2;
                p_77++;
            }
            p_77++;
            switch (            *p_77) {
                case 120:
                {
                    if(                    lcount_78==1                    ) {
                        val__79=__builtin_va_arg(ap_76,unsigned long  int);
                        printlong(val__79,16,0);
                    }
                    else {
                        val__80=__builtin_va_arg(ap_76,unsigned long  long);
                        printlonglong(val__80,16,0);
                    }
                    break;
                }
                case 100:
                {
                    if(                    lcount_78==1                    ) {
                        val__81=__builtin_va_arg(ap_76,long);
                        printlong(val__81,10,1);
                    }
                    else {
                        val__82=__builtin_va_arg(ap_76,long  long);
                        printlonglong(val__82,10,1);
                    }
                    break;
                }
                default:
                {
                    putchar(37);
                    for(                    i_83=0                    ;                    i_83<lcount_78                    ;                    i_83++                    ){
                        putchar(108);
                    }
                    putchar(*p_77);
                    break;
                }
            }
        }
        else {
            switch (            *p_77) {
                case 100:
                {
                    val__84=__builtin_va_arg(ap_76,int);
                    printint(val__84,10,1);
                    break;
                }
                case 120:
                {
                    val__85=__builtin_va_arg(ap_76,unsigned int);
                    printint(val__85,16,0);
                    break;
                }
                case 112:
                {
                    val__86=(unsigned long  int)__builtin_va_arg(ap_76,void*);
                    putchar(48);
                    putchar(120);
                    printlong(val__86,16,0);
                    break;
                }
                case 115:
                {
                    const char* s_87=__builtin_va_arg(ap_76,const char*);
                    if(                    !s_87                    ) {
                        s_87="(null)";
                    }
                    while(                    *s_87                    ) {
                        putchar(*s_87++);
                    }
                    break;
                }
                case 99:
                {
                    c_88=(char)__builtin_va_arg(ap_76,int);
                    putchar(c_88);
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
                    putchar(*p_77);
                    break;
                }
            }
        }
    }
    __builtin_va_end(ap_76);
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
void* __right_value4 = (void*)0;
char* __result_obj__27;
    __result_obj__27 = (char*)come_increment_ref_count(((char*)(__right_value4=__builtin_string(""))));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__27 = come_decrement_ref_count(__result_obj__27, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__27;
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
void* result_89;
void* __result_obj__28;
    result_89=((void*)0);
    size=(size+7&~7);
    result_89=calloc(1,size);
    __result_obj__28 = result_89;
    return __result_obj__28;
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeaderTiny* it_90;
struct sMemHeaderTiny* prev_it_91;
struct sMemHeaderTiny* next_it_92;
unsigned long  int size_93;
    if(    mem    ) {
        if(        gComeDebugLib        ) {
        }
        else {
            it_90=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_90->allocated!=177783            ) {
                return;
            }
            it_90->allocated=0;
            prev_it_91=it_90->prev;
            next_it_92=it_90->next;
            if(            gAllocMem==it_90            ) {
                gAllocMem=(struct sMemHeader*)next_it_92;
                if(                gAllocMem                ) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_91                ) {
                    prev_it_91->next=next_it_92;
                }
                if(                next_it_92                ) {
                    next_it_92->prev=prev_it_91;
                }
            }
            size_93=it_90->size;
            free(it_90);
            gNumFree++;
        }
    }
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* result_94;
struct sMemHeaderTiny* it_95;
void* __result_obj__29;
    if(    gComeDebugLib    ) {
    }
    else {
        result_94=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_95=result_94;
        it_95->allocated=177783;
        it_95->class_name=class_name;
        it_95->sname=sname;
        it_95->sline=sline;
        it_95->size=size+sizeof(struct sMemHeaderTiny);
        it_95->free_next=((void*)0);
        it_95->next=(struct sMemHeaderTiny*)gAllocMem;
        it_95->prev=((void*)0);
        if(        gAllocMem        ) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_95;
        }
        gAllocMem=(struct sMemHeader*)it_95;
        gNumAlloc++;
        __result_obj__29 = (char*)result_94+sizeof(struct sMemHeaderTiny);
        return __result_obj__29;
    }
}

void come_print_heap_info(void* mem){
}

char* come_dynamic_typeof(void* mem){
struct sMemHeader* it_96;
char* __result_obj__30;
struct sMemHeaderTiny* it_97;
char* __result_obj__31;
    if(    gComeDebugLib    ) {
        it_96=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_96->allocated!=177783        ) {
            printf("invalid heap object(%p)(1)\n",it_96);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__30 = it_96->class_name;
        return __result_obj__30;
    }
    else {
        it_97=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_97->allocated!=177783        ) {
            printf("invalid heap object(%p)(2)\n",it_97);
            ({register long _a0 asm("a0") =(long)(2);
; register long _a7 asm("a7") =70;
; __asm volatile("ecall" : "+r"(_a0): "r"(_a7): "memory");             while(            1            ) {
                ;
            }
            });        }
        __result_obj__31 = it_97->class_name;
        return __result_obj__31;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
char* mem_98;
unsigned long  int* ref_count_99;
unsigned long  int* size2_100;
void* __result_obj__32;
    mem_98=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_99=(unsigned long  int*)mem_98;
    *ref_count_99=0;
    size2_100=(unsigned long  int*)(mem_98+sizeof(unsigned long  int));
    *size2_100=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result_obj__32 = mem_98+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    return __result_obj__32;
}

void come_free(void* mem){
unsigned long  int* ref_count_101;
    if(    mem==((void*)0)    ) {
        return;
    }
    ref_count_101=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_101);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__33;
char* mem_102;
unsigned long  int* size_p_103;
unsigned long  int size_104;
void* result_105;
void* __result_obj__34;
    if(    !block    ) {
        __result_obj__33 = ((void*)0);
        return __result_obj__33;
    }
    mem_102=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_103=(unsigned long  int*)(mem_102+sizeof(unsigned long  int));
    size_104=*size_p_103-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_105=come_calloc_v2(1,size_104,sname,sline,class_name);
    memcpy(result_105,block,size_104);
    __result_obj__34 = result_105;
    return __result_obj__34;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__35;
unsigned long  int* ref_count_106;
void* __result_obj__36;
    if(    mem==((void*)0)    ) {
        __result_obj__35 = mem;
        return __result_obj__35;
    }
    ref_count_106=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_106)++;
    __result_obj__36 = mem;
    return __result_obj__36;
}

void* come_print_ref_count(void* mem){
void* __result_obj__37;
unsigned long  int* ref_count_107;
void* __result_obj__38;
    if(    mem==((void*)0)    ) {
        __result_obj__37 = mem;
        return __result_obj__37;
    }
    ref_count_107=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_107);
    __result_obj__38 = mem;
    return __result_obj__38;
}

int come_get_ref_count(void* mem){
unsigned long  int* ref_count_108;
    if(    mem==((void*)0)    ) {
        return 0;
    }
    ref_count_108=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    return *ref_count_108;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj){
void* __result_obj__39;
void* __result_obj__40;
unsigned long  int* ref_count_109;
unsigned long  int count_110;
void (*finalizer_111)(void*);
void* __result_obj__41;
void* __result_obj__42;
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
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
    ref_count_109=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement    ) {
        (*ref_count_109)--;
    }
    count_110=*ref_count_109;
    if(    !no_free&&count_110<=0    ) {
        if(        protocol_obj&&protocol_fun        ) {
            finalizer_111=protocol_fun;
            finalizer_111(protocol_obj);
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
void (*finalizer_112)(void*);
void (*finalizer_113)(void*);
void (*finalizer_114)(void*);
unsigned long  int* ref_count_115;
unsigned long  int count_116;
void (*finalizer_117)(void*);
void (*finalizer_118)(void*);
void (*finalizer_119)(void*);
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
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
                finalizer_112=protocol_fun;
                finalizer_112(protocol_obj);
            }
            finalizer_113=fun;
            finalizer_113(mem);
        }
        else {
            if(            protocol_obj&&protocol_fun            ) {
                finalizer_114=protocol_fun;
                finalizer_114(protocol_obj);
            }
        }
    }
    else {
        ref_count_115=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement        ) {
            (*ref_count_115)--;
        }
        count_116=*ref_count_115;
        if(        !no_free&&count_116<=0        ) {
            if(            mem            ) {
                if(                fun                ) {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_117=protocol_fun;
                        finalizer_117(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(                    fun                    ) {
                        finalizer_118=fun;
                        finalizer_118(mem);
                    }
                }
                else {
                    if(                    protocol_obj&&protocol_fun                    ) {
                        finalizer_119=protocol_fun;
                        finalizer_119(protocol_obj);
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
int len_120;
void* __right_value5 = (void*)0;
char* result_121;
char* __result_obj__44;
    if(    str==((void*)0)    ) {
        __result_obj__43 = (void*)come_increment_ref_count(((void*)0));
        (__result_obj__43 = come_decrement_ref_count(__result_obj__43, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__43;
    }
    len_120=strlen(str)+1;
    result_121=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_120)), "/usr/local/include/comelang.h", 929, "char*"));
    strncpy(result_121,str,len_120);
    __result_obj__44 = (char*)come_increment_ref_count(result_121);
    (result_121 = come_decrement_ref_count(result_121, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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
void* __right_value8 = (void*)0;
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
void* __right_value9 = (void*)0;
struct buffer* result_122;
void* __right_value10 = (void*)0;
char* __dec_obj3;
struct buffer* __result_obj__50;
    if(    self==((void*)0)    ) {
        __result_obj__49 = (void*)come_increment_ref_count(((void*)0));
        come_call_finalizer(buffer_finalize, __result_obj__49, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__49;
    }
    result_122=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2945, "struct buffer*"));
    result_122->size=self->size;
    __dec_obj3=result_122->buf,
    result_122->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2948, "char*"));
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
    result_122->len=self->len;
    memcpy(result_122->buf,self->buf,self->len);
    __result_obj__50 = (struct buffer*)come_increment_ref_count(result_122);
    come_call_finalizer(buffer_finalize, result_122, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
char* old_buf_123;
int old_len_124;
int new_size_125;
void* __right_value14 = (void*)0;
char* __dec_obj4;
struct buffer* __result_obj__53;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__52 = self;
        return __result_obj__52;
    }
    if(    self->len+size+1+1>=self->size    ) {
        old_buf_123=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2996, "char*"));
        memcpy(old_buf_123,self->buf,self->size);
        old_len_124=self->len;
        new_size_125=(self->size+size+1)*2;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_125)), "/usr/local/include/comelang.h", 3000, "char*"));
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_123,old_len_124);
        self->buf[old_len_124]=0;
        self->size=new_size_125;
        (old_buf_123 = come_decrement_ref_count(old_buf_123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
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
char* old_buf_126;
int old_len_127;
int new_size_128;
void* __right_value16 = (void*)0;
char* __dec_obj5;
struct buffer* __result_obj__55;
    if(    self==((void*)0)    ) {
        __result_obj__54 = ((void*)0);
        return __result_obj__54;
    }
    if(    self->len+1+1+1>=self->size    ) {
        old_buf_126=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "/usr/local/include/comelang.h", 3019, "char*"));
        old_len_127=self->len;
        new_size_128=(self->size+10+1)*2;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_128)), "/usr/local/include/comelang.h", 3023, "char*"));
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_126,old_len_127);
        self->buf[old_len_127]=0;
        self->size=new_size_128;
        (old_buf_126 = come_decrement_ref_count(old_buf_126, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result_obj__55 = self;
    return __result_obj__55;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
struct buffer* __result_obj__56;
int size_129;
void* __right_value17 = (void*)0;
char* old_buf_130;
int old_len_131;
int new_size_132;
void* __right_value18 = (void*)0;
char* __dec_obj6;
struct buffer* __result_obj__57;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__56 = self;
        return __result_obj__56;
    }
    size_129=strlen(mem);
    if(    self->len+size_129+1+1>=self->size    ) {
        old_buf_130=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3045, "char*"));
        memcpy(old_buf_130,self->buf,self->size);
        old_len_131=self->len;
        new_size_132=(self->size+size_129+1)*2;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_132)), "/usr/local/include/comelang.h", 3049, "char*"));
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_130,old_len_131);
        self->buf[old_len_131]=0;
        self->size=new_size_132;
        (old_buf_130 = come_decrement_ref_count(old_buf_130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_129);
    self->len+=size_129;
    self->buf[self->len]=0;
    __result_obj__57 = self;
    return __result_obj__57;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
struct buffer* __result_obj__58;
va_list args_133;
char* result_134;
int len_135;
struct buffer* __result_obj__59;
void* __right_value19 = (void*)0;
char* mem_136;
int size_137;
void* __right_value20 = (void*)0;
char* old_buf_138;
int old_len_139;
int new_size_140;
void* __right_value21 = (void*)0;
char* __dec_obj7;
struct buffer* __result_obj__60;
result_134 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)    ) {
        __result_obj__58 = self;
        return __result_obj__58;
    }
    __builtin_va_start(args_133,msg);
    len_135=vasprintf(&result_134,msg,args_133);
    __builtin_va_end(args_133);
    if(    len_135<0    ) {
        __result_obj__59 = self;
        return __result_obj__59;
    }
    mem_136=(char*)come_increment_ref_count(__builtin_string(result_134));
    size_137=strlen(mem_136);
    if(    self->len+size_137+1+1>=self->size    ) {
        old_buf_138=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3093, "char*"));
        memcpy(old_buf_138,self->buf,self->size);
        old_len_139=self->len;
        new_size_140=(self->size+size_137+1)*2;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_140)), "/usr/local/include/comelang.h", 3097, "char*"));
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_138,old_len_139);
        self->buf[old_len_139]=0;
        self->size=new_size_140;
        (old_buf_138 = come_decrement_ref_count(old_buf_138, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_136,size_137);
    self->len+=size_137;
    self->buf[self->len]=0;
    free(result_134);
    __result_obj__60 = self;
    (mem_136 = come_decrement_ref_count(mem_136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    return __result_obj__60;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
struct buffer* __result_obj__61;
int size_141;
void* __right_value22 = (void*)0;
char* old_buf_142;
int old_len_143;
int new_size_144;
void* __right_value23 = (void*)0;
char* __dec_obj8;
struct buffer* __result_obj__62;
    if(    self==((void*)0)||mem==((void*)0)    ) {
        __result_obj__61 = self;
        return __result_obj__61;
    }
    size_141=strlen(mem)+1;
    if(    self->len+size_141+1+1+1>=self->size    ) {
        old_buf_142=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3119, "char*"));
        memcpy(old_buf_142,self->buf,self->size);
        old_len_143=self->len;
        new_size_144=(self->size+size_141+1)*2;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_144)), "/usr/local/include/comelang.h", 3123, "char*"));
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_142,old_len_143);
        self->buf[old_len_143]=0;
        self->size=new_size_144;
        (old_buf_142 = come_decrement_ref_count(old_buf_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem,size_141);
    self->len+=size_141;
    self->buf[self->len]=0;
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
struct buffer* __result_obj__63;
int* mem_145;
int size_146;
void* __right_value24 = (void*)0;
char* old_buf_147;
int old_len_148;
int new_size_149;
void* __right_value25 = (void*)0;
char* __dec_obj9;
struct buffer* __result_obj__64;
    if(    self==((void*)0)    ) {
        __result_obj__63 = ((void*)0);
        return __result_obj__63;
    }
    mem_145=&value;
    size_146=sizeof(int);
    if(    self->len+size_146+1+1>=self->size    ) {
        old_buf_147=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3146, "char*"));
        memcpy(old_buf_147,self->buf,self->size);
        old_len_148=self->len;
        new_size_149=(self->size+size_146+1)*2;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_149)), "/usr/local/include/comelang.h", 3150, "char*"));
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_147,old_len_148);
        self->buf[old_len_148]=0;
        self->size=new_size_149;
        (old_buf_147 = come_decrement_ref_count(old_buf_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_145,size_146);
    self->len+=size_146;
    self->buf[self->len]=0;
    __result_obj__64 = self;
    return __result_obj__64;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
long* mem_150;
int size_151;
void* __right_value26 = (void*)0;
char* old_buf_152;
int old_len_153;
int new_size_154;
void* __right_value27 = (void*)0;
char* __dec_obj10;
struct buffer* __result_obj__65;
    mem_150=&value;
    size_151=sizeof(long);
    if(    self->len+size_151+1+1>=self->size    ) {
        old_buf_152=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3169, "char*"));
        memcpy(old_buf_152,self->buf,self->size);
        old_len_153=self->len;
        new_size_154=(self->size+size_151+1)*2;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_154)), "/usr/local/include/comelang.h", 3173, "char*"));
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_152,old_len_153);
        self->buf[old_len_153]=0;
        self->size=new_size_154;
        (old_buf_152 = come_decrement_ref_count(old_buf_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_150,size_151);
    self->len+=size_151;
    self->buf[self->len]=0;
    __result_obj__65 = self;
    return __result_obj__65;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
struct buffer* __result_obj__66;
short* mem_155;
int size_156;
void* __right_value28 = (void*)0;
char* old_buf_157;
int old_len_158;
int new_size_159;
void* __right_value29 = (void*)0;
char* __dec_obj11;
struct buffer* __result_obj__67;
    if(    self==((void*)0)    ) {
        __result_obj__66 = ((void*)0);
        return __result_obj__66;
    }
    mem_155=&value;
    size_156=sizeof(short);
    if(    self->len+size_156+1+1>=self->size    ) {
        old_buf_157=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 3196, "char*"));
        memcpy(old_buf_157,self->buf,self->size);
        old_len_158=self->len;
        new_size_159=(self->size+size_156+1)*2;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_159)), "/usr/local/include/comelang.h", 3200, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        memcpy(self->buf,old_buf_157,old_len_158);
        self->buf[old_len_158]=0;
        self->size=new_size_159;
        (old_buf_157 = come_decrement_ref_count(old_buf_157, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    }
    memcpy(self->buf+self->len,mem_155,size_156);
    self->len+=size_156;
    self->buf[self->len]=0;
    __result_obj__67 = self;
    return __result_obj__67;
}

struct buffer* buffer_alignment(struct buffer* self){
struct buffer* __result_obj__68;
int len_160;
int new_size_161;
void* __right_value30 = (void*)0;
char* __dec_obj12;
int i_162;
struct buffer* __result_obj__69;
    if(    self==((void*)0)    ) {
        __result_obj__68 = ((void*)0);
        return __result_obj__68;
    }
    len_160=self->len;
    len_160=(len_160+3)&~3;
    if(    len_160>=self->size    ) {
        new_size_161=(self->size+1+1)*2;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size_161)), "/usr/local/include/comelang.h", 3224, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->size=new_size_161;
    }
    for(    i_162=self->len    ;    i_162<len_160    ;    i_162++    ){
        self->buf[i_162]=0;
    }
    self->len=len_160;
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
struct buffer* result_163;
struct buffer* __result_obj__70;
struct buffer* __result_obj__71;
    result_163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3254, "struct buffer*"))));
    if(    self==((void*)0)    ) {
        __result_obj__70 = (struct buffer*)come_increment_ref_count(result_163);
        come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        come_call_finalizer(buffer_finalize, __result_obj__70, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__70;
    }
    buffer_append_str(result_163,self);
    __result_obj__71 = (struct buffer*)come_increment_ref_count(result_163);
    come_call_finalizer(buffer_finalize, result_163, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
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
struct buffer* result_164;
struct buffer* __result_obj__75;
    result_164=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3281, "struct buffer*"))));
    buffer_append(result_164,self,sizeof(char)*len);
    __result_obj__75 = (struct buffer*)come_increment_ref_count(result_164);
    come_call_finalizer(buffer_finalize, result_164, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__75, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__75;
}

struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_165;
int i_166;
struct buffer* __result_obj__76;
    result_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3288, "struct buffer*"))));
    for(    i_166=0    ;    i_166<len    ;    i_166++    ){
        buffer_append(result_165,self[i_166],strlen(self[i_166]));
    }
    __result_obj__76 = (struct buffer*)come_increment_ref_count(result_165);
    come_call_finalizer(buffer_finalize, result_165, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__76, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__76;
}

struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_167;
struct buffer* __result_obj__77;
    result_167=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3297, "struct buffer*"))));
    buffer_append(result_167,(char*)self,sizeof(short)*len);
    __result_obj__77 = (struct buffer*)come_increment_ref_count(result_167);
    come_call_finalizer(buffer_finalize, result_167, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__77, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__77;
}

struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_168;
struct buffer* __result_obj__78;
    result_168=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3304, "struct buffer*"))));
    buffer_append(result_168,(char*)self,sizeof(int)*len);
    __result_obj__78 = (struct buffer*)come_increment_ref_count(result_168);
    come_call_finalizer(buffer_finalize, result_168, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__78, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__78;
}

struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_169;
struct buffer* __result_obj__79;
    result_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3311, "struct buffer*"))));
    buffer_append(result_169,(char*)self,sizeof(long)*len);
    __result_obj__79 = (struct buffer*)come_increment_ref_count(result_169);
    come_call_finalizer(buffer_finalize, result_169, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__79, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__79;
}

struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_170;
struct buffer* __result_obj__80;
    result_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3318, "struct buffer*"))));
    buffer_append(result_170,(char*)self,sizeof(float)*len);
    __result_obj__80 = (struct buffer*)come_increment_ref_count(result_170);
    come_call_finalizer(buffer_finalize, result_170, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__80, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__80;
}

struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct buffer* result_171;
struct buffer* __result_obj__81;
    result_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3325, "struct buffer*"))));
    buffer_append(result_171,(char*)self,sizeof(double)*len);
    __result_obj__81 = (struct buffer*)come_increment_ref_count(result_171);
    come_call_finalizer(buffer_finalize, result_171, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, __result_obj__81, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__81;
}

char* buffer_printable(struct buffer* self){
int len_172;
void* __right_value49 = (void*)0;
char* result_173;
int n_174;
int i_175;
unsigned char c_176;
char* __result_obj__82;
    len_172=self->len;
    result_173=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_172*2+1)), "/usr/local/include/comelang.h", 3333, "char*"));
    n_174=0;
    for(    i_175=0    ;    i_175<len_172    ;    i_175++    ){
        c_176=self->buf[i_175];
        if(        (c_176>=0&&c_176<32)||c_176==127        ) {
            result_173[n_174++]=94;
            result_173[n_174++]=c_176+65-1;
        }
        else if(        c_176>127        ) {
            result_173[n_174++]=63;
        }
        else {
            result_173[n_174++]=c_176;
        }
    }
    result_173[n_174]=0;
    __result_obj__82 = (char*)come_increment_ref_count(result_173);
    (result_173 = come_decrement_ref_count(result_173, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__82 = come_decrement_ref_count(__result_obj__82, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__82;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_177;
struct list$1char$* __result_obj__84;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_177=0    ;    i_177<num_value    ;    i_177++    ){
        list$1char$_push_back(self,values[i_177]);
    }
    __result_obj__84 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__84, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__84;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_178;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_179;
void* __right_value53 = (void*)0;
struct list_item$1char$* litem_180;
struct list$1char$* __result_obj__83;
    if(    self->len==0    ) {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$*"))));
        litem_178->prev=((void*)0);
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head=litem_178;
    }
    else if(    self->len==1    ) {
        litem_179=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$*"))));
        litem_179->prev=self->head;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head->next=litem_179;
    }
    else {
        litem_180=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value53=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$*"))));
        litem_180->prev=self->tail;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail->next=litem_180;
        self->tail=litem_180;
    }
    self->len++;
    __result_obj__83 = self;
    return __result_obj__83;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_181;
struct list_item$1char$* prev_it_182;
    it_181=self->head;
    while(    it_181!=((void*)0)    ) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it_182, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

struct list$1char$* charpa_to_list(char* self, unsigned long  int len){
void* __right_value50 = (void*)0;
void* __right_value54 = (void*)0;
struct list$1char$* __result_obj__85;
    __result_obj__85 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value54=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/usr/local/include/comelang.h", 3374, "struct list$1char$*")),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value54, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __result_obj__85, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_183;
struct list$1char$p* __result_obj__87;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_183=0    ;    i_183<num_value    ;    i_183++    ){
        list$1char$p_push_back(self,values[i_183]);
    }
    __result_obj__87 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__87, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__87;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_184;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_185;
void* __right_value58 = (void*)0;
struct list_item$1char$p* litem_186;
struct list$1char$p* __result_obj__86;
    if(    self->len==0    ) {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1    ) {
        litem_185=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$p*"))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value58=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$p*"))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__86 = self;
    return __result_obj__86;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_187;
struct list_item$1char$p* prev_it_188;
    it_187=self->head;
    while(    it_187!=((void*)0)    ) {
        prev_it_188=it_187;
        it_187=it_187->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it_188, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

struct list$1char$p* charppa_to_list(char** self, unsigned long  int len){
void* __right_value55 = (void*)0;
void* __right_value59 = (void*)0;
struct list$1char$p* __result_obj__88;
    __result_obj__88 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value59=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/comelang.h", 3379, "struct list$1char$p*")),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value59, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__88, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_189;
struct list$1short$* __result_obj__90;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_189=0    ;    i_189<num_value    ;    i_189++    ){
        list$1short$_push_back(self,values[i_189]);
    }
    __result_obj__90 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__90, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__90;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_190;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_191;
void* __right_value63 = (void*)0;
struct list_item$1short$* litem_192;
struct list$1short$* __result_obj__89;
    if(    self->len==0    ) {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1short$*"))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1    ) {
        litem_191=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1short$*"))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value63=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1short$*"))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__89 = self;
    return __result_obj__89;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_193;
struct list_item$1short$* prev_it_194;
    it_193=self->head;
    while(    it_193!=((void*)0)    ) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it_194, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

struct list$1short$* shortpa_to_list(short* self, unsigned long  int len){
void* __right_value60 = (void*)0;
void* __right_value64 = (void*)0;
struct list$1short$* __result_obj__91;
    __result_obj__91 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value64=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/usr/local/include/comelang.h", 3384, "struct list$1short$*")),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value64, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __result_obj__91, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_195;
struct list$1int$* __result_obj__93;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0    ;    i_195<num_value    ;    i_195++    ){
        list$1int$_push_back(self,values[i_195]);
    }
    __result_obj__93 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__93, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__93;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_196;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_197;
void* __right_value68 = (void*)0;
struct list_item$1int$* litem_198;
struct list$1int$* __result_obj__92;
    if(    self->len==0    ) {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1int$*"))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1    ) {
        litem_197=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1int$*"))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value68=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1int$*"))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__92 = self;
    return __result_obj__92;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_199;
struct list_item$1int$* prev_it_200;
    it_199=self->head;
    while(    it_199!=((void*)0)    ) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it_200, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

struct list$1int$* intpa_to_list(int* self, unsigned long  int len){
void* __right_value65 = (void*)0;
void* __right_value69 = (void*)0;
struct list$1int$* __result_obj__94;
    __result_obj__94 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value69=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/usr/local/include/comelang.h", 3389, "struct list$1int$*")),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value69, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __result_obj__94, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_201;
struct list$1long$* __result_obj__96;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0    ;    i_201<num_value    ;    i_201++    ){
        list$1long$_push_back(self,values[i_201]);
    }
    __result_obj__96 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__96, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__96;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_202;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_203;
void* __right_value73 = (void*)0;
struct list_item$1long$* litem_204;
struct list$1long$* __result_obj__95;
    if(    self->len==0    ) {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1long$*"))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1    ) {
        litem_203=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1long$*"))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value73=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1long$*"))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__95 = self;
    return __result_obj__95;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_205;
struct list_item$1long$* prev_it_206;
    it_205=self->head;
    while(    it_205!=((void*)0)    ) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it_206, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

struct list$1long$* longpa_to_list(long* self, unsigned long  int len){
void* __right_value70 = (void*)0;
void* __right_value74 = (void*)0;
struct list$1long$* __result_obj__97;
    __result_obj__97 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value74=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/usr/local/include/comelang.h", 3394, "struct list$1long$*")),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value74, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __result_obj__97, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_207;
struct list$1float$* __result_obj__99;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_207=0    ;    i_207<num_value    ;    i_207++    ){
        list$1float$_push_back(self,values[i_207]);
    }
    __result_obj__99 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__99, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__99;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_208;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_209;
void* __right_value78 = (void*)0;
struct list_item$1float$* litem_210;
struct list$1float$* __result_obj__98;
    if(    self->len==0    ) {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1float$*"))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head=litem_208;
    }
    else if(    self->len==1    ) {
        litem_209=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1float$*"))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        litem_210=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value78=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1float$*"))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__98 = self;
    return __result_obj__98;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_211;
struct list_item$1float$* prev_it_212;
    it_211=self->head;
    while(    it_211!=((void*)0)    ) {
        prev_it_212=it_211;
        it_211=it_211->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it_212, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

struct list$1float$* floatpa_to_list(float* self, unsigned long  int len){
void* __right_value75 = (void*)0;
void* __right_value79 = (void*)0;
struct list$1float$* __result_obj__100;
    __result_obj__100 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value79=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/usr/local/include/comelang.h", 3399, "struct list$1float$*")),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value79, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __result_obj__100, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_213;
struct list$1double$* __result_obj__102;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_213=0    ;    i_213<num_value    ;    i_213++    ){
        list$1double$_push_back(self,values[i_213]);
    }
    __result_obj__102 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __result_obj__102, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    return __result_obj__102;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_214;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_215;
void* __right_value83 = (void*)0;
struct list_item$1double$* litem_216;
struct list$1double$* __result_obj__101;
    if(    self->len==0    ) {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1double$*"))));
        litem_214->prev=((void*)0);
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head=litem_214;
    }
    else if(    self->len==1    ) {
        litem_215=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1double$*"))));
        litem_215->prev=self->head;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head->next=litem_215;
    }
    else {
        litem_216=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value83=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1double$*"))));
        litem_216->prev=self->tail;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail->next=litem_216;
        self->tail=litem_216;
    }
    self->len++;
    __result_obj__101 = self;
    return __result_obj__101;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_217;
struct list_item$1double$* prev_it_218;
    it_217=self->head;
    while(    it_217!=((void*)0)    ) {
        prev_it_218=it_217;
        it_217=it_217->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it_218, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

struct list$1double$* doublepa_to_list(double* self, unsigned long  int len){
void* __right_value80 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1double$* __result_obj__103;
    __result_obj__103 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value84=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/usr/local/include/comelang.h", 3404, "struct list$1double$*")),len,self))));
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
int len_219;
void* __right_value86 = (void*)0;
char* result_220;
char* __result_obj__105;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(""))));
        (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__104;
    }
    len_219=strlen(self)+strlen(right);
    result_220=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_219+1)), "/usr/local/include/comelang.h", 3633, "char*"));
    strncpy(result_220,self,len_219+1);
    strncat(result_220,right,len_219+1);
    __result_obj__105 = (char*)come_increment_ref_count(result_220);
    (result_220 = come_decrement_ref_count(result_220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__105 = come_decrement_ref_count(__result_obj__105, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__105;
}

char* string_operator_add(char* self, char* right){
void* __right_value87 = (void*)0;
char* __result_obj__106;
int len_221;
void* __right_value88 = (void*)0;
char* result_222;
char* __result_obj__107;
    if(    self==((void*)0)||right==((void*)0)    ) {
        __result_obj__106 = (char*)come_increment_ref_count(((char*)(__right_value87=__builtin_string(""))));
        (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__106 = come_decrement_ref_count(__result_obj__106, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__106;
    }
    len_221=strlen(self)+strlen(right);
    result_222=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_221+1)), "/usr/local/include/comelang.h", 3648, "char*"));
    strncpy(result_222,self,len_221+1);
    strncat(result_222,right,len_221+1);
    __result_obj__107 = (char*)come_increment_ref_count(result_222);
    (result_222 = come_decrement_ref_count(result_222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__107 = come_decrement_ref_count(__result_obj__107, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__107;
}

char* charp_operator_mult(char* self, int right){
void* __right_value89 = (void*)0;
char* __result_obj__108;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct buffer* buf_223;
int i_224;
void* __right_value92 = (void*)0;
char* __result_obj__109;
    if(    self==((void*)0)    ) {
        __result_obj__108 = (char*)come_increment_ref_count(((char*)(__right_value89=__builtin_string(""))));
        (__right_value89 = come_decrement_ref_count(__right_value89, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__108 = come_decrement_ref_count(__result_obj__108, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__108;
    }
    buf_223=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3661, "struct buffer*"))));
    for(    i_224=0    ;    i_224<right    ;    i_224++    ){
        buffer_append_str(buf_223,self);
    }
    __result_obj__109 = (char*)come_increment_ref_count(((char*)(__right_value92=buffer_to_string(buf_223))));
    come_call_finalizer(buffer_finalize, buf_223, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__109 = come_decrement_ref_count(__result_obj__109, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__109;
}

char* string_operator_mult(char* self, int right){
void* __right_value93 = (void*)0;
char* __result_obj__110;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct buffer* buf_225;
int i_226;
void* __right_value96 = (void*)0;
char* __result_obj__111;
    if(    self==((void*)0)    ) {
        __result_obj__110 = (char*)come_increment_ref_count(((char*)(__right_value93=__builtin_string(""))));
        (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__110 = come_decrement_ref_count(__result_obj__110, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__110;
    }
    buf_225=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3675, "struct buffer*"))));
    for(    i_226=0    ;    i_226<right    ;    i_226++    ){
        buffer_append_str(buf_225,self);
    }
    __result_obj__111 = (char*)come_increment_ref_count(((char*)(__right_value96=buffer_to_string(buf_225))));
    come_call_finalizer(buffer_finalize, buf_225, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__111 = come_decrement_ref_count(__result_obj__111, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__111;
}

unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}

_Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_227;
int i_228;
    result_227=(_Bool)0;
    for(    i_228=0    ;    i_228<len    ;    i_228++    ){
        if(        strncmp(self[i_228],str,strlen(self[i_228]))==0        ) {
            result_227=(_Bool)1;
            break;
        }
    }
    return result_227;
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

unsigned int string_get_hash_key(char* value){
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
_Bool result_233;
    result_233=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_233;
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
_Bool result_234;
    result_234=(c>=32&&c<=126);
    return result_234;
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
int len_235;
void* __right_value98 = (void*)0;
char* result_236;
int i_237;
char* __result_obj__113;
    if(    str==((void*)0)    ) {
        __result_obj__112 = (char*)come_increment_ref_count(((char*)(__right_value97=__builtin_string(""))));
        (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__112 = come_decrement_ref_count(__result_obj__112, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__112;
    }
    len_235=strlen(str);
    result_236=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_235+1)), "/usr/local/include/comelang.h", 3943, "char*"));
    for(    i_237=0    ;    i_237<len_235    ;    i_237++    ){
        result_236[i_237]=str[len_235-i_237-1];
    }
    result_236[len_235]=0;
    __result_obj__113 = (char*)come_increment_ref_count(result_236);
    (result_236 = come_decrement_ref_count(result_236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__113 = come_decrement_ref_count(__result_obj__113, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__113;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __right_value99 = (void*)0;
char* __result_obj__114;
int len_238;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
char* __result_obj__115;
void* __right_value102 = (void*)0;
char* __result_obj__116;
void* __right_value103 = (void*)0;
char* __result_obj__117;
void* __right_value104 = (void*)0;
char* result_239;
char* __result_obj__118;
    if(    str==((void*)0)    ) {
        __result_obj__114 = (char*)come_increment_ref_count(((char*)(__right_value99=__builtin_string(""))));
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__114 = come_decrement_ref_count(__result_obj__114, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__114;
    }
    len_238=strlen(str);
    if(    head<0    ) {
        head+=len_238;
    }
    if(    tail<0    ) {
        tail+=len_238+1;
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
    if(    tail>=len_238    ) {
        tail=len_238;
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
    result_239=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 3989, "char*"));
    memcpy(result_239,str+head,tail-head);
    result_239[tail-head]=0;
    __result_obj__118 = (char*)come_increment_ref_count(result_239);
    (result_239 = come_decrement_ref_count(result_239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__118 = come_decrement_ref_count(__result_obj__118, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__118;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __right_value105 = (void*)0;
char* __result_obj__119;
int len_240;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
char* __result_obj__120;
void* __right_value108 = (void*)0;
char* __result_obj__121;
void* __right_value109 = (void*)0;
char* __result_obj__122;
void* __right_value110 = (void*)0;
char* result_241;
char* __result_obj__123;
    if(    str==((void*)0)    ) {
        __result_obj__119 = (char*)come_increment_ref_count(((char*)(__right_value105=__builtin_string(""))));
        (__right_value105 = come_decrement_ref_count(__right_value105, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__119 = come_decrement_ref_count(__result_obj__119, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__119;
    }
    len_240=strlen(str);
    if(    head<0    ) {
        head+=len_240;
    }
    if(    tail<0    ) {
        tail+=len_240+1;
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
    if(    tail>=len_240    ) {
        tail=len_240;
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
    result_241=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4032, "char*"));
    memcpy(result_241,str+head,tail-head);
    result_241[tail-head]=0;
    __result_obj__123 = (char*)come_increment_ref_count(result_241);
    (result_241 = come_decrement_ref_count(result_241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__123 = come_decrement_ref_count(__result_obj__123, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__123;
}

char* charp_substring(char* str, int head, int tail){
void* __right_value111 = (void*)0;
char* __result_obj__124;
int len_242;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* __result_obj__125;
void* __right_value114 = (void*)0;
char* __result_obj__126;
void* __right_value115 = (void*)0;
char* __result_obj__127;
void* __right_value116 = (void*)0;
char* result_243;
char* __result_obj__128;
    if(    str==((void*)0)    ) {
        __result_obj__124 = (char*)come_increment_ref_count(((char*)(__right_value111=__builtin_string(""))));
        (__right_value111 = come_decrement_ref_count(__right_value111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__124 = come_decrement_ref_count(__result_obj__124, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__124;
    }
    len_242=strlen(str);
    if(    head<0    ) {
        head+=len_242;
    }
    if(    tail<0    ) {
        tail+=len_242+1;
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
    if(    tail>=len_242    ) {
        tail=len_242;
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
    result_243=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/comelang.h", 4075, "char*"));
    memcpy(result_243,str+head,tail-head);
    result_243[tail-head]=0;
    __result_obj__128 = (char*)come_increment_ref_count(result_243);
    (result_243 = come_decrement_ref_count(result_243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__128;
}

char* xsprintf(char* msg, ...){
void* __right_value117 = (void*)0;
char* __result_obj__129;
va_list args_244;
char* result_245;
int len_246;
void* __right_value118 = (void*)0;
char* __result_obj__130;
void* __right_value119 = (void*)0;
char* result2_247;
char* __result_obj__131;
result_245 = (void*)0;
    if(    msg==((void*)0)    ) {
        __result_obj__129 = (char*)come_increment_ref_count(((char*)(__right_value117=__builtin_string(""))));
        (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__129 = come_decrement_ref_count(__result_obj__129, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__129;
    }
    __builtin_va_start(args_244,msg);
    len_246=vasprintf(&result_245,msg,args_244);
    __builtin_va_end(args_244);
    if(    len_246<0    ) {
        __result_obj__130 = (char*)come_increment_ref_count(((char*)(__right_value118=__builtin_string(""))));
        (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__130 = come_decrement_ref_count(__result_obj__130, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__130;
    }
    result2_247=(char*)come_increment_ref_count(__builtin_string(result_245));
    free(result_245);
    __result_obj__131 = (char*)come_increment_ref_count(result2_247);
    (result2_247 = come_decrement_ref_count(result2_247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__131;
}

char* charp_delete(char* str, int head, int tail){
void* __right_value120 = (void*)0;
char* __result_obj__132;
int len_248;
void* __right_value121 = (void*)0;
char* __result_obj__133;
void* __right_value122 = (void*)0;
char* __result_obj__134;
void* __right_value123 = (void*)0;
char* result_249;
char* __result_obj__135;
    if(    str==((void*)0)    ) {
        __result_obj__132 = (char*)come_increment_ref_count(((char*)(__right_value120=__builtin_string(""))));
        (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__132 = come_decrement_ref_count(__result_obj__132, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__132;
    }
    len_248=strlen(str);
    if(    strcmp(str,"")==0    ) {
        __result_obj__133 = (char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(str))));
        (__right_value121 = come_decrement_ref_count(__right_value121, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__133 = come_decrement_ref_count(__result_obj__133, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__133;
    }
    if(    head<0    ) {
        head+=len_248;
    }
    if(    tail<0    ) {
        tail+=len_248+1;
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
    if(    tail>=len_248    ) {
        tail=len_248;
    }
    result_249=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_248-(tail-head)+1)), "/usr/local/include/comelang.h", 4137, "char*"));
    memcpy(result_249,str,head);
    memcpy(result_249+head,str+tail,len_248-tail);
    result_249[len_248-(tail-head)]=0;
    __result_obj__135 = (char*)come_increment_ref_count(result_249);
    (result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
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

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_253;
char* __dec_obj13;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_254;
char* __dec_obj14;
void* __right_value132 = (void*)0;
struct list_item$1char$ph* litem_255;
char* __dec_obj15;
struct list$1char$ph* __result_obj__138;
    if(    self->len==0    ) {
        litem_253=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj13=litem_253->item,
        litem_253->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1    ) {
        litem_254=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1125, "struct list_item$1char$ph*"))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj14=litem_254->item,
        litem_254->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value132=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/comelang.h", 1135, "struct list_item$1char$ph*"))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj15=litem_255->item,
        litem_255->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */, (void*)0);
        self->tail->next=litem_255;
        self->tail=litem_255;
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
struct list$1char$ph* result_250;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* str_251;
int i_252;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1char$ph* __result_obj__139;
    if(    self==((void*)0)    ) {
        __result_obj__137 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value125=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4150, "struct list$1char$ph*"))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value125, (void*)0, (void*)0, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__137, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
        return __result_obj__137;
    }
    result_250=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/comelang.h", 4153, "struct list$1char$ph*"))));
    str_251=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4155, "struct buffer*"))));
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
    __result_obj__139 = (struct list$1char$ph*)come_increment_ref_count(result_250);
    come_call_finalizer(list$1char$ph$p_finalize, result_250, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, (void*)0);
    come_call_finalizer(buffer_finalize, str_251, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
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
int len_256;
void* __right_value137 = (void*)0;
char* result_257;
int n_258;
int i_259;
char c_260;
char* __result_obj__142;
    len_256=charp_length(str);
    result_257=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len_256*2+1)), "/usr/local/include/comelang.h", 4187, "char*"));
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
    __result_obj__142 = (char*)come_increment_ref_count(result_257);
    (result_257 = come_decrement_ref_count(result_257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    (__result_obj__142 = come_decrement_ref_count(__result_obj__142, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__142;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __right_value138 = (void*)0;
char* __result_obj__143;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct buffer* result_261;
char* p_262;
char* p2_263;
void* __right_value141 = (void*)0;
char* __result_obj__144;
    if(    str==((void*)0)||replace==((void*)0)    ) {
        __result_obj__143 = (char*)come_increment_ref_count(((char*)(__right_value138=__builtin_string(self))));
        (__right_value138 = come_decrement_ref_count(__right_value138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__143 = come_decrement_ref_count(__result_obj__143, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__143;
    }
    result_261=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4215, "struct buffer*"))));
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
    __result_obj__144 = (char*)come_increment_ref_count(((char*)(__right_value141=buffer_to_string(result_261))));
    come_call_finalizer(buffer_finalize, result_261, (void*)0, (void*)0, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, (void*)0);
    (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__144 = come_decrement_ref_count(__result_obj__144, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__144;
}

char* xbasename(char* path){
void* __right_value142 = (void*)0;
char* __result_obj__145;
char* p_264;
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
        __result_obj__146 = (char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string(path))));
        (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__146 = come_decrement_ref_count(__result_obj__146, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__146;
    }
    else {
        __result_obj__147 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string(p_264+1))));
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
char* path2_265;
char* p_266;
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
        __result_obj__150 = (char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(path2_265))));
        (path2_265 = come_decrement_ref_count(path2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__150 = come_decrement_ref_count(__result_obj__150, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__150;
    }
    else {
        __result_obj__151 = (char*)come_increment_ref_count(((char*)(__right_value149=charp_substring(path2_265,0,p_266-path2_265))));
        (path2_265 = come_decrement_ref_count(path2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__right_value149 = come_decrement_ref_count(__right_value149, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__151 = come_decrement_ref_count(__result_obj__151, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__151;
    }
    __result_obj__152 = (char*)come_increment_ref_count(((char*)(__right_value150=__builtin_string(""))));
    (path2_265 = come_decrement_ref_count(path2_265, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
    (__result_obj__152 = come_decrement_ref_count(__result_obj__152, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
    return __result_obj__152;
}

char* xextname(char* path){
void* __right_value151 = (void*)0;
char* __result_obj__153;
char* p_267;
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
        __result_obj__154 = (char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(path))));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__154 = come_decrement_ref_count(__result_obj__154, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__154;
    }
    else {
        __result_obj__155 = (char*)come_increment_ref_count(((char*)(__right_value153=__builtin_string(p_267+1))));
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
char* msg2_268;
va_list args_269;
void* __right_value175 = (void*)0;
char* __result_obj__177;
msg2_268 = (void*)0;
    if(    self==((void*)0)    ) {
        __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(""))));
        (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, (void*)0));
        (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, (void*)0));
        return __result_obj__176;
    }
    __builtin_va_start(args_269,self);
    vasprintf(&msg2_268,self,args_269);
    __builtin_va_end(args_269);
    printf("%s",msg2_268);
    free(msg2_268);
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
int i_270;
    for(    i_270=0    ;    i_270<self    ;    i_270++    ){
        block(parent,i_270);
    }
}

