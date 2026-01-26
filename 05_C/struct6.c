// @file: struct6.c
#include <stdio.h>
#include <stdlib.h>

typedef struct GameObject{
  int id;
  int xPosition;
  int yPosition;
} GameObjectTypeName;

int main(){

  GameObjectTypeName myHero;
  GameObjectTypeName* myHeroPtr = (GameObjectTypeName*)malloc(sizeof(GameObjectTypeName));

  myHero    = (GameObjectTypeName) {.id = 1, .xPosition = 2, .yPosition = 3}; 

  myHeroPtr = &myHero; // This is legal, because I can store
                       //  pointers to other GameObjectTypeName 
                       //  (i.e. things of type 'struct GameObject')
                       //  BUT there is a big problem here

  (*myHeroPtr).id = 7;
  myHeroPtr->id = 7;

  printf("myHero.id        = %d\n",myHero.id);
  printf("myHero.xPosition = %d\n",myHero.xPosition);
  printf("myHero.yPosition = %d\n",myHero.yPosition);

  printf("myHeroPtr->id        = %d\n",myHeroPtr->id);
  printf("myHeroPtr->xPosition = %d\n",myHeroPtr->xPosition);
  printf("myHeroPtr->yPosition = %d\n",myHeroPtr->yPosition);

  free(myHeroPtr);

  return 0;
}


