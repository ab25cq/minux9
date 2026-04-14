#include "minux_neoc.h"

int main(int argc, char** argv)
{
    const char* argpath = "";

    for(int i=1; i<argc; i++) {
        if(argv[i] && argv[i][0] == '-' && argv[i][1]) {
        }
        else if(argv[i] && argv[i][0]) {
            argpath = argv[i];
        }
    }

    if(argpath[0]) {
        struct stat stf;
        minux_stat(argpath, &stf);
        printf("%s %d\r\n", argpath, stf.size);
        minux_exit(0);
    }

    int dfd = minux_opendir(argpath);
    if(dfd < 0) {
        printf("opendir failed\n");
        minux_exit(1);
    }

    struct dirent ents[32];

    while(true) {
        int n = minux_readdir(dfd, ents, 32);

        if(n < 0) {
            printf("readdir error\n");
            break;
        }

        if(n == 0) {
            break;
        }

        for(int i=0; i<n; i++) {
            char name[DIRSIZ+1];

            for(int j=0; j<DIRSIZ; j++) {
                name[j] = ents[i].name[j];
            }
            name[DIRSIZ] = '\0';

            int len = DIRSIZ;

            while(len > 0 && name[len-1] == '\0') {
                len--;
            }

            if(len == 0) {
                continue;
            }

            minux_write(1, name, len);
            minux_write(1, "\n", 1);
        }
    }

    minux_closedir(dfd);
    minux_exit(0);
}
