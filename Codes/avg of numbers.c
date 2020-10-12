#include<stdio.h>
int main()
{
    int n,sum=0,num,avg;
    printf("how many kinds of num do you want\n");
    for(n=1;n<=10;n++)
    {
        scanf("%d",&n);
        sum=sum+num;
    }
    avg=sum/n ;
    printf("avg no. is :%d",avg);

    return 0;
}
