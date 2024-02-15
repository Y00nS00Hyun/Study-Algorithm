#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; 1 < j; j--)
        {
            printf(" ");
        }
        for (int k = 2 * i; 1 < k; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = n - i; 0 < j; j--)
        {
            printf(" ");
        }
        for (int k = 2 * i; 1 < k; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
