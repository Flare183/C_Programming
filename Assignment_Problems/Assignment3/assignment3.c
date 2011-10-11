/****************************************************************************
   assignment3.c      Converts Days into weeks and days

   Inputs:            number1 - first number
		      number2 - second number


   Outputs:           Finds which one is greater than the other

   Written by: Jesse N. Richardson     Date: Mon, 12 Sep 2011 16:47:28 -0400


  Program Compiles Perfectly
  Program Runs Perfectly

******************************************************************************/


#include <stdio.h>

int main (void)
{
	int number1;
	int number2;

	printf("Enter a number:  ");
	scanf("%d",  &number1);

	printf("Enter another number:  ");
	scanf("%d",  &number2);

	if(number1 > number2)
		printf(" %d is greater than %d\n", number1, number2);

	if(number2 > number1)
		printf(" %d is greater than %d\n", number2, number1);

	if(number1==number2)
	  printf(" The numbers are the same");

	return 0;
};
