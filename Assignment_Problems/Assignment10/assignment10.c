/*************************************************************
assignment10.c - Calculates Parking Charges
Inputs - hhIn, mmIn
Outputs - hhOut, mmOut

Written by - Jesse N. Richardson
Date: Thu, 13 Oct 2011 06:59:46 -0400

Program Compiles without errors.
Program does not run correctly

*****************************************************/

#include <stdio.h>
int calculateTime (int hhIn, int mmIn, int hhOut, int mmOut);
int calculateCharges (int calculateTime);
int totalCharge;
int printReceipt (void);

int main (void)
{
  int hhIn, mmIn;
  int hhOut, mmOut;
  printf("Enter time IN: ");
  scanf("%d:%d", &hhIn, &mmIn);	/* */

  printf("\nEnter time OUT: ");
  scanf("%d:%d", &hhOut, &mmOut);	/* */

  calculateTime(hhIn, mmIn, hhOut, mmOut);

  printReceipt();

  return 0;
};

/* calculateTime - Calculates the time total */
/* Inputs - None */
/* Outputs - timeTotal */
int calculateTime (int hhIn, int mmIn, int hhOut, int mmOut)
{
  int timeTotal = 0;

  if(mmOut > mmIn)
    timeTotal = ((hhOut - hhIn) * 60) + (mmOut - mmIn);
  /* converts hr and min to min */
  else
    /* mmOut < mmIn) */
    timeTotal = (((hhOut - hhIn) - 1) * 60) + (mmIn - mmOut);
  /* converts to min carrying 60min from removing an hour */

  return timeTotal;
};
/* calculateCharges - Calculates the charges */
/* Inputs - None */
/* Outputs - totalCharge */
int calculateCharges (int calculateTime)
{
  float totalCharge = 0.00;
  float charge1 = 2.00;		/*$2.00 for first 3 hrs */
  float charge2 = 0.50;		/*$0.50 for every hr after */
  int hrBal;
  int hhTotal;
  int mmTotal;

  hhTotal = calculateTime / 60;
  mmTotal = calculateTime % 60;

  while (totalCharge < 10)	/*$10.00 maximum per day */
    {
      if (hhTotal > 3)
	{
	  hrBal = hhTotal - 3;
	  totalCharge = (hrBal * charge2) + charge1;

	  if (mmTotal > 0)
	    totalCharge = totalCharge + charge2;
	}
      else
	totalCharge = charge1;
    }

  return totalCharge;
};

/* printReceipt - Prints the Receipt */
/* Inputs - None */
/* Outputs - Calculated Times and Charges */
int printReceipt (void)
{
  int hhIn, mmIn;
  int hhOut, mmOut;
  printf("\nParking Receipt\n");
  printf("Time IN: %d:%d\n", hhIn, mmIn);
  printf("Time OUT: %d:%d\n", hhOut, mmOut);
  printf("Total Time is: %d hours, %d minutes\n", calculateTime(hhIn, mmIn, hhOut, mmOut));
  printf("Total Charge: $", "%.2f\n", calculateCharges(calculateTime(hhIn, mmIn, hhOut, mmOut));
  printf("--------------------------------\n");

  return 0;
};
