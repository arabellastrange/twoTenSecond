/* Modify your program from Exercise 1 so that it prompts for 5 quiz grades for each  of  10  students,  then  computes  the  total  score  and  average  score  for  each  student,  and  the average score, high score and low score for each quiz. Your program must use meaningful messages for user input and output */

#include <stdio.h>

/* Method prompts an scans user input, then uses values to calcuate the sum and average of each student as well as the high score, low score and sum of each quiz*/
int main() {
  int array[10][5];
  int row = 0;
  int col = 0;
  int max = 0;
  int min = array[0][0];
  int sum;

  for(row = 0; row < 10; row++){
    for(col = 0; col < 5; col++){
      printf("Please enter the student %i mark for quiz %i: ", row, col);
      scanf("%i", &array[row][col]);
    }
  }

  for (row = 0; row < 10; row++) {
    sum = 0;
    for (col= 0; col < 5; col++) {
      sum = sum + array[row][col];
    }
    printf("the sum for student %i is %i \n", row, sum);
  }

  for (row = 0; row < 10; row++) {
    sum = 0;
    for (col= 0; col < 5; col++) {
      sum = sum + array[row][col];
    }
    printf("the average for student %i is %i \n", row, sum/5);
  }

  for(col = 0; col < 5; col++){
    for(row = 0; row < 10; row++){
      if(array[row][col] > max){
        max = array[row][col];
      }
    }
    printf("for quiz %i the high score is %i \n", col, max);
  }

  for(col = 0; col < 5; col++){
    for(row = 0; row < 10; row++){
      if(array[row][col] < min){
        min = array[row][col];
      }
    }
    printf("for quiz %i the low score is %i \n", col, min);
  }

  for(col = 0; col < 5; col++){
    for(row = 0; row < 10; row++){
      sum = sum + array[row][col];
    }
    printf("for quiz %i the sum is %i \n", col, sum);
  }

  return 1;
}
