#include "minux.h"
#include "user_helpers.h"

int main(int argc, char** argv)
{
    for(int i=1; i<argc; i++) {
        if(i > 1) {
            minux_print(" ");
        }
        minux_print(argv[i]);
    }
    minux_print("\n");

    exit(0);
}
