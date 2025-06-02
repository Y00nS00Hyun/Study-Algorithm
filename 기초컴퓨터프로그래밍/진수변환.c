#include <stdio.h>

int main(void)
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num); // 10진수 입력 받기

    printf("10진수: %d\n", num);  // 10진수 출력
    printf("8진수: %#o\n", num);  // 8진수 출력 (접두사 0 포함)
    printf("16진수: %#x\n", num); // 16진수 출력 (접두사 0x 포함)

    return 0;
}
