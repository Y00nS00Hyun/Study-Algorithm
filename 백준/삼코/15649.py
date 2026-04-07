N, M = list(map(int, input().split()))
arr = [False]*N


def soohyun(depth, now):

    if depth == M:
        for k in range(i, N):
            if arr[k] == True:
                print(k+1, end=" ")
        for k in range(0, i):
            if arr[k] == True:
                print(k+1, end=" ")
        print("")

    for i in range(N):
        if arr[i] == False:
            arr[i] = True
           # print(arr)
            soohyun(depth + 1, i+1)
            arr[i] = False


soohyun(0, 0)
