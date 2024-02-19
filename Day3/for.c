#include <stdio.h>

int main()
{ // 과목의 평균
    int subject, score, sum = 0;
    printf("몇개의 과목을 입력 받을건가요?  ");
    scanf("%d", &subject);

    for (int i = 0; i < subject; i++)
    {
        printf("과목 %d 점수: ", i + 1);
        scanf("%d", &score);
        sum = sum + score;
    }
    printf("평균 점수: %d\n", sum / subject);

    if (sum / subject > 90)
    {
        printf("천재!");
    }
    else
    {
        printf("바보!");
    }
    return 0;
}