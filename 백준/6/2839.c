#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N == 4 || N == 7)
    {
        printf("-1");
        return 0;
    }

    int soohyun = N % 5;
    if (soohyun == 0)
    {
        printf("%d", N / 5);
    }
    else if (soohyun == 1)
    {
        printf("%d", 2 + (N - 6) / 5);
    }
    else if (soohyun == 2)
    {
        printf("%d", 4 + (N - 12) / 5);
    }
    else if (soohyun == 3)
    {
        printf("%d", 1 + (N - 3) / 5);
    }
    else
    {
        printf("%d", 3 + (N - 9) / 5);
    }
}