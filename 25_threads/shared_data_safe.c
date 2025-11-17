// In this example we do not need any locks
// because each of our threads are going to
// operate on a separate piece of the array,
// thus there is no potential for a data race.
//
// Compile with:
// gcc shared_data_safe.c -o shared_data_safe -lpthread
//
//
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// This is a
#define NTHREADS 10

// Globally shared data
int shared_data[NTHREADS];

// Thread with variable arguments
void* thread(void* vargp){
    int index = *((int*)vargp);
    // Increment our shared data 
    shared_data[index] += 1;

    return NULL;
}

int main(){
        
    // Initialize our data to the same
    // value sequentially.
    for(int i=0; i < NTHREADS; i++){
        shared_data[i] = 27;
    }
     
    // Store our Pthread ID
    pthread_t tid[NTHREADS];

    // We need to create a unique piece of memory to also store
    // the 'task id' or the index at which each thread is going to
    // execute.
    // Again, remember that memory is shared, so we have to be very
    // careful to reference a different piece of memory for each
    // 'id' or 'index' (commonly abbreviated 'idx') in our program.
    //
    // See more examples: 
    // https://computing.llnl.gov/tutorials/pthreads/#PassingArguments
    int idx[NTHREADS];
    // Create and execute the thread
    for(int i=0; i < NTHREADS; i++){
        idx[i] = i;
        // Notice that we are passing in a unique index as
        // an argument with idx[i]. So each thread that is
        // created has value (from 0 to NTHREADS-1) to
        // work on a different piece of the shared_data.
        //
        // We are going to use this index
        // into a unique location into our shared_data
        pthread_create(&tid[i], NULL, thread, (void*)&idx[i]);
    }

    for(int i=0; i < NTHREADS; i++){
    // Wait in 'main' thread until thread executes
        pthread_join(tid[i],NULL);
    }
        
    // Print out our data and verify that all the 
    // values have incremented exactly by 1.
    // We'll know if this is working if we do not
    // have any data races.
    for(int i=0; i < NTHREADS; i++){
        printf("shared_data[%d] = %d\n",i,shared_data[i]);
    }

    // end program
    return 0;
}




