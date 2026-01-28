// @file: stack_size.c
// Programmatic way to access the system call using
// a C wrapper for otherwise returning the operating
// systems stack size for a process on linux.
//
// Compile and run:
// gcc stack_size.c -o prog && ./prog
#include <stdio.h>

#include <sys/resource.h>

int main(){

  /* struct rlimit{
      rlim_t rlim_cur; // Soft limit (unpriveleged processes)
      rlim_t rlim_max; // Hard limit (ceiling for soft limit)
    };
  */

  // First parameter is a 'resource' which is defined as
  // an 'enum'.
  // e.g. RLIMIT_AS, RLIMIT_CORE, RLIMIT_CPU, etc.
  // Today we care about RLIMIT_STACK
  struct rlimit stack_size;
  getrlimit(RLIMIT_STACK, &stack_size);

  printf("Bytes\n");
  printf("Stack current(b)  : %ld\n",stack_size.rlim_cur);
  printf("Stack maximum(b)  : %ld\n",stack_size.rlim_cur);

  printf("\nKilobytes (KiB) or (kB)\n");
  printf("Stack current(KiB): %ld\n",stack_size.rlim_cur/1024);
  printf("Stack maximum(KiB): %ld\n",stack_size.rlim_cur/1024);

  printf("\nMegabytes (MB)\n");
  printf("Stack current(MB) : %ld\n",stack_size.rlim_cur/1024/1024);
  printf("Stack maximum(MB) : %ld\n",stack_size.rlim_cur/1024/1024);

  

  return 0;
}
