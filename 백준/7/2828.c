#include <stdio.h>

int main()
{
    int N, M, J;
    scanf("%d %d", &N, &M);
    scanf("%d", &J);

    int apple;
    int front = 1, rear = M, distance = 0;

    for (int i = 0; i < J; i++)
    {
        scanf("%d", &apple);
        if (apple > rear) // 오른쪽
        {
            distance += apple - rear;
            rear = apple;
            front = apple - M + 1;
        }
        else if (apple <= rear & apple >= front) // 중간
        {
        }
        else // 왼쪽
        {
            distance += front - apple;
            front = apple;
            rear = apple + M - 1;
        }
    }

    printf("%d", distance);
}