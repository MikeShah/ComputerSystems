// decay.c
#include <stdio.h>
#include <stdlib.h>

void addOne(int* array, int size){
  for(int i=0; i < size; ++i){
      array[i] += 1;
  }
}

void printArray(int* array, int size){
  for(int i=0; i < size; ++i){
    printf("elem: %d = %d\n",i,array[i]);
  }
  printf("---------\n");
}

int main(){

  int* ints1 = (int*)calloc(6,sizeof(int));
  int stackArray[] = {4,5,6} ;

  addOne(ints1, 6);

  // Compiler knows sizeof fixed-size array.
  // The 'number of elements' is the size in bytes, divided by the
  // number of elements.
  int sizeOfStackArray = sizeof(stackArray)/sizeof(int);
  addOne(stackArray, sizeOfStackArray);

  printArray(ints1,6);
  printArray(stackArray, sizeOfStackArray);

  return 0;
}
