#include <stdio.h>


int main(){

    int x =27;

    int* px = &x;

    printf("x address is %p\n",&x);
    printf("px stores %p\n",px);
    printf("px points to the value %i\n",*px);

    return 0;
}
