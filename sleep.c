#include "minux.h"
#include "user_helpers.h"

int main(int argc, char** argv)
{
    int sec = 0;

    for(int i=1; i<argc; i++) {
        sec = atoi(argv[i]);
    }

    sleep(sec);

    exit(0);
}
