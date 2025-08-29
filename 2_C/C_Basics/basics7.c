// ===========================
// compile on the command line with
// gcc basics7.c -o basics7
// ===========================
#include <stdio.h>

int main(){
    // Create an array
    // An array is a contiguous collection of variables.
    // It can be convenient to create an array, versus making
    // many variables.
    int myFavoriteNumbers[3];
    // The first item in an array starts at '0'
    myFavoriteNumbers[0] = 500; // How old I am! :) 
    myFavoriteNumbers[1] = 7;   // A lucky number
    myFavoriteNumbers[2] = 13;  // An unlucky number

    printf("myFavoriteNumbers[0] = %d\n",myFavoriteNumbers[0]); 
    printf("myFavoriteNumbers[1] = %d\n",myFavoriteNumbers[1]); 
    printf("myFavoriteNumbers[2] = %d\n",myFavoriteNumbers[2]); 

    return 0;
}
