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
    while (1)
    {
        if (size / 2 != 0)
        {
            if (key > *(arr + size / 2))
            {
                arr = arr + size / 2;
                size = size / 2;
            }
            else if (key < *(arr + size / 2))
            {
                size = size / 2;
            }
            else
            {
                printf("1");
                return 0;
            }
        }
        else
        {
            printf("0");
            return 0;
        }
    }
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
        binary_search_tree(soohyun, arr, N);
    }
}