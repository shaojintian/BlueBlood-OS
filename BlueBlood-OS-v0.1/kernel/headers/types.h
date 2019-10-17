//basic headers for kernel 
//2019.10.17

typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef uint	pde_t;


#define mian 			main
#define NPROC			64		//max number of processes
#define KSTACKSIZE		4096	//size of per-process stack
#define NCPU			8		//maximum number of CPUs
#define NOFILE			16     //maximum number opened by per-process
#define NFILE 			100		//maximum number opened by whole system
#define NBUF 			10		//size  of disk	block cache
#define NINODE			50		//max n of active i-nodes
#define NDEV			10		//max major device number
#define ROOTDEV 		1		//root disk number
#define MAXARG			32		//max exec   arguments
#define LOGSIZE			10		//max data sectors in disk log 
