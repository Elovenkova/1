#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max, i;
    scanf ("%d", &n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    for(i=0; i<n; i++)
    {
        if (array[i]>=max)
        {
            max=array[i];
        }
    }
    printf("%d", max);
}
