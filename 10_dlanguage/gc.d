// @file: gc.d
import std.stdio;
void main(){
  writeln("Hello, the compiler works");
  writefln!"Format string validated at compile time: %f, %d"(3.14f,42U); 
  pragma(msg, "Hello at compile-time -- twice from rdmd");

  {
    auto x = new int[1000];
  }

  import core.memory;
  GC.ProfileStats stats;
  writeln("numCollections:",stats.numCollections);
  writeln("collectionTime:",stats.totalCollectionTime);
}
