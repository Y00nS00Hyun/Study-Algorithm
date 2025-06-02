#include <stdio.h>
#define PI 3.14

int main(void)
{
    double radius = 2.83;

    printf("원 면적: %f\n", radius * radius * PI); // PI가 3.14로 대체
    printf("원 둘레: %f\n", 2 * radius * PI);      // PI가 3.14로 대체

    return 0;
}
