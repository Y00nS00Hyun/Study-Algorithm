#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char name[20], dept[30];
    int snum;
    printf("scanf 입력) 학번 이름 학과 입력 >>\n");
    scanf("%d %s %s", &snum, dept, name);
    printf("출력: %d %s %s\n", snum, dept, name);

    char line[101]; // 최대 100글자
    printf("gets 입력) 학번 이름 학과 입력 (종료 ctrl + z [Enter])>>\n");
    while (gets(line) != NULL)
        puts(line);
    printf("\n");

    printf("gets_s 입력) 학번 이름 학과 입력 (종료 ctrl + z [Enter])>>\n");
    while (gets_s(line, 101) != NULL)
        puts(line);
    printf("\n");

    return 0;
}