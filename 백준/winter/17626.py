import sys
input = sys.stdin.readline

N = int(input())
DP = [5]*(N+1)

i = 1
while i*i <= N:
    DP[i*i] = 1
    i += 1

for i in range(2, N+1):
    if DP[i] == 1:
        continue
    j = 1
    while j*j < i:
        # DP[i] = min(DP[i], DP[j*j]+DP[i-j*j])
        DP[i] = min(DP[i], 1+DP[i-j*j])
        j += 1

print(DP[N])
