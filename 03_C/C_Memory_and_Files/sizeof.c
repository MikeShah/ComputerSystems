// @file: sizeof.c
#include <stdio.h>
#include <stdint.h>

int main(){
    int8_t x = 7;

    printf("char   (%lu)\n",sizeof(char));
    printf("float  (%lu)\n",sizeof(float));
    printf("x	(%lu)\n"   ,sizeof(x));
    printf("int16_t(%lu)\n",sizeof(int16_t));
    printf("int32_t(%lu)\n",sizeof(int32_t));
    printf("int    (%lu)\n",sizeof(int));

    return 0;
}
