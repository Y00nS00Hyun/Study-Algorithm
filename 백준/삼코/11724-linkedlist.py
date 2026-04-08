import sys
sys.setrecursionlimit(10**6)
input = sys.stdin.readline

N, M = map(int, input().split())

# 인접 리스트 만들기
line = [[] for _ in range(N+1)]
for i in range(M):
    u, v = map(int, input().split())
    line[u].append(v)
    line[v].append(u)

point = [False]*(N+1)
count = 0


def dfs(v):
    for d in line[v]:
        if point[d] == False:
            point[d] = True
            dfs(d)


for i in range(1, N+1):
    if point[i] == False:
        point[i] = True
        count += 1
        dfs(i)

print(count)
