#include <stdio.h>

int main() {
    int N, K;
    int arr[10000];
    int max, max_index, last, temp;
    int count = 0, change = 0;

    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }

    last = N;
    count = K;

    for (int i = 1; i <= count; i++) {
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
            change++;
        } else {
            count++;
        }

        last--;

        if (last == 1) {
            break;
        }
    }

    if (change < K) {
        printf("-1");
    } else {
        printf("%d %d\n", arr[max_index], arr[last + 1]);
    }
}
