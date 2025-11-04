import math
import sys
input = sys.stdin.readline

M, N = map(int, input().split())


def sosu(A):
    s = 0
    for i in range(2, int(math.sqrt(A))+1):
        if (A % i == 0):
            s = 1
    if (s == 0):
        print(A)


for i in range(M, N+1):
    sosu(i)
