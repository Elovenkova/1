#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j;
    int A[1000][2];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Находим область на плоскости радиусом max, внутри которой лежат все элементы двумерного массива
    int max_X, max_Y, max;
    max_X = A[0][0];
    max_Y = A[0][1];
    for(i = 0; i < n; i++)
    {
        if (abs(A[i][0]) > max_X)
        {
            max_X = abs(A[i][0]);
        }
    }
    for(i = 0; i < n; i++)
    {
        if (abs(A[i][1]) > max_Y)
        {
            max_Y = abs(A[i][1]);
        }
    }
    if (max_X >= max_Y)
    {
        max = max_X + 1;
    }
    else
    {
        max = max_Y + 1;
    }

    // Создаём вспомогательный двумерный массив и заполняем первый столбец значениями,
    // выходящими за область, в которой находятся элементы двумерного массива А (область радиуса max)
    int B[1000][2];
    for(i = 0; i < n; i++)
    {
        B[i][0] = max;
    }
    B[0][0] = A[0][0];
    B[0][1] = A[0][1];

    int max_num = 0; // Количество значений в массиве A, не принадлежащих области радиуса max
    int X1 = A[0][0], Y1 = A[0][1], num;
    printf("%d %d\n", B[0][0], B[0][1]);

    while (max_num != n)
    {
        double R = 2 * max;
        num = 0;
        for(i = 1; i < n; i++)
        {
            if (A[i][0] != max)
            {
                if (pow((pow(X1 - A[i][0], 2) + pow(Y1 - A[i][1], 2)), 0.5) <= R)
                {
                    R = pow((pow(X1 - A[i][0], 2) + pow(Y1 - A[i][1], 2)), 0.5) ;
                    num = i;
                }
            }
        }
        X1 = A[num][0];
        Y1 = A[num][1];
        int max_in_B = 0;
        for(j = 0; j < n; j++)
        {
            if (B[j][0] != max)
            {
                max_in_B += 1;
            }
        }
        if (A[num][0] != max)
        {
            B[max_in_B + 1][0] = A[num][0];
            B[max_in_B + 1][1] = A[num][1];
            A[num][0] = max;
            max_num += 1;
            printf("%d %d\n", B[max_in_B + 1][0], B[max_in_B + 1][1]);
        }
    }
}
