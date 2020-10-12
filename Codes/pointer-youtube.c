#include <stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    *p=5;
    *q=6;
    printf("%d %d %d %d\n",*p,a,*q,b);
    p=q;
    printf("%d %d %d %d\n",*p,a,*q,b);
    a=10,b=20;
    printf("%d %d %d %d",*p,a,*q,b);


    return 0;
}

