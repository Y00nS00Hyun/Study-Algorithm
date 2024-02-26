#include <stdio.h>
int main()
{
    int arr[5], tot = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("성적: "); // 헷갈리지 말기
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        tot = tot + arr[i];
    }
    printf("%d", tot / 5);
    return 0;
}