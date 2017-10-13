#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, s, j, q;
    scanf("%d", &n);
    scanf("%d", &m);
    s = m*n;
    int B[s];
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
        //printf("%d\n", B[j]);
    }
    int l;
    int* a = (int*)malloc((n+10)*sizeof(int));
	for(q = m-1; q < n; q+=m)
    {
        l=(q+1)/m;
        *(a+l)=B[q];
    }
    printf("%d %d %d", *(a+1), *(a+2), *(a+3));


}
