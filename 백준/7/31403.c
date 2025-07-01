#include <stdio.h>

int main()
{
    int A, B, C, soohyun;

    scanf("%d %d %d", &A, &B, &C);

    if (B == 1000)
    {
        soohyun = 4;
    }
    else if (B / 100 >= 1)
    {
        soohyun = 3;
    }
    else if (B / 10 >= 1)
    {
        soohyun = 2;
    }
    else
    {
        soohyun = 1;
    }

    int mul = 1;
    for (int i = 0; i < soohyun; i++)
    {
        mul = mul * 10;
    }

    printf("%d\n", A + B - C);
    printf("%d", A * mul + B - C);
}