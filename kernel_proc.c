#include "common.h"
#include "kernel_list.h"

static struct kernel_list* g_proc_list = 0;
static struct kernel_list* g_kernel_state_list = 0;
static struct kernel_list* g_free_pipe_list = 0;
static struct kernel_list* g_free_file_list = 0;

static struct kernel_list* get_proc_slot_list()
{
    if(gProc == 0) {
        gProc = kernel_list_new();
    }

    return (struct kernel_list*)gProc;
}

struct proc* proc_slot_get(int pid)
{
    struct kernel_list* proc_list = get_proc_slot_list();

    if(pid < 0 || pid >= proc_list->length) {
        return 0;
    }

    return ((struct proc*)proc_list->items[pid]);
}

void proc_slot_set(int pid, struct proc* p)
{
    if(pid < 0 || pid >= PROC_MAX) {
        return;
    }

    struct kernel_list* proc_list = get_proc_slot_list();

    while(proc_list->length <= pid) {
        kernel_list_add(proc_list, (uintptr_t)(0));
    }

    kernel_list_replace(proc_list, pid, (uintptr_t)(p));
}

void proc_slot_reset(void)
{
    struct kernel_list* proc_list = get_proc_slot_list();
    kernel_list_reset(proc_list);
}

static struct kernel_list* get_proc_supp_gid_list(struct proc* p)
{
    if(p == 0) {
        return 0;
    }

    if(p->supp_gid_list == 0) {
        p->supp_gid_list = kernel_list_new();
    }

    return (struct kernel_list*)p->supp_gid_list;
}

static struct kernel_list* get_free_pipe_list()
{
    if(g_free_pipe_list == 0) {
        g_free_pipe_list = kernel_list_new();
    }

    return g_free_pipe_list;
}

static struct kernel_list* get_free_file_list()
{
    if(g_free_file_list == 0) {
        g_free_file_list = kernel_list_new();
    }

    return g_free_file_list;
}

static struct kernel_list* get_proc_process_pages_list(struct proc* p)
{
    if(p == 0) {
        return 0;
    }

    if(p->process_pages_list == 0) {
        p->process_pages_list = kernel_list_new();
    }

    return (struct kernel_list*)p->process_pages_list;
}

static struct kernel_list* get_process_page_kalloc_list(struct process_pages* page)
{
    if(page == 0) {
        return 0;
    }

    if(page->process_kalloc_address_list == 0) {
        page->process_kalloc_address_list = kernel_list_new();
    }

    return (struct kernel_list*)page->process_kalloc_address_list;
}

static struct kernel_list* get_file_owner_list(struct file* f)
{
    if(f == 0) {
        return 0;
    }

    if(f->owner_process_list == 0) {
        f->owner_process_list = kernel_list_new();
    }

    return (struct kernel_list*)f->owner_process_list;
}

static struct kernel_list* get_pipe_linked_file_list(struct spipe* p)
{
    if(p == 0) {
        return 0;
    }

    if(p->linked_file_list == 0) {
        p->linked_file_list = kernel_list_new();
    }

    return (struct kernel_list*)p->linked_file_list;
}

static void free_string_ptr_list(struct kernel_list* items)
{
    if(items == 0) {
        return;
    }

    int len = items->length;

    for(int i=0; i<len; i++) {
        char* item = (char*)((long)items->items[i]);

        if(item != 0) {
            free(item);
        }
    }

    kernel_list_reset(items);
    free(items);
}

void proc_list_init(void)
{
    if(g_proc_list == 0) {
        g_proc_list = kernel_list_new();
    }
    else {
        kernel_list_reset(g_proc_list);
    }
}

void proc_list_add(struct proc* p)
{
    if(p == 0) {
        return;
    }

    if(g_proc_list == 0) {
        proc_list_init();
    }

    for(int list_index = 0; list_index < g_proc_list->length; list_index++) {
        struct proc* proc = (struct proc*)g_proc_list->items[list_index];
        if(proc == p) {
            return;
        }
    }

    kernel_list_add(g_proc_list, (uintptr_t)(p));
}

void proc_list_remove(struct proc* p)
{
    if(g_proc_list == 0 || p == 0) {
        return;
    }

    int len = g_proc_list->length;
    struct proc* copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        struct proc* proc = ((struct proc*)g_proc_list->items[i]);

        if(proc != p) {
            copied[copied_len++] = proc;
        }
    }

    kernel_list_reset(g_proc_list);

    for(int i=0; i<copied_len; i++) {
        kernel_list_add(g_proc_list, (uintptr_t)(copied[i]));
    }
}

