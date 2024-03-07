/*
숫자 10개를 입력받고 정렬되기 전의 값과 정렬된 후의 값을 출력하는 프로그램을 작성하세요.
*/
#include <stdio.h>
#define min(i, j) (((i) < (j) ? (i) : (j)))
int main()
{
    int arr[10];
    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("정렬 전 : ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("정렬 후 : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}