// 버블소트 내림차순 정렬 -> 정렬 된 값으로 비교교
#include <stdio.h>
int main(void)
{
    int arr[3] = {0};
    int sh;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                sh = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = sh;
            };
        }
    }

    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        printf("%d", 10000 + arr[0] * 1000);
    }
    else if ((arr[0] == arr[1] && arr[0] != arr[2]) || (arr[1] == arr[2] && arr[0] != arr[2]))
    {
        printf("%d", 1000 + arr[1] * 100);
    }
    else
    {
        printf("%d", arr[0] * 100);
    }
}