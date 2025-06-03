#include <stdio.h>
int main(void)
{
    float C, a, b[1000], sum, d, score, number, e[1000];

    scanf("%f", &C);
    for (int i = 0; i < C; i++)
    {
        sum = 0, d = 0; // 초기화 안시켜주면 계속 값이 중첩돼서 잘못된 값이 나옴
        scanf("%f", &a);
        for (int j = 0; j < a; j++)
        {
            scanf("%f", &b[j]);
            sum += b[j];
        }
        score = sum / a;
        for (int k = 0; k < a; k++)
        {
            if (score < b[k])
            {
                d++;
            }
            number = 100 * d / a;
        }
        e[i] = number;
    }

    for (int l = 0; l < C; l++)
    {
        printf("%.3f%%\n", e[l]);
    }
}
