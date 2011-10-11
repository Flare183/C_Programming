#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
int getNumber(int num);
int product(int a, int b);
void printResult(int result);

int main(void)
{
  int x,y;
  int result;

  x = getNumber(1);
  y = getNumber(2);
  result = product(x, y);
  printResult(result);


  return 0;
};


int getNumber(int num)
{
  int number;

  printf("Enter number %d: ", num);
  scanf("%d", &number);
  return number;
};

int product(int a, int b)
{
  return a * b;
};

void printResult(int result)
{
  printf("The result is: %d\n", result);
};
