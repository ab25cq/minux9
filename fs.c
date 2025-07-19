// fs.c
#include <stdint.h>
#include <stddef.h>
#include "fs.h"

#define MAX_OPEN_FILES 16

void * kalloc(void);
void timer_handler();
void *calloc(size_t nmemb, size_t size);

void *kalloc_pages(size_t npages);
void* memset(void *dst, int c, unsigned int n);
void* memcpy(void *dst, const void *src, unsigned int n);
int strlen(const char *s);
int printf(const char* fmt, ...);
char* strncpy(char *s, const char *t, int n);
char *strtok(char *s, const char *delim);
extern void puts(const char* s);
int strcmp(const char* s1, const char* s2);
int strncmp(const char *p, const char *q, unsigned int n);

// ────────────────────────────────────────────────────────────────────────
// Virtio-ブロックデバイス（legacy MMIO）用簡易ドライバ
// ────────────────────────────────────────────────────────────────────────

#define VIRTIO_MMIO_BASE0   0x10001000UL
#define VIRTIO_MMIO_STRIDE  0x00001000UL
#define VIRTIO_MAX_SLOTS    8

#define SECTOR_SIZE         512

/* legacy MMIO レジスタ */
#define R_MAGIC            0x000
#define R_VERSION          0x004
#define R_DEVICE_ID        0x008
#define R_DEVICE_FEATURES  0x010
#define R_DRIVER_FEATURES  0x020
#define R_GPAGE_SZ         0x028
#define R_Q_SEL            0x030
#define R_Q_NUM            0x034
#define R_Q_ALIGN          0x038
#define R_Q_PFN            0x040
#define R_Q_READY          0x044
#define R_Q_NOTIFY         0x050
#define R_STATUS           0x070

#define R_Q_DESC_LOW       0x080
#define R_Q_DESC_HIGH      0x084
#define R_Q_AVAIL_LOW      0x090
#define R_Q_AVAIL_HIGH     0x094
#define R_Q_USED_LOW       0x0A0
#define R_Q_USED_HIGH      0x0A4

#define R_Q_NUM_MAX        0x034
#define R_Q_NUM            0x038

#define S_ACK        1
#define S_DRIVER     2
#define S_FEATURES_OK 8
#define S_DRIVER_OK  4

struct virtq_desc {
    uint64_t addr;
    uint32_t len;
    uint16_t flags;
    uint16_t next;
} __attribute__((packed));

struct virtq_avail {
    uint16_t flags;
    uint16_t idx;
    uint16_t ring[];    // flexible
} __attribute__((packed, aligned(2)));

struct virtq_used_elem { uint32_t id,len; } __attribute__((packed));
struct virtq_used {
    uint16_t flags;
    uint16_t idx;
    struct virtq_used_elem ring[];
} __attribute__((packed, aligned(4)));

#define F_NEXT   1
#define F_WRITE  2

struct virtio_blk_req {
    uint32_t type;
    uint32_t reserved;
    uint64_t sector;
} __attribute__((packed));
#define VBLK_T_IN 0

static uint64_t vbase = 0;
static uint32_t Q     = 0;

static struct virtq_desc  *desc;
static struct virtq_avail *avail;
static struct virtq_used  *used;
static uint8_t            *vq_area;

static uint16_t aidx = 0;
volatile static uint8_t  status_byte __attribute__((aligned(4)));
volatile static uint8_t  dma_buf[SECTOR_SIZE] __attribute__((aligned(512)));

static inline void mw32(uint64_t b,uint32_t o,uint32_t v) { *(volatile uint32_t*)(b+o)=v; }
static inline uint32_t mr32(uint64_t b,uint32_t o)         { return *(volatile uint32_t*)(b+o); }

