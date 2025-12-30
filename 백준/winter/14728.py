N, T = map(int, input().split())

TimeScore = [(0, 0)]

for _ in range(N):
    K, S = map(int, input().split())
    TimeScore.append((K, S))

dp = [[0]*(T+1) for _ in range(N+1)]

for i in range(1, N+1):
    K, S = TimeScore[i]
    for j in range(T+1):
        dp[i][j] = dp[i-1][j]
        if j >= K:
            dp[i][j] = max(dp[i][j], dp[i-1][j-K]+S)

print(dp[N][T])
