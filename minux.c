#include "minux.h"

int errno;

typedef struct mem_block {
    size_t size;
    struct mem_block *next;
} mem_block_t;

mem_block_t *free_list = NULL;

int errno;

// POSIX 風 sbrk: 成功で「旧プログラムブレーク」を返す。失敗で (void*)-1, errno=ENOMEM
void *sbrk(ptrdiff_t increment) {
    static uintptr_t cur;      // 現在の program break（ユーザ空間の絶対アドレス）
    static int inited = 0;

    // 初回：カーネルに問い合わせて現在の brk を知る
    if (!inited) {
        long now = brk(0);                // 実装が「クエリとしての brk(0)」でなくても、変更は起きない
        if (now < 0) { errno = 12; return (void*)-1; }  // ENOMEM
        cur = (uintptr_t)now;
        inited = 1;
    }

    if (increment == 0) {
        return (void*)cur;                // 現在の brk を返す
    }

    // オーバーフロー保護
    uintptr_t want = cur + (intptr_t)increment;
    if ((increment > 0 && want < cur) || (increment < 0 && want > cur)) {
        errno = 12;                       // ENOMEM
puts("MALLOC RETUR -1(1)");
        return (void*)-1;
    }

    // 要求ブレークへ移動（brk の戻り値仕様に依らず、後で再取得して正規化）
    long rc = brk((long)want);
    if (rc < 0) { 
        errno = 12; 
puts("MALLOC RETUR -1(2)");
        return (void*)-1; 
    }

    // 正規化：現在値を改めて読み直す
    long newer = brk(0);
    if (newer < 0) { 
        errno = 12; 
puts("MALLOC RETUR -1(3)");
        return (void*)-1; 
    }

    void *old = (void*)cur;   // 旧ブレーク（これを返すのが sbrk の契約）
    cur = (uintptr_t)newer;
    return old;
}


void *malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    if (size % 8 != 0) {
        size += 8 - (size % 8);
    }
    size += sizeof(mem_block_t); 

    mem_block_t *current = free_list;
    mem_block_t *prev = NULL;
    

    while (current != NULL) {
        if (current->size >= size) {
            if (prev == NULL) {
                free_list = current->next;
            } else {
                prev->next = current->next;
            }
            return (void *)(current + 1); 
        }
        prev = current;
        current = current->next;
    }

    mem_block_t *new_mem = (mem_block_t *)sbrk(size);
    if (new_mem == (void *)-1) {
puts("MALLOC RETURN NULL(0)");
        return NULL; 
    }

    new_mem->size = size;
    new_mem->next = NULL;
    return (void *)(new_mem + 1); 
}

void free(void *ptr) {
    if (ptr == NULL) {
        return;
    }

    mem_block_t *block = (mem_block_t *)ptr - 1;

    block->next = free_list;
    free_list = block;
}

void *calloc(size_t nmemb, size_t size) {
    size_t total_size = nmemb * size;
    if (total_size == 0) {
        return NULL;
    }

    void *ptr = malloc(total_size);
    if (ptr != NULL) {
        memset(ptr, 0, total_size);
    }
    return ptr;
}

void *realloc(void *ptr, size_t size) {
    if (ptr == 0) return malloc(size);
    if (size == 0) { free(ptr); return 0; }

    // Old block header sits just before the user pointer
    mem_block_t *oldb = (mem_block_t*)ptr - 1;
    size_t old_total = oldb->size;
    size_t old_payload = (old_total > sizeof(mem_block_t)) ? (old_total - sizeof(mem_block_t)) : 0;

    void *np = malloc(size);
    if (!np) return 0;
    size_t tocopy = old_payload < size ? old_payload : size;
    memcpy(np, ptr, tocopy);
    free(ptr);
    return np;
}

char* strdup(const char* s) {
    char* s2 = s;
    size_t len = strlen(s2) + 1;
    char* p = malloc(len);
    if (p)
        memcpy(p, s2, len);
    return p;
}

int strcmp(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}
                            
char* strstr(const char* haystack, const char* needle) {
    if (!*needle)
        return (char*)haystack;

    for (; *haystack; haystack++) {
        const char* h = haystack;
        const char* n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (!*n)  // needle 
            return (char*)haystack;
    }

    return NULL;  
}

void* memset(void *dst, int c, unsigned int n) {
    char *cdst = (char *) dst;
    int i;
    for(i = 0; i < n; i++){
        cdst[i] = c;
    }
    return dst;
}

int memcmp(const void *v1, const void *v2, unsigned int n) {
    const unsigned char *s1, *s2;

    s1 = v1;
    s2 = v2;
    while(n-- > 0){
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++, s2++;
    }

    return 0;
}

void* memmove(void *dst, const void *src, unsigned int n) {
  const char *s;
  char *d;

  if(n == 0)
    return dst;
  
  s = src;
  d = dst;
  if(s < d && s + n > d){
    s += n;
    d += n;
    while(n-- > 0)
      *--d = *--s;
  } else
    while(n-- > 0) {
      *d++ = *s++;
    }

  return dst;
}

void* memcpy(void *dst, const void *src, unsigned int n) {
  return memmove(dst, src, n);
}

int strncmp(const char *p, const char *q, unsigned int n) {
  while(n > 0 && *p && *p == *q)
    n--, p++, q++;
  if(n == 0)
    return 0;
  return (unsigned char)*p - (unsigned char)*q;
}

char* strncpy(char *s, const char *t, int n) {
  char *os;

  os = s;
  while(n-- > 0 && (*s++ = *t++) != 0)
    ;
  while(n-- > 0)
    *s++ = 0;
  return os;
}


int strlen(const char *s) {
  int n;

  for(n = 0; s[n]; n++)
    ;
  return n;
}
char* strchr(const char* s, int c) {
    while (*s) {
        if (*s == (char)c) return (char*)s;
        s++;
    }
    return (c == 0) ? (char*)s : 0;
}


char* strrchr(const char* s, int c) {
    const char* last = 0;
    do {
        if (*s == (char)c) last = s;
    } while (*s++);
    return (char*)last;
}
char* strndup(const char* s, size_t n) {
    size_t len = 0;
    while (len < n && s[len]) len++;
    char* p = (char*)malloc(len + 1);
    if (!p) return 0;
    for (size_t i = 0; i < len; i++) p[i] = s[i];
    p[len] = '\0';
    return p;
}

int mkstemp(char* template) {
    static unsigned long seed = 0x1234abcd;
    if (!template) return -1;
    int len = strlen(template);
    if (len < 6) return -1;
    char* x = template + len - 6;
    for (int i=0; i<6; i++) if (x[i] != 'X') return -1;

    const char* cs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    const int csn = 62;

    for (int attempt = 0; attempt < 256; attempt++) {
        // simple LCG to vary names
        seed = seed * 1664525u + 1013904223u;
        unsigned long v = seed;
        for (int i=0; i<6; i++) { x[i] = cs[(v + i*13) % csn]; }

        // if exists, try another
        struct stat st;
        if (stat(template, &st) == 0) continue;

        int fd = open(template, O_CREAT|O_RDWR, 0600);
        if (fd >= 0) return fd;
    }
    // give up; leave last tried name in place
    return -1;
}

// ───────────────────────────────────────────
// Minimal glob: only handles patterns without meta; otherwise returns 0 matches
// This is sufficient for rvcc -S path since it doesn't rely on globbed libs.
static int __has_meta(const char* s) {
    for (; *s; s++) if (*s=='*' || *s=='?' ) return 1; return 0;
}

static int __match_wild(const char* pat, const char* s) {
    // supports '*' and '?'
    if (*pat == '\0') return *s == '\0';
    if (*pat == '*') {
        while (*pat == '*') pat++;
        if (*pat == '\0') return 1; // trailing * matches all
        while (*s) { if (__match_wild(pat, s)) return 1; s++; }
        return 0;
    }
    if (*pat == '?') { return *s ? __match_wild(pat+1, s+1) : 0; }
    return (*pat == *s) ? __match_wild(pat+1, s+1) : 0;
}

