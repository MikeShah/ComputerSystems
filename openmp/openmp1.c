// @file: openmp1.c
// gcc -std=c99 -fopenmp openmp1.c -o prog
#include <omp.h> // new header!
#include <stdio.h>

int main(){
  int threads;
  int id;

  #pragma omp parallel
  {
    threads = omp_get_num_threads();
    id = omp_get_thread_num();
    printf("Hello from thread %d of %d\n",id,threads);
  }
}
