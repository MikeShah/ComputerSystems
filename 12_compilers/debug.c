// debug.c
#include <stdio.h>

#define DEBUG(x) (printf("calling function: %s",#x)); x

int main(int argc, char** argv){


    DEBUG(printf("hi\n"));

    return 0;
}
