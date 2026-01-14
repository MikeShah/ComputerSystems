// gcc memory2.c -o memory2

#include <stdlib.h>

int main(){

    // Allocates an array of 12 char's
    char* charArray = (char*)malloc(sizeof(char)*12);

    // Create a new charArray of size 13
    char* temp = (char*)malloc(sizeof(char)*13);

    // Copy everything from charArray to temp
    for(int i =0; i < 12; ++i){
        temp[i] = charArray[i];
    }

    // Free charArray's previous contents
    free(charArray);

    // Point charArray to temp
    charArray = temp;

    // Free temp ... or is it charArray
    // This is getting messy :(
    // (Well in this case, free charArray or temp)
    free(charArray);

    return 0;
}


