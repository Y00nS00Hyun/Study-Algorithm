#include <stdio.h>
#include <string.h>
int main()
{
    // 1. 문자열 상수를 직접 비교
    printf("%d\n", strcmp("apple", "apple"));
    printf("%d\n", strcmp("apple", "banana"));
    printf("%d\n", strcmp("banana", "apple"));
    printf("%d\n", strcmp("app", "apple"));
    printf("%d\n", strncmp("app", "apple", 3));

    // 2. 문자열 배열 변수 사용
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "app";
    char str4[] = "apple";
    printf("%d\n", strcmp(str1, str4));
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str2, str1));
    printf("%d\n", strcmp(str3, str1));
    printf("%d\n", strncmp(str3, str1, 3));

    // 3. 문자열 상수 포인터 사용
    char *p1 = "apple";
    char *p2 = "banana";
    char *p3 = "app";
    char *p4 = "apple";
    printf("%d\n", strcmp(p1, p4));
    printf("%d\n", strcmp(p1, p2));
    printf("%d\n", strcmp(p2, p1));
    printf("%d\n", strcmp(p3, p1));
    printf("%d\n", strncmp(p3, p1, 3)); // 앞의 문자 3개를 비교하겠단 뜻 app=app

    return 0;
}