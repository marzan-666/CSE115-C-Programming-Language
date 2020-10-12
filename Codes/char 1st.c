#include <stdio.h>
int main()
{
    char ch;
    printf("enter the first letter of your name : ");
    ch = getchar();//scanf("%c",ch); <<< eita dileo hoy..
    printf("the first letter of your name is : %c\n",ch);
    return 0;
}
