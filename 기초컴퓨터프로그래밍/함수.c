#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int result;

    result = add(3, 4);
    printf("%d", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}