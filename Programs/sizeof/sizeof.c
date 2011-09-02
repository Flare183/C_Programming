/*****************************************************************************
    sizeof.c

    Inputs:





****************************************************************************/
#include <stdio.h>


int main (void)
{
  int size1;
  short size2;
  long size3;
  unsigned int size4;
  unsigned long size5;
  unsigned short size6;
  char size7;
  unsigned char size8;
  float size9;
  double size10;

  printf("%zu\n", sizeof size1);
  printf("%zu\n", sizeof size2);
  printf("%zu\n", sizeof size3);
  printf("%zu\n", sizeof size4);
  printf("%zu\n", sizeof size5);
  printf("%zu\n", sizeof size6);
  printf("%zu\n", sizeof size7);
  printf("%zu\n", sizeof size8);
  printf("%zu\n", sizeof size9);
  printf("%zu\n", sizeof size10);


  return 0;
};
