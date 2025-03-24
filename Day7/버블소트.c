// 버블소트 내림차순 정렬
#include <stdio.h>
int main(void)
{
    int arr[5] = {0};
    int sh;
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for (int i = 0; i < 4; i++) // 비교 횟수
    {
        for (int j = 0; j < 4 - i; j++) // 비교용 인덱스스
        {
            if (arr[j] < arr[j + 1])
            {
                sh = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = sh;
            };
        }
    }

    printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
}
