#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, s, j, q;
    scanf("%d", &n);
    scanf("%d", &m);
    s = m*n;
    int A[n], B[s], C[n];
    for(i=1; i<n+1; i++)
    {
        A[i]=i;
    }
    for(j=1; j<s+1; j++)
    {
        if (j%n==0)
        {
            B[j]=n;
        }
        B[j]=j%n;
    }
    for(q=1; q<s+1; q++)
    {
        if (q%m==0)
        {
            C[]+=B[q];
        }
    }
    printf("%d %d %d", C[-3], C[-2], C[-1]);

}