void proc_list_replace(struct proc* oldp, struct proc* newp)
{
    if(newp == 0) {
        return;
    }

    if(g_proc_list == 0) {
        proc_list_init();
        kernel_list_add(g_proc_list, (uintptr_t)(newp));
        return;
    }

    for(int i=0; i<g_proc_list->length; i++) {
        struct proc* proc = ((struct proc*)g_proc_list->items[i]);
        
        if(proc == oldp) {
            kernel_list_replace(g_proc_list, i, (uintptr_t)(newp));
            return;
        }
    }

    proc_list_add(newp);
}

struct proc* proc_find_zombie_in_pgrp(uint16_t pgrp)
{
    if(g_proc_list == 0) {
        return (struct proc*)0;
    }

    for(int list_index = 0; list_index < g_proc_list->length; list_index++) {
        struct proc* proc = (struct proc*)g_proc_list->items[list_index];
        if(proc != 0
            && proc->zombie
            && proc->pgrp == pgrp)
        {
            return proc;
        }
    }

    return (struct proc*)0;
}

struct proc* proc_find_zombie_child(int parent_pid)
{
    if(g_proc_list == 0) {
        return (struct proc*)0;
    }

    for(int list_index = 0; list_index < g_proc_list->length; list_index++) {
        struct proc* proc = (struct proc*)g_proc_list->items[list_index];
        if(proc != 0
            && proc->zombie
            && proc->parent_pid == parent_pid)
        {
            return proc;
        }
    }

    return (struct proc*)0;
}

bool proc_has_child(int parent_pid)
{
    if(g_proc_list == 0) {
        return false;
    }

    for(int list_index = 0; list_index < g_proc_list->length; list_index++) {
        struct proc* proc = (struct proc*)g_proc_list->items[list_index];
        if(proc != 0
            && proc->parent_pid == parent_pid)
        {
            return true;
        }
    }

    return false;
}

bool proc_is_file_open(uint32_t inum)
{
    if(g_proc_list == 0) {
        return false;
    }

    for(int list_index = 0; list_index < g_proc_list->length; list_index++) {
        struct proc* proc = (struct proc*)g_proc_list->items[list_index];
        if(proc == 0) {
            continue;
        }

        for(int i=0; i<MAX_OPEN_FILES; i++) {
            if(proc->file_table[i] != 0
                && proc->file_table[i]->kind == FK_FILE
                && proc->file_table[i]->inum == inum)
            {
                return true;
            }
        }
    }

    return false;
}

void proc_supp_gid_clear(struct proc* p)
{
    struct kernel_list* supp_gid_list = get_proc_supp_gid_list(p);

    if(supp_gid_list == 0) {
        return;
    }

    kernel_list_reset(supp_gid_list);
    free(supp_gid_list);
    p->supp_gid_list = NULL;
    p->nsupp = 0;
}

void proc_supp_gid_add(struct proc* p, uint16_t gid)
{
    struct kernel_list* supp_gid_list = get_proc_supp_gid_list(p);

    if(supp_gid_list == 0) {
        return;
    }

    for(int list_index = 0; list_index < supp_gid_list->length; list_index++) {
        int it = (int)supp_gid_list->items[list_index];
        if(it == gid) {
            p->nsupp = supp_gid_list->length;
            return;
        }
    }

    kernel_list_add(supp_gid_list, (uintptr_t)(gid));
    p->nsupp = supp_gid_list->length;
}

void proc_copy_supp_gids(struct proc* dest, struct proc* src)
{
    struct kernel_list* supp_gid_list = get_proc_supp_gid_list(src);

    proc_supp_gid_clear(dest);

    if(supp_gid_list == 0) {
        return;
    }

    for(int list_index = 0; list_index < supp_gid_list->length; list_index++) {
        int it = (int)supp_gid_list->items[list_index];
        proc_supp_gid_add(dest, (uint16_t)it);
    }
}

int proc_has_supp_gid(struct proc* p, uint16_t gid)
{
    struct kernel_list* supp_gid_list = get_proc_supp_gid_list(p);

    if(supp_gid_list == 0) {
        return 0;
    }

    for(int list_index = 0; list_index < supp_gid_list->length; list_index++) {
        int it = (int)supp_gid_list->items[list_index];
        if(it == gid) {
            return 1;
        }
    }

    return 0;
}

void fs_pool_init(void)
{
    get_free_pipe_list();
    get_free_file_list();
}

struct spipe* fs_pop_free_pipe(void)
{
    struct kernel_list* free_pipe_list = get_free_pipe_list();

