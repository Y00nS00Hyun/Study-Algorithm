#include <stdio.h>
int main()
{
    char ch;
    printf("문자열 입력(Enter로 종료): ");

    while ((ch = getchar()) != '\n')
    {
        printf("입력한 문자: %c\n", ch);
    }

    printf("입력이 끝났습니다.\n");
    return 0;
}