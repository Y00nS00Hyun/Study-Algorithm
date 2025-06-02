#include <stdio.h>
#define SIZE 6

int main(void)
{
    double score[] = {89.3, 79.2, 84.83, 76.8, 92.52, 97.4};
    /*
    이건 오류
    double score[6];
    score[6]={89.3, 79.2, 84.83, 76.8, 92.52, 97.4};

    score[0]=89.3 이렇게 넣어야 함
    */
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        sum += score[i];
    }

    printf("%.2f ", sum / SIZE);
    return 0;
}
