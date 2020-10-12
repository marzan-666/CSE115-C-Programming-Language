#include<stdio.h>
int main()
{
    int number[20],n,i,j,temp;
    printf("how many numbers :");
    scanf("%d",&n);
    printf("enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(number[i]>number[j])
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
    printf("\nThe ascending list is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",number[i]);
    }


    return 0;
}
