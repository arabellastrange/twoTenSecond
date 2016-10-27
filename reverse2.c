/* Write a program that: prompts the user to enter a sentence, reverses the words in the sentence, and  then  prints  the  reversal  of  the  sentence  on  the  screen,  along  with  a  meaningful  descriptive message*/

#include <stdio.h>

int main(){
  int row;
  char array[80];
  char end;

  printf("Please enter the scentence you would like to reverse: ");

  for(;;){
      scanf("%[^\n]s", &array[row]);
      if (array[row] == '.' || '?' || '!')
  		{
        end = array[row];
        break;
  		}
  		row++;
  }

  printf("The scentence you entered is: ");
  printf("the last: %c", end);
  printf("%c", array[1]);
  printf("%c", array[2]);
  printf("%c", array[3]);
  printf("%c", array[4]);
  printf("%c", array[5]);
  /*for(row = 80; row > 0; row--){
    if(array[row] == ' ' && array[row + 1] == ''){
      printf("%c", end);
      break;
    }
    printf("%c", array[row]);
  }*/

  printf("\n done! \n");

  return 1;
}
