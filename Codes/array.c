#include<Stdio.h>
int main()
{
    int n[10],sum=0,i;
    float avg;
    for (i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        sum=sum+n[i];
        avg=sum/10;
        printf("the sum is %d",sum);
        printf("\nThe average is %f",avg);
    }


    return 0 ;
}
