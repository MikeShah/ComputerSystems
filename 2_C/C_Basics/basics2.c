// ===========================
// compile on the command line with
// gcc basics2.c -o basics2
// ===========================
#include <stdio.h>

int main(){

    // C is a structured language
    // Anything between {}'s is locally within scope.
    // If something is 'within scope' that means we
    // have access to it.
    {
        int x = 5; // x is available between these {}'s
    }   // x is not available here and terminated

        int x =3; // This is a completely different 'x'

        return 0;
}