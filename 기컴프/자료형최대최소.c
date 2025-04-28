#include <stdio.h>
#include <limits.h> // 각 자료형의 최소/최대값이 정의된 헤더파일

int main(void)
{
    // char형 최소/최대값 출력
    printf("%d ~ %d\n", CHAR_MIN, CHAR_MAX);

    // unsigned short형 최소/최대값 출력
    printf("%d ~ %u\n", 0, USHRT_MAX);

    // int형 최소/최대값 출력
    printf("%d ~ %d\n", INT_MIN, INT_MAX);

    // long long형 최소/최대값 출력
    printf("%lld ~ %lld\n", LLONG_MIN, LLONG_MAX);

    return 0;
}