void virtio_blk_init(void)
{
    for(int s=0; s<VIRTIO_MAX_SLOTS; s++){
        uint64_t base = VIRTIO_MMIO_BASE0 + s*VIRTIO_MMIO_STRIDE;
        if(mr32(base, R_MAGIC) != 0x74726976) continue;
        if(mr32(base, R_DEVICE_ID) == 2) { vbase = base; break; }
    }
    if(!vbase){ puts("virtio-blk not found\n"); while(1); }
    if(mr32(vbase, R_VERSION) != 1){ puts("not legacy mmio\n"); while(1); }

    mw32(vbase, R_STATUS, 0);
    mw32(vbase, R_STATUS, S_ACK | S_DRIVER);

    uint32_t devfeat = mr32(vbase, R_DEVICE_FEATURES);
    (void)devfeat;
    mw32(vbase, R_DRIVER_FEATURES, 0);

    uint32_t st = mr32(vbase, R_STATUS) | S_FEATURES_OK;
    mw32(vbase, R_STATUS, st);
    if(!(mr32(vbase, R_STATUS) & S_FEATURES_OK)){
        puts("FEATURES_OK rejected\n"); while(1);
    }

    mw32(vbase, R_GPAGE_SZ, 4096);
    mw32(vbase, R_Q_SEL, 0);
    uint32_t devQ = mr32(vbase, R_Q_NUM_MAX);
    uint32_t drvQ = (devQ > 128) ? 128 : devQ;
    mw32(vbase, R_Q_NUM, drvQ);
    Q = drvQ;
    if(!Q || Q > 1024) { puts("unsupported queue size\n"); while(1); }
    //printf("device queue size = %d (driver uses %d)\n", devQ, Q);

    size_t sz_desc  = 16ULL * Q;
    size_t sz_avail =  4ULL + 2ULL * Q;
    size_t sz_used  =  4ULL + 8ULL * Q;
    size_t sz_total = sz_desc + sz_avail + sz_used;
    size_t npages   = (sz_total + 4095) >> 12;

    vq_area = kalloc_pages(npages);
    if (!vq_area) { puts("kalloc_pages failed\n"); while(1); }
    memset(vq_area, 0, npages * 4096);

    desc  = (struct virtq_desc  *)vq_area;
    avail = (struct virtq_avail *)(vq_area + sz_desc);
    used  = (struct virtq_used  *)(vq_area + sz_desc + sz_avail);

    uint64_t vq_phys = (uintptr_t)vq_area;
    mw32(vbase, R_Q_ALIGN, 4096);
    mw32(vbase, R_Q_PFN,   (uint32_t)(vq_phys >> 12));

    mw32(vbase, R_STATUS, st | S_DRIVER_OK);
}

static inline void set_flags(uint16_t f0,uint16_t f1,uint16_t f2){
    desc[0].flags = f0;
    desc[1].flags = f1;
    desc[2].flags = f2;
}

static struct virtio_blk_req req;

static void virtio_blk_read(uint64_t sector, void *dst)
{
    req.type = VBLK_T_IN;
    req.sector = sector;
    req.reserved = 0;
    status_byte = 0xFF;

    desc[0].addr = (uint64_t)&req;    desc[0].len = sizeof(req);    desc[0].next = 1;
    desc[1].addr = (uint64_t)dma_buf; desc[1].len = SECTOR_SIZE;    desc[1].next = 2;
    desc[2].addr = (uint64_t)&status_byte; desc[2].len  = 1;

    set_flags(F_NEXT, F_NEXT | F_WRITE, F_WRITE);

    avail->ring[aidx % Q] = 0;
    __sync_synchronize();
    avail->idx = ++aidx;

    mw32(vbase, R_Q_NOTIFY, 0);

    while(status_byte == 0xFF)
        __sync_synchronize();

    memcpy(dst, dma_buf, SECTOR_SIZE);
}

void read_block(uint32_t blk, void *dst)
{
    virtio_blk_read(blk, dst);
}

// ───────────────────────────────────────────────────────────────────────
// ファイルシステム部
// ────────────────────────────────────────────────────────────────────────

static struct superblock sb;
static uint8_t        block_buf[BSIZE];

void read_superblock(void) {
    read_block(1, block_buf);
    memcpy(&sb, block_buf, sizeof(sb));
}

