#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000000], count[26];
    int len, i, j;
    scanf("%s", &arr);

    len = strlen(arr);

    for (i = 'a'; i <= 'z'; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (arr[j] == i)
                count[i - 'a']++;
        }
    }
}