#include <stdio.h>

int arr[1025][1025];

int main() {
    int N, M, x1, y1, x2, y2, sum;
    scanf("%d %d", &N, &M);

    // 원본 값 입력 받기
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 세로 방향 누적 합
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            arr[i][j] += arr[i - 1][j];
        }
    }

    // 가로 방향 누적 합
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            arr[i][j] += arr[i][j - 1];
        }
    }

    for (int i = 0; i < M; i++) {  
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        sum = arr[x2][y2] 
            - arr[x1 - 1][y2] 
            - arr[x2][y1 - 1] 
            + arr[x1 - 1][y1 - 1];
        printf("%d\n", sum);
    }

    return 0;
}
