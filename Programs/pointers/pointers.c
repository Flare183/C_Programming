#include <stdio.h>
#include <strings.h>


int main()
{
  int num1[5] = {2, 4, 6, 8, 10};
  int num2[5] = {3, 6, 9, 12, 15};
  int sum[5];

  // addarray(arr1, arr2, arr3)
  // Sums up arr1, and arr2, and place them into arr3

  addarray(arr1, arr2, arr3);

  printf("The sum of the arrays: %d\n", &sum);
}


int addarray(int *arr1, int *arr2, int *arr3)
{
  int i;
  for(i = 0; i < 5; i++)
    *(arr3 + i) = *(arr1 + 1) + *(arr2 + i)

