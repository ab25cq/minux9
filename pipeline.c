#include "minux.h"
#include "user_helpers.h"

#define MAX_STAGE_ARGS 32

void exec_command(char** argv2, int argc2)
{
    if(argc2 == 0) {
        printf("pipeline: empty command\n");
        exit(1);
    }

    execv(argv2[0], argv2);

    if(argv2[0][0] != '/') {
        char abuf[64];
        abuf[0] = '/';

        int i = 0;
        while(argv2[0][i] && i < 62) {
            abuf[i+1] = argv2[0][i];
            i++;
        }
        abuf[i+1] = '\0';

        execv(abuf, argv2);
    }

    printf("pipeline: exec failed %s\n", argv2[0]);
    exit(127);
}

int main(int argc, char** argv)
{
    char* argv2[MAX_STAGE_ARGS];
    int num_tokens = 0;

    for(int i=1; i<argc; i++) {
        if(argv[i] && argv[i][0]) {
            if(minux_streq(argv[i], ":")) {
                printf("pipeline: multi-stage mode is not enabled yet\n");
                exit(1);
            }

            if(num_tokens >= MAX_STAGE_ARGS - 1) {
                printf("pipeline: too many args\n");
                return 1;
            }
            argv2[num_tokens++] = argv[i];
        }
    }


    if(num_tokens == 0) {
        printf("usage: pipeline cmd arg...\n");
        exit(1);
    }

    argv2[num_tokens] = NULL;

    exec_command(argv2, num_tokens);
    exit(1);
}
