// C Libraries
#include <stdio.h>

// header file
#include "sum.h"

int main(){

  int array[] = {1,2,3,4};

  // We can compute the 'sizeof' a stack allocated array.
  // This *WILL NOT* work however with a 'heap allocated'
  // array -sum(array,sizeof(array)/sizeof(int))- we will need to track the size manually.
  int total = sum(array,sizeof(array)/sizeof(int));

  printf("total is: %d\n",total);

	return 0;
}
