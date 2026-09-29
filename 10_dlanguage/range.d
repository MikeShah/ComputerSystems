// @file: range.d
import std.stdio, std.algorithm; // For 'each!
import std.typecons, std.range;  // for Yes.each/No.each

void main(){
  writeln("Range-based for loop");
  foreach(val ; [1,2,3,4]){
    writeln(val);
  }

  writeln("one-liner with each");
  [1,2,3,4].each!(a=>a.writeln);

  writeln("one-liner and mutate elements with ref");
  auto arr = [1,2,3,4];
  arr.each!( (ref a)=>(++a).writeln);
  arr.writeln;

  writeln("one-liner but evaluated lazily");
  [1,2,3,4].each!((lazy a) =>a.writeln);

  // Evaluates 'lazily', and can terminate early.
  // Note: 'delegate' function can span multiple lines.
  writeln("lazy evaluation, and terminate early");
  [1,2,3,4].each!(
                    (a){
                      if(a== 3){
                        return No.each;
                      }else{
                        a.writeln;
                        return Yes.each;
                      }
                    }
                 );
}
