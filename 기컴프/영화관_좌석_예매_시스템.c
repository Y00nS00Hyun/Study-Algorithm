#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int seats[5][6];
    int empty_seats;
    srand(time(NULL));

    // 🍿
    printf("🍿 현재 좌석 상태 (0: 빈 좌석, 1: 예약됨): \n");
    printf("     1열 2열 3열 4열 5열 6열\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d행 | ", i + 1);

        for (int j = 0; j < 6; j++)
        {
            int soohyun = rand() % 2;
            seats[i][j] = soohyun;
            printf("%d | ", seats[i][j]);

            if (seats[i][j] == 0)
            {
                empty_seats++;
            }
        }

        printf("\n", i);
    }
    printf("빈 좌석 수: %d\n ", empty_seats);
    // 🍿

    int success = 0;
    while (success == 0)
    {
        int a, b;
        printf("예매할 좌석을 입력하세요 (행 열)>> ");
        scanf("%d %d", &a, &b);

        if ((a >= 1 && a <= 6) && (b >= 1 && b <= 7))
        {
            if (seats[a - 1][b - 1] == 1)
            {
                printf("이미 예약된 좌석입니다. 다시 입력하세요.\n\n");
            }
            else
            {
                seats[a - 1][b - 1] = 1;
                printf("예매 완료!\n\n");
                success = 1;
            }
        }
        else if (a < 1 || a > 6 || b < 1 || b > 7)
        {
            printf("잘못된 좌석 번호입니다. 다시 입력하세요.\n\n");
        }
    }
}