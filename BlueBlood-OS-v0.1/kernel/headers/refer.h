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

/** display all related API to memory and don't need consider functions order in .c **/

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





















