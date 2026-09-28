import std.stdio;
import std.algorithm;

/*
void funct(){
  import std.stdio; // #include <stdio.h>
  writeln("Hello world");
  "Hello world".writeln;

}

void example(int[] array){
  
}


*/
void main(){
  
  /+
  funct();

  const int value = 5000;
  int[value] integers = 7;

//  integers[70000] = 8;

  enum size_t status_code = 5UL;

  auto ii = 50;
  writeln("ii's type is: ", typeid(ii));

  [1,2,3].map!(a=>a+1).writeln;

  int[3] array = [1,2,3];
  for(int i=0; i < array.length; i++){
    array[i] +=1;
  }



  int[30] students;
  writeln(students.length);
  writeln(students.ptr);
  writeln(students.ptr[0]);
+/

  int[100000] students;

  writeln(students[0..3]);

  //value[key]
  int[string] nameToIdAssociativeArray = ["Michael":5777];

  nameToIdAssociativeArray["Mike"] = 5;
  nameToIdAssociativeArray["Susan"] = 9;

  writeln(nameToIdAssociativeArray);

  foreach(key,value ; nameToIdAssociativeArray){
    writeln(key," --- ",value);
  }

  foreach(key ; nameToIdAssociativeArray.byKey){
    writeln(key);
  }



  writeln("hi")


}
