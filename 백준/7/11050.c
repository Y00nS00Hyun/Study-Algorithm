#include <stdio.h>

int main()
{
    int N, K;
    int soohyun = 1, riize1 = 1, riize2 = 1;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++)
    {
        soohyun = soohyun * (N - i);
    }

    for (int i = 0; i < K; i++)
    {
        riize1 = riize1 * (K - i);
    }

    for (int i = 0; i < N - K; i++)
    {
        riize2 = riize2 * (N - K - i);
    }

    printf("%d", soohyun / (riize1 * riize2));
}