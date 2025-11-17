// Compile with:
//
// clang -lpthread thread4.c -o thread4
//
// This program fixes a problem with thread3.c
//
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 64

int counter = 0;
int uniqueID = 0;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex3 = PTHREAD_MUTEX_INITIALIZER;

// Thread with variable arguments
void *thread(void *vargp){
       
 
        pthread_mutex_lock(&mutex1);
            printf("Workid: %d\n",*(int*)vargp);    
            counter = counter +1;
        pthread_mutex_unlock(&mutex1);
        return NULL;
}

int main(){
        // Store our Pthread ID
        pthread_t tids[NTHREADS];
        printf("Counter starts at: %d\n",counter);
        // Create and execute multiple threads
        for(int i=0; i < NTHREADS; i++){
                uniqueID++;// = *(int*)vargp;
                int* id = malloc(sizeof(int));
                *id = i;
                pthread_create(&tids[i], NULL, thread, id);
        }

        // Create and execute multiple threads
        for(int i=0; i < NTHREADS; ++i){
                pthread_join(tids[i], NULL);
        }
        printf("Final Counter value: %d\n",counter);
        // end program
        return 0;
}
