S = int(input())
for _ in range(S):
    M, N, K = map(int, input().split())

    arr = [[0]*(N+2) for _ in range(M+2)]

    for _ in range(K):
        X, Y = map(int, input().split())
        arr[X+1][Y+1] = 1

    def dfs(xx, yy):
        arr[xx][yy] = 0
        stack = [(xx, yy)]
        while stack:
            x, y = stack.pop()
            if arr[x+1][y] == 1:
                arr[x+1][y] = 0
                stack.append((x+1, y))
            if arr[x][y+1] == 1:
                arr[x][y+1] = 0
                stack.append((x, y+1))
            if arr[x-1][y] == 1:
                arr[x-1][y] = 0
                stack.append((x-1, y))
            if arr[x][y-1] == 1:
                arr[x][y-1] = 0
                stack.append((x, y-1))

    count = 0
    for x in range(M+2):
        for y in range(N+2):
            if arr[x][y] == 1:
                count += 1
                dfs(x, y)

    print(count)
