#include <stdio.h>
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // 또는 int *p = &arr[0];
    printf("배열 요소 출력 (배열 인덱스 방식):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // 배열 인덱스 접근
    }
    printf("\n배열 요소 출력 (포인터 방식):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i)); // 포인터 연산으로 접근
    }
    printf("\n배열 요소 출력 (포인터 이동 방식):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *p); // 현재 가리키는 값 출력
        p++;               // 다음 요소로 포인터 이동
    }
    printf("%d\n", *p); // 마지막 이동으로 인해 p는 배열을 벗어난 위치가 되므로 주의
    return 0;
}