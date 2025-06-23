#include <stdio.h>

int main()
{
    int a;

    printf("%p\n", &a);
    printf("%llu\n", (uintptr_t)&a);
    printf("%zu\n", sizeof(&a));

    return 0;
}
