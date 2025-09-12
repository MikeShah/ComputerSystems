// @file: stack2.c
#include <stdio.h>

void setValue(int* x){
	*x = 9999;
	printf("x address: %p\n",(void*)&x);
}

int main(){
	int a = 6;

	setValue(&a);
	// What is 'a' here?
	printf("a is: %d\n",a);

	return 0;
}
