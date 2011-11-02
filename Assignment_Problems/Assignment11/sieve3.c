#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

void sieve()
{
  int array[SIZE];
  int i,j;
  char *sieve = calloc(array, 1);
  for(i = 2; i*i <= array; i++)
    {
      if(!sieve[i])
	{
	  for(j = i + i; j < array; j+=i) { sieve[j] = 1; }
	}
    }
  for (i = 2; i < array; i++)
    {
      if (!sieve[i]) { printf("%d ", i); }
    }
  printf("\n");
  free(sieve);
}

int main()
{
  sieve(1000);
  return 0;
}
