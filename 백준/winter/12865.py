import sys
input = sys.stdin.readline

N, K = map(int, input().split())

item = [(0, 0)]  # 1번부터 쓰려고 더미 추가
for _ in range(N):
    w, v = map(int, input().split())
    item.append((w, v))

dp = [[0]*(K+1) for _ in range(N+1)]

for i in range(1, N+1):
    w, v = item[i]
    for j in range(0, K+1):
        dp[i][j] = dp[i-1][j]  # i번째 물건을 안 넣는 경우
        if j >= w:
            dp[i][j] = max(dp[i][j], dp[i-1][j-w] + v)  # 넣는 경우

print(dp[N][K])
