#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[100];
    int brr[10000];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int u = j + 1; u < N; u++)
            {
                brr[k] = arr[i] + arr[j] + arr[u];
                // printf("%d\n", brr[k]);
                // printf(" brr[%d] = arr[%d] + arr[%d] + arr[%d]\n\n", k, i, j, u);
                k++;
            }
        }
    }

    int best = 0;
    for (int i = 0; i < k; i++)
    {
        if (brr[i] <= M && brr[i] > best)
        {
            best = brr[i];
        }
    }

    printf("%d", best);
}