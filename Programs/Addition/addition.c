/* Hello World
   Written by Jesse N. Richardson */

#include <stdio.h>

int main (void)
{
  int number1=0;
  int number2=0;
  int sum=0;

  printf("Enter the first number\n");
  scanf("%d", &number1);
  printf("Enter the second number\n");
  scanf("%d", &number2);
  sum = number1 + number2;

  printf("Sum of the numbers: %d\n", sum);
  return 0;
};
