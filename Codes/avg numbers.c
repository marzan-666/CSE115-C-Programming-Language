#include<stdio.h>
int main()
{
    int i,n,sum,num,avg;
    sum=0;
    printf("ENTER value for n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("ENTER number :");
        scanf("%d",&num);
        sum=sum+num;
    }
    avg=sum/n ;
    printf("avg number is :%d",avg);

    return 0;
}
