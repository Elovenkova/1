#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, n, K_x, K_y, M_x, M_y, N_x, N_y, L_x, L_y;
    float d1, d2, cosa, sina, S, d1_x, d2_x, d1_y, d2_y;
    scanf ("%d", &n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    K_x = array[0];
    K_y = array[1];
    for(i=0; i<n; i+2)
    {
        if (array[i]>=K_x)
        {
            K_x=array[i];
            K_y=array[i+1];
        }
    }
    L_x = array[0];
    L_y = array[1];
    for(i=0; i<n; i+2)
    {
        if (array[i]<=L_x)
        {
            L_x=array[i];
            L_y=array[i+1];
        }
    }
    M_y = array[1];
    M_x = array[0];
    for(i=1; i<n; i+2)
    {
        if (array[i]>=M_y)
        {
            M_x=array[i-1];
            M_y=array[i];
        }
    }
    N_x = array[0];
    N_y = array[1];
    for(i=1; i<n; i+2)
    {
        if (array[i]<=N_y)
        {
            N_x=array[i-1];
            N_y=array[i];
        }
    }
    d1_x = M_x - N_x;
    d1_y = M_y - N_y;
    d2_x = K_x - L_x;
    d2_y = K_y - L_y;
    d1 = sqrt((powf(d1_x, 2)) + (powf(d1_y, 2)));
    d2 = sqrt((powf(d2_x, 2)) + (powf(d2_y, 2)));
    cosa = ((d1_x*d2_x)+(d1_y*d2_y))/(d1*d2);
    sina = sqrt(1-(powf(cosa,2)));
    S = (d1*d2*sina)/2;
    printf("%d",S);
}
