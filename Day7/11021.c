#include <stdio.h>
int main(void)
{
    int T, arr[100000];
    scanf("%d", &T);

    for (int i = 1; i < T + 1; i++)
    {
        scanf("%d %d", &arr[i * 2 - 1], &arr[i * 2]);
    }
    for (int i = 1; i < T + 1; i++)
    {
        printf("Case #%d: %d\n", i, arr[i * 2 - 1] + arr[i * 2]);
    }
}