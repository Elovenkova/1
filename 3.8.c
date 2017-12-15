#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, delta;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    delta = tan(b) - b - tan(a) + a;
    while ((b-a) > 0.0000000001)
    {
        if (delta >= 0)
        {
            if (tan((b+a)/2) - ((b+a)/2)>0)
            {
                b = (b+a)/2;
            }
            else if (tan((b+a)/2) - ((b+a)/2)<0)
            {
                a = (b+a)/2;
            }
            else
            {
                printf("%f", (b+a)/2);
                break;
            }
        }
        else
        {
            if (tan((b+a)/2) - ((b+a)/2)>0)
            {
                a = (b+a)/2;
            }
            else if (tan((b+a)/2) - ((b+a)/2)<0)
            {
                b = (b+a)/2;
            }
            else
            {
                printf("%f", (b+a)/2);
                break;
            }
        }
    }
    printf("%f", (b+a)/2);
}
