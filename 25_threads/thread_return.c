// Demonstrates how to retrieve the return value from a thread
// Compile with:
// gcc thread_return.c -o prog -lpthread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Thread with variable arguments
void *thread(void *vargp){
  sleep(1);
  printf("Hello from thread %ld\n", pthread_self());
  // Dynamic memory allocation is needed to 'return' value
  // from thread, and we recover that value in pthread_join.
  int* return_value = (int*)malloc(sizeof(int));;
  *return_value=42;
  return (void*)return_value;
}

int main(){
  // Store our Pthread ID
  pthread_t tid;
  printf("Main thread id: %ld\n",pthread_self());
  // Create and execute threads
  pthread_create(&tid, NULL, thread, NULL);

  // main thread waits on thread to finish
  int* result_of_thread;
  pthread_join(tid, (void**) &result_of_thread);
  printf("result of thread   : %d\n",*result_of_thread);
  // Little bit strange, but we do have to eventually 'free' our memory.
  free(result_of_thread);

  printf("Main thread returns: %ld\n",pthread_self());

  // end program
  return 0;
}
