// Compile with:
// gcc -Wall -g strchr.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){

    // String literal
    char* literal = "mike";

    // Search for a character within a string
    // - Returns a pointer to that character if
    //   it is found.
    if(strchr(literal,'m')){
        printf("Found an 'm'\n");
    }
    // Search for a string within a string
    // - Returns a pointer to the 
    //   string(haystack) from the substring
    //   (which is the needle).
    if(strstr(literal,"ke")){
        printf("Found \"ke\" substring in %s\n",literal);
    }

    return 0;
}
