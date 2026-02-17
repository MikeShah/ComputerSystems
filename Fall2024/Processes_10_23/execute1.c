// @execute1.c
// gcc -g -Wall -Wextra execute1.c -o prog
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

		char* myargv[16];
		myargv[0]="/bin/ls"; // Try changing this to "ls" Will the program work?
												 // Note: There are many versions of exec that will look in
												 //	      environment variable paths. See execvpe for example.
		myargv[1]="-F";
		myargv[2]=NULL; // Terminate the argument list

		// Replace our current process
		execve(myargv[0],myargv,NULL);

		printf("This will never print\n");

		return 0;
}
