#include <stdio.h>

long factorial(long number);

int main(void)
{
  int i;
  int numberEntered;

  printf("Please enter the number you would like to factorial\n");
  scanf("%d", &numberEntered);
  for (i = 0; i <= numberEntered; i++)
    {
      printf("%2d! = %ld\n", i, factorial(i));
    }

  return 0;
};

long factorial(long number)
{
  if(number <1)
    {
      return 1;
    }
  else
    {
      return(number * factorial(number - 1));
    }
};
