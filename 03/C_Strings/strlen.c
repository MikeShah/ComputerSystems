// Compile with:
// gcc -Wall -g strlen.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){

    // String literal
    char* literal = "literal-string";
    // String Array
    char cstr[] = "hello";
    // Dynamically allocated string
    char* hi = (char*)malloc(sizeof(char)*3);
    hi[0] = 'h';
    hi[1] = 'i';
    hi[2] = '\0';

    // strlen will read each of the strings character
    // by character until it finds the null-terminator
    printf("strlen(literal) = %lu\n",strlen(literal));
    printf("strlen(cstr) = %lu\n",strlen(cstr));
    printf("strlen(hi) = %lu\n",strlen(hi));


    return 0;
}
