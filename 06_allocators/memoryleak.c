// @file: memoryleak.c
#include <stdlib.h>
void RunMainLoop(){
  while(true){
    int* allocateResource = (int*)malloc(sizeof(int));
    /// ....
  }
}

int main(){
  RunMainLoop();
  return 0;
}
