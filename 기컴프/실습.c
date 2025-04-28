#include <stdio.h>

int main(void)
{
    int ch = '#';
    printf("%d\n", ch); // 십진 코드 값 출력
    printf("%c\n", ch); // 문자 출력

    int pop1 = 51800000;         // 대한민국 인구 약 5100만
    long long pop2 = 7716600000; // 전 세계 인구 약 77억
    printf("%d %lld\n", pop1, pop2);

    return 0;
}