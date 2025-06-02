#include <stdio.h>
int main(void)
{
    char *pc = (char *)100;     // 가상의 주소값 100 저장
    int *pi = (int *)100;       // 가상의 주소값 100 저장
    double *pd = (double *)100; // 가상의 주소값 100 저장
    printf("%llu %llu %llu\n", (uintptr_t)(pc - 1), (uintptr_t)pc, (uintptr_t)(pc + 1));
    printf("%llu %llu %llu\n", (uintptr_t)(pi - 1), (uintptr_t)pi, (uintptr_t)(pi + 1));
    printf("%llu %llu %llu\n", (uintptr_t)(pd - 1), (uintptr_t)pd, (uintptr_t)(pd + 1));
    return 0;
}