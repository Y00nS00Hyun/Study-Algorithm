#include <stdio.h>

double ondo(double c)
{
    return (9.0 / 5.0) * c + 32; // 9/5 라고 쓰면 안됨 -> 1로 간주
}

int main()
{
    double c, f;

    printf("섭씨 온도를 입력하세요: ");
    scanf("%lf", &c);

    f = ondo(c);

    printf("화씨 온도: %.2f\n", f);

    return 0;
}