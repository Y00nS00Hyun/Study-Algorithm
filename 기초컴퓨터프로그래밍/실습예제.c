#include <stdio.h>
int main(void)
{
    int x = 0xffff;
    printf("%6d %08x\n", x, x);
    printf("%6d %08x\n", x >> 1, x >> 1); // 2를 나눈 효과
    printf("%6d %08x\n", x >> 2, x >> 2); // 2를 2번 나눈 효과
    printf("%6d %08x\n", x >> 3, x >> 3); // 2를 3번 나눈 효과

    printf("%6d %08x\n", x << 1, x << 1); // 2를 곱한 효과
    printf("%6d %08x\n", x << 2, x << 2); // 2를 2번 곱한 효과

    return 0;
}