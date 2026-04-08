def dfs(v):
    point[line[v]] = True


for i in range(1, N+1):
    if point[i] == False:
        point[i] = True
        count += 1
        dfs(i)

print(count)