#include <stdio.h>
#include <conio.h> //생략 가능

int main()
{
    char ch;
    printf("문자열 입력(Enter로 종료):\n");
    while ((ch = _getch()) != '\r')
    {
        if (ch < 120)
        {
            printf("%c", ch + 3);
        }
        else
        {
            printf("%c", ch - 23);
        }
    }
    printf(" 입력이 끝났습니다.\n");
    return 0;
}