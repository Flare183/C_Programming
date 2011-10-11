#include <stdio.h>

int main (void)
{
  int Acount = 0;
  int Bcount = 0;
  int Ccount = 0;
  int Dcount = 0;
  int Fcount = 0;

  char grade;

  printf("Enter grade: ");
  scanf("%c", &grade);

  switch(grade)
    {
    case 'A': Acount++;
    case 'B': Bcount++;
    case 'C': Ccount++;
    case 'D': Dcount++;
    default: Fcount++;
    };
