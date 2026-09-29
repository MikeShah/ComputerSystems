// @file: raii.d
import std.stdio;
import core.stdc.stdlib;

// Scoped is a 'templated' struct, meaning that
// the symbol 'T' is replaced within the struct {}'s.
struct Scoped(T){
  T[] mMemory;
  alias mMemory this;
  // Constructor
  this(size_t length){
    T* allocation = cast(T*)malloc(length*T.sizeof);
    // Error handling
    assert(length!=0, "length is zero");
    assert(allocation, "allocation was null");
    // Assign our member variable (mMemory)
    // to the full block of memory
    // that we just malloc'd.
    // This is an easy way to use D's array
    // syntax from memory allocated in C.
    mMemory = allocation[0..length];
  }
  // Destructor automatically called when out of scope.
  ~this(){
    // Free the pointer (which we have a copy of in
    // the variable 'mMemory')
    free(mMemory.ptr);
  }
}

void main(){
  // We use the '!' to otherwise indicate the the
  // template parameters, and then we have a second
  // set of parenthesis for the constructor parameters.
  Scoped!int integers = Scoped!(int)(20);
  // Because of the 'alias this' we can simply
  // treat our Scoped!int 'integers' as one of the
  // underlying fields. This makes it easier to do
  /// things like slicing an array, since we get that
  // feature for free.
  // With the array syntax, we also get things like
  // bounds checking for free, because arrays always
  // know their length and the underlying pointer(.ptr)
  writeln(integers[0..5]);
  // Or equivalently
  writeln(integers.mMemory[0..5]);
}
