/**************************************************************************
 * Assessment Title: Assessment 2
 *
 * Number of Submitted C Files: 3
 *
 * Date: 27.10.2016
 *
 * Author: CHADHA DEGACHI, Reg no: 201505298
 *
 * Personal Statement: I confirm that this submission is all my own work.
 *
 *          (Signed) CHADHA DEGACHI
 **************************************************************************/

 /*Write a program that: prompts the user to enter the rows of a 5x5 array of integers, reads the input in,  and  then  prints on  the  screen the  row  sums  and  the  column  sums, along  with meaningful descriptive messages. Your program must use meaningful messages for the user prompts*/

#include <stdio.h>

/* Method prompts and scans user input then uses value to calcualte the sum of each row and column*/
int main() {
  int array[5][5];
  int row;
  int col;

  for(row = 0; row < 5; row++){
    for(col = 0; col < 5; col++){
      printf("Please enter a value: ");
      scanf("%i", &array[row][col]);
    }
  }
  int sum;
  for (row = 0; row < 5; row++) {
    sum = 0;
    for (col = 0; col < 5; col++) {
      sum = sum + array[row][col];
    }
  printf("\tThe sum of row %i is: %i \n", row, sum);
  }

  for (col = 0; col < 5; col++){
    sum = 0;
    for (row = 0; row < 5; row++){
      sum = sum + array[row][col];
    }
  printf("\tThe sum of col %i is: %i \n", col, sum);
  }
  return 1;
}
