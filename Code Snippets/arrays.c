/* Bubble Sort Program */

#define SIZE 10
#include <stdio.h>
#include <string.h>

int main (void)
{
  int a[SIZE];
  int swap;
  for(pass = 1; pass < SIZE; pass++)
    {
      swap = 0;
      for(i = 0; i < SIZE -1;i++)
	{
	  if(a[i] > a[i + i]) /* Convert this to a string compare */
	    {
	      hold = a[i]; /* Convert this into */
	      a[i] = a[i+i]; /* using the strcpy function */
	      swap = 1;
	    }
	}
      if(swap = 1)
	break;
    }
}
