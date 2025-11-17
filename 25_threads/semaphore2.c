// gcc -lpthread semaphore2.c -o semaphore2
// Signal example
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h> // new library!

sem_t sem;

void *threadA(void *vargp){
        printf("Hello from thread A\n");
        sem_post(&sem);
        return NULL;
}

void *threadB(void *vargp){
        sem_wait(&sem);
        printf("Hello from thread B\n");
        return NULL;
}

int main(){

        pthread_t tids[2];
        // Initialize a binary semaphore
        sem_init(&sem,0,1);
        // Create our threads
        pthread_create(&tids[0],NULL,threadA,NULL);
        pthread_create(&tids[1],NULL,threadB,NULL);
        // Join threads
        pthread_join(tids[0],NULL);
        pthread_join(tids[1],NULL);
        // Destroy our semaphore
        sem_destroy(&sem);
}