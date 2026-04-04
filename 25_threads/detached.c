// Compile with:
// gcc detached.c -o prog -lpthread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h> // for sleep

// Thread with variable arguments
void *thread(void *vargp){
        printf("Hello from thread\n");
        return NULL;
}

int main(){
        // Store our Pthread ID
        pthread_t tid;
        // Create and execute the thread
        pthread_create(&tid, NULL, thread, NULL);
        // Don't wait for thread, just let it execute without any blocking
        // Note: Once we 'detach' a thread, we cannot 'join' it again.
        pthread_detach(tid);
        // Put main thread to sleep for long enough so that 'thread' can
        // execute for a bit and finish.
        // If we did not 'sleep' our main thread, then likel the 'return'
        // call would exeucte in our main() faster than the time the 'thread'
        // could be spawned, and then all of our threads would be reaped by the
        // OS.
        sleep(1);
        // Execute our main
        printf("In main()\n");
        // end program
        return 0;
}
