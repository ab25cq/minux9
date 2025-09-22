#include "minux.h"

// ---- small utils ----
static int ustrlen(const char* s){int n=0;if(!s)return 0;while(s[n])n++;return n;}
static void putc1(char c){ write(1,&c,1); }
static void prints(const char* s){ write(1,s,ustrlen(s)); }
static void printu(unsigned int x){ char b[16]; int i=0; if(!x){putc1('0');return;} while(x){ b[i++]='0'+(x%10); x/=10; } while(i--) putc1(b[i]); }

// base/name を連結（base が空なら "/" を基点にする）
static void joinpath(char* out,int outsz,const char* base,const char* name){
    int n=0; out[0]='\0';
    if(base && base[0]){ while(base[n] && n<outsz-1){ out[n]=base[n]; n++; } out[n]='\0'; }
    if(n==0){ if(outsz>1){ out[0]='/'; out[1]='\0'; n=1; } }
    if(out[n-1]!='/' && n<outsz-1){ out[n++]='/'; out[n]='\0'; }
    int i=0; while(name && name[i] && n<outsz-1) out[n++]=name[i++]; out[n]='\0';
}

// ---- calendar (YYYY-MM-DD HH:MM:SS) ----
static int is_leap(unsigned y){ return (y%4==0 && (y%100!=0 || y%400==0)); }
static void print_calendar(uint32_t sec){
    unsigned days=sec/86400; unsigned r=sec%86400; unsigned hh=r/3600; r%=3600; unsigned mm=r/60; unsigned ss=r%60;
    unsigned y=1970; for(;;){ unsigned dy=365+is_leap(y); if(days>=dy){ days-=dy; y++; } else break; }
    unsigned mlens[12]={31,28,31,30,31,30,31,31,30,31,30,31}; if(is_leap(y)) mlens[1]=29;
    unsigned m=0; while(m<12 && days>=mlens[m]){ days-=mlens[m]; m++; }
    unsigned D=days+1, M=m+1; char b[32]; int n=0, i; char t[12]; unsigned tmp=y;
    for(i=0; tmp; tmp/=10) t[i++]= '0'+(tmp%10); while(i--) b[n++]=t[i]; b[n++]='-';
    b[n++]= '0'+(M/10); b[n++]= '0'+(M%10); b[n++]='-';
    b[n++]= '0'+(D/10); b[n++]= '0'+(D%10); b[n++]=' ';
    b[n++]= '0'+(hh/10); b[n++]= '0'+(hh%10); b[n++]=':';
    b[n++]= '0'+(mm/10); b[n++]= '0'+(mm%10); b[n++]=':';
    b[n++]= '0'+(ss/10); b[n++]= '0'+(ss%10);
    write(1,b,n);
}

// 末尾の '/' を落としてから basename を返す（"/" だけは残す）
static const char* basename_no_trailing_slash(char* path){
    int L=ustrlen(path);
    while(L>1 && path[L-1]=='/') path[--L]='\0';
    const char* base=path;
    for(char* p=path; *p; p++) if(*p=='/' && p[1]!='\0') base=p+1;
    return base;
}

// 単体ファイル/ディレクトリエントリの出力：名前 サイズ 更新時刻
static void print_entry_long_fp(const char* fullpath, const char* dispname){
    struct stat st;
    if(lstat(fullpath,&st)<0){
        prints(dispname); prints("\t??\t"); print_calendar(0); putc1('\n'); return;
    }
    prints(dispname); putc1('\t');              // 名前
    printu(st.size);  putc1('\t');              // サイズ
    print_calendar(st.mtime); putc1('\n');      // 更新時間
}

int main(int argc, char** argv){
    int longflag=0; int follow_links=0; const char* argpath="";
    for(int i=1;i<argc;i++){
        if(argv[i] && argv[i][0]=='-' && argv[i][1]){
            for(int k=1; argv[i][k]; k++){
                if(argv[i][k]=='l') longflag=1;
                else if(argv[i][k]=='L') follow_links=1; // stat を使う（既定は lstat）
            }
        }else if(argv[i] && argv[i][0]) argpath=argv[i];
    }

    // 引数がファイル（= 非ディレクトリ）ならここで終わり
    struct stat stf;
    int ok = follow_links ? stat(argpath,&stf) : lstat(argpath,&stf);
    if(argpath[0] && ok==0 && stf.type!=T_DIR){
        char pbuf[256]; // フルパスをここに
        // そのまま使う（相対/絶対ともに OK）
        int n=0; while(argpath[n] && n<(int)sizeof(pbuf)-1){ pbuf[n]=argpath[n]; n++; } pbuf[n]='\0';
        char dispbuf[256]; // 表示名
        n=0; while(argpath[n] && n<(int)sizeof(dispbuf)-1){ dispbuf[n]=argpath[n]; n++; } dispbuf[n]='\0';
        const char* name = basename_no_trailing_slash(dispbuf);

        if(longflag) print_entry_long_fp(pbuf, name);
        else { prints(name); putc1('\n'); }
        exit(0);
    }

    // それ以外はディレクトリを列挙
    int dfd = opendir(argpath);
    if(dfd<0){ prints("opendir failed\n"); exit(1); }
    struct dirent ents[32];
    for(;;){
        int n = readdir(dfd, ents, 32);
        if(n<0){ prints("readdir error\n"); break; }
        if(n==0) break;
        for(int i=0;i<n;i++){
            char name[DIRSIZ+1]; for(int j=0;j<DIRSIZ;j++) name[j]=ents[i].name[j]; name[DIRSIZ]='\0';
            int len=DIRSIZ; while(len>0 && name[len-1]=='\0') len--; if(len==0) continue;
            if(longflag){
                char full[256]; joinpath(full,sizeof(full), argpath[0]?argpath:"/", name);
                print_entry_long_fp(full, name);
            }else{
                write(1,name,len); write(1,"\n",1);
            }
        }
    }
    closedir(dfd); exit(0);
}

