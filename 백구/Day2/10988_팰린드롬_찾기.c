#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    scanf("%s", arr);
    int n;

    n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}