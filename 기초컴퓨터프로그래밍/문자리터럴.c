#include <stdio.h>

int main(void)
{
    printf("%cava", 'J'); // Java 출력

    char sq = '\'';
    printf("%c\7\n", '\a');       // 알람 문자 출력 + 공백 줄
    printf("%c자바 언어'\n", sq); // 작은따옴표 문자 출력

    printf("\"안녕\" 정말 재미있다!\n"); // 큰따옴표 출력

    return 0;
}
