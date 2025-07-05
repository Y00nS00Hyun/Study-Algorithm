#include <stdio.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double X1, X2, Y1, Y2;
    scanf("%lf %lf %lf %lf", &X1, &X2, &Y1, &Y2);

    double soohyun, count = 0;

    soohyun = (-B / A) * Y1 - C / A;
    printf("1번: %lf\n", soohyun);

    if (X1 <= soohyun && soohyun <= X2)
    {
        count++;
    }
    printf(" count: %d\n", count);

    soohyun = (-B / A) * Y2 - C / A;
    printf("2번: %lf\n", soohyun);
    if (X1 <= soohyun && soohyun <= X2)
    {
        count++;
    }
    printf(" count: %d\n", count);

    soohyun = (-A / B) * X1 - C / B;
    printf("3번: %lf\n", soohyun);
    if (Y1 <= soohyun && soohyun <= Y2)
    {
        count++;
    }
    printf(" count: %d\n", count);

    soohyun = (-A / B) * X2 - C / B;
    printf("4번: %lf\n", soohyun);
    if (Y1 <= soohyun && soohyun <= Y2)
    {
        count++;
    }
    printf(" count: %d\n", count);

    if (count > 2)
    {
        printf("Poor");
    }
    else
    {
        printf("Lucky");
    }
}