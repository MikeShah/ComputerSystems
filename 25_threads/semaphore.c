//
// gcc -lpthread semaphore.c -o semaphore
//
// Barrier Synchronization example
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h> // new library!

#define NTHREADS 9

sem_t barrier;

void *thread(void *vargp){
        // Barrier for threads to enter
        sem_wait(&barrier); // Wait and post are our lock/unlock equivalents
                printf("Hello from a thread\n");
                sleep(1); // Sleep is used to simulate some amount of work
        sem_post(&barrier);

        return NULL;
}

int main(){

        pthread_t tids[NTHREADS];
        // Initialize a barrier which allows 3 threads in
        sem_init(&barrier,0,3);
        // Create our threads
        int i;
        for(i =0; i < NTHREADS; ++i){
                pthread_create(&tids[i],NULL,thread,NULL);
        }
        // Join threads
        for(i =0; i < NTHREADS; ++i){
                pthread_join(tids[i],NULL);
        }
        // Destroy our semaphore
        sem_destroy(&barrier);


}
