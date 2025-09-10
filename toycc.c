#include "minux.h"

// ToyC compiler -> ToyVM bytecode (.tbc)
// Subset: int only; program: int main(){ ... }
// Decls: int x; (locals up to 64)
// Stmts: expr; return expr; if(cond){...}[else{...}] while(cond){...}
// Expr: +,-,*,/,%, unary -, parentheses, identifiers, integer literals, assignment '='
// Builtins: putc(ch); puti(i);

#define MAX_SRC 4096
#define MAX_TOK 1024
#define MAX_CODE 4096
#define MAX_STR  128
#define MAX_STRLEN 256
#define MAX_LOCALS 64

enum TokKind{ TK_EOF=0,TK_INTKW,TK_RETURN,TK_IF,TK_ELSE,TK_WHILE,TK_IDENT,TK_NUM,TK_LBRACE,TK_RBRACE,TK_LP,TK_RP,TK_SEMI,TK_ASSIGN,TK_PLUS,TK_MINUS,TK_MUL,TK_DIV,TK_MOD,TK_LT,TK_LE,TK_GT,TK_GE,TK_EQ,TK_NE,TK_COMMA };

struct Tok{ int k; int val; char s[32]; };
static struct Tok toks[MAX_TOK]; int ntok=0; int cur=0;

static char src[MAX_SRC]; int srclen=0;

// emit helpers (big-endian ints)
static int code[MAX_CODE]; int ci=0;
static char strpool[MAX_STR][MAX_STRLEN];
static int  nstr=0;
static void emit(int v){ if (ci<MAX_CODE) code[ci++]=v; }
// opcodes
enum{BC_HALT,BC_ICONST,BC_LOAD,BC_STORE,BC_ADD,BC_SUB,BC_MUL,BC_DIV,BC_MOD,BC_NEG,BC_CMPEQ,BC_CMPNE,BC_CMPLT,BC_CMPLE,BC_CMPGT,BC_CMPGE,BC_JMP,BC_JZ,BC_JNZ,BC_CALL,BC_PUTI,BC_PUTC,BC_PUTS,BC_RET};

// symbol table for locals
static char locals_name[MAX_LOCALS][32];
static int  nlocals=0;
static int find_local(const char* s){ for(int i=0;i<nlocals;i++){ int j=0; while(locals_name[i][j]==s[j] && s[j]) j++; if (locals_name[i][j]==s[j]) return i; } return -1; }
static int add_local(const char* s){ int idx=find_local(s); if(idx>=0) return idx; if(nlocals<MAX_LOCALS){ int j=0; while(s[j] && j<31){ locals_name[nlocals][j]=s[j]; j++; } locals_name[nlocals][j]='\0'; return nlocals++; } return 0; }

