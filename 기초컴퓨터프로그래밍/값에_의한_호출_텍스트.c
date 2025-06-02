#include <stdio.h>

void change(int x);

int main()
{
    int a = 10;
    change(a);
    printf("a =%d\n", a);
    return 0;
}
void change(int x)
{
    x = 100;
}