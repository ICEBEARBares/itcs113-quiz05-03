#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

int main() {
  printf("Enter list of words (or 'quit' to exit)\n");
  char maxWord[MAX_LENGTH]; // This maxWord is used to keep the highest order

  ///// Start your code here /////
  char word[MAX_LENGTH];
  scanf("%s", word);
  while(strcmp(word,"quit") != 0 || strlen(maxWord) == 0){
    if(strcmp(word,maxWord) > 0){
      strcpy(maxWord,word);
    }
    scanf("%s", word);
  }
  ///// End your code here /////

  printf("Word with the highest order is: %s", maxWord);
  return 0;
}