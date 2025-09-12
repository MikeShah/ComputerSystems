// Compile with:
// gcc -Wall -g print.c -o prog
// Run with:
// ./prog

#include <stdio.h>  // Input/Output

int main(int argc, char** argv){

    // Write out a simple string
    puts("Put out a simple string\n");
    // Same as above, but can put in formatted things (i.e. variables)
    char* string = "a string";
    int value = 42;
    printf("Print out formated data with format specifiers like %s or %d\n\n",string,value);
    // We can also output single characters
    // (Like the grade you will get in the class!)
    putchar('A');
    putchar('\n'); // Output a newline character

    return 0;
}
