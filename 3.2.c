#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, i;
    a = 1;
    b = 1;
    scanf("%d", &n);
    for(i=0; i<n-2; i++)
    {
        if (i==0)
        {
            a+=b;
        }
        else
        {
            if (a>b)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }
        }
    }
    if (a>b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
}
