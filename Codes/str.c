#include<stdio.h>


char str[100];
i=0;

while(str[i]!= 0){
    if(str[i]>='a' && str[i]<='z'){
        str[i]='A'+str[i]-'a' ;
        i++;
        printf("%s",str);
    }
}
char toupper(char c)
{
    if (c>='a' && c<='z'){
        c='A'+c-'a' ;
    }
    return c;
}
