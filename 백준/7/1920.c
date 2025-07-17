#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int s = *(const int *)a;
    int h = *(const int *)b;

    return (s > h) - (s < h);
}

int binary_search_tree(int key, int *arr, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (key == arr[mid])
        {
            return 1;
        }
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return 0;
}

int main()
{
    int N, M, arr[100001], soohyun;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, 4, compare);

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &soohyun);
        printf("%d\n", binary_search_tree(soohyun, arr, N));
    }
}