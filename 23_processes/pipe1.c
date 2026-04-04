// @pipe1.c
// gcc -g -Wall -Wextra pipe1.c -o prog
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

		int filedescriptor[2];
		pipe(filedescriptor);

		printf("Read end of pipe: %d\n",filedescriptor[0]);
		printf("write end of pipe: %d\n",filedescriptor[1]);

		return 0;
}
