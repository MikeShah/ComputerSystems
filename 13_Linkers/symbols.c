// @file symbols.c
// Compile this with:
// gcc -c symbols.c
//
// Then analyze with:
// objdump -t symbols.o
//
// What symbols do you see? 
// (Note: Everything is in 'all-caps' to help you see more easily)

struct SOME_STRUCT{
  int a;
};

int SOME_GLOBAL=7;

void SOME_FUNCTION(){}

void SOME_OTHER_FUNCTION(){
  static int SOME_STATIC_VARIABLE;
}

int main(){
  
  int SOME_LOCAL_VARIABLE;

  return 0;
}
