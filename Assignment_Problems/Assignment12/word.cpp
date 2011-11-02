// word sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

#define SIZE 25
#define LENGTH 15

char getWords(char ar[SIZE][LENGTH]);
void printWords(char ar[SIZE][LENGTH], int i);
void sortWords(char ar[SIZE][LENGTH],  int num);



int main(void)
{
	char words[SIZE][LENGTH];
	int string;



	string = getWords(words);
	printWords(words, string);


	return 0;

}


char getWords(char ar[SIZE][LENGTH])
{
  char answer = 'y';
  char count = 0;
  char size[80];

  while (count != SIZE && answer != 'n')
    {
      printf ("enter word: ");
      scanf ("%s", size);

	if (strlen(size)<LENGTH)
	{
	strcpy(ar[count], size);
	}
	printf ("do you have another word? y or n: ");
	scanf (" %c", &answer);

	if (answer == 'y')
	count++;
	}
	return count;
}



void printWords( char ar[SIZE][LENGTH], int i)
{

	int j;
	for (j = 0; j<LENGTH; j++)
	{
	printf ("%s\n", ar[j]);
	}
}



void sortWords(char ar[SIZE][LENGTH], int num)
{
	int i;
	int j;
	int swap;
	int pass=0;
	char size[LENGTH];
	for (i=0; i<SIZE; i++)
	{
	swap = 0;
	for (j=0; j< pass- i; j++)
	{
	if (strcmp(ar[i], ar[i+1])>1)
	{
	strcpy (ar[i], size);
	strcpy (ar[i+1], ar[i]);
	strcpy (size, ar[i]);
	swap = 1;
	}
		if (swap == 0)
		break;
	}
	}
}
