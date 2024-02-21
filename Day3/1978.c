#include <stdio.h>
int main()
{
    int n, m, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);

        for (int k = 2; k < m; k++)
        {
            if (m % k == 0)
            {
                count++;
                break;
            }
        }
        if (m == 1)
        {
            count = count + 1;
        }
    }

    printf("%d", n - count);
    return 0;
}