    if(free_pipe_list == 0 || free_pipe_list->length == 0) {
        return 0;
    }

    int len = free_pipe_list->length;
    struct spipe* result = ((struct spipe*)free_pipe_list->items[len-1]);

    kernel_list_delete(free_pipe_list, len-1, len);

    return result;
}

void fs_push_free_pipe(struct spipe* p)
{
    struct kernel_list* free_pipe_list = get_free_pipe_list();

    if(free_pipe_list == 0 || p == 0) {
        return;
    }

    for(int list_index = 0; list_index < free_pipe_list->length; list_index++) {
        struct spipe* it = (struct spipe*)free_pipe_list->items[list_index];
        if(it == p) {
            return;
        }
    }

    kernel_list_add(free_pipe_list, (uintptr_t)(p));
}

struct file* fs_pop_free_file(void)
{
    struct kernel_list* free_file_list = get_free_file_list();

    if(free_file_list == 0 || free_file_list->length == 0) {
        return 0;
    }

    int len = free_file_list->length;
    struct file* result = ((struct file*)free_file_list->items[len-1]);

    kernel_list_delete(free_file_list, len-1, len);

    return result;
}

void fs_push_free_file(struct file* f)
{
    struct kernel_list* free_file_list = get_free_file_list();

    if(free_file_list == 0 || f == 0) {
        return;
    }

    for(int list_index = 0; list_index < free_file_list->length; list_index++) {
        struct file* it = (struct file*)free_file_list->items[list_index];
        if(it == f) {
            return;
        }
    }

    kernel_list_add(free_file_list, (uintptr_t)(f));
}

int exec_load_user_string_vector(pagetable_t pagetable, uint64_t user_vec, int max_items, int max_len, int allow_null_vec, char*** out_items, int* out_count)
{
    if(out_items == 0 || out_count == 0 || max_items < 0 || max_len <= 0) {
        return -1;
    }

    *out_items = 0;
    *out_count = 0;

    if(user_vec == 0) {
        if(allow_null_vec) {
            char** empty_items = (char**)malloc(sizeof(char*));

            if(empty_items == 0) {
                return -1;
            }

            empty_items[0] = 0;
            *out_items = empty_items;
            return 0;
        }

        return -1;
    }

    struct kernel_list* items = kernel_list_new();

    for(int i=0; i<max_items; i++) {
        uint64_t user_item_ptr = 0;

        if(copyin(pagetable, (char*)&user_item_ptr, user_vec + i * sizeof(uint64_t), sizeof(uint64_t)) < 0) {
            free_string_ptr_list(items);
            return -1;
        }

        if(user_item_ptr == 0) {
            break;
        }

        char* item = (char*)malloc(max_len);

        if(item == 0) {
            free_string_ptr_list(items);
            return -1;
        }

        if(copyinstr(pagetable, item, user_item_ptr, max_len) < 0) {
            free(item);
            free_string_ptr_list(items);
            return -1;
        }

        kernel_list_add(items, (uintptr_t)((long)item));
    }

    int count = items->length;
    char** result = (char**)malloc(sizeof(char*) * (count + 1));

    if(result == 0) {
        free_string_ptr_list(items);
        return -1;
    }

    for(int i=0; i<count; i++) {
        result[i] = (char*)((long)items->items[i]);
    }
    result[count] = 0;

    kernel_list_reset(items);
    free(items);

    *out_items = result;
    *out_count = count;

    return 0;
}

void exec_free_string_vector(char** items, int count)
{
    if(items == 0) {
        return;
    }

    for(int i=0; i<count; i++) {
        if(items[i] != 0) {
            free(items[i]);
        }
    }

    free(items);
}

int exec_push_string_vector(pagetable_t pagetable, char** items, int count, uint64_t* sp_io, uint64_t* vec_base_out)
{
    if(sp_io == NULL || vec_base_out == NULL || count < 0) {
        return -1;
    }

    struct kernel_list* addrs = kernel_list_new();
    uint64_t sp = *sp_io;

    for(int i=count-1; i>=0; i--) {
        size_t len = strlen(items[i]) + 1;
        sp -= len;

        if(copyout(pagetable, sp, items[i], len) < 0) {
            kernel_list_reset(addrs);
            free(addrs);
            return -1;
        }

        kernel_list_add(addrs, (uintptr_t)((long)sp));
    }

    sp -= (count + 1) * sizeof(uint64_t);
    sp &= ~7ULL;

    uint64_t vec_base = sp;

    for(int i=0; i<count; i++) {
        uint64_t ptr = (uint64_t)((long)addrs->items[count - 1 - i]);

        if(copyout(pagetable, vec_base + i * sizeof(uint64_t), &ptr, sizeof(uint64_t)) < 0) {
            kernel_list_reset(addrs);
            free(addrs);
            return -1;
        }
    }

    uint64_t nullp = 0;

    if(copyout(pagetable, vec_base + count * sizeof(uint64_t), &nullp, sizeof(uint64_t)) < 0) {
        kernel_list_reset(addrs);
        free(addrs);
        return -1;
    }

    kernel_list_reset(addrs);
    free(addrs);

    *sp_io = sp;
    *vec_base_out = vec_base;

    return 0;
}

