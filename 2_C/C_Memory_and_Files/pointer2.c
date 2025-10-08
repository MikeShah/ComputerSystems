// pointer2.c
#include <stdio.h>


int main(){

    // Initializing an integer
    int x = 5;
    // Now point to an address
    int* px = &x;

    // X's original value
    printf("address of x         : %p\n",(void*)&x);
    printf("px stores the address: %p\n",px);
    printf("address of px        : %p\n",(void*)&px);

    return 0;
}


