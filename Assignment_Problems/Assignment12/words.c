/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define SIZE 15
#define MAXWORDS 25


void sorter(int *array, int size)



int main(void)
{
  

}

void sorter (int *array, int size)
{
  int swapped;
  int i;
  for (i = 1; i < size; i++)
    {
      swapped = 0      /* this flag is to check if the array is already*/
		       /* sorted */
      int j;
      for (j = 0; j < size - i; j++)
	{
	  if (array[j] > array[j + 1])
	    {
	      int temp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = temp;
	      swapped = 1;
	    }
	}
      if (!swapped)
	{
	  break;		//if it is sorted then stop
	}
    }
}
