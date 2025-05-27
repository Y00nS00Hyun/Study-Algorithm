#include <stdio.h>

int main(void)
{
    int scores[5][2] = {{80, 75}, {46, 23}, {63, 98}, {16, 0}, {92, 96}};
    double average[5];
    int mid_sum = 0;
    int final_sum = 0;

    printf(" 번호  | 중간시험 | 기말시험 | 개인평균\n");
    printf("------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        average[i] = (double)(scores[i][0] + scores[i][1]) / 2;
        printf("  %2d    |   %2d   |   %2d   |   %.2f\n", i + 1, scores[i][0], scores[i][1], average[i]);
        mid_sum += scores[i][0];
        final_sum += scores[i][1];
    }
    printf("------------------------------\n");
    printf(" 평균   |  %.2f  |  %.2f\n", (double)mid_sum / 5, (double)final_sum / 5);
    printf("------------------------------\n");

    int who;
    double max = average[0];
    for (int i = 0; i < 5; i++)
    {
        if (average[i] > max)
        {
            max = average[i];
            who = i;
        }
    }
    printf("1등: %d번", who + 1);
}