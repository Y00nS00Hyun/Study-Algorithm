#include <stdio.h>

int main()
{
    double A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    double day = (V - B) / (A - B);

    if (day - (int)day > 0)
    {
        day++;
    }

    printf("%d", (int)day);
}
