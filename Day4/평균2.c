#include <stdio.h>
int main() // 전체 학생의 평균 구하기
{
    int total;
    printf("학생 수: ");
    scanf("%d", &total);
    int i, ave = 0;

    int arr[total];
    for (i = 0; i < total; i++)
    {
        printf("%d 번째 학생의 성적은: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < total; i++)
    {
        ave = ave + arr[i];
    }
    printf("%d", ave / total);
    return 0;
}