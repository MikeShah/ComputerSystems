// @file: struct8.c
#include <stdio.h>
#include <stdlib.h>

typedef struct GameObject{
  struct GameObject* this; // called 'self' in other languages
  int id;  int xPosition;  int yPosition;

  // 'method' that we can wire up to our game objects
  void (*method1)(struct GameObject* );

} GameObjectTypeName;

// Sample method to wire together
void PrintGameObject(struct GameObject* g){
  printf("this->id        = %d\n",g->this->id);
  printf("this->xPosition = %d\n",g->this->xPosition);
  printf("this->yPosition = %d\n",g->this->yPosition);
}

// Our 'constructor' which sets up Game objects
// Does the constrution of our object, and importantly wires up function pointers
// consistently for all of our objects
void GameObject_DefaultConstructor(struct GameObject* g){
  g->this = g;

  g->id = 0;
  g->xPosition = 10;
  g->yPosition = 20;

  // Wire up methods
  g->method1 = &PrintGameObject;
}

int main(){
  GameObjectTypeName myHero;
  GameObjectTypeName* myHeroPtr = (GameObjectTypeName*)malloc(sizeof(GameObjectTypeName));

  // Construct a new game object through this function
  GameObject_DefaultConstructor(&myHero);
  GameObject_DefaultConstructor(myHeroPtr);

  myHero.method1(&myHero);
  myHeroPtr->method1(myHeroPtr);

  free(myHeroPtr);

  return 0;
}


