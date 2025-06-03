#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    scanf("%d %d", &i, &j);

    int arr[i][j], brr[i][j], p, q;

    for (p = 0; p < i; p++)
    {
        for (q = 0; q < j; q++)
        {
            scanf("%d", &arr[p][q]);
        }
    }

    for (p = 0; p < i; p++)
    {
        for (q = 0; q < j; q++)
        {
            scanf("%d", &brr[p][q]);
        }
    }

    for (p = 0; p < i; p++)
    {
        for (q = 0; q < j; q++)
        {
            printf("%d ", arr[p][q] + brr[p][q]);
        }
        printf("\n");
    }
}