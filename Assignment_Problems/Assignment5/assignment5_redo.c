#include <stdio.h>


int main (void)
{
  int number;
  int snumber = 0;
  int count = 0;


  printf("Enter a number: \n");
  scanf("%d", &number);


  while(number > 1)
    {
      snumber = number % 10;
      number = number / 10;
      if(snumber == 7)
	{
	  count++;
	}
    }

      printf("There is %d sevens in this number\n", count);
      return 0;
};
