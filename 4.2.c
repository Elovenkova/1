#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int n, i, j, b, A[100], B[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
    }

    int max;
    max = B[0];
    for(i = 0; i < n; i++)
    {
        if (B[i] > max)
        {
            max = B[i];
        }
    }

    int X, Y = B[0], num = 0;
    for(i = 0; i < 10000; )
    {
        b = 0;
        for(j = 0; j < n; j++)
        {
            if (A[j] != max)
            {
                if ((A[j] <= i) && (B[j] - A[j]) >= b && (B[j] >= Y))
                {
                    b = (B[j] - A[j]);
                    X = A[j];
                    Y = B[j];
                    num = j;
                }
            }
        }
        if (A[num] != max)
        {
            printf("%d %d\n", X, Y);
        }
        A[num] = max;
        i = Y;
    }
}
