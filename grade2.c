#include <stdio.h>

/* The method prompts user for input and after a scans calls the calcuation methods*/
int main() {
  int i;
  int n;
  int sum;
  int array[10][5];
  printf("Please enter the rows of a 5 grades for 10 studets: ");
  for(n = 0; n <= 5; n++){
    for(i = 0; i <= 10; i++){
      scanf("%i", &array[i][n]);
    }
  }

  for (n = 0; n < 5; n++){
    sum = 0 ;
    for (i = 0; i < 10; i++) {
      sum = sum + array[i][n];
    }
  printf("the sum of student %i is %i \n", i, sum);
  }
  for (n = 0; n < 5; n++) {
    sum = 0;
    for (i = 0; i < 10; i++) {
      sum = sum + array[i][n];
    }
  printf("the average of student %i is %i \n", i, sum/5);
  }
  int max;
  for (n = 0; n < 5; n++){
    for (i = 0; i < 10; i++){
      if(array[i][n] >= max){
          max = array[i][n];
      }
    }
  printf("the high score of quiz %i is %i \n", n, max);
  }
  int min = array[0][0];
  for (n = 0; n < 5; n++){
    for (i = 0; i < 10; i++){
      if(array[i][n] <= min){
          min = array[i][n];
      }
    }
  printf("the low score of quiz %i is %i \n", n, min);
  }
  for (n = 0; n < 5; n++){
    sum = 0;
    for (i = 0; i < 10; i++){
          sum = sum + array[i][n];
    }
  printf("the sum of quiz %i is %i \n", n, sum);
  }
  return 1;
}
