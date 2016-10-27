#include <stdio.h>

int length(array);
void reverse(array);

int main(){
	char array[3];
	int i = 0;
	printf("Please enter the scenetce you would like to reverse: ");
	for(;;;){
		scanf(" %c", &array[i]);
		if (array[i] == '.' || '?' || '!')
		{
			break;
		}
		i++;
	}
	reverse(array);
}

void reverse(array){
	int i = 0;
	int n = 0;
	char word[0][0];
	for(;;;){
		if(array[i] != '.' || '?' || '!'){
			for(;;;){
				if(array[i] !=" "){
					word[n][i] = array[i]; /*replcing the one index of word not itteration????*/
					i++
				}
			}
			n++;
		}
		else{
			for(n = lastword ; n > 0 ; n++){
				for (i = 0; i < lengthofn ; i++)
				{
					printf("the reversed sentence is:  %c", word[n][i]);
				}
			}
			break;
		}
	}
}
}