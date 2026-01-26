// Never include .c files -- only header files!
#include <stdio.h> // 'angled bracket' includes
                   // are system or standard library
                   // header files
#include "mike.h"  // 'Quoted' header bring in a header file.
                   // We will eventually need to 'compile'
                   // the library function implementation or
                   // 'link' in that code.
int main(){

  printf("mike_func() = %d\n", mike_func());
  return 0;
}


