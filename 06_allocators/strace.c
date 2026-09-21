// @file: strace.c
// gcc -g -Wall strace.c -o prog
// Run with: strace ./prog
//           You should see mmap and munmap for approximately the size of the 'alloc' at line 11
//           It may also be interesting to run 'ltrace ./prog'
#include <stdlib.h>
#include <stdio.h>

int main(){

		int* alloc= malloc(3456000);		
    alloc[0] = 1;
    printf("alloc at 0 is: %d\n",alloc[0]);

		for(int i=0; i< 5; i++){
				int* allocate = malloc(4095);		
        allocate[0] = i;
        printf("May need to 'touch' memory to force allocation\n");
				free(allocate);
		}

  	free(alloc);
	
	return 0;	
}


