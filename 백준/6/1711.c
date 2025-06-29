#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coordinate;

int compare(const void *a, const void *b)
{
    const coordinate *p1 = (const coordinate *)a;
    const coordinate *p2 = (const coordinate *)b;

    if (p2->x != p1->x)
    {
        return p1->x - p2->x;
    }
    else
    {
        return p1->y - p2->y;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    coordinate soohyun[1500];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &soohyun[i].x, &soohyun[i].y);
    }

    qsort(soohyun, N, sizeof(coordinate), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", soohyun[i].x, soohyun[i].y);
    }
}