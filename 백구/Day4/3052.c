#include <stdio.h>
int main()
{
    int i, arr[10], c[10], count = 10;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);

        c[i] = arr[i] % 42;
    }
    for (i = 0; i < 9; i++)
    {
        for (int j = 1; i + j < 10; j++)
        {
            if (c[i] == c[i + j])
            {
                count--;
                break;
            }
        }
    }

    printf("%d", count);
}