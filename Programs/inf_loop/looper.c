#include <stdio.h>

int main (void)
{
  int multiple = 0;
  int number = 2;
  while(1)
    {
      number = multiple * 2;
	printf("%d\n", &number);
    }

  return 0;
};
