#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int arr[100];
    int count[10] = {0};
    srand(time(NULL));

    // 배열 초기화: 0~9 사이 난수
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 10;
    }

    // TODO: 각 숫자의 등장 횟수 세기
    for (int j = 0; j < 100; j++)
    {
        for (int i = 1; i < 11; i++)
        {
            if (arr[j] == i)
                count[i - 1]++;
        }
    }

    // 결과 출력
    for (int i = 0; i < 10; i++)
    {
        printf("%d: %2d회\n", i, count[i]);
    }
    return 0;
}
