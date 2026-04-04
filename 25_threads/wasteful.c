// Compile with:
//
// gcc wasteful.c -o prog -lpthread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHREADS 4

int work = 0;
int iterations=20;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

// Producer thread 
void *producer(void *vargp){
        for(;;){
          pthread_mutex_lock(&mutex1);
              if(iterations>0){
                  iterations--;
              }else{
                pthread_mutex_unlock(&mutex1);
                break;
              }
              work++;
              printf("Producer: tid  %d  work=%d  iterations=%d\n",pthread_self(),work,iterations);    
          pthread_mutex_unlock(&mutex1);
        }
        return NULL;
}
// Consumer thread 
void *consumer(void *vargp){
        for(;;){
        pthread_mutex_lock(&mutex1);
            if(iterations<=0 && work<=0){
              pthread_mutex_unlock(&mutex1);
              break;
            }
            while(work>0){
              work--;
              printf("Consumer: tid: %d  work=%d  iterations=%d\n",pthread_self(),work,iterations);    
            }
        pthread_mutex_unlock(&mutex1);
        }
        return NULL;
}

int main(){
        // Store our Pthread ID
        pthread_t tids[NTHREADS+1];
        // Create one consumer threads 
        pthread_create(&tids[NTHREADS], NULL, consumer, NULL);
        // Create and execute multiple producer threads 
        for(int i=0; i < NTHREADS; i++){
                pthread_create(&tids[i], NULL, producer, NULL);
        }

        // Join all of the threads
        for(int i=0; i < NTHREADS+1; ++i){
                pthread_join(tids[i], NULL);
        }

        // end program
        return 0;
}
