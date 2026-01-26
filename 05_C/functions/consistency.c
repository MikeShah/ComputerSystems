// @file: consistency.c

struct GameObject{}

// 'int' here might be returning an 'error' code for instance.
// Thus the 'return value' comes through what we'd call an 
// 'out parameter' which is 'g'.
//
//  Recall -- pointers can be used to modify values in a 
//  pass-by-value language like C.
int game_createObject(GameObject* g){
  return 0;
}

GameObject game_createObject(){
  return 0;
}

int main(){

  return 0;
}


