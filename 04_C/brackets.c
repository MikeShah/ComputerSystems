// @file: brackets.c
#include <stdio.h>

int main(){

  short s[] = {0,2,4,6,8,10,12};
  short* ps = &s[0]; 

  printf("ps     : %d \t s[0]: %d \n",*ps    ,s[0]);
  printf("*(ps+1): %d \t s[1]: %d \n",*(ps+1),s[1]);
  printf("*(ps+2): %d \t s[2]: %d \n",*(ps+2),s[2]);

  // If I'm SUPER confident that ps points to a contiguous
  // block of memory, I can offset and do the arithmetic.
  printf("ps[2]): %d \t s[2]: %d \n",ps[2],   s[2]);

  return 0;
}
