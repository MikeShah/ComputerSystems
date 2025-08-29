// gcc memory.c -o memory

#include <stdlib.h>

int main(){

    // Allocates an array of 12 char's
    char* charArray = (char*)malloc(sizeof(char)*12);

    // Don't forget to free
    free(charArray);

    return 0;
}


