/****************************************************************************
   assignment1.c      Converts Days into weeks and days

   Inputs:            totalDays - Total Days


   Outputs:           Weeks - Total Weeks
		      Days - Converted Days

   Written by: Jesse N. Richardson     Date: Mon, 05 Sep 2011 18:46:54 -0400


  Program Compiles Perfectly
  Program Runs Perfectly

******************************************************************************/



#include <stdio.h>

int main (void)
{
  int days;
  int weeks;
  int totalDays;


  printf("Please enter the number of the days\n");
  scanf("%d", &totalDays);

  weeks = totalDays / 7;

  days = totalDays % 7;

  printf("Weeks: %d\n", weeks);
  printf("Days: %d\n", days);

  return 0;
};
