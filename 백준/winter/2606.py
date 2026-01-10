N = int(input())
K = int(input())

graph = [[] for _ in range(N+1)]

for i in range(K):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

TrueOrFalse = [False]*(N+1)


def dfs(x):
    TrueOrFalse[x] = True
    for next in graph[x]:
        if TrueOrFalse[next] == False:
            dfs(next)


dfs(1)
print(sum(TrueOrFalse)-1)
