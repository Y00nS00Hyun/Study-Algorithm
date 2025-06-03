#include <stdio.h>
int main()
{
    int arr[100][100] = {'0'};
    int i, j, p, q, n = 0, a = 0, b = 0, count = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        for (p = 0; p < 10; p++)
        {
            for (q = 0; q < 10; q++)
            {
                arr[a + p][b + q] = 1;
            }
        }
    }
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}