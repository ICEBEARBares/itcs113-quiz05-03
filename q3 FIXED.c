#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

int main() {
  printf("Enter list of words (or 'quit' to exit)\n");
  char maxWord[MAX_LENGTH]; // This maxWord is used to keep the highest order

  ///// Start your code here /////
  /////
  char check[MAX_LENGTH];
  scanf("%s",maxWord);
  do
  {
    scanf("%s",check);
    if (strcmp(check,"quit") == 0)
    {
      break;
    }
    if (strncmp(check,maxWord,1) > 0)
    {
      strcpy(maxWord,check);
    }
  } while (strcmp(check,"quit") != 0);
  ///// End your code here /////

  printf("Word with the highest order is: %s", maxWord);
  return 0;
}