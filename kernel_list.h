#ifndef KERNEL_LIST_H
#define KERNEL_LIST_H

/* Non-owning values. Reset releases storage, never the pointed-to objects. */
struct kernel_list {
    uintptr_t* items;
    int length;
    int capacity;
};

static struct kernel_list* kernel_list_new(void)
{
    struct kernel_list* list = calloc(1, sizeof(*list));
    if(!list) panic("kernel list allocation");
    return list;
}

static void kernel_list_reset(struct kernel_list* list)
{
    free(list->items);
    list->items = NULL;
    list->length = list->capacity = 0;
}

static void kernel_list_add(struct kernel_list* list, uintptr_t value)
{
    if(list->length == list->capacity) {
        int capacity = list->capacity ? list->capacity * 2 : 8;
        uintptr_t* items = malloc(capacity * sizeof(*items));
        if(!items) panic("kernel list growth");
        if(list->length) memcpy(items, list->items, list->length * sizeof(*items));
        free(list->items);
        list->items = items;
        list->capacity = capacity;
    }
    list->items[list->length++] = value;
}

static void kernel_list_replace(struct kernel_list* list, int index, uintptr_t value)
{
    list->items[index] = value;
}

static void kernel_list_delete(struct kernel_list* list, int start, int end)
{
    int removed = end - start;
    for(int i = end; i < list->length; i++) list->items[start++] = list->items[i];
    list->length -= removed;
}

#endif
