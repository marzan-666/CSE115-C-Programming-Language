// Reverse a string in c without using temp
//String reverse using strrev in c programming language



#include<string.h>
int main(){
    char str[50];
    char *rev;
    printf("Enter any string : ");
    scanf("%s",str);
    rev = strrev(str);

    printf("Reverse string is : %s",rev);

    return 0;
}

