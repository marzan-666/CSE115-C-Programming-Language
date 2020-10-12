#include <stdio.h>
int main()
{
    int number , remainder ;
    number = 4 ;
    remainder = number % 2;
    if (remainder == 0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }


    return 0 ;
}
