// @file: main.d
import std.stdio;

// Function declaration from
// C library
extern(C) int c_add(int a, int b);

void main(){

  writeln("From C library: ", c_add(7,2));
  
}
