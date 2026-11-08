#include "../minux.h"

static int inherited_data = 11;

int main(void)
{
    /* Cross page boundaries and grow the kernel's allocation tracking list. */
    unsigned char* data = malloc(9000);
    if(!data) return 1;
    for(int i = 0; i < 9000; i++) data[i] = i % 251;
    inherited_data = 29;

    int child = fork();
    if(child < 0) return 2;
    if(child == 0) {
        if(inherited_data != 29) _exit(3);
        for(int i = 0; i < 9000; i++) {
            if(data[i] != i % 251) _exit(4);
            data[i] = 0;
        }
        inherited_data = 0;
        /* The child's allocator must also inherit the parent's break. */
        void* extra = malloc(8192);
        if(!extra) _exit(5);
        free(extra);
        free(data);
        _exit(23);
    }

    int status = -1;
    int waited = wait(&status);
    if(waited != child || status != 23 || inherited_data != 29) return 6;
    for(int i = 0; i < 9000; i++) {
        if(data[i] != i % 251) return 7;
    }
    free(data);
    printf("PASS fork heap\n");
    return 0;
}
