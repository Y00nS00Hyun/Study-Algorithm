#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lotto[6];
    srand(time(NULL));
    // TODO: 중복 없이 1~45 사이의 숫자 6개를 lotto 배열에 채우기

        printf("추첨 번호: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", lotto[i]);
    }
    printf("\n");

    return 0;
}