static char* __join_path(const char* dir, const char* name) {
    int need_slash = 1;
    size_t dl = strlen(dir);
    if (dl > 0 && dir[dl-1] == '/') need_slash = 0;
    size_t nl = strlen(name);
    size_t tot = dl + (need_slash?1:0) + nl + 1;
    char* p = (char*)malloc(tot);
    if (!p) return 0;
    size_t i=0; for(size_t k=0;k<dl;k++) p[i++]=dir[k];
    if (need_slash) p[i++] = '/';
    for(size_t k=0;k<nl;k++) p[i++]=name[k];
    p[i]='\0';
    return p;
}

int glob(const char* pattern, int flags, void* errfunc, glob_t* pglob) {
    (void)flags; (void)errfunc;
    if (!pglob) return -1;
    pglob->gl_pathc = 0;
    pglob->gl_pathv = 0;

    // split into dir and base pattern
    char dirbuf[256];
    const char* slash = strrchr(pattern, '/');
    const char* base = pattern;
    if (slash) {
        size_t dl = (size_t)(slash - pattern);
        if (dl >= sizeof(dirbuf)) dl = sizeof(dirbuf)-1;
        for (size_t i=0;i<dl;i++) dirbuf[i] = pattern[i];
        dirbuf[dl] = '\0';
        if (dl == 0) { dirbuf[0] = '/'; dirbuf[1] = '\0'; }
        base = slash + 1;
        if (*base == '\0') base = "*"; // pattern ended with '/'
    } else {
        // no dir component
        dirbuf[0] = '.'; dirbuf[1] = '\0';
        base = pattern;
    }

    // no meta: literal path
    if (!__has_meta(base)) {
        struct stat st;
        char* full = __join_path(dirbuf, base);
        if (!full) return -1;
        if (stat(full, &st) == 0) {
            char** v = (char**)malloc(sizeof(char*) * 2);
            if (!v) { free(full); return -1; }
            v[0] = full; v[1] = 0; pglob->gl_pathv = v; pglob->gl_pathc = 1; return 0;
        }
        free(full);
        return 0;
    }

    // wildcard: scan directory
    int dfd = opendir(dirbuf);
    if (dfd < 0) return 0;

    size_t cap = 8; size_t cnt = 0;
    char** vec = (char**)malloc(sizeof(char*) * cap);
    if (!vec) { closedir(dfd); return -1; }

    // read chunks
    for (;;) {
        struct dirent ents[16];
        int n = readdir(dfd, ents, 16);
        if (n < 0) { // error
            break;
        }
        if (n == 0) break; // EOF
        for (int i=0;i<n;i++) {
            char namebuf[DIRSIZ+1];
            for (int k=0;k<DIRSIZ;k++) namebuf[k] = ents[i].name[k];
            namebuf[DIRSIZ] = '\0';
            // trim trailing NULs (already NUL padded)
            // skip empty entries
            if (namebuf[0] == '\0') continue;
            // skip . and ..
            if ((namebuf[0]=='.' && namebuf[1]=='\0') || (namebuf[0]=='.' && namebuf[1]=='.' && namebuf[2]=='\0')) continue;
            if (!__match_wild(base, namebuf)) continue;
            char* full = __join_path(dirbuf, namebuf);
            if (!full) { continue; }
            if (cnt + 2 > cap) { size_t ncap = cap*2; char** nv = (char**)realloc(vec, sizeof(char*)*ncap); if (!nv) { free(full); continue; } vec = nv; cap = ncap; }
            vec[cnt++] = full;
        }
    }
    closedir(dfd);
    if (cnt == 0) { free(vec); return 0; }
    vec[cnt] = 0;
    pglob->gl_pathv = vec; pglob->gl_pathc = cnt;
    return 0;
}

void globfree(glob_t* pglob) {
    if (!pglob || !pglob->gl_pathv) return;
    for (size_t i=0; pglob->gl_pathv[i]; i++) free(pglob->gl_pathv[i]);
    free(pglob->gl_pathv);
    pglob->gl_pathv = 0;
    pglob->gl_pathc = 0;
}

// ───────────────────────────────────────────
// Minimal argtable2-compatible implementation

static size_t arg_file_capacity(const struct arg_file *file) {
    int maxc = file->hdr.maxcount;
    return (maxc > 0) ? (size_t)maxc : 1u;
}

static void arg_lit_reset(struct arg_lit *lit) {
    if (lit) lit->count = 0;
}

static void arg_file_reset(struct arg_file *file) {
    if (!file) return;
    file->count = 0;
    size_t cap = arg_file_capacity(file);
    for (size_t i = 0; i < cap; ++i) {
        file->filename[i] = "";
    }
}

static void arg_end_reset(struct arg_end *end) {
    if (!end) return;
    end->count = 0;
    if (!end->errors) return;
    for (int i = 0; i < end->maxerrors; ++i) {
        end->errors[i].msg = NULL;
        end->errors[i].argval = NULL;
        end->errors[i].hdr = NULL;
    }
}

static void arg_add_error(struct arg_end *end, const char *msg,
                          const char *arg, const struct arg_hdr *hdr) {
    if (!end || end->maxerrors <= 0) return;
    if (end->count >= end->maxerrors) return;
    end->errors[end->count].msg = msg;
    end->errors[end->count].argval = arg;
    end->errors[end->count].hdr = hdr;
    end->count++;
}

static int arg_has_capacity(int count, int maxcount) {
    return (maxcount <= 0) || (count < maxcount);
}

struct arg_lit *arg_litn(const char *shortopts, const char *longopts,
                         int mincount, int maxcount, const char *glossary) {
    if (mincount < 0 || maxcount < 0) return NULL;
    struct arg_lit *lit = (struct arg_lit *)malloc(sizeof(*lit));
    if (!lit) return NULL;
    lit->hdr.kind = ARG_KIND_LIT;
    lit->hdr.shortopts = shortopts;
    lit->hdr.longopts = longopts;
    lit->hdr.datatype = NULL;
    lit->hdr.glossary = glossary;
    lit->hdr.mincount = mincount;
    lit->hdr.maxcount = maxcount;
    lit->count = 0;
    return lit;
}

struct arg_file *arg_filen(const char *shortopts, const char *longopts,
                           const char *datatype, int mincount, int maxcount,
                           const char *glossary) {
    if (mincount < 0 || maxcount < 0) return NULL;
    struct arg_file *file = (struct arg_file *)malloc(sizeof(*file));
    if (!file) return NULL;
    size_t cap = (maxcount > 0) ? (size_t)maxcount : 1u;
    file->filename = (const char **)malloc(sizeof(char *) * cap);
    if (!file->filename) {
        free(file);
        return NULL;
    }
    file->hdr.kind = ARG_KIND_FILE;
    file->hdr.shortopts = shortopts;
    file->hdr.longopts = longopts;
    file->hdr.datatype = datatype;
    file->hdr.glossary = glossary;
    file->hdr.mincount = mincount;
    file->hdr.maxcount = maxcount;
    file->count = 0;
    for (size_t i = 0; i < cap; ++i) file->filename[i] = "";
    return file;
}

struct arg_end *arg_end(int maxerrors) {
    if (maxerrors < 0) return NULL;
    struct arg_end *end = (struct arg_end *)malloc(sizeof(*end));
    if (!end) return NULL;
    end->hdr.kind = ARG_KIND_END;
    end->hdr.shortopts = NULL;
    end->hdr.longopts = NULL;
    end->hdr.datatype = NULL;
    end->hdr.glossary = NULL;
    end->hdr.mincount = 0;
    end->hdr.maxcount = 0;
    end->maxerrors = maxerrors;
    end->errors = NULL;
    if (maxerrors > 0) {
        end->errors = (struct arg_error *)malloc(sizeof(struct arg_error) * (size_t)maxerrors);
        if (!end->errors) {
            free(end);
            return NULL;
        }
    }
    arg_end_reset(end);
    return end;
}

