#include <stdio.h>
#define ROWSIZE 10
#define COLSIZE 5

int main()
{
    int soohyun[ROWSIZE][COLSIZE];

    // 값 저장
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLSIZE; j++)
        {
            soohyun[i][j] = (COLSIZE * i) + (j + 1);
            printf("%2d\t ", soohyun[i][j]);
            // %2d: 2칸을 무조건 확보
            // \t: tab 뒤로 8칸을 무조건 띄움
        }
    }
}