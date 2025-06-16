#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coordinate;

int compare(const void *a, const void *b)
{
    // 포인터로 형변환
    coordinate *A = (coordinate *)a;
    coordinate *B = (coordinate *)b;

    if (A->x > B->x)
    {
        return 1;
    }
    else if (A->x < B->x)
    {
        return -1;
    }
    else
    {

        if (A->y > B->y)
        {
            return 1;
        }
        else if (A->y < B->y)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    coordinate *Mikong = (coordinate *)malloc(sizeof(coordinate) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &Mikong[i].x, &Mikong[i].y);
    }

    qsort(Mikong, N, sizeof(coordinate), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", Mikong[i].x, Mikong[i].y);
    }

    free(Mikong);
}