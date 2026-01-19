// Compile with:
// gcc -Wall -g dynamicstring1.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free

int main(){

    // Present the user a message
    printf("How many characters in your string? ");
    // Read an integer from the user
    // and store the value at the
    // memory where the variable 'length' lives
    int length;
    scanf("%d",&length);
    // allocate memory for the string using malloc
    char* str = (char*)malloc(sizeof(char)*length);

    // Loop through our string, and put a
    // character into our string
    for(int i=0; i < length-1; i++){
        str[i] = 'a';
    }
    // Last character gets the null terminator
    str[length-1] = '\0';
    // Print our string
    printf("str = %s\n",str);

    // Free our memory that we have malloc'd
    free(str);
    return 0;
}
