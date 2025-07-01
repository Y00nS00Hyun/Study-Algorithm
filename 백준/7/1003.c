#include <stdio.h>

void soohyun(int N)
{
    long long zero[41];
    long long one[41];

    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;

    for (int i = 0; i < N; i++)
    {
        zero[i + 2] = zero[i] + zero[i + 1];
        // printf("i + 2: %d     i: %d     i+1: %d\n", i + 2, i, i + 1);
        one[i + 2] = one[i] + one[i + 1];
    }
    printf("%lld %lld\n", zero[N], one[N]);
}

int main()
{
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        soohyun(N);
    }
}