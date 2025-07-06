#include <stdio.h>

// 신발끈 공식으로 풀면 아주 간단하게 풀 수 있다
int main()
{
    int N;
    long long x[100000], y[100000], A = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%lld %lld", &x[i], &y[i]);
    }

    x[N] = x[0];
    y[N] = y[0];

    for (int i = 0; i < N; i++)
    {
        A += x[i] * y[i + 1] - x[i + 1] * y[i];
    }

    if (A < 0)
        A = -A;

    printf("%.1lf", (double)A / 2);
}