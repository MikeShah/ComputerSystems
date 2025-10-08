// ===========================
// compile on the command line with
// gcc basics1.c -o basics1
// ===========================
#include <stdio.h> // Files that end with '.h'
                   // are header files. They bring
                   // in an existing library of code.

// 'main' is a function with an 'integer' return type.
// main is also a special function denotating the
// start of our C program. There is exactly 1 main
// per program.
int main(){

        // A function from our <stdio.h> library
        printf("hello\n");

        return 0; // The function exits when it returns.
}