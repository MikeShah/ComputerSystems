// ===========================
// compile on the command line with
// gcc basics4.c -o basics4
// ===========================
#include <stdio.h>

int main(){

    // C supports if-statements and loops
    if(0==1){
        printf("0==1 is totally not true!\n");
        printf(" '==' means to test for equality\n");
    }else{
        printf("0 != 1 silly\n");
        printf(" '!=' means not equal to\n");
    }

    int x;
    for(x = 0; x < 10; x=x+1){
        printf("%d\n",x);
    }

        return 0;
}
