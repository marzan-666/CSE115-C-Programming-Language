#include <stdio.h>
int result(int n1,int n2);
int main()
{
    int base,power;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number: ");
    scanf("%d",&power);
    printf("%d^%d = %d", base, power, result(base,power));
    return 0;
}
int result(int base,int power)
{
    if ( power!=1 )
        return (base*result(base,power-1));
}
