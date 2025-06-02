#include <stdio.h>

int main(void)
{
    char ch;

    printf("알파벳 소문자 하나를 입력하세요 (a~y): ");
    scanf("%c", &ch);

    printf("%c 다음 알파벳은 %c 입니다.\n", ch, ch + 1);

    return 0;
}
