#include <stdio.h>

void calcSumGrade(array);
void calcAvgGrade(array);
void calcHighScore(array);
void calcLowScore(array);
void calcSumScore(array);

/* method prompts user for input and scans result call calcuation methods*/
int main() {
  int array[10][5];
  int i;
  int n;
  printf("Please enter the rows of a 5 grades for 10 studets: ");
  for(i = 0; i <= 9; i++){
    for(n = 0; n <= 4; n++){
      scanf("%i", &array[i][n]);
    }
  }
  calcSumGrade(array);
  calcAvgGrade(array);
  calcHighScore(array);
  calcLowScore(array);
  calcSumScore(array);
  return 1;
}

/*calculats the sum of each student of the array*/
void calcSumGrade(array){
  int i;
  int n;
  int sum;
  for (i = 0; i < 9; i++) {
    for (n = 0; n < 4; n++) {
      sum = sum + array[n][i];
    }
  printf("the sum of student %i is %i", i, sum);
  }
}
/*calculats the average of each student of the array*/
void calcAvgGrade(array){
  int i;
  int n;
  int sum;
  for (i = 0; i < 9; i++) {
    for (n = 0; n < 4; n++) {
      sum = sum + array[n][i];
    }
  printf("the average of student %i is %i", i, sum/5);
  }
}
/*calculats the high score of the array*/
void calcHighScore(array){
  int i;
  int n;
  int max;
  for (n = 0; n < 4; n++){
    for (i = 0; i < 9; i++){
      if(array[n][i] >= max){
          max = array[i][n];
      }
    }
  printf("the high score of quiz %i is %i", n, max);
  }
}
/*calculats the low score of the array*/
void calcLowScore(array){
  int i;
  int n;
  int min = array[0][0];
  for (n = 0; n < 4; n++){
    for (i = 0; i < 9; i++){
      if(array[n][i] <= min){
          min = array[i][n];
      }
    }
  printf("the low score of quiz %i is %i", n, min);
  }
}
/*calculats the sum score of every quiz*/
void calcSumScore(array){
  int i;
  int n;
  int sum;
  for (n = 0; n < 4; n++){
    for (i = 0; i < 9; i++){
          sum = sum + array[i][n];
    }
  printf("the sum of quiz %i is %i", n, sum);
  }
}