void read_inode(uint32_t inum, struct dinode *dest) {
    if (inum < 1 || inum > sb.ninodes) {
        memset(dest, 0, sizeof(*dest));
        return;
    }

    // 1 ブロックあたりのイノード数
    uint32_t inodes_per_blk = BSIZE / sizeof(struct dinode);
    // on-disk のブロック番号
    uint32_t blkno = sb.inodestart + ( (inum - 1) / inodes_per_blk );
    // write_inode で書き込んだオフセットと同じ計算式に揃える
    uint32_t offset = ((inum - 1) % inodes_per_blk) * sizeof(struct dinode);

    read_block(blkno, block_buf);
    struct dinode *dip = (struct dinode *)(block_buf + offset);
    *dest = *dip;
}

static uint32_t inode_blockno(struct dinode *ip, uint32_t idx) {
    if (idx < NDIRECT) {
        // 直接ブロック
        return ip->addrs[idx];
    } else if (idx < NDIRECT + NINDIRECT) {
        // １次インデクス
        uint32_t indirect_blk = ip->addrs[NDIRECT];
        if (indirect_blk == 0) return 0;
        read_block(indirect_blk, block_buf);
        uint32_t *entries = (uint32_t *)block_buf;
        return entries[idx - NDIRECT];
    } else {
        // ２次インデクス
        idx -= (NDIRECT + NINDIRECT);
        uint32_t dbl_index0 = idx / NINDIRECT;    // ２次の一段目
        uint32_t dbl_index1 = idx % NINDIRECT;    // ２次の二段目

        uint32_t dindirect_blk = ip->addrs[NDIRECT + 1];
        if (dindirect_blk == 0) return 0;
        // まず一段目のインデクスブロックを読む
        read_block(dindirect_blk, block_buf);
        uint32_t *first_entries = (uint32_t *)block_buf;
        uint32_t first_blk = first_entries[dbl_index0];
        if (first_blk == 0) return 0;

        // 次に、その first_blk が指す二段目のブロックを読む
        read_block(first_blk, block_buf);
        uint32_t *second_entries = (uint32_t *)block_buf;
        return second_entries[dbl_index1];
    }
}

void read_data(struct dinode *ip, uint32_t offset, uint8_t *buf, uint32_t size) {
    uint32_t left = size;
    uint32_t off  = offset;
    uint8_t *dst  = buf;

    while (left > 0) {
        uint32_t blk_idx = off / BSIZE;
        uint32_t blk_off = off % BSIZE;
        uint32_t to_read = BSIZE - blk_off;
        if (to_read > left) to_read = left;

        uint32_t disk_blk = inode_blockno(ip, blk_idx);
        if (disk_blk == 0) {
            memset(dst, 0, to_read);
        } else {
            read_block(disk_blk, block_buf);
            memcpy(dst, block_buf + blk_off, to_read);
        }
        left -= to_read;
        off  += to_read;
        dst  += to_read;
    }
}

uint32_t dir_lookup(struct dinode *parent, const char *name) {
    uint32_t off = 0;
    char namebuf[DIRSIZ+1];

    while (off < parent->size) {
        read_data(parent, off, block_buf, BSIZE);
        struct dirent *de = (struct dirent *)block_buf;
        int entries = BSIZE / sizeof(struct dirent);
        for (int i = 0; i < entries; i++) {
            if (de[i].inum == 0) continue;
            memcpy(namebuf, de[i].name, DIRSIZ);
            namebuf[DIRSIZ] = '\0';
            if (strncmp(namebuf, name, DIRSIZ) == 0) {
                return de[i].inum;
            }
        }
        off += BSIZE;
    }
    return 0;
}

uint32_t path_lookup(const char *path) {
    if (path[0] != '/') return 0;
    if (strcmp(path, "/") == 0) {
        return ROOTINO;
    }

    struct dinode ipr;
    read_inode(ROOTINO, &ipr);
    if (ipr.type != T_DIR) return 0;

    char copy[strlen(path)+1];
    strncpy(copy, path, strlen(path)+1);
    char *token = strtok(copy, "/");
    uint32_t current_inum = ROOTINO;

    while (token != NULL) {
        if (ipr.type != T_DIR) return 0;
        uint32_t next_inum = dir_lookup(&ipr, token);
        if (next_inum == 0) return 0;
        read_inode(next_inum, &ipr);
        current_inum = next_inum;
        token = strtok(NULL, "/");
    }
    return current_inum;
}

