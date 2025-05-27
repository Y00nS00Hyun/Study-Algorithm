#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int seats[5][6];
    srand(time(NULL));
    printf("🍿 현재 좌석 상태 (0: 빈 좌석, 1: 예약됨): \n");
    printf("     1열 2열 3열 4열 5열 6열\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d행 | ", i);
        for (int j = 0; j < 6; j++)
        {
            int soohyun = rand() % 2;
            seats[i][j] = soohyun;
            printf("%d | ", seats[i][j]);
        }
        printf("\n", i);
    }
}