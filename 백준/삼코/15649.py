N, M = list(map(int, input().split()))
arr = [False]*N
print(arr)


def soohyun(depth, now):
    if depth == M:
        for i in range(len(arr)):
            if arr[i] == True:
                print(i+1)
        return

    for i in range(M):
        if arr[i] == False:
            arr[i] = True
            soohyun(depth + 1, i+1)
            arr[i] = False


soohyun(0, 0)
