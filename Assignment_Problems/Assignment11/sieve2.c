/* Finding Prime Numbers Using The Sieve Of Eratosthenes*/

#define SIZE 1000
#include <stdio.h>
void main()
{
  int num[SIZE], i, j;

  for(i = 0;i <= 1001;i++)     /*Fill num with the first 100 numbers*/
       num[i] = i + 1;

     for(i = 1;i <= 1001;i++)
       {
	 if(num[i] != 0)
	 {
	      for(j=(i + 1);j <= 1001;j++)
	      {
		   if(num[j] != 0)
		   {
			if((num[j] % num[i]) == 0)     /*check if num[j]*/
			num[j] = 0;/*is a multiple of num[i]*/
		      /*if it is a multiple then set it to 0*/
		      }
		 }
	    }
       }

     for(i = 0; i <= 1000;i++)
       {
	 if(num[i] != 0) /*Print all non zero numbers (prime numbers)*/
	   printf("\n%d",num[i]);
       }
}
