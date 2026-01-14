// Compile with:
// gcc -Wall -g split.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output
#include <stdlib.h>
#include <string.h>

// Structure to hold two strings
typedef struct split{
    char* first;
    char* second;
}split_t;

// Function takes in one string and splits it in
// half into a second string.
//
// This is a pretty inefficient function, but
// it shows the steps to split a string into two pieces.
split_t* splitString(char* string, char delimeter){
    split_t* result = (split_t*)malloc(sizeof(split_t));
    result->first = NULL;
    result->second=NULL;
    
    int index = -1; // Index where the split occurred

    // Find where the split occur
    for(int i=0; i < strlen(string);i++){
        if(string[i]==delimeter){
            index = i;
        }
    }

    // malloc two new strings such that they're big enough
    // to hold the substring
    result->first = (char*)malloc(sizeof(char)*index);
    result->second = (char*)malloc(sizeof(char)*strlen(string)-index);

    // fill in our first string
    for(int i=0; i < index; i++){
        result->first[i] = string[i];
    }
    // fill in our second string
    for(int i=index+1,pos=0; i < strlen(string); i++,pos++){
        result->second[pos] = string[i];
    }

    return result;
}


int main(int argc, char** argv){
    // You can also read in a line of text at a time
    char* line = NULL;
    // How many items can you hold.
    size_t bufferSize;
    printf("Type something with a '|' in it and hit enter:");
    getline(&line,&bufferSize,stdin);
    
    split_t* split = splitString(line,'|');
    printf("Here is the first part : %s\n",split->first);
    printf("Here is the second part: %s\n",split->second);

    return 0;
}
