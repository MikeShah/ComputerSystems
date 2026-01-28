// gcc -g -Wall stackmemory2.c -o prog
#include <stdio.h>
int main(){

	int x= 42;
	int y= 42;
	printf("%p\n",&x);
	printf("%p\n",&y);

	return 0;
}

