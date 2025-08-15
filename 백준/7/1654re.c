#include <stdio.h>

long long arr[1000000], brr[1000000];

int main() {
    int K, N;
    long long sum = 0, max, max_copy, real = 0, answer;
    scanf("%d %d", &K, &N);

    for (int i = 0; i < K; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    max = sum / N;
    max_copy = max;

    int start = 1, end = max;

    while (start <= end) {
        real = 0;
        long long mid = (start + end) / 2;

        for (int i = 0; i < K; i++) {
            real += arr[i] / mid;
        }

        if (real < N) {
            end = mid - 1;
        } else {
            start = mid + 1;
            answer =mid;
        }
    }
      printf("%lld", answer);

    return 0;
}
