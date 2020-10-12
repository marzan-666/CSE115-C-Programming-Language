#include <stdio.h>
void find_out(char x[100], int a, int b, int c, int  d,int e);// EITA PROTOTYPE NA DILEO CODE RUN HOY. . .
int main()
{
    char str[100];

    int  V,C,D,S,B;
    V=C=D=S=B=0;
    int found;
    printf("Enter a string:\n");
    gets(str);
    find_out(str,V,C,D,B,S);

    return 0;
}
void find_out(char x[100], int a,int b,int c,int d,int e)
{
    char *ptr;
    ptr=x;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u'){
            a++;
        }
        else if(*ptr>='a'&& *ptr<='z' || *ptr>='A'&& *ptr<='Z'){
            b++;
        }
        else if(*ptr>='0'&& *ptr<='9'){
            c++;
        }
        else if(*ptr==' '){
            d++;
         }
        else{
            e++;
        }
            ptr++;
    }
    printf("Total number of VOWELS: %d, CONSONANT: %d, NUMBER:%d ,SYMBOL:%d and BLANK SPACE:%d\n",a,b,c,d,e);
}
//CODED BY FM..
