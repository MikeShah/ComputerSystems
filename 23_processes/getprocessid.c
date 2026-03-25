// @getprocessid.c
// gcc -g -Wall -Wextra getprocessid.c -o prog
#include <stdio.h>
#include <unistd.h> // getpid and getppid

int main(){

	printf("What is my process id(pid)? %d\n", getpid());

	return 0;
}
