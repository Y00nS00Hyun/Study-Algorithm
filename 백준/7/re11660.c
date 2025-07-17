#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M, conan;
    long long *arr, sum=0;
    scanf("%d %d", &N, &M);
    arr = (long long*)malloc((N*N)*sizeof(long long));
    scanf("%d", &arr[0]);
    arr[-1]=0;

    for (int i = 1; i < N*N; i++)
    {  
        scanf("%d", &conan);
        arr[i]=arr[i-1]+conan;
    }

    int x1, y1, x2, y2;

    for (int i = 0; i < M; i++)
    {  
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
            for (int j = 0; j <= x2-x1; j++){
            sum +=arr[N*(x2-1-j)+y2-1]-arr[N*(x2-1-j)+y1-2];
            printf("🥶arr[%d]-arr[%d]=%d🥶\n ",N*(x2-1-j)+x2-1,N*(x2-1-j)+x1-2,sum);
        }
        
        printf("👽 %lld 👽",sum);
        sum = 0;
    }
}