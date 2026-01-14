// Compile code:
// gcc -Wall -g strings5.c -o prog
// Run Code:
// ./prog

#include <stdio.h> // I/O functions

// #define will simply replace 'BUFFER_SIZE'
// with the value '20' anywhere in our code.
#define BUFFER_SIZE 20 

int main(){

    // Creates a c-array
    // - automatically figurs out the size
    // - automatically adds the 'null terminator'
    char buffer[BUFFER_SIZE];
    
    // Program runs in an infinite loop
    // (1 is always evaluated as 'true')
    printf("Press Ctrl+C to terminate\n\n");
    while(1){
        printf("What is your name?");
        scanf("%19s",buffer);
        printf("\tHello %s\n",buffer); 
    }

    return 0;
}



