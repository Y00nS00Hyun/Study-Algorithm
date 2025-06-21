#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar(); // scanf 후 \n 이 남기 때문에 getchar 해서 제거해줘야함

    char T[1000];
    char ch;
    int j = 0;

    for (int i = 0; i < N; i++)
    {
        while ((ch = getchar()) != '\n')
        {
            T[j] = ch;
            j++;
        }

        for (int f = 0; f < j; f++)
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