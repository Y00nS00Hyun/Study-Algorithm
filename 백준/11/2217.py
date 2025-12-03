N = int(input())
A = []
B = []
for i in range(N):
    A.append(int(input()))

A = sorted(A)

for i in range(N):
    B.append(A[i]*(N-i))

print(max(B))
