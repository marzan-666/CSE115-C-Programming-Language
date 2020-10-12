#include <stdio.h>
int main()
{
    int i, m, n, k=0;
    scanf("%d",&n);

    for(i=1; i<=n; ++i, k=0)
    {
        for(m=1; m<=n-i; ++m)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    return 0;
}
