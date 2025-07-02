#include <stdio.h>

int main()
{
    long long N, M, A[100001];
    long long sum = 0;
    scanf("%lld %lld", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        sum += A[i];
    }

    if (sum - N < M)
    {
        printf("OUT");
    }
    else
    {
        printf("DIMI");
    }
}