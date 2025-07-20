#include <stdio.h>

long long arr[1000000], brr[1000000];

int main() {
    int K, N;
    long long sum = 0, max, max_copy, real = 0;
    scanf("%d %d", &K, &N);

    for (int i = 0; i < K; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    max = sum / N;
    max_copy = max;

    int start = 1, end = max;

    while (start < end) {
        real = 0;
        long long mid = (start + end) / 2;

        for (int i = 0; i < K; i++) {
            real += arr[i] / mid;
        }

        if (real < N) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    long long test[3]={0};
    long long answer=test[0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < K; j++) {
            test[i] += arr[j] / (start-i+1);
        }

        if(test[i]!=N){
            test[i]=-1;
        }
        
        if(test[i]>answer){
            answer=start-i+1;
        }
    }
      printf("%lld", answer);

    return 0;
}
