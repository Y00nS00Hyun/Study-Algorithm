N = int(input())
arr = N*[0]
j = 0
for i in range(N):
    sh = int(input())
    if sh != 0:
        arr[j] = sh
        j += 1
    else:
        print(max(arr))
        arr.remove(max(arr))
