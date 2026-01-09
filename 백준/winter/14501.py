N = int(input())
schedule = [(0, 0)]

for _ in range(N):
    t, p = map(int, input().split())
    schedule.append((t, p))

daystart = [0]*(N+1)
dp = [0]*(N+2)

for i in range(N, 0, -1):
    zzapN = N
    daystart[i] = 0
    if schedule[i][0] <= N-i+1:
        daystart[i] += schedule[i][1]
        zzapN = zzapN-schedule[i][0]

for i in range(N, 0, -1):
    dp[i] = daystart[i]
    lastday = N-i+1-schedule[i][0]
    if lastday > 0:
        dp[i] += max(dp[N-lastday+1:N+2])

# print("daystart:", daystart)
# print("dp:", dp)
print(max(dp))
