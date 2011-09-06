


#include <stdio.h>



int main (void)
{
  unsigned short i;
  unsigned short j;
  unsigned short k;


  i = 65535;
  j = i + 1; /* This won't fit in the varible */
  k = i + 2;


  printf("i is %d\n", i);
  printf("j is %d\n", j);
  printf("k is %d\n", k);


  return 0;

};
