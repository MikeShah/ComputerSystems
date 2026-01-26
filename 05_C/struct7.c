// @file: struct7.c
#include <stdio.h>
#include <stdlib.h>

typedef struct GameObject{
  int id;
  int xPosition;
  int yPosition;
} GameObjectTypeName;

// Freestanding function (i.e. free function) that does the construction
// of a 'GameObjectTypeName' for us.
void GameObject_Constructor(GameObjectTypeName* g, int i, int x, int y){
  g->id=i;
  g->xPosition=x;
  g->yPosition=y;
}

int main(){

  GameObjectTypeName myHero;
  GameObjectTypeName* myHeroPtr = (GameObjectTypeName*)malloc(sizeof(GameObjectTypeName));

  // Construct a new game object through this function
  GameObject_Constructor(&myHero,1,2,3);
  GameObject_Constructor(myHeroPtr,4,5,6);

  printf("myHero.id        = %d\n",myHero.id);
  printf("myHero.xPosition = %d\n",myHero.xPosition);
  printf("myHero.yPosition = %d\n",myHero.yPosition);

  printf("myHeroPtr->id        = %d\n",myHeroPtr->id);
  printf("myHeroPtr->xPosition = %d\n",myHeroPtr->xPosition);
  printf("myHeroPtr->yPosition = %d\n",myHeroPtr->yPosition);

  free(myHeroPtr);

  return 0;
}


