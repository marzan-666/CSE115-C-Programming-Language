#include<stdio.h>
double pi=3.14;
void my_fnc(){

pi=3.1416;
return ;
}
int main()
{
    printf("%0.2lf\n",pi);
    my_fnc();
    printf("%0.4lf\n",pi);

    return 0;
}
