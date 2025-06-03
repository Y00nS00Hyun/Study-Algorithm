#include <stdio.h>
int main()
{
    int N = 0, i, temp, arr[1000];
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 버블소트 정렬하기
    for (i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}