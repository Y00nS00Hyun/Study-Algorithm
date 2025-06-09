#include <stdio.h>
#include <string.h>
int main()
{

    char S[100];
    char *ptr = S;
    int i = 0;

    while (1)
    {
        S[i] = getchar();
        if (*(ptr + i) == '\n')
        {
            break;
        }
        else
        {
            // printf("%c", S[i]);
            i++;
        }
    }

    int alphabet[26];
    for (int j = 0; j < 26; j++)
    {
        alphabet[j] = -1;
    }

    i = 0;
    while (S[i] != '\n')
    {
        if (alphabet[S[i] - 97] == -1)
        {
            alphabet[S[i] - 97] = i;
        }
        i++;
    }

    i = 0;

    for (int k = 0; k < 26; k++)
    {
        printf("%d ", alphabet[k]);
    }

    return 0;
}