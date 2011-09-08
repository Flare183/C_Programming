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
