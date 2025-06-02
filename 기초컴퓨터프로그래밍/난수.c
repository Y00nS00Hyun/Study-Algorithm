#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // 비슷비슷한 숫자가 나오는 이유
    printf("%d\n", time(NULL));

    int r = rand() % 100 + 1;
    printf("랜덤 숫자: %d\n", r);
    return 0;
}