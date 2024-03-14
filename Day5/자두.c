#include <stdio.h>
int main()
{

    int i, j, arr[3][2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                printf("%d 번째의 국어 성적: ", i + 1);
                scanf("%d", &arr[i][j]);
            }
            if (j == 1)
            {
                printf("%d 번째의 수학 성적: ", i + 1);
                scanf("%d", &arr[i][j]);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {

        printf("%d 번째의 국어, 수학 성적: %d %d\n", i + 1, arr[i][0], arr[i][1]);
    }
}