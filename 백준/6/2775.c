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

    for (int i = 1; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            arr[i][j] = 0;
            for (int k = 0; k < j + 1; k++)
            {
                arr[i][j] += arr[i - 1][k];
            }
        }
    }

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", arr[k][n - 1]);
    }

    return 0;
}