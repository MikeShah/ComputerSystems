// Compile with:
// gcc -Wall -g fileread.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output

int main(int argc, char** argv){

    // Reads in a file with the name 'data.txt'
    // This creates a new file descriptor for
    // that process.
    // Note that the "r" means we are opening
    // this file for 'read-only' access, and cannot
    // overwrite the contents
    FILE* inFile = fopen("data.txt","r");
    // If we successfully find our file, we execute.
    // If we don't fine our file, we will return NULL
    if(NULL!=inFile){
        printf("I opened new file descriptor %d!\n",fileno(inFile));
        // Now let's read each line of the file
        // We are going to create a buffer that can
        // hold at most 100 char's per line
        char buffer[100];
        // We'll use gets to get a line of up to
        // 100 char's, and we are reading from our
        // 'read-only' file descriptor.
        while(NULL != fgets(buffer,100,inFile)){
            fprintf(stdout,"%s",buffer);
            // If you uncomment out the bottom line
            // it does the same thing, the above is
            // doing a 'formatted' print, to a specific
            // file descriptor, it just happens that
            // 'stdout' is the default for printf when
            // we want to write to our terminal.
            // printf("%s",buffer);
        }
        // We should always close our file when
        // we are done with it! This safely
        // closes the 'open file descriptor'
        // so that we can use it elsewhere if
        // we open another file. 
        fclose(inFile);
    }

    return 0;
}
