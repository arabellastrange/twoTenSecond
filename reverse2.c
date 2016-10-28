/* Write a program that: prompts the user to enter a sentence, reverses the words in the sentence, and  then  prints  the  reversal  of  the  sentence  on  the  screen,  along  with  a  meaningful  descriptive message*/

#include <stdio.h>
#include <string.h>

int main(){
  int row = 0;
  char array[80];
  char end = 'Z';
  char *startoflast;
  int stfindex = 0;

  printf("Please enter the sentence you would like to reverse: ");

  for(;;){
      scanf("%[^\n]s", &array[row]);
      if (array[row] != '.' || '?' || '!'){
        end = array[row];
        break;
  		}
      row++;
  }


/*get the last space in the sentence, print everything to the right, remove word from sentence repeat until 0*/
  printf("The punctuation used is: %c", end);

    startoflast = strrchr(array, 32);
    stfindex = startoflast - array;

    printf("\nthe first space is at: %i\n", stfindex);

    printf("The sentence you entered is: ");

    for(row = stfindex; row < strlen(array)- 1; row++){ /*everything from last space to end of current scentece, printed then trashed*/
      printf("%c", array[row]);
      array[row] = 'Z';
    }

  printf("\ndone! \n");

  return 1;
}
