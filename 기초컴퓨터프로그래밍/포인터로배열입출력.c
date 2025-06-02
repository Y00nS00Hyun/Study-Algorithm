#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int arr[5];
    int *p = arr;
    int size = sizeof(arr) / sizeof(arr[0]); // 배열 길이

    // TODO. for 문을 이용해 정수 5개 입력(scanf)
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }

    // TODO. for 문을 이용해 입력된 값 출력
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");

    // TODO. for 문을 이용해 역순으로 출력
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + 4 - i));
    }

    return 0;
}