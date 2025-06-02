#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("카드뽑기를 수행합니다. . .\n");
    srand(time(NULL));
    int r = rand() % 100 + 1;

    if (r <= 2)
    {
        printf("⭐⭐⭐⭐⭐ 신화카드");
    }
    else if (r <= 10)
    {
        printf("⭐⭐⭐⭐ 전설카드");
    }
    else if (r <= 30)
    {
        printf("⭐⭐⭐ 에픽카드");
    }
    else if (r <= 60)
    {
        printf("⭐⭐ 레어카드");
    }
    else
    {
        printf("⭐ 일반카드");
    }
}