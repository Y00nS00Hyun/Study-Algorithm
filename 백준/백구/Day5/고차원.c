#include <stdio.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("2행 3열: %d\n", arr[1][2]);
    printf("1행 2열: %d\n", arr[0][1]); // -1 하기

    return 0;
}