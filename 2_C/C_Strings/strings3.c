// Compile code:
// gcc -Wall -g strings3.c -o prog
// Run Code:
// ./prog

#include <stdio.h> // I/O functions

int main(){

    // Creates a c-array
    // - automatically figurs out the size
    // - automatically adds the 'null terminator'
    char name[] = {'M','i','k','e','\0'};
    
    // Print the size of a data type in 'bytes'
    // 1 char is 1 byte, so 5 bytes means we
    // have 5 characters (4+1 for the null terminator
    printf("sizeof(name) = %lu\n",sizeof(name));
    // Print out the string again
    printf("name = %s\n",name);

    return 0;
}



