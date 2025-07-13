#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int v1 = *(const int *)a;
    int v2 = *(const int *)b;

    return (v1 > v2) - (v1 < v2);
}

int main()
{
    int N, *arr;
    scanf("%d", &N);
    arr = (int *)malloc(N * 4);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, 4, compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
}