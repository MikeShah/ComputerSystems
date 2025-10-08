// Compile with:
// gcc -Wall -g charstarstar.c -o prog
//
// Run with:
// ./prog 
//
// Check for memory leaks with:
// valgrind ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h> // malloc/free
#include <string.h> // String utility functions

int main(){
    // Number of students
    const int numStudents = 10;

    // Create our c-string array.
    char** namesOfStudents = NULL;
    // Allocate initially '10' character pointers that we
    // can point to.
    //
    // NOTE: We are allocating new 'pointers' so the sizeof
    //       the thing we are allocating is a 'char*' or a
    //       pointer such that it is a data structure big enough
    //       to store a memory address.
    namesOfStudents = (char**)malloc(sizeof(char*)*numStudents);

    // Now for each of our '10' students, we
    // have to allocate memory for them.
    //
    // Let's just name them all Mike for simplicity.
    for(int i=0; i < numStudents; i++){
      namesOfStudents[i] = strdup("Mike\0");  
    }
    
    // Print out all of our student names.
    for(int i=0; i < numStudents; i++){
        printf("student[%d]=%s\n",i,namesOfStudents[i]);
    }

    // Don't forget to free your memory
    // for each student
    for(int i=0; i < numStudents; i++){
      free(namesOfStudents[i]);  
    }
    // And then finally free the char* array
    free(namesOfStudents);

    return 0;
}
