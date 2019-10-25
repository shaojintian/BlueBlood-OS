//struct 
struct buf;
struct context;
struct file;
struct inode;
struct pipe;
struct proc;
struct spinlock;
struct stat;
struct superblock;

/** display all APIs related  to memory and don't need consider functions order in .c **/

//bio.c
void			binit(void);
struct 	buf*	bread(uint,uint);
void 			brelse(struct buf*);
void 			bwrite(Struct buf*);

//console.c
void 			console_init(void);
void 			cprint(char* , ...);
void			console_intr(int(*)(void));
void			panic(char*) __attribute__((noreturn));


//exec.c
int 			exec(char* ,char **);

//file.c
struct file*    file_alloc(void);
void			file_close(struct file*);
struct file*	file_dup(struct file*);
void 			file_init(void);
int 			file_read(struct file*,char*,int n);
int 			file_stat(struct file*,struct stat*);
int 			file_write(struct file*,char*,int n);

//fs.c(file system)
void 			read_sb();
int 			dir_link(struct inode*,char* ,uint);
struct inode*	dir_lookup(struct inode*,chr*,uint);
struct inode*   ialloc(uint,short);
struct inode*   idup(struct inode*);
void 			iinit(void);
void			ilock(struct inode*);
void			iput(struct inode*);
void 			iunlock(struct inode*);
void 			iunlockput(struct inode*);
void 			iupdate(struct inode*);
int 			namecmp(const char*,const char*);
struct inode*	namei(char*);
struct inode*   nameiparent(char*,char*);
int 			readi(struct inode*,char*,uint,uint);
void			stati(struct inode*,struct stat*);
int 			writei(struct inode*,char*,uint,uint);

//ide.c
void 			ideinit(void);
void			ideintr(void);
void			iderw(struct buf*);

//ioapic.c
void 			ioapic_enable(int irq,int cpu);
extern uchar	ioapicid;
void			ioapicinit(void);

//kalloc.c
char* 			kalloc(void);
void			kfree(char*);
void			kinit1(void*,void*);
void			kinit2(void*,void*);

//kbd.c
void 			kbdintr(void);

//lapic.c  		
int 			cpu_num(void);
extern volatile uint*	lapic;
void			lapic_eoi(void);
void			lapic_init(void);
void			lapic_start_ap(uchar,uint);
void			micro_delay(int);

//log.c
void			init_log(void);
void			log_write(struct buf*);
void			begin_trans();
void			commit_trans();

//mp.c
extern int 		ismp;
int 			mpb_cpu(void);
void			mp_init(void);
void			mp_start_them(void);

//picirq.c
void			pic_enable(int);
void			pic_init(void);

//pipe.c
int 			pipe_alloc(struct file**,struct file**);
void			pipe_close(struct pipe*,int);
int 			pipe_read(struct pipe*,char*,int);
int 			pipe_write(struct pipe*,char*,int);


//proc.c
struct proc*    copy_proc(struct proc*);
void   			exit(void);
int 			fork(void);




























































































