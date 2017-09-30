#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, del;
    scanf("%d", &n);
    del = 0;
    if (n == 1)
    {
        printf("%d", 0);
    }
    else if (n == 2)
    {
        printf("%d", 1);
    }
    else
    {
        if (n%2==0)
        {
            printf("%d", 0);
        }
        else
        {
            for(i=3; i<n; i++)
            {
                if (n%i==0)
                {
                    if (i!= n)
                    {
                        del+=1;
                    }

                }
            }
            if (del != 0)
            {
                printf("%d", 0);
            }
            else
            {
                printf("%d", 1);
            }
        }
    }
}
