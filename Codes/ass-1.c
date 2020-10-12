#include<stdio.h>
void main()

{
    char line[80];
    int vowels=0,consonants=0,digits=0,whitespaces=0,other=0;
    printf("enter a line of text");
    scanf("%s",line);

    line_scanner(line,vowels,consonants,digits,whitespaces,other);
}
void line_scanner(char line[],int *pv, int *pc, int *pd, int *pw, int *po)
{
    int count=line;char ch;
    while((ch=toupper(line[count]))!='\0')
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            *pv++;
        else if(ch>='A' && ch<='Z')
            *pc++;
        else if(ch>='0' && ch<='9')
            *pd++;
        else if(ch==' ' )
            *pw++;
        else
            *po++;
        count++;
    }
    printf("vowels: %d\n",vowels);
    printf("consonants: %d\n",consonants);
    printf("digits: %d\n",digits);
    print("whitespaces: %d\n",whitespaces);
    printf("others: %d\n",others);

}
