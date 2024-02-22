/*
임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라.
 예를 들어서 N = 18 일 경우 N = 18, 18 = 2 * 3 * 3
*/
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    printf("%d = ", N);

A:
    for (int i = 2; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d ", i);
            if (N != i)
            {
                printf("* ");
            }
            N = N / i;
            goto A;
        }
    }
}