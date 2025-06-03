#include <stdio.h>
int main()
{
    char arr[5][15] = {'\0'};
    int i, j;

    for (i = 0; i < 5; i++)
    {
        scanf("%s", arr[i]);
    }

    for (j = 0; j < 15; j++)
    {
        for (i = 0; i < 5; i++)
        {
            if (arr[i][j] != '\0')
            {
                printf("%c", arr[i][j]);
            }
        }
    }
    return 0;
}
