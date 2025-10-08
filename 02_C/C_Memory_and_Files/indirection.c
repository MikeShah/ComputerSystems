// gcc indirection.c -o indirection
// This example shows how multiple levels of indirection
// work. I show how to modify a pointer to a pointer.
#include <stdio.h>

int main(){
    int x= 5;
    int* y = &x;
    int** z = &y;

    **z = 90;
    printf("x is now %d\n",x);

    return 0;
}
