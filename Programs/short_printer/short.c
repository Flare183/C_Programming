


#include <stdio.h>



int main (void)
{
  short i;
  short j;
  short k;


  i = 32767;
  j = i + 1; /* This won't fit in the varible */
  k = i + 2;


  printf("i is %d\n", i);
  printf("j is %d\n", j);
  printf("k is %d\n", k);


  return 0;

};
