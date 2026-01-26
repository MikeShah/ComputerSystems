// @file: struct9.c
#include <stdio.h>
#include <stdlib.h>

typedef struct GameObject1{
  long id;
  int xPosition;
  short power;
  char state;
} GameObject1;

typedef struct GameObject2{
  char state;
  int xPosition;
  short power;
  long id;
} GameObject2;


int main(){

  printf("sizeof(GameObject1): %lu\n",sizeof(GameObject1));
  printf("sizeof(GameObject2): %lu\n",sizeof(GameObject2));

  return 0;
}


