// Compile: gcc strtok.c -o strtok
// Run: ./strtok
//
// This example demonstrates how to 'split' a string up in C.
// There are many ways to do this, and one is using the 'strtok'
// function--which really is what this source file shows.
//
// The purpose of this file is to show a very very simple
// lexer that breaks a program apart that is separated by a single space.
// Very simple sciptring languages could use this approach.
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

    // Here is a tiny example of breaking a program
    // into 'tokens'.
    // Here would be a source file
    char sourceCode[] = "int main() { return 0; }";

    // A pointer to each 'delimeter' character
    // That is, split a string up if a character is found
    // A typical delimiter is a whitespace character.
    // Note: 'p_' is used as a prefix to indicate this is a 'pointer'
    // datatype. The following 'ch' indicates a character.
    // (This is a little weird--but you might see this in practice)
    char* p_ch;

    // strtok modifies the given string searching from each
    // delimeter each time.
    // The function appears to work 'slightly' magically, but you
    // can see the implementation here:
    // https://code.woboq.org/userspace/glibc/string/strtok.c.html
    // and the helper __strtok_r
    // https://code.woboq.org/userspace/glibc/string/strtok_r.c.html#__strtok_r
    //
    // This loop will split the above program into strings.
    p_ch = strtok(sourceCode," ");
    while(p_ch!=NULL){
        printf("%s\n",p_ch);
        p_ch = strtok(NULL," ");
    }

    return 0;
}