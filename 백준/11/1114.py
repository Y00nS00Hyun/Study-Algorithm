N = int(input())

arr = [0]*(N+1)

for i in range(1, N+1):
    arr[i] = int(input())

print(*arr[2:4], sep='')
