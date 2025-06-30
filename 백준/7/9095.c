#include <stdio.h>

void soohyun(int n)
{
    int arr[11];
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i < 11; i++)
    {
        arr[i] = 0;
        for (int j = 0; j < i; j++)
        {
            arr[i] += arr[j];
            // printf("i: %d j: %d\n", i, j);
        }
        arr[i] += i - 1;
    }

    for (int j = 0; j < 11; j++)
    {
        printf("%d\n", arr[j]);
    }

    // printf("%d\n", arr[n]);
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