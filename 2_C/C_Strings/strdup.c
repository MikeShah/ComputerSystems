// Compile with:
// gcc -Wall -g strdup.c -o prog
//
// Run with:
// ./prog 
//
// Check for memory leaks with:
// valgrind ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){

    // Create a literal string
    char* literal = "Mike";
    // Create a pointer to null, this
    // is essentially an 'empty' string.
    char* empty = NULL;

    // Duplicate our literal string, and we
    // have new memory allocated in 'empty'
    // Note: In this example I am using the str'n'dup
    //       command which will allocate an extra byte
    //       to ensure that the 'null terminator' is appended
    //       to the end of the string.
    //       For a 'string-literal' the NULL terminator is
    //       added to the end, but I think this is a best
    //       practice to be safe!
    empty = strndup(literal,strlen(literal)+1);
    // Confirm the string is out
    printf("empty is now: %s\n",empty);

    // Memory has been allocated as a result
    // to the call of strdup.
    // So we must free the memory.
    free(empty);

    return 0;
}
