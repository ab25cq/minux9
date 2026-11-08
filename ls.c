#include "minux.h"
#include "user_helpers.h"

int main(int argc, char** argv)
{
    const char* argpath = "";

    for(int i=1; i<argc; i++) {
        if(argv[i] && argv[i][0] == '-' && argv[i][1]) {
        }
        else if(!minux_string_is_empty(argv[i])) {
            argpath = argv[i];
        }
    }

    if(argpath[0]) {
        struct stat stf;
        stat(argpath, &stf);
        printf("%s %d\r\n", argpath, stf.size);
        exit(0);
    }

    int dfd = opendir(argpath);
    if(dfd < 0) {
        printf("opendir failed\n");
        exit(1);
    }

    struct dirent ents[32];

    while(true) {
        int n = readdir(dfd, ents, 32);

        if(n < 0) {
            printf("readdir error\n");
            break;
        }

        if(n == 0) {
            break;
        }

        for(int i=0; i<n; i++) {
            int len = minux_dirent_name_len(&ents[i]);

            if(len == 0) {
                continue;
            }

            minux_printn(ents[i].name, len);
            minux_print("\n");
        }
    }

    closedir(dfd);
    exit(0);
}
