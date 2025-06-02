#include <stdio.h>
int main(void)
{
    int a = 100, b = 200, temp;
    // Todo. 포인터 변수 선언 및 초기화
    int *pa = &a;
    int *pb = &b;

    // Todo. 포인터 변수를 이용한 값 교환

    temp = *pb;
    *pb = *pa;
    *pa = temp;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}