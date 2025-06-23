#include <stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE] = {10, 50, 60, 1, 10};
    // 배열크기 (원소의 개수 또는 배열의 길이)
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("배열의 길이: %d개\n", length);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}