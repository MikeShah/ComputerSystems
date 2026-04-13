// Demonstrates how to retrieve the return value from a thread
// Compile with:
// gcc thread_parameters2.c -o prog -lpthread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

typedef struct info{
  int value1;
  int value2;
}info;

void *thread_info(void *vargp){
  info* arg = (info*)vargp; 
  // Make sure to cast argument to the correct type
  printf("Thread reporting with argument: %d\n",arg->value1);
  printf("Thread reporting with argument: %d\n",arg->value2);
  return NULL;
}

int main(){
  // Store our Pthread ID
  pthread_t tid;

  // We need to 'malloc' the arguments that we pass
  // and store them in the heap for a 'struct' to pass
  // multiple arguments.
  info* thread_args = (info*)malloc(sizeof(info));
  thread_args->value1 = 55;
  thread_args->value2 = 56;

  pthread_create(&tid, NULL, thread_info, (void*)thread_args);
  // main thread waits on thread to finish
  pthread_join(tid, NULL);
  free(thread_args); // eventually free malloc'd memory
                     // Careful -- only do this after thread is done!
  // end program
  printf("Main thread returns: %ld\n",pthread_self());
  return 0;
}
