#include <stdio.h>
int main()
{
    char a, b; // b는 기호를 받을 것임
    printf("알파벳을 입력하세요:");
    a = getchar();
    scanf("%c", &b);
    printf("이거 말하는거 맞죠? %c%c", a - 32, b); // 아스키 코드에서 "대문자 = 소문자 - 32" 임
}