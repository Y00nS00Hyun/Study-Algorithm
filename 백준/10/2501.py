N, K = map(int, input().split())

soohyun=[]

for n in range(N):
    if N%(n+1) == 0:
        soohyun.append(n+1)

if len(soohyun)<K:
    print(0)
else:
    print(soohyun[K-1])
