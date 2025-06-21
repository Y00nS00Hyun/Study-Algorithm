#include <stdio.h>

int main()
{
    int N, max_x, max_y, min_x, min_y;
    scanf("%d", &N);
    int x[100000], y[100000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    max_x = x[0];
    max_y = y[0];

    for (int i = 1; i < N; i++)
    {
        if (x[i] > max_x)
        {
            max_x = x[i];
        }

        if (y[i] > max_y)
        {
            max_y = y[i];
        }
    }

    min_x = x[0];
    min_y = y[0];

    for (int i = 1; i < N; i++)
    {
        if (x[i] < min_x)
        {
            min_x = x[i];
        }

        if (y[i] < min_y)
        {
            min_y = y[i];
        }
    }

    if (N != 1)
    {
        printf("%d", (max_x - min_x) * (max_y - min_y));
    }
    else
    {
        printf("0");
    }
}