// @getparentprocessid.c
// gcc -g -Wall -Wextra getparentprocessid.c -o prog
#include <stdio.h>
#include <unistd.h> // getpid and getppid

int main(){

	printf("What is my process id(pid)? %d\n", getpid());
	printf("Who is my parent (ppid)? %d\n", getppid());

	return 0;
}
