#include <stdio.h>
#include <string.h>
int main()
{

    char a[4];
    char b[4];
    char *pa = a;
    char *pb = b;
    char temp;

    scanf("%s %s", a, b);

    temp = *pa;
    *pa = *(pa + 2);
    *(pa + 2) = temp;

    temp = *pb;
    *pb = *(pb + 2);
    *(pb + 2) = temp;

    if (*pa > *pb)
    {
        printf("%c%c%c", *pa, *(pa + 1), *(pa + 2));
    }
    else if (*pa < *pb)
    {
        printf("%c%c%c", *pb, *(pb + 1), *(pb + 2));
    }
    else
    {
        if (*(pa + 1) > *(pb + 1))
        {
            printf("%c%c%c", *pa, *(pa + 1), *(pa + 2));
        }
        else if (*(pa + 1) < *(pb + 1))
        {
            printf("%c%c%c", *pb, *(pb + 1), *(pb + 2));
        }
        else
        {
            if (*(pa + 2) > *(pb + 2))
            {
                printf("%c%c%c", *pa, *(pa + 1), *(pa + 2));
            }
            else
            {
                printf("%c%c%c", *pb, *(pb + 1), *(pb + 2));
            }
        }
    }

    return 0;
}