#include "minux.h"

// Simple stack-based VM for ToyC bytecode
// Bytecode format v1: Header + code ints + strings
// Header: 'T''C''B''1' (0x54434231), code_len (int), entry_ip (int), nstrings (int)
// Then code_len 32-bit ints (big endian), then nstrings blocks: len(int), bytes

enum {
  BC_HALT=0,
  BC_ICONST,     // int
  BC_LOAD,       // slot
  BC_STORE,      // slot
  BC_ADD, BC_SUB, BC_MUL, BC_DIV, BC_MOD,
  BC_NEG,
  BC_CMPEQ, BC_CMPNE, BC_CMPLT, BC_CMPLE, BC_CMPGT, BC_CMPGE,
  BC_JMP,        // addr
  BC_JZ,         // addr (pop cond, if zero jump)
  BC_JNZ,        // addr
  BC_CALL,       // addr
  BC_PUTI,       // print int top
  BC_PUTC,       // print char (pop)
  BC_PUTS,       // print string by pool index + newline
  BC_RET         // return (pop and halt)
};

#define MAX_CODE 4096
#define MAX_STACK 1024
#define MAX_LOCALS 256

static int code[MAX_CODE];
static int ip=0;
static int entry_ip=0;
static int sp=0;
static int stack[MAX_STACK];
static int locals[MAX_LOCALS];
static int retstack[256]; int rsp=0;

// String pool
static const char* strpool[256];
static int nstr = 0;

static void prints_(const char* s){ if(s) write(1,s,({int n=0; while(s[n]) n++; n;})); }

static int readall(int fd, char* buf, int max){ int off=0; int n; while(off<max && (n=read(fd, buf+off, max-off))>0){ off+=n; } return off; }

int main(int argc, char** argv){
  if (argc < 2){ prints_("usage: toyvm file.tbc\r\n"); return 1; }
  int fd = open(argv[1], O_RDONLY, 0);
  if (fd < 0){ prints_("toyvm: cannot open\r\n"); return 1; }
  char buf[8192]; int n = readall(fd, buf, sizeof(buf)); close(fd);
  if (n < 16){ prints_("toyvm: bad file\r\n"); return 1; }
  unsigned int magic = ((unsigned char)buf[0]<<24)|((unsigned char)buf[1]<<16)|((unsigned char)buf[2]<<8)|((unsigned char)buf[3]);
  int off=0; int clen=0; int ci=0; int strcount=0;
  if (magic == 0x54434231){ // 'TCB1'
    clen = ((unsigned char)buf[4]<<24)|((unsigned char)buf[5]<<16)|((unsigned char)buf[6]<<8)|((unsigned char)buf[7]);
    entry_ip = ((unsigned char)buf[8]<<24)|((unsigned char)buf[9]<<16)|((unsigned char)buf[10]<<8)|((unsigned char)buf[11]);
    strcount = ((unsigned char)buf[12]<<24)|((unsigned char)buf[13]<<16)|((unsigned char)buf[14]<<8)|((unsigned char)buf[15]);
    off = 16;
  } else if (magic == 0x54434230){ // legacy 'TCB0'
    clen = ((unsigned char)buf[4]<<24)|((unsigned char)buf[5]<<16)|((unsigned char)buf[6]<<8)|((unsigned char)buf[7]);
    entry_ip = 0; strcount = 0; off = 8;
  } else { prints_("toyvm: bad magic\r\n"); return 1; }
  if (clen > MAX_CODE) clen = MAX_CODE;
  // read code ints (big endian)
  while (off+3 < n && ci < clen){
    int v = ((unsigned char)buf[off]<<24)|((unsigned char)buf[off+1]<<16)|((unsigned char)buf[off+2]<<8)|((unsigned char)buf[off+3]);
    code[ci++] = v;
    off += 4;
  }
  // read string pool
  nstr = 0;
  for (int si=0; si<strcount && off+3<n; si++){
    int slen = ((unsigned char)buf[off]<<24)|((unsigned char)buf[off+1]<<16)|((unsigned char)buf[off+2]<<8)|((unsigned char)buf[off+3]);
    off += 4;
    if (off + slen <= n){ strpool[nstr++] = buf + off; off += slen; } else break;
  }
  // run
  ip = entry_ip; sp = 0; rsp = 0; for (int i=0;i<MAX_LOCALS;i++) locals[i]=0;
  for(;;){
    int op = code[ip++];
    switch(op){
      case BC_HALT: return 0;
      case BC_ICONST: stack[sp++] = code[ip++]; break;
      case BC_LOAD: stack[sp++] = locals[code[ip++]]; break;
      case BC_STORE: locals[code[ip++]] = stack[--sp]; break;
      case BC_ADD: stack[sp-2] = stack[sp-2] + stack[sp-1]; sp--; break;
      case BC_SUB: stack[sp-2] = stack[sp-2] - stack[sp-1]; sp--; break;
      case BC_MUL: stack[sp-2] = stack[sp-2] * stack[sp-1]; sp--; break;
      case BC_DIV: stack[sp-2] = (stack[sp-1]? stack[sp-2] / stack[sp-1]:0); sp--; break;
      case BC_MOD: stack[sp-2] = (stack[sp-1]? stack[sp-2] % stack[sp-1]:0); sp--; break;
      case BC_NEG: stack[sp-1] = -stack[sp-1]; break;
      case BC_CMPEQ: stack[sp-2] = (stack[sp-2] == stack[sp-1]); sp--; break;
      case BC_CMPNE: stack[sp-2] = (stack[sp-2] != stack[sp-1]); sp--; break;
      case BC_CMPLT: stack[sp-2] = (stack[sp-2] <  stack[sp-1]); sp--; break;
      case BC_CMPLE: stack[sp-2] = (stack[sp-2] <= stack[sp-1]); sp--; break;
      case BC_CMPGT: stack[sp-2] = (stack[sp-2] >  stack[sp-1]); sp--; break;
      case BC_CMPGE: stack[sp-2] = (stack[sp-2] >= stack[sp-1]); sp--; break;
      case BC_JMP: ip = code[ip]; break;
      case BC_JZ: { int t = stack[--sp]; int dst = code[ip++]; if (!t) ip = dst; } break;
      case BC_JNZ:{ int t = stack[--sp]; int dst = code[ip++]; if (t) ip = dst; } break;
      case BC_CALL:{ int dst = code[ip++]; retstack[rsp++] = ip; ip = dst; } break;
      case BC_PUTI:{
        int v = stack[--sp];
        // print decimal
        char s[32]; int n=0; int neg=0; if (v<0){ neg=1; v=-v; }
        if (v==0){ s[n++]='0'; }
        while(v){ s[n++] = '0'+(v%10); v/=10; }
        if (neg) s[n++]='-';
        for(int i=n-1;i>=0;i--) write(1,&s[i],1);
      } break;
      case BC_PUTC:{ char c=(char)stack[--sp]; write(1,&c,1); } break;
      case BC_PUTS:{ int idx = code[ip++]; if (idx>=0 && idx<nstr){ const char* p = strpool[idx]; int m=0; while(p[m]) m++; write(1,(char*)p,m); char nl='\n'; write(1,&nl,1);} } break;
      case BC_RET:{ int rv = (sp>0?stack[--sp]:0); if (rsp>0){ ip = retstack[--rsp]; stack[sp++] = rv; } else return rv; } break;
      default: return 0;
    }
  }
}
