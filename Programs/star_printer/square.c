#include <stdio.h>

/* Function Prototypes */
int sideInput (void);
int starPrinter(int k);

int i, j, k;

void main()
{
  starPrinter(5);
};

int sideInput (void)
{
  int side;

  printf("Input Number of sides: ");
  scanf("%d", &side);

  return side;
};

int starPrinter (int k)
{
  char fillCharacter = '#';
  for (j = 0; j < k; j++)
    {
      for (i = 1; i <= 4; i++)
	{
	  printf("%d", &fillCharacter);
	}
      printf("\n");
    }
};

