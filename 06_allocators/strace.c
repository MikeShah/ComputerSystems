// @file: strace.c
// gcc -g -Wall strace.c -o prog
#include <stdlib.h>
#include <stdio.h>

int main(){

		int* alloc= malloc(5000000);		

		for(int i=0; i< 500; i++){
				int* allocate = malloc(50000);		
				allocate[0] = 5;
				free(allocate);
		}

	free(alloc);
	
	return 0;	
}


