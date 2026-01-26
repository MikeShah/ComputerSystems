// @file: struct2.c
#include <stdio.h>

// This example 'creates' several global variables
// that are 'predeclared'.
struct GameObject{
  int id;
  int xPosition;
  int yPosition;
} myHero, myEnemy1;

struct GameObject myHero = {1,2,3}; // Initializing one of our globals

void foo(){
  myEnemy1.xPosition = 10;
  printf("myEnemy1.xPosition = %d\n",myEnemy1.xPosition);
}

int main(){

  printf("myHero.xPosition = %d\n",myHero.xPosition);
  foo();

  return 0;
}


