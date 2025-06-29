#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    // 1. strlen
    char msg[] = "Hello";
    printf("원본 문자열: %s\n", msg);
    printf("strlen(msg): %zu\n\n", strlen(msg));

    // 2. strcpy
    char src[] = "C Programming";
    char dest1[50]; // 충분한 공간 확보
    strcpy(dest1, src);
    printf("src: %s\n", src);
    printf("dest1 (strcpy): %s\n\n", dest1);

    // 3. strcat
    char prefix[50] = "Language: ";
    char suffix[] = "C";
    printf("prefix: %s\n", prefix);
    printf("suffix: %s\n", suffix);
    strcat(prefix, suffix); // 연결하기
    printf("prefix (strcat): %s\n", prefix);

    return 0;
}