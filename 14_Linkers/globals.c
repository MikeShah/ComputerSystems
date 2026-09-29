// @file: globals.
// If you must create globals, at least
// pack them together in a struct so it's
// obvious where they'll be created.
// 
// Note: I break a convention and use a 
//       single 'g' name for globals,
//       but you could also use 'globals'.

struct Globals{
	int data[50];
	// ...
} g;

int main(){
	g.data[0] = 42;
	return 0;
}

