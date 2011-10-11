/****************************************************************************
   assignment7.c      Prints a pyramid of "*"

   Inputs:            None


   Outputs:           None?

   Written by: Jesse N. Richardson     Date: Tue, 27 Sep 2011 07:05:03 -0400

  Program compiles without errors
  Program Does not run correctly

******************************************************************************/




#include <stdio.h>


int main (void)
{
  int column, line;

  for(line = 0;line < 10; line++)
    {
      for(column = 0;column < 10; column++)
	{
	  if(line > (9 - column))
	      printf(" ");
	  else
	      printf("*");
	}
      printf("\n");
    }
  return 0;
};

