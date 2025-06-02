#include <stdio.h>

int main(void)
{
    printf("%3o %3d %3x\n", 10, 10, 10);   // 8진수, 10진수, 16진수 출력
    printf("%#3o %3d %#3x\n", 12, 12, 12); // 접두어 포함해서 출력
    printf("%3o %3i %3x\n", 14, 14, 14);   // 8진수, 10진수, 16진수 출력

    return 0;
}
