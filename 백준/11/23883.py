N, K = map(int, input().split())

arr = list(map(int, input().split()))

for i in range(N-1):
    if (max(arr[:N-i]) != arr[N-1-i]):
        max(arr[:N-i]), arr[N-1-i] = arr[N-1-i], max(arr[:N-i])
        K = K-1
        if (K == 0):
            print(max(arr[:N-i]), arr[N-1-i])
    break

if (K > 0):
    print(-1)
