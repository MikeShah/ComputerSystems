// @file: dlsym/main.c
// Compile with:
// gcc main.c -o prog -ldl
// Note: Some systems you can omit '-ldl' as it may be implicitly brought in,
//       but I recommend linking in 'dl'.
// Note: Location of libm.so may be different.
#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv) {
	void *handle;
	double (*cosine)(double);
	char *error;

	handle = dlopen ("/lib/x86_64-linux-gnu/libm.so.6", RTLD_LAZY);
	if (!handle) {
		fputs (dlerror(), stderr);
		exit(1);
	}

	cosine = dlsym(handle, "cos");
	if ((error = dlerror()) != NULL)  {
		fputs(error, stderr);
		exit(1);
	}

  // Feels absolutely magical! But we know this works
  // by invoking our linker and reading in a symbol table.
  // The 'function pointer' 'cosine' points to the 'cos' function
  // in the shared library.
	printf ("%f\n", (*cosine)(2.0));
	dlclose(handle);
}


