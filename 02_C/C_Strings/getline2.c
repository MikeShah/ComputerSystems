// Compile with:
// gcc -Wall -g getline2.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <string.h>

int main(int argc, char** argv){
    // You can also read in a line of text at a time
    char* line = NULL;
    // How many items can you hold.
    size_t bufferSize;
    printf("Type \"hi\" please:");
    getline(&line,&bufferSize,stdin);
    if(0==strcmp(line,"hi")){
        printf("You typed in exactly 2 characters\n"); 
    }else if(0==strcmp(line,"hi\n")){
        printf("You typed in 3 characters includeing endline\n");
    }
    else{
        printf("You did not follow directions!\n");
    }

    return 0;
}
