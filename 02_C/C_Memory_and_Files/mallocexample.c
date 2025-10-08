#include <stdio.h>
#include <stdlib.h> // includes malloc/free


int main(){

    int sizeOfArray = 0;
    printf("How many elements would you like in your array?");
    scanf("%d",&sizeOfArray);

    // Create our array at run-time.
    // We are allocating this array in heap memory.
    // Heap memory 'persists' until we 'free' the memory.
    //
    // Note we do not know the 'sizeOfArray' until
    // we read the user input. This is useful, because
    // we may not know the size of a dataset for examlple.
    int* myArray = (int*)malloc(sizeof(int)*sizeOfArray);

    // Initialize our array items, for now a simple loop.
    int i=0;
    for(i=0; i < sizeOfArray; ++i){
        // Access each element in array as we
        // have previously done.
        myArray[i] = i;
        printf("myArray[%d]=%d\n",i,myArray[i]);
    }

    // The free function reclaims any memory we have
    // allocated on the heap.
    free(myArray);

    return 0;
}


