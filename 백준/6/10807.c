#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, arr[100], v, soohyun = 0;
    int *ptr = &arr[0];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < N; i++)
    {
        if (*(ptr + i) == v)
        {
            soohyun++;
        }
    }
    printf("%d", soohyun);
}