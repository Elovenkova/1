#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int f(int n);

int main()
{
    int n, k;
    scanf("%d", &n);
    for(k = 0; k < n + 1; k++)
    {
        int f(int k)
        {
            if (k == 0)
            {
                return 1;
            }
            else if (k == n)
            {
                return 1;
            }
            return f(k-1)*(n - k +1)/k;
        }
        int C = f(k);
        printf("%d\n", C);
    }
}


