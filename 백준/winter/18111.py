N, M, B = map(int, input().split())

Land = [list(map(int, input().split())) for _ in range(N)]

Max = max(map(max, Land))
Min = min(map(min, Land))

SH = [-1]*(Max+1)

for i in range(Min, Max+1):
    count = 0
    BB = B
    for row in Land:
        for v in row:
            if v > i:
                count += 2*(v-i)
            elif v < i:
                count += i-v
                BB -= i-v

    if BB < 0:
        SH[i] = -1
    else:
        SH[i] = count

print(min(x for x in SH[Min:Max+1] if x > 0))