void dump_inode(uint32_t inum) {
    struct dinode ip;
    read_inode(inum, &ip);
    printf("== i-node %u ==\n", inum);
    printf("  type  = %u\n", ip.type);
    printf("  size  = %u\n", ip.size);
    printf("  addrs =");
    for (int i = 0; i < NDIRECT; i++) {
        if (ip.addrs[i] != 0) printf(" %u", ip.addrs[i]);
    }
    if (ip.addrs[NDIRECT] != 0) {
        printf(" [indirect %u]", ip.addrs[NDIRECT]);
    }
    if (ip.addrs[NDIRECT+1] != 0) {
        printf(" [double-indirect %u]", ip.addrs[NDIRECT+1]);
    }
    printf("\n");
}

// fs_api.c
// シンプルな fs_open/fs_read インタフェース実装

#define FD_OFFSET 3


typedef int32_t ssize_t;


void *common_kalloc(size_t size);

// ── pipealloc ──────────────────────────────────────────────────────────
// パイプ構造体を確保・初期化して返す
void append_mapping_values(void* user_va, void* pa, size_t size);

struct spipe* pipealloc(void)
{
    struct spipe *p = (struct spipe*)common_kalloc(sizeof(struct spipe));
    if (p == 0)
        return 0;
    p->nread     = 0;
    p->nwrite    = 0;
    p->read_open  = 1;
    p->write_open = 1;
    
    void* user_va = p;
    void* pa = p;
    
    append_mapping_values(user_va, pa, sizeof(struct spipe));
    
    return p;
}

struct file* fs_init()
{
    struct file* file_table = (struct file*)common_kalloc(sizeof(struct file)*MAX_OPEN_FILES);
    
    file_table[0].kind = FK_STDIN;
    file_table[0].used = 1;
    
    file_table[1].kind = FK_STDOUT;
    file_table[1].used = 1;
    
    file_table[2].kind = FK_STDERR;
    file_table[2].used = 1;
    
    return file_table;
}

int is_pipe(int fd)
{
    struct file* file_table = get_current_file_table();
    
    if (file_table[fd].used) {
        if(file_table[fd].pipe) {
            return 1;
        }
    }
    
    return 0;
}

int is_stdin(int fd)
{
    struct file* file_table = get_current_file_table();
    if (file_table[fd].used) {
        if(file_table[fd].kind == FK_STDIN) {
            return 1;
        }
    }
    
    return 0;
}

int is_stdout(int fd)
{
    struct file* file_table = get_current_file_table();
    
    if (file_table[fd].used) {
        if(file_table[fd].kind == FK_STDOUT) {
            return 1;
        }
    }
    
    return 0;
}

void pipe_open(int* fd1, int* fd2) {
    struct file* file_table = get_current_file_table();
    
    struct spipe* pip = pipealloc();
    
    for (int i = 3; i < MAX_OPEN_FILES; i++) {
        if (!file_table[i].used) {
            file_table[i].kind = FK_PIPE;
            file_table[i].used  = 1;
            file_table[i].inum  = -1;
            //memset(&file_table[i].din, 0, sizeof(struct dinode));
            file_table[i].off   = 0;
            file_table[i].pipe = pip;
            *fd1 = i;
            break;
        }
    }
    for (int i = 3; i < MAX_OPEN_FILES; i++) {
        if (!file_table[i].used) {
            file_table[i].kind = FK_PIPE;
            file_table[i].used  = 1;
            file_table[i].inum  = -1;
            //memset(&file_table[i].din, 0, sizeof(struct dinode));
            file_table[i].off   = 0;
            file_table[i].pipe = pip;
            *fd2 = i;  // <- 3,4,5… を返す
            break;
        }
    }
}

// ── piperead ────────────────────────────────────────────────────────────
// パイプから最大 n バイト読み込む。EOF:0, エラー:-1
void panic(char* str);

