#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long arr[91];
    long long *ptr = &arr[0];

    *ptr = 0;
    *(ptr + 1) = 1;
    for (int i = 1; i < 90; i++)
    {
        *(ptr + i + 1) = *(ptr + i - 1) + *(ptr + i);
    }

    printf("%lld", *(ptr + n));
}