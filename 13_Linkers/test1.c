// @file: test1.c
//
// Try running this file through the compiler and emitting the assembly with: 
// gcc -c -g -O -Wa,-alh,-L test1.c
//
// Try compiling this example and then using the 'linker'
// 1.) First build the object file
//     gcc -c main.c
// 2.) Then setup the linker to link machine code with the C-runtime (which has a _start) and allow us to
//     run our program.
//     ld -dynamic-linker /lib64/ld-linux-x86-64.so.2 /usr/lib/x86_64-linux-gnu/crt1.o /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/x86_64-linux-gnu/crtn.o test1.o -o prog -lc
#include <stdio.h>

int main(){

	int a = 72;
  printf("a is %d\n",a);

	return 0;
}
