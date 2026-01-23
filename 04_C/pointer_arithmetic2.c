// @file: pointer_arithmetic2.c
#include <stdio.h>

int main(){

  short s[] = {0,2,4,6,8,10,12};

//  short* ps = &s; // Note: Newer gcc versions may 
                    //       consider this not 'precise enough' 
                    //       and issue a warning/error.

  // Pointer explicitly to the first elements address.
  short* ps = &s[0]; 
  // Increment the 'pointer' -- this is pointer arithmetic.
  ps++;
  ps++;

  printf("pd is now storing: %d \n",*ps);

  return 0;
}
