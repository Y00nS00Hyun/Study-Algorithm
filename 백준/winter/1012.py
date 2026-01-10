S = int(input())
for _ in range(S):
    M, N, K = map(int, input().split())

    arr = [[0]*(N+2) for _ in range(M+2)]

    for _ in range(K):
        X, Y = map(int, input().split())
        arr[X+1][Y+1] = 1

    for x in range(1, M+1):
        for y in range(1, N+1):
            if arr[x][y] == 1:
                if arr[x+1][y] == 1:
                    arr[x][y] = 0
                elif arr[x][y+1] == 1:
                    arr[x][y] = 0
                elif arr[x-1][y] == 1:
                    arr[x][y] = 0
                elif arr[x][y-1] == 1:
                    arr[x][y] = 0

    count = 0
    for x in range(M+2):
        for y in range(N+2):
            if arr[x][y] == 1:
                count += 1

    print(count)
