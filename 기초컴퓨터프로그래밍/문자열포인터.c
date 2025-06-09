#include <stdio.h>

int main()
{
    char *p = "soohyun";
    printf("%s\n", p);

    int i = 0;
    while (*(p + i) != '\0')
    {
        printf("%c", *(p + i));
        i++;
    }
    printf("\n");

    i = 0;
    while (p[i])
    {
        printf("%c", p[i++]);
    }

    // 문자열 수정 불가 -> 오류 발생
    p[1] = 'A';
    printf("%c", p[1]);

    return 0;
}