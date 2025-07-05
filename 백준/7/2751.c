#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b){
    return(*(int*)a-*(int*)b);
}

int main()
{
    int N;
    int *arr;
    scanf("%d", &N);
    
    arr=(int*)malloc(N*sizeof(int));

    for (int i = 0; i < N; i++)
    {
    scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);
    
    for (int i = 0; i < N; i++)
    {
    printf("%d ", arr[i]);
    }

    free(arr);
}