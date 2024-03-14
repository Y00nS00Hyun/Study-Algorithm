#include <stdio.h>
int main()
{

    int i, j, k, arr[3][3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("[%d][%d][%d]: %d ", i, j, k, arr[i][j][k]);
            }
            printf("\n");
        }
    }
}