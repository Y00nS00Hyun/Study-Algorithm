#include <stdio.h>

int main()
{
    // 5의 배수를 제외한 수 출력하기
    for (int i = 0; i < 101; i++)
    {
        if (i % 5 == 0)
        {
            continue;
        }
        else
        {
            printf("%d", i);
        }
    }
    return 0;
}