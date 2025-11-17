// Compile with:
//
// clang -lpthread thread2.c -o thread2
//
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 10

// Thread with variable arguments
void *thread(void *vargp){
        printf("Hello from thread %ld\n", pthread_self());
        return NULL;
}

int main(){
        // Store our Pthread ID
        pthread_t tids[NTHREADS];
        printf("Main thread id: %ld\n",pthread_self());
        // Create and execute multiple threads
        for(int i=0; i < NTHREADS; ++i){
                pthread_create(&tids[i], NULL, thread, NULL);
        }
        // Make main wait for each thread
        for(int i=0; i < NTHREADS; ++i){
                pthread_join(tids[i], NULL);
        }

        printf("Main thread returns: %ld\n",pthread_self());
        // end program
        return 0;
}
