N, M = map(int, input().split())

arr = [[] for _ in range(N)]
for i in range(M):
    u, v = map(int, input().split())
    arr[u].append(v)
    arr[v].append(u)
