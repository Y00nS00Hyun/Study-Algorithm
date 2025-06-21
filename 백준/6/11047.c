#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K, max;
    int number = 0;
    scanf("%d %d", &N, &K);

    int *ptr;
    ptr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ptr[i]);
    }

    while (K != 0)
    {
        max = ptr[0];
        for (int i = N - 1; i >= 0; i--)
        {
            if (K >= ptr[i])
            {
                number += K / ptr[i];
                K = K % ptr[i];
            }
        }
        // printf("남은 돈: %d max: %d 동전 갯수: %d\n", K, max, number);
    }
    printf("%d", number);
    free(ptr);
}