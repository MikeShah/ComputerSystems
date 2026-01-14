// Compile with:
// gcc -Wall -g get.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h>

int main(int argc, char** argv){

    // Somewhere to store a character
    char placeholder;
    // Read in one character from the user
    placeholder = getchar();
    printf("You pressed: %c\n",placeholder);

    return 0;
}
