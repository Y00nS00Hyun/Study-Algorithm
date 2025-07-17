// 이분 탐색으로 푸는 문제지만 난 걍 계수 정렬로 풀테닷!

#include <stdio.h>
#define OFFSET 10000000    // 배열 인덱스로 음수를 처리하기 위해 더하는 보정값
int count[20000001] = {0}; // count[x + OFFSET]

int main()
{
    int N, M, num;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", num);
        count[i]++;
    }

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
    {
    }
}