#include <stdio.h>

int calcSumGrade(array);
int calcAvgGrade(array);
int calcHighScore(array);
int calcLowScore(array);
int calcSumScore(array);

int array[10][5];

/* The method prompts user for input and after a scans calls the calcuation methods*/
int main() {
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

/*The method calculats the sum of each students' grades*/
int calcSumGrade(array){
  int i;
  int n;
  int sum;
  for (i = 0; i < 9; i++) {
    for (n = 0; n < 4; n++) {
      sum = sum + array[n][i];
    }
  printf("the sum of student %i is %i", i, sum);
  }
  return 1;
}
/*The method calculats the average for each student*/
int calcAvgGrade(array){
  int i;
  int n;
  int sum;
  for (i = 0; i < 9; i++) {
    for (n = 0; n < 4; n++) {
      sum = sum + array[n][i];
    }
  printf("the average of student %i is %i", i, sum/5);
  }
  return 1;
}
/*The method calculats the high score of every quiz*/
int calcHighScore(array){
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
  return 1;
}
/*The method calculats the low score of every quiz*/
int calcLowScore(array){
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
  return 1;
}
/*The method calculats the sum score for every quiz*/
int calcSumScore(array){
  int i;
  int n;
  int sum;
  for (n = 0; n < 4; n++){
    for (i = 0; i < 9; i++){
          sum = sum + array[i][n];
    }
  printf("the sum of quiz %i is %i", n, sum);
  }
  return 1;
}
