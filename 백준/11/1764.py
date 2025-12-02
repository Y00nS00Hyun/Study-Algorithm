N, M = map(int, input().split())

A = set()
B = set()

for _ in range(N):
    A.add(input())

for _ in range(M):
    B.add(input())

C = sorted(A & B)

print(len(C))

for name in C:
    print(name)
