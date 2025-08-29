#include <stdio.h>
#include <stdlib.h>

// This function allocates a dynamically sized array
// on the heap. 
// We return a pointer to the array, so we can 'access'
// or keep track of the starting address of the array
// after the function call.
int* allocateOnHeap(size_t size){
    // Allocate our array
    int* memory = (int*)malloc(sizeof(int)*size);
    // Return a pointer to our memory
    return memory;
}

int main(){

    // Call our function to allocate memory.
    // Our function returns a pointer, and that
    // pointer points to the first address in the array.
    // Note we also want to keep track of the 'sizeOfArray'
    // that we have allocated, so we know the 'bounds' of the array. 
    int sizeOfArray = 100;
    int* mymemorypointer = allocateOnHeap(sizeOfArray);
    
    // Set some values
    mymemorypointer[0] = 1;
    mymemorypointer[sizeOfArray-1] = sizeOfArray-1;

    // Free our pointer when we are done with it
    free(mymemorypointer);

    return 0;
}
