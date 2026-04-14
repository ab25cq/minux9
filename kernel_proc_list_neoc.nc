#include "kernel_proc_list_neoc.h"

static list<struct proc*>* g_proc_list = null;
static list<long>* g_kernel_state_list = null;

void neoc_proc_list_init(void)
{
    if(g_proc_list == null) {
        g_proc_list = borrow new list<struct proc*>();
    }
    else {
        g_proc_list.reset();
    }
}

void neoc_proc_list_add(struct proc* p)
{
    if(p == null) {
        return;
    }

    if(g_proc_list == null) {
        neoc_proc_list_init();
    }

    foreach(proc, g_proc_list) {
        if(proc == p) {
            return;
        }
    }

    g_proc_list.add(p);
}

void neoc_proc_list_remove(struct proc* p)
{
    if(g_proc_list == null || p == null) {
        return;
    }
    
    g_proc_list.remove(p, true);
}

void neoc_proc_list_replace(struct proc* oldp, struct proc* newp)
{
    if(newp == null) {
        return;
    }

    if(g_proc_list == null) {
        neoc_proc_list_init();
        g_proc_list.add(newp);
        return;
    }

    for(int i=0; i<g_proc_list.length(); i++) {
        struct proc* proc = g_proc_list[i];
        
        if(proc == oldp) {
            g_proc_list.replace(i, newp);
            return;
        }
    }

    neoc_proc_list_add(newp);
}

struct proc* neoc_proc_find_zombie_in_pgrp(uint16_t pgrp)
{
    if(g_proc_list == null) {
        return (struct proc*)0;
    }

    foreach(proc, g_proc_list) {
        if(proc != null
            && proc->zombie
            && proc->pgrp == pgrp)
        {
            return proc;
        }
    }

    return (struct proc*)0;
}

bool neoc_proc_is_file_open(uint32_t inum)
{
    if(g_proc_list == null) {
        return false;
    }

    foreach(proc, g_proc_list) {
        if(proc == null) {
            continue;
        }

        for(int i=0; i<MAX_OPEN_FILES; i++) {
            if(proc->file_table[i] != null
                && proc->file_table[i]->kind == FK_FILE
                && proc->file_table[i]->inum == inum)
            {
                return true;
            }
        }
    }

    return false;
}

void neoc_kernel_state_init(void)
{
    if(g_kernel_state_list == null) {
        g_kernel_state_list = borrow new list<long>();
    }
    else {
        g_kernel_state_list.reset();
    }
}

void neoc_kernel_state_clear(void)
{
    if(g_kernel_state_list == null) {
        neoc_kernel_state_init();
        return;
    }

    g_kernel_state_list.reset();
}

void neoc_kernel_state_add(struct sKernelState* state)
{
    if(state == null) {
        return;
    }

    if(g_kernel_state_list == null) {
        neoc_kernel_state_init();
    }

    g_kernel_state_list.add((long)state);
}

struct sKernelState* neoc_kernel_state_find(int active_proc)
{
    if(g_kernel_state_list == null) {
        return (struct sKernelState*)0;
    }

    foreach(state_ptr, g_kernel_state_list) {
        if(state_ptr != 0
            && ((struct sKernelState*)state_ptr)->gYieldUserActiveProc == (uint64_t)active_proc)
        {
            return (struct sKernelState*)state_ptr;
        }
    }

    return (struct sKernelState*)0;
}

struct sKernelState* neoc_kernel_state_take(int active_proc)
{
    long removed_state = 0;

    if(g_kernel_state_list == null) {
        return (struct sKernelState*)0;
    }

    int len = g_kernel_state_list.length();
    long copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        long state_ptr = g_kernel_state_list[i];

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

    g_kernel_state_list.reset();

    for(int i=0; i<copied_len; i++) {
        g_kernel_state_list.add(copied[i]);
    }

    return (struct sKernelState*)removed_state;
}

struct sKernelState* neoc_kernel_state_take_first(void)
{
    if(g_kernel_state_list == null || g_kernel_state_list.length() == 0) {
        return (struct sKernelState*)0;
    }

    long removed_state = g_kernel_state_list[0];
    int len = g_kernel_state_list.length();
    long copied[len > 1 ? len - 1 : 1];
    int copied_len = 0;

    for(int i=1; i<len; i++) {
        copied[copied_len++] = g_kernel_state_list[i];
    }

    g_kernel_state_list.reset();

    for(int i=0; i<copied_len; i++) {
        g_kernel_state_list.add(copied[i]);
    }

    return (struct sKernelState*)removed_state;
}
