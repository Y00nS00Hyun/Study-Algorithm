#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int N, sum = 0;
    scanf("%d", &N);

    int *ptr;
    ptr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ptr[i]);
    }

    qsort(ptr, N, sizeof(int), compare);

    for (int i = 0; i < N; i++)
    {
        // printf("%d ", ptr[i]);
        sum += ptr[i] * (N - i);
    }
    printf("%d ", sum);
}