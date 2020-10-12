#include<stdio.h>

int fact(int n);

int main()
{
    int i,m;
    printf("enter a number: ");
    scanf("%d",&m);

    for (i=1;i<=m;i++){
        printf("%d! = %d\n",i,fact(i));

    }
    return 0;
}
int fact(int n)
{
    int i;
    int factorial=1;

    for(i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
