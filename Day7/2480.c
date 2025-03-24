// 단순순 내림차순 정렬
#include <stdio.h>
int main(void)
{
    int arr[3] = {0};
    int sh;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i] < arr[j])
            {
                sh = arr[i];
                arr[i] = arr[j];
                arr[j] = sh;
            };
        }
    }

    printf("%d %d %d", arr[0], arr[1], arr[2]);
}
