#include <stdio.h>
// int add(int a, int b);

int main()
{
    int result;
    result = add(3, 4);
    printf("결과: %d\n", result);
    return 0;
}

double add(double a, double b)
{
    return a + b;
}
