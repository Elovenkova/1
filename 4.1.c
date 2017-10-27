#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    int A[100000][2];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if (A[j][1] > A[j+1][1])
            {
                int fix1 = A[j][1];
                int fix2 = A[j][0];
                A[j][1] = A[j+1][1];
                A[j][0] = A[j+1][0];
                A[j+1][1] = fix1;
                A[j+1][0] = fix2;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        int sum = 0;
        for(j = 0; j < i; j++)
        {
            sum += A[j][0];
            //printf("%d\n", sum);
        }
        //printf("%d\n", sum);
        if (sum > A[i][1])
        {
            i++;
            if (i < n)
            {
                printf("%d %d\n", A[i][0], A[i][1]);
            }
        }

        else
        {
            printf("%d %d\n", A[i][0], A[i][1]);
        }

    }
    return 0;
}
