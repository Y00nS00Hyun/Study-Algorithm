#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, h = 0;
    for (int i = 1; i < 101; i += 2)
    {
        s += i;
    }

    printf("%d\n", s);

    for (int i = 2; i < 101; i += 2)
    {
        h += i;
    }

    printf("%d", h);
}