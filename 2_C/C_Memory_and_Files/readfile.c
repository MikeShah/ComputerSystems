// gcc readfile.c -o readfile

#include <stdio.h>

int main(){

    // FILE is a structure that holds information
    // about what a file is. We need a pointer to it,
    // think about the case where we would want to change
    // or write new information to a file.
    // Grab a handle to a file pointer
    FILE *filePointer;
    // Attempt to open our file
    // The 'r' means we are opening a file
    // for only 'reading', thus we cannot modify the data.
    filePointer = fopen("data.txt", "r");

    // Buffer to hold data we are reading
    int buffer;
    // Read our file to the end of file with the feof function
    // Each iteration of the loop we read in a value.
    while(!feof(filePointer)){
        fscanf(filePointer, "%d", &buffer);
        printf("I read %d\n", buffer);
    }
 
    // Close the file when we are done with it.
    fclose(filePointer);

    return 0;
}

