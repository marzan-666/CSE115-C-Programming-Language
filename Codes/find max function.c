#include<stdio.h>
int find_max(int ara[],int n);

int main()
{
    int ara[]={1,2,3,4,5,6,50,7,8,9,10,11,};
    int n=11;
    int max=find_max(ara , n);
    printf("%d\n",max);

    return 0;
}
int find_max(int ara[], int n)
{
    int max=ara[0];
    int i;
    for(i=1;i<n;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }

    return max;
}
