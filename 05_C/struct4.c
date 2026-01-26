// @file: struct4.c
#include <stdio.h>

int main(){

  // 'typedef' creates a new name for the 'struct GameObject' type.
  // The 'GameObejct on line 12 now represents not an instance of a
  // 'GameObject' but the 'new name'
  // i.e. 
  // We can use 'GameObjectTypeName' instead of 'struct GameObject' to create
  // a new type.
  typedef struct GameObject{
    int id;
    int xPosition;
    int yPosition;
  } GameObjectTypeName;

  GameObjectTypeName myHero;

  myHero = (GameObjectTypeName){.id = 1, .xPosition= 2, .yPosition = 3}; 

  printf("myHero.id        = %d\n",myHero.id);
  printf("myHero.xPosition = %d\n",myHero.xPosition);
  printf("myHero.yPosition = %d\n",myHero.yPosition);

  return 0;
}


