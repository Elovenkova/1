#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i;
    int A[4], B[4];
    for(i = 0; i < 4; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
    }
    double a, b, c, S;
    a = pow(pow(A[0]-A[1], 2) + pow(B[0]-B[1], 2), 0.5);
    b = pow(pow(A[2]-A[1], 2) + pow(B[2]-B[1], 2), 0.5);
    c = pow(pow(A[0]-A[2], 2) + pow(B[0]-B[2], 2), 0.5);
    if (c > a && c > b)
    {
        S = a*b;
        printf("%lf", S);
    }
    if (a > b && a > c)
    {
        S = b*c;
        printf("%lf", S);
    }
    if (b > a && b > c)
    {
        S = a*c;
        printf("%lf", S);
    }
}

