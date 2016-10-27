#include <stdio.h>


/* method prompts user for input and scans result call calcuation methods*/
int main() {
  int array[5][5];
  int i;
  int n;

  printf("Please enter the rows of a 5x5 array here: ");
  for(i = 0; i <= 4; i++){
    for(n = 0; n <= 4; n++){
      scanf("%i", &array[i][n]);
    }
  }
  int sum;
  for (i = 0; i < 5; i++) {
    sum = 0;
    for (n = 0; n < 5; n++) {
      sum = sum + array[i][n];
    }
  printf("the sum of row %i is %i \n", i, sum);
  }

  for (n = 0; n < 5; n++){
    sum = 0;
    for (i = 0; i < 5; i++){
      sum = sum + array[i][n];
    }
  printf("the sum of col %i is %i \n", n, sum);
  }
  return 1;
}

