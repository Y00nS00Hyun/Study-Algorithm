#include <stdio.h>
int main(void)
{
    float kill, death, assist, kda;
    scanf("%f/%f/%f", &kill, &death, &assist);
    if (death != 0)
    {
        printf("입력 ㄱㄱㄱ");
        kda = (kill + assist) / death;
        printf("당신의 KDA 비율은 %.2f 입니다\n", kda);
    }
    else
    {
        printf("🚫\n", kda);
    }
}