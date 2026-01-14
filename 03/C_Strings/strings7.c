// Compile code:
// gcc -Wall -g strings7.c -o prog
// Run Code:
// ./prog

#include <stdio.h> // I/O functions

int main(){
    
    // This creates a 'string-literal'
    // - cstring is a pointer to other characters.
    // - a null-terminator is automatically applied
    // - But, 'string-literals' cannot be changed.
    // - We can however, change where the 'pointer'
    //   points however.
    char* cstring1 = "mike";
    char* cstring2 = "shah";

    cstring1[0] = 'M'; // Should segfault here

    printf("cstring1: %s\n",cstring1);
    printf("cstring2: %s\n",cstring2);

    // Change what cstring2 'points' to
    // so that it points to the same
    // piece of memory.
    cstring2 = cstring1;
    printf("cstring1: %s\n",cstring1);
    printf("cstring2: %s\n",cstring2);
    
    return 0;
}



