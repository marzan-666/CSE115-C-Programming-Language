#include<stdio.h>

char character(char c);

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    char toupper=character(ch);
    printf("the capital of the character: %c",toupper);

    return 0;
}
char character(char c)
{
if(c>='a' && c<='z'){
    c='A' + c-'a' ;
}
return c;
}
