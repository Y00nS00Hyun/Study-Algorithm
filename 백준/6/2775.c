#include <stdio.h>
int main()
{
    int T, k, n;
    int arr[15][15];
    scanf("%d", &T);

    for (int i = 0; i < 15; i++)
    {
        arr[0][i] = i + 1;
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
        {
            for (int k = 0; k < 15; k++)
            {
                arr[i][j] += arr[i - 1][k];
            }
        }
    }

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d %d", arr[k][n]);
    }

    printf("%d", arr[k][n - 1]);

    return 0;
}