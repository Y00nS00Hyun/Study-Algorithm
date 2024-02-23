// 단어의 길이는 최대 20, 문장의 길이는 최대 1000

#include <stdio.h>
#include <string.h>
int main()
{
    int n, length, count = 0;
    scanf("%d", &n);
    getchar(); // scanf 후 남은 개행 문자 소비

    for (int i = 0; i < n; i++)
    {
        char str[1000];
        gets(str);

        int length = strlen(str);
        for (int k = 0; k < length; k++)
        {
            str[length - k] = str[length];
            printf("%s", str);
        }
    }
}