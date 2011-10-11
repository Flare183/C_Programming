/******************************************************************************
     greaterNumbers.c - This program gets five numbers from the user and
			determines
			which is the greatest and which is the second greatest
			and prints that out.

     Inputs: num1 - retreves and stores a number from the user
	     num2 - retreves and stores a number from the user
	     num3 - retreves and stores a number from the user
	     num4 - retreves and stores a number from the user
	     num5 - retreves and stores a number from the user

    Outputs: The greatest and second greatest numbers printed to the screen

	 Written by: Jesse N. Richardson Date: Mon, 12 Sep 2011 22:45:03 -0400

    Program compiles without error
    Program runs correctly

*****************************************************************************/

#include <stdio.h>

int
main (void)
{
  int num1;
  int num2;
  int num3;
  int num4;
  int num5;
  int great1;
  int great2;

  printf ("Please enter a number: ");
  scanf ("%d", &num1);
  printf ("Please enter a number: ");
  scanf ("%d", &num2);
  printf ("Please enter a number: ");
  scanf ("%d", &num3);
  printf ("Please enter a number: ");
  scanf ("%d", &num4);
  printf ("Please enter a number: ");
  scanf ("%d", &num5);

  if (num1 >= num2)
    {
      great1 = num1;
      great2 = num2;
    }
  else
    {
      great1 = num2;
      great2 = num1;
    }

  if (num3 >= great1)
    {
      great2 = great1;
      great1 = num3;
    }
  else
    {
      if (num3 >= great2)
	{
	  great2 = num3;
	}
    }

  if (num4 >= great1)
    {
      great2 = great1;
      great1 = num4;
    }
  else
    {
      if (num4 >= great2)
	{
	  great2 = num4;
	}
    }

  if (num5 >= great1)
    {
      great2 = great1;
      great1 = num5;
    }
  else
    {
      if (num5 >= great2)
	{
	  great2 = num5;
	}
    }

  printf ("\nThe greatest number is: %d\n", great1);
  printf ("The second greatest number is: %d\n", great2);
  return (0);
}
