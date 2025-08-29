// Compile with:
// gcc -Wall -g stringcopy.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){

    // String we want to copy (the source--src)
    char* originalString = "original";
    // Where we will store(destination)
    char dest[9];
    // Perform the string copy
    // - Note that the 'originalString' will
    //   be copied until a NULL character is found
    // - Note the 'dest' must be big enough to
    //   to hold the copied string, so at least
    //   9 characters in this case 
    //   (8 characters +1 null terminator)
    strcpy(dest,originalString);
    // Print out our result
    printf("dest stores: %s\n",dest);


    return 0;
}
