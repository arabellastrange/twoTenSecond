#include <stdio.h>
#include <string.h>

int main(){
    int i,j;
    char words[]= "this is a test";
    int L=strlen(words);

    for(i = 0; i < L; ++i) {
      int wordstart = -1;
      int wordend = -1;
      if(words[i] != ' ') 
      {
        wordstart = i;

        for(j = wordstart; j < L; ++j) {
          if(words[j] == ' ') {
            wordend = j - 1;
            break;
          }
        }
        if(wordend == -1)
          wordend = L-1;
        for(j = wordstart ; j <= (wordend + wordstart) / 2 ; ++j) {
          char temp = words[j];
          words[j] = words[wordend - (j - wordstart)];
          words[wordend - (j - wordstart)] = temp;
        }
        i = wordend;
      }
    }
    printf("reversed string is %s: \n",words);
    return 0;   
}