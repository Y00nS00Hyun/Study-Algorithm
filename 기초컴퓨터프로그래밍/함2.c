#include <stdio.h>
void change(int x);
void sayHello(void);

int main()
{
    int a = 10;
    change(a);
    printf("a = %d\n", a);
    sayHello();
    return 0;
}

void change(int x)
{
    x = 100;
}

void sayHello(void)
{
    printf("안녕하세요! 환영합니다.\n");
}