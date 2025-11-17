// Compile with:
//
// clang -lpthread thread3.c -o thread3
//
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 10000

int counter = 0;

// Thread with variable arguments
void *thread(void *vargp){
        counter = counter +1;
        return NULL;
}

int main(){
        // Store our Pthread ID
        pthread_t tids[NTHREADS];
        printf("Counter starts at: %d\n",counter);
        // Create and execute multiple threads
        for(int i=0; i < NTHREADS; ++i){
                pthread_create(&tids[i], NULL, thread, NULL);
        }
        // Create and execute multiple threads
        for(int i=0; i < NTHREADS; ++i){
                pthread_join(tids[i], NULL);
        }

        printf("Final Counter value: %d\n",counter);
        // end program
        return 0;
}