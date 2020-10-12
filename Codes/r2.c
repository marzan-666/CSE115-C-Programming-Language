#include<stdio.h>
int test(int n)
{
    if(n<10){
        return 0;
    }
    else{
        return(n+test(n-5));
    }
}
void main()
{
    int n=30,value;
    value=test(n);
    printf("value from test is : %d",value);
}
