# 조합으로 도착 지점만 고르면 될 일이었다
import math

T = int(input())

soohyun = 1
for _ in range(T):
    N, M = map(int, input().split())
    print(math.comb(M, N))  # C(M,N)
