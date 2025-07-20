#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    long long N, answer;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%lld", &N);

        if (N % 2 == 1)
        {
            printf("0\n");
        }
        else
        {
            N = N / 2;
            answer = pow(2, N);
            printf("%lld\n", answer);
        }
    }
}