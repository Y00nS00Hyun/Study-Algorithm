#include <stdio.h>
#define SIZE 5

int main(void)
{
    int score[SIZE];
    score[0] = 78;
    score[1] = 95;
    score[2] = 105;
    score[4] = 53;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", score[i]);
    }
    return 0;
}
