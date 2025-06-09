#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 문자열 선언과 출력력
    char soohyun = 'A';
    printf("%c %d\n", soohyun, soohyun);

    // 문자열 선언 방법1
    char java[] = {'j', 'a', 'v', 'a', '\0'};
    printf("%s\n", java);

    // 문자열 선언 방법2
    char mikong[] = "mikongbabo";
    printf("%s\n", mikong);

    // 문자열 선언 방법3
    char kingkong[10] = "king";
    printf("%s\n", kingkong);

    // 문자열 배열에서 문자 출력
    printf("%c %c\n", kingkong[0], kingkong[1]);
}