#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 1000000

int main()
{
    int soohyun[MAX_QUEUE_SIZE];
    int N, temp;
    int *ptr = &soohyun[0];

    scanf("%d", &N);
    soohyun[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        soohyun[i] = i;
    }

    for (int i = 1; i < N; i++)
    {
        *(ptr + N + i) = *(ptr + 2 * i);
    }

    printf("%d", *(ptr + 2 * N - 1));
}
