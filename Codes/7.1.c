#include<stdio.h>
double add(double num1 , double num2) //int nile output 5.000000 e ASBE..
{
    double sum=num1 + num2 ;
    return sum ;
}

int main ()

{
    double a,b,c;
    a=2.8;b=2.7;
    c=add(a, b);
    printf("%lf\n",c);

    return 0;
}
