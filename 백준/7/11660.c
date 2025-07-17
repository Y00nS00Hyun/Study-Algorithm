#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M, *arr, sum;
    scanf("%d %d", &N, &M);
    arr = (int*)malloc((N*N+1)*sizeof(int));

    for (int i = 1; i <= N*N; i++)
    {  
        scanf("%d", &arr[i]);
    }

    int x1, y1, x2, y2, a, b;

    for (int i = 0; i < M; i++)
    {  
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        sum = 0;
        for (int j = x1; j <= x2; j++)
        {
            for (int k = y1; k <= y2; k++)
            {
                sum += arr[N*(k-1)+j];
                // printf("x: %d y: %d\n",j, k);
            }
        }
        printf("👽 %d 👽",sum);
    }
}