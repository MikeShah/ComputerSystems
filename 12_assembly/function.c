// function.c
// Try compiling this code to assembly
// gcc function.c -S -o function.s
// To remove some of the 'noise' generated from GCC,you can try:
// gcc function.c -S -o function.s -g0 -fno-asynchronous-unwind-tables
//
// (RECOMMENDED WAY TO COMPILE)
// To remove even more 'noise' try to remove branch protection
// gcc function.c -S -o function.s -O0 -g0 -fno-asynchronous-unwind-tables -fcf-protection=none
//
// To embed the C source code within the output, you can try to add the '-fverbose-asm
// gcc function.c -S -o function.s -O0 -g0 -fno-asynchronous-unwind-tables -fcf-protection=none -fverbose-asm

int AddAndDouble(int arg1, int arg2){
	int result = arg1 + arg2;
	result = result * 2;
	return result;
}

int main(){

	int value = AddAndDouble(55, 77);	

	return 0;
}
