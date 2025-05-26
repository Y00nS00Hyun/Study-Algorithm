#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int arr[100];
    int odd_count = 0;
    int even_count = 0;

    srand(time(NULL));

    // 0 ~ 9 사이 난수 100개 생성
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 10; // 10으로 나눴을 때 나머지
    }

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] % 2 == 1)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
    }

    printf("짝수: %d, 홀수: %d", even_count, odd_count);
}
