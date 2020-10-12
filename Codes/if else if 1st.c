#include <stdio.h>
int main ()
{
    int n ;
    n=10;
    if(n<0)
    {
        printf("the number is negative\n");
    }
    else if (n>0)
    {
        printf("the number is positive\n");
    }
    else if (n==0)
        printf("the number is zero\n");


    return 0;
}

