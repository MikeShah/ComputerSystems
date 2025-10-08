// Compile with:
// gcc -Wall -g args.c -o prog
// Run with:
// ./prog arg1 arg2 arg3

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

// Let's modify our 'main' function such that
// we can read in arguments
//
// argc: This is how many arguments we have
// argv: This is a 'variable' number of arguments
//       notice that it is char**
//       This is an 'array of char*'s'
//       
int main(int argc, char** argv){
    if(argc>0){
        for(int i=0; i < argc; ++i){
            printf("arg[%d] = %s\n",i,argv[i]);
        }
    }else{
        printf("Run with: ./prog arg1\n");
    }



    return 0;
}
