// @file: pointer_arithmetic1.c
#include <stdio.h>

int main(){

  char d[6] = {'m','i','k','e','S','\0'};

//  char* pd = &d;  // Note: Newer gcc versions may 
                    //       consider this not 'precise enough' 
                    //       and issue a warning/error.

  // Pointer explicitly to the first elements address.
  char* pd = &d[0]; 
  // Increment the 'pointer' -- this is pointer arithmetic.
  pd++;

  printf("pd is now: %c \n",*pd);

  return 0;
}
