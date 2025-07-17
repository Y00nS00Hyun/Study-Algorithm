#include <stdio.h>

int main()
{
    int N, num, arr[10001];
    scanf("%d", &N);

    for (int i = 0; i < 10001; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        arr[num]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }
}