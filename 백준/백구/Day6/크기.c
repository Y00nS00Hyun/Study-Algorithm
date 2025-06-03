#include <stdio.h>
int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("전체크기: %d\n", sizeof(arr));
    printf("열의 개수: %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("행의 개수: %d\n", sizeof(arr) / sizeof(arr[0]));

    printf("%p, %p", arr[0], &arr[0][0]);
    // arr = &arr[0], arr[0] = &arr[0][0]
}