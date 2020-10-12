#include <stdio.h>
int main()
{
    int n = 5 ;
    int i = 1 ;
    while (i<=10)
    {
        i++ ;
    }
    if(i % 2 == 0)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }

    return 0 ;
}
