// @file: malloc_stats.c
// gcc -g -Wall malloc_stats.c -o prog
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

int main(){

		int* alloc= malloc(5000000);		

		for(int i=0; i< 500; i++){
				int* allocate = malloc(50000);		
				allocate[0] = 5;
				free(allocate);
		}

	free(alloc);
	
	malloc_stats();
	return 0;
}


