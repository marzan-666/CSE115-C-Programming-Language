#include <stdio.h>
int fact(int n);

int main()
{
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Factorial of %d! = %d\n", i, fact(i));
    }
    return 0;
}
int fact(int n)
{
    if (n >= 1)
        return n*fact(n-1);
    else
        return 1;
}
