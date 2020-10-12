#include<stdio.h>
int test (int n)
{
    printf("the value of n = %d\n",n);
    if(n<=1){
        return 0;
    }
    else{
        test(n-1);
    }
    return 0;
}
void main()
{
    int m= 50;
    test(50);
}
