// ===========================
// compile on the command line with
// gcc basics3.c -o basics3
// ===========================
#include <stdio.h>

// C supports functions which can take in any
// number of arguments.
// A function ends when it hits the 'return statement'
// We have to declare functions before we use them later
// in our code.
int add(int x, int y){
    return x+y;
}

int main(){

    // %d is a placeholder for a variable.
    // '/n' is a special character for ending
    // a line.
    printf("2 + 3 = %d \n",add(2,3));

        return 0;
}