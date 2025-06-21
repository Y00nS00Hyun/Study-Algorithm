#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int soohyun;
    int sum = 0;
    int sum2 = 0;
    int a = 0;

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &soohyun);
        for (int j = 1; j < soohyun; j++)
        {
            if (soohyun % j == 0)
            {
                sum += j;
                // printf("j: %d\n", j);

                for (int k = 1; k < j; k++)
                {
                    if (j % k == 0)
                    {
                        sum2 += k;

                        if (sum2 > j)
                        {
                            a = 1;
                            // printf("요 놈\n");
                        }

                        // printf("k: %d sum2: %d\n", k, sum2);
                    }
                }
                sum2 = 0;
            }
        }
        // printf("약수 합: %d\n", sum);

        if (sum > soohyun && a == 0)
        {
            printf("Good Bye\n");
        }
        else
        {
            printf("BOJ 2022\n");
        }

        sum = 0;
        a = 0;
        sum2 = 0;
    }
}