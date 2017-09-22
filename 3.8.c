#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;
    scanf ("%d", &a);
    scanf ("%d", &b);
    while ((b-a) > 0.0000000001)
    {
        if (tan((b-a)/2)>0)
        {
            b = (b-a)/2;
        }
        else if (tan((b-a)/2)<0)
        {
            a = (b-a)/2;
        }
        else
        {
            printf("%d", (b-a)/2);
            break;
        }
    }
    printf("%d", (b-a)/2);
}
