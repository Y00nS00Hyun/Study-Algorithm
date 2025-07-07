#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} coordinate;

//👽
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

    printf("\n좌표 정렬 결과\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d %d\n", soohyun[i].x, soohyun[i].y);
    }

    int a, b, X, Y, Z;
    int count = 0;

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 1; j < N - 1; j++)
        {
            if (i < j)
            {
                a = soohyun[i].x - soohyun[j].x;
                b = soohyun[i].y - soohyun[j].y;
                X = a * a + b * b;

                for (int k = 2; k < N; k++)
                {
                    if (i < k && j < k)
                    {
                        a = soohyun[j].x - soohyun[k].x;
                        b = soohyun[j].y - soohyun[k].y;
                        Y = a * a + b * b;

                        a = soohyun[i].x - soohyun[k].x;
                        b = soohyun[i].y - soohyun[k].y;
                        Z = a * a + b * b;

                        if (X + Y == Z || X + Z == Y || Z + Y == X)
                        {
                            count++;
                        }
                        printf("i: %d j: %d k: %d\n", i + 1, j + 1, k + 1);
                        printf("X: %d Y: %d Z: %d\n\n", X, Y, Z);
                    }
                }
            }
        }
    }

    printf("%d", count);
}