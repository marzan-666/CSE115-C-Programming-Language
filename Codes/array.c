#include <stdio.h>
#include <string.h>
int main()
{

  char word[100];
  int end;
  char x;
  printf("Enter a word and it will display in reverse order: ");
  gets(word);
  end = strlen(word) - 1;
  for (x = end; x >= 0; x--){
       printf("%c",word[x] );
  }
  return 0;
}
