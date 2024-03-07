// 단어의 길이는 최대 20, 문장의 길이는 최대 1000

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // scanf 후 남은 개행 문자 소비
    char temp;
    char str[1000];

    for (int i = 0; i < n; i++)
    {
        int top = 0;
        gets(str);
        int length = strlen(str);

        for (int k = 0; k <= length; k++)
        {
            if (str[k] == ' ' || str[k] == '\0')
            {
                for (int p = k - 1; p >= top;)
                {
                    temp = str[p];
                    str[p] = str[top];
                    str[top] = temp;
                    top++;
                    p--;
                }
                top = k + 1;
            }
        }

        for (int i = 0; i < length; i++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}