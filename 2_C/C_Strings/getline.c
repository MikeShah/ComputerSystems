// Compile with:
// gcc -Wall -g getline.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h>

int main(int argc, char** argv){
    // You can also read in a line of text at a time
    char* line = NULL;
    // How many items can you hold.
    size_t bufferSize;
    printf("Type something and hit enter:");
    getline(&line,&bufferSize,stdin);
    printf("Here is what you wrote: %s",line);

    return 0;
}
