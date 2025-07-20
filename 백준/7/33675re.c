#include <stdio.h>

int soohyun(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
            // printf("i: %d\n", i);
        }
    }
    // printf("count: %d\n", count);
    return count * 2;
}

int main()
{
    int T, N;
    long long answer;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        if (N % 2 == 1)
        {
            printf("0\n");
        }
        else
        {
            N = N / 2;
            if (N % 2 == 1)
            {
                printf("4\n");
            }
            else
            {
                answer = soohyun(N);
                printf("%lld\n", answer);
            }
        }
    }
}