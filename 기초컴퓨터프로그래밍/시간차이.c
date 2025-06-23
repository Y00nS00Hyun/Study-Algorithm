#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_time_diff(int h1, int m1, int h2, int m2);

int main()
{
    int h1, m1, h2, m2;
    printf("첫 번째 시각 입력(시:분)>> ");
    scanf("%d:%d", &h1, &m1);
    printf("두 번째 시각 입력(시:분)>> ");
    scanf("%d:%d", &h2, &m2);
    print_time_diff(h1, m1, h2, m2);
    return 0;
}

void print_time_diff(int h1, int m1, int h2, int m2)
{
    int minute1 = h1 * 60 + m1;
    int minute2 = h2 * 60 + m2;

    int diff = minute2 - minute1;
    if (diff < 0)
    {
        diff = -diff;
    }

    int hour = diff / 60;
    int minute = diff % 60;

    printf("시간 차는 %d시간 %d분입니다.\n", hour, minute);
    return;
}