#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i=%d, j=%d\n", i, j);
    }

    for (int i = 0, j = 10; (i < j) && (j % 2 == 0); i++, j--)
    {
        printf("i=%d, j=%d\n", i, j);
    }
}