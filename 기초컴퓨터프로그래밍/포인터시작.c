#include <stdio.h>

int main()
{
    int a;
    printf("%p\n", &a);              // 주소 위치 (16진수)
    printf("%llu\n", (uintptr_t)&a); // 를 10진수로 표현
    printf("%zu", sizeof(&a));       // 데이터 크기기

    return 0;
}
