#include <stdio.h>

int main() {
    int A, a, B, b, P;
    scanf("%d %d %d %d %d", &A, &a, &B, &b, &P);

    // 고리들이 판에 들어가는지 검사
    if (A <= P && B <= P) {
        // 나란히 배치가 가능한지
        if (B + A > P) {
            // 포함 가능한지 확인
            if (B > A) {
                if (A <= b) {
                    printf("Yes");
                } else {
                    printf("No");
                }
            } else {
                if (B <= a) {
                    printf("Yes");
                } else {
                    printf("No");
                }
            }
        } else {
            printf("Yes");
        }
    } else {
        printf("No");
    }

    return 0;
}
