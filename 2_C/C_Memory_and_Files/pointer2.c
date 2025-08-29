// pointer2.c
#include <stdio.h>


int main(){

    // Initializing an integer
    int x = 5;
    // Now point to an address
    int* px = &x;

    // X's original value
    printf("x is: %d\n",x);

    // Modify px by dereferencing it
    *px = 100;

    // Hmm, what is x now?
    printf("x is: %d\n",x);

    return 0;
}


