#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    int x, y;
    int visted[1001];
    scanf("%d %d", &N, &M);

    int arr[1001][1001];
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", x, y);
        arr[x][y] = arr[y][x] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (arr[i][j] == 1 && visted[i] == 1)
            {
                visted[j] = 1;
                break;
            }
        }
    }
}