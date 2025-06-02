#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int month;
    printf("월 입력:");
    scanf("%d", &month);

    switch (month)
    {
    case 3:
    case 4:
    case 5:
    {
        printf("%d월은 봄입니다", month);
        break;
    }
    case 6:
    case 7:
    case 8:
    {
        printf("%d월은 여름입니다", month);
        break;
    }
    case 9:
    case 10:
    case 11:
    {
        printf("%d월은 가을입니다", month);
        break;
    }
    case 12:
    case 1:
    case 2:
    {
        printf("%d월은 겨울입니다", month);
        break;
    }
    default:
    {
        printf("잘못 입력하셨습니다");
    }
    }

    return 0;
}