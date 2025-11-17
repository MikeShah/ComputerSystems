// Compile with:
//
// clang -lpthread thread1.c -o thread1
//
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

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
        // Wait in 'main' thread until thread executes
        pthread_join(tid,NULL);
        // Execute our main
        printf("In main()\n");
        // end program
        return 0;
}