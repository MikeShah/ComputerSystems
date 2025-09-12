// ===========================
// compile on the command line with
// gcc basics5.c -o basics5
// ===========================
#include <stdio.h>

int main(){
    // Initialize a varaible
    int countDown = 10;
    // Loop while this condition is true
    while(countDown > 0){
        // Print out the integer countDown where '%d' is
        // %d is like a placeholder for us.
        // '\n' means to make a new line
        printf("%d\n",countDown);
        // Decrement countdown each time (so we are not stuck here forever!)
        countDown = countDown - 1;
    }

    return 0;
}
