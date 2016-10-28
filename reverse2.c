/* Write a program that: prompts the user to enter a sentence, reverses the words in the sentence, and  then  prints  the  reversal  of  the  sentence  on  the  screen,  along  with  a  meaningful  descriptive message*/

#include <stdio.h>
#include <string.h>

int main(){
  int row = 0;
  char array[80];
  char word[20][20];
  char end = '*';
  int wordno;

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

  int startoflast = strrchar(array, 32);
  for (wordno = startoflast; wordno > strlen(array) ; wordno++)
  {
    /* save to word array remove from gen array */
    for(row =0; row > strlen(word); row++){
      word[wordrow][wordno] = array[row];
    }
  }
  printf("%c", array[row]);

  printf("\n done! \n");

  return 1;
}