void proc_process_pages_clear(struct proc* p)
{
    struct kernel_list* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == 0) {
        return;
    }

    kernel_list_reset(process_pages_list);
    free(process_pages_list);
    p->process_pages_list = NULL;
    p->num_process_pages = 0;
}

void proc_process_pages_add(struct proc* p, struct process_pages* page)
{
    struct kernel_list* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == 0 || page == 0) {
        return;
    }

    kernel_list_add(process_pages_list, (uintptr_t)(page));
    p->num_process_pages = process_pages_list->length;
}

struct process_pages* proc_process_pages_get(struct proc* p, int index)
{
    struct kernel_list* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == 0) {
        return (struct process_pages*)0;
    }

    if(index < 0 || index >= process_pages_list->length) {
        return (struct process_pages*)0;
    }

    return ((struct process_pages*)process_pages_list->items[index]);
}

struct process_pages* proc_process_pages_last(struct proc* p)
{
    struct kernel_list* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == 0 || process_pages_list->length == 0) {
        return (struct process_pages*)0;
    }

    return ((struct process_pages*)process_pages_list->items[process_pages_list->length-1]);
}

void process_page_kalloc_clear(struct process_pages* page)
{
    struct kernel_list* process_kalloc_list = get_process_page_kalloc_list(page);

    if(process_kalloc_list == 0) {
        return;
    }

    kernel_list_reset(process_kalloc_list);
    free(process_kalloc_list);
    page->process_kalloc_address_list = NULL;
    page->num_process_kalloc_address = 0;
}

void process_page_kalloc_add(struct process_pages* page, char* addr)
{
    struct kernel_list* process_kalloc_list = get_process_page_kalloc_list(page);

    if(process_kalloc_list == 0 || addr == 0) {
        return;
    }

    kernel_list_add(process_kalloc_list, (uintptr_t)((long)addr));
    page->num_process_kalloc_address = process_kalloc_list->length;
}

char* process_page_kalloc_get(struct process_pages* page, int index)
{
    struct kernel_list* process_kalloc_list = get_process_page_kalloc_list(page);

    if(process_kalloc_list == 0) {
        return (char*)0;
    }

    if(index < 0 || index >= process_kalloc_list->length) {
        return (char*)0;
    }

    return (char*)((long)process_kalloc_list->items[index]);
}

void file_owner_clear(struct file* f)
{
    struct kernel_list* owner_list = get_file_owner_list(f);

    if(owner_list == 0) {
        return;
    }

    kernel_list_reset(owner_list);
    f->num_owner_process = 0;
}

void file_owner_add(struct file* f, struct proc* owner)
{
    struct kernel_list* owner_list = get_file_owner_list(f);

    if(owner_list == 0 || owner == 0) {
        return;
    }

    for(int list_index = 0; list_index < owner_list->length; list_index++) {
        struct proc* proc = (struct proc*)owner_list->items[list_index];
        if(proc == owner) {
            f->num_owner_process = owner_list->length;
            return;
        }
    }

    kernel_list_add(owner_list, (uintptr_t)(owner));
    f->num_owner_process = owner_list->length;
}

void file_owner_remove(struct file* f, struct proc* owner)
{
    struct kernel_list* owner_list = get_file_owner_list(f);

    if(owner_list == 0 || owner == 0) {
        return;
    }

    int len = owner_list->length;
    struct proc* copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        struct proc* proc = ((struct proc*)owner_list->items[i]);

        if(proc != owner) {
            copied[copied_len++] = proc;
        }
    }

    kernel_list_reset(owner_list);

    for(int i=0; i<copied_len; i++) {
        kernel_list_add(owner_list, (uintptr_t)(copied[i]));
    }

    f->num_owner_process = owner_list->length;
}

