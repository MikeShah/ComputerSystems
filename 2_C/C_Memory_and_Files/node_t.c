// Compile: gcc node_t.c -o node_t
#include <stdio.h>
#include <stdlib.h>

// Create a new node_t structure.
typedef struct node{
    int myData;
    struct node_t* next;
}node_t;

int main(){
    
    // Create one new node
    node_t* newNode = malloc(sizeof(node_t));

    // Let's see how much memory it takes
    printf("Size of each node in bytes: %ld\n", sizeof(node_t));

    // Return our memory
    free(newNode);

    return 0;
}
