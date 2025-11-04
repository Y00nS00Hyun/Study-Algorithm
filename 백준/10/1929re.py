import sys
input = sys.stdin.readline

M, N = map(int, input().split())

# 0-> 소수, 1-> 소수아님
sosu = [0]*(N+1)
sosu[0] = sosu[1] = 1

p = 2
while p*p <= N:
    if sosu[p] == 0:
        for i in range(p*p, N+1, p):
            sosu[i] = 1
    p += 1

for i in range(M, N + 1):
    if sosu[i] == 0:
        print(i)
