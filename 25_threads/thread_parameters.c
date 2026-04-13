// Demonstrates how to retrieve the return value from a thread
// Compile with:
// gcc thread_parameters.c -o prog -lpthread
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *thread_string(void *vargp){
  // Make sure to cast argument to the correct type
  printf("Thread reporting with argument: %s\n",(char*)vargp);
  return NULL;
}

int main(){
  // Store our Pthread ID
  pthread_t tid;
  // Create thread with 'string literal'
  // Recall: 'string literal is in 'static memory', 
  //          so nothing fancy needed, and string literals have null 
  //          terminator
  pthread_create(&tid, NULL, thread_string, "hello from pthread_create");

  // main thread waits on thread to finish
  pthread_join(tid, NULL);

  // end program
  printf("Main thread returns: %ld\n",pthread_self());
  return 0;
}