static int argtable_reset(void **argtable, struct arg_end **end_out) {
    int count = 0;
    struct arg_end *end = NULL;
    while (argtable[count]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[count];
        if (hdr->kind == ARG_KIND_LIT) {
            arg_lit_reset((struct arg_lit *)hdr);
        } else if (hdr->kind == ARG_KIND_FILE) {
            arg_file_reset((struct arg_file *)hdr);
        } else if (hdr->kind == ARG_KIND_END) {
            end = (struct arg_end *)hdr;
            arg_end_reset(end);
            count++;
            break;
        }
        count++;
    }
    if (end_out) *end_out = end;
    return count;
}

static int argtable_entries(void **argtable, struct arg_end **end_out) {
    int count = 0;
    struct arg_end *end = NULL;
    while (argtable[count]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[count];
        if (hdr->kind == ARG_KIND_END) {
            end = (struct arg_end *)hdr;
            break;
        }
        count++;
    }
    if (end_out) *end_out = end;
    return count;
}

static int arg_long_match(const char *options, const char *name) {
    if (!options || !name) return 0;
    size_t namelen = strlen(name);
    const char *p = options;
    while (*p) {
        const char *start = p;
        while (*p && *p != ',' && *p != '|') p++;
        size_t len = (size_t)(p - start);
        if (len == namelen && strncmp(start, name, namelen) == 0) return 1;
        if (*p) p++;
    }
    return 0;
}

static struct arg_hdr *arg_find_short(void **argtable, int entries, char opt) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        const char *s = hdr->shortopts;
        while (s && *s) {
            if (*s++ == opt) return hdr;
        }
    }
    return NULL;
}

static struct arg_hdr *arg_find_long(void **argtable, int entries, const char *name) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        if (arg_long_match(hdr->longopts, name)) return hdr;
    }
    return NULL;
}

static struct arg_file *arg_find_positional(void **argtable, int entries) {
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind != ARG_KIND_FILE) continue;
        if ((hdr->shortopts && hdr->shortopts[0]) ||
            (hdr->longopts && hdr->longopts[0])) {
            continue;
        }
        struct arg_file *file = (struct arg_file *)hdr;
        size_t cap = arg_file_capacity(file);
        if ((size_t)file->count < cap) return file;
    }
    return NULL;
}

static int arg_file_add(struct arg_file *file, const char *value,
                        struct arg_end *end, const char *errmsg) {
    if (!file) return -1;
    size_t cap = arg_file_capacity(file);
    if ((size_t)file->count >= cap && cap > 0) {
        arg_add_error(end, errmsg, value, &file->hdr);
        return -1;
    }
    file->filename[file->count] = value ? value : "";
    file->count++;
    return 0;
}

