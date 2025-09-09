#include "minux.h"
#include <stdint.h>

static int ustrlen(const char* s){ int n=0; if(!s) return 0; while(s[n]) n++; return n; }

int main(int argc, char** argv){
    // simple login prompt loop
    while (1) {
        write(1, "login: ", 8);
        char user[32]; int ui=0; char ch;
        while (ui<31) { if (read(0,&ch,1)<=0) break; if (ch=='\n'||ch=='\r') break; user[ui++]=ch; }
        user[ui]='\0';
        write(1, "\npassword: ", 12);
        char pass[32]; int pi=0; while (pi<31) { if (read(0,&ch,1)<=0) break; if (ch=='\n'||ch=='\r') break; pass[pi++]=ch; }
        pass[pi]='\0'; write(1, "\n", 1);
        if (login_user(user, pass) == 0) break;
        write(1, "Login failed\n", 13);
    }
    // exec shell from filesystem
    char* argv2[] = { "/sh.elf", 0 };
    execv("/sh.elf", (void*)argv2);
    return 0;
}

