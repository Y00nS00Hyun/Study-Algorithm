#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 0; k < 2 * (n - i); k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n - i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
