#include <stdio.h>
#include <stdlib.h>

int main(){

    // this is my dynamically requested memory
    // I'm dynamically allocated enough space
    // for 4 integers. (4 bytes * 4=16 bytes of memory)
    int* mem = (int*)malloc(sizeof(int)*4);

    mem[0] = 0;
    mem[1] = 1;
    mem[2] = 27;
    mem[3] = 42;

    printf("%d %d %d %d \n",mem[0],mem[1],mem[2],mem[3]);

    free(mem);

    return 0;
}
