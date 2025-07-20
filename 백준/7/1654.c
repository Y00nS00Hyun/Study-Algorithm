#include <stdio.h>

long long arr[100000], brr[100000];

int soohyun(int min, int max, int N, long long max_copy) {
    for (int i = min; i < max; i++) {
        for (int j = min; j < max; j++) {
            brr[i] += arr[j] / max;
        }
        max--;
    }

    for (int i = min; i < max; i++) {
        if (brr[i] >= N) {
            printf("정답 %lld", max_copy - i);
            return 0;
        }
    }
    return 0;
}

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
        int mid = (start + end) / 2;

        for (int i = 0; i < K; i++) {
            real += arr[i] / mid;
        }
        printf("mid=%d real=%lld\n", mid, real);

        if (real < N) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }

        real = 0;
    }

   
        printf("start: %d end: %d\n\n", start, end);
    

    soohyun(start, end, N, max_copy);

    return 0;
}
