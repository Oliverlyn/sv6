#define __padout__  char __padout[0] __attribute__((aligned(CACHELINE)))
#define __mpalign__ __attribute__((aligned(CACHELINE)))
#define __noret__   __attribute__((noreturn))
#define barrier() __asm volatile("" ::: "memory")