// lexer
static int isalpha_(char c){ return (c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='_'; }
static int isalnum_(char c){ return isalpha_(c)||(c>='0'&&c<='9'); }
static int isspace_(char c){ return c==' '||c=='\t'||c=='\r'||c=='\n'; }
static int strncmp_(const char* a,const char* b,int n){ for(int i=0;i<n;i++){ if(a[i]!=b[i]) return a[i]-b[i]; if(!a[i]) return 0; } return 0; }

static void lex(){
  int i=0; while(i<srclen){
    char c=src[i]; if(isspace_(c)){ i++; continue; }
    if (c=='/' && i+1<srclen && src[i+1]=='/') { while(i<srclen && src[i]!='\n') i++; continue; }
    if (c=='"'){
      i++; int j=0; char b[MAX_STRLEN];
      while(i<srclen && src[i]!='"' && j<MAX_STRLEN-1){
        if (src[i]=='\\' && i+1<srclen){ i++; char e=src[i++]; if (e=='n') b[j++]='\n'; else b[j++]=e; continue; }
        b[j++]=src[i++];
      }
      if (i<srclen && src[i]=='"') i++;
      int idx = nstr; if (nstr<MAX_STR){ int k=0; while(b[k]){ strpool[nstr][k]=b[k]; k++; } strpool[nstr][k]='\0'; nstr++; }
      toks[ntok].k=TK_NUM; toks[ntok].val = (1<<30) | idx; ntok++; continue;
    }
    if (isalpha_(c)){
      int j=0; char b[32]; while(i<srclen && isalnum_(src[i]) && j<31) b[j++]=src[i++]; b[j]='\0';
      int k=TK_IDENT;
      if(!strncmp_(b,"int",4)) k=TK_INTKW;
      else if(!strncmp_(b,"return",7)) k=TK_RETURN;
      else if(!strncmp_(b,"if",3)) k=TK_IF;
      else if(!strncmp_(b,"else",5)) k=TK_ELSE;
      else if(!strncmp_(b,"while",6)) k=TK_WHILE;
      toks[ntok].k=k; for(int q=0;q<32;q++) toks[ntok].s[q]=0; int z=0; while(b[z]){ toks[ntok].s[z]=b[z]; z++; }
      ntok++;
      continue;
    }
    if (c>='0'&&c<='9'){
      int v=0; while(i<srclen && src[i]>='0'&&src[i]<='9'){ v = v*10 + (src[i]-'0'); i++; }
      toks[ntok].k=TK_NUM; toks[ntok].val=v; ntok++; continue;
    }
    // symbols
    if (c=='{' ){ toks[ntok++].k=TK_LBRACE; i++; continue; }
    if (c=='}' ){ toks[ntok++].k=TK_RBRACE; i++; continue; }
    if (c=='(' ){ toks[ntok++].k=TK_LP; i++; continue; }
    if (c==')' ){ toks[ntok++].k=TK_RP; i++; continue; }
    if (c==';' ){ toks[ntok++].k=TK_SEMI; i++; continue; }
    if (c==','){ toks[ntok++].k=TK_COMMA; i++; continue; }
    if (c=='=' && i+1<srclen && src[i+1]=='='){ toks[ntok++].k=TK_EQ; i+=2; continue; }
    if (c=='!' && i+1<srclen && src[i+1]=='='){ toks[ntok++].k=TK_NE; i+=2; continue; }
    if (c=='<' && i+1<srclen && src[i+1]=='='){ toks[ntok++].k=TK_LE; i+=2; continue; }
    if (c=='>' && i+1<srclen && src[i+1]=='='){ toks[ntok++].k=TK_GE; i+=2; continue; }
    if (c=='<'){ toks[ntok++].k=TK_LT; i++; continue; }
    if (c=='>'){ toks[ntok++].k=TK_GT; i++; continue; }
    if (c=='='){ toks[ntok++].k=TK_ASSIGN; i++; continue; }
    if (c=='+'){ toks[ntok++].k=TK_PLUS; i++; continue; }
    if (c=='-'){ toks[ntok++].k=TK_MINUS; i++; continue; }
    if (c=='*'){ toks[ntok++].k=TK_MUL; i++; continue; }
    if (c=='/'){ toks[ntok++].k=TK_DIV; i++; continue; }
    if (c=='%'){ toks[ntok++].k=TK_MOD; i++; continue; }
    // unknown
    i++;
  }
  toks[ntok++].k=TK_EOF;
}

// parser forward decls
static void parse_stmt();
static void parse_block();
static void parse_expr();

static int accept(int k){ if (toks[cur].k==k){ cur++; return 1; } return 0; }
static void expect(int k){ if (!accept(k)){ /* error */ } }

// expressions (precedence)
static void parse_primary(){
  if (accept(TK_NUM)){
    int v = toks[cur-1].val;
    if (v & (1<<30)){
      int sidx = v & ((1<<30)-1);
      emit(BC_PUTS); emit(sidx);
    } else {
      emit(BC_ICONST); emit(v);
    }
    return;
  }
  if (accept(TK_IDENT)){
    // builtin calls: putc(x); puti(x);
    char name[32]; int i=0; while((name[i]=toks[cur-1].s[i])) i++;
    if (accept(TK_LP)){
      if (name[0]=='p'&&name[1]=='u'&&name[2]=='t'&&name[3]=='c'){
        parse_expr(); expect(TK_RP); emit(BC_PUTC);
      } else if (name[0]=='p'&&name[1]=='u'&&name[2]=='t'&&name[3]=='i'){
        parse_expr(); expect(TK_RP); emit(BC_PUTI);
      } else if (name[0]=='p'&&name[1]=='u'&&name[2]=='t'&&name[3]=='s'){
        if (toks[cur].k==TK_NUM && (toks[cur].val & (1<<30))){ int sidx=toks[cur].val & ((1<<30)-1); cur++; expect(TK_RP); emit(BC_PUTS); emit(sidx);} else { if (!accept(TK_RP)){ while(!accept(TK_RP) && !accept(TK_EOF)) cur++; } }
      } else {
        extern int find_func_addr(const char*);
        extern int record_call_patch(const char*, int);
        int addr = find_func_addr(name);
        emit(BC_CALL); emit(addr>=0?addr:0);
        if (addr<0) record_call_patch(name, ci-1);
        expect(TK_RP);
      }
      return;
    } else {
      int slot = add_local(name);
      emit(BC_LOAD); emit(slot);
      return;
    }
  }
  if (accept(TK_LP)){ parse_expr(); expect(TK_RP); return; }
}

static void parse_unary(){
  if (accept(TK_MINUS)){ parse_unary(); emit(BC_NEG); }
  else parse_primary();
}

static void parse_mul(){
  parse_unary();
  for(;;){
    if (accept(TK_MUL)){ parse_unary(); emit(BC_MUL); }
    else if (accept(TK_DIV)){ parse_unary(); emit(BC_DIV); }
    else if (accept(TK_MOD)){ parse_unary(); emit(BC_MOD); }
    else break;
  }
}

static void parse_add(){
  parse_mul();
  for(;;){
    if (accept(TK_PLUS)){ parse_mul(); emit(BC_ADD); }
    else if (accept(TK_MINUS)){ parse_mul(); emit(BC_SUB); }
    else break;
  }
}

static void parse_cmp(){
  parse_add();
  if (accept(TK_EQ)){ parse_add(); emit(BC_CMPEQ); }
  else if (accept(TK_NE)){ parse_add(); emit(BC_CMPNE); }
  else if (accept(TK_LT)){ parse_add(); emit(BC_CMPLT); }
  else if (accept(TK_LE)){ parse_add(); emit(BC_CMPLE); }
  else if (accept(TK_GT)){ parse_add(); emit(BC_CMPGT); }
  else if (accept(TK_GE)){ parse_add(); emit(BC_CMPGE); }
}

static void parse_assign(){
  // handle: IDENT '=' expr | cmp
  if (toks[cur].k==TK_IDENT && toks[cur+1].k==TK_ASSIGN){
    // capture name
    char name[32]; int i=0; while((name[i]=toks[cur].s[i])) i++;
    cur+=2; // skip IDENT and '='
    parse_expr();
    int slot = add_local(name);
    emit(BC_STORE); emit(slot);
    emit(BC_LOAD); emit(slot);
  } else {
    parse_cmp();
  }
}

static void parse_expr(){ parse_assign(); }

static void parse_stmt(){
  if (accept(TK_INTKW)){
    // simple decl: int x; (no init)
    if (toks[cur].k==TK_IDENT){ add_local(toks[cur].s); cur++; }
    expect(TK_SEMI); return;
  }
  if (accept(TK_RETURN)){
    parse_expr(); expect(TK_SEMI); emit(BC_RET); return;
  }
  if (accept(TK_IF)){
    expect(TK_LP); parse_expr(); expect(TK_RP);
    int jz_pos = ci; emit(BC_JZ); emit(0);
    parse_stmt();
    if (accept(TK_ELSE)){
      int jmp_pos = ci; emit(BC_JMP); emit(0);
      code[jz_pos+1] = ci; // else addr
      parse_stmt();
      code[jmp_pos+1] = ci;
    } else {
      code[jz_pos+1] = ci;
    }
    return;
  }
  if (accept(TK_WHILE)){
    int start = ci;
    expect(TK_LP); parse_expr(); expect(TK_RP);
    int jz_pos = ci; emit(BC_JZ); emit(0);
    parse_stmt();
    emit(BC_JMP); emit(start);
    code[jz_pos+1] = ci;
    return;
  }
  if (accept(TK_LBRACE)){ parse_block(); return; }
  // expr;
  parse_expr(); expect(TK_SEMI);
}

static void parse_block(){
  while (toks[cur].k != TK_RBRACE && toks[cur].k != TK_EOF){ parse_stmt(); }
  expect(TK_RBRACE);
}

// function table and patching
struct FEnt{ char name[32]; int addr; int patches[64]; int np; };
static struct FEnt funcs[64]; static int nfunc=0; static int entry_ip_addr=0;
int find_func_addr(const char* s){ for(int i=0;i<nfunc;i++){ int j=0; while(funcs[i].name[j]==s[j]&&s[j]) j++; if(funcs[i].name[j]==s[j]) return funcs[i].addr; } return -1; }
static int find_func_index(const char* s){ for(int i=0;i<nfunc;i++){ int j=0; while(funcs[i].name[j]==s[j]&&s[j]) j++; if(funcs[i].name[j]==s[j]) return i; } return -1; }
int record_call_patch(const char* s, int pos){ int idx=find_func_index(s); if (idx<0){ if(nfunc<64){ int j=0; while((funcs[nfunc].name[j]=s[j])) j++; funcs[nfunc].addr=-1; funcs[nfunc].np=0; idx=nfunc++; } else return -1; } if (funcs[idx].np<64) funcs[idx].patches[funcs[idx].np++]=pos; return 0; }
static void define_func(const char* s, int addr){ int idx=find_func_index(s); if (idx<0){ if(nfunc<64){ int j=0; while((funcs[nfunc].name[j]=s[j])) j++; funcs[nfunc].addr=addr; funcs[nfunc].np=0; idx=nfunc++; } else return; } else funcs[idx].addr=addr; for(int i=0;i<funcs[idx].np;i++){ code[funcs[idx].patches[i]] = addr; } funcs[idx].np=0; }

static void parse_function(){
  expect(TK_INTKW);
  expect(TK_IDENT); char name[32]; int j=0; while((name[j]=toks[cur-1].s[j])) j++;
  expect(TK_LP); expect(TK_RP);
  define_func(name, ci);
  if (name[0]=='m'&&name[1]=='a'&&name[2]=='i'&&name[3]=='n') entry_ip_addr = ci;
  expect(TK_LBRACE); parse_block();
  emit(BC_RET);
}

static void compile(){
  cur=0; ntok=0; nlocals=0; ci=0; nstr=0; nfunc=0; entry_ip_addr=0;
  lex();
  while (toks[cur].k != TK_EOF){ parse_function(); }
  emit(BC_HALT);
}

static void write_be32(int fd, int v){ unsigned char b[4]; b[0]=(v>>24)&0xFF; b[1]=(v>>16)&0xFF; b[2]=(v>>8)&0xFF; b[3]=v&0xFF; write(fd,(char*)b,4); }

int main(int argc, char** argv){
  if (argc < 3){ write(1, "usage: toycc in.toy out.tbc\r\n", 29); return 1; }
  int fd = open(argv[1], O_RDONLY, 0);
  if (fd < 0){ write(1, "toycc: cannot open\r\n", 22); return 1; }
  srclen = read(fd, src, sizeof(src)-1); close(fd); src[srclen]='\0';
  compile();
  int out = open(argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0644);
  if (out < 0){ write(1, "toycc: cannot write\r\n", 23); return 1; }
  // header magic 'TCB1'
  write(out, "TCB1", 4);
  write_be32(out, ci);
  write_be32(out, entry_ip_addr);
  write_be32(out, nstr);
  for(int i=0;i<ci;i++) write_be32(out, code[i]);
  for(int si=0; si<nstr; si++){ int L=0; while(strpool[si][L]) L++; write_be32(out, L); write(out, strpool[si], L); }
  close(out);
  return 0;
}
