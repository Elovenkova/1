#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max, i;
    scanf("%d", &n);
    scanf("%d", &max);
    for(i = 1; i < n; i++)
    {
        int item;
        scanf("%d", &item);
        if (item >= max)
            max = item;
    }
    printf("%d", max);
}
