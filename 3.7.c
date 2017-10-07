#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, s, j, q;
    scanf("%d", &n);
    scanf("%d", &m);
    s = m*n;
    int A[n], B[s];
    for(i=0; i<n; i++)
    {
        A[i]=i+1;
    }
    for(j=0; j<s; j++)
    {
        if ((j+1)%n==0)
        {
            B[j]=n;
        }
        else
        {
            B[j]=(j+1)%n;
        }
    }
    int* a = (int*)malloc((n+10)*sizeof(int));
	for(q = 0; q < n; q++)
    {
        if ((q+1)%m==0)
        {
            int l = (q+1)/m;
            *(a+l)=B[q];
        }
    }
    printf("%d %d %d", *(a+n-1), a+n-2, a+n-3);


}
