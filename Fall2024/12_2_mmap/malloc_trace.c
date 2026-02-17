// @file: malloc_trace.c
// gcc -g -Wall malloc_trace.c -o prog
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <mcheck.h>

int main(){

		mtrace(); // Start tracing memory
		int* alloc= malloc(5000000);		

		for(int i=0; i< 500; i++){
				int* allocate = malloc(50000);		
				allocate[0] = 5;
				free(allocate);
		}

	free(alloc);
	
	muntrace();	// Start untracing memory

	malloc_stats();
	return 0;
}


