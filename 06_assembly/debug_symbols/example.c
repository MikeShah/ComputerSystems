// Compile with: gcc -g example.c -o prog
// observe debug symbols with: objdump -g prog | grep "someStackValue"
int main(){
	int someStackValue = 7123;
	return 0;
}
