#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; // 최대 99글자 저장 가능
    int length = 0;

    printf("문자열을 입력하세요: ");
    scanf("%s", str); // 문자열 입력 (공백 이후는 저장되지 않음)

    // TODO. 문자열 길이 직접 계산

    // while (str[length] != '\0')
    // {
    //     length++;
    // }
    length = strlen(str);

    printf("문자열 길이: %d\n", length);
    return 0;
}