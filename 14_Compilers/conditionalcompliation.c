// conditionalcompilation.c
#include <stdio.h>

#define UNIX 0

int main(int argc, char** argv){

    #if UNIX
    printf("Unix\n");
    #else
    printf("Windows or Mac\n");
    #endif

    return 0;
}
