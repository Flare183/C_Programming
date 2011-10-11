/*****************************************************************************************
     5digits.c - This program gets a five digit number from the user and seperates
		        it into the digits which constitutes it without the use if loops
		        or other decision constructs.

     Inputs: getnumber - retreves a five digit number from the user

    Outputs: output of 5 numbers delimited by three spaced printed on screen

         Written by: Ivan S. Ramey                    Date: 1/20/2010

    Program compiles without error
    Program runs correctly

*****************************************************************************************/

#include <stdio.h>

int main(void) 
{
	int getnumber;
	int remaining;
	int printedint;

	printf("Please enter a FIVE digit number: ");
	scanf("%d", &getnumber);

	printedint=getnumber/10000;
	remaining=getnumber%10000;
	printf("%d   ", printedint);

	printedint=remaining/1000;
	remaining%=1000;
	printf("%d   ", printedint);

	printedint=remaining/100;
	remaining%=100;
	printf("%d   ", printedint);

	printedint=remaining/10;
	remaining%=10;
	printf("%d   ", printedint);

	printedint=remaining;
	printf("%d   \n", printedint);

	return(0);
}
