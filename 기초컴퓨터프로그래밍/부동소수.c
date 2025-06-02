#include <stdio.h>

int main(void)
{
    printf("%d, %d\n", 010, 015);   // 8진수
    printf("%d, %d\n", 10, 15);     // 10진수
    printf("%d, %d\n", 0x1a, 0x15); // 16진수

    printf("%f, ", 2.71828);    // 일반 실수 출력
    printf("%f, ", 2.71828E+2); // 지수 형태 (2.71828 × 10^2)
    printf("%f\n", 2.71828e-2); // 지수 형태 (2.71828 × 10^-2)

    return 0;
}
