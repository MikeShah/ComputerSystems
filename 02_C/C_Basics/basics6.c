// ===========================
// compile on the command line with
// gcc basics6.c -o basics6
// ===========================
#include <stdio.h>

// Declare a function called 'square'
// We have to declare it before we use it.
// It takes in one parameter, we have called 'parameter'
// It returns an 'int' value.
int square(int parameter){
    return parameter*parameter;
}

int main(){

    // Here we print the result
    printf("square(5) = %d\n",square(5));    
    // Another way we might separate out our code is as follows:
    int myResult = square(4);
    printf("square(4) = %d\n", myResult);

    return 0;
}
