// Compile with:
// gcc -Wall -g strtok.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){

    // Provide a line of input
    char line[] = "if(a==b){ printf(\"hi friend\");";
    // The individual characters that we'll
    // split the string into. Notice there is
    // a space character as well at the end.
    char* delimeters = "(){} ";
    // An individual token or 'lexem' that we
    // are breaking the line of code into.
    // We grab the first token
    char* token = strtok(line,delimeters);
    while(NULL != token){
        printf("Token: %s\n",token);
        // Slightly 'weird' function because
        // we call 'NULL' on the same line
        // But this is how we retrieve the next token.
        token = strtok(NULL,delimeters);
    }

    return 0;
}
