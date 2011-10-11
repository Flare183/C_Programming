#include <stdio.h>


int
main (void)
{

  int Acount = 0;
  int Bcount = 0;
  int Ccount = 0;
  int Dcount = 0;
  int Fcount = 0;

  char grade;

  printf ("Enter grade: ");
  scanf ("%c", &grade);

  if (grade == 'A')
    {
      Acount++;
    };
  else
  {
    if (grade == 'B')
      {
	Bcount++;
      };
    else
  if (grade == 'C')
    {
      Ccount++;
    };
