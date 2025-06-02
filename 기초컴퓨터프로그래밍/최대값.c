#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a, b, c;
    int max;
    printf("정수 3개를 입력하세요:");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (c > a)
        {
            max = c;
        }
        else
        {
            max = a;
        }
    }
    else
    {
        if (c > b)
        {
            max = c;
        }
        else
        {
            max = b;
        }
    }

    printf("%d", max);
    return 0;
}