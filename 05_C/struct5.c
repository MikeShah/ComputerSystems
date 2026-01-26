// @file: struct5.c
#include <stdio.h>
#include <stdlib.h>

typedef struct GameObject{
  int id;
  int xPosition;
  int yPosition;
} GameObjectTypeName;

int main(){

  GameObjectTypeName* myHeroPtr = (GameObjectTypeName*)malloc(sizeof(GameObjectTypeName));

  (*myHeroPtr).id = 7;
  myHeroPtr->id = 7;
  myHeroPtr->xPosition= 90;
  myHeroPtr->yPosition = 17;

  printf("myHeroPtr->id        = %d\n",myHeroPtr->id);
  printf("myHeroPtr->xPosition = %d\n",myHeroPtr->xPosition);
  printf("myHeroPtr->yPosition = %d\n",myHeroPtr->yPosition);

  free(myHeroPtr);

  return 0;
}


