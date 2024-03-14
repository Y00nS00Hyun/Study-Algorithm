#include <stdio.h>
int main()
{
    // 7개의 숫자 입력받아서 큰 수 부터 정렬하기

    int i, j, temp, arr[7];

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}