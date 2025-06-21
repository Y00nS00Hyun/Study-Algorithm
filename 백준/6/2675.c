#include <stdio.h>
#include <string.h>

int main()
{
    int N, j;
    char T[1000];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %s", &j, T);
        int n = strlen(T);

        for (int f = 0; f < n; f++)
        {
            for (int k = 0; k < j; k++)
            {
                printf("%c", T[f]);
                // printf("f: %d, k: %d\n", f, k);
            }
        }
        printf("\n");
        j = 0;
    }
}