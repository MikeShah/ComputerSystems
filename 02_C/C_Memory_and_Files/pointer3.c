// pointer3.c
// Example is showing that if we de-reference
// a NULL pointer, we get a segmentation fault.

#include <stdio.h>

int main(){

    int* px = NULL;
    *px = 7;

    return 0;
}
