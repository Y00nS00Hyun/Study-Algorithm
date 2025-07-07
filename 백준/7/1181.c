#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int compare(const void *a, const void *b){
    if(strlen((const char *)a) != strlen((const char *)b)){
        return strlen((const char *)a) - strlen((const char *)b);
    }
    else {
            return strcmp((const char *)a,(const char *)b);
    }
}


int main()
{
    int N;
    scanf("%d", &N);

    char arr[20000][51];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", &arr[i]);
    }
    qsort(arr, N, 51, compare);
    
    for (int i = 0; i < N-1; i++)
    {
        if(strcmp(arr[i],arr[i+1])!=0){
            printf("%s\n", arr[i]);
        }
    }
     printf("%s", arr[N-1]);
}