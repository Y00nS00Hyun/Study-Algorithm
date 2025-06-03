#include <stdio.h>

int main()
{
    int i;
    printf("내가 생각한 숫자가 뭔지 맞춰보셈뇸\n");
    for (;;)
    {
        scanf("%d", &i);
        if (i == 3)
        {
            printf("정답\n");
            break;
        }
        else
        {
            printf("아니지롱\n");
        }
    }
    return 0;
}