#include <stdio.h>

long long arr[10000], brr[10000];

int main() {
    long long N;
    long long max, max_index, last, temp;
    long long soohyun = 0;

    scanf("%lld", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 1; i <= N; i++) {
        scanf("%lld", &brr[i]);
    }

    // ✅ 초기 상태 비교
    for (int k = 1; k <= N; k++) {
        if (arr[k] == brr[k]) {
            soohyun++;
        }
    }

    if (soohyun == N) {
        printf("1");
        return 0;
    }
    soohyun = 0;

    last = N;

    for (int i = 1; i <= N; i++) {
        max = arr[1];
        max_index = 1;

        for (int j = 1; j <= last; j++) {
            if (arr[j] > max) {
                max = arr[j];
                max_index = j;
            }
        }

        if (max != arr[last]) {
            temp = arr[last];
            arr[last] = arr[max_index];
            arr[max_index] = temp;
        }

        last--;

        for (int k = 1; k <= N; k++) {
            if (arr[k] == brr[k]) {
                soohyun++;
            }
        }

        if (soohyun == N) {
            printf("1");
            return 0;
        }

        soohyun = 0;
    }

    printf("0");
}
