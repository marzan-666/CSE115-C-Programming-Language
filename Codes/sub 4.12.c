#include <stdio.h>
int main ()
{
    int a,b,c;
    for (a=1; a<=3 ; a++)
    {
        for(b=1;b<=3;b++)
        {
            if(b!=1)
            {
                for(c=1;c<=3;c++)
                {
                    if(c!=a && c!=b)
                    {
                        printf("%d, %d, %d\n",a,b,c);
                    }
                }
            }
        }
    }

    return 0;
}

