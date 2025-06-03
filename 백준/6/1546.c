#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, scores[100000];
    int *ptr = &scores[0];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", (ptr + i));
    }

    int max = *ptr;
    for (int i = 0; i < N; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    int total = 0;
    for (int i = 0; i < N; i++)
    {
        total += *(ptr + i);
    }

    printf("%lf", (double)(total * 100) / (max * N));
}