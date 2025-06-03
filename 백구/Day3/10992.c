#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf(" ");
        }
        printf("*");

        for (int m = 0; m < 2 * i - 3; m++)
        {
            printf(" ");
        }

        if (i != 1)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int h = 0; h < 2 * n - 1; h++)
    {
        printf("*");
    }
}