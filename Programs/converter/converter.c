#include <stdio.h>
#define MAX 79

int main (void)
{
  char res, r;
  int i, k = 0, y;
  long j = 0, l = 0, o = 0;
  while (1)
    {
      printf ("Enter Any Number To Be Converted : ");
      scanf ("%ld", &j);
      l = j;
      o = l;
      k = 0;
      if (j > 2145555550)
	{
	  printf ("The Number Is Greater Than Range");
	  break;
	}
      else
	{
	  printf ("Binary Equivalent: ");
	  y = MAX;
	  while (j > 0)
	    {
	      k = j % 2;
	      j = j / 2;
	      y--;
	      printf ("%d", k);
	    }
	  printf("\n");
	  printf("Hexadecimal Equivalent: ");
	  y = MAX;
	  while (l > 0)
	    {
	      k = l % 16;
	      l = l / 16;
	      y--;
	      if (k <= 9)
		{
		  printf ("%d", k);
		}
	      if (k == 10)
		{
		  printf ("A");
		}
	      if (k == 11)
		{
		  printf ("B");
		}
	      if (k == 12)
		{
		  printf ("C");
		}
	      if (k == 13)
		{
		  printf ("D");
		}
	      if (k == 14)
		{
		  printf ("E");
		}
	      if (k == 15)
		{
		  printf ("F");
		}
	    }
	  printf("\n");
	  printf ("Octal Equivalent: ");
	  y = MAX;
	  while (o > 0)
	    {
	      k = o % 8;
	      o = o / 8;
	      y--;
	      printf ("%d", k);
	    }
	  printf("\n");
	  break;
	}
    }
  return 0;
}
