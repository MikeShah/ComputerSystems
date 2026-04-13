// @file: clang_vectorize.
// clang -O3 -Rpass-missed=loop-vectorize -Rpass=loop-vectorize -Rpass-analysis=loop-vectorize clang_vectorize.c -o prog
#include <stdio.h>

void doWork(int length){
  #pragma clang loop vectorize(enable)
  for(size_t i=0; i < length; ++i){
    printf("i is: %zu\n",i);
  }
}

int main(){
  int val=5;
  doWork(5);
  return 0;
}
