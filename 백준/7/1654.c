#include <stdio.h>
long long arr[1000000];

int main() {
    int K,N;
    long long sum=0;
    scanf("%d %d", &K, &N);

    for (int i = 0; i < K; i++)
    {
        scanf("%lld", &arr[i]);
        sum+=arr[i];
    }
    printf("%d", sum);

    
}