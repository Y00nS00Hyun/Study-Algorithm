#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b){
    return(*(long long*)a-*(long long*)b);
}

int main()
{
    int N;
    long long *arr;
    scanf("%d", &N);
    
    arr=(long long*)malloc(N*sizeof(long long));

    for (int i = 0; i < N; i++)
    {
    scanf("%lld", &arr[i]);
    }

    qsort(arr, N, sizeof(long long), compare);
    
    for (int i = 0; i < N; i++)
    {
    printf("%lld ", arr[i]);
    }

    free(arr);
}