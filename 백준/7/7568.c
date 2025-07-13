#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    const int *ptr1= (int*)a;
    const int *ptr2= (int*)b;

    return *ptr2-*ptr1;
}



int main() {
    int N, weight[50], height[50], copyw[50], copyh[50];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &weight[i], &height[i]);
    }

    for (int i = 0; i < N; i++)
    {
        copyw[i] = weight[i];
        copyh[i] = height[i];
    }
    
    qsort(copyw,N,4,compare);
    qsort(copyh,N,4,compare);

    int soohyun[50], soorong[50];
    int *pw = copyw;
    int *ph = copyh;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(weight[i] == *(pw+j)){
            soohyun[i]=j+1;
            }
            
            if(height[i] == *(ph+j)){
            soorong[i]=j+1;
            }
        }
    }

    for (int i = 1; i < N+1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(soorong[j]==i ){
                for (int k = 0; k < N; k++){
                    if(soohyun[j]>=soorong[k]&&soorong[k]>=i){
                        soorong[k]=i;
                        for (int i = 0; i < N; i++){
                     }
                 }
                }
            }
        }
        
    }
    

    for (int i = 0; i < N; i++){
        printf("%d ",soorong[i]);
    }
   
}