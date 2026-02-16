// raii.cpp
struct Resource{
	// Constructor
	Resource(size_t elements){
		allocateResource = new int[elements];
	}
	// Destructor -- called when we go out
	// of scope.
	~Resource(){
		delete[] allocateResource;
	}

	int* allocateResource;
}

void RunMainLoop(){
	while(true){
		Resource r(500);
		/// do something with resource 'r'
	
	} // 'r' destructor automatically called
	  // and frees memory
}

int main(){
	RunMainLoop();
	return 0;
}
