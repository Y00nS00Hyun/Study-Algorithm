#include <stdio.h>
int main()
{
    int data = 100;
    int *p;
    p = &data;
    printf("변수명 주소값저장값\n");
    printf("------------------------------------------\n");
    printf("  data  %p  %d\n", &data, data);
    printf("     p  %p  %p\n", &p, p);
    printf("\ndata의 크기 : %zu\n", sizeof(data));
    printf("   p의 크기 : %zu\n", sizeof(p));
    return 0;
}
