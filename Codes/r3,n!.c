#include<stdio.h>
int factorial (int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
}
void main ()
{
    int number,fact;
    printf("enter a number to find factorial :");
    scanf("%d",&number);
    fact=factorial(number);
    printf("result is : %d",fact);
}
