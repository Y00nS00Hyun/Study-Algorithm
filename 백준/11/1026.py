N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

sortedA = sorted(A)
sortedB = sorted(B, reverse=True)

sum = 0

for i in range(N):
    sum += sortedA[i]*sortedB[i]

print(sum)
