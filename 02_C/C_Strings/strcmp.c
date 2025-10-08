// Compile with:
// gcc -Wall -g strcmp.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){

    // String literal
    char* literal = "mike";
    // String Array
    char cstr[] = "MIKE";

    // strcmp compares every character and checks
    // if they are the same.
    // The case(upper or lower) matters
    if(0==strcmp(cstr,literal)){
        printf("All of our characters match\n");
    }else{
        printf("At least 1 character is differnt\n");
    }

    return 0;
}
