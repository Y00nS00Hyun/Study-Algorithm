#include <stdio.h>

int main()
{
    char carr[3] = {'a', 'b', 'c'};
    int iarr[3] = {1, 2, 3};
    double darr[3] = {1.1, 2.2, 3.3};

    // 1바이트 차이
    printf("char형 배열 원소의 주소:\n");
    printf("&carr[0]=%llu\n", (uintptr_t)&carr[0]);
    printf("&carr[1]=%llu\n", (uintptr_t)&carr[1]);
    printf("&carr[2]]=%llu\n", (uintptr_t)&carr[2]);
    printf("\n");

    // 4바이트 차이
    printf("int형 배열 원소의 주소:\n");
    printf("&iarr[0]=%llu\n", (uintptr_t)&iarr[0]);
    printf("&iarr[1]=%llu\n", (uintptr_t)&iarr[1]);
    printf("&iarr[2]]=%llu\n", (uintptr_t)&iarr[2]);
    printf("\n");

    // 8바이트 차이
    printf("double형 배열 원소의 주소:\n");
    printf("&darr[0]=%llu\n", (uintptr_t)&darr[0]);
    printf("&darr[1]=%llu\n", (uintptr_t)&darr[1]);
    printf("&darr[2]]=%llu\n", (uintptr_t)&darr[2]);

    return 0;
}
