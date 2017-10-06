#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, s;
    scanf("%d", &n);
    scanf("%d", &m);
    s = m*n;
    int A[n], B[s], C[n];
    for(i=1; i<n+1; i++)
    {
        A[i]=i;
    }
    for(i=1; i<s+1; i++)
    {
        if (i%n==0)
        {
            B[i]=n;
        }
        B[i]=i%n;
    }
    for(i=1; i<s+1; i++)
    {
        if (i%m==0)
        {
            C[n]+=B[i];
        }
    }
    printf("%d %d %d", C[-3], C[-2], C[-1]);

}
