/****************************************************************************
   assignment5.c      Find's the "7's" in a number

   Inputs:            number - The number the Person entered


   Outputs:           count - The number of 7's that are found within the
                              number.

   Written by: Jesse N. Richardson     Date: Tue, 20 Sep 2011 07:01:37 -0400

  Program Does NOT Compile
  Program Does NOT Run (Sadly)

******************************************************************************/




#include <stdio.h>


int main (void)
{
  int digit1;
  int digit2;
  int digit3;
  int digit4;
  int digit5;
  int digit6;
  int digit7;
  int digit8;
  int digit9;
  int number;

  int count = 0;

  printf ("Enter a number\n");
  scanf ("%d", &number);

  digit1 = number % 10;

  if (digit1 = 7)
    {
      count++;
      digit2 = number % 100 / 10;
    }

  else
    {
      if (digit2 = 7) 
	{
	  count++;
	  digit3 = number % 1000 / 100;
      }
    }

  else
    {
      if (digit3 = 7)
	{
	  count++;
	  digit4 = number % 10000 / 1000;
	}
    }

  else
    {
      if (digit4 = 7)
	{
	  count++;
	  digit5 = number % 100000 / 10000;
	}
    }

  else
    {
      if (digit5 = 7)
	{
	  count++;
	  digit6 = number % 1000000 / 100000;
	}
    }
  
  else
    {
      if (digit6 = 7)
	{
	  count++;
	  digit7 = number % 1000000 / 1000000;
	}
    }

  else
    {
      if (digit7 = 7)
	{
	  count++;
	  digit8 = number % 10000000 / 1000000;
	}
    }

  else
    {
      if (digit8 = 7)
	{
	  count++;
	  digit9 = number % 100000000 / 10000000;
	}
    }

  else
    {
     if (digit9 = 7)
	{
	  count++;
	}
    }


  printf ("There are %d 7's in this number \n", count);
  return 0;
};
x
