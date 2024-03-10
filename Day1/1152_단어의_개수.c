#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000000];
    int i, count = 0;

    for (i = 0; i < 1000000; i++)
    {
        arr[i] = 'a';
    }

    gets(arr);

    for (i = 0; i < 1000000; i++)
    {
        if (arr[i] == ' ')
        {
            count++;
        }
    }

    int end = strlen(arr) - 1;

    if (arr[0] == ' ' && arr[end] == ' ')
    {
        printf("%d", count - 1);
    }
    else if (arr[0] == ' ' || arr[end] == ' ')
    {
        printf("%d", count);
    }
    else
    {
        printf("%d", count + 1);
    }
}