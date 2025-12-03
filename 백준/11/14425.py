N, M = map(int, input().split())
S = set()
B = set()

for i in range(N):
    S.add(input())

count = 0

for i in range(M):
    if input() in S:
        count += 1

print(count)
