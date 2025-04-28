#include <stdio.h>

int main(void)
{
    char ch;

    printf("알파벳 소문자 하나를 입력하세요: ");
    scanf("%c", &ch);

    printf("%c를 대문자로 변환하여 출력합니다: %c\n", ch, ch - ('a' - 'A'));

    return 0;
}

// 소문자=대문자+32