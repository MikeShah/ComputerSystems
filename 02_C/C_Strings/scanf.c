// Compile with:
// gcc -Wall -g scanf.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h>

int main(int argc, char** argv){
    printf("Please enter an integer:\n");
    
    int input;
    // scanf is a way to read in formatted data    
    // We select the format of the data with
    // a format specifier.
    // Then we specify where in memory (with the &)
    // we are going to store the data.
    scanf("%d",&input);
    
    printf("You typed in: %d\n",input);

    return 0;
}
