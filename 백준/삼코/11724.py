N, M = map(int, input().split())
line = [list(map(int, input().split())) for _ in range(M)]
point = [False]*(N+1)
count = 0


def dfs(v):
    for j in range(M):
        if line[j][0] == v and point[line[j][1]] == False:
            point[line[j][1]] = True
            dfs(line[j][1])
        if line[j][1] == v and point[line[j][0]] == False:
            point[line[j][0]] = True
            dfs(line[j][0])


for i in range(1, N+1):
    if point[i] == False:
        point[i] = True
        count += 1
        dfs(i)

print(count)
