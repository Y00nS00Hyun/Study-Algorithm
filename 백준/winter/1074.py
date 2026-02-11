N, r, c = map(int, input().split())
r += 1
c += 1
visit = 0

while (r != 1 and c != 1):
    if (r < 2**(N-1)):
        if (c >= 2**(N-1)):  # 3번
            c -= 2**(N-1)
            visit += (2**(2*N-2))*2
    else:
        r -= 2**(N-1)
        if (c >= 2**(N-1)):  # 4번
            c -= 2**(N-1)
            visit += (2**(2*N-2))*3
        else:  # 2번
            visit += 2**(2*N-2)
    N -= 1

print(visit)
