#include <stdio.h>

void soohyun(int n)
{
    int arr[11];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;

    for (int i = 4; i < 11; i++)
    {
        arr[i] = 0;
        for (int j = i - 3; j < i; j++)
        {
            arr[i] += arr[j];
            // printf("i: %d j: %d\n", i, j);
        }
    }

    // for (int j = 0; j < 11; j++)
    // {
    //     printf("%d\n", arr[j]);
    // }

    printf("%d\n", arr[n]);
}

int main()
{
    int T, n;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        soohyun(n);
    }
}