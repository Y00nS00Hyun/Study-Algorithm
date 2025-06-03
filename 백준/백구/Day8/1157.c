#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000000];
    int alphabet[26] = {0};
    scanf("%s", word);

    int length = strlen(word);

    // 대문자 -> 소문자로 변환
    for (int i = 0; i < length; i++)
    {
        if (word[i] > 95)
        {
            word[i] = word[i] - 97;
            alphabet[word[i]]++;
        }
        else
        {
            word[i] = word[i] - 65;
            alphabet[word[i]]++;
        }
    }

    int max = 0;
    int answer;
    int duplication = 0;

    for (int i = 0; i < 26; i++)
    {
        // printf("%d", alphabet[i]);
        if (max < alphabet[i])
        {
            duplication = 0;
            max = alphabet[i];
            answer = i + 65;
        }
        else if (max == alphabet[i])
        {
            duplication = 1;
        }
    }

    // printf("%d", max);
    if (duplication == 0)
    {
        printf("%c", answer);
    }
    else
    {
        printf("?");
    }
}