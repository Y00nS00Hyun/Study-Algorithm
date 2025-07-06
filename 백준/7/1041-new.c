#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b; // 오름차순
}

int main()
{
    int dice[6], sum3[8], sum2[12];
    long long N, answer = 0;
    scanf("%lld", &N);

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &dice[i]);
    }

    if (N == 1)
    {
        qsort(dice, 6, 4, compare);
        printf("%d", dice[0] + dice[1] + dice[2] + dice[3] + dice[4]);
        return 0;
    }

    // A:0 B:1 C:2 D:3 E:4 F:5
    sum3[0] = dice[0] + dice[1] + dice[2];
    sum3[1] = dice[0] + dice[1] + dice[3];
    sum3[2] = dice[0] + dice[3] + dice[4];
    sum3[3] = dice[0] + dice[4] + dice[2];
    sum3[4] = dice[5] + dice[1] + dice[2];
    sum3[5] = dice[5] + dice[1] + dice[3];
    sum3[6] = dice[5] + dice[3] + dice[4];
    sum3[7] = dice[5] + dice[4] + dice[2];

    sum2[0] = dice[0] + dice[1];
    sum2[1] = dice[0] + dice[2];
    sum2[2] = dice[0] + dice[3];
    sum2[3] = dice[0] + dice[4];
    sum2[4] = dice[5] + dice[1];
    sum2[5] = dice[5] + dice[2];
    sum2[6] = dice[5] + dice[3];
    sum2[7] = dice[5] + dice[4];
    sum2[8] = dice[1] + dice[2];
    sum2[9] = dice[1] + dice[3];
    sum2[10] = dice[4] + dice[3];
    sum2[11] = dice[4] + dice[2];

    qsort(sum3, 8, 4, compare);
    long long min3 = sum3[0];

    qsort(sum2, 12, 4, compare);
    long long min2 = sum2[0];

    qsort(dice, 6, 4, compare);
    long long min1 = dice[0];

    answer = min3 * 4 + min2 * 4 * (N - 2) + min2 * 4 * (N - 1) + min1 * (N - 2) * (N - 2) + min1 * 4 * (N - 2) * (N - 1);
    printf("%lld", answer);
}