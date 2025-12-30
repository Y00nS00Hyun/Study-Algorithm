N, T = map(int, input().split())

TimeScore = [(0, 0)]

for _ in range(N):
    K, S = map(int, input().split())
    TimeScore.append((K, S))

for i in range(N):
    for j in range(T):
