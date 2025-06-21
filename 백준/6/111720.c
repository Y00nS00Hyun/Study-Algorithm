#include <stdio.h>
#include <string.h>
int main()
{

    int N;
    scanf("%d", &N);
    char c;
    int sum = 0;

    getchar(); // 버퍼에 남은 '\n' 제거

    for (int i = 0; i < N; i++)
    {
        c = getchar();
        sum += c;
    }

    printf("%d", sum - 48 * N);

    return 0;
}