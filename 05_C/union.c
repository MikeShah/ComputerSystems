// @file: union.c
#include <stdio.h>

// 1. Takes on '1-type' at a time
// 2. Allocates for the size of the largest
// type.
typedef union example{	
	int i;
	float f;
  long l;
}example_t;

int main(){

	example_t u;

	printf("sizeof(u): %lu\n",sizeof(u));

	u.i = 42;
	printf("union i: %d\n",u.i);
	u.f = 3.14f;
	printf("union f: %f\n",u.f);
  u.l = 57L;
	printf("union l: %ld\n",u.l);
}


