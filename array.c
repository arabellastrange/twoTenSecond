#include <stdio.h>

int calcSumRow(array);
int calcSumCol(array);

int array[5][5];

/* method prompts user for input and scans result call calcuation methods*/
int main() {
  int i;
  int n;
  printf("Please enter the rows of a 5x5 array here: ");
  for(i = 0; i <= 4; i++){
    for(n = 0; n <= 4; n++){
      scanf("%i", &array[i][n]);
    }
  }
  calcSumRow(array);
  calcSumCol(array);
  return 1;
}

/*calculats the sum of each row of the array*/
int calcSumRow(array){
  int i;
  int n;
  int sum;
  for (i = 0; i < 5; i++) {
    for (n = 0; n < 5; n++) {
      sum = sum + array[i][n];
    }
  printf("the sum of row %i is %i", i, sum);
  }
  return 1;
}
/*calculats the sum of each colum of the array*/
int calcSumCol(array){
  int i;
  int n;
  int sum;
  for (n = 0; n < 5; n++){
    for (i = 0; i < 5; i++){
      sum = sum + array[i][n];
    }
  printf("the sum of col %i is %i", n, sum);
  }
  return 1;
}
