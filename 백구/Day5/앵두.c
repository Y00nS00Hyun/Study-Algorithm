#include <stdio.h>
int main()
{

    int i, j, arr[3][2];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 국어 점수: %d\n", i + 1, arr[i][0]);
        printf("%d번째 학생의 수학 점수: %d\n", i + 1, arr[i][1]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 국어 점수, 수학 점수: %d %d\n", i + 1, arr[i][0], arr[i][1]);
    }
}