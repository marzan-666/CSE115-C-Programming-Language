#include<stdio.h>
int main()
{
    int a[100], n,i;
    int sum=0;
    printf("how many number you want to add? : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("sum of %d numbers is %d",n,sum);


    return 0;
}
