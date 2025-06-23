#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, h = 0;
    for (int i = 1; i < 51; i++)
    {
        s += 2 * i - 1;
    }

    printf("%d\n", s);

    for (int i = 1; i < 51; i++)
    {
        h += 2 * i;
    }

    printf("%d", h);
}