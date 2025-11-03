N, M = map(int, input().split())
# 히히

A = [list(map(int, input().strip())) for _ in range(N)]
B = [list(map(int, input().strip())) for _ in range(N)]

for i in range(N*M):
    if A[i] != B[i]:
        A[i], A[i+1], A[i+2], A[i+M], A[i+M+1],
        A[i + M+2], A[i+2*M], A[i+2*M+1], A[i+2*M+2] -> 0, 1 교환하고 옆으로 쭉쭉 가기