int arg_parse(int argc, char **argv, void **argtable) {
    if (!argtable) return 0;

    struct arg_end *end = NULL;
    int total = argtable_reset(argtable, &end);
    if (!end) return 0;

    int entries = 0;
    while (entries < total && argtable[entries]) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[entries];
        if (hdr->kind == ARG_KIND_END) break;
        entries++;
    }

    int errors_before = end->count;
    int stop_opts = 0;

    for (int i = 1; i < argc; ++i) {
        char *arg = argv[i];
        if (!stop_opts && arg[0] == '-' && arg[1] != '\0') {
            if (arg[1] == '-' && arg[2] == '\0') {
                stop_opts = 1;
                continue;
            }

            if (arg[1] == '-') {
                const char *name = arg + 2;
                const char *val = NULL;
                const char *eq = strchr(name, '=');
                char namebuf[64];
                if (eq) {
                    size_t len = (size_t)(eq - name);
                    if (len >= sizeof(namebuf)) len = sizeof(namebuf) - 1;
                    for (size_t k = 0; k < len; ++k) namebuf[k] = name[k];
                    namebuf[len] = '\0';
                    name = namebuf;
                    val = eq + 1;
                }
                struct arg_hdr *hdr = arg_find_long(argtable, entries, name);
                if (!hdr) {
                    arg_add_error(end, "unknown option", arg, NULL);
                    continue;
                }
                if (hdr->kind == ARG_KIND_LIT) {
                    if (val && *val) {
                        arg_add_error(end, "option does not take a value", arg, hdr);
                        continue;
                    }
                    struct arg_lit *lit = (struct arg_lit *)hdr;
                    if (!arg_has_capacity(lit->count, hdr->maxcount)) {
                        arg_add_error(end, "option specified too many times", arg, hdr);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if (hdr->kind == ARG_KIND_FILE) {
                    if (!val) {
                        if (i + 1 < argc) {
                            val = argv[++i];
                        } else {
                            arg_add_error(end, "option requires a value", arg, hdr);
                            continue;
                        }
                    }
                    arg_file_add((struct arg_file *)hdr, val, end,
                                  "option specified too many times");
                    continue;
                }
                arg_add_error(end, "unsupported option", arg, hdr);
                continue;
            }

            const char *p = arg + 1;
            while (*p) {
                char opt = *p++;
                struct arg_hdr *hdr = arg_find_short(argtable, entries, opt);
                if (!hdr) {
                    arg_add_error(end, "unknown option", arg, NULL);
                    continue;
                }
                if (hdr->kind == ARG_KIND_LIT) {
                    struct arg_lit *lit = (struct arg_lit *)hdr;
                    if (!arg_has_capacity(lit->count, hdr->maxcount)) {
                        arg_add_error(end, "option specified too many times", NULL, hdr);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if (hdr->kind == ARG_KIND_FILE) {
                    const char *val = NULL;
                    if (*p) {
                        val = p;
                        p += strlen(p);
                    } else if (i + 1 < argc) {
                        val = argv[++i];
                    } else {
                        arg_add_error(end, "option requires a value", arg, hdr);
                        break;
                    }
                    arg_file_add((struct arg_file *)hdr, val, end,
                                  "option specified too many times");
                    break;
                }
            }
            continue;
        }

        struct arg_file *file = arg_find_positional(argtable, entries);
        if (!file) {
            arg_add_error(end, "unexpected argument", arg, NULL);
            continue;
        }
        arg_file_add(file, arg, end, "too many positional arguments");
    }

    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;

        int count = 0;
        if (hdr->kind == ARG_KIND_LIT) {
            count = ((struct arg_lit *)hdr)->count;
        } else if (hdr->kind == ARG_KIND_FILE) {
            count = ((struct arg_file *)hdr)->count;
        }

        if (hdr->mincount > 0 && count < hdr->mincount) {
            if ((hdr->shortopts && hdr->shortopts[0]) ||
                (hdr->longopts && hdr->longopts[0])) {
                arg_add_error(end, "missing required option", hdr->longopts ? hdr->longopts : hdr->shortopts, hdr);
            } else {
                arg_add_error(end, "missing required argument", hdr->datatype, hdr);
            }
        }
    }

    (void)errors_before;
    return end->count;
}

static void arg_print_joined_option(char *buf, size_t bufsz,
                                    const struct arg_hdr *hdr) {
    size_t pos = 0;
    if (!bufsz) return;
    buf[0] = '\0';
    if (hdr->shortopts && hdr->shortopts[0]) {
        int wrote = snprintf(buf + pos, bufsz - pos, "-%c", hdr->shortopts[0]);
        if (wrote < 0) wrote = 0;
        pos += (size_t)wrote;
        if (pos >= bufsz) pos = bufsz - 1;
        if (hdr->longopts && hdr->longopts[0] && pos + 2 < bufsz) {
            wrote = snprintf(buf + pos, bufsz - pos, ", ");
            if (wrote < 0) wrote = 0;
            pos += (size_t)wrote;
            if (pos >= bufsz) pos = bufsz - 1;
        }
    }
    if (hdr->longopts && hdr->longopts[0]) {
        int wrote = snprintf(buf + pos, bufsz - pos, "--%s", hdr->longopts);
        if (wrote < 0) wrote = 0;
        pos += (size_t)wrote;
        if (pos >= bufsz) pos = bufsz - 1;
    }
    if ((hdr->shortopts && hdr->shortopts[0]) ||
        (hdr->longopts && hdr->longopts[0])) {
        if (hdr->datatype && hdr->datatype[0] && pos + 1 < bufsz) {
            int wrote = snprintf(buf + pos, bufsz - pos, " %s", hdr->datatype);
            if (wrote < 0) wrote = 0;
            pos += (size_t)wrote;
            if (pos >= bufsz) pos = bufsz - 1;
        }
    }
}

void arg_print_syntax(struct __minux_FILE *fp, void **argtable,
                      const char *suffix) {
    if (!fp || !argtable) return;
    struct arg_end *end = NULL;
    int entries = argtable_entries(argtable, &end);
    if (!end) return;
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        if ((hdr->shortopts && hdr->shortopts[0]) ||
            (hdr->longopts && hdr->longopts[0])) {
            fprintf(fp, " [");
            if (hdr->shortopts && hdr->shortopts[0]) {
                fprintf(fp, "-%c", hdr->shortopts[0]);
                if (hdr->longopts && hdr->longopts[0]) fprintf(fp, "|");
            }
            if (hdr->longopts && hdr->longopts[0]) {
                fprintf(fp, "--%s", hdr->longopts);
            }
            if (hdr->kind == ARG_KIND_FILE && hdr->datatype && hdr->datatype[0]) {
                fprintf(fp, " %s", hdr->datatype);
            }
            fprintf(fp, "]");
        } else {
            const char *dt = hdr->datatype ? hdr->datatype : "<value>";
            int mandatory = (hdr->mincount > 0) ? hdr->mincount : 0;
            for (int k = 0; k < mandatory; ++k) fprintf(fp, " %s", dt);
            if (hdr->maxcount == 0 || hdr->maxcount > mandatory) {
                fprintf(fp, " [%s]", dt);
            }
        }
    }
    if (suffix) fprintf(fp, "%s", suffix);
}

void arg_print_glossary(struct __minux_FILE *fp, void **argtable,
                        const char *format) {
    if (!fp || !argtable || !format) return;
    struct arg_end *end = NULL;
    int entries = argtable_entries(argtable, &end);
    if (!end) return;
    char optbuf[64];
    for (int i = 0; i < entries; ++i) {
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (!hdr || hdr->kind == ARG_KIND_END) continue;
        optbuf[0] = '\0';
        arg_print_joined_option(optbuf, sizeof(optbuf), hdr);
        const char *gloss = hdr->glossary ? hdr->glossary : "";
        fprintf(fp, format, optbuf, gloss);
    }
}

void arg_print_errors(struct __minux_FILE *fp, struct arg_end *end,
                      const char *progname) {
    if (!fp || !end) return;
    const char *prog = progname ? progname : "";
    for (int i = 0; i < end->count; ++i) {
        const struct arg_error *err = &end->errors[i];
        const char *msg = err->msg ? err->msg : "parse error";
        if (err->argval && err->argval[0]) {
            fprintf(fp, "%s: %s -- %s\n", prog, msg, err->argval);
        } else if (err->hdr && err->hdr->datatype &&
                   strcmp(msg, "missing required argument") == 0) {
            fprintf(fp, "%s: %s %s\n", prog, msg, err->hdr->datatype);
        } else if (err->hdr && err->hdr->longopts && err->hdr->longopts[0] &&
                   strcmp(msg, "missing required option") == 0) {
            fprintf(fp, "%s: %s --%s\n", prog, msg, err->hdr->longopts);
        } else if (err->hdr && err->hdr->shortopts && err->hdr->shortopts[0] &&
                   strcmp(msg, "missing required option") == 0) {
            fprintf(fp, "%s: %s -%c\n", prog, msg, err->hdr->shortopts[0]);
        } else {
            fprintf(fp, "%s: %s\n", prog, msg);
        }
    }
}

void arg_freetable(void **argtable, size_t n) {
    if (!argtable) return;
    for (size_t i = 0; i < n; ++i) {
        if (!argtable[i]) continue;
        struct arg_hdr *hdr = (struct arg_hdr *)argtable[i];
        if (hdr->kind == ARG_KIND_FILE) {
            struct arg_file *file = (struct arg_file *)hdr;
            free((void *)file->filename);
        } else if (hdr->kind == ARG_KIND_END) {
            struct arg_end *end = (struct arg_end *)hdr;
            free(end->errors);
        }
        free(argtable[i]);
        argtable[i] = NULL;
    }
}

int isprint(int c) {
    // Printable ASCII: space (0x20) to tilde (0x7E)
    return (c >= 0x20 && c <= 0x7e) ? 1 : 0;
}

int isspace(int c) {
    return (c == ' '  || c == '\t' || c == '\n' ||
            c == '\r' || c == '\v' || c == '\f') ? 1 : 0;
}

int isalpha(int c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
}

int isdigit(int c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int isalnum(int c) {
    return (isalpha(c) || isdigit(c)) ? 1 : 0;
}

void putchar(char c)
{
    write(1, &c, 1);
}

void printint(int val_, int base, int sign) {
    char buf[33];  
    int i = 0;
    int negative = 0;
    unsigned int uval;

    if (sign && val_ < 0) {
        negative = 1;
        uval = -val_;
    } else {
        uval = (unsigned int)val_;
    }

    if (uval == 0) {
        putchar('0');
        return;
    }

    while (uval > 0) {
        int digit = uval % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        uval /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlong(unsigned long val_, int base, int sign)  {
    char buf[65];  
    int i = 0;
    int negative = 0;

    if (sign && (long)val_ < 0) {
        negative = 1;
        val_ = -(long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

void printlonglong(unsigned long long val_, int base, int sign)  {
    char buf[65];
    int i = 0;
    int negative = 0;

    if (sign && (long long)val_ < 0) {
        negative = 1;
        val_ = -(long long)val_;
    }

    if (val_ == 0) {
        putchar('0');
        return;
    }

    while (val_ > 0) {
        int digit = val_ % base;
        buf[i++] = digit < 10 ? '0' + digit : 'a' + (digit - 10);
        val_ /= base;
    }

    if (negative) {
        putchar('-');
    }

    while (--i >= 0) {
        putchar(buf[i]);
    }
}

int printf(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    const char* p;
    for (p = fmt; *p; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }

        p++; 

        if (*p == 'l') {
            int lcount = 1;
            if (*(p+1) == 'l') {
                lcount = 2;
                p++;
            }
            p++;

            switch (*p) {
                case 'x': {
                    if (lcount == 1) {
                        unsigned long val_ = va_arg(ap, unsigned long);
                        printlong(val_, 16, 0);
                    } else {
                        unsigned long long val_ = va_arg(ap, unsigned long long);
                        printlonglong(val_, 16, 0);
                    }
                    break;
                }
                case 'd': {
                    if (lcount == 1) {
                        long val_ = va_arg(ap, long);
                        printlong(val_, 10, 1);
                    } else {
                        long long val_ = va_arg(ap, long long);
                        printlonglong(val_, 10, 1);
                    }
                    break;
                }
                default: {
                    putchar('%');
                    for (int i=0; i<lcount; i++) putchar('l');
                    putchar(*p);
                    break;
                }
            }
        } else {
            switch (*p) {
                case 'd': {
                    int val_ = va_arg(ap, int);
                    printint(val_, 10, 1);
                    break;
                }
                case 'x': {
                    unsigned int val_ = va_arg(ap, unsigned int);
                    printint(val_, 16, 0);
                    break;
                }
                case 'p': {
                    unsigned long val_ = (unsigned long)va_arg(ap, void*);
                    putchar('0'); putchar('x');
                    printlong(val_, 16, 0);
                    break;
                }
                case 's': {
                    const char* s = va_arg(ap, const char*);
                    if (!s) s = "(null)";
                    while (*s) putchar(*s++);
                    break;
                }
                case 'c': {
                    char c = (char)va_arg(ap, int);
                    putchar(c);
                    break;
                }
                case '%': {
                    putchar('%');
                    break;
                }
                default: {
                    putchar('%');
                    putchar(*p);
                    break;
                }
            }
        }
    }

    va_end(ap);
    return 0;
}


void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}

char* strncat(char* dest, const char* src, size_t n) {
    char* d = dest;

    // dest 
    while (*d) d++;

    //  n  src null 
    while (n-- && *src) {
        *d++ = *src++;
    }

    *d = '\0';

    return dest;
}

char* itoa(char* buf, unsigned long val_, int base, int is_signed) {
    char* p = buf;
    char tmp[32];
    int i = 0;
    int negative = 0;

    if (base < 2 || base > 16) {
        *p = '\0';
        return p;
    }

    if (is_signed && (long)val_ < 0) {
        negative = 1;
        val_ = (unsigned long)(-(long)val_);
    }

    do {
        int digit = val_ % base;
        tmp[i++] = (digit < 10) ? '0' + digit : 'a' + digit - 10;
        val_ /= base;
    } while (val_);

    if (negative)
        *p++ = '-';

    while (i--)
        *p++ = tmp[i];
    *p = '\0';
    return buf;
}
int vasprintf(char** out, const char* fmt, va_list ap) {
    char out2[512];
    char* p = out2;
    const char* s;
    char buf[32];
    unsigned long remaining = sizeof(out2);

    for (; *fmt && remaining > 1; fmt++) {
        if (*fmt != '%') {
            *p++ = *fmt;
            remaining--;
            continue;
        }

        fmt++;  // skip '%'
        switch (*fmt) {
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 1);
            s = buf;
            break;
        case 'u':
            itoa(buf, va_arg(ap, unsigned int), 10, 0);
            s = buf;
            break;
        case 'x':
            itoa(buf, va_arg(ap, unsigned int), 16, 0);
            s = buf;
            break;
        case 's':
            s = va_arg(ap, const char*);
            if (!s) s = "(null)";
            break;
        case 'c':
            buf[0] = (char)va_arg(ap, int);  
            buf[1] = '\0';
            s = buf;
            break;
        case 'p':
            strncpy(buf, "0x", 32);
            itoa(buf + 2, (unsigned long)(uintptr_t)va_arg(ap, void*), 16, 0);
            s = buf;
            break;
        case '%':
            buf[0] = '%';
            buf[1] = '\0';
            s = buf;
            break;
        default:
            buf[0] = '%';
            buf[1] = *fmt;
            buf[2] = '\0';
            s = buf;
            break;
        }

        while (*s && remaining > 1) {
            *p++ = *s++;
            remaining--;
        }
    }

    *p = '\0';
    *out = strdup(out2);
    return p - out2;
}


int snprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = va_arg(ap, const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)va_arg(ap, int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)va_arg(ap, void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, va_arg(ap, long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    va_end(ap);
    return p - out;
}

int vsnprintf(char* out, unsigned long out_size, const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);

    char* p = out;
    const char* s;
    char buf[32];
    unsigned long remaining = out_size;

    if (remaining == 0) {
        va_end(ap);
        return 0;
    }

    for (; *fmt; fmt++) {
        if (*fmt != '%') {
            if (remaining > 1) {
                *p++ = *fmt;
                remaining--;
            }
            continue;
        }

        fmt++;
        switch (*fmt) {
        case 's':
            s = va_arg(ap, const char*);
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'd':
            itoa(buf, va_arg(ap, int), 10, 0);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'x':
            itoa(buf, (unsigned int)va_arg(ap, int), 16, 1);  
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'c':
            if (remaining > 1) {
                *p++ = (char)va_arg(ap, int);
                remaining--;
            }
            break;
        case 'p':
            s = "0x";
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            itoa(buf, (long)va_arg(ap, void*), 16, 1);
            s = buf;
            while (*s && remaining > 1) {
                *p++ = *s++;
                remaining--;
            }
            break;
        case 'l':
            if (*(fmt + 1) == 'u') {
                fmt++;
                itoa(buf, va_arg(ap, long), 10, 1);
                s = buf;
                while (*s && remaining > 1) {
                    *p++ = *s++;
                    remaining--;
                }
            }
            break;
        default:
            if (remaining > 1) {
                *p++ = '%';
                remaining--;
                if (remaining > 1) {
                    *p++ = *fmt;
                    remaining--;
                }
            }
            break;
        }
    }

    *p = '\0';
    va_end(ap);
    return p - out;
}



// ───────────────────────────────────────────
// Minimal stdio (FILE, fopen/fclose/fseek, vfprintf/fprintf, fscanf)
// ───────────────────────────────────────────

FILE __stdin  = { .fd = 0, .flags = 1, .pos = 0 };
FILE __stdout = { .fd = 1, .flags = 2, .pos = 0 };
FILE __stderr = { .fd = 2, .flags = 2, .pos = 0 };
FILE* stdin  = &__stdin;
FILE* stdout = &__stdout;
FILE* stderr = &__stderr;

// atexit registry
static void (*__atexit_funcs[32])(void);
static int __atexit_count = 0;

int atexit(void (*func)(void)) {
  if (__atexit_count >= (int)(sizeof(__atexit_funcs)/sizeof(__atexit_funcs[0])))
    return -1;
  __atexit_funcs[__atexit_count++] = func;
  return 0;
}

static void __run_atexit(void) {
  for (int i = __atexit_count - 1; i >= 0; i--) {
    if (__atexit_funcs[i]) __atexit_funcs[i]();
  }
}

int __minux_exit(int status) {
  __run_atexit();
  // perform SYS_exit
  register long _a0 asm("a0") = (long)status;
  register long _a7 asm("a7") = SYS_exit;
  asm volatile("ecall" : "+r"(_a0) : "r"(_a7) : "memory");
  while (1) { }
}

static int __parse_mode(const char* mode) {
  int flags = 0;
  if (!mode || !mode[0]) return -1;
  int rd = 0, wr = 0, app = 0, plus = 0, creat = 0, trunc = 0;
  switch (mode[0]) {
    case 'r': rd = 1; break;
    case 'w': wr = 1; creat = 1; trunc = 1; break;
    case 'a': wr = 1; creat = 1; app = 1; break;
    default: return -1;
  }
  for (const char* p = mode+1; *p; p++) {
    if (*p == '+') plus = 1;
    // ignore 'b'
  }
  int oflags = 0;
  if (rd && !wr && !plus) oflags = O_RDONLY;
  if (wr && !plus && !rd) oflags = O_WRONLY;
  if (plus) oflags = O_RDWR;
  if (creat) oflags |= O_CREAT;
  if (trunc) oflags |= O_TRUNC;
  if (app)   oflags |= O_APPEND;
  return oflags;
}

FILE* fopen(const char* path, const char* mode) {
  int oflags = __parse_mode(mode);
  if (oflags < 0) return 0;
  int fd = open(path, oflags, 0644);
  if (fd < 0) return 0;
  FILE* fp = (FILE*)malloc(sizeof(FILE));
  if (!fp) { close(fd); return 0; }
  fp->fd = fd;
  fp->flags = ((oflags & O_RDONLY) ? 1:0) | ((oflags & (O_WRONLY|O_RDWR)) ? 2:0) | ((oflags & O_APPEND)?4:0);
  fp->pos = 0; fp->eof = 0; fp->err = 0; fp->have_push = 0; fp->push_ch = 0;
  fp->is_mem = 0; fp->ms_bufp = 0; fp->ms_sizep = 0; fp->ms_buf = 0; fp->ms_cap = 0; fp->ms_len = 0;
  return fp;
}

int fclose(FILE* fp) {
  if (!fp) return -1;
  int rc = 0;
  if (fp->is_mem) {
    // finalize buffer: ensure NUL and publish pointers
    if (fp->ms_buf) {
      if (fp->ms_cap == fp->ms_len) {
        char *nb = (char*)realloc(fp->ms_buf, fp->ms_len + 1);
        if (nb) { fp->ms_buf = nb; fp->ms_cap = fp->ms_len + 1; }
      }
      fp->ms_buf[fp->ms_len] = '\0';
      if (fp->ms_bufp) *fp->ms_bufp = fp->ms_buf; else free(fp->ms_buf);
      if (fp->ms_sizep) *fp->ms_sizep = fp->ms_len;
    }
    free(fp);
    return 0;
  }
  if (fp != stdin && fp != stdout && fp != stderr) {
    rc = close(fp->fd);
    free(fp);
  }
  return rc;
}

FILE* tmpfile(void) {
  char templ[] = "minuxXXXXXX";
  int fd = mkstemp(templ);
  if (fd < 0) {
    return 0;
  }
  unlink(templ);

  FILE* fp = (FILE*)malloc(sizeof(FILE));
  if (!fp) {
    close(fd);
    return 0;
  }
  fp->fd = fd;
  fp->flags = 1 | 2;
  fp->pos = 0;
  fp->eof = 0;
  fp->err = 0;
  fp->have_push = 0;
  fp->push_ch = 0;
  fp->is_mem = 0;
  fp->ms_bufp = 0;
  fp->ms_sizep = 0;
  fp->ms_buf = 0;
  fp->ms_cap = 0;
  fp->ms_len = 0;
  return fp;
}

int fseek(FILE* fp, long offset, int whence) {
  if (!fp) return -1;
  long r = lseek(fp->fd, offset, whence);
  if (r < 0) { fp->err = 1; return -1; }
  fp->pos = r; fp->eof = 0; fp->have_push = 0;
  return 0;
}

long ftell(FILE* fp) {
  if (!fp) return -1;
  if (fp->is_mem) {
    return fp->pos;
  }
  long r = lseek(fp->fd, 0, SEEK_CUR);
  if (r < 0) {
    fp->err = 1;
    return -1;
  }
  fp->pos = r;
  return r;
}

void rewind(FILE* fp) {
  if (!fp) return;
  fp->eof = 0;
  fp->have_push = 0;
  if (fp->is_mem) {
    fp->pos = 0;
    fp->err = 0;
    return;
  }
  long r = lseek(fp->fd, 0, SEEK_SET);
  if (r < 0) {
    fp->err = 1;
    return;
  }
  fp->pos = r;
  fp->err = 0;
}

int fgetc(FILE* fp) {
  if (!fp) return EOF;
  if (fp->have_push) { fp->have_push = 0; return fp->push_ch; }
  unsigned char ch;
  long n = read(fp->fd, &ch, 1);
  if (n == 1) { fp->pos++; return ch; }
  if (n == 0) { fp->eof = 1; return EOF; }
  fp->err = 1; return EOF;
}

int ungetc(int c, FILE* fp) {
  if (!fp || fp->have_push || c == EOF) return EOF;
  fp->push_ch = (unsigned char)c; fp->have_push = 1; return c;
}

size_t fread(void* ptr, size_t size, size_t nmemb, FILE* fp) {
  if (!fp) return 0;
  size_t total = size * nmemb;
  size_t done = 0;
  unsigned char* p = (unsigned char*)ptr;
  if (fp->is_mem) {
    size_t avail = (fp->ms_len > (size_t)fp->pos) ? (fp->ms_len - (size_t)fp->pos) : 0;
    size_t tocopy = (total < avail) ? total : avail;
    if (tocopy) { memcpy(p, fp->ms_buf + fp->pos, tocopy); fp->pos += tocopy; done = tocopy; }
    if (done < total) fp->eof = 1;
    return done / (size ? size : 1);
  } else {
    if (fp->have_push && total > 0) { *p++ = fp->push_ch; fp->have_push = 0; done = 1; }
    while (done < total) {
      long n = read(fp->fd, p + done, total - done);
      if (n <= 0) { if (n==0) fp->eof = 1; else fp->err=1; break; }
      done += n; fp->pos += n;
    }
    return done / (size ? size : 1);
  }
}

size_t fwrite(const void* ptr, size_t size, size_t nmemb, FILE* fp) {
  if (!fp) return 0;
  size_t total = size * nmemb;
  size_t done = 0;
  const unsigned char* p = (const unsigned char*)ptr;
  if (fp->is_mem) {
    // grow buffer
    size_t need = (size_t)fp->pos + total;
    if (need + 1 > fp->ms_cap) {
      size_t ncap = fp->ms_cap ? fp->ms_cap : 64;
      while (ncap < need + 1) ncap *= 2;
      char* nb = (char*)realloc(fp->ms_buf, ncap);
      if (!nb) { fp->err = 1; return 0; }
      fp->ms_buf = nb; fp->ms_cap = ncap;
    }
    memcpy(fp->ms_buf + fp->pos, p, total);
    fp->pos += total;
    if ((size_t)fp->pos > fp->ms_len) fp->ms_len = fp->pos;
    return nmemb;
  } else {
    while (done < total) {
      long n = write(fp->fd, p + done, total - done);
      if (n < 0) { fp->err = 1; break; }
      done += n; fp->pos += n;
    }
    return done / (size ? size : 1);
  }
}

static void __fputs(FILE* fp, const char* s) {
  if (!s)
    s = "(null)";

  size_t len = strlen(s);
  if (fp->is_mem) {
    if (len)
      fwrite(s, 1, len, fp);
  } else {
    write(fp->fd, s, len);
  }
}

int vfprintf(FILE* fp, const char* fmt, va_list ap) {
  int count = 0;
  for (const char* p = fmt; *p; p++) {
    if (*p != '%') {
      if (fp->is_mem) { fwrite(p, 1, 1, fp); }
      else { write(fp->fd, p, 1); }
      count++;
      continue;
    }
    p++;
    char buf[64];
    switch (*p) {
      case '%': if (fp->is_mem) { fwrite("%",1,1,fp);} else { write(fp->fd, "%", 1);} count++; break;
      case 's': { const char* s = va_arg(ap, const char*); __fputs(fp, s); count += s?strlen(s):6; break; }
      case 'c': { char c = (char)va_arg(ap, int); if (fp->is_mem) { fwrite(&c,1,1,fp);} else { write(fp->fd, &c, 1);} count++; break; }
      case 'd': { itoa(buf, va_arg(ap, int), 10, 1); __fputs(fp, buf); count += strlen(buf); break; }
      case 'u': { itoa(buf, va_arg(ap, unsigned int), 10, 0); __fputs(fp, buf); count += strlen(buf); break; }
      case 'x': { itoa(buf, va_arg(ap, unsigned int), 16, 0); __fputs(fp, buf); count += strlen(buf); break; }
      case 'p': {
        const void* v = va_arg(ap, void*);
        buf[0] = '0'; buf[1] = 'x'; itoa(buf+2, (unsigned long)(uintptr_t)v, 16, 0); __fputs(fp, buf); count += strlen(buf); break; }
      case 'l': {
        if (*(p+1) == 'd') { p++; itoa(buf, va_arg(ap, long), 10, 1); __fputs(fp, buf); count += strlen(buf); }
        else if (*(p+1) == 'u') { p++; itoa(buf, va_arg(ap, unsigned long), 10, 0); __fputs(fp, buf); count += strlen(buf); }
        else if (*(p+1) == 'x') { p++; itoa(buf, va_arg(ap, unsigned long), 16, 0); __fputs(fp, buf); count += strlen(buf); }
        else {
          if (fp->is_mem) {
            fwrite("%", 1, 1, fp);
            fwrite("l", 1, 1, fp);
            fwrite(p, 1, 1, fp);
          } else {
            write(fp->fd, "%", 1);
            write(fp->fd, "l", 1);
            write(fp->fd, p, 1);
          }
          count += 3;
        }
        break;
      }
      default: if (fp->is_mem) { fwrite("%",1,1,fp); fwrite(p,1,1,fp);} else { write(fp->fd, "%", 1); write(fp->fd, p, 1);} count += 2; break;
    }
  }
  return count;
}

int fprintf(FILE* fp, const char* fmt, ...) {
  va_list ap; va_start(ap, fmt);
  int r = vfprintf(fp, fmt, ap);
  va_end(ap);
  return r;
}

static void __skip_spaces(FILE* fp) {
  int c;
  while ((c = fgetc(fp)) != EOF) {
    if (c!=' ' && c!='\t' && c!='\n' && c!='\r') { ungetc(c, fp); break; }
  }
}

static int __read_token(FILE* fp, char* buf, int max) {
  __skip_spaces(fp);
  int c; int i=0;
  while ((c = fgetc(fp)) != EOF) {
    if (c==' '||c=='\t'||c=='\n'||c=='\r') { ungetc(c, fp); break; }
    if (i < max-1) buf[i++] = (char)c;
  }
  buf[i] = '\0';
  return (i>0)?1:0;
}

int fscanf(FILE* fp, const char* fmt, ...) {
  va_list ap; va_start(ap, fmt);
  int assigns = 0;
  for (const char* p = fmt; *p; p++) {
    if (*p != '%') continue; p++;
    if (*p == 'd' || *p=='u' || *p=='x') {
      char tok[64]; if (!__read_token(fp, tok, sizeof(tok))) break;
      long val = 0;
      int base = (*p=='x')?16:10; int neg=0; const char* s=tok;
      if (*p=='d' && *s=='-') { neg=1; s++; }
      while (*s) { int d;
        if (*s>='0'&&*s<='9') d=*s-'0';
        else if (base==16 && *s>='a'&&*s<='f') d=*s-'a'+10;
        else if (base==16 && *s>='A'&&*s<='F') d=*s-'A'+10;
        else break; val = val*base + d; s++; }
      if (neg) val = -val;
      if (*p=='d') { int* out = va_arg(ap, int*); *out = (int)val; }
      else if (*p=='u') { unsigned* out = va_arg(ap, unsigned*); *out = (unsigned)val; }
      else { unsigned* out = va_arg(ap, unsigned*); *out = (unsigned)val; }
      assigns++;
    } else if (*p == 's') {
      char* out = va_arg(ap, char*);
      char tok[256]; if (!__read_token(fp, tok, sizeof(tok))) break;
      strncpy(out, tok, 256);
      assigns++;
    } else if (*p == 'c') {
      int c = fgetc(fp); if (c==EOF) break; char* out = va_arg(ap, char*); *out = (char)c; assigns++;
    }
  }
  va_end(ap);
  return assigns;
}

FILE* open_memstream(char **bufp, size_t *sizep) {
  FILE* fp = (FILE*)malloc(sizeof(FILE));
  if (!fp) return 0;
  fp->fd = -1; fp->flags = 2; fp->pos = 0; fp->eof = 0; fp->err = 0; fp->have_push = 0; fp->push_ch = 0;
  fp->is_mem = 1;
  fp->ms_bufp = bufp; fp->ms_sizep = sizep; fp->ms_buf = 0; fp->ms_cap = 0; fp->ms_len = 0;
  if (sizep) *sizep = 0; if (bufp) *bufp = 0;
  return fp;
}

int fflush(FILE* fp) {
  if (!fp) return 0; // flush all: nothing buffered in this libc
  if (fp->is_mem) {
    // Ensure NUL termination and publish current buffer and size
    if (fp->ms_cap < fp->ms_len + 1) {
      size_t ncap = fp->ms_cap ? fp->ms_cap : 64;
      while (ncap < fp->ms_len + 1) ncap *= 2;
      char* nb = (char*)realloc(fp->ms_buf, ncap);
      if (!nb) { fp->err = 1; return -1; }
      fp->ms_buf = nb; fp->ms_cap = ncap;
    }
    if (fp->ms_buf)
      fp->ms_buf[fp->ms_len] = '\0';
    if (fp->ms_bufp) *fp->ms_bufp = fp->ms_buf;
    if (fp->ms_sizep) *fp->ms_sizep = fp->ms_len;
  }
  return 0;
}




int fputc(int c, FILE* fp) {
    unsigned char ch = (unsigned char)c;
    return (fwrite(&ch, 1, 1, fp) == 1) ? (int)ch : EOF;
}

double strtod(const char* nptr, char** endptr) {
    const char* s = nptr;
    while (isspace(*s)) s++;
    int neg = 0; if (*s=='+'||*s=='-'){ neg = (*s=='-'); s++; }
    double ip = 0.0;
    int any = 0;
    while (*s >= '0' && *s <= '9') { ip = ip*10.0 + (*s - '0'); s++; any=1; }
    double fp = 0.0, scale = 1.0;
    if (*s == '.') { s++; while (*s>='0' && *s<='9') { fp = fp*10.0 + (*s-'0'); scale *= 10.0; s++; any=1; } }
    double val = ip + (scale>1.0 ? fp/scale : 0.0);
    if (*s=='e' || *s=='E') {
        s++;
        int esign = 0; if (*s=='+'||*s=='-'){ esign = (*s=='-'); s++; }
        int exp = 0; while (*s>='0'&&*s<='9'){ exp = exp*10 + (*s-'0'); s++; }
        double pow10 = 1.0; while (exp-- > 0) pow10 *= 10.0;
        val = esign ? (val / pow10) : (val * pow10);
        any = 1;
    }
    if (endptr) *endptr = (char*)(any ? s : nptr);
    return neg ? -val : val;
}

static unsigned long long __minux_parse_unsigned(const char* nptr, char** endptr,
                                                 int base, int* neg_out, int* any_out) {
    const char* s = nptr;
    while (isspace(*s)) s++;

    int neg = 0;
    if (*s == '+') {
        s++;
    } else if (*s == '-') {
        neg = 1;
        s++;
    }

    unsigned long long val = 0;
    int any = 0;
    int actual_base = base;

    if (actual_base == 0) {
        if (s[0] == '0') {
            if (s[1] == 'x' || s[1] == 'X') {
                actual_base = 16;
                s += 2;
            } else {
                actual_base = 8;
                s++;
                any = 1;  // leading zero counts as a digit
            }
        } else {
            actual_base = 10;
        }
    } else if (actual_base == 16) {
        if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
            s += 2;
        }
    }

    if (actual_base < 2 || actual_base > 36) {
        if (endptr) *endptr = (char*)nptr;
        if (neg_out) *neg_out = neg;
        if (any_out) *any_out = 0;
        return 0;
    }

    for (;; s++) {
        int c = *s;
        int d;
        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'z') d = c - 'a' + 10;
        else if (c >= 'A' && c <= 'Z') d = c - 'A' + 10;
        else break;
        if (d >= actual_base) break;
        any = 1;
        val = val * (unsigned long long)actual_base + (unsigned long long)d;
    }

    if (endptr) *endptr = (char*)(any ? s : nptr);
    if (neg_out) *neg_out = neg;
    if (any_out) *any_out = any;
    return val;
}

unsigned long strtoul(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    unsigned long val = (unsigned long)parsed;
    if (neg) val = (unsigned long)(-(long)val);
    return val;
}

long strtol(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    long result = (long)parsed;
    if (neg) result = -result;
    return result;
}

long long strtoll(const char* nptr, char** endptr, int base) {
    int neg = 0;
    int any = 0;
    unsigned long long parsed = __minux_parse_unsigned(nptr, endptr, base, &neg, &any);
    if (!any) return 0;
    long long result = (long long)parsed;
    if (neg) result = -result;
    return result;
}

long atol(const char* nptr) {
    return strtol(nptr, 0, 10);
}

int atoi(const char* nptr) {
    return (int)strtol(nptr, 0, 10);
}

static int __tolower(int c) {
    if (c >= 'A' && c <= 'Z') return c - 'A' + 'a';
    return c;
}

int strncasecmp(const char* a, const char* b, size_t n) {
    for (size_t i=0; i<n; i++) {
        unsigned char ca = (unsigned char)a[i];
        unsigned char cb = (unsigned char)b[i];
        if (ca == 0 || cb == 0) return (int)ca - (int)cb;
        int da = __tolower(ca);
        int db = __tolower(cb);
        if (da != db) return da - db;
    }
    return 0;
}

time_t time(time_t* tloc) {
    struct timeval tv; tv.tv_sec = 0; tv.tv_usec = 0;
    // If gettimeofday is available it could be used; return epoch by default
    if (tloc) *tloc = tv.tv_sec;
    return tv.tv_sec;
}

struct tm* localtime(const time_t* timep) {
    static struct tm tm;
    (void)timep;
    tm.tm_sec=0; tm.tm_min=0; tm.tm_hour=0; tm.tm_mday=1; tm.tm_mon=0; tm.tm_year=70; tm.tm_wday=4; tm.tm_yday=0; tm.tm_isdst=0;
    return &tm;
}

char* ctime_r(const time_t* timep, char* buf) {
    (void)timep;
    const char* s = "Thu Jan  1 00:00:00 1970\n";
    char* p = buf; while (*s) *p++ = *s++; *p = '\0';
    return buf;
}

char* strerror(int errnum) {
    switch (errnum) {
      case 0:  return "Success";
      case 1:  return "Operation not permitted";
      case 2:  return "No such file or directory";
      case 5:  return "I/O error";
      case 9:  return "Bad file descriptor";
      case 12: return "Out of memory";
      case 13: return "Permission denied";
      case 17: return "File exists";
      case 20: return "Not a directory";
      case 21: return "Is a directory";
      case 22: return "Invalid argument";
      case 32: return "Broken pipe";
      case 38: return "Function not implemented"; // ENOSYS
      default: return "Unknown error";
    }
}

int ispunct(int c) {
    // Printable ASCII that is not alnum and not space
    return (c >= 0x21 && c <= 0x7e) && !isalnum(c);
}

static char* __strtok_save;
char *strtok(char *s, const char *delim) {
    if (!s) s = __strtok_save;
    if (!s) return 0;
    // skip leading delimiters
    const char *d;
    while (*s) {
        int isdelim = 0;
        for (d = delim; *d; d++) if (*d == *s) { isdelim = 1; break; }
        if (!isdelim) break;
        s++;
    }
    if (*s == '\0') { __strtok_save = 0; return 0; }
    char *start = s;
    while (*s) {
        for (d = delim; *d; d++) if (*d == *s) { *s = '\0'; __strtok_save = s+1; return start; }
        s++;
    }
    __strtok_save = 0; return start;
}

int isxdigit(int c) {
    return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

// --- minimal sscanf implementation (supports %zi, %d, %ld, %u, %s, %[...], width) ---
static int __minux_isspace(int c) { return c==' '||c=='\t'||c=='\n'||c=='\r'||c=='\v'||c=='\f'; }

int sscanf(const char *str, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    const char *s = str;
    const char *f = fmt;
    int assigned = 0;

    #define SKIP_WS_INPUT() while (*s && __minux_isspace((unsigned char)*s)) s++

    while (*f) {
        if (*f != '%') {
            if (__minux_isspace((unsigned char)*f)) {
                while (__minux_isspace((unsigned char)*f)) f++;
                SKIP_WS_INPUT();
                continue;
            }
            if (*s != *f) { va_end(ap); return assigned; }
            s++; f++;
            continue;
        }
        f++; // skip '%'

        // width
        int width = 0;
        while (*f >= '0' && *f <= '9') { width = width*10 + (*f - '0'); f++; }

        // length modifier (handle 'l', 'z'; allow "ll")
        char length = 0;
        if (*f == 'l' || *f == 'z') { length = *f; f++; if (length=='l' && *f=='l') { f++; } }

        char conv = *f++;
        if (conv == 's') {
            char *out = va_arg(ap, char*);
            if (!out) { va_end(ap); return assigned; }
            SKIP_WS_INPUT();
            int n=0;
            while (*s && !__minux_isspace((unsigned char)*s) && (width==0 || n<width)) { out[n++] = *s++; }
            out[n] = '\0';
            if (n==0) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='d' || conv=='i' || conv=='u') {
            SKIP_WS_INPUT();
            int neg = 0; if (*s=='+'||*s=='-'){ neg = (*s=='-'); s++; }
            unsigned long long val=0; int digits=0;
            while (*s>='0'&&*s<='9' && (width==0 || digits<width)) { val = val*10 + (unsigned)(*s-'0'); s++; digits++; }
            if (digits==0) { va_end(ap); return assigned; }
            if (conv=='u') {
                if (length=='l')      { unsigned long* p = va_arg(ap, unsigned long*); *p = (unsigned long)val; }
                else if (length=='z') { size_t* p = va_arg(ap, size_t*); *p = (size_t)val; }
                else                  { unsigned* p = va_arg(ap, unsigned*); *p = (unsigned)val; }
            } else {
                long long sval = neg ? -(long long)val : (long long)val;
                if (length=='l')      { long* p = va_arg(ap, long*); *p = (long)sval; }
                else if (length=='z') { long long* p = va_arg(ap, long long*); *p = (long long)sval; } // ssize_t 相当
                else                  { int* p = va_arg(ap, int*); *p = (int)sval; }
            }
            assigned++;
        } else if (conv=='[') {
            // scanset: %[...]
            int invert = 0; if (*f=='^'){ invert=1; f++; }
            char set[256]={0};
            if (*f==']'){ set[(unsigned)']']=1; f++; }
            while (*f && *f!=']') {
                if (*(f+1)=='-' && *(f+2) && *(f+2)!=']') {
                    unsigned char a=(unsigned char)*f, b=(unsigned char)*(f+2);
                    if (a<=b) { for (int c=a;c<=b;c++) set[c]=1; }
                    else      { for (int c=b;c<=a;c++) set[c]=1; }
                    f+=3;
                } else {
                    set[(unsigned char)*f]=1; f++;
                }
            }
            if (*f==']') f++;
            char *out = va_arg(ap, char*);
            if (!out) { va_end(ap); return assigned; }
            int n=0;
            while (*s && (width==0 || n<width)) {
                int in = set[(unsigned char)*s];
                if ((in && !invert) || (!in && invert)) { out[n++]=*s++; }
                else break;
            }
            out[n]='\0';
            if (n==0) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='c') {
            char *out = va_arg(ap, char*);
            int n = (width==0)?1:width;
            int i=0; for (; i<n && *s; i++) *out++ = *s++;
            if (i<n) { va_end(ap); return assigned; }
            assigned++;
        } else if (conv=='%') {
            if (*s!='%') { va_end(ap); return assigned; }
            s++;
        } else {
            va_end(ap); return assigned; // 未対応指定子はその場で終了
        }

        while (__minux_isspace((unsigned char)*f)) {
            while (__minux_isspace((unsigned char)*f)) f++;
            SKIP_WS_INPUT();
        }
    }
    va_end(ap);
    return assigned;
}

#ifndef MINUX_PATH_MAX
#define MINUX_PATH_MAX 1024
#endif

// POSIX-like dirname: returns static buffer; input not modified
char* dirname(const char* path) {
    static char buf[MINUX_PATH_MAX];
    if (!path || !*path) { buf[0]='.'; buf[1]='\0'; return buf; }

    // copy
    size_t n = 0;
    while (path[n] && n < MINUX_PATH_MAX-1) { buf[n] = path[n]; n++; }
    buf[n] = '\0';

    // strip trailing '/'
    while (n > 1 && buf[n-1] == '/') { buf[--n] = '\0'; }

    // find last '/'
    char *last = NULL;
    for (size_t i=0; i<n; i++) if (buf[i] == '/') last = &buf[i];

    if (!last) { buf[0]='.'; buf[1]='\0'; return buf; }
    if (last == buf) { buf[1] = '\0'; return buf; } // "/xxx" -> "/"

    *last = '\0';
    size_t m = (size_t)(last - buf);
    while (m > 0 && buf[m-1] == '/') { buf[--m] = '\0'; } // "/foo///bar" -> "/foo"

    if (m == 0) { buf[0] = '/'; buf[1] = '\0'; }
    return buf;
}

