#include <stdio.h>
#include <stdlib.h>

long long arr[100000];
int main(){
    int N, M, i, j;
    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++)
    {  
        scanf("%lld", &arr[i]);
        arr[i] +=arr[i-1];
    }

    for (int s = 1; s <= M; s++)
    {  
        scanf("%d %d", &i, &j);
        printf("%d\n", arr[j]-arr[i-1]);
    }
}