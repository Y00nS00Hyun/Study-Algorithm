#include <stdio.h>

void selectionsort(int arr[], int n){
    int min_idx, temp;
    for(int i=0; i<n-1; i++){
        min_idx=i;
        for(int j=i+1; j<n; i++){
             if(arr[j]<arr[min_idx]){
                min_idx=arr[j];
                }
            }
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;

        for(int k=0; k<n; k++){
            printf("%d", arr[k]);
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 6, 2};  // 테스트할 배열
    int n = sizeof(arr) / sizeof(arr[0]);  // 배열 크기 계산

    selectionsort(arr, n);
    return 0;
}