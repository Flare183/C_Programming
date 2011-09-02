/* Hello World
   Written by Jesse N. Richardson */

#include <stdio.h>

int main (void)
{
  int number=0;
  printf("Enter a number\n", &number);
  scanf("%d", &number);
  printf("Number you entered %d\n", number);
  return 0;
};
