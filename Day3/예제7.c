/*
임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라.
 예를 들어서 N = 18 일 경우 N = 18 18 = 2 * 3 * 3
*/
#include <stdio.h>
int main()
{
    int N, n, count = 0;
    int arr[100] = 0;

    printf("자연수를 입력하시오: ");
    scanf("%d", &N);
A:
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            arr[n] = i;
            N = N / i;
            count++;
            goto A;
        }
        else
        {
            break;
        }
    }

    if (count != 0)
    {
        if (arr[n] != 0)
        {
            printf("%d", arr[]);
        }
    }
    else
    {
        printf("%d = 1 * %d", N, N);
    }
    return 0;
}