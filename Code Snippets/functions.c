#include <stdio.h>


int product (int a, int b)
{
  int i;
  int result = 1; /* This is a local variable */
  for(i = 0; i < a; i++)
    result += b;

  return result;
};

void main (void)
{
  int answer;
  answer = product(5,7);
};

void message (void)
{
  printf("ohai");
};
