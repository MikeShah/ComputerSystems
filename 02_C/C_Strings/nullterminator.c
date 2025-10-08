// Compile with:
// gcc -Wall -g nullterminator.c -o prog
// Run with:
// ./prog

#include <stdio.h>

int main(){

    char a[] = {'a','b','c'};   // Size should be 3
                                // if null terminator
                                // is not automatically
                                // added.
    printf("sizeof(a) = %lu\n",sizeof(a));

    return 0;
}
