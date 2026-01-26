// @file: struct3.c
#include <stdio.h>

int main(){

  // Create a 'local' struct
  // that is only accessible from within main()
  struct GameObject{
    int id;
    int xPosition;
    int yPosition;
  } myHero;

  // The 'myHero' is a local that is already declared.
  // We can use a 'desginated initializer' synax to assign the fields 
  myHero = (struct GameObject){.id = 1, .xPosition= 2, .yPosition = 3}; 

  // This is equivalent, I've just used nicer spacing
  myHero = (struct GameObject){
    .id = 4,
    .xPosition= 5,
    .yPosition = 6
  }; 

  myHero.id = 50; // Note: This is also fine to do if you are more comfortable.

  printf("myHero.id        = %d\n",myHero.id);
  printf("myHero.xPosition = %d\n",myHero.xPosition);
  printf("myHero.yPosition = %d\n",myHero.yPosition);

  return 0;
}


