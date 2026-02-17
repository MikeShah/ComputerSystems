//https://www.rozmichelle.com/pipes-forks-dups/
// pipe3.c
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int fds[2];                      // an array that will hold two file descriptors
  pipe(fds);                       // populates fds with two file descriptors
  pid_t pid = fork();              // create child process that is a clone of the parent
  
  if (pid == 0) {                  // if pid == 0, then this is the child process
    dup2(fds[0], STDIN_FILENO);    // fds[0] (the read end of pipe) donates its data to file descriptor 0
    close(fds[0]);                 // file descriptor no longer needed in child since stdin is a copy
    close(fds[1]);                 // file descriptor unused in child
    char *argv[] = {(char *)"sort", NULL};   // create argument vector
    if (execvp(argv[0], argv) < 0) exit(0);  // run sort command (exit if something went wrong)
  } 

  // if we reach here, we are in parent process
  close(fds[0]);                 // file descriptor unused in parent
  const char *words[] = {"pear", "peach", "apple"};
  // write input to the writable file descriptor so it can be read in from child:
  size_t numwords = sizeof(words)/sizeof(words[0]);
  for (size_t i = 0; i < numwords; i++) {
    dprintf(fds[1], "%s\n", words[i]); 
  }

  // send EOF so child can continue (child blocks until all input has been processed):
  close(fds[1]); 

  int status;
  pid_t wpid = waitpid(pid, &status, 0); // wait for child to finish before exiting
  return wpid == pid && WIFEXITED(status) ? WEXITSTATUS(status) : -1;
}
