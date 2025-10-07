N, K = map(int, input().split())

soohyun=[]

for n in range(N):
    if N%(n+1) == 0:
        soohyun.append(n+1)

print(soohyun[K-1])