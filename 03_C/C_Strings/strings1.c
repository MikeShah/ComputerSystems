// Compile code:
// gcc -Wall -g strings1.c -o prog
// Run Code:
// ./prog

#include <stdio.h> // I/O functions

int main(){

    char name[5];
    name[0] = 'M';
    name[1] = 'i';
    name[2] = 'k';
    name[3] = 'e';
    name[4] = '\0';

    printf("name = %s\n",name);

    return 0;
}
