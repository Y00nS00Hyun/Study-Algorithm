#include <stdio.h>

int main(void)
{
    int x;
    int mask = 1;
    printf("현재 상태 입력(1~15): ");
    scanf("%d", &x);

    printf("방 1: %s\n", ((x >> 0) & mask) ? "on" : "off"); //%s 문자열
    printf("방 2: %s\n", ((x >> 1) & mask) ? "on" : "off");
    printf("화장실: %s\n", ((x >> 2) & mask) ? "on" : "off");
    printf("거실: %s\n", ((x >> 3) & mask) ? "on" : "off");
}
