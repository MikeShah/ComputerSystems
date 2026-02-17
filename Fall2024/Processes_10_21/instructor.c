// @instructor.c
// gcc -g -Wall -Wextra instructor.c -o prog
#include <stdio.h>
#include <unistd.h> // getpid and getppid

int main(){

	pid_t cpsc_instructor;

	cpsc_instructor = fork(); // Copy the CPSC instructor
	if(0==cpsc_instructor){
		printf("Mike process in second-half of semester\n");
		return 0;
	}
	
	printf("Jay process continues on!\n");
	printf("psst, go take his compilers and tools class!\n");

	return 0;
}
