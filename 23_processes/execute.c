// @execute.c
// gcc -g -Wall -Wextra execute.c -o prog
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

	char* myargv[16];
	myargv[0]="/bin/ls"; // Try changing this to "ls" Will the program work?
			     						 // Note: There are many versions of exec that will look in
			    				 		 //	      environment variable paths. See execvpe for example.
	myargv[1]="-F";
	myargv[2]=NULL; // Terminate the argument list
	
	// Create a new child process
	if(0==fork()){
		// Executes command from child then terminates our process
		execve(myargv[0],myargv,NULL);
		printf("Child: Should never get here\n");
		exit(1);
	}else {
		// This call makes the parent wait on its children.
		// 'waitpid' is another function of interest.
		wait(NULL); 	
	}

	printf("Finally, print from the parent\n");
	
	return 0;
}
