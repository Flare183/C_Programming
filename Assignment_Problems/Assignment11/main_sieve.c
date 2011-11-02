/**********************************************************************
Main_sieve.c - Method of figuring out the prime numbers

Inputs - SIZE

Outputs - pc - prime numbers

Written by Jesse N. Richardson   Date: Thu, 20 Oct 2011 05:43:19 -0400
**********************************************************************/



#include <stdio.h>
#define SIZE 10000
int main(void)
{
    int num[SIZE];
    int j;
    int i;
    int pc;

    pc = 0;

    for (j=1; j<SIZE; j++)
      {
	num[j]=1;
	//printf ("%d %d\n",j, num[j]);
      }

    num[1]=0;

    for (j=2; j<SIZE; j++)
      {
      if (num[j]==1)
	  {
	  for (i=j+1; i<SIZE; i++)
	      {
		if ((i%j)==0)
		  {
		  num[i]=0;
		}
	    }
	}
    }

    /*    for (j=1; j<SIZE; j++)
	  {
	  printf ("b: %d %d\n",j, num[j]);
	  }
    */

    for (j=1; j<SIZE; j++)
      {
	if (num[j]==1)
	  {
	    pc=pc+1;
	    printf ("The number %d is the %d prime number between 1 and %d.\n", j, pc, SIZE);
	  }
      }
    return (0);
}
