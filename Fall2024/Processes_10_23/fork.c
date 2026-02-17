// gcc fork.c -o prog 
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

		printf("Level 0:\n");    
    fork(); // fork() duplicates this currently running process
		printf("Level 1:\n");    
    fork(); // fork() duplicates this currently running process
		printf("Level 2:\n");    

    return 0;
}
