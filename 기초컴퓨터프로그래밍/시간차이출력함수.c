#include <stdio.h>

int print_time_diff(int h1, int m1, int h2, int m2)
{
    int temp, a, b;
    if (h2 > h1)
    {
        temp = h1;
        h1 = h2;
        h2 = temp;

        temp = m1;
        m1 = m2;
        m2 = temp;
    }

    a = h1 - h2;

    if (m1 > m2)
    {
        b = m1 - m2;
    }
    else
    {
        a--;
        b = (m1 + 60) - m2;
    }

    printf("시간 차는 %d시간 %d분 입니다.", a, b);
    return 0;
}

int main()
{
    int h1, m1, h2, m2;
    int a, b;

    printf("첫 번째 시각 입력(시:분)>> ");
    scanf("%d:%d", &h1, &m1);

    printf("두 번째 시각 입력(시:분)>> ");
    scanf("%d:%d", &h2, &m2);

    print_time_diff(h1, m1, h2, m2);

    return 0;
}
