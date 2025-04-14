#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("%d\n", time(NULL));

    int r = rand() % 100 + 1;
    printf("랜덤 숫자: %d\n", r);
    return 0;
}