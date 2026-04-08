N, M = map(int, input().split())

# 인접 리스트 만들기
line = [[] for _ in range(N+1)]
for i in range(M):
    u, v = map(int, input().split())
    line[u].append(v)

print(line)
