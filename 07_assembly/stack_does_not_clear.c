// @file stack_does_not_clear.c
// gcc -g stack_does_not_clear.c -o prog

// You can try with this and observe different behavior.
// gcc -g stack_does_not_clear.c -o prog -fno-stack-protector
#include <stdio.h>

void StackFunc1(){
	int randomValue0 = 0x00;
	int randomValue1 = 0x01;
	int randomValue2 = 0x02;
	int randomValue3 = 0x03;
	int randomValue4 = 0x04;
	int randomValue5 = 0x05;
	int randomValue6 = 0x06;
	int randomValue7 = 0x07;
	return;
}

void SomeOtherFunction(){

	// Initialize an array with no values
	int array[5];
	for(int i=0; i < 5; i++){
		printf("array[%d] = %d\n",i,array[i]);
	}
}

int main(){

	// Call a function which puts something on the stack
	StackFunc1();
	
	SomeOtherFunction();
}
