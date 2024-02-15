#include <stdio.h>k
#include <string.h>

int main(void)
{
    char arr[1000000];
    int count = 0;
    int i, length;

    scanf("%[^\n]", arr);
    length = strlen(arr);

    if (length == 1)
    {
        if (arr[0] == ' ')
            printf("0\n");
        return 0;
    }

    for (i = 1; i < length; i++)
    {
        if (arr[i] == ' ')
            count++;
    }

    printf("%d", count + 1);
    return 0;
}