#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int menu;
    char size;
    int price = 0;

    printf("음료를 설정하세요(1: 아메리카노, 2: 카페라떼, 3: 레몬에이드): ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        price = 1500;
        break;
    case 2:
        price = 2000;
        break;
    case 3:
        price = 1800;
        break;
    default:
        printf("메뉴를 잘 고르십시오");
    }

    printf("사이즈를 선택하세요(s, m, l): ");
    scanf(" %c", &size);

    switch (size)
    {
    case 's':
        price = price;
        break;
    case 'm':
        price = price + 500;
        break;
    case 'l':
        price = price + 1000;
        break;
    default:
        printf("사이즈를 잘 고르십시오");
    }

    printf("%d원 입니다.", price);
    return 0;
}