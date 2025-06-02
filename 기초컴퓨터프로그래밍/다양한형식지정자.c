#include <stdio.h>

int main(void)
{
    double width = 3.424, height = 2.718;
    int shape = 3; // 삼각형 또는 사각형

    printf("가로: %f, 세로: %lf\n", width, height);

    printf("%d각형 %s: %1008.2f\n", shape, "면적", (width * height) / 2);
    printf("%d각형 %s: %10.4f\n", shape + 1, "면적", width * height);

    return 0;
}