int piperead(int fd, char *addr, int n)
{
    struct file* file_table = get_current_file_table();
    
    if(fd < 0 || fd >= MAX_OPEN_FILES) {
        panic("pipewrite");
    }
    struct spipe* p = file_table[fd].pipe;
    
    if(p == NULL) {
        panic("pipewrite");
    }
    int i;
  
/*
    // データが来るまで待機
    while (p->nread == p->nwrite && p->write_open) {
        timer_handler();
    }
*/
/*
    // 書き側クローズかつバッファ空 → EOF
    if (p->nread == p->nwrite && !p->write_open) {
        return 0;
    }
*/
    // バッファからコピー
    for (i = 0; i < n && p->nread < p->nwrite; i++) {
        addr[i] = p->data[p->nread % PIPE_SIZE];
        p->nread++;
    }
//    timer_handler();
    return i;
}

// ── pipewrite ───────────────────────────────────────────────────────────
// パイプに n バイト書き込む。正常書き込み数、エラー:-1
int pipewrite(int fd, char *addr, int n)
{
    struct file* file_table = get_current_file_table();
    
    if(fd < 0 || fd >= MAX_OPEN_FILES) {
        panic("pipewrite");
    }
    struct spipe* p = file_table[fd].pipe;
    
    if(p == NULL) {
        panic("pipewrite");
    }
    
    int i;
  
    for (i = 0; i < n; i++) {
      // バッファ満杯なら読み側を待つ
/*
      while (p->nwrite - p->nread == PIPE_SIZE && p->read_open) {
          timer_handler();
      }
*/
/*
      // 読み側クローズ → SIGPIPE 相当
      if (!p->read_open) {
          return -1;
      }
*/
      p->data[p->nwrite % PIPE_SIZE] = addr[i];
      p->nwrite++;
      
      // 読み側を起こす
//      timer_handler();
    }
    return n;
}


// fs_open: パスから inode を開き、ファイル記述子を返す
// 成功: [0, MAX_OPEN_FILES) の fd, 失敗: -1
// 先頭に定義
#define MAX_OPEN_FILES 16
#define FD_OFFSET      3   // 返す FD は 3 からスタート
int fs_open(const char *path) {
    struct file* file_table = get_current_file_table();
    
    uint32_t inum = path_lookup(path);
    if (inum == 0) return -1;

    struct dinode di;
    read_inode(inum, &di);
    if (di.type != T_FILE && di.type != T_DIR) return -1;

    for (int i = 3; i < MAX_OPEN_FILES; i++) {
        if (!file_table[i].used) {
            file_table[i].kind = FK_FILE;
            file_table[i].used  = 1;
            file_table[i].inum  = inum;
            file_table[i].din   = di;
            file_table[i].off   = 0;
            return i;  // <- 3,4,5… を返す
        }
    }
    return -1;
}

// fs_read: fd から buf に count バイト読み込む
// 成功: 読み込んだバイト数 (0 は EOF), 失敗: -1
ssize_t fs_read(int fd, void *buf, size_t count) {
    struct file* file_table = get_current_file_table();
    
    int idx = fd;
    if (idx < 0 || idx >= MAX_OPEN_FILES || !file_table[idx].used)
        return -1;

    struct file *f = &file_table[idx];
    uint32_t remaining = f->din.size - f->off;
    if (remaining == 0) return 0;

    uint32_t to_read = (count < remaining) ? count : remaining;
    read_data(&f->din, f->off, buf, to_read);
    f->off += to_read;
    return to_read;
}

// fs_close: fd を閉じる
// 成功: 0, 失敗: -1
int fs_close(long fd) {
    struct file* file_table = get_current_file_table();
    
printf("fs_close %ld\n", fd);
    
    long idx = fd;
    if (idx < 0 || idx >= MAX_OPEN_FILES || !file_table[idx].used)
        return -1;
    file_table[idx].used--;
    if(file_table[idx].used <= 0) {
        file_table[idx].used = 0;
//        memset(&file_table[idx], 0, sizeof(struct file));
    }
    return 0;
}

struct file* fs_dup_table(struct file* orig)
{
    struct file* result = fs_init();
    
    for(int i=0; i<MAX_OPEN_FILES; i++) {
        result[i] = orig[i];
    }
    
    return result;
}

void fs_dup2(int oldfd, int newfd) {
    struct file* file_table = get_current_file_table();
    
    file_table[newfd] = file_table[oldfd];
    file_table[newfd].used++;
}

