// @file: factory.c
#include <stdlib.h>
typedef struct {
  int id;
}Object;

Object* Object_MakeNewObject(int id){
  Object* newObj = (Object*)malloc(sizeof(Object));
  newObj->id = id;
  return newObj;
}

void RunMainLoop(int count){
  Object** objectArray = (Object**)malloc(10*sizeof(Object));

  for(int i=0; i < count; i++){
    objectArray[i] = Object_MakeNewObject(i);
  }
  // Need to work in reverse now...
  for(int i=0; i < count; i++){
    free(objectArray[i]);
  }
  // Now free objectArray
  free(objectArray);
}

int main(){
  RunMainLoop(10);
  return 0;
}
