#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // 문자열 저장: 문자 배열 사용
    char c[] = "C C++ Java";

    // 1. 원래 문자열 전체 출력
    printf("%s\n\n", c);

    // 2. 문자열 분리: c[5] 위치에 널 문자('\0') 삽입
    c[5] = '\0';
    printf("%s\n%s\n\n", c, (c + 6)); // "C C++"와 "Java" 출력

    // 3. 문자열 복원: 다시 공백 문자로 되돌림
    c[5] = ' ';

    // 4. 포인터를 사용해서 한 글자씩 출력
    char *p = c;
    while (*p) // 널 문자를 만날 때까지 반복
        printf("%c", *p++);

    printf("\n");
    return 0;
}
