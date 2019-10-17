//memory layout
//2019.10.17

#define EXTMEM		0x100000			//start of extended memory
#define PHYSTOP		0xE000000			//Top physical memory
#define DEVSPACE	0xFE000000			//devices which are at high addresses

//Key addresses for address space layout (see kmap in virtualmem.c)
#define KERNBASE	0x80000000			//1st kernel virtual address
#define KERNLINK	(KERNBASE+EXTMEM)	//linked memory

#ifndef __ASSEMBLER__

//virtual(all types pointers) to physical (uint)
static inline uint v2p(void *a){return (uint)a - KERNBASE ;}
//physical to virtual
static inline void *p2v(uint a){return (void *)(a + KERNBASE);}

#endif

#define V2P(a)  ((uint)a - KERNBASE)
#define P2V(a)  ((void *)(a + KERNBASE))

#define V2P_WO(x) (x - KERNBASE)    //same but no force type change 
#define P2V_WO(x) (x + KERNBASE)




































