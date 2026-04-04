// gcc forkExample.c -o forkExample
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    pid_t pid;
    int x =1;  // Create a variable for our fork
               // example.
    
    pid = fork(); // fork() duplicates this currently running process
                // at line '11'. 
                // So I'm duplicating, everything up to
                // this point for the new child 
                // process--including our variables 
                // or memory we've allocated
                // (i.e. x)    
    // Check if we are the child process
    // and remember, fork() created a duplicate
    // of our process, and will return '0' for the child.
    if(0==pid){
        x=x+1;
        printf("Executing child process: x=%d\n",x);
        // Terminate our process, by returning from main.
        return 0;
    }

    // Parent execution will continue here
    // because the 'pid' returned should not be 0
    // The pid will be our child process id.
    x=x-1;
    printf("Executing in parent process: x=%d\n",x);

    printf("Our child process was %d\n",pid);

    return 0;
}


