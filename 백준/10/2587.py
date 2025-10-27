arr = [int(input()) for _ in range(5)]

for i in range(5):
    for j in range(5-i-1):
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]

print(sum(arr)//5)
print(arr[2])
