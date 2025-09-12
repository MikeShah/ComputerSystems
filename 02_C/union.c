#include <stdio.h>

// 1. Takes on '1-type' at a time
// 2. Allocates for the size of the largest
// type.
typedef struct example{	
	int i;
	float f;
}example_t;

int main(){

	example_t u;

	printf("sizeof(u): %lu\n",sizeof(u));

	u.i = 42;
	printf("union i: %d\n",u.i);
	u.f = 3.14f;
	printf("union f: %f\n",u.f);

	return 0;
}
