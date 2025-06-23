#include <stdio.h>
int add(int a, int b);

int main()
{
    int result;
    result = add(3, 4);
    printf("결과: %d\n", result);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}
