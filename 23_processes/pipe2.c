// @pipe2.c
// gcc -g -Wall -Wextra pipe2.c -o prog
// Example showing how to 'write' data from child to parent
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
		int     fd[2];
		pid_t   childpid;

		pipe(fd);

		// Catch errors
		if((childpid = fork()) == -1){
				perror("fork");
				exit(1);
		}

		if(childpid == 0){
				sleep(2); // Artificial delay to show that 'read' call in parent
									// is blocking.
				/* Child process closes up input side of pipe */
				close(fd[0]);
				write(fd[1],"Hello from child!\n",18);
				close(fd[1]); // closing write end, sends 'EOF' so I am done
											// This also 'unblocks' a read
				exit(0); // Terminate child
		}
		else{
				/* Parent process closes up output side of pipe */
				close(fd[1]);
				char readbuffer[80];
				int nbytes = read(fd[0], readbuffer, sizeof(readbuffer));
				printf("Got %d bytes from child: %s\n",nbytes, readbuffer);
		}

		return 0;
}
