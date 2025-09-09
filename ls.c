#include "minux.h"
#include "fs.h"

static int ustrlen(const char* s) { int n=0; if(!s) return 0; while(s[n]) n++; return n; }
static void putc1(char c) { write(1, &c, 1); }
static void prints(const char* s) { write(1, s, ustrlen(s)); }
static void printu(unsigned int x) { char b[16]; int i=0; if(!x){putc1('0');return;} while(x){ b[i++]='0'+(x%10); x/=10; } while(i--) putc1(b[i]); }

static void joinpath(char* out, int outsz, const char* base, const char* name) {
    int n=0; out[0]='\0';
    if (base && base[0]) { while(base[n] && n<outsz-1){ out[n]=base[n]; n++; } out[n]='\0'; }
    if (n==0) { if(outsz>1){ out[0]='/'; out[1]='\0'; n=1; } }
    if (out[n-1] != '/' && n<outsz-1) { out[n++]='/'; out[n]='\0'; }
    int i=0; while(name && name[i] && n<outsz-1) out[n++]=name[i++]; out[n]='\0';
}

static void print_perms(uint32_t mode, char typec) {
    char buf[11]; buf[0]=typec; const int m[9]={0400,0200,0100, 0040,0020,0010, 0004,0002,0001};
    for(int i=0;i<9;i++) buf[1+i] = (mode & m[i]) ? (i%3==2?'x':(i%3==1?'w':'r')) : '-';
    buf[10]='\0'; prints(buf);
}

static int is_leap(unsigned y){ return (y%4==0 && (y%100!=0 || y%400==0)); }
static void print_calendar(uint32_t sec) {
    unsigned days = sec/86400; unsigned r = sec%86400; unsigned hh=r/3600; r%=3600; unsigned mm=r/60; unsigned ss=r%60;
    unsigned y=1970; while(1){ unsigned dy = 365 + is_leap(y); if(days >= dy){ days -= dy; y++; } else break; }
    unsigned mlens[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; if(is_leap(y)) mlens[1]=29;
    unsigned m=0; while(m<12 && days >= mlens[m]){ days -= mlens[m]; m++; }
    unsigned D = days+1; unsigned M = m+1;
    char b[32]; int n=0;
    // YYYY-MM-DD HH:MM:SS
    // year
    unsigned tmp=y; char t[12]; int i=0; while(tmp){ t[i++]= '0'+(tmp%10); tmp/=10; } while(i--) b[n++]=t[i]; b[n++]='-';
    // month
    b[n++]= '0'+(M/10); b[n++]= '0'+(M%10); b[n++]='-';
    b[n++]= '0'+(D/10); b[n++]= '0'+(D%10); b[n++]=' ';
    b[n++]= '0'+(hh/10); b[n++]= '0'+(hh%10); b[n++]=':';
    b[n++]= '0'+(mm/10); b[n++]= '0'+(mm%10); b[n++]=':';
    b[n++]= '0'+(ss/10); b[n++]= '0'+(ss%10);
    write(1,b,n);
}

static void print_entry_long(const char* dir, const char* name) {
    char path[256]; joinpath(path, sizeof(path), dir, name);
    struct stat st;
    if (lstat(path, &st) < 0) { prints("?? "); prints(name); putc1('\n'); return; }
    char t='-'; if (st.type==T_DIR) t='d'; else if (st.type==T_SYMLINK) t='l';
    // perms nlink uid gid size mtime inum name
    print_perms(st.mode & 0777, t); putc1(' ');
    printu(st.nlink); putc1(' ');
    printu(st.uid); putc1(' ');
    printu(st.gid); putc1(' ');
    printu(st.size); putc1(' ');
    print_calendar(st.mtime); putc1(' ');
    printu(st.inum); putc1(' ');
    prints(name);
    if (t=='l') { char buf[128]; int n=readlink(path, buf, sizeof(buf)-1); if(n>0){ buf[n]='\0'; prints(" -> "); prints(buf);} }
    putc1('\n');
}

int main(int argc, char** argv) {
    int longflag = 0; int show_extra = 0; int follow_links = 0; const char* path = "";
    for (int i=1;i<argc;i++) {
        if (argv[i] && argv[i][0]=='-' && argv[i][1]) {
            for (int k=1; argv[i][k]; k++) {
                if (argv[i][k]=='l') longflag=1;
                else if (argv[i][k]=='a') show_extra=1; // show atime/ctime
                else if (argv[i][k]=='L') follow_links=1; // use stat instead of lstat
            }
        } else if (argv[i] && argv[i][0]) path = argv[i];
    }

    struct stat stf;
    int ok = follow_links ? stat(path, &stf) : lstat(path, &stf);
    if (path[0] && ok == 0 && stf.type != T_DIR) {
        const char* name = path; const char* p = path; while(*p){ if(*p=='/') name=p+1; p++; }
        if (longflag) {
            print_entry_long("/", name);
            if (show_extra) {
                prints("    atime: "); print_calendar(stf.atime); prints("  ctime: "); print_calendar(stf.ctime); putc1('\n');
            }
        } else { prints(name); putc1('\n'); }
        exit(0);
    }

    int dfd = opendir(path);
    if (dfd < 0) { prints("opendir failed\n"); exit(1); }
    struct dirent ents[32];
    for (;;) {
        int n = readdir(dfd, ents, 32);
        if (n < 0) { prints("readdir error\n"); break; }
        if (n == 0) break;
        for (int i=0;i<n;i++) {
            char name[DIRSIZ+1]; for (int j=0;j<DIRSIZ;j++) name[j]=ents[i].name[j]; name[DIRSIZ]='\0';
            int len = DIRSIZ; while(len>0 && name[len-1]=='\0') len--; if(len==0) continue;
            if (longflag) {
                print_entry_long(path[0]?path:"/", name);
                if (show_extra) {
                    char pbuf[256]; joinpath(pbuf, sizeof(pbuf), path[0]?path:"/", name);
                    struct stat stx; if ((follow_links?stat(pbuf,&stx):lstat(pbuf,&stx))==0){ prints("    atime: "); print_calendar(stx.atime); prints("  ctime: "); print_calendar(stx.ctime); putc1('\n'); }
                }
            } else { write(1, name, len); write(1, "\n", 1); }
        }
    }
    closedir(dfd); exit(0);
}
