/* Write a program that: prompts the user to enter a sentence, reverses the words in the sentence, and  then  prints  the  reversal  of  the  sentence  on  the  screen,  along  with  a  meaningful  descriptive message*/

#include <stdio.h>
#include <string.h>

int main(){
  int row = 0;
  char array[80];
  char end = 90;
  char *startoflast;
  int stfindex = 0;
  int last = 0; 

  printf("Please enter the sentence you would like to reverse: ");

  for(row = 0 ; row < 81; row++){
      scanf("%[^\n]s", &array[row]);
      if (array[row] == 46 || 63 || 33){
	break;
  	}
  }

  last = strlen(array)- 1;
  end = array[last];

  printf("The sentence you entered is: ");

  for(;;){
	  /*get the last space in the sentence, if null then at first word*/
	    startoflast = strrchr(array, 32);

	    if(startoflast == NULL){
		row = 0;
		while(array[row] != 90){
			printf("%c", array[row]);
			row++;
		}
		break;
	    }
	    stfindex = startoflast - array;

	  /*everything from last space to end of current scentece, is printed then trashed*/
	    for(row = stfindex + 1; row < last; row++){
		while(array[row] != 90){
		      printf("%c", array[row]);
		      array[row] = 90;
		}
	    }
	  /*trash trailing spaces*/
	    array[stfindex] = 90;
	    array[last+1] = 90;
	    printf(" ");
 }

  printf("%c", end);
  printf("\ndone! \n");

  return 1;
}
