#include <stdio.h>
#include <string.h>

int main()
{
    char soohyun[51];
    scanf("%s", soohyun); // 55-50+40
    int len = strlen(soohyun);
    int num = 0, sum = 0, flag = 0;
    soohyun[len] = '+';

    for (int i = 0; i <= len; i++)
    {
        if (soohyun[i] >= '0' && '9' >= soohyun[i])
        {
            num = num * 10 + soohyun[i] - '0';
            // printf("%d\n", num);
        }
        else if (soohyun[i] == '-')
        {
            if (flag == 0)
            {
                sum += num;
                num = 0;
            }
            else
            {
                sum -= num;
                num = 0;
            }
            flag = 1;
        }
        else if (soohyun[i] == '+')
        {
            if (flag == 1)
            {
                sum -= num;
            }
            else
            {
                sum += num;
            }
            num = 0;
        }
    }

    printf("%d", sum);
}