void pipe_linked_file_clear(struct spipe* p)
{
    struct kernel_list* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == 0) {
        return;
    }

    kernel_list_reset(linked_file_list);
    p->num_linked_file = 0;
}

void pipe_linked_file_add(struct spipe* p, struct file* f)
{
    struct kernel_list* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == 0 || f == 0) {
        return;
    }

    for(int list_index = 0; list_index < linked_file_list->length; list_index++) {
        struct file* file = (struct file*)linked_file_list->items[list_index];
        if(file == f) {
            p->num_linked_file = linked_file_list->length;
            return;
        }
    }

    kernel_list_add(linked_file_list, (uintptr_t)(f));
    p->num_linked_file = linked_file_list->length;
}

void pipe_linked_file_remove(struct spipe* p, struct file* f)
{
    struct kernel_list* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == 0 || f == 0) {
        return;
    }

    int len = linked_file_list->length;
    struct file* copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        struct file* file = ((struct file*)linked_file_list->items[i]);

        if(file != f) {
            copied[copied_len++] = file;
        }
    }

    kernel_list_reset(linked_file_list);

    for(int i=0; i<copied_len; i++) {
        kernel_list_add(linked_file_list, (uintptr_t)(copied[i]));
    }

    p->num_linked_file = linked_file_list->length;
}

void pipe_linked_file_clear_pipe_refs(struct spipe* p)
{
    struct kernel_list* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == 0) {
        return;
    }

    for(int list_index = 0; list_index < linked_file_list->length; list_index++) {
        struct file* file = (struct file*)linked_file_list->items[list_index];
        if(file != 0) {
            file->pipe = 0;
        }
    }

    kernel_list_reset(linked_file_list);
    p->num_linked_file = 0;
}

void kernel_state_init(void)
{
    if(g_kernel_state_list == 0) {
        g_kernel_state_list = kernel_list_new();
    }
    else {
        kernel_list_reset(g_kernel_state_list);
    }
}

void kernel_state_clear(void)
{
    if(g_kernel_state_list == 0) {
        kernel_state_init();
        return;
    }

    kernel_list_reset(g_kernel_state_list);
}

void kernel_state_add(struct sKernelState* state)
{
    if(state == 0) {
        return;
    }

    if(g_kernel_state_list == 0) {
        kernel_state_init();
    }

    kernel_list_add(g_kernel_state_list, (uintptr_t)((long)state));
}

struct sKernelState* kernel_state_find(int active_proc)
{
    if(g_kernel_state_list == 0) {
        return (struct sKernelState*)0;
    }

    for(int list_index = 0; list_index < g_kernel_state_list->length; list_index++) {
        long state_ptr = (long)g_kernel_state_list->items[list_index];
        if(state_ptr != 0
            && ((struct sKernelState*)state_ptr)->gYieldUserActiveProc == (uint64_t)active_proc)
        {
            return (struct sKernelState*)state_ptr;
        }
    }

    return (struct sKernelState*)0;
}

struct sKernelState* kernel_state_take(int active_proc)
{
    long removed_state = 0;

    if(g_kernel_state_list == 0) {
        return (struct sKernelState*)0;
    }

    int len = g_kernel_state_list->length;
    long copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        long state_ptr = ((long)g_kernel_state_list->items[i]);

        if(state_ptr != 0
            && ((struct sKernelState*)state_ptr)->gYieldUserActiveProc == (uint64_t)active_proc
            && removed_state == 0)
        {
            removed_state = state_ptr;
            continue;
        }

        copied[copied_len++] = state_ptr;
    }

    if(removed_state == 0) {
        return (struct sKernelState*)0;
    }

    kernel_list_reset(g_kernel_state_list);

    for(int i=0; i<copied_len; i++) {
        kernel_list_add(g_kernel_state_list, (uintptr_t)(copied[i]));
    }

    return (struct sKernelState*)removed_state;
}

struct sKernelState* kernel_state_take_first(void)
{
    if(g_kernel_state_list == 0 || g_kernel_state_list->length == 0) {
        return (struct sKernelState*)0;
    }

    long removed_state = ((long)g_kernel_state_list->items[0]);
    int len = g_kernel_state_list->length;
    long copied[len > 1 ? len - 1 : 1];
    int copied_len = 0;

    for(int i=1; i<len; i++) {
        copied[copied_len++] = ((long)g_kernel_state_list->items[i]);
    }

    kernel_list_reset(g_kernel_state_list);

    for(int i=0; i<copied_len; i++) {
        kernel_list_add(g_kernel_state_list, (uintptr_t)(copied[i]));
    }

    return (struct sKernelState*)removed_state;
}
