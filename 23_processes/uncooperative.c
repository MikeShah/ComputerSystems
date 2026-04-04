// @uncoperative.c
// gcc -g -Wall -Wextra uncooperative.c -o prog
#include <signal.h>

int main(){

	// Signal handler that 'handles' some action
	// SIG_IGN overrides the default behavior and we
  // thus ignore 'ignores' these signals.
	signal(SIGINT, SIG_IGN);
	signal(SIGTERM, SIG_IGN);

	// Ooops, infinite loop that just
	// 'spins' and eats up CPU cycles
	while(1){

	}

	return 0;
}
