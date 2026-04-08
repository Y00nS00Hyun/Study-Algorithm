N, M = map(int, input().split())
line = [list(map(int, input().split()) for _ in range(M))]
point = [False]*(N+1)
count = 0


def dfs(v):
    global count
    for i in range(v, N+1):
        if point[i] == False:
            point[i] = True
            for j in range(M):
                if line[j][0] == i:
                    point[line[j][1]] = True
                    dfs(line[j][1])
                if line[j][1] == i:
                    point[line[j][0]] = True
                    dfs(line[j][0])
            count += 1


dfs(1)
print(